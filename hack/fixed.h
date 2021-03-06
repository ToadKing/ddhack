#include <hash_map>

static unsigned char *fixed_data[0x7f - 0x20];
static unsigned int fixed_width[0x7f - 0x20];
static unsigned int fixed_height[0x7f - 0x20];
static unsigned int fixed_aw[0x7f - 0x20];
static std::hash_map<short, int> fixed_kernings;

#define X 1,
#define _ 0,

static unsigned char fixed_20_data[] = {
_
_
_
_
_
_
_
_
_
_
_
_
_
_
_
};
static unsigned int fixed_20_width = 1;
static unsigned int fixed_20_height = 15;
static unsigned int fixed_20_aw = 3;

static unsigned char fixed_21_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_21_width = 4;
static unsigned int fixed_21_height = 15;
static unsigned int fixed_21_aw = 3;

static unsigned char fixed_22_data[] = {
_ _ _ _ _
_ _ _ _ _
_ X _ X _
_ X _ X _
_ X _ X _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
};
static unsigned int fixed_22_width = 5;
static unsigned int fixed_22_height = 15;
static unsigned int fixed_22_aw = 4;

static unsigned char fixed_23_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ X _ _ X _
_ _ _ X _ _ X _
_ _ X _ _ _ X _
X X X X X X X X
_ _ X _ _ X _ _
_ _ X _ _ X _ _
X X X X X X X X
_ X _ _ X _ _ _
_ X _ _ X _ _ _
_ X _ _ X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_23_width = 8;
static unsigned int fixed_23_height = 15;
static unsigned int fixed_23_aw = 7;

static unsigned char fixed_24_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X X _ _ _
_ X _ X _ X _ _
_ X _ X _ _ _ _
_ X _ X _ _ _ _
_ X X X _ _ _ _
_ _ _ X X X _ _
_ _ _ X _ X _ _
_ X _ X _ X _ _
_ X _ X _ X _ _
_ _ X X X _ _ _
_ _ _ X _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_24_width = 8;
static unsigned int fixed_24_height = 15;
static unsigned int fixed_24_aw = 7;

