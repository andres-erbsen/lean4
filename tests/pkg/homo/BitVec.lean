import Lean.Elab.Tactic.Grind.Basic
import Lean.Meta.Sym.Grind
import Homo.Init

namespace Int
@[grind_homo] theorem mod_add_mod_l (a b n : Int) : (a % n + b) % n = (a + b) % n := by simp
@[grind_homo] theorem mod_add_mod_r (a b n : Int) : (a + b % n) % n = (a + b) % n := by simp
@[grind_homo] theorem mod_sub_mod_l (a b n : Int) : (a % n - b) % n = (a - b) % n := by simp
@[grind_homo] theorem mod_sub_mod_r (a b n : Int) : (a - b % n) % n = (a - b) % n := by simp
@[grind_homo] theorem mod_mul_mod_l (a b n : Int) : ((a % n) * b) % n = (a * b) % n := by
  rw [Int.mul_emod, Int.emod_emod, ← Int.mul_emod]
@[grind_homo] theorem mod_mul_mod_r (a b n : Int) : (a * (b % n)) % n = (a * b) % n := by
  rw [Int.mul_emod, Int.emod_emod, ← Int.mul_emod]
end Int

namespace BitVec
def unsigned {w} (x : BitVec w) := Int.ofNat x.toNat
abbrev signed {w} (x : BitVec w) := x.toInt

@[grind_homo_pred] theorem unsigned_range (x : BitVec w) : 0 <= x.unsigned ∧ x.unsigned < 2^w :=
  by have := x.isLt; unfold unsigned; lia

@[grind_homo] theorem unsigned_add (x y : BitVec w) :
  (x + y).unsigned = (x.unsigned + y.unsigned) % (2 ^ w) := by
  unfold unsigned; simp

@[grind_homo] theorem unsigned_add_small (x y : BitVec w) (h : x.unsigned + y.unsigned < 2^w) :
  (x + y).unsigned = x.unsigned + y.unsigned := by
  have := x.unsigned_range
  have := y.unsigned_range
  rw [unsigned_add, Int.emod_eq_of_lt] <;> lia

@[grind_homo] theorem unsigned_mul (x y : BitVec w) :
  (x * y).unsigned = (x.unsigned * y.unsigned) % (2 ^ w) := by
  unfold unsigned; simp

@[grind_homo] theorem unsigned_mod (x y : BitVec w) :
  (x % y).unsigned = (x.unsigned % y.unsigned) := by
  unfold unsigned; simp

@[grind_homo] theorem unsigned_div (x y : BitVec w) :
  (x / y).unsigned = (x.unsigned / y.unsigned) := by
  unfold unsigned; simp

@[grind_homo] theorem unsigned_sub (x y : BitVec w) :
  (x - y).unsigned = (x.unsigned - y.unsigned) % (2 ^ w) := by
  have := y.isLt
  unfold unsigned
  simp only [toNat_sub, Int.ofNat_eq_natCast, Int.natCast_emod, Int.natCast_add, Int.natCast_pow, Int.cast_ofNat_Int]
  rw [Int.ofNat_sub]
  simp only [Int.natCast_pow, Int.cast_ofNat_Int]
  rw [Int.add_comm]
  rw [← (Int.mod_add_mod_r _ (2 ^ w - _))]
  rw [← (Int.mod_sub_mod_l (2 ^ w))]
  simp
  lia
  lia

theorem unsigned_inj {w : Nat} {x y : BitVec w} (h : x.unsigned = y.unsigned) :
  x = y := by
  unfold unsigned at h
  apply eq_of_toNat_eq
  injection h

@[grind_homo] theorem unsigned_inj_iff {w : Nat} {x y : BitVec w} :
  x = y ↔ x.unsigned = y.unsigned := by
  constructor
  · intro h; rw [h]
  · apply unsigned_inj

-- Zmod.unsigned_of_Z / bits.unsigned_of_Z equivalents
@[grind_homo] theorem unsigned_ofNat (w n : Nat) :
  (BitVec.ofNat w n).unsigned = n % (2 ^ w) := by unfold unsigned; simp

