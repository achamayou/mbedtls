/* Copyright (c) INRIA and Microsoft Corporation. All rights reserved.
   Licensed under the Apache 2.0 License. */

/* This file was generated by KreMLin <https://github.com/FStarLang/kremlin>
 * KreMLin invocation: ../krml -fc89 -fparentheses -fno-shadow -fparentheses -fcurly-braces -fno-shadow -header copyright-header.txt -minimal -tmpdir extracted -warn-error +9+11 -skip-compilation -extract-uints -add-include <inttypes.h> -add-include "kremlib.h" -add-include "kremlin/internal/compat.h" extracted/prims.krml extracted/FStar_Pervasives_Native.krml extracted/FStar_Pervasives.krml extracted/FStar_Mul.krml extracted/FStar_Squash.krml extracted/FStar_Classical.krml extracted/FStar_FunctionalExtensionality.krml extracted/FStar_List_Tot_Base.krml extracted/FStar_List_Tot_Properties.krml extracted/FStar_StrongExcludedMiddle.krml extracted/FStar_List_Tot.krml extracted/FStar_Seq_Base.krml extracted/FStar_Seq_Properties.krml extracted/FStar_Seq.krml extracted/FStar_Math_Lib.krml extracted/FStar_Math_Lemmas.krml extracted/FStar_BitVector.krml extracted/FStar_UInt.krml extracted/FStar_UInt32.krml extracted/FStar_Int.krml extracted/FStar_Int16.krml extracted/FStar_Preorder.krml extracted/FStar_Ghost.krml extracted/FStar_ErasedLogic.krml extracted/FStar_UInt64.krml extracted/FStar_Set.krml extracted/FStar_PropositionalExtensionality.krml extracted/FStar_PredicateExtensionality.krml extracted/FStar_TSet.krml extracted/FStar_Monotonic_Heap.krml extracted/FStar_Heap.krml extracted/FStar_Map.krml extracted/FStar_Monotonic_HyperHeap.krml extracted/FStar_Monotonic_HyperStack.krml extracted/FStar_HyperStack.krml extracted/FStar_Monotonic_Witnessed.krml extracted/FStar_HyperStack_ST.krml extracted/FStar_HyperStack_All.krml extracted/FStar_Date.krml extracted/FStar_Universe.krml extracted/FStar_GSet.krml extracted/FStar_ModifiesGen.krml extracted/LowStar_Monotonic_Buffer.krml extracted/LowStar_Buffer.krml extracted/Spec_Loops.krml extracted/LowStar_BufferOps.krml extracted/C_Loops.krml extracted/FStar_UInt8.krml extracted/FStar_Kremlin_Endianness.krml extracted/FStar_UInt63.krml extracted/FStar_Exn.krml extracted/FStar_ST.krml extracted/FStar_All.krml extracted/FStar_Dyn.krml extracted/FStar_Int63.krml extracted/FStar_Int64.krml extracted/FStar_Int32.krml extracted/FStar_Int8.krml extracted/FStar_UInt16.krml extracted/FStar_Int_Cast.krml extracted/FStar_UInt128.krml extracted/C_Endianness.krml extracted/FStar_List.krml extracted/FStar_Float.krml extracted/FStar_IO.krml extracted/C.krml extracted/FStar_Char.krml extracted/FStar_String.krml extracted/LowStar_Modifies.krml extracted/C_String.krml extracted/FStar_Bytes.krml extracted/FStar_HyperStack_IO.krml extracted/C_Failure.krml extracted/TestLib.krml extracted/FStar_Int_Cast_Full.krml
 * F* version: 4b5cc4c6
 * KreMLin version: 916c37ac
 */



#ifndef __FStar_Int16_H
#define __FStar_Int16_H

#include "Prims.h"
#include "FStar_Pervasives_Native.h"
#include "FStar_List_Tot_Base.h"
#include "FStar_Seq_Base.h"
#include "FStar_BitVector.h"
#include "FStar_UInt.h"
#include "FStar_UInt64.h"
#include "FStar_UInt128.h"
#include "FStar_Int_Cast_Full.h"
#include "TestLib.h"
#include "C_String.h"
#include "C.h"
#include "C_Failure.h"
#include "FStar_HyperStack_IO.h"
#include "FStar_UInt32.h"
#include "FStar_Bytes.h"
#include "LowStar_Modifies.h"
#include "FStar_String.h"
#include "FStar_Char.h"
#include "FStar_IO.h"
#include "FStar_Float.h"
#include "FStar_List.h"
#include "FStar_Monotonic_HyperStack.h"
#include "C_Endianness.h"
#include "FStar_Int_Cast.h"
#include "FStar_UInt16.h"
#include "FStar_Int.h"
#include "FStar_Int8.h"
#include "FStar_Int32.h"
#include "FStar_Int64.h"
#include "FStar_Int63.h"
#include "FStar_Dyn.h"
#include "FStar_All.h"
#include "FStar_FunctionalExtensionality.h"
#include "FStar_Set.h"
#include "FStar_Pervasives.h"
#include "FStar_Monotonic_Heap.h"
#include "FStar_Monotonic_Witnessed.h"
#include "FStar_ST.h"
#include "FStar_Exn.h"
#include "FStar_UInt63.h"
#include "FStar_Seq_Properties.h"
#include "FStar_UInt8.h"
#include "FStar_Kremlin_Endianness.h"
#include "C_Loops.h"
#include "LowStar_BufferOps.h"
#include "Spec_Loops.h"
#include "LowStar_Buffer.h"
#include "LowStar_Monotonic_Buffer.h"
#include "FStar_Universe.h"
#include "FStar_ModifiesGen.h"
#include "FStar_GSet.h"
#include "FStar_Date.h"
#include "FStar_HyperStack_All.h"
#include "FStar_HyperStack_ST.h"
#include "FStar_HyperStack.h"
#include "FStar_Monotonic_HyperHeap.h"
#include "FStar_Map.h"
#include "FStar_Heap.h"
#include "FStar_TSet.h"
#include "FStar_PredicateExtensionality.h"
#include "FStar_PropositionalExtensionality.h"
#include "FStar_ErasedLogic.h"
#include "FStar_Ghost.h"
#include "FStar_Preorder.h"
#include <inttypes.h>
#include "kremlib.h"
#include "kremlin/internal/compat.h"

extern Prims_int FStar_Int16_n;

extern Prims_int FStar_Int16_v(int16_t x0);

extern int16_t FStar_Int16_int_to_t(Prims_int x0);

extern int16_t FStar_Int16_add(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_sub(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_mul(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_div(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_rem(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_logand(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_logxor(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_logor(int16_t x0, int16_t x1);

extern int16_t FStar_Int16_lognot(int16_t x0);

extern int16_t FStar_Int16_shift_right(int16_t x0, uint32_t x1);

extern int16_t FStar_Int16_shift_left(int16_t x0, uint32_t x1);

extern bool FStar_Int16_eq(int16_t x0, int16_t x1);

extern bool FStar_Int16_gt(int16_t x0, int16_t x1);

extern bool FStar_Int16_gte(int16_t x0, int16_t x1);

extern bool FStar_Int16_lt(int16_t x0, int16_t x1);

extern bool FStar_Int16_lte(int16_t x0, int16_t x1);

extern Prims_string FStar_Int16_to_string(int16_t x0);

extern int16_t FStar_Int16_of_string(Prims_string x0);

#define __FStar_Int16_H_DEFINED
#endif
