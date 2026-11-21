/-!
Regression tests for `omega` typeclass-instance checking (`+inst`),
`getDecLevel` on `Prod.mk`, nested `Nat` subtraction, and `Fin` moduli.
-/

namespace OmegaInstancesTest

set_option warn.classDefReducibility false in
private def weirdLT : LT Nat := ⟨fun a b => b < a⟩
set_option warn.classDefReducibility false in
private def weirdAdd : HAdd Int Int Int := ⟨fun a b => a - b⟩
set_option warn.classDefReducibility false in
private def weirdMin : Min Int := ⟨fun a b => a + b⟩

-- Non-`instance_reducible` custom instances are cleanly skipped instead of crashing
-- with a kernel `(application type mismatch)` error.
#guard_msgs in
example {x y : Nat} (_ : @LT.lt Nat weirdLT x y) (_ : y < x) : True := by
  fail_if_success omega
  trivial

#guard_msgs in
example {x y : Int} (_ : @HAdd.hAdd Int Int Int weirdAdd x y < 0) : True := by
  fail_if_success omega
  trivial

#guard_msgs in
example {x y : Int} (_ : @min Int weirdMin x y < 0) : True := by
  fail_if_success omega
  trivial

-- Instances reducible at `.instances` transparency (`@[instance_reducible]`) still succeed.
private structure MyPreorder (α : Type) where
  lt : α → α → Prop
  le : α → α → Prop

@[instance_reducible] private def natPreorderToLT (p : MyPreorder Nat) : LT Nat := ⟨p.lt⟩
@[instance_reducible] private def natPreorderToLE (p : MyPreorder Nat) : LE Nat := ⟨p.le⟩
@[instance_reducible] private def myNatPreorder : MyPreorder Nat := ⟨Nat.lt, Nat.le⟩
@[instance_reducible] private def myIntAdd : HAdd Int Int Int := instHAdd

#guard_msgs in
example {x y : Nat} (h1 : @LT.lt Nat (natPreorderToLT myNatPreorder) x y)
    (h2 : @LE.le Nat (natPreorderToLE myNatPreorder) y x) : False := by
  omega

#guard_msgs in
example {x y : Int} (h1 : @HAdd.hAdd Int Int Int myIntAdd x y < 0) (h2 : 0 ≤ x) (h3 : 0 ≤ y) :
    False := by
  omega

-- Universe-polymorphic `Prod.mk` in `Type 2` (exercises `getDecLevel`).
#guard_msgs in
example {α : Type 2} (v : α) {x y : Int} (h : (x, v).1 + (v, y).2 = 0) (hx : x > 0) : y < 0 := by
  omega

-- `Nat` cast of `(x, v).1` and `(v, y).2` with higher universe.
#guard_msgs in
example {α : Type 2} (v : α) {x y : Nat} (h : ((x, v).1 : Int) + ((v, y).2 : Int) < 2) :
    x ≤ 1 := by
  omega

-- Nested `Nat` subtraction `(a - b) - c`.
#guard_msgs in
example {a b c : Nat} (h : ((a - b - c : Nat) : Int) > 0) : b + c < a := by
  omega

-- Defeq `Fin` modulus (`Fin (2 + 3)` vs `Fin 5`).
#guard_msgs in
example (x y : Fin (2 + 3)) (h1 : (x + y).val < 2) (h2 : 1 < (x + y).val) : False := by
  omega

#guard_msgs in
example (x y : Fin 5) (h1 : x - y < 1) (h2 : 0 < x - y) : False := by
  omega

-- Reducible carrier and `outParam` aliases (`+inst` relaxes implicit class parameters).
@[instance_reducible] private def OddNat3 := Nat
private abbrev MyNat := Nat
private abbrev MyInt := Int

#guard_msgs in
example (n : Nat) (h : n < 42) : 42 - (42 - n : OddNat3) < n + 1 := by
  omega

#guard_msgs in
example (x y : MyNat) (h : x + y < 5) : x < 5 := by
  omega

#guard_msgs in
example (x y : MyInt) (h : x + y < 0) (hx : 0 ≤ x) (hy : 0 ≤ y) : False := by
  omega

end OmegaInstancesTest