@[grind_homo] theorem signed_ofNat (w n : Nat) :
  (BitVec.ofNat w n).signed = (Int.ofNat n).bmod (2 ^ w) := by
  have h : (BitVec.ofNat w n) = OfNat.ofNat n := rfl
  rw [h]
  exact BitVec.toInt_ofNat n

@[grind_homo] theorem unsigned_ofInt (w : Nat) (i : Int) :
    (BitVec.ofInt w i).unsigned = i % (2 ^ w) := by
  unfold unsigned
  rw [BitVec.toNat_ofInt]
  apply Int.toNat_of_nonneg
  apply Int.emod_nonneg
  apply Int.ne_of_gt
  apply Int.natCast_pos.mpr
  apply Nat.two_pow_pos

@[grind_homo] theorem signed_ofInt (w : Nat) (i : Int) :
  (BitVec.ofInt w i).signed = i.bmod (2 ^ w) := by exact toInt_ofInt i

@[grind_homo] theorem unsigned_instOfNat (w n : Nat) :
  (@OfNat.ofNat _ _ (@BitVec.instOfNat w n)).unsigned = n % (2 ^ w) := by apply unsigned_ofNat

@[grind_homo] theorem signed_instOfNat (w n : Nat) :
  (@OfNat.ofNat _ _ (@BitVec.instOfNat w n)).signed = (Int.ofNat n).bmod (2 ^ w) := by apply signed_ofNat

-- Zmod.unsigned_0_iff
@[grind_homo] theorem unsigned_zero_iff {w : Nat} {x : BitVec w} :
    x = 0#w ↔ x.unsigned = 0 := by
  unfold unsigned
  constructor
  · intro h; rw [h]; rw [toNat_zero]; rfl
  · intros h; apply eq_of_toNat_eq; rw [toNat_zero]; lia