static unsigned char fixed_25_data[] = {
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ X X _ _ _ _ X _ _ _ _
_ X _ _ X _ _ X _ _ _ _ _
_ X _ _ X _ _ X _ _ _ _ _
_ X _ _ X _ X _ _ _ _ _ _
_ _ X X _ _ X _ _ _ _ _ _
_ _ _ _ _ X _ _ X X _ _ _
_ _ _ _ _ X _ X _ _ X _ _
_ _ _ _ X _ _ X _ _ X _ _
_ _ _ _ X _ _ X _ _ X _ _
_ _ _ X _ _ _ _ X X _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_25_width = 13;
static unsigned int fixed_25_height = 15;
static unsigned int fixed_25_aw = 11;

static unsigned char fixed_26_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ X X _ _ _ _ _
_ _ X _ _ X _ _ _ _
_ _ X _ _ X _ _ _ _
_ _ X _ _ X _ _ _ _
_ _ _ X X _ _ _ _ _
_ _ X X _ _ _ _ _ _
_ X _ _ X _ _ X _ _
_ X _ _ _ X _ X _ _
_ X _ _ _ X X _ _ _
_ _ X X X _ _ X X _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_26_width = 10;
static unsigned int fixed_26_height = 15;
static unsigned int fixed_26_aw = 8;

static unsigned char fixed_27_data[] = {
_ _ _
_ _ _
_ X _
_ X _
_ X _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
_ _ _
};
static unsigned int fixed_27_width = 3;
static unsigned int fixed_27_height = 15;
static unsigned int fixed_27_aw = 2;

static unsigned char fixed_28_data[] = {
_ _ _ _ _
_ _ _ _ _
_ _ _ X _
_ _ X _ _
_ _ X _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ _ X _ _
_ _ X _ _
_ _ _ X _
};
static unsigned int fixed_28_width = 5;
static unsigned int fixed_28_height = 15;
static unsigned int fixed_28_aw = 4;

static unsigned char fixed_29_data[] = {
_ _ _ _ _
_ _ _ _ _
X _ _ _ _
_ X _ _ _
_ X _ _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ X _ _ _
_ X _ _ _
X _ _ _ _
};
static unsigned int fixed_29_width = 5;
static unsigned int fixed_29_height = 15;
static unsigned int fixed_29_aw = 4;

static unsigned char fixed_2a_data[] = {
_ _ _ _ _ _
_ _ _ _ _ _
_ _ X _ _ _
X X X X X _
_ _ X _ _ _
_ X _ X _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
_ _ _ _ _ _
};
static unsigned int fixed_2a_width = 6;
static unsigned int fixed_2a_height = 15;
static unsigned int fixed_2a_aw = 5;

static unsigned char fixed_2b_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ X X X X X X X
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_2b_width = 8;
static unsigned int fixed_2b_height = 15;
static unsigned int fixed_2b_aw = 7;

static unsigned char fixed_2c_data[] = {
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ X _
_ _ X _
_ _ X _
_ _ _ _
};
static unsigned int fixed_2c_width = 4;
static unsigned int fixed_2c_height = 15;
static unsigned int fixed_2c_aw = 3;

static unsigned char fixed_2d_data[] = {
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
X X X _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
};
static unsigned int fixed_2d_width = 5;
static unsigned int fixed_2d_height = 15;
static unsigned int fixed_2d_aw = 4;

static unsigned char fixed_2e_data[] = {
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_2e_width = 4;
static unsigned int fixed_2e_height = 15;
static unsigned int fixed_2e_aw = 3;

static unsigned char fixed_2f_data[] = {
_ _ _ _
_ _ _ _
_ _ _ X
_ _ _ X
_ _ X _
_ _ X _
_ _ X _
_ X _ _
_ X _ _
_ X _ _
X _ _ _
X _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_2f_width = 4;
static unsigned int fixed_2f_height = 15;
static unsigned int fixed_2f_aw = 3;

static unsigned char fixed_30_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_30_width = 8;
static unsigned int fixed_30_height = 15;
static unsigned int fixed_30_aw = 7;

static unsigned char fixed_31_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ X _ _ _ _
_ _ X X _ _ _ _
_ X _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_31_width = 8;
static unsigned int fixed_31_height = 15;
static unsigned int fixed_31_aw = 7;

static unsigned char fixed_32_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ X _ _ _
_ _ _ X _ _ _ _
_ _ X _ _ _ _ _
_ X _ _ _ _ _ _
X X X X X X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_32_width = 8;
static unsigned int fixed_32_height = 15;
static unsigned int fixed_32_aw = 7;

static unsigned char fixed_33_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ X X X _ _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_33_width = 8;
static unsigned int fixed_33_height = 15;
static unsigned int fixed_33_aw = 7;

static unsigned char fixed_34_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ X _ _ _
_ _ _ X X _ _ _
_ _ _ X X _ _ _
_ _ X _ X _ _ _
_ _ X _ X _ _ _
_ X _ _ X _ _ _
_ X _ _ X _ _ _
X X X X X X _ _
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_34_width = 8;
static unsigned int fixed_34_height = 15;
static unsigned int fixed_34_aw = 7;

static unsigned char fixed_35_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X X _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
X _ _ _ _ _ _ _
X X X X X _ _ _
X _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_35_width = 8;
static unsigned int fixed_35_height = 15;
static unsigned int fixed_35_aw = 7;

static unsigned char fixed_36_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
X _ _ _ _ _ _ _
X _ _ _ _ _ _ _
X _ X X X _ _ _
X X _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_36_width = 8;
static unsigned int fixed_36_height = 15;
static unsigned int fixed_36_aw = 7;

static unsigned char fixed_37_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
X X X X X X _ _
_ _ _ _ X _ _ _
_ _ _ _ X _ _ _
_ _ _ X _ _ _ _
_ _ _ X _ _ _ _
_ _ X _ _ _ _ _
_ _ X _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_37_width = 8;
static unsigned int fixed_37_height = 15;
static unsigned int fixed_37_aw = 7;

static unsigned char fixed_38_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_38_width = 8;
static unsigned int fixed_38_height = 15;
static unsigned int fixed_38_aw = 7;

static unsigned char fixed_39_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X X _ _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ _ X _ _
X _ _ _ X X _ _
_ X X X _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
X _ _ _ X _ _ _
_ X X X _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_39_width = 8;
static unsigned int fixed_39_height = 15;
static unsigned int fixed_39_aw = 7;

static unsigned char fixed_3a_data[] = {
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_3a_width = 4;
static unsigned int fixed_3a_height = 15;
static unsigned int fixed_3a_aw = 3;

static unsigned char fixed_3b_data[] = {
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
};
static unsigned int fixed_3b_width = 4;
static unsigned int fixed_3b_height = 15;
static unsigned int fixed_3b_aw = 3;

static unsigned char fixed_3c_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ X _
_ _ _ _ X X _ _
_ _ X X _ _ _ _
_ X _ _ _ _ _ _
_ _ X X _ _ _ _
_ _ _ _ X X _ _
_ _ _ _ _ _ X _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_3c_width = 8;
static unsigned int fixed_3c_height = 15;
static unsigned int fixed_3c_aw = 7;

static unsigned char fixed_3d_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
X X X X X X X _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
X X X X X X X _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_3d_width = 8;
static unsigned int fixed_3d_height = 15;
static unsigned int fixed_3d_aw = 7;

static unsigned char fixed_3e_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ _ _ _ _ _
_ _ X X _ _ _ _
_ _ _ _ X X _ _
_ _ _ _ _ _ X _
_ _ _ _ X X _ _
_ _ X X _ _ _ _
_ X _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_3e_width = 8;
static unsigned int fixed_3e_height = 15;
static unsigned int fixed_3e_aw = 7;

static unsigned char fixed_3f_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X X _ _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ X _ _ _
_ _ _ X _ _ _ _
_ _ X _ _ _ _ _
_ _ X _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_3f_width = 8;
static unsigned int fixed_3f_height = 15;
static unsigned int fixed_3f_aw = 7;

static unsigned char fixed_40_data[] = {
_ _ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ X X X X X _ _ _ _ _
_ _ X X _ _ _ _ _ X _ _ _ _
_ X _ _ _ _ _ _ _ _ X _ _ _
_ X _ _ X X X _ X _ _ X _ _
X _ _ X _ _ _ X X _ _ X _ _
X _ X _ _ _ _ _ X _ _ X _ _
X _ X _ _ _ _ X _ _ _ X _ _
X _ X _ _ _ _ X _ _ X _ _ _
X _ X _ _ _ X X _ _ X _ _ _
X _ _ X X X _ X X X _ _ _ _
_ X _ _ _ _ _ _ _ _ _ X _ _
_ _ X _ _ _ _ _ _ X X _ _ _
_ _ _ X X X X X X _ _ _ _ _
};
static unsigned int fixed_40_width = 14;
static unsigned int fixed_40_height = 15;
static unsigned int fixed_40_aw = 13;

static unsigned char fixed_41_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ X _ X _ _ _ _
_ _ X _ _ _ X _ _ _
_ _ X _ _ _ X _ _ _
_ X X X X X X X _ _
_ X _ _ _ _ _ X _ _
X _ _ _ _ _ _ _ X _
X _ _ _ _ _ _ _ X _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_41_width = 10;
static unsigned int fixed_41_height = 15;
static unsigned int fixed_41_aw = 8;

static unsigned char fixed_42_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X X X X X X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X X X X X X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X X X X X X _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_42_width = 10;
static unsigned int fixed_42_height = 15;
static unsigned int fixed_42_aw = 8;

static unsigned char fixed_43_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ X X X _ _ _ _
_ _ X _ _ _ X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ X _ _
_ _ X _ _ _ X _ _ _
_ _ _ X X X _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_43_width = 10;
static unsigned int fixed_43_height = 15;
static unsigned int fixed_43_aw = 9;

static unsigned char fixed_44_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X X X X X _ _ _ _
_ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ X _ _ _
_ X X X X X _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_44_width = 10;
static unsigned int fixed_44_height = 15;
static unsigned int fixed_44_aw = 9;

static unsigned char fixed_45_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X X X X X X X _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X X X X X X X _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X X X X X X X _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_45_width = 10;
static unsigned int fixed_45_height = 15;
static unsigned int fixed_45_aw = 8;

static unsigned char fixed_46_data[] = {
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ X X X X X X _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ X X X X X _ _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
};
static unsigned int fixed_46_width = 9;
static unsigned int fixed_46_height = 15;
static unsigned int fixed_46_aw = 7;

static unsigned char fixed_47_data[] = {
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ X X X X _ _ _ _
_ _ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _ _
_ X _ _ _ X X X X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ _ X _ _ _ _ X _ _ _
_ _ _ X X X X _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_47_width = 11;
static unsigned int fixed_47_height = 15;
static unsigned int fixed_47_aw = 10;

static unsigned char fixed_48_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X X X X X X X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_48_width = 10;
static unsigned int fixed_48_height = 15;
static unsigned int fixed_48_aw = 9;

static unsigned char fixed_49_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_49_width = 4;
static unsigned int fixed_49_height = 15;
static unsigned int fixed_49_aw = 3;

static unsigned char fixed_4a_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ _ X _ _
X _ _ _ X _ _
X _ _ _ X _ _
_ X X X _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_4a_width = 7;
static unsigned int fixed_4a_height = 15;
static unsigned int fixed_4a_aw = 6;

static unsigned char fixed_4b_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ X _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ X _ _ _
_ X _ _ _ X _ _ _ _
_ X _ _ X _ _ _ _ _
_ X _ X X _ _ _ _ _
_ X X _ _ X _ _ _ _
_ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_4b_width = 10;
static unsigned int fixed_4b_height = 15;
static unsigned int fixed_4b_aw = 8;

static unsigned char fixed_4c_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X X X X X X _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_4c_width = 8;
static unsigned int fixed_4c_height = 15;
static unsigned int fixed_4c_aw = 7;

static unsigned char fixed_4d_data[] = {
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ X _ _
_ X X _ _ _ _ _ X X _ _
_ X X _ _ _ _ _ X X _ _
_ X _ X _ _ _ X _ X _ _
_ X _ X _ _ _ X _ X _ _
_ X _ _ X _ X _ _ X _ _
_ X _ _ X _ X _ _ X _ _
_ X _ _ X _ X _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_4d_width = 12;
static unsigned int fixed_4d_height = 15;
static unsigned int fixed_4d_aw = 10;

static unsigned char fixed_4e_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ X _ _
_ X X _ _ _ _ X _ _
_ X _ X _ _ _ X _ _
_ X _ X _ _ _ X _ _
_ X _ _ X _ _ X _ _
_ X _ _ X _ _ X _ _
_ X _ _ _ X _ X _ _
_ X _ _ _ X _ X _ _
_ X _ _ _ _ X X _ _
_ X _ _ _ _ _ X _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_4e_width = 10;
static unsigned int fixed_4e_height = 15;
static unsigned int fixed_4e_aw = 9;

static unsigned char fixed_4f_data[] = {
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ X X X X _ _ _ _
_ _ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ _ X _ _ _ _ X _ _ _
_ _ _ X X X X _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_4f_width = 11;
static unsigned int fixed_4f_height = 15;
static unsigned int fixed_4f_aw = 10;

static unsigned char fixed_50_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X X X X X X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X X X X X X _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ X _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_50_width = 10;
static unsigned int fixed_50_height = 15;
static unsigned int fixed_50_aw = 8;

static unsigned char fixed_51_data[] = {
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ X X X X _ _ _ _
_ _ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ X _ _
_ X _ _ _ X X _ X _ _
_ _ X _ _ _ _ X _ _ _
_ _ _ X X X X _ X _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_51_width = 11;
static unsigned int fixed_51_height = 15;
static unsigned int fixed_51_aw = 10;

static unsigned char fixed_52_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X X X X X X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X X X X X X _ _ _
_ X _ _ _ X _ _ _ _
_ X _ _ _ _ X _ _ _
_ X _ _ _ _ X _ _ _
_ X _ _ _ _ _ X _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_52_width = 10;
static unsigned int fixed_52_height = 15;
static unsigned int fixed_52_aw = 9;

static unsigned char fixed_53_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ X X X X X _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ _ _ _
_ _ X X X _ _ _ _ _
_ _ _ _ _ X X _ _ _
_ _ _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ _ X X X X X _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_53_width = 10;
static unsigned int fixed_53_height = 15;
static unsigned int fixed_53_aw = 8;

static unsigned char fixed_54_data[] = {
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
X X X X X X X _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
};
static unsigned int fixed_54_width = 9;
static unsigned int fixed_54_height = 15;
static unsigned int fixed_54_aw = 7;

static unsigned char fixed_55_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ _ X _ _ _ X _ _ _
_ _ _ X X X _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_55_width = 10;
static unsigned int fixed_55_height = 15;
static unsigned int fixed_55_aw = 9;

static unsigned char fixed_56_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
X _ _ _ _ _ _ _ X _
X _ _ _ _ _ _ _ X _
_ X _ _ _ _ _ X _ _
_ X _ _ _ _ _ X _ _
_ _ X _ _ _ X _ _ _
_ _ X _ _ _ X _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_56_width = 10;
static unsigned int fixed_56_height = 15;
static unsigned int fixed_56_aw = 8;

static unsigned char fixed_57_data[] = {
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
X _ _ _ _ _ X _ _ _ _ _ X
X _ _ _ _ X _ X _ _ _ _ X
_ X _ _ _ X _ X _ _ _ X _
_ X _ _ _ X _ X _ _ _ X _
_ X _ _ _ X _ X _ _ _ X _
_ _ X _ X _ _ _ X _ X _ _
_ _ X _ X _ _ _ X _ X _ _
_ _ X _ X _ _ _ X _ X _ _
_ _ _ X _ _ _ _ _ X _ _ _
_ _ _ X _ _ _ _ _ X _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_57_width = 13;
static unsigned int fixed_57_height = 15;
static unsigned int fixed_57_aw = 12;

static unsigned char fixed_58_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
X _ _ _ _ _ X _ _ _
_ X _ _ _ X _ _ _ _
_ X _ _ _ X _ _ _ _
_ _ X _ X _ _ _ _ _
_ _ _ X _ _ _ _ _ _
_ _ _ X _ _ _ _ _ _
_ _ X _ X _ _ _ _ _
_ X _ _ _ X _ _ _ _
_ X _ _ _ X _ _ _ _
X _ _ _ _ _ X _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_58_width = 10;
static unsigned int fixed_58_height = 15;
static unsigned int fixed_58_aw = 8;

static unsigned char fixed_59_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ X _ _ _ _ _ X _ _
_ _ X _ _ _ X _ _ _
_ _ X _ _ _ X _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ X _ X _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ X _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_59_width = 10;
static unsigned int fixed_59_height = 15;
static unsigned int fixed_59_aw = 8;

static unsigned char fixed_5a_data[] = {
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ X X X X X X _ _
_ _ _ _ _ X _ _ _
_ _ _ _ X _ _ _ _
_ _ _ _ X _ _ _ _
_ _ _ X _ _ _ _ _
_ _ _ X _ _ _ _ _
_ _ X _ _ _ _ _ _
_ _ X _ _ _ _ _ _
_ X _ _ _ _ _ _ _
X X X X X X X _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _
};
static unsigned int fixed_5a_width = 9;
static unsigned int fixed_5a_height = 15;
static unsigned int fixed_5a_aw = 7;

static unsigned char fixed_5b_data[] = {
_ _ _ _
_ _ _ _
_ X X _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X X _
};
static unsigned int fixed_5b_width = 4;
static unsigned int fixed_5b_height = 15;
static unsigned int fixed_5b_aw = 3;

static unsigned char fixed_5c_data[] = {
_ _ _ _
_ _ _ _
X _ _ _
X _ _ _
_ X _ _
_ X _ _
_ X _ _
_ _ X _
_ _ X _
_ _ X _
_ _ _ X
_ _ _ X
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_5c_width = 4;
static unsigned int fixed_5c_height = 15;
static unsigned int fixed_5c_aw = 3;

static unsigned char fixed_5d_data[] = {
_ _ _ _
_ _ _ _
_ X X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ _ X _
_ X X _
};
static unsigned int fixed_5d_width = 4;
static unsigned int fixed_5d_height = 15;
static unsigned int fixed_5d_aw = 3;

static unsigned char fixed_5e_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ X _ _ _ _
_ X _ X _ _ _
_ X _ X _ _ _
_ X _ X _ _ _
X _ _ _ X _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_5e_width = 7;
static unsigned int fixed_5e_height = 15;
static unsigned int fixed_5e_aw = 6;

static unsigned char fixed_5f_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
X X X X X X X _
};
static unsigned int fixed_5f_width = 8;
static unsigned int fixed_5f_height = 15;
static unsigned int fixed_5f_aw = 7;

static unsigned char fixed_60_data[] = {
_ _ _ _ _
_ _ _ _ _
_ X _ _ _
_ _ X _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
};
static unsigned int fixed_60_width = 5;
static unsigned int fixed_60_height = 15;
static unsigned int fixed_60_aw = 4;

static unsigned char fixed_61_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X X _ _ _
_ X _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ X X X X _ _
_ X _ _ _ X _ _
_ X _ _ X X _ _
_ _ X X _ X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_61_width = 8;
static unsigned int fixed_61_height = 15;
static unsigned int fixed_61_aw = 7;

static unsigned char fixed_62_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ X X _ _ _
_ X X _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_62_width = 8;
static unsigned int fixed_62_height = 15;
static unsigned int fixed_62_aw = 7;

static unsigned char fixed_63_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ X X X _ _
_ X _ _ _ X _
_ X _ _ _ _ _
_ X _ _ _ _ _
_ X _ _ _ _ _
_ X _ _ _ X _
_ _ X X X _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_63_width = 7;
static unsigned int fixed_63_height = 15;
static unsigned int fixed_63_aw = 6;

static unsigned char fixed_64_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ X X _ X _ _
_ X _ _ X X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ X X X X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_64_width = 8;
static unsigned int fixed_64_height = 15;
static unsigned int fixed_64_aw = 7;

static unsigned char fixed_65_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X X _ _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X X X X X _ _
_ X _ _ _ _ _ _
_ X _ _ _ X _ _
_ _ X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_65_width = 8;
static unsigned int fixed_65_height = 15;
static unsigned int fixed_65_aw = 7;

static unsigned char fixed_66_data[] = {
_ _ _ _
_ _ _ _
_ _ X X
_ X _ _
_ X _ _
X X X _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_66_width = 4;
static unsigned int fixed_66_height = 15;
static unsigned int fixed_66_aw = 3;

static unsigned char fixed_67_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X _ X _ _
_ X _ _ X X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ X X _ _
_ _ X X _ X _ _
_ _ _ _ _ X _ _
_ X _ _ _ X _ _
_ _ X X X _ _ _
};
static unsigned int fixed_67_width = 8;
static unsigned int fixed_67_height = 15;
static unsigned int fixed_67_aw = 7;

static unsigned char fixed_68_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ X X _ _ _
_ X X _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_68_width = 8;
static unsigned int fixed_68_height = 15;
static unsigned int fixed_68_aw = 7;

static unsigned char fixed_69_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_69_width = 4;
static unsigned int fixed_69_height = 15;
static unsigned int fixed_69_aw = 2;

static unsigned char fixed_6a_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
X _ _ _
};
static unsigned int fixed_6a_width = 4;
static unsigned int fixed_6a_height = 15;
static unsigned int fixed_6a_aw = 2;

static unsigned char fixed_6b_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ X _ _ _ _ _
_ X _ _ _ _ _
_ X _ _ _ _ _
_ X _ _ _ X _
_ X _ _ X _ _
_ X _ X _ _ _
_ X X X _ _ _
_ X _ _ X _ _
_ X _ _ X _ _
_ X _ _ _ X _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_6b_width = 7;
static unsigned int fixed_6b_height = 15;
static unsigned int fixed_6b_aw = 6;

static unsigned char fixed_6c_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_6c_width = 4;
static unsigned int fixed_6c_height = 15;
static unsigned int fixed_6c_aw = 2;

static unsigned char fixed_6d_data[] = {
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ X _ X X _ _ X X _ _ _
_ X X _ _ X X _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ X _ _ _ X _ _ _ X _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_6d_width = 12;
static unsigned int fixed_6d_height = 15;
static unsigned int fixed_6d_aw = 10;

static unsigned char fixed_6e_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ X X _ _ _
_ X X _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_6e_width = 8;
static unsigned int fixed_6e_height = 15;
static unsigned int fixed_6e_aw = 7;

static unsigned char fixed_6f_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X X _ _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ X X X _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_6f_width = 8;
static unsigned int fixed_6f_height = 15;
static unsigned int fixed_6f_aw = 7;

static unsigned char fixed_70_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ X X _ _ _
_ X X _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X X _ _ X _ _
_ X _ X X _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
_ X _ _ _ _ _ _
};
static unsigned int fixed_70_width = 8;
static unsigned int fixed_70_height = 15;
static unsigned int fixed_70_aw = 7;

static unsigned char fixed_71_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ X X _ X _ _
_ X _ _ X X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ X X _ _
_ _ X X _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
_ _ _ _ _ X _ _
};
static unsigned int fixed_71_width = 8;
static unsigned int fixed_71_height = 15;
static unsigned int fixed_71_aw = 7;

static unsigned char fixed_72_data[] = {
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
_ X _ X _
_ X X _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ _ _ _ _
_ _ _ _ _
_ _ _ _ _
};
static unsigned int fixed_72_width = 5;
static unsigned int fixed_72_height = 15;
static unsigned int fixed_72_aw = 4;

static unsigned char fixed_73_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ X X X _ _
_ X _ _ _ X _
_ X _ _ _ _ _
_ _ X X X _ _
_ _ _ _ _ X _
_ X _ _ _ X _
_ _ X X X _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_73_width = 7;
static unsigned int fixed_73_height = 15;
static unsigned int fixed_73_aw = 6;

static unsigned char fixed_74_data[] = {
_ _ _ _
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
X X X _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X X _
_ _ _ _
_ _ _ _
_ _ _ _
};
static unsigned int fixed_74_width = 4;
static unsigned int fixed_74_height = 15;
static unsigned int fixed_74_aw = 3;

static unsigned char fixed_75_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ X _ _ _ X _ _
_ _ X X X X _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_75_width = 8;
static unsigned int fixed_75_height = 15;
static unsigned int fixed_75_aw = 7;

static unsigned char fixed_76_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
X _ _ _ X _ _
X _ _ _ X _ _
_ X _ X _ _ _
_ X _ X _ _ _
_ X _ X _ _ _
_ _ X _ _ _ _
_ _ X _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_76_width = 7;
static unsigned int fixed_76_height = 15;
static unsigned int fixed_76_aw = 6;

static unsigned char fixed_77_data[] = {
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
X _ _ _ X _ _ _ X _
X _ _ _ X _ _ _ X _
_ X _ X _ X _ X _ _
_ X _ X _ X _ X _ _
_ X _ X _ X _ X _ _
_ _ X _ _ _ X _ _ _
_ _ X _ _ _ X _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _ _ _
};
static unsigned int fixed_77_width = 10;
static unsigned int fixed_77_height = 15;
static unsigned int fixed_77_aw = 9;

static unsigned char fixed_78_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ X _ _ _ X _
_ _ X _ X _ _
_ _ X _ X _ _
_ _ _ X _ _ _
_ _ X _ X _ _
_ _ X _ X _ _
_ X _ _ _ X _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_78_width = 7;
static unsigned int fixed_78_height = 15;
static unsigned int fixed_78_aw = 6;

static unsigned char fixed_79_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ X _ _ _ X _
_ X _ _ _ X _
_ _ X _ X _ _
_ _ X _ X _ _
_ _ X _ X _ _
_ _ _ X _ _ _
_ _ _ X _ _ _
_ _ _ X _ _ _
_ _ _ X _ _ _
_ X X _ _ _ _
};
static unsigned int fixed_79_width = 7;
static unsigned int fixed_79_height = 15;
static unsigned int fixed_79_aw = 6;

static unsigned char fixed_7a_data[] = {
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ X X X X X _
_ _ _ _ X _ _
_ _ _ _ X _ _
_ _ _ X _ _ _
_ _ X _ _ _ _
_ _ X _ _ _ _
_ X X X X X _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
_ _ _ _ _ _ _
};
static unsigned int fixed_7a_width = 7;
static unsigned int fixed_7a_height = 15;
static unsigned int fixed_7a_aw = 6;

static unsigned char fixed_7b_data[] = {
_ _ _ _ _
_ _ _ _ _
_ _ X _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
X _ _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ X _ _ _
_ _ X _ _
};
static unsigned int fixed_7b_width = 5;
static unsigned int fixed_7b_height = 15;
static unsigned int fixed_7b_aw = 4;

static unsigned char fixed_7c_data[] = {
_ _ _ _
_ _ _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ X _ _
_ _ _ _
};
static unsigned int fixed_7c_width = 4;
static unsigned int fixed_7c_height = 15;
static unsigned int fixed_7c_aw = 3;

static unsigned char fixed_7d_data[] = {
_ _ _ _ _
_ _ _ _ _
_ X _ _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ _ X _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ _ X _ _
_ X _ _ _
};
static unsigned int fixed_7d_width = 5;
static unsigned int fixed_7d_height = 15;
static unsigned int fixed_7d_aw = 4;

static unsigned char fixed_7e_data[] = {
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ X X X _ _ X _
X _ _ X X X X _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
_ _ _ _ _ _ _ _
};
static unsigned int fixed_7e_width = 8;
static unsigned int fixed_7e_height = 15;
static unsigned int fixed_7e_aw = 7;

#undef X
#undef _
void fixed_kernings_setup()
{
	fixed_data[0x00] = fixed_20_data;
	fixed_width[0x00] = fixed_20_width;
	fixed_height[0x00] = fixed_20_height;
	fixed_aw[0x00] = fixed_20_aw;
	fixed_data[0x01] = fixed_21_data;
	fixed_width[0x01] = fixed_21_width;
	fixed_height[0x01] = fixed_21_height;
	fixed_aw[0x01] = fixed_21_aw;
	fixed_data[0x02] = fixed_22_data;
	fixed_width[0x02] = fixed_22_width;
	fixed_height[0x02] = fixed_22_height;
	fixed_aw[0x02] = fixed_22_aw;
	fixed_data[0x03] = fixed_23_data;
	fixed_width[0x03] = fixed_23_width;
	fixed_height[0x03] = fixed_23_height;
	fixed_aw[0x03] = fixed_23_aw;
	fixed_data[0x04] = fixed_24_data;
	fixed_width[0x04] = fixed_24_width;
	fixed_height[0x04] = fixed_24_height;
	fixed_aw[0x04] = fixed_24_aw;
	fixed_data[0x05] = fixed_25_data;
	fixed_width[0x05] = fixed_25_width;
	fixed_height[0x05] = fixed_25_height;
	fixed_aw[0x05] = fixed_25_aw;
	fixed_data[0x06] = fixed_26_data;
	fixed_width[0x06] = fixed_26_width;
	fixed_height[0x06] = fixed_26_height;
	fixed_aw[0x06] = fixed_26_aw;
	fixed_data[0x07] = fixed_27_data;
	fixed_width[0x07] = fixed_27_width;
	fixed_height[0x07] = fixed_27_height;
	fixed_aw[0x07] = fixed_27_aw;
	fixed_data[0x08] = fixed_28_data;
	fixed_width[0x08] = fixed_28_width;
	fixed_height[0x08] = fixed_28_height;
	fixed_aw[0x08] = fixed_28_aw;
	fixed_data[0x09] = fixed_29_data;
	fixed_width[0x09] = fixed_29_width;
	fixed_height[0x09] = fixed_29_height;
	fixed_aw[0x09] = fixed_29_aw;
	fixed_data[0x0a] = fixed_2a_data;
	fixed_width[0x0a] = fixed_2a_width;
	fixed_height[0x0a] = fixed_2a_height;
	fixed_aw[0x0a] = fixed_2a_aw;
	fixed_data[0x0b] = fixed_2b_data;
	fixed_width[0x0b] = fixed_2b_width;
	fixed_height[0x0b] = fixed_2b_height;
	fixed_aw[0x0b] = fixed_2b_aw;
	fixed_data[0x0c] = fixed_2c_data;
	fixed_width[0x0c] = fixed_2c_width;
	fixed_height[0x0c] = fixed_2c_height;
	fixed_aw[0x0c] = fixed_2c_aw;
	fixed_data[0x0d] = fixed_2d_data;
	fixed_width[0x0d] = fixed_2d_width;
	fixed_height[0x0d] = fixed_2d_height;
	fixed_aw[0x0d] = fixed_2d_aw;
	fixed_data[0x0e] = fixed_2e_data;
	fixed_width[0x0e] = fixed_2e_width;
	fixed_height[0x0e] = fixed_2e_height;
	fixed_aw[0x0e] = fixed_2e_aw;
	fixed_data[0x0f] = fixed_2f_data;
	fixed_width[0x0f] = fixed_2f_width;
	fixed_height[0x0f] = fixed_2f_height;
	fixed_aw[0x0f] = fixed_2f_aw;
	fixed_data[0x10] = fixed_30_data;
	fixed_width[0x10] = fixed_30_width;
	fixed_height[0x10] = fixed_30_height;
	fixed_aw[0x10] = fixed_30_aw;
	fixed_data[0x11] = fixed_31_data;
	fixed_width[0x11] = fixed_31_width;
	fixed_height[0x11] = fixed_31_height;
	fixed_aw[0x11] = fixed_31_aw;
	fixed_data[0x12] = fixed_32_data;
	fixed_width[0x12] = fixed_32_width;
	fixed_height[0x12] = fixed_32_height;
	fixed_aw[0x12] = fixed_32_aw;
	fixed_data[0x13] = fixed_33_data;
	fixed_width[0x13] = fixed_33_width;
	fixed_height[0x13] = fixed_33_height;
	fixed_aw[0x13] = fixed_33_aw;
	fixed_data[0x14] = fixed_34_data;
	fixed_width[0x14] = fixed_34_width;
	fixed_height[0x14] = fixed_34_height;
	fixed_aw[0x14] = fixed_34_aw;
	fixed_data[0x15] = fixed_35_data;
	fixed_width[0x15] = fixed_35_width;
	fixed_height[0x15] = fixed_35_height;
	fixed_aw[0x15] = fixed_35_aw;
	fixed_data[0x16] = fixed_36_data;
	fixed_width[0x16] = fixed_36_width;
	fixed_height[0x16] = fixed_36_height;
	fixed_aw[0x16] = fixed_36_aw;
	fixed_data[0x17] = fixed_37_data;
	fixed_width[0x17] = fixed_37_width;
	fixed_height[0x17] = fixed_37_height;
	fixed_aw[0x17] = fixed_37_aw;
	fixed_data[0x18] = fixed_38_data;
	fixed_width[0x18] = fixed_38_width;
	fixed_height[0x18] = fixed_38_height;
	fixed_aw[0x18] = fixed_38_aw;
	fixed_data[0x19] = fixed_39_data;
	fixed_width[0x19] = fixed_39_width;
	fixed_height[0x19] = fixed_39_height;
	fixed_aw[0x19] = fixed_39_aw;
	fixed_data[0x1a] = fixed_3a_data;
	fixed_width[0x1a] = fixed_3a_width;
	fixed_height[0x1a] = fixed_3a_height;
	fixed_aw[0x1a] = fixed_3a_aw;
	fixed_data[0x1b] = fixed_3b_data;
	fixed_width[0x1b] = fixed_3b_width;
	fixed_height[0x1b] = fixed_3b_height;
	fixed_aw[0x1b] = fixed_3b_aw;
	fixed_data[0x1c] = fixed_3c_data;
	fixed_width[0x1c] = fixed_3c_width;
	fixed_height[0x1c] = fixed_3c_height;
	fixed_aw[0x1c] = fixed_3c_aw;
	fixed_data[0x1d] = fixed_3d_data;
	fixed_width[0x1d] = fixed_3d_width;
	fixed_height[0x1d] = fixed_3d_height;
	fixed_aw[0x1d] = fixed_3d_aw;
	fixed_data[0x1e] = fixed_3e_data;
	fixed_width[0x1e] = fixed_3e_width;
	fixed_height[0x1e] = fixed_3e_height;
	fixed_aw[0x1e] = fixed_3e_aw;
	fixed_data[0x1f] = fixed_3f_data;
	fixed_width[0x1f] = fixed_3f_width;
	fixed_height[0x1f] = fixed_3f_height;
	fixed_aw[0x1f] = fixed_3f_aw;
	fixed_data[0x20] = fixed_40_data;
	fixed_width[0x20] = fixed_40_width;
	fixed_height[0x20] = fixed_40_height;
	fixed_aw[0x20] = fixed_40_aw;
	fixed_data[0x21] = fixed_41_data;
	fixed_width[0x21] = fixed_41_width;
	fixed_height[0x21] = fixed_41_height;
	fixed_aw[0x21] = fixed_41_aw;
	fixed_data[0x22] = fixed_42_data;
	fixed_width[0x22] = fixed_42_width;
	fixed_height[0x22] = fixed_42_height;
	fixed_aw[0x22] = fixed_42_aw;
	fixed_data[0x23] = fixed_43_data;
	fixed_width[0x23] = fixed_43_width;
	fixed_height[0x23] = fixed_43_height;
	fixed_aw[0x23] = fixed_43_aw;
	fixed_data[0x24] = fixed_44_data;
	fixed_width[0x24] = fixed_44_width;
	fixed_height[0x24] = fixed_44_height;
	fixed_aw[0x24] = fixed_44_aw;
	fixed_data[0x25] = fixed_45_data;
	fixed_width[0x25] = fixed_45_width;
	fixed_height[0x25] = fixed_45_height;
	fixed_aw[0x25] = fixed_45_aw;
	fixed_data[0x26] = fixed_46_data;
	fixed_width[0x26] = fixed_46_width;
	fixed_height[0x26] = fixed_46_height;
	fixed_aw[0x26] = fixed_46_aw;
	fixed_data[0x27] = fixed_47_data;
	fixed_width[0x27] = fixed_47_width;
	fixed_height[0x27] = fixed_47_height;
	fixed_aw[0x27] = fixed_47_aw;
	fixed_data[0x28] = fixed_48_data;
	fixed_width[0x28] = fixed_48_width;
	fixed_height[0x28] = fixed_48_height;
	fixed_aw[0x28] = fixed_48_aw;
	fixed_data[0x29] = fixed_49_data;
	fixed_width[0x29] = fixed_49_width;
	fixed_height[0x29] = fixed_49_height;
	fixed_aw[0x29] = fixed_49_aw;
	fixed_data[0x2a] = fixed_4a_data;
	fixed_width[0x2a] = fixed_4a_width;
	fixed_height[0x2a] = fixed_4a_height;
	fixed_aw[0x2a] = fixed_4a_aw;
	fixed_data[0x2b] = fixed_4b_data;
	fixed_width[0x2b] = fixed_4b_width;
	fixed_height[0x2b] = fixed_4b_height;
	fixed_aw[0x2b] = fixed_4b_aw;
	fixed_data[0x2c] = fixed_4c_data;
	fixed_width[0x2c] = fixed_4c_width;
	fixed_height[0x2c] = fixed_4c_height;
	fixed_aw[0x2c] = fixed_4c_aw;
	fixed_data[0x2d] = fixed_4d_data;
	fixed_width[0x2d] = fixed_4d_width;
	fixed_height[0x2d] = fixed_4d_height;
	fixed_aw[0x2d] = fixed_4d_aw;
	fixed_data[0x2e] = fixed_4e_data;
	fixed_width[0x2e] = fixed_4e_width;
	fixed_height[0x2e] = fixed_4e_height;
	fixed_aw[0x2e] = fixed_4e_aw;
	fixed_data[0x2f] = fixed_4f_data;
	fixed_width[0x2f] = fixed_4f_width;
	fixed_height[0x2f] = fixed_4f_height;
	fixed_aw[0x2f] = fixed_4f_aw;
	fixed_data[0x30] = fixed_50_data;
	fixed_width[0x30] = fixed_50_width;
	fixed_height[0x30] = fixed_50_height;
	fixed_aw[0x30] = fixed_50_aw;
	fixed_data[0x31] = fixed_51_data;
	fixed_width[0x31] = fixed_51_width;
	fixed_height[0x31] = fixed_51_height;
	fixed_aw[0x31] = fixed_51_aw;
	fixed_data[0x32] = fixed_52_data;
	fixed_width[0x32] = fixed_52_width;
	fixed_height[0x32] = fixed_52_height;
	fixed_aw[0x32] = fixed_52_aw;
	fixed_data[0x33] = fixed_53_data;
	fixed_width[0x33] = fixed_53_width;
	fixed_height[0x33] = fixed_53_height;
	fixed_aw[0x33] = fixed_53_aw;
	fixed_data[0x34] = fixed_54_data;
	fixed_width[0x34] = fixed_54_width;
	fixed_height[0x34] = fixed_54_height;
	fixed_aw[0x34] = fixed_54_aw;
	fixed_data[0x35] = fixed_55_data;
	fixed_width[0x35] = fixed_55_width;
	fixed_height[0x35] = fixed_55_height;
	fixed_aw[0x35] = fixed_55_aw;
	fixed_data[0x36] = fixed_56_data;
	fixed_width[0x36] = fixed_56_width;
	fixed_height[0x36] = fixed_56_height;
	fixed_aw[0x36] = fixed_56_aw;
	fixed_data[0x37] = fixed_57_data;
	fixed_width[0x37] = fixed_57_width;
	fixed_height[0x37] = fixed_57_height;
	fixed_aw[0x37] = fixed_57_aw;
	fixed_data[0x38] = fixed_58_data;
	fixed_width[0x38] = fixed_58_width;
	fixed_height[0x38] = fixed_58_height;
	fixed_aw[0x38] = fixed_58_aw;
	fixed_data[0x39] = fixed_59_data;
	fixed_width[0x39] = fixed_59_width;
	fixed_height[0x39] = fixed_59_height;
	fixed_aw[0x39] = fixed_59_aw;
	fixed_data[0x3a] = fixed_5a_data;
	fixed_width[0x3a] = fixed_5a_width;
	fixed_height[0x3a] = fixed_5a_height;
	fixed_aw[0x3a] = fixed_5a_aw;
	fixed_data[0x3b] = fixed_5b_data;
	fixed_width[0x3b] = fixed_5b_width;
	fixed_height[0x3b] = fixed_5b_height;
	fixed_aw[0x3b] = fixed_5b_aw;
	fixed_data[0x3c] = fixed_5c_data;
	fixed_width[0x3c] = fixed_5c_width;
	fixed_height[0x3c] = fixed_5c_height;
	fixed_aw[0x3c] = fixed_5c_aw;
	fixed_data[0x3d] = fixed_5d_data;
	fixed_width[0x3d] = fixed_5d_width;
	fixed_height[0x3d] = fixed_5d_height;
	fixed_aw[0x3d] = fixed_5d_aw;
	fixed_data[0x3e] = fixed_5e_data;
	fixed_width[0x3e] = fixed_5e_width;
	fixed_height[0x3e] = fixed_5e_height;
	fixed_aw[0x3e] = fixed_5e_aw;
	fixed_data[0x3f] = fixed_5f_data;
	fixed_width[0x3f] = fixed_5f_width;
	fixed_height[0x3f] = fixed_5f_height;
	fixed_aw[0x3f] = fixed_5f_aw;
	fixed_data[0x40] = fixed_60_data;
	fixed_width[0x40] = fixed_60_width;
	fixed_height[0x40] = fixed_60_height;
	fixed_aw[0x40] = fixed_60_aw;
	fixed_data[0x41] = fixed_61_data;
	fixed_width[0x41] = fixed_61_width;
	fixed_height[0x41] = fixed_61_height;
	fixed_aw[0x41] = fixed_61_aw;
	fixed_data[0x42] = fixed_62_data;
	fixed_width[0x42] = fixed_62_width;
	fixed_height[0x42] = fixed_62_height;
	fixed_aw[0x42] = fixed_62_aw;
	fixed_data[0x43] = fixed_63_data;
	fixed_width[0x43] = fixed_63_width;
	fixed_height[0x43] = fixed_63_height;
	fixed_aw[0x43] = fixed_63_aw;
	fixed_data[0x44] = fixed_64_data;
	fixed_width[0x44] = fixed_64_width;
	fixed_height[0x44] = fixed_64_height;
	fixed_aw[0x44] = fixed_64_aw;
	fixed_data[0x45] = fixed_65_data;
	fixed_width[0x45] = fixed_65_width;
	fixed_height[0x45] = fixed_65_height;
	fixed_aw[0x45] = fixed_65_aw;
	fixed_data[0x46] = fixed_66_data;
	fixed_width[0x46] = fixed_66_width;
	fixed_height[0x46] = fixed_66_height;
	fixed_aw[0x46] = fixed_66_aw;
	fixed_data[0x47] = fixed_67_data;
	fixed_width[0x47] = fixed_67_width;
	fixed_height[0x47] = fixed_67_height;
	fixed_aw[0x47] = fixed_67_aw;
	fixed_data[0x48] = fixed_68_data;
	fixed_width[0x48] = fixed_68_width;
	fixed_height[0x48] = fixed_68_height;
	fixed_aw[0x48] = fixed_68_aw;
	fixed_data[0x49] = fixed_69_data;
	fixed_width[0x49] = fixed_69_width;
	fixed_height[0x49] = fixed_69_height;
	fixed_aw[0x49] = fixed_69_aw;
	fixed_data[0x4a] = fixed_6a_data;
	fixed_width[0x4a] = fixed_6a_width;
	fixed_height[0x4a] = fixed_6a_height;
	fixed_aw[0x4a] = fixed_6a_aw;
	fixed_data[0x4b] = fixed_6b_data;
	fixed_width[0x4b] = fixed_6b_width;
	fixed_height[0x4b] = fixed_6b_height;
	fixed_aw[0x4b] = fixed_6b_aw;
	fixed_data[0x4c] = fixed_6c_data;
	fixed_width[0x4c] = fixed_6c_width;
	fixed_height[0x4c] = fixed_6c_height;
	fixed_aw[0x4c] = fixed_6c_aw;
	fixed_data[0x4d] = fixed_6d_data;
	fixed_width[0x4d] = fixed_6d_width;
	fixed_height[0x4d] = fixed_6d_height;
	fixed_aw[0x4d] = fixed_6d_aw;
	fixed_data[0x4e] = fixed_6e_data;
	fixed_width[0x4e] = fixed_6e_width;
	fixed_height[0x4e] = fixed_6e_height;
	fixed_aw[0x4e] = fixed_6e_aw;
	fixed_data[0x4f] = fixed_6f_data;
	fixed_width[0x4f] = fixed_6f_width;
	fixed_height[0x4f] = fixed_6f_height;
	fixed_aw[0x4f] = fixed_6f_aw;
	fixed_data[0x50] = fixed_70_data;
	fixed_width[0x50] = fixed_70_width;
	fixed_height[0x50] = fixed_70_height;
	fixed_aw[0x50] = fixed_70_aw;
	fixed_data[0x51] = fixed_71_data;
	fixed_width[0x51] = fixed_71_width;
	fixed_height[0x51] = fixed_71_height;
	fixed_aw[0x51] = fixed_71_aw;
	fixed_data[0x52] = fixed_72_data;
	fixed_width[0x52] = fixed_72_width;
	fixed_height[0x52] = fixed_72_height;
	fixed_aw[0x52] = fixed_72_aw;
	fixed_data[0x53] = fixed_73_data;
	fixed_width[0x53] = fixed_73_width;
	fixed_height[0x53] = fixed_73_height;
	fixed_aw[0x53] = fixed_73_aw;
	fixed_data[0x54] = fixed_74_data;
	fixed_width[0x54] = fixed_74_width;
	fixed_height[0x54] = fixed_74_height;
	fixed_aw[0x54] = fixed_74_aw;
	fixed_data[0x55] = fixed_75_data;
	fixed_width[0x55] = fixed_75_width;
	fixed_height[0x55] = fixed_75_height;
	fixed_aw[0x55] = fixed_75_aw;
	fixed_data[0x56] = fixed_76_data;
	fixed_width[0x56] = fixed_76_width;
	fixed_height[0x56] = fixed_76_height;
	fixed_aw[0x56] = fixed_76_aw;
	fixed_data[0x57] = fixed_77_data;
	fixed_width[0x57] = fixed_77_width;
	fixed_height[0x57] = fixed_77_height;
	fixed_aw[0x57] = fixed_77_aw;
	fixed_data[0x58] = fixed_78_data;
	fixed_width[0x58] = fixed_78_width;
	fixed_height[0x58] = fixed_78_height;
	fixed_aw[0x58] = fixed_78_aw;
	fixed_data[0x59] = fixed_79_data;
	fixed_width[0x59] = fixed_79_width;
	fixed_height[0x59] = fixed_79_height;
	fixed_aw[0x59] = fixed_79_aw;
	fixed_data[0x5a] = fixed_7a_data;
	fixed_width[0x5a] = fixed_7a_width;
	fixed_height[0x5a] = fixed_7a_height;
	fixed_aw[0x5a] = fixed_7a_aw;
	fixed_data[0x5b] = fixed_7b_data;
	fixed_width[0x5b] = fixed_7b_width;
	fixed_height[0x5b] = fixed_7b_height;
	fixed_aw[0x5b] = fixed_7b_aw;
	fixed_data[0x5c] = fixed_7c_data;
	fixed_width[0x5c] = fixed_7c_width;
	fixed_height[0x5c] = fixed_7c_height;
	fixed_aw[0x5c] = fixed_7c_aw;
	fixed_data[0x5d] = fixed_7d_data;
	fixed_width[0x5d] = fixed_7d_width;
	fixed_height[0x5d] = fixed_7d_height;
	fixed_aw[0x5d] = fixed_7d_aw;
	fixed_data[0x5e] = fixed_7e_data;
	fixed_width[0x5e] = fixed_7e_width;
	fixed_height[0x5e] = fixed_7e_height;
	fixed_aw[0x5e] = fixed_7e_aw;

	fixed_kernings[0x2c46] = -1;
	fixed_kernings[0x2e46] = -1;
	fixed_kernings[0x2c50] = -1;
	fixed_kernings[0x2e50] = -1;
	fixed_kernings[0x2c54] = -1;
	fixed_kernings[0x2e54] = -1;
	fixed_kernings[0x3a54] = -1;
	fixed_kernings[0x3b54] = -1;
	fixed_kernings[0x6154] = -1;
	fixed_kernings[0x6354] = -1;
	fixed_kernings[0x6554] = -1;
	fixed_kernings[0x6f54] = -1;
	fixed_kernings[0x7354] = -1;
	fixed_kernings[0x2c56] = -1;
	fixed_kernings[0x2e56] = -1;
	fixed_kernings[0x2c59] = -1;
	fixed_kernings[0x2d59] = -1;
	fixed_kernings[0x2e59] = -1;
	fixed_kernings[0x6559] = -1;
	fixed_kernings[0x6f59] = -1;
	fixed_kernings[0x7159] = -1;
}
