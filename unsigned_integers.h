
#ifndef UNSIGNED_INTEGERS_H
#define UNSIGNED_INTEGERS_H

#include <ctype.h>

#include "fmgr.h"

/* Use types defined in c.h */
typedef uint8 uint1;

#define DatumGetUInt1(X) ((uint1) GET_1_BYTE(X))
#define UInt1GetDatum(X) ((Datum) SET_1_BYTE(X))

#define PG_GETARG_UINT1(n)	DatumGetUInt1(PG_GETARG_DATUM(n))
#define PG_RETURN_UINT1(x)	return UIntGetDatum(x)

extern Datum uint1_in(PG_FUNCTION_ARGS);
extern Datum uint1_out(PG_FUNCTION_ARGS);
extern Datum uint1_recv(PG_FUNCTION_ARGS);
extern Datum uint1_send(PG_FUNCTION_ARGS);

extern Datum uint1_to_uint2(PG_FUNCTION_ARGS);
extern Datum uint2_to_uint1(PG_FUNCTION_ARGS);
extern Datum uint1_to_uint4(PG_FUNCTION_ARGS);
extern Datum uint4_to_uint1(PG_FUNCTION_ARGS);
extern Datum uint1_to_uint8(PG_FUNCTION_ARGS);
extern Datum uint8_to_uint1(PG_FUNCTION_ARGS);
extern Datum uint1_to_bool(PG_FUNCTION_ARGS);
extern Datum bool_to_uint1(PG_FUNCTION_ARGS);

extern Datum uint1_eq(PG_FUNCTION_ARGS);
extern Datum uint1_ne(PG_FUNCTION_ARGS);
extern Datum uint1_lt(PG_FUNCTION_ARGS);
extern Datum uint1_le(PG_FUNCTION_ARGS);
extern Datum uint1_gt(PG_FUNCTION_ARGS);
extern Datum uint1_ge(PG_FUNCTION_ARGS);

extern Datum uint1_uint2_eq(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_ne(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_lt(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_le(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_gt(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_ge(PG_FUNCTION_ARGS);

extern Datum uint1_uint4_eq(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_ne(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_lt(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_le(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_gt(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_ge(PG_FUNCTION_ARGS);

extern Datum uint1_uint8_eq(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_ne(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_lt(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_le(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_gt(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_ge(PG_FUNCTION_ARGS);

extern Datum uint2_uint1_eq(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_ne(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_lt(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_le(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_gt(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_ge(PG_FUNCTION_ARGS);

extern Datum uint4_uint1_eq(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_ne(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_lt(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_le(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_gt(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_ge(PG_FUNCTION_ARGS);

extern Datum uint8_uint1_eq(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_ne(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_lt(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_le(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_gt(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_ge(PG_FUNCTION_ARGS);

//extern Datum uint1_um(PG_FUNCTION_ARGS); No Uninary Minus for unsigned ints
extern Datum uint1_up(PG_FUNCTION_ARGS);
extern Datum uint1_pl(PG_FUNCTION_ARGS);
extern Datum uint1_mi(PG_FUNCTION_ARGS);
extern Datum uint1_mul(PG_FUNCTION_ARGS);
extern Datum uint1_div(PG_FUNCTION_ARGS);
extern Datum uint1_inc(PG_FUNCTION_ARGS);

extern Datum uint1_uint2_pl(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_mi(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_mul(PG_FUNCTION_ARGS);
extern Datum uint1_uint2_div(PG_FUNCTION_ARGS);

extern Datum uint1_uint4_pl(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_mi(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_mul(PG_FUNCTION_ARGS);
extern Datum uint1_uint4_div(PG_FUNCTION_ARGS);

extern Datum uint1_uint8_pl(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_mi(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_mul(PG_FUNCTION_ARGS);
extern Datum uint1_uint8_div(PG_FUNCTION_ARGS);

extern Datum uint2_uint1_pl(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_mi(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_mul(PG_FUNCTION_ARGS);
extern Datum uint2_uint1_div(PG_FUNCTION_ARGS);

extern Datum uint4_uint1_pl(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_mi(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_mul(PG_FUNCTION_ARGS);
extern Datum uint4_uint1_div(PG_FUNCTION_ARGS);

extern Datum uint8_uint1_pl(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_mi(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_mul(PG_FUNCTION_ARGS);
extern Datum uint8_uint1_div(PG_FUNCTION_ARGS);

extern Datum uint1_mod(PG_FUNCTION_ARGS);
extern Datum uint1_abs(PG_FUNCTION_ARGS);
extern Datum uint1_larger(PG_FUNCTION_ARGS);
extern Datum uint1_smaller(PG_FUNCTION_ARGS);
extern Datum uint1_and(PG_FUNCTION_ARGS);
extern Datum uint1_or(PG_FUNCTION_ARGS);
extern Datum uint1_xor(PG_FUNCTION_ARGS);
extern Datum uint1_shl(PG_FUNCTION_ARGS);
extern Datum uint1_shr(PG_FUNCTION_ARGS);
extern Datum uint1_not(PG_FUNCTION_ARGS);

extern Datum bt_uint1_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint1_uint2_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint1_uint4_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint1_uint8_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint2_uint1_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint4_uint1_cmp(PG_FUNCTION_ARGS);
extern Datum bt_uint8_uint1_cmp(PG_FUNCTION_ARGS);

extern Datum hash_uint1(PG_FUNCTION_ARGS);

extern Datum uint1_sum(PG_FUNCTION_ARGS);
extern Datum uint1_avg_accum(PG_FUNCTION_ARGS);

#endif   /* UNSIGNED_INTEGERS_H */

