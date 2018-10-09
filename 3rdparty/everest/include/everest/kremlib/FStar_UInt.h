/* Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
   Licensed under the Apache 2.0 License. */

/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -fparentheses -fno-shadow -fparentheses -fcurly-braces -fno-shadow -header copyright-header.txt -minimal -tmpdir extracted -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Monotonic_Buffer.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/LowStar_BufferOps.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int32.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/C.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/LowStar_Modifies.krml extracted/C_String.krml extracted/FStar_Bytes.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: 4b5cc4c6
 * KreMLin version: 916c37ac
 */



#ifndef __FStar_UInt_H
#define __FStar_UInt_H

#include "Prims.h"
#include "FStar_Pervasives_Native.h"
#include "FStar_List_Tot_Base.h"
#include "FStar_Seq_Base.h"
#include "FStar_BitVector.h"
#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"

Prims_int FStar_UInt_max_int(Prims_int n);

Prims_int FStar_UInt_min_int(Prims_int n);

bool FStar_UInt_fits(Prims_int x, Prims_int n);

Prims_int FStar_UInt_zero(Prims_int n);

Prims_int FStar_UInt_pow2_n(Prims_pos n, Prims_int p);

Prims_int FStar_UInt_one(Prims_pos n);

Prims_int FStar_UInt_ones(Prims_int n);

Prims_int FStar_UInt_incr(Prims_int n, Prims_int a);

Prims_int FStar_UInt_decr(Prims_int n, Prims_int a);

Prims_int FStar_UInt_incr_underspec(Prims_int n, Prims_int a);

Prims_int FStar_UInt_decr_underspec(Prims_int n, Prims_int a);

Prims_int FStar_UInt_incr_mod(Prims_int n, Prims_int a);

Prims_int FStar_UInt_decr_mod(Prims_int n, Prims_int a);

Prims_int FStar_UInt_add(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_add_underspec(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_add_mod(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_sub(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_sub_underspec(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_sub_mod(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_mul(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_mul_underspec(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_mul_mod(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_mul_div(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_div(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_div_underspec(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_udiv(Prims_pos n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_mod_(Prims_int n, Prims_int a, Prims_int b);

bool FStar_UInt_eq(Prims_int n, Prims_int a, Prims_int b);

bool FStar_UInt_gt(Prims_int n, Prims_int a, Prims_int b);

bool FStar_UInt_gte(Prims_int n, Prims_int a, Prims_int b);

bool FStar_UInt_lt(Prims_int n, Prims_int a, Prims_int b);

bool FStar_UInt_lte(Prims_int n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_to_uint_t(Prims_int m, Prims_int a);

FStar_Seq_Base_seq__bool FStar_Seq_Base_empty__bool();

FStar_Seq_Base_seq__bool FStar_UInt_to_vec(Prims_int n, Prims_int num);

Prims_int FStar_UInt_from_vec(Prims_int n, FStar_Seq_Base_seq__bool vec);

bool FStar_UInt_nth(Prims_pos n, Prims_int a, Prims_int i);

Prims_int FStar_UInt_logand(Prims_pos n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_logxor(Prims_pos n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_logor(Prims_pos n, Prims_int a, Prims_int b);

Prims_int FStar_UInt_lognot(Prims_pos n, Prims_int a);

Prims_int FStar_UInt_minus(Prims_pos n, Prims_int a);

Prims_int FStar_UInt_shift_left(Prims_pos n, Prims_int a, Prims_int s);

Prims_int FStar_UInt_shift_right(Prims_pos n, Prims_int a, Prims_int s);

bool FStar_UInt_msb(Prims_pos n, Prims_int a);

#define __FStar_UInt_H_DEFINED
#endif
