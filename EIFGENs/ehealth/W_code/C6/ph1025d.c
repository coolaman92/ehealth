/*
 * Class PHYSICIAN
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_1025 [] = {0xFF01,237,1024,0xFFFF};
static const EIF_TYPE_INDEX egt_2_1025 [] = {0xFF01,1024,0xFFFF};
static const EIF_TYPE_INDEX egt_3_1025 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_1025 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_1025 [] = {0xFF01,1024,0xFFFF};
static const EIF_TYPE_INDEX egt_6_1025 [] = {0xFF01,1024,0xFFFF};
static const EIF_TYPE_INDEX egt_7_1025 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_1025 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_10_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_11_1025 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_1025 [] = {0xFF01,1024,0xFFFF};
static const EIF_TYPE_INDEX egt_13_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_14_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_15_1025 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_16_1025 [] = {0xFF01,220,0xFFFF};


static const struct desc_info desc_1025[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_1025), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_1025), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_1025), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_1025), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_1025), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_1025), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_1025), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_1025), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_1025), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_1025), 15032, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_1025), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_1025), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0801 /*1024*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_1025), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15025, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_1025), 15026, 0},
	{EIF_NON_GENERIC(0x0179 /*188*/), 15027, 16},
	{EIF_GENERIC(egt_14_1025), 15028, 8},
	{EIF_GENERIC(egt_15_1025), 15029, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0179 /*188*/), 15030, 0xFFFFFFFF},
	{EIF_GENERIC(egt_16_1025), 15031, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15033, 0xFFFFFFFF},
};
void Init1025(void)
{
	IDSC(desc_1025, 0, 1024);
	IDSC(desc_1025 + 1, 1, 1024);
	IDSC(desc_1025 + 32, 417, 1024);
}


#ifdef __cplusplus
}
#endif