-- Zmod.unsigned_0
@[grind_homo] theorem unsigned_zero {w : Nat} :
  (0#w).unsigned = 0 := by rw [← unsigned_zero_iff]

-- Zmod.unsigned_nz
@[grind_homo] theorem unsigned_ne_zero {w : Nat} {x : BitVec w} (h : x ≠ 0#w) :
  x.unsigned ≠ 0 := by have := @unsigned_zero_iff _ x; lia

@[grind_homo] theorem unsigned_neg {w : Nat} (x : BitVec w) :
  (-x).unsigned = (-x.unsigned) % (2 ^ w) := by
  rw [←BitVec.zero_sub,unsigned_sub,unsigned_zero]; lia

-- bits.unsigned_width0
@[grind_homo] theorem unsigned_width0 (a : BitVec 0) :
  a.unsigned = 0 := by
  unfold unsigned; rw [toNat_zero_length]; rfl

-- bits.unsigned_firstn
@[grind_homo] theorem unsigned_truncate {m : Nat} (n : Nat) (a : BitVec m) :
  (BitVec.truncate n a).unsigned = a.unsigned % (2 ^ n) := by
  unfold unsigned; simp 

@[grind_homo] theorem unsigned_setWidth {m : Nat} (n : Nat) (a : BitVec m) :
  (BitVec.setWidth n a).unsigned = a.unsigned % (2 ^ n) := by
  unfold unsigned; simp 

@[grind_homo] theorem unsigned_truncate_small (x : BitVec w) (h : x.unsigned < 2^n) :
    (x.setWidth n).unsigned = x.unsigned := by
  have := x.unsigned_range
  rw [unsigned_truncate,Int.emod_eq_of_lt] <;> lia

@[grind_homo] theorem unsigned_setWidth_small (x : BitVec w) (h : x.unsigned < 2^n) :
    (x.setWidth n).unsigned = x.unsigned := by
  have := x.unsigned_range
  rw [unsigned_setWidth,Int.emod_eq_of_lt] <;> lia

@[grind_homo] theorem unsigned_zeroExtend {m : Nat} (n : Nat) (a : BitVec m) :
  (BitVec.zeroExtend n a).unsigned = a.unsigned % (2 ^ n) := by
  unfold unsigned; simp 

@[grind_homo] theorem unsigned_zeroExtend_small (x : BitVec w) (h : x.unsigned < 2^n) :
    (x.setWidth n).unsigned = x.unsigned := by
  have := x.unsigned_range
  rw [unsigned_zeroExtend,Int.emod_eq_of_lt] <;> lia

-- bits.unsigned_slice
@[grind_homo] theorem unsigned_extractLsb' {w : Nat} (start len : Nat) (a : BitVec w) :
  (BitVec.extractLsb' start len a).unsigned = (a.unsigned / (2 ^ start)) % (2 ^ len) := by
  unfold unsigned; rw [extractLsb'_toNat]
  simp [Nat.shiftRight_eq_div_pow]

-- bits.unsigned_not'
@[grind_homo] theorem unsigned_not' {n : Nat} (x : BitVec n) :
  (~~~x).unsigned = (2 ^ n - 1) - x.unsigned := by
  unfold unsigned; rw [toNat_not]; have := x.isLt; lia

-- bits.unsigned_slu / Zmod.unsigned_slu
@[grind_homo] theorem unsigned_shiftLeft {n : Nat} (x : BitVec n) (y : Nat) :
  (x <<< y).unsigned = (x.unsigned * (2 ^ y)) % (2 ^ n) := by
  unfold unsigned; rw [toNat_shiftLeft]; simp [Nat.shiftLeft_eq]

-- bits.unsigned_skipn / Zmod.unsigned_sru
@[grind_homo] theorem unsigned_ushiftRight {m : Nat} (a : BitVec m) (n : Nat) :
  (a >>> n).unsigned = a.unsigned / (2 ^ n) := by
  unfold unsigned; rw [toNat_ushiftRight]; simp [Nat.shiftRight_eq_div_pow]

-- bits.unsigned_app
@[grind_homo] theorem unsigned_append {n m : Nat} (a : BitVec n) (b : BitVec m) :
    (a ++ b).unsigned = a.unsigned * (2 ^ m) + b.unsigned := by
  unfold unsigned
  rw [toNat_append]
  have hb := b.isLt
  have h := (Nat.shiftLeft_add_eq_or_of_lt hb a.toNat)
  rw [← h, Nat.shiftLeft_eq]
  simp

-- bits.unsigned_srs
@[grind_homo] theorem unsigned_sshiftRight {n : Nat} (x : BitVec n) (y : Nat) :
  (x.sshiftRight y).unsigned = (x.signed / (2 ^ y)) % (2 ^ n) := by
  unfold sshiftRight signed; rw [unsigned_ofInt]; simp [Int.shiftRight_eq_div_pow]

@[grind_homo] theorem unsigned_cast {n m : Nat} (h : n = m) (a : BitVec n) :
  (BitVec.cast h a).unsigned = a.unsigned := by
  unfold unsigned; rw [toNat_cast]

-- Zmod.unsigned_udiv / Zmod.unsigned_udiv_nonneg
@[grind_homo] theorem unsigned_udiv {w : Nat} (x y : BitVec w) (h : y.unsigned ≠ 0) :
  (x / y).unsigned = x.unsigned / y.unsigned := by
  unfold unsigned; rw [toNat_udiv]; lia

-- Zmod.unsigned_umod
@[grind_homo] theorem unsigned_umod {w : Nat} (x y : BitVec w) :
  (x % y).unsigned = x.unsigned % y.unsigned := by
  unfold unsigned; simp [toNat_umod]

-- Zmod.unsigned_pos
@[grind_homo] theorem unsigned_nonnegative {w : Nat} {x : BitVec w} (h : 0 ≤ x.signed) :
  x.unsigned = x.toInt := by
  unfold unsigned
  have := BitVec.toInt_pos_iff.mp h
  rw [toInt_eq_toNat_cond]
  lia

@[grind_homo] theorem unsigned_negative {w : Nat} {x : BitVec w} :
  x.signed < 0 → x.unsigned = (2 ^ w) + x.signed := by
  unfold unsigned signed BitVec.toInt; lia

-- Zmod.signed_eq_unsigned_iff
@[grind_homo] theorem signed_eq_unsigned_iff {w : Nat} (x : BitVec w) :
    x.signed = x.unsigned ↔ 2 * x.unsigned < (2 ^ w) := by
  have := @unsigned_negative _ x
  have := @unsigned_nonnegative _ x
  grind only [usr le_two_mul_toInt, usr two_mul_toInt_lt]

-- bits.unsigned_pow_nonneg_r
@[grind_homo] theorem unsigned_pow {n : Nat} (x : BitVec n) (z : Nat) :
  (x.pow z).unsigned = (x.unsigned ^ z) % (2 ^ n) := by
  induction z with
  | zero => simp [BitVec.pow, unsigned_ofNat]
  | succ z ih =>
    rw [BitVec.pow, unsigned_mul, ih, Int.pow_succ, Int.mul_comm, Int.mul_emod, Int.emod_emod, ← Int.mul_emod]
    simp [Int.mul_comm]

-- -- bits.unsigned_xor
-- theorem unsigned_xor {n : Nat} (x y : BitVec n) :
--   (x ^^^ y).unsigned = x.unsigned ^^^ y.unsigned := by sorry
-- 
-- -- bits.unsigned_and / Zmod.unsigned_and
-- theorem unsigned_and {n : Nat} (x y : BitVec n) :
--   (x &&& y).unsigned = x.unsigned &&& y.unsigned := by sorry
-- 
-- -- bits.unsigned_or
-- theorem unsigned_or {n : Nat} (x y : BitVec n) :
--   (x ||| y).unsigned = x.unsigned ||| y.unsigned := by sorry

-- bits.signed_range'
@[grind_homo] theorem signed_range' {w : Nat} (x : BitVec w) (h : 1 ≤ w) :
  -(2 ^ (w - 1)) ≤ x.signed ∧ x.signed < (2 ^ (w - 1)) := by
  unfold signed
  constructor
  · apply le_toInt
  · apply toInt_lt

-- bits.signed_range
@[grind_homo] theorem signed_range {w : Nat} (x : BitVec w) :
  -(2 ^ w) ≤ 2 * x.signed ∧ 2 * x.signed < (2 ^ w) := by
  unfold signed
  constructor
  · apply le_two_mul_toInt
  · apply two_mul_toInt_lt

-- Zmod.signed_inj / Zmod.signed_inj_iff
@[grind_homo] theorem signed_inj_iff {w : Nat} {x y : BitVec w} :
  x = y ↔ x.signed = y.signed := by
  unfold signed; symm; apply toInt_inj

-- Zmod.signed_0_iff
@[grind_homo] theorem signed_zero_iff {w : Nat} {x : BitVec w} :
  x = 0#w ↔ x.unsigned = 0 := by
  unfold unsigned
  constructor
  · intro h; rw [h]; rw [toNat_zero]; rfl
  · intros h; apply eq_of_toNat_eq; rw [toNat_zero]; lia

-- Zmod.signed_opp / bits.signed_opp
@[grind_homo] theorem signed_neg_bmod {w : Nat} (x : BitVec w) :
  (-x).signed = (-x.signed).bmod (2 ^ w) := by
  unfold signed
  rw [toInt_neg]

-- Zmod.signed_add / bits.signed_add
@[grind_homo] theorem signed_add_bmod {w : Nat} (x y : BitVec w) :
  (x + y).signed = (x.signed + y.signed).bmod (2 ^ w) := by
  unfold signed
  rw [toInt_add]

@[grind_homo] theorem signed_cast {n m : Nat} (h : n = m) (a : BitVec n) :
  (BitVec.cast h a).signed = a.signed := by
  subst h; rfl

-- bits.signed_width0
@[grind_homo] theorem signed_width0 (a : BitVec 0) :
  a.signed = 0 := by
  unfold signed; rw [toInt_zero_length]

-- Zmod.signed_sub / bits.signed_sub
@[grind_homo] theorem signed_sub_bmod {w : Nat} (x y : BitVec w) :
  (x - y).signed = (x.signed - y.signed).bmod (2 ^ w) := by
  unfold signed
  rw [toInt_sub]

-- Zmod.signed_srs / bits.signed_srs
@[grind_homo] theorem signed_sshiftRight_eq {w : Nat} (x : BitVec w) (n : Nat) :
  (x.sshiftRight n).signed = x.signed >>> n := by
  unfold signed
  rw [toInt_sshiftRight]

-- Zmod.signed_mul / bits.signed_mul
@[grind_homo] theorem signed_mul_bmod {w : Nat} (x y : BitVec w) :
  (x * y).signed = (x.signed * y.signed).bmod (2 ^ w) := by
  unfold signed
  rw [toInt_mul]

-- Zmod.signed_small_iff / bits.signed_small_iff
@[grind_homo] theorem signed_eq_unsigned_iff' {w : Nat} (x : BitVec w) :
  x.signed = x.unsigned ↔ 2 * x.unsigned < (2 ^ w) := by exact signed_eq_unsigned_iff x

-- Zmod.signed_large / bits.signed_large
@[grind_homo] theorem signed_large {w : Nat} (x : BitVec w) (h : (2 ^ w) ≤ 2 * x.unsigned) :
    x.signed = x.unsigned - (2 ^ w) := by
  unfold unsigned at h ⊢; simp [BitVec.toInt_eq_toNat_cond]; lia -- TODO: remove lia

-- bits.signed_neg_iff / Zmod.signed_neg_iff
@[grind_homo] theorem signed_negative_iff {w : Nat} (x : BitVec w) :
    x.signed < 0 ↔ (2 ^ w) ≤ 2 * x.unsigned := by
  unfold signed unsigned BitVec.toInt
  cases w
  · simp [toNat_zero_length]
  · split
    · next h =>
      constructor
      · intro h2; contradiction
      · intro h2; have := x.isLt; have h3 := Int.ofNat_le.mpr h; lia
    · next h =>
      constructor
      · intro h2; have := x.isLt; have h3 := Int.ofNat_le.mpr (Nat.le_of_not_lt h); lia
      · intro h2; have := x.isLt; have h3 := Int.ofNat_le.mpr (Nat.le_of_not_lt h); lia

-- bits.signed_pos_iff / Zmod.signed_pos_iff
@[grind_homo] theorem signed_positive_iff {w : Nat} (x : BitVec w) :
  0 < x.signed ↔ 0 < 2 * x.unsigned ∧ 2 * x.unsigned < (2 ^ w) := by
  have := x.unsigned_negative
  have := x.unsigned_nonnegative
  grind only [usr le_two_mul_toInt, usr two_mul_toInt_lt]

-- bits.signed_nonneg_iff / Zmod.signed_nonneg_iff
@[grind_homo] theorem signed_nonneg_iff {w : Nat} (x : BitVec w) :
  0 ≤ x.signed ↔ 2 * x.unsigned < (2 ^ w) := by
  have := @unsigned_negative _ x
  have := @unsigned_nonnegative _ x
  grind only [usr le_two_mul_toInt, usr two_mul_toInt_lt]

@[grind_homo] theorem signed_sdiv {w : Nat} (x y : BitVec w) :
  (x.sdiv y).signed = (x.signed.tdiv y.signed).bmod (2 ^ w) := by
  unfold signed; rw [toInt_sdiv]

@[grind_homo] theorem signed_srem {w : Nat} (x y : BitVec w) :
  (x.srem y).signed = x.signed.tmod y.signed := by
  unfold signed; rw [toInt_srem]

@[grind_homo] theorem signed_smod {w : Nat} (x y : BitVec w) :
  (x.smod y).signed = x.signed.fmod y.signed := by
  unfold signed; rw [toInt_smod]

@[grind_homo] theorem signed_pow_bmod {w : Nat} (x : BitVec w) (z : Nat) :
  (x.pow z).signed = (x.signed ^ z).bmod (2 ^ w) := by
  induction z with
  | zero => simp [BitVec.pow, signed, signed_ofNat]
  | succ z ih =>
    rw [BitVec.pow, signed_mul_bmod, ih, Int.pow_succ, Int.mul_comm, Int.mul_bmod, Int.bmod_bmod, ← Int.mul_bmod]
    simp [Int.mul_comm]

--  -- bits.testbit_signed_high
--  theorem testBit_signed_high {w : Nat} (x : BitVec w) (i : Nat) (h : w ≤ i) :
--    x.signed.testBit i = (x.signed < 0) := by sorry

end BitVec


-- working examples

example (x y z : BitVec 16) :
  x.unsigned < 256 → y.unsigned < 256 →
  (x + y).unsigned = x.unsigned + y.unsigned := by lia
example (x y z : BitVec 16) : x.unsigned < 256 → y.unsigned < 256 →
  x.unsigned < 256 → y.unsigned < 256 →
  (z + x + z + y - (z<<<1)).unsigned = x.unsigned + y.unsigned := by lia
example (x y z : BitVec 16) : x.unsigned < 256 → y.unsigned < 256 →
  x.unsigned < 256 → y.unsigned < 256 →
  ((BitVec.ofNat _ 3)*z + x + z + y - (z<<<2)).unsigned = x.unsigned + y.unsigned := by lia
example (x y z : BitVec 16) : x.unsigned < 256 → y.unsigned < 256 →
  x.unsigned < 256 → y.unsigned < 256 →
  (3*z + x + z + y - (z<<<2)).unsigned = x.unsigned + y.unsigned := by lia
example (x y z : BitVec 16) : x.unsigned < 256 → y.unsigned < 256 →
  x.unsigned < 256 → y.unsigned < 256 →
  (1023*z + x + z + y - (z<<<10)).unsigned = x.unsigned + y.unsigned := by lia
example (x y : BitVec 16) : x.unsigned = y.unsigned → x = y := by lia
example (x y : BitVec 16) : x.unsigned < 4 → y.unsigned = 0 →
  x.unsigned % 4 = y.unsigned % 4 → x = y := by lia
example (x y : BitVec 16) : x.unsigned < 4 → y.unsigned = 0 →
  (x % 4).unsigned = (y % 4).unsigned → x = y := by lia
example (x y : BitVec 16) (hx : x.unsigned < 4) (hy : y.unsigned = 0)
    (h : x % 4 = y % 4) : x = y := by lia
example (x : BitVec 256) (h : x >>> 255 = 0) : x.unsigned / 2^255 = 0 := by lia
example (x y : BitVec 64) (c : BitVec 1) :
    let s := x.unsigned + y.unsigned + c.unsigned
    let l := BitVec.ofInt 64 s
    let h := BitVec.ofInt 1 (s / 2^64)
    s = l.unsigned + 2^64 * h.unsigned := by
  lia
example (x : BitVec 64) :
    let y := x.truncate 51
    x.unsigned < 2^51 →
    x.unsigned = y.unsigned ∧
    let z := (y.zeroExtend 52 + y.zeroExtend 52)
    z.unsigned = 2*y.unsigned ∧
    let w := (z.zeroExtend 65+x.zeroExtend 65)
    w.unsigned = 3*x.unsigned := by
  lia

example (x : BitVec 64) :
    let y := x.truncate 51
    x.unsigned < 2^51 →
    x.unsigned = y.unsigned ∧
    let z := (y.zeroExtend 52 + y.zeroExtend 52)
    z.unsigned = 2*y.unsigned ∧
    let w := (z.zeroExtend 65+x.zeroExtend 65)
    w.unsigned = z.unsigned + x.unsigned := by
  intro a b
  simp only [a] at *
  sym =>
  apply And.intro
  . tactic => rw [BitVec.unsigned_setWidth_small] <;> try grind
  apply And.intro
  . tactic => rw [BitVec.unsigned_setWidth_small] <;> try grind
  tactic => (repeat rw [BitVec.unsigned_setWidth_small]) <;>
  -- FIXME: can we perform these rewrites without duplicating any subterms?
  -- ⊢ (BitVec.setWidth 65 (BitVec.setWidth 52 (BitVec.setWidth 51 x) + BitVec.setWidth 52 (BitVec.setWidth 51 x)) +
  -- BitVec.setWidth 65 x).unsigned = (BitVec.setWidth 52 (BitVec.setWidth 51 x) + BitVec.setWidth 52 (BitVec.setWidth 51 x)).unsigned + x.unsigned
    try grind

example (x : BitVec 256) :
    (((x >>> 255)*19).unsigned + (x.truncate 255).unsigned) % (2^255-19) = x.unsigned % (2^255-19) := by
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this <;> lia

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  rw [@BitVec.unsigned_add_small _ ((x >>> 255)*19) ((x.truncate 255).zeroExtend _) (by lia)]
  rw [@BitVec.unsigned_zeroExtend_small _ 256 (x.truncate 255) (by lia)]
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this <;> lia

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  simp (discharger := lia) only [BitVec.unsigned_add_small, BitVec.unsigned_zeroExtend_small]
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this <;> lia

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  simp (discharger := lia) only [BitVec.unsigned_add_small, BitVec.unsigned_zeroExtend_small]
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this
  . sym => lia
  . sym => lia

-- non-working examples

set_option trace.homo true
set_option trace.homo.pred true
set_option trace.homo.visit true
set_option diagnostics true

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  simp (discharger := lia) only [BitVec.unsigned_add_small] -- , BitVec.unsigned_zeroExtend_small
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this
  . lia -- error: (deterministic) timeout at `isDefEq`, maximum number of heartbeats (200000) has been reached
  . grind -- error: (deterministic) timeout at `«tactic execution»`, maximum number of heartbeats (200000) has been reached

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  simp (discharger := lia) only [BitVec.unsigned_add_small] -- , BitVec.unsigned_zeroExtend_small
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); cases this
  . sym => lia -- error: (deterministic) timeout at `cutsat`, maximum number of heartbeats (200000) has been reached
  . sym => lia -- error: (deterministic) timeout at `«tactic execution»`, maximum number of heartbeats (200000) has been reached

example (x : BitVec 256) :
    (((x >>> 255)*19) + (x.truncate 255).zeroExtend _).unsigned % (2^255-19) = x.unsigned % (2^255-19) := by
  simp (discharger := lia) only [BitVec.unsigned_add_small, BitVec.unsigned_zeroExtend_small]
  (have : x>>>255 = 0 ∨ x>>>255 = 1 := by lia); lia

example red25519 (x : BitVec 256) :
    (((x >>> 255)*19).unsigned + (x.truncate 255).unsigned) % (2^255-19) = x.unsigned % (2^255-19) := by
  have : x>>>255 = 0 ∨ x>>>255=1 := by lia
  cases this <;> simp only [*] <;> lia

example (x : BitVec 256) :
    (((x >>> 255)*19).unsigned + ((x <<< 1) >>> 1).unsigned) % (2^255-19) = x.unsigned % (2^255-19) := by
  have : x>>>255 = 0 ∨ x>>>255=1 := by lia
  cases this <;> simp only [*] <;> lia

example (x y : BitVec 32) :
  x.unsigned < 256 → y.unsigned < 256 →
  (x * y).unsigned = x.unsigned * y.unsigned := by grind

example (x y : BitVec 32) :
    (x * .ofInt _ (y.unsigned * x.unsigned)).unsigned = x.unsigned * y.unsigned * x.unsigned := by grind

