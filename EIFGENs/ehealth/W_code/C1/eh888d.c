/*
 * Class EHEALTH_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_888 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_888 [] = {0xFF01,1510,887,0xFFFF};
static const EIF_TYPE_INDEX egt_2_888 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_888 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_888 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_888 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_6_888 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_7_888 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_8_888 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_888 [] = {0xFF01,886,0xFFFF};


static const struct desc_info desc_888[] = {
	{EIF_GENERIC(NULL), 14146, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_888), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_888), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_888), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_888), 14, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 15, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_888), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_888), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_888), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_888), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_888), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06EF /*887*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_888), 14147, 0xFFFFFFFF},
};
void Init888(void)
{
	IDSC(desc_888, 0, 887);
	IDSC(desc_888 + 1, 1, 887);
	IDSC(desc_888 + 32, 360, 887);
}


#ifdef __cplusplus
}
#endif
