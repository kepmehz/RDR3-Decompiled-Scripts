#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	struct<16> Local_15[2];
	int iLocal_48 = 0;
	int iLocal_49[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	struct<2907> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(Local_62))
		{
			func_2(&Global_1935630, 32768);
		}
		func_3(&Local_62, 1);
	}
	func_4(&uScriptParam_0, &Local_62);
	while (!func_5(&Local_62, 1))
	{
		if (func_6(&Local_62) != 10)
		{
			if ((func_6(&Local_62) == 3 || func_6(&Local_62) == 4) && (!func_7(&Local_62) || func_8(&(Local_62.f_958)) > 0))
			{
				func_9(&Local_62, func_5(&Local_62, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_62)) && func_5(&Local_62, 65536))
			{
				func_9(&Local_62, 1);
			}
		}
		if (func_6(&Local_62) >= 3 && func_6(&Local_62) <= 7)
		{
			func_11(&Local_62);
		}
		if (((((func_6(&Local_62) >= 5 && func_6(&Local_62) <= 7) && !func_5(&Local_62, 4096)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_62.f_428.f_444)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_62.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_62.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_62)}, 4);
			func_13(Var1, &(Local_62.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (func_6(&Local_62))
		{
			case 8:
				if (func_14(&Local_62))
				{
					func_15(&Local_62);
					func_16(&Local_62);
					func_17(&Local_62, 0);
				}
				else if (!func_10(&Local_62))
				{
					if (!func_18(&(Local_62.f_2899)))
					{
						func_19(&(Local_62.f_2899), 0);
					}
					if (!func_20(&Local_62))
					{
						if (func_21(&(Local_62.f_2899)) >= 1f)
						{
							func_22(Local_62.f_2889, 2097152);
							func_23(&Local_62);
							func_24(&Local_62);
							func_17(&Local_62, 10);
						}
					}
					else
					{
						if (!func_5(&Local_62, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_62, 536870912);
						}
						func_26(&(Local_62.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_62))
				{
					func_16(&Local_62);
				}
				if (!func_10(&Local_62) || func_5(&Local_62, 65536))
				{
					if (func_27(&Local_62))
					{
						func_17(&Local_62, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_62))
				{
					func_16(&Local_62);
				}
				if (func_28(&Local_62))
				{
					func_17(&Local_62, 2);
				}
				break;
			case 2:
				if (func_10(&Local_62))
				{
					func_16(&Local_62);
				}
				if (func_29(&Local_62))
				{
					if (!func_7(&Local_62) || func_10(&Local_62))
					{
						if (!func_30(Local_62.f_2889))
						{
							Local_62.f_2889 = func_32(func_31(Local_62));
						}
						func_22(Local_62.f_2889, 4);
						func_25(&Local_62, 8192);
					}
					if (func_10(&Local_62))
					{
						func_33(&Local_62);
						func_17(&Local_62, 9);
					}
					else
					{
						func_17(&Local_62, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_62))
				{
					func_34(&Local_62);
					func_15(&Local_62);
					func_35(&Local_62);
					if (!func_5(&Local_62, 256))
					{
						func_36(&Local_62);
						func_37(Local_62);
						func_38(&Local_62);
						func_17(&Local_62, 7);
					}
					else
					{
						func_17(&Local_62, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_62, 8192))
				{
					if (func_8(&(Local_62.f_958)) != 3)
					{
					}
					else
					{
						func_22(Local_62.f_2889, 4);
						func_25(&Local_62, 8192);
					}
				}
				func_39(&Local_62);
				if (func_40(func_32(Global_1835011[Local_62 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_62) || func_42(&Local_62, 32768))
				{
					func_34(&Local_62);
					func_15(&Local_62);
					func_17(&Local_62, 4);
					func_19(&(Local_62.f_2890), 0);
				}
				else if (func_10(&Local_62) && !func_1(Local_62))
				{
					if (!func_18(&(Local_62.f_2899)))
					{
						func_19(&(Local_62.f_2899), 0);
					}
					if (!func_20(&Local_62))
					{
						if (func_21(&(Local_62.f_2899)) >= 1f)
						{
							func_22(Local_62.f_2889, 2097152);
							func_23(&Local_62);
							func_24(&Local_62);
							func_17(&Local_62, 10);
						}
					}
					else
					{
						if (!func_5(&Local_62, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_62, 536870912);
						}
						func_26(&(Local_62.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_62);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_62) || (func_42(&Local_62, 32768) && !func_5(&Local_62, 268435456)))
				{
					func_35(&Local_62);
					if (!func_5(&Local_62, 256))
					{
						func_36(&Local_62);
						func_38(&Local_62);
						if (!func_45(Global_1935630, 524288) || func_42(&Local_62, 524288))
						{
							func_37(Local_62);
							func_17(&Local_62, 7);
						}
						else
						{
							func_17(&Local_62, 6);
						}
					}
					else
					{
						func_37(Local_62);
						func_17(&Local_62, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_62);
				func_47(&Local_62);
				if (func_48(&(Local_62.f_2884)) >= func_49(&Local_62))
				{
					func_36(&Local_62);
					func_38(&Local_62);
					func_26(&(Local_62.f_2884));
					if (!func_42(&Local_62, 524288))
					{
						func_37(Local_62);
						func_17(&Local_62, 7);
					}
					else
					{
						func_17(&Local_62, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_62.f_2906)))
				{
					func_19(&(Local_62.f_2906), 0);
				}
				if ((func_50(&(Local_62.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_62.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_62.f_428.f_444))
				{
					func_37(Local_62);
					func_17(&Local_62, 7);
				}
				else if (func_48(&(Local_62.f_2906)) >= 5f)
				{
					func_37(Local_62);
					func_17(&Local_62, 7);
				}
				break;
			case 7:
				func_51(&Local_62);
				if (func_52(&Local_62))
				{
					func_17(&Local_62, 10);
				}
				break;
			case 10:
				if (func_3(&Local_62, 0))
				{
					func_25(&Local_62, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return false;
	}
	return func_40(iVar0, 1024);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_56(iParam0);
	func_57(iParam0);
	func_58(iParam0);
	func_59(*iParam0);
	func_60(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (func_5(iParam0, 1024))
	{
		func_61(1);
		func_2(&Global_1935630, 32768);
	}
	else
	{
		func_62();
	}
	if (bParam1)
	{
		if (func_63(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		func_64(&(iParam0->f_958));
	}
	func_65(iParam0, 0);
	if (func_5(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		func_66(iParam0, 536870912);
	}
	if (bParam1)
	{
		func_67(1, 0, 0);
	}
	if (func_5(iParam0, -2147483648))
	{
		func_68();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_4(var uParam0, int iParam1)
{
	vector3 vVar0;

	*iParam1 = *uParam0;
	PED::_0xED9582B3DA8F02B4(10);
	iParam1->f_2889 = func_32(func_31(*uParam0));
	func_69(iParam1);
	if (func_10(iParam1))
	{
		func_70(&(iParam1->f_428));
		func_71(iParam1);
		func_25(iParam1, 16777216);
		func_17(iParam1, 8);
	}
	else
	{
		func_17(iParam1, 0);
	}
	if (!func_5(iParam1, 1073741824 /* Float: 2f */))
	{
		func_72(*iParam1);
		func_73(*iParam1);
	}
	vVar0 = { func_12(*iParam1) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		func_25(iParam1, 134217728);
	}
	func_19(&(iParam1->f_2896), 0);
	return 1;
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0->f_2 && iParam1) != 0;
}

int func_6(int iParam0)
{
	return iParam0->f_1;
}

bool func_7(int iParam0)
{
	if (func_5(iParam0, 16))
	{
		return false;
	}
	return func_5(iParam0, 524288);
}

int func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9(int iParam0, bool bParam1)
{
	vector3 vVar0[24];

	if (!CAM::IS_SCREEN_FADED_OUT() && !func_5(iParam0, 4))
	{
		if (func_48(&(iParam0->f_2896)) <= 0.5f)
		{
			return;
		}
		func_26(&(iParam0->f_2896));
		if ((func_74(0, 0, 1) && !func_5(iParam0, 65536)) && !func_40(iParam0->f_2889, 1024))
		{
			return;
		}
	}
	if (func_5(iParam0, 128))
	{
		return;
	}
	if (func_5(iParam0, 134217728))
	{
		if (!func_5(iParam0, 16777216))
		{
			func_75(iParam0, 16);
			if (func_7(iParam0))
			{
				func_76(iParam0);
			}
			func_25(iParam0, 16777216);
		}
		cVar0 = { func_12(*iParam0) };
		if (func_77(&(iParam0->f_428), &cVar0, bParam1, 0))
		{
			if (!func_40(iParam0->f_2889, 128))
			{
				func_22(iParam0->f_2889, 128);
			}
		}
		else if (func_40(iParam0->f_2889, 128))
		{
			func_78(iParam0->f_2889, 128);
		}
	}
}

bool func_10(int iParam0)
{
	if (func_5(iParam0, 65536))
	{
		return true;
	}
	if (!func_79(&(Global_1835011[*iParam0 /*74*/])))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0)
{
	int iVar0;

	if (!func_18(&(iParam0->f_2893)))
	{
		func_19(&(iParam0->f_2893), 0);
	}
	if (func_48(&(iParam0->f_2893)) >= 1f)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
		{
			iVar0 = func_80(7);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (!func_5(iParam0, 512))
				{
					PED::_0xE9B168527B337BF0(iVar0, iParam0->f_425);
					func_25(iParam0, 512);
				}
			}
			else if (func_5(iParam0, 512))
			{
				func_66(iParam0, 512);
			}
		}
		func_26(&(iParam0->f_2893));
	}
}

Vector3 func_12(int iParam0)
{
	vector3 vVar0;

	if (!func_81(iParam0))
	{
		return vVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_9;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	func_82(uParam4, &uParam0);
	if (func_83(uParam4, 2) && !func_83(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (func_50(uParam4) != 1)
	{
		func_84(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (func_50(uParam4))
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false))
				{
					func_85(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
				{
					func_86(uParam4, 4);
					return 0;
				}
				else if (func_87(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				func_86(uParam4, 3);
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && func_83(uParam4, 134217728))
				{
				}
				else
				{
					func_70(uParam4);
				}
				func_26(&(uParam4->f_1));
				func_86(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_88(uParam4);
				if (!func_18(&(uParam4->f_1)))
				{
					func_19(&(uParam4->f_1), 0);
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (func_77(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
					{
						func_86(uParam4, 4);
					}
					else if (!func_90(func_89(uParam4)) && !func_91(Global_35, func_89(uParam4), 100f, 1, 1))
					{
						func_92(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), func_89(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_48(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					func_86(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::STOP_CURRENT_LOADING_PROGRESS_TIMER();
					func_93(1, 0);
					func_85(uParam4, &uParam0);
					func_86(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (func_48(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				func_86(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (func_87(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444) || func_83(uParam4, 512)))
			{
				if (!func_83(uParam4, 1024) && func_95(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!func_83(uParam4, 512))
				{
					func_26(&(uParam4->f_1));
					func_96(uParam4, 512);
					func_86(uParam4, 4);
				}
				else if (func_83(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				func_84(uParam4);
			}
			if (func_83(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((func_97(uParam4) - func_98(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_98(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (func_100(uParam4))
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			else
			{
				if (func_83(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!func_83(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					func_104(&(uParam4->f_501), 0);
					func_96(uParam4, 536870912);
				}
				if (func_98(uParam4) >= 5000 && func_98(uParam4) <= (func_97(uParam4) - 5000))
				{
					func_105();
				}
			}
			break;
		case 6:
			if (func_100(uParam4))
			{
				func_101(uParam4);
				func_102(uParam4);
				return 1;
			}
			break;
		case 4:
			if (func_83(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						func_96(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9) != 0)
						{
							UIFEED::UI_FEED_CLEAR_CHANNEL(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_87(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
					else if (func_48(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						func_86(uParam4, 3);
					}
				}
				if (func_50(uParam4) == 3)
				{
					if (func_83(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			func_86(uParam4, 4);
			break;
	}
	return 0;
}

bool func_14(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "1-Day-MultiStart", 64);
	switch (iLocal_59)
	{
		case 0:
			func_106(19, 1);
			func_107(3);
			func_108(iParam0, "1-Day-MultiStart", 0);
			func_109(iParam0, cVar0);
			if (func_110(iParam0, 1, &iLocal_58, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				if (func_111(iLocal_58, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_58, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false);
					ENTITY::SET_ENTITY_COLLISION(iLocal_58, false, false);
					func_112(1, 16384, 0);
					func_112(1, 65536, 1);
					if (func_113(0, "script@story@mud4@ig@timelapse@mud4_saloon", "") && func_113(1, "script@story@mud4@ig@timelapse@mud4_morning", "PBL_1"))
					{
						func_114(1);
						iLocal_59 = 3;
					}
				}
			}
			break;
		case 3:
			if (func_115(iParam0))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_15[0 /*16*/]))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_15[0 /*16*/], false))
					{
						func_116(iParam0);
						func_25(iParam0, 65536);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						ANIMSCENE::START_ANIM_SCENE(Local_15[0 /*16*/]);
						iLocal_59 = 4;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_15[0 /*16*/], false))
			{
				func_117(Global_35, -236.9221f, 772.4207f, 116.9113f, 0f, 2, 1073741824 /* Float: 2f */);
				iLocal_59 = 5;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_5(iParam0, 131072))
	{
		if (!func_5(iParam0, 2048) && !func_7(iParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
		}
		func_118(*iParam0);
		func_25(iParam0, 1024);
		func_119(0);
		func_120(&Global_1935630, 32768);
		func_121(2);
		func_122(iParam0);
		func_123(1);
		func_59(*iParam0);
		func_60(*iParam0);
		func_33(iParam0);
		if (!func_5(iParam0, -2147483648))
		{
			func_68();
		}
		func_58(iParam0);
		func_25(iParam0, 131072);
	}
}

bool func_16(int iParam0)
{
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		func_124(&(iParam0->f_428), "1-Day-MultiStart");
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_15[0 /*16*/]))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_15[0 /*16*/]) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_15[0 /*16*/]))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_15[1 /*16*/]);
			MISC::SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_58, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_58, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_58, true, false);
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_15[0 /*16*/]);
		}
		return false;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_15[1 /*16*/], false) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(Local_15[1 /*16*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_15[1 /*16*/]);
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
		{
			func_124(&(iParam0->f_428), "1-Day-MultiStart");
			return true;
		}
	}
	return false;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(var uParam0)
{
	return func_125(*uParam0, 1);
}

void func_19(var uParam0, bool bParam1)
{
	if (bParam1 || !func_18(uParam0))
	{
		func_26(uParam0);
	}
}

bool func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_126(iVar1) && func_127(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_128(iVar1))
				{
					if (func_129(iVar2, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

float func_21(var uParam0)
{
	if (!func_18(uParam0))
	{
		return 0f;
	}
	if (func_130(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_131() - uParam0->f_1);
}

void func_22(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

void func_23(int iParam0)
{
	func_132(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_133(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_120(&Global_1935630, 32768);
		func_118(*iParam0);
	}
}

void func_26(var uParam0)
{
	func_134(uParam0, 0f);
}

bool func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	func_135(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_136(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_137(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_138(*iParam0), true) >= 10f)
				{
					func_139(iParam0, func_138(*iParam0));
				}
				else
				{
					func_139(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_140(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_141(iParam0);
	func_142(iParam0);
	func_143(iParam0, Global_35, 0, 0, 0, 1);
	func_144(iParam0);
	func_145(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_146(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_147(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824 /* Float: 2f */) && !func_148(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	StringCopy(&cVar0, "1-Day-NormalStart", 64);
	StringCopy(&cVar8, "1-Day-MultiStart", 64);
	if (!func_10(iParam0))
	{
		func_149(iParam0, cVar0);
	}
	func_109(iParam0, cVar8);
	func_150(iParam0, 100f);
	func_151(iParam0, 150f);
	if (func_152(69578762))
	{
		func_153(69578762, 1, 0f, 0, 0, 0, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(69578762, 0f, false);
	}
	if (!func_154(iParam0))
	{
		return false;
	}
	return true;
}

bool func_30(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_31(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_32(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_33(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {func_155(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(&Global_1935630, 32768);
	func_156(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_157())
	{
		func_158();
	}
	if (func_42(iParam0, 524288))
	{
		func_120(&Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_159(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_160(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(func_161(4), 0, 0);
		}
		else if (func_160(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(func_161(2), 0, 0);
		}
		else if (func_160(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(func_161(8), 0, 0);
		}
		else if (func_160(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(func_161(16), 0, 0);
		}
		else if (func_160(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(func_161(32), 0, 0);
		}
	}
}

void func_36(int iParam0)
{
	if (func_128(1))
	{
		func_163(iParam0, 1, func_162(iParam0), 0, 0, 1, 0);
	}
	func_164(iLocal_48, 0);
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_165(iParam0))
	{
		return;
	}
	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 2048);
	Global_1835011[iParam0 /*74*/].f_71 = 0;
	uVar1 = func_166(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;

	vVar0 = { func_12(*iParam0) };
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (func_63(&(iParam0->f_958), 8))
		{
			if (!func_63(&(iParam0->f_958), 131072))
			{
				if (!func_63(&(iParam0->f_958), 32768))
				{
					if (!func_5(iParam0, 8))
					{
						func_167(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

int func_39(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		PED::SET_PED_RESET_FLAG(iLocal_58, 184, true);
	}
	return 0;
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

bool func_41(int iParam0)
{
	if (func_7(iParam0))
	{
		func_169(&(iParam0->f_958), func_168(iParam0), iParam0->f_958, 0);
		return func_170(iParam0);
	}
	if (func_5(iParam0, 64))
	{
		return false;
	}
	return func_171(iParam0);
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

int func_43(int iParam0)
{
	if (!func_111(iLocal_48, 0))
	{
		iLocal_48 = func_173(-341.8544f, 784.2784f, 114.7798f, 234.1078f, 1, 1, func_172(7), 1, 1);
	}
	return 0;
}

bool func_44(int iParam0)
{
	if (func_7(iParam0))
	{
		return func_169(&(iParam0->f_958), func_168(iParam0), iParam0->f_958, 0);
	}
	return func_174(iParam0);
}

bool func_45(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_46(int iParam0)
{
}

void func_47(int iParam0)
{
	if ((!func_5(iParam0, 33554432) && !func_42(iParam0, 524288)) && !func_42(iParam0, 32768))
	{
		if (func_175(&(iParam0->f_958)))
		{
			func_176(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(var uParam0)
{
	if (!func_18(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_130(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_131() - uParam0->f_1);
}

float func_49(int iParam0)
{
	return iParam0->f_2887;
}

int func_50(var uParam0)
{
	return *uParam0;
}

void func_51(int iParam0)
{
}

bool func_52(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (func_165(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_177();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_177())
		{
			func_25(iParam0, 32);
		}
		else if (func_48(&(iParam0->f_2884)) >= 60f)
		{
			return true;
		}
	}
	else
	{
		if (!func_177())
		{
			return true;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_165(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_122(iParam0);
			}
		}
		else if (!func_165(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	vector3 vVar0;

	func_178(58);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_179(19, &vVar0, 1);
	func_180(&vVar0, 1, 1);
	func_181(&iLocal_49, 1);
	func_182(&uLocal_61, iLocal_60, 0);
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_60);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	func_183(69578762);
	return true;
}

void func_54(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		func_184(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		func_182(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_0xDE0EA444735C1368(iParam0->f_425))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iParam0->f_425);
		}
		func_66(iParam0, 512);
		func_60(*iParam0);
		VOLUME::_DELETE_VOLUME(iParam0->f_425);
	}
}

void func_56(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_40(iParam0->f_2889, 2097152);
	bVar1 = func_5(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_126(iVar3))
		{
		}
		else if (!func_127(iVar3))
		{
		}
		else if (!func_128(iVar3))
		{
		}
		else
		{
			iVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
			}
			else
			{
				func_163(iParam0, iVar3, iVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_185(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_5))
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_5));
		if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
		{
			iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			EVENT::_0xA86B0EE9B39D15D6(&iVar2);
		}
		else if (ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			ANIMSCENE::_0xBC781D24AA11F179(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1));
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	return 1;
}

void func_59(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_58 = 0;
	Global_1835011[iParam0 /*74*/].f_59 = 0;
	Global_1835011[iParam0 /*74*/].f_60 = 0;
}

void func_60(int iParam0)
{
	if (!func_81(iParam0))
	{
		return;
	}
	Global_1835011[iParam0 /*74*/].f_61 = 0;
}

void func_61(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938.f_865 = (Global_1945938.f_865 - Global_1945938.f_865 & 2);
	}
	else
	{
		Global_1945938.f_865 |= 2;
	}
	func_186(bParam0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_187())
	{
		return;
	}
	func_188();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_126(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (func_189(iVar2))
			{
				PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
			}
		}
		iVar0++;
	}
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_1664 && iParam1) != 0;
}

void func_64(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2)))
			{
				TASK::TASK_CLEAR_LOOK_AT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2));
				if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false, true);
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), true);
				}
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && !ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_2888))
	{
		iParam0->f_2888 = ITEMSET::CREATE_ITEMSET(true);
	}
	LAW::_0x522F74636DF10201(PLAYER::GET_PLAYER_INDEX(), iParam0->f_2888);
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		LAW::_0xDA1A9ADC4E3D4B16(iParam0->f_2888, 1, 0);
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
		return;
	}
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iParam0->f_2888))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iParam0->f_2888)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 148, bParam1);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iParam0->f_2888);
}

void func_66(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 - (iParam0->f_2 && iParam1));
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_68()
{
	int iVar0;

	if (func_190(Global_1898437) && func_191(Global_1898437) == 1)
	{
		iVar0 = func_192(Global_1898437);
		if ((func_81(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1835011[iVar0 /*74*/].f_22), 1);
		}
	}
}

int func_69(int iParam0)
{
	return 1;
}

void func_70(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_193(uParam0) };
	func_194(uParam0, &Var0);
}

void func_71(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		StringCopy(&cVar0, func_195(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_196(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_197(iParam0, iParam0->f_425, 0);
		func_198(*iParam0, iParam0->f_425);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		StringCopy(&cVar8, func_195(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_196(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_199(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_200(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_73(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_201(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164.f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164.f_164;
		}
		if (func_202())
		{
			return true;
		}
		if (Global_1058888.f_3 && !Global_1572887.f_8)
		{
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164.f_163;
		}
		else
		{
			return Global_1898164.f_164;
		}
	}
	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		iVar0 = func_192(Global_1898164.f_1[0 /*5*/]);
		if (func_203(iVar0) && func_204(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_190(Global_1898164.f_1[0 /*5*/]))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

void func_75(int iParam0, int iParam1)
{
	func_96(&(iParam0->f_428), iParam1);
}

void func_76(int iParam0)
{
	func_205(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;

	if (bParam3)
	{
		uParam0->f_511++;
		if (uParam0->f_511 < 10)
		{
			return (func_83(uParam0, 256) && !func_83(uParam0, 4194304));
		}
		uParam0->f_511 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	func_82(uParam0, sParam1);
	if (!func_83(uParam0, 64))
	{
		if (!func_90(func_89(uParam0)))
		{
			func_96(uParam0, 64);
		}
		else
		{
			vVar0 = { func_137(uParam0) };
			if (!func_90(vVar0))
			{
				func_206(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_207(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_208(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_209();
				uParam0->f_529 = 0;
			}
			func_210(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_211(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_212(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_212(uParam0) >= func_208(uParam0))
				{
				}
				Var4 = { func_213(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_214(uParam0);
				}
				Var4 = { func_213(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_215(uParam0, 0, 0, 0, 0);
				func_96(uParam0, 128);
			}
		}
	}
	if (func_83(uParam0, 128))
	{
		if (func_83(uParam0, 256) && !func_83(uParam0, 4194304))
		{
			return true;
		}
		func_88(uParam0);
		if (!uParam0->f_529)
		{
			if (func_216())
			{
				func_217(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_193(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_462[iVar14 /*9*/].f_8)
						{
							uParam0->f_462[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!func_83(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &Var15))
				{
					if (!func_83(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_444, &Var15))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &Var15);
						}
						func_96(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			func_96(uParam0, 256);
			func_103(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_78(int iParam0, int iParam1)
{
	if (!func_30(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

bool func_79(var uParam0)
{
	if (func_160(&(uParam0->f_29), 62))
	{
		switch (func_218())
		{
			case 1:
				if (!func_160(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_160(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_160(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_160(&(uParam0->f_29), 32))
				{
					if (func_160(&(uParam0->f_29), 2))
					{
						if (func_220(func_219()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_80(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

bool func_81(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_82(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_83(uParam0, 8192))
	{
		return;
	}
	if (MISC::_DOES_STRING_EXIST_IN_STRING(sParam1, "cutscene@"))
	{
		iVar0 = MISC::_0x94E8CA3DEE952789(sParam1, "@");
		if (MISC::_0x94E8CA3DEE952789(sParam1, "@") > 2)
		{
			MemCopy(&(uParam0->f_440), {func_222("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_222("cutscene@", sParam1, 1, 63)}, 4);
	}
	func_96(uParam0, 8192);
}

bool func_83(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

void func_84(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_223(uParam0->f_501, 128))
		{
			func_224();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_225(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_225(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_223(uParam0->f_501, 128))
		{
			func_224();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_226(iVar1))
		{
			if (func_227(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_223(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_228(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_224();
	}
}

void func_85(var uParam0, char* sParam1)
{
	struct<8> Var0;
	char cVar8[32];

	if (func_50(uParam0) == 2 && (func_229(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_193(uParam0) };
		func_124(uParam0, &Var0);
	}
	func_230(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_231(uParam0, 0);
	}
	if (func_232())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_233();
	}
	if (func_234())
	{
		func_235(1);
	}
	func_215(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_236(uParam0, cVar8);
	func_93(1, 0);
	func_210(uParam0);
	if (func_237() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_225(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_238(uParam0);
	func_239(uParam0, 1);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_444);
	Global_43800 = uParam0->f_444;
	StringCopy(&Global_43802, sParam1, 24);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_26(&(uParam0->f_1));
}

bool func_87(var uParam0, int iParam1)
{
	return (uParam0->f_439 && iParam1) != 0;
}

void func_88(var uParam0)
{
	if ((!func_83(uParam0, 32768) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_444, false))
	{
		func_240(uParam0);
		func_239(uParam0, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_444, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_444);
		}
		func_96(uParam0, 32768);
	}
}

Vector3 func_89(var uParam0)
{
	return uParam0->f_5;
}

bool func_90(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_91(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_241(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_92(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(PLAYER::PLAYER_PED_ID(), bParam0, false, 256);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
}

void func_93(bool bParam0, int iParam1)
{
	if (func_242())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_243())
		{
			func_244(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	vector3 vVar0;

	if (!func_83(uParam0, 4))
	{
		if (func_229(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_245(uParam0) };
		if (!func_229(uParam0->f_500, 524288))
		{
			func_246(&(uParam0->f_512));
		}
		func_247(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_248(uParam0, 0f, 0f, 0f);
		func_249(uParam0);
		func_250(uParam0);
		func_251(uParam0, 0f, 0f, 0f, 0, 0);
		func_252(uParam0);
		func_96(uParam0, 4);
		func_253(uParam0, 0);
		func_254(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

bool func_95(var uParam0, bool bParam1)
{
	if (func_83(uParam0, 262144))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, "ExportCamera"))
	{
		return false;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, "ExportCamera") || (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_444, "ExportCamera") && bParam1)) || ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444))
	{
		func_96(uParam0, 262144);
		func_253(uParam0, 1);
		return true;
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_97(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_444) * 1000f));
}

int func_98(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false))
	{
		return -1;
	}
	return BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_444) * 1000f));
}

bool func_99(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_255(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_100(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_444, false))
	{
		if (func_83(uParam0, 524288))
		{
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_444) && func_83(uParam0, 1048576))
	{
		return true;
	}
	return false;
}

void func_101(var uParam0)
{
	if (((func_83(uParam0, 1073741824 /* Float: 2f */) && !func_83(uParam0, 524288)) && func_83(uParam0, 512)) && CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
}

void func_102(var uParam0)
{
	if (!func_83(uParam0, 536870912))
	{
		func_253(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_209();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_256(uParam0);
	func_86(uParam0, 1);
	func_211(uParam0);
	func_257(uParam0);
	func_258(uParam0);
	func_259(uParam0, 4);
	func_214(uParam0);
	func_231(uParam0, 1);
	func_210(uParam0);
	func_260(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	func_261(!func_223(uParam0->f_501, 128));
	if (!func_223(uParam0->f_501, 128))
	{
		func_224();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_444))
	{
		ANIMSCENE::_0x8A8208AE92BF87A5(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_262(2000);
	Global_16 = 0;
	func_263();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_223(*uParam0, 8));
	if (!func_223(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_223(*uParam0, 2) || func_223(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_223(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_223(*uParam0, 32))
	{
		func_264(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_265(joaat("KIT_BANDANA"), 0);
	}
	func_254(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_105()
{
	Global_1935630.f_52 = 1;
}

int func_106(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_267(iParam0, 1);
	func_268(iVar0);
	if (bParam1)
	{
		func_269(&Global_1899778, iVar0);
	}
	func_270(iVar0);
	return 1;
}

void func_107(int iParam0)
{
	if (func_271() != -1)
	{
		return;
	}
	func_272(iParam0, 1);
}

void func_108(var uParam0, char[4] cParam1, bool bParam2)
{
	func_273(&(uParam0->f_428), cParam1, bParam2);
}

void func_109(int iParam0, char[32] cParam1)
{
	func_274(&(iParam0->f_428), cParam1);
}

bool func_110(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;

	if (!func_126(iParam1))
	{
		return false;
	}
	if (func_275(iParam0, *uParam2))
	{
		if (*uParam2 != func_276(iParam1))
		{
		}
		return true;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_138(*iParam0) };
	}
	if (!func_277(iParam1, 28, 1))
	{
		func_278(iParam1, 28, 1);
	}
	*uParam2 = func_279(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*uParam2))
		{
			return false;
		}
		func_280(iParam0, *uParam2);
		func_281(iParam0, *uParam2);
		func_282(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!func_283(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		func_284(iParam0, *uParam2, 0, 0, 0, 1, 0);
		func_285(iParam1, 0, 0, 1);
		func_286(iParam1);
		return true;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_287(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_287(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_287(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_287(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_287(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_287(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_287(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_287(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_288(iParam0);
				func_289(iParam0, 0);
				break;
		}
		func_290(iParam0, iParam1);
		if (func_291(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_292(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_SET_PED_BODY_COMPONENT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_288(iParam0);
				func_289(iParam0, 1);
				break;
		}
		func_293(iParam0, iParam1);
		func_294(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

var func_113(int iParam0, char* sParam1, char* sParam2)
{
	if (Local_15[iParam0 /*16*/].f_2 == 0)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_15[iParam0 /*16*/]))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_15[iParam0 /*16*/], true, false))
			{
				Local_15[iParam0 /*16*/].f_2 = 1;
			}
		}
		else
		{
			Local_15[iParam0 /*16*/].f_1 = sParam1;
			Local_15[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_15[iParam0 /*16*/].f_1, 0, sParam2, false, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_15[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_15[iParam0 /*16*/]);
			}
		}
	}
	return Local_15[iParam0 /*16*/].f_2;
}

void func_114(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_15[iParam0 /*16*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_15[iParam0 /*16*/], "JohnMarston", iLocal_58, 0);
			break;
	}
}

bool func_115(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(func_196(*uParam0));
	return ((INTERIOR::IS_VALID_INTERIOR(iVar1) && INTERIOR::IS_VALID_INTERIOR(iVar0)) && iVar0 == iVar1);
}

void func_116(int iParam0)
{
	func_70(&(iParam0->f_428));
	func_25(iParam0, 8);
}

void func_117(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_295(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_296(iParam0))
	{
		if (func_297(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_287(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_117(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_117(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_287(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_287(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_287(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_287(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_287(iParam5, 129))
	{
		if (func_287(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_287(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_287(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_287(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_296(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_287(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_287(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_118(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_119(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_2(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_120(&Global_1935630, 4194304);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_120(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_121(int iParam0)
{
	int iVar0;

	if (func_271() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_111(func_298(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_298(iVar0), func_299(), 1))
			{
				func_300(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_122(int iParam0)
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_119(0);
		func_65(iParam0, 1);
	}
	func_301(1, 0, 1);
}

void func_123(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0f;
	}
	Global_1935436.f_8 = 0f;
	Global_1935436.f_12.f_1 = 0f;
	Global_1935436.f_12 = 0f;
	Global_1935436.f_12.f_3 = 0f;
	Global_1935436.f_12.f_2 = 0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_0x06D26A96CA1BCA75(Global_35, 10, 0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	func_302(0f);
	Global_1935436.f_11 = 1;
	if (func_303())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_304();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_124(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_462[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_446 };
			uParam0->f_462[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	func_194(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
}

bool func_125(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_126(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_127(int iParam0)
{
	return func_305(iParam0, 16, 1);
}

bool func_128(int iParam0)
{
	if (!func_126(iParam0))
	{
		return false;
	}
	if (!func_127(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_129(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_207(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_130(var uParam0)
{
	return func_125(*uParam0, 2);
}

float func_131()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_132(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

void func_133(var uParam0, int iParam1)
{
	func_306(uParam0, 4);
	func_307(uParam0, 10);
	func_308(uParam0, iParam1);
}

void func_134(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_131() - fParam1);
	func_309(uParam0, 1);
	func_310(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!func_311(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_58 = iParam1;
	Global_1835011[iParam0 /*74*/].f_59 = iParam2;
	Global_1835011[iParam0 /*74*/].f_60 = iParam3;
}

Vector3 func_136(var uParam0)
{
	return func_89(&(uParam0->f_428));
}

Vector3 func_137(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_312(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_225(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_445, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_445);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

Vector3 func_138(int iParam0)
{
	return func_196(iParam0);
}

void func_139(var uParam0, vector3 vParam1)
{
	func_206(&(uParam0->f_428), vParam1);
}

bool func_140(var uParam0)
{
	STREAMING::REQUEST_MODEL(joaat("A_C_SHEEP_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_SHEEP_01")))
	{
		return false;
	}
	if (!func_111(iLocal_48, 0))
	{
		iLocal_48 = func_173(-299.0472f, 819.4686f, 117.7617f, 48.5918f, 1, 1, func_172(7), 1, 1);
		func_143(uParam0, iLocal_48, "Horse_01", 0, 0, 1);
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_60))
	{
		iLocal_60 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-250.9157f, 690.692f, 113.8045f, 0f, 0f, -34.4982f, 7.65097f, 7.228882f, 3.268565f, "m_volClearArea");
		return false;
	}
	else
	{
		if (!PED::_0x91A5F9CBEBB9D936(uLocal_61))
		{
			uLocal_61 = func_313(iLocal_60, 0, 0, 0);
		}
		PATHFIND::_0x19C7567D2F2287D6(iLocal_60, 7);
	}
	func_108(uParam0, "1-Day-MultiStart", 0);
	func_314(58);
	func_106(19, 1);
	func_107(3);
	func_248(&(uParam0->f_428), -262.1711f, 680.1825f, 112.3234f);
	return true;
}

void func_141(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iLocal_14 = ITEMSET::CREATE_ITEMSET(false);
	}
}

void func_142(var uParam0)
{
	func_185(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

void func_143(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_284(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_144(int iParam0)
{
	vector3 vVar0;

	vVar0 = { func_12(*iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		return;
	}
	if (func_7(iParam0))
	{
		return;
	}
	if (!func_5(iParam0, 16384))
	{
		func_25(iParam0, 16384);
		if (!func_315(&vVar0))
		{
			return;
		}
		func_316(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_145(int iParam0)
{
	if (func_212(&(iParam0->f_428)) != 15f || func_208(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_317(&(iParam0->f_428), 50f);
			func_318(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_317(&(iParam0->f_428), 35f);
			func_318(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_317(&(iParam0->f_428), 25f);
			func_318(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

bool func_146(var uParam0)
{
	return func_319(&(uParam0->f_8), &(uParam0->f_24), &(uParam0->f_35), &(uParam0->f_51), &(uParam0->f_55), &(uParam0->f_57), &(uParam0->f_393), &(uParam0->f_398), &(uParam0->f_404), &(uParam0->f_408), &(uParam0->f_412), &(uParam0->f_417), -1);
}

bool func_147(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_5(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = func_320(*iParam0);
	if (!func_126(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_298(iVar0));
	return func_110(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_148(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];

	iVar0 = 1;
	MemCopy(&uVar1, {func_200(iParam0)}, 8);
	StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!func_321(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_201(iParam0)}, 8);
		StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!func_322(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_149(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)
{
	func_194(&(iParam0->f_428), &cParam1);
	func_25(iParam0, 8);
}

void func_150(int iParam0, float fParam1)
{
	iParam0->f_428.f_434 = fParam1;
}

void func_151(int iParam0, float fParam1)
{
	iParam0->f_428.f_435 = fParam1;
}

bool func_152(int iParam0)
{
	return iParam0 != 0;
}

void func_153(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_323(iParam0, 0, 0);
	if (func_324(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_325(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_326(iParam0, 1);
			}
			else
			{
				func_327(iParam0, 1);
			}
		}
		else
		{
			func_328(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_329())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_154(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			if (iVar0 == 0)
			{
				Var1 = { func_330(0, 2) };
			}
			else if (iVar0 == 1)
			{
				Var1 = { func_330(0, 3) };
			}
			else if (iVar0 == 2)
			{
				Var1 = { func_330(0, 4) };
			}
			else if (iVar0 == 3)
			{
				Var1 = { func_330(0, 5) };
			}
			else if (iVar0 == 4)
			{
				Var1 = { func_330(0, 6) };
			}
			else if (iVar0 == 5)
			{
				Var1 = { func_330(0, 6) };
			}
			else if (iVar0 == 6)
			{
				Var1 = { func_330(0, 6) };
			}
			else if (iVar0 == 7)
			{
				Var1 = { func_330(0, 6) };
			}
			iLocal_49[iVar0] = func_331(joaat("A_C_SHEEP_01"), Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			func_332(iParam0, iLocal_49[iVar0], 0);
			TASK::TASK_WANDER_IN_AREA(iLocal_49[iVar0], -236.6264f, 665.7418f, 113.4415f, 5f, 1077936128 /* Float: 3f */, 20f, 1);
			return false;
		}
		iVar0++;
	}
	return true;
}

struct<4> func_155(int iParam0)
{
	struct<4> Var0;

	if (!func_81(iParam0))
	{
		return Var0;
	}
	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_156(var uParam0)
{
	struct<12> Var0;
	int iVar12;

	if (func_333(&(uParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { uParam0->f_428.f_13[iVar12 /*12*/] };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { Var0 };
		}
		iVar12++;
	}
}

bool func_157()
{
	return func_334(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_158()
{
	if (func_157())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_177())
		{
			func_61(1);
		}
	}
}

void func_159(var uParam0, var uParam1)
{
	struct<8> Var0;

	if (func_63(uParam1, 32768))
	{
		Var0 = { func_193(uParam0) };
		func_124(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_335(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_335(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_336(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_337(uParam1, 524288);
	}
	if (func_338(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_339(&(uParam1->f_1016[uParam1->f_1684 /*41*/]), 256))
		{
			func_336(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_160(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_161(int iParam0)
{
	if (iParam0 & 36 == 4)
	{
		return 6;
	}
	else if (iParam0 & 34 == 4)
	{
		return 5;
	}
	else if (iParam0 & 12 == 8)
	{
		return 12;
	}
	else if (iParam0 & 24 == 16)
	{
		return 18;
	}
	else if (iParam0 & 48 == 32)
	{
		return 0;
	}
	return 0;
}

int func_162(int iParam0)
{
	return iParam0->f_3;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!func_126(iParam1))
	{
		return;
	}
	func_340(iParam2);
	if (bParam4)
	{
		func_341(iParam0, iParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, 4194304))
		{
			bParam6 = func_342(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = func_342(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	func_343(iParam1, iParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

void func_164(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_344(iParam0))
	{
		return;
	}
	iVar0 = func_345(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_346(iVar0);
	func_347(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_348(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_349(iVar0))
		{
			return;
		}
	}
	func_350(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_271() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

bool func_165(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_351(Global_1835011[iParam0 /*74*/].f_1);
}

var func_166(int iParam0)
{
	var uVar0;

	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_167(var uParam0, var uParam1)
{
	if (uParam1->f_1684 < 0 || uParam1->f_1684 >= 8)
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
	{
		if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30)))
			{
				func_124(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

struct<4> func_168(int iParam0)
{
	return iParam0->f_2880;
}

int func_169(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (func_63(uParam0, 32768))
	{
		return 1;
	}
	if (func_8(uParam0) >= 3)
	{
		uParam0->f_1896 = func_352(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_1897 = PED::IS_PED_FULLY_ON_MOUNT(Global_35, true);
		uParam0->f_1899 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_1897)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_1898 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_1898 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_1899)
		{
			uParam0->f_1901 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_1902 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		func_353(uParam0);
	}
	if (func_8(uParam0) < 10)
	{
		if (func_8(uParam0) == 3)
		{
			func_354(uParam0, iParam5, bParam6);
		}
		else if (func_8(uParam0) > 3)
		{
			if (func_355(uParam0) == 0)
			{
				if (!func_63(uParam0, 524288))
				{
					func_356(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_306(uParam0, 4);
					func_307(uParam0, 10);
					func_308(uParam0, iParam5);
					return 1;
				}
			}
			if (!func_63(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			func_357(0);
			func_358();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_1684 >= 0)
			{
				if (!func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (func_359(uParam0, uParam0->f_1684))
				{
					if (func_360(uParam0) < 7 && uParam0->f_1688 >= 0)
					{
						func_361(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1688 >= 0)
				{
					func_361(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_362(uParam0);
			}
		}
	}
	bVar0 = func_363(uParam0, iParam5, bParam6);
	bVar1 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (bVar0)
	{
		if ((!func_63(uParam0, 268435456) && bVar1) && !func_63(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902);
			if (uParam0->f_1684 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[uParam0->f_1684 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_1902)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_364(uParam0, 131072);
				func_364(uParam0, 268435456);
			}
		}
		if (func_338(uParam0, 64) || (uParam0->f_1684 >= 0 && !func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || func_355(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_8(uParam0) == 3 || func_63(uParam0, 131072))
	{
		func_365(uParam0);
		if (!func_63(uParam0, 262144))
		{
			if ((bVar0 && func_63(uParam0, 65536)) || func_63(uParam0, 131072))
			{
				func_364(uParam0, 32768);
				func_306(uParam0, 4);
				func_307(uParam0, 10);
				uParam0->f_1769 = 1;
				func_308(uParam0, iParam5);
				return 1;
			}
		}
	}
	if (func_8(uParam0) >= 3)
	{
		func_366(uParam0, iParam5);
		func_367(uParam0);
		if (!func_368(uParam0, 1))
		{
			func_369(uParam0);
		}
		func_370(uParam0);
	}
	switch (func_8(uParam0))
	{
		case 0:
			func_371(uParam0, Param1, iParam5);
			break;
		case 1:
			func_372(uParam0);
			break;
		case 2:
			func_373(uParam0);
			break;
		case 3:
			if (func_374(uParam0))
			{
				func_121(2);
				func_361(uParam0, uParam0->f_1016[uParam0->f_1684 /*41*/].f_27, uParam0->f_1345[uParam0->f_1684 /*22*/].f_1, 1065353216 /* Float: 1f */);
				func_26(&(uParam0->f_1872));
				func_306(uParam0, 1);
				func_375();
				func_307(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!func_63(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (func_8(uParam0) == 5)
			{
				if (func_376(uParam0))
				{
					func_306(uParam0, 2);
					func_307(uParam0, 6);
				}
			}
			if (func_8(uParam0) == 6)
			{
				if (func_377(uParam0))
				{
					func_306(uParam0, 3);
					func_307(uParam0, 8);
				}
			}
			if (uParam0->f_1685 >= 0 || func_21(&(uParam0->f_1872)) >= 15f)
			{
				if (func_378(uParam0, iParam5))
				{
					if (func_379(uParam0))
					{
						uParam0->f_1685 = func_380(uParam0);
						func_26(&(uParam0->f_1872));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_306(uParam0, 6);
						func_307(uParam0, 9);
					}
					else
					{
						func_306(uParam0, 4);
						func_307(uParam0, 10);
						func_308(uParam0, iParam5);
						return 1;
					}
				}
			}
			break;
		case 9:
			if (func_378(uParam0, iParam5))
			{
				func_308(uParam0, iParam5);
				func_307(uParam0, 10);
				return 1;
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_374(&(iParam0->f_958));
}

int func_171(int iParam0)
{
	float fVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar1 = iParam0->f_423;
		fVar0 = 10f;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar1 = iParam0->f_424;
		fVar0 = 15f;
	}
	else
	{
		iVar1 = iParam0->f_422;
		fVar0 = 5f;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iVar1))
	{
		if (func_381(Global_35, iVar1, 1, 0))
		{
			func_25(iParam0, 8388608);
			return 1;
		}
	}
	if (BUILTIN::VDIST2(func_196(*iParam0), Global_36) < (fVar0 * fVar0))
	{
		func_25(iParam0, 8388608);
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_382(iParam0))
	{
		return 0;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (func_383(vVar1, vVar4) > func_384(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_173(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	struct<11> Var1;

	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = fParam3;
	return func_385(&uVar0, &Var1);
}

int func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return 0;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_196(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return 0;
		}
	}
	if (!func_5(iParam0, 1048576))
	{
		if (bVar0)
		{
			func_25(iParam0, 1048576);
		}
		else
		{
			iVar1 = 131072;
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_196(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_386(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return 1;
	}
	else if (BUILTIN::VDIST2(func_196(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return 1;
	}
	else if (!func_5(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_196(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0->f_3, -1, 0, 51, 0);
		}
		func_25(iParam0, 2097152);
	}
	if (func_18(&(iParam0->f_2890)))
	{
		if (func_48(&(iParam0->f_2890)) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

bool func_175(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 0 && uParam0->f_475[iVar0 /*18*/].f_2 == 9) && uParam0->f_475[iVar0 /*18*/].f_4 >= 0)
		{
			iVar1 = uParam0->f_1522[uParam0->f_475[iVar0 /*18*/].f_4 /*10*/].f_8;
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar1, true, false))
			{
				iVar2 = 0;
				while (iVar2 < 35)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar2 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar2 /*13*/].f_2))
					{
						Var3 = { func_387(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) };
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iVar1, &Var3))
						{
							if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, iVar1) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_3[iVar2 /*13*/].f_2, -1))
							{
								return true;
							}
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_176(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (bParam1)
			{
				bVar1 = ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (!bVar1 && !bParam2)
				{
					if ((ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout") && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout")) && !uParam0->f_1769)
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout", true);
					}
				}
				else if (func_63(uParam0, 32768) && func_388(&(uParam0->f_1522[iVar0 /*10*/]), 128))
				{
					func_389(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
				}
				else
				{
					if (bParam2)
					{
						ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					}
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				}
			}
			else
			{
				ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, 0);
			}
		}
		iVar0++;
	}
}

bool func_177()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

int func_178(int iParam0)
{
	if (!func_390(iParam0))
	{
		return 0;
	}
	if (!func_392(func_391(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_393(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_393(iParam0));
	return 1;
}

int func_179(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_180(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_271() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_394())
	{
		return -1;
	}
	if (!func_395(uParam0->f_1))
	{
		return -1;
	}
	if (func_396(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_266(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_397(&iVar2))
		{
			return -1;
		}
	}
	func_398(*uParam0, iVar2);
	bVar1 = func_399(uParam0->f_1, 131072);
	func_400(uParam0->f_1);
	iVar3 = func_401(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_402(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_402(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_402(uParam0->f_1, 131072);
	}
	if (func_403(iVar3) || (!func_404(iVar3) && func_405(0) != iVar3))
	{
		iVar0 = func_32(iVar3);
		if (iVar0 == -1)
		{
			func_406(iVar3);
		}
	}
	return iVar2;
}

void func_181(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_407(iParam0[iVar0], bParam1);
		iVar0++;
	}
}

void func_182(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_183(int iParam0)
{
	if (func_324(iParam0) && func_408())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

void func_184(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_409(vVar0, 0);
}

void func_185(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_410(uParam0[iVar0 /*3*/]))
		{
			if (func_411((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				func_412(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_413(uParam1[iVar0 /*5*/]))
		{
			if (func_411((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				func_414(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_415(uParam2[iVar0 /*3*/]))
		{
			if (func_411((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				func_416(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_417(uParam3[iVar0 /*3*/]))
		{
			if (func_411((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_418(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_411(uParam4->f_1, iParam12))
	{
		func_419(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_420(uParam5[iVar0 /*67*/]))
		{
			if (func_411((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_421(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_420(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_422(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (func_411((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						func_423(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_424(uParam6[iVar0 /*4*/]))
		{
			if (func_411((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				func_425(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_426(uParam7[iVar0 /*5*/]))
		{
			if (func_411((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				func_427(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_428(uParam8[iVar0 /*3*/]))
		{
			if (func_411((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				func_429(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_430(uParam9[iVar0 /*3*/]))
		{
			if (func_411((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				func_431(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_432(uParam10[iVar0 /*4*/]))
		{
			if (func_411((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				func_433(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_434(uParam11[iVar0 /*3*/]))
		{
			if (func_411((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_435(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_186(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_187()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && SCRIPTS::IS_THREAD_ACTIVE(Global_43806[iVar0 /*6*/].f_1, false)) && Global_43806[iVar0 /*6*/].f_1 == SCRIPTS::GET_ID_OF_THIS_THREAD()) && ANIMSCENE::_0xA9016536015DE29D(Global_43806[iVar0 /*6*/], "pl_breakout")) && !ANIMSCENE::_0x1F0E401031E20146(Global_43806[iVar0 /*6*/], "pl_breakout"))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Global_43806[iVar0 /*6*/], "pl_breakout", true);
		}
		iVar0++;
	}
}

bool func_189(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43806[iVar0 /*6*/], false)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, Global_43806[iVar0 /*6*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_190(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_191(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0;
	}
	return func_437(func_436(iParam0));
}

int func_192(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_438(func_436(iParam0));
}

struct<8> func_193(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_439(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_440() };
	}
	return Var0;
}

void func_194(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_195()
{
	return "unnamed";
}

Vector3 func_196(int iParam0)
{
	if (func_441(iParam0))
	{
		return func_442(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	POPULATION::_0x18262CAFEBB5FBE1(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_0x19C7567D2F2287D6(iParam1, 15);
	func_66(iParam0, 512);
	iParam0->f_427 = func_313(iParam1, 0, 0, 0);
}

void func_198(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_311(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_61 = iParam1;
}

void func_199(int iParam0, int iParam1)
{
	char cVar0[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_443(iParam1);
	StringCopy(&cVar0, func_195(), 64);
	func_444(iParam1, &cVar0, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
}

struct<2> func_200(int iParam0)
{
	struct<2> Var0;

	MemCopy(&Var0, {func_166(iParam0)}, 2);
	return Var0;
}

struct<2> func_201(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_200(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

bool func_202()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_4)
	{
		return true;
	}
	if (Global_524298)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1051043 == -1 && Global_1572887.f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_203(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_204(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_205(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[iVar0 /*41*/].f_30)))
		{
			func_273(uParam0, &(uParam1->f_1016[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_206(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_207(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_208(var uParam0)
{
	return uParam0->f_435;
}

void func_209()
{
	struct<4> Var0;

	Global_1946804.f_858 = (Global_1946804.f_858 - 1);
	if (Global_1946804.f_858 <= 0)
	{
		Var0 = 35;
		func_445(Var0);
	}
}

void func_210(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/])) || ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]))))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]));
		}
		uParam0->f_462[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_211(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_446(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (func_83(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		func_103(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	func_103(uParam0, 16, 1);
}

float func_212(var uParam0)
{
	return uParam0->f_434;
}

struct<8> func_213(var uParam0)
{
	return uParam0->f_446;
}

void func_214(var uParam0)
{
	struct<8> Var0;

	Var0 = { func_447() };
	func_194(uParam0, &Var0);
}

void func_215(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_448(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_195());
		func_96(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_449(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}
}

bool func_216()
{
	return Global_1946804.f_1497 != Global_1946804.f_2163.f_1;
}

void func_217(int iParam0)
{
	struct<4> Var0;

	if (func_450(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_445(Var0);
}

int func_218()
{
	return Global_1899516;
}

int func_219()
{
	return Global_1899515;
}

int func_220(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_221(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> func_222(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> Var18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0), 64);
	}
	else
	{
		StringCopy(&cVar2, sParam0, 64);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		StringCopy(&cVar10, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1), 64);
	}
	else
	{
		StringCopy(&cVar10, sParam1, 64);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			StringCopy(&cVar10, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1), 64);
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		StringCopy(&cVar2, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0), 64);
	}
	Var18 = { cVar2 };
	StringConCat(&Var18, &cVar10, 64);
	return Var18;
}

bool func_223(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_224()
{
	if (func_451(Global_43801))
	{
		func_452(&Global_43801, 0, 0);
	}
}

char* func_225(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (ENTITY::GET_ENTITY_MODEL(Global_35) == joaat("PLAYER_THREE"))
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_453(iVar0);
}

bool func_226(int iParam0)
{
	int iVar0;

	if (func_454(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_227(int iParam0, bool bParam1)
{
	if (bParam1 && !func_451(iParam0))
	{
		return false;
	}
	return !func_455(iParam0, 4);
}

bool func_228(bool bParam0, bool bParam1)
{
	if (!func_451(Global_43801))
	{
		Global_43801 = func_456("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945938[Global_43801 /*18*/].f_16 = Global_23[3];
		func_457(Global_43801, 0, 1);
		func_458(Global_43801, 6, 1);
		if (bParam1)
		{
			func_458(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_227(Global_43801, 0))
		{
			func_459(Global_43801, 1, 1);
		}
		if (func_460(Global_43801, 1) != 0f && bParam0)
		{
			func_457(Global_43801, 1, 1);
		}
		else
		{
			func_457(Global_43801, 0, 1);
		}
		return func_461(Global_43801, 1);
	}
	return false;
}

bool func_229(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_230(var uParam0, var uParam1)
{
	if (((!func_83(uParam0, 32) || func_462(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_336(&(uParam0->f_500), 256);
	}
}

void func_231(var uParam0, bool bParam1)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 9, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 7, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 7, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 8, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 8, bParam1);
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, false, 10, false))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 10, bParam1);
	}
}

bool func_232()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

void func_233()
{
	int iVar0;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::_GET_HASH_OF_THREAD(iVar0) == joaat("DOC_PLAYER_JOURNAL"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 265, true);
			}
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 1);
			return;
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
}

bool func_234()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_235(bool bParam0)
{
	if (func_234())
	{
		Global_1357509 = 1;
	}
	if (func_463(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_236(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

bool func_237()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_238(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			func_464(uParam0, &(uParam0->f_462[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_447() };
	func_464(uParam0, &Var1);
	Var1 = { func_193(uParam0) };
	func_464(uParam0, &Var1);
}

void func_239(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_255(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_255(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_465(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_255(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_466(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_240(var uParam0)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_255(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_467(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

float func_241(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_242()
{
	return func_454(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_243()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_244(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

Vector3 func_245(var uParam0)
{
	return uParam0->f_502;
}

void func_246(var uParam0)
{
	int iVar0;

	if (func_468(&iVar0))
	{
		if (func_469(iVar0, 0))
		{
			if (func_470(iVar0) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_264(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!func_469(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_247(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_471(0, 0);
		func_472(-1);
	}
	func_92(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_229(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_229(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_229(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_229(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_229(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_229(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_229(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_229(*uParam0, 4) && !func_229(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_229(*uParam0, 2048))
	{
		func_473(0, 0);
	}
	if (func_229(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_229(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_229(*uParam0, 8192))
	{
		func_474();
	}
	if (!func_229(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_229(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_229(*uParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!func_229(*uParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (func_475() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = uParam3;
					vVar3.f_1 = uParam4;
					vVar3.f_2 = uParam5;
					if (func_90(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_476(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_477(2);
						func_478(-1);
						func_479(vVar3);
						func_481(func_480());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!func_229(*uParam0, 4096))
	{
		func_466(Global_35);
	}
	if (!func_229(*uParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_229(*uParam0, 2097152))
	{
		if (func_482() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_123(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_248(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_249(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_83(uParam0, 2048) && !func_90(func_483(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_117(iVar1, func_483(uParam0), func_484(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_117(iVar3, func_483(uParam0), func_484(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_250(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if ((func_83(uParam0, 268435456) && !func_90(func_483(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { func_483(uParam0) };
			func_117(iVar0, vVar1, func_485(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_251(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_505 = { vParam1 };
	uParam0->f_508 = iParam4;
	if (func_90(vParam1))
	{
		func_103(uParam0, 2048, 1);
	}
	else
	{
		func_96(uParam0, 2048);
		if (bParam5)
		{
			func_96(uParam0, -2147483648);
		}
	}
}

void func_252(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!func_255(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (func_487(func_486(iVar1, 0, 1, 0)))
						{
							if (!func_488(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_487(func_486(iVar1, 1, 1, 0)))
						{
							if (!func_488(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_253(var uParam0, bool bParam1)
{
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("HOLSTERS_LEFT"), 0);
			Global_17 = !bParam1;
		}
	}
}

void func_254(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_271() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(iParam1, Global_1347477.f_190);
			}
			func_489(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_490(iParam1, 29, bVar4, 1, 0);
			func_490(iParam1, 31, bVar4, 1, 0);
			func_490(iParam1, 30, bVar4, 1, 0);
			func_490(iParam1, 22, bVar4, 1, 0);
			func_490(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_491(32768) && func_492(1108822547, 8)) && func_493(10, iParam3))
	{
		func_494(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_495(iVar1, 1);
			if (func_492(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_493(iVar1, iParam3))
				{
				}
				else if ((func_492(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_492(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_490(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_496(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_490(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_492(iVar3, 1))
							{
								func_497(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_255(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_256(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_498(uParam0);
	func_206(uParam0, 0f, 0f, 0f);
	func_499(uParam0);
}

void func_257(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_258(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_259(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_500(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_260(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_261(bool bParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Global_43800))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_224();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_262(int iParam0)
{
	func_501();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_263()
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
}

int func_264(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_502(iParam1, 1, 0) };
		iParam3 = func_503(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_505(iParam1, iParam2, func_504(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_506(1, (func_271() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_504(iParam3, 1) /*11*/])
			{
				func_507(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_491(32768) && iParam1 != Global_1946804.f_57[func_504(iParam3, 1) /*11*/])
			{
				func_508();
				func_507(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_507(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_509(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_507(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_217(0);
			func_510(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_507(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_265(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_502(iParam0, 0, 0) };
	Var5 = { func_511(iParam0, Var0, Var0.f_4, 0) };
	if (func_512(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_513(0), &Var5, bParam1);
}

int func_266(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_514(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_515(iParam0))
	{
		return 1;
	}
	func_516(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	func_517(iVar0);
	iVar2 = func_32(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_518(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		func_22(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_268(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_519(iParam0))
	{
		return;
	}
	if (func_190(Global_1392915[iParam0 /*12*/].f_4))
	{
		func_520(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_398(iVar0, -1);
}

void func_269(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_521(iVar0))
	{
		return;
	}
	if (func_522(uParam0->f_34[iVar0]))
	{
		func_523(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_270(int iParam0)
{
	func_524(&(Global_1392915[iParam0 /*12*/]));
	func_525(&(Global_1392915.f_121[iParam0 /*20*/]));
}

int func_271()
{
	return Global_1572887.f_12;
}

void func_272(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_514(iVar0) == iParam0)
		{
			iVar1 = func_526(iVar0);
			func_267(iVar1, 1);
			func_268(iVar0);
			if (bParam1)
			{
				func_269(&Global_1899778, iVar0);
			}
			func_270(iVar0);
		}
		iVar0++;
	}
}

void func_273(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_527(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!func_528(uParam0, sParam1) || func_83(uParam0, 8388608))
			{
				StringCopy(&(uParam0->f_462[iVar0 /*9*/]), sParam1, 64);
				if (!bParam2)
				{
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
					{
						if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1))
						{
							ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
						}
					}
					else
					{
						func_96(uParam0, 4194304);
					}
				}
				else
				{
					func_96(uParam0, 4194304);
				}
				return;
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
}

void func_274(var uParam0, char[32] cParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
	{
		return;
	}
	uParam0->f_454 = { cParam1 };
}

bool func_275(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return false;
	}
	return ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5);
}

int func_276(int iParam0)
{
	if (func_126(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_277(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return false;
		}
	}
	func_530(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_278(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	func_530(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_279(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_126(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_277(iParam0, 2, 1))
			{
				func_531(iParam0, 2, 1);
			}
			if (func_305(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_278(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_343(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_111(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_111(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_532(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_278(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_533(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_278(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_533(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_277(iParam0, 44, 0))
			{
				func_278(iParam0, 44, 0);
			}
			if (func_534(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_533(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_531(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_535(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_285(iParam0, 0, 0, 1);
			}
			func_531(iParam0, 33, 1);
			func_531(iParam0, 34, 1);
			func_531(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_533(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_533(iParam0, 4);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_532(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_117(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_533(iParam0, 4);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_536(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_537(iParam0, iParam13, 0);
						func_538(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_277(iParam0, 25, 0))
						{
							func_531(iParam0, 25, 0);
						}
						func_278(iParam0, 66, 0);
						func_533(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_533(iParam0, 5);
				}
				func_278(iParam0, 28, 1);
			}
			else
			{
				func_533(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_533(iParam0, 6);
			}
			break;
		case 6:
			if (func_111(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_539(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_540(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_533(iParam0, 7);
		case 7:
			func_535(iParam0, bParam9, bParam15, 0);
			func_541(iParam0, 4, bParam11);
			func_542(iParam0);
			if (bParam20)
			{
				if (func_543(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_544(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_533(iParam0, 0);
			func_545(iParam0, 16, 1);
			func_531(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			EVENT::_0xBB1E41DD3D3C6250(iVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				ANIMSCENE::_0x99B2A2E3655DEAF1(iVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_6);
		}
	}
}

void func_281(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, iParam0->f_7))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, iParam0->f_7);
	}
}

void func_282(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	if (bParam2 && (!func_177() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_225(iParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	if (bParam3)
	{
		func_543(iParam0);
	}
}

bool func_283(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_284(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_546(&(iParam0->f_428), iParam1, sParam2, iParam3, iParam4, bParam6);
	func_547(iParam0, iParam1, sParam2);
	if (bParam5)
	{
		func_280(iParam0, iParam1);
	}
}

void func_285(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_126(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_548(iParam0, bParam3);
	}
	else
	{
		func_549(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_550(iParam0, bParam3);
	}
	else
	{
		func_551(iParam0, bParam3);
	}
}

void func_286(int iParam0)
{
	int iVar0;

	if (!func_126(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(iVar0, 0, 0f);
}

bool func_287(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_288(int iParam0)
{
	func_290(iParam0, 1);
	func_290(iParam0, 128);
	func_290(iParam0, 256);
	func_290(iParam0, 512);
	func_290(iParam0, 1024);
	func_290(iParam0, 2048);
	func_290(iParam0, 4096);
	func_290(iParam0, 65536);
	func_290(iParam0, 16384);
	func_290(iParam0, 262144);
	func_290(iParam0, 524288);
	func_290(iParam0, 1048576);
	func_290(iParam0, 2097152);
	func_290(iParam0, 32768);
	func_290(iParam0, 131072);
	func_290(iParam0, 134217728);
	func_290(iParam0, 1073741824 /* Float: 2f */);
}

void func_289(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_290(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

bool func_291(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = 860729266;
			return true;
		case 128:
			*uParam1 = 1606325429;
			return true;
		case 256:
			*uParam1 = 1743550585;
			return true;
		case 512:
			*uParam1 = 1064646155;
			return true;
		case 1024:
			*uParam1 = -536694793;
			return true;
		case 2048:
			*uParam1 = -1304053509;
			return true;
		case 4096:
			*uParam1 = 879715242;
			return true;
		case 65536:
			*uParam1 = -972364774;
			return true;
		case 16384:
			*uParam1 = -1100875244;
			return true;
		case 262144:
			*uParam1 = 1153596794;
			return true;
		case 524288:
			*uParam1 = 1016389820;
			return true;
		case 1048576:
			*uParam1 = -726966617;
			return true;
		case 2097152:
			*uParam1 = 1365901568;
			return true;
		case 32768:
			*uParam1 = -1658942149;
			return true;
		case 131072:
			*uParam1 = -1980913856;
			return true;
		case 134217728:
			*uParam1 = -1683207356;
			return true;
		case 1073741824:
			*uParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_292(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

void func_293(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 || iParam1);
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_292(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_292(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_292(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_292(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_292(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_292(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_292(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_292(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_292(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_292(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_292(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_292(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_292(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_292(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_292(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_292(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_292(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_292(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_292(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_292(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_292(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_292(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_292(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_292(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_292(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_292(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

int func_295(var uParam0)
{
	return uParam0;
}

bool func_296(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_297(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

int func_298(int iParam0)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_299()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_300(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_126(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

void func_301(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (PED::_0x7BE607DAFF382FD2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (ITEMSET::GET_ITEMSET_SIZE(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0));
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
			{
				iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x32A1E3B83D501096(iVar3)))
					{
						PERSCHAR::_0x7B204F88F6C3D287(PERSCHAR::_0x32A1E3B83D501096(iVar3));
					}
					else
					{
						PED::DELETE_PED(&iVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar3, false, false);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_302(float fParam0)
{
	func_552(10, fParam0);
}

bool func_303()
{
	if (func_271() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_304()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_305(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_306(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_307(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_308(var uParam0, int iParam1)
{
	int iVar0;

	if (func_338(uParam0, 4))
	{
		return 1;
	}
	switch (iParam1)
	{
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			HUD::_DISPLAY_HUD_COMPONENT(474191950);
			break;
		default:
			if (func_157())
			{
				if (!func_63(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_157())
	{
		func_337(uParam0, 512);
		func_553(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_554(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_555(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_158();
	func_176(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_553(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1875);
	}
	if (func_338(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_556()))
	{
		CAM::_0x798BE43C9393632B(func_556());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_556())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			if (uParam0->f_1345[iVar0 /*22*/].f_21)
			{
				CAM::_0x798BE43C9393632B(&(uParam0->f_1345[iVar0 /*22*/].f_2));
			}
		}
		iVar0++;
	}
	PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
	if (func_63(uParam0, 524288) || iParam1 == 1)
	{
		func_224();
	}
	if (func_338(uParam0, 16))
	{
		if (func_355(uParam0) == 0)
		{
			if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
			{
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
		}
	}
	func_557();
	if (func_338(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
		}
	}
	func_369(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_309(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_310(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_311(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_404(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> func_312(var uParam0)
{
	return uParam0->f_440;
}

var func_313(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	func_558(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

int func_314(int iParam0)
{
	int iVar0;

	if (!func_390(iParam0))
	{
		return 0;
	}
	if (!func_392(func_391(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_393(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_393(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_393(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_393(iParam0));
	return 1;
}

bool func_315(char* sParam0)
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
	{
		return true;
	}
	return false;
}

void func_316(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	func_25(iParam0, 32768);
	func_559(&(iParam0->f_958), iParam4);
}

void func_317(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_318(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_319(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_410(uParam0[iVar1 /*3*/]))
		{
			if (func_411((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_560(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_413(uParam1[iVar1 /*5*/]))
		{
			if (func_411((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_561(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_415(uParam2[iVar1 /*3*/]))
		{
			if (func_411((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_562(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_417(uParam3[iVar1 /*3*/]))
		{
			if (func_411((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_418(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_411(uParam4->f_1, iParam12))
	{
		if (!func_419(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_420(uParam5[iVar1 /*67*/]))
		{
			if (func_411((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_563(uParam5[iVar1 /*67*/]))
				{
					if (!func_564(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_420(uParam5[iVar1 /*67*/]))
		{
			if (func_411((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_563(uParam5[iVar1 /*67*/]))
				{
					if (func_564(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_422(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!func_565(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_424(uParam6[iVar1 /*4*/]))
		{
			if (func_411((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_566(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_426(uParam7[iVar1 /*5*/]))
		{
			if (func_411((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_567(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_428(uParam8[iVar1 /*3*/]))
		{
			if (func_411((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_568(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_430(uParam9[iVar1 /*3*/]))
		{
			if (func_411((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_569(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_432(uParam10[iVar1 /*4*/]))
		{
			if (func_411((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_570(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_434(uParam11[iVar1 /*3*/]))
		{
			if (func_411((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_571(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_320(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_572(iParam0);
	return -1;
}

bool func_321(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_200(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_322(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_201(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

int func_323(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_324(int iParam0)
{
	if (func_152(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_325(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_326(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_327(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_328(int iParam0, bool bParam1)
{
	if (func_324(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_329()
{
	return true;
}

struct<4> func_330(int iParam0, int iParam1)
{
	return func_573(iParam0, iParam1);
}

int func_331(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_574(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_332(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam1, Global_43616))
	{
		ITEMSET::ADD_TO_ITEMSET(iParam1, Global_43616);
	}
	if (bParam2)
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, func_575(), true);
	}
}

int func_333(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar1 /*12*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_334(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_335(var uParam0, int iParam1)
{
	vector3 vVar0[2];
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;

	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			vVar7 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			vVar10 = { vVar7.y, (vVar7.x * -1f), 0f };
			vVar10 = { func_576(vVar10) * Vector(2f, 2f, 2f) };
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) + vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			vVar0[1 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + uParam0->f_1016[iParam1 /*41*/].f_4 / Vector(2f, 2f, 2f) - vVar10 };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[1 /*3*/], &(vVar0[1 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[0 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0[1 /*3*/], uParam0->f_1016[iParam1 /*41*/].f_7, true))
				{
					return vVar0[1 /*3*/];
				}
				else
				{
					return vVar0[0 /*3*/];
				}
			}
			break;
		case 1:
			fVar13 = 0f;
			if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f)) / 2f);
			}
			else
			{
				fVar13 = ((uParam0->f_1016[iParam1 /*41*/].f_12 + uParam0->f_1016[iParam1 /*41*/].f_13) / 2f);
			}
			vVar0[0 /*3*/] = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f)), (BUILTIN::SIN(fVar13) * (uParam0->f_1016[iParam1 /*41*/].f_11 + 5f))) };
			vVar0[0 /*3*/].f_2 = (vVar0[0 /*3*/].f_2 + 10f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0[0 /*3*/], &(vVar0[0 /*3*/].f_2), false);
			if (!func_90(vVar0[0 /*3*/]))
			{
				return vVar0[0 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_336(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_337(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_338(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_339(var uParam0, int iParam1)
{
	return func_577(uParam0->f_27, iParam1);
}

void func_340(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_GROUP(iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(iParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
	}
}

void func_341(int iParam0, int iParam1, char* sParam2)
{
	func_578(&(iParam0->f_428), iParam1, sParam2);
}

bool func_342(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_343(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_126(iParam0))
	{
		return;
	}
	if (func_127(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_278(iParam0, 56, 1);
		func_19(&(Global_1359489.f_40), 1);
	}
	func_579(iParam0, 0);
	func_541(iParam0, 4, 0);
	func_580(iParam0);
	func_542(iParam0);
	func_531(iParam0, 37, 1);
	bVar0 = func_111(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_581(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_277(iParam0, 64, 1))
	{
		func_531(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_531(iParam0, 33, 1);
		func_531(iParam0, 34, 1);
		func_582(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_535(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_278(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_278(iParam0, 35, 1);
			if (bParam8)
			{
				func_278(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_583(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_531(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_278(iParam0, 33, 1);
		func_535(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_19(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_260(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_278(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_584(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_277(iParam0, 45, 1))
	{
		func_531(iParam0, 45, 1);
	}
	func_585(iParam0, 16, 1);
	func_531(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_111(func_586(iParam0), 0))
		{
			func_587(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_344(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_345(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_345(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_346(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_588(iParam0, 32);
	func_589();
}

void func_347(int iParam0)
{
	int iVar0;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_348(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_350(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_350(iParam0);
	}
}

int func_348(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

bool func_349(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_350(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_351(int iParam0)
{
	int iVar0;

	iVar0 = func_590(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_352(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_591(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_353(var uParam0)
{
	bool bVar0;

	if (!func_63(uParam0, 134217728))
	{
		bVar0 = true;
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("BANDANA"));
		if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("BANDANA")))
		{
			bVar0 = false;
		}
		STREAMING::REQUEST_ANIM_DICT(func_592(1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_592(1)))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_364(uParam0, 134217728);
		}
	}
}

void func_354(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!func_63(uParam0, 65536))
	{
		if (PED::IS_PED_FALLING(Global_35))
		{
			return;
		}
	}
	if (Global_1430231.f_4)
	{
		return;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return;
	}
	if (!func_63(uParam0, 16777216))
	{
		return;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return;
	}
	func_362(uParam0);
	func_593(uParam0, uParam0->f_1897, uParam0->f_1899);
	func_594(uParam0);
	if (uParam0->f_1900 && !uParam0->f_1899)
	{
		if (((((uParam0->f_1895 >= 0 && uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 > 0f) && uParam0->f_1688 >= 0) && !func_91(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, (uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 + 5f), 1, 1)) && !func_63(uParam0, 33554432)) && !func_63(uParam0, 4))
		{
			func_595(uParam0, uParam0->f_1897);
			return;
		}
	}
	if (!func_63(uParam0, 4))
	{
		if (func_596(uParam0))
		{
			if (!bParam2)
			{
				uParam0->f_1684 = uParam0->f_1688;
				func_364(uParam0, 8);
				return;
			}
		}
		else
		{
			func_595(uParam0, uParam0->f_1897);
		}
		if (uParam0->f_1016[uParam0->f_1690 /*41*/].f_29)
		{
			fVar0 = func_597(uParam0, uParam0->f_1690);
			if (fVar0 < 0f || (uParam0->f_1897 && fVar0 < 1f))
			{
				uParam0->f_1688 = uParam0->f_1690;
				if (!bParam2)
				{
					uParam0->f_1684 = uParam0->f_1690;
					func_364(uParam0, 8);
					return;
				}
			}
			else if (fVar0 > 0f && fVar0 < 10000f)
			{
				if ((uParam0->f_1689 == -1f || fVar0 <= uParam0->f_1689) || uParam0->f_1690 == uParam0->f_1688)
				{
					if (uParam0->f_1690 != uParam0->f_1688)
					{
					}
					uParam0->f_1688 = uParam0->f_1690;
					uParam0->f_1689 = fVar0;
					func_364(uParam0, 16);
					if (((!func_63(uParam0, 32) && iParam1 != 2) && !bParam2) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, true) < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_11 + 5f))
					{
						func_598(uParam0);
						func_364(uParam0, 32);
					}
				}
			}
			else if (uParam0->f_1688 == uParam0->f_1690)
			{
				func_337(uParam0, 16);
			}
		}
		if (uParam0->f_1690 + 1 >= 8)
		{
			uParam0->f_1690 = 0;
		}
		else
		{
			bVar1 = false;
			iVar2 = uParam0->f_1690 + 1;
			while (iVar2 <= 7)
			{
				if (uParam0->f_1016[iVar2 /*41*/].f_29)
				{
					uParam0->f_1690 = iVar2;
					iVar2 = 7;
					bVar1 = true;
				}
				iVar2++;
			}
			if (!bVar1)
			{
				uParam0->f_1690 = 0;
			}
		}
		if (uParam0->f_1688 < 0)
		{
			return;
		}
		if (func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
		{
			return;
		}
	}
	if (func_63(uParam0, 16))
	{
		fVar4 = func_207(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		if (uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
		fVar5 = func_485(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		fVar6 = 2f;
		if (MISC::ABSF((fVar5 - ENTITY::GET_ENTITY_HEADING(Global_35))) <= 90f)
		{
			fVar6 = 1f;
		}
		if (fVar4 <= uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
		{
			iVar3 = 1;
			if (Global_36.f_2 >= uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10))
			{
				func_361(uParam0, uParam0->f_1016[uParam0->f_1688 /*41*/].f_27, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, fVar6);
			}
			if ((uParam0->f_1899 && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879)) && ENTITY::GET_ENTITY_SPEED(uParam0->f_1901) > 5f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && !VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 1f, 2000, false);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901) && VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
			{
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
			}
		}
		else if ((uParam0->f_1897 && fVar4 <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1898))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1898, 1f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		}
	}
	if (((uParam0->f_1897 && iVar3) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1898) > 1.25f) || func_63(uParam0, 4))
	{
		if (((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879) && func_597(uParam0, uParam0->f_1688) < 10000f) && func_63(uParam0, 16)) || func_63(uParam0, 4))
		{
			if (!func_63(uParam0, 4))
			{
				func_364(uParam0, 4);
			}
			iVar7 = 5152;
			iVar7 |= 32;
			iVar7 |= 4096;
			iVar7 |= 1;
			if (!func_359(uParam0, uParam0->f_1688))
			{
				iVar7 |= 2048;
			}
			if (func_386(Global_35, &(uParam0->f_1686), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7, uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				uParam0->f_1686 = 0;
				func_337(uParam0, 4);
			}
		}
	}
	else if (func_63(uParam0, 4))
	{
		func_337(uParam0, 4);
	}
}

int func_355(var uParam0)
{
	return *uParam0;
}

void func_356(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_63(uParam0, 512))
	{
		return;
	}
	if (func_21(&(uParam0->f_1872)) < 2f)
	{
		return;
	}
	if (func_228(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		func_364(uParam0, 524288);
	}
}

void func_357(bool bParam0)
{
	if (bParam0)
	{
		func_599(4);
	}
	func_599(2);
	MISC::SET_BIT(&(Global_1956580.f_1), 0);
}

void func_358()
{
	Global_1905944.f_5695 = 1;
}

bool func_359(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((uParam0->f_475[iVar0 /*18*/].f_17 == 1 && uParam0->f_475[iVar0 /*18*/].f_2 == 4) && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_360(var uParam0)
{
	return uParam0->f_2;
}

void func_361(var uParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_577(uParam1, 8))
	{
		iVar0 |= 8;
	}
	if (func_577(uParam1, 8192))
	{
		iVar0 |= 32;
	}
	if (uParam0->f_1897)
	{
		fParam3 = 0.55f;
		PED::SET_PED_RESET_FLAG(uParam0->f_1898, 214, true);
	}
	if (uParam0->f_1896 && func_63(uParam0, 4096))
	{
		iVar0 |= 16;
	}
	if (func_577(uParam1, 262144) && Global_1935630.f_44 == joaat("WEAPON_LASSO"))
	{
		iVar0 |= 16;
	}
	func_600(&iVar1, uParam2);
	func_601(&(uParam0->f_1904), iVar0, iVar1, fParam3);
	if (!Global_1935630.f_12)
	{
		if (!func_63(uParam0, 67108864))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 36, true);
	}
	func_602();
	func_603(uParam0, 1);
}

void func_362(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;

	iVar0 = uParam0->f_1688;
	if (iVar0 >= 0 && !func_368(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, true) <= uParam0->f_1016[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1692 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1692), func_604(uParam0->f_1345[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692), func_556(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1692.f_8), func_604(uParam0->f_1345[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1692.f_8), func_605(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1692)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1692.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1345[iVar0 /*22*/])
		{
			if (!func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
			{
				if (!func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 8))
				{
					func_600(&iVar19, uParam0->f_1345[iVar0 /*22*/].f_1);
					func_607(&(uParam0->f_1904), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_1016[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1345[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 35)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1345[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1345[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902) || iVar26 != uParam0->f_1902))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
											func_553(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_608(Global_35, iVar23, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1345[iVar0 /*22*/].f_18 != 0f || uParam0->f_1345[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, func_485(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, 1), uParam0->f_1345[iVar0 /*22*/].f_18, 0f, uParam0->f_1345[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_1016[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_1016[iVar0 /*41*/].f_14;
							bVar29 = func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 2);
							bVar30 = (func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = func_606(uParam0->f_1345[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1692));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									func_609(0, 0);
								}
								bVar32 = true;
								func_553(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1708.f_16 != iVar23);
								bVar32 = (bVar32 || !func_610(uParam0->f_1708.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1708.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1708.f_22 != bVar30);
								uParam0->f_1708.f_16 = iVar23;
								uParam0->f_1708.f_17 = { vVar20 };
								uParam0->f_1708.f_20 = fVar27;
								uParam0->f_1708.f_21 = fVar28;
								uParam0->f_1708.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1708 = { uParam0->f_1692 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1708));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1692), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1731.f_16 != iVar23);
								bVar32 = (bVar32 || !func_610(uParam0->f_1731.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1731.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1731.f_21 != bVar30);
								uParam0->f_1731.f_16 = iVar23;
								uParam0->f_1731.f_17 = { vVar20 };
								uParam0->f_1731.f_20 = !bVar31;
								uParam0->f_1731.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1731 = { uParam0->f_1692 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1731));
								}
							}
							Jump @1466; //curOff = 1420
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
							}
							StringCopy(&(uParam0->f_1692), "", 64);
							StringCopy(&(uParam0->f_1692.f_8), "", 64);
							func_611(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

int func_363(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 || iParam1 == 2)
	{
		return 0;
	}
	if (func_612(uParam0, &iVar0))
	{
		func_613(uParam0, iVar0);
		return 1;
	}
	return 0;
}

void func_364(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

void func_365(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	vector3 vVar6;
	int iVar9;

	if (func_355(uParam0) != 0)
	{
		return;
	}
	iVar0 = uParam0->f_1688;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 >= 0)
	{
		if (Global_36.f_2 < uParam0->f_1016[iVar0 /*41*/].f_1.f_2)
		{
			return;
		}
		fVar1 = uParam0->f_1016[iVar0 /*41*/].f_15;
		if (fVar1 <= 0f)
		{
			fVar1 = uParam0->f_1016[iVar0 /*41*/].f_14;
		}
		if (fVar1 <= 0f)
		{
			return;
		}
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iVar0 /*41*/].f_1, false);
		fVar3 = MISC::ABSF((Global_36.f_2 - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		bVar4 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875);
		if (bVar4)
		{
			vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1875) };
			fVar5 = MISC::ABSF((vVar6.z - uParam0->f_1016[iVar0 /*41*/].f_1.f_2));
		}
		if (fVar2 <= fVar1 && (fVar3 <= uParam0->f_1016[iVar0 /*41*/].f_10 || (bVar4 && fVar5 <= uParam0->f_1016[iVar0 /*41*/].f_10)))
		{
			iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(iVar9) || !INTERIOR::IS_VALID_INTERIOR(uParam0->f_1902))
			{
				func_364(uParam0, 65536);
				return;
			}
			else if (uParam0->f_1902 == iVar9)
			{
				func_364(uParam0, 65536);
				return;
			}
		}
		func_337(uParam0, 65536);
	}
}

void func_366(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	if (func_8(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1894)
		{
			if (uParam0->f_475[iVar0 /*18*/].f_7)
			{
				func_614(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_475[iVar0 /*18*/].f_6)
			{
				bVar1 = func_615(uParam0, iVar0);
				if (bVar1)
				{
					func_616(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!func_359(uParam0, uParam0->f_1684))
		{
			func_617(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1691;
	while (iVar0 <= (uParam0->f_1894 - 1))
	{
		if (uParam0->f_475[iVar0 /*18*/].f_7)
		{
			func_614(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_475[iVar0 /*18*/].f_6)
		{
			bVar1 = func_615(uParam0, iVar0);
			if (bVar1)
			{
				func_616(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1691 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1691 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_367(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(uParam0->f_1921);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, uParam0->f_1921);
			if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
			{
				PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(iVar2)), 184, true);
			}
			iVar0++;
		}
	}
}

bool func_368(var uParam0, int iParam1)
{
	return (uParam0->f_1665 && iParam1) != 0;
}

void func_369(var uParam0)
{
	func_618(&(uParam0->f_1904));
}

void func_370(var uParam0)
{
	uParam0->f_1665 = 0;
}

void func_371(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	func_619(uParam0, 4);
	if (func_620(uParam0, &uParam1, iParam5))
	{
		func_307(uParam0, 1);
	}
}

void func_372(var uParam0)
{
	if (!func_621(uParam0))
	{
		return;
	}
	if (!func_63(uParam0, 4194304))
	{
		func_622(uParam0);
		func_364(uParam0, 4194304);
	}
	if (func_623(uParam0))
	{
		func_624(uParam0);
		func_625(uParam0);
		func_307(uParam0, 2);
	}
}

void func_373(var uParam0)
{
	uParam0->f_1685 = -1;
	func_306(uParam0, 0);
	func_307(uParam0, 3);
	func_626(uParam0, 0);
	func_260(&(uParam0->f_1869));
	func_627(uParam0);
	func_260(&(uParam0->f_1872));
}

bool func_374(var uParam0)
{
	if (uParam0->f_1770)
	{
		return false;
	}
	return uParam0->f_1769;
}

void func_375()
{
	Global_18 = 1;
	Global_43884 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_376(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_207(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_14)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_14 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_377(var uParam0)
{
	if (uParam0->f_1684 >= 0)
	{
		if (func_207(Global_35, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 0) < uParam0->f_1016[uParam0->f_1684 /*41*/].f_15)
		{
			return true;
		}
		else if (uParam0->f_1016[uParam0->f_1684 /*41*/].f_15 >= uParam0->f_1016[uParam0->f_1684 /*41*/].f_11)
		{
			return true;
		}
	}
	return false;
}

bool func_378(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_1685 < 0)
	{
		return true;
	}
	switch (uParam0->f_475[uParam0->f_1685 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (func_48(&(uParam0->f_1872)) >= 15f)
			{
				func_364(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1768)
			{
				if (func_48(&(uParam0->f_1872)) >= 15f)
				{
					func_364(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_628(uParam0)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(func_628(uParam0), false))
				{
					uParam0->f_1768 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(func_628(uParam0));
				bVar1 = ANIMSCENE::IS_ANIM_SCENE_FINISHED(func_628(uParam0), false);
				bVar2 = ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(func_628(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return func_48(&(uParam0->f_1872)) >= 15f;
	}
	return false;
}

bool func_379(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_380(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/].f_17 == 2 && func_629(&(uParam0->f_475[iVar0 /*18*/]), 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_381(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

bool func_382(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

float func_383(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_630(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_631(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_631(iParam0) + 1;
	fVar6 = func_632(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_633(fVar3, fVar4, fVar11);
	return fVar12;
}

int func_385(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_221(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_90(uParam1->f_6))
		{
		}
	}
	bVar0 = func_634();
	if (*uParam1)
	{
		if (bVar0 && !func_635(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_636(5))
			{
				func_637(5);
				func_638(5);
				func_478(0);
				func_477(0);
			}
		}
	}
	if (func_639(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_635(Global_1835011[37 /*74*/].f_1, 1)) && !func_635(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_635(Global_1835011[43 /*74*/].f_1, 1)) && !func_635(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_382(iVar1))
	{
		bVar3 = true;
		if (func_640(iVar1))
		{
			bVar4 = true;
		}
		if (func_641(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_642(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_636(0) && func_636(1))
			{
				func_643(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_644())
			{
				func_645();
			}
			func_478(0);
			func_477(0);
			func_479(uParam1->f_6);
		}
	}
	if (!func_382(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_630(uParam1->f_10) == 0 || func_646(uParam1->f_10) == 0) || func_647(uParam1->f_10) == 0)
			{
				func_648(uParam1->f_10);
			}
			func_649(uParam1->f_10);
			func_650(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_80(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_382(iVar1))
	{
		bVar3 = true;
		if (func_640(iVar1))
		{
			bVar4 = true;
		}
		if (func_641(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_90(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_651(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { func_652(uParam1->f_10) };
			Var10 = { func_653() };
			func_654(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_349(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_655(uParam1->f_10);
		if (uParam1->f_2 && !func_90(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_347(uParam1->f_10);
	if (func_349(uParam1->f_10))
	{
		iVar16 = func_348(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_287(*iParam1, 128))
	{
		if (!func_283(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_287(*iParam1, 2))
	{
		if (bVar3)
		{
			if (!func_656(iVar2))
			{
				return false;
			}
			if (!func_283(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_657(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_287(*iParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_658(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_659(iParam1, 128);
			return false;
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	if (func_287(*iParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*iParam1 = 0;
			return true;
		}
	}
	if (func_287(*iParam1, 8))
	{
		if (bVar3)
		{
			if (!func_656(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*iParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_658(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_658(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_658(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (func_287(*iParam1, 2336))
		{
			if (!func_656(iVar2))
			{
			}
			if (func_660(iVar2, *iParam1))
			{
				func_661(iParam1, 32);
				func_661(iParam1, 256);
				func_661(iParam1, 2048);
				func_659(iParam1, 512);
				func_659(iParam1, 1024);
				func_659(iParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_287(*iParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_656(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_661(iParam1, 64);
			}
		}
		if (func_658(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*iParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(iVar2) || (TASK::IS_PED_RUNNING(iVar2) && func_658(iParam2, 1024))) || func_658(iParam2, 8)) && !func_287(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_659(iParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(iVar2) && func_658(iParam2, 4096)) && !func_287(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_659(iParam1, 2048);
			func_659(iParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && func_658(iParam2, 32)) && !func_287(*iParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_659(iParam1, 256);
			func_659(iParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_659(iParam1, 64);
		}
		else if (!func_658(iParam2, 1))
		{
			if (!func_658(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(iParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_657(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_287(*iParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_659(iParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_659(iParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_658(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_659(iParam1, 4);
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (!func_658(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_659(iParam1, 8);
	}
	return false;
}

struct<8> func_387(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_662(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = func_663(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_388(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return;
	}
	if (!bParam4)
	{
		if (func_74(0, 0, 1))
		{
			return;
		}
	}
	if (Global_43837 >= 5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43806[iVar0 /*6*/]))
		{
			Global_43806[iVar0 /*6*/] = iParam0;
			Global_43806[iVar0 /*6*/].f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Global_43806[iVar0 /*6*/].f_3 = iParam1;
			Global_43806[iVar0 /*6*/].f_4 = iParam2;
			Global_43806[iVar0 /*6*/].f_5 = iParam3;
			Global_43837++;
			return;
		}
		iVar0++;
	}
}

bool func_390(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_391(int iParam0)
{
	if (!func_390(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_392(int iParam0)
{
	return iParam0 != 0;
}

int func_393(int iParam0)
{
	if (!func_390(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_394()
{
	return Global_1894899.f_2;
}

bool func_395(int iParam0)
{
	if (!func_664(iParam0))
	{
		return false;
	}
	return (!func_634() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_396(int iParam0)
{
	if (!func_665(iParam0))
	{
		return false;
	}
	return func_666(iParam0, 33554432);
}

bool func_397(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_519(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_398(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_399(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] && iParam1) != 0;
}

void func_400(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

int func_401(int iParam0, int iParam1)
{
	return func_668(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_667(iParam1)));
}

void func_402(int iParam0, int iParam1)
{
	if (!func_399(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] || iParam1);
}

bool func_403(int iParam0)
{
	return func_590(iParam0) == 0;
}

bool func_404(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_669(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

int func_405(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_403(iParam0))
	{
		return -1;
	}
	if (func_271() != -1)
	{
		iVar2 = func_32(iParam0);
		if (iVar2 >= 0)
		{
			func_670(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_671(iVar1, 1);
			func_670(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_32(iParam0);
		if (iVar2 >= 0)
		{
			func_670(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_190(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_671(iVar0, 1);
					func_670(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_407(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && PED::IS_PED_IN_ANY_VEHICLE(*iParam0, true))
			{
			}
			PED::DELETE_PED(iParam0);
		}
	}
}

bool func_408()
{
	return true;
}

void func_409(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_90(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (func_610(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || VOLUME::_0x769BB7626B8CDB06(vVar2, 2f, 0, iParam3, 16384))
				{
					VOLUME::_0xFDFECC6EE4491E11(iVar1);
					Global_1911670[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

bool func_410(var uParam0)
{
	return *uParam0 != 0;
}

bool func_411(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_672(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_412(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_674(&(uParam0->f_1), 1);
	}
}

bool func_413(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_414(var uParam0)
{
	if (!func_673(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				TASK::REQUEST_WAYPOINT_RECORDING(*uParam0);
				break;
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_674(&(uParam0->f_3), 1);
	}
}

bool func_415(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_416(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

bool func_417(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

bool func_418(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_675(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_419(var uParam0)
{
	if (func_673(*uParam0, 2))
	{
		return true;
	}
	if (!func_673(*uParam0, 1))
	{
		func_676(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_674(uParam0, 2);
		return true;
	}
	return false;
}

bool func_420(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_421(var uParam0)
{
	char* sVar0;

	if (!func_673(uParam0->f_2, 1))
	{
		if (func_563(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = func_453(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_303())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_677())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_674(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_422(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_423(var uParam0, int iParam1)
{
	if (!func_673(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
		{
			return;
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

bool func_424(var uParam0)
{
	return *uParam0 != 0;
}

void func_425(var uParam0)
{
	if (!func_673(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_674(&(uParam0->f_2), 1);
	}
}

bool func_426(var uParam0)
{
	return *uParam0 != 0;
}

void func_427(var uParam0)
{
	if (!func_673(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_674(&(uParam0->f_3), 1);
	}
}

bool func_428(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_429(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

bool func_430(var uParam0)
{
	return func_678(*uParam0);
}

void func_431(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

bool func_432(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_433(var uParam0)
{
	if (!func_673(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_674(&(uParam0->f_2), 1);
	}
}

bool func_434(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_435(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

int func_436(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_498[iParam0 /*2*/];
}

int func_437(int iParam0)
{
	return iParam0 & 31;
}

int func_438(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<8> func_439(var uParam0)
{
	return uParam0->f_454;
}

struct<8> func_440()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_441(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_442(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_443(int iParam0)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (VOLUME::IS_POINT_IN_VOLUME(iParam0, Global_1393237.f_11[iVar0 /*30*/].f_3))
		{
			func_679(iVar0, 4096, 0);
			func_679(iVar0, 131072, 0);
			func_680(iVar0, 1);
		}
		iVar0++;
	}
}

int func_444(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
	iVar6 = func_681(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_445(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_682(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_682(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_683(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_489(8);
}

void func_446(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> func_447()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_448(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_449(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
	uParam0->f_4 = iParam1;
	iVar0 = 14;
	if (bParam3)
	{
		iVar0 |= 1;
	}
	uParam0->f_9 = PED::_0x4C39C95AE5DB1329(iParam1, bParam2, iVar0);
}

bool func_450(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_451(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}

void func_452(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_451(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_684(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_685(iVar0);
	*uParam0 = 0;
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_ZERO"):
			return "Arthur";
		case joaat("CS_ABE"):
			return "Abe";
		case joaat("CS_EDMUNDLOWRY"):
			return "EdmundLowry";
		case joaat("CS_ABERDEENPIGFARMER"):
			return "ABERDEENPIGFARMER";
		case joaat("CS_ABERDEENSISTER"):
			return "ABERDEENSISTER";
		case joaat("CS_ABIGAILROBERTS"):
			return "AbigailRoberts";
		case joaat("CS_ALBERTMASON"):
			return "AlbertMason";
		case joaat("CS_ARCHIEDOWN"):
			return "ArchieDown";
		case joaat("CS_BAPTISTE"):
			return "Baptiste";
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
			return "BartholomewBraithwaite";
		case joaat("CS_BEATENUPCAPTAIN"):
			return "CS_BEATENUPCAPTAIN";
		case joaat("CS_BEAUGRAY"):
			return "BeauGray";
		case joaat("CS_PENELOPEBRAITHWAITE"):
			return "PenelopeBraithwaite";
		case joaat("CS_BILLWILLIAMSON"):
			return "BillWilliamson";
		case joaat("CS_BRAITHWAITESERVANT"):
			return "BraithwaiteServant";
		case joaat("CS_CATHERINEBRAITHWAITE"):
			return "CatherineBraithwaite";
		case joaat("CS_CHARLESSMITH"):
			return "CharlesSmith";
		case joaat("CS_CIGCARDGUY"):
			return "CS_CIGCARDGUY";
		case joaat("CS_DINOBONESLADY"):
			return "CS_DINOBONESLADY";
		case joaat("CS_CLEET"):
			return "Cleet";
		case joaat("CS_COLMODRISCOLL"):
			return "ColmODriscoll";
		case joaat("CS_CREOLEGUY"):
			return "CreoleGuy";
		case joaat("CS_SDDOCTOR_01"):
			return "SDDoctor_01";
		case joaat("CS_DALEMARONEY"):
			return "DaleMaroney";
		case joaat("CS_DUTCH"):
			return "Dutch";
		case joaat("CS_EDITHDOWN"):
			return "EdithDown";
		case joaat("CS_FUSSAR"):
			return "Fussar";
		case joaat("CS_FISHCOLLECTOR"):
			return "cs_fishcollector";
		case joaat("CS_BRONTE"):
			return "Bronte";
		case joaat("CS_GUIDOMARTELLI"):
			return "GuidoMartelli";
		case joaat("U_M_M_NBXBRONTEGOON_01"):
			return "U_M_M_NBXBRONTEGOON_01";
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return "G_M_M_UNIBRONTEGOONS_01";
		case joaat("CS_GARETHBRAITHWAITE"):
			return "GarethBraithwaite";
		case joaat("CS_GENSTORYFEMALE"):
			return "GenStoryFemale";
		case joaat("CS_GENSTORYMALE"):
			return "GenStoryMale";
		case joaat("CS_LEON"):
			return "Leon";
		case joaat("CS_GERALDBRAITHWAITE"):
			return "GeraldBraithwaite";
		case joaat("CS_HOSEAMATTHEWS"):
			return "HoseaMatthews";
		case joaat("CS_JACKMARSTON"):
			return "JackMarston";
		case joaat("CS_JACKMARSTON_TEEN"):
			return "JackMarston_Teen";
		case joaat("CS_JAMIE"):
			return "Jamie";
		case joaat("CS_JAVIERESCUELLA"):
			return "JavierEscuella";
		case joaat("CS_JIMCALLOWAY"):
			return "JimCalloway";
		case joaat("CS_JOE"):
			return "Joe";
		case joaat("CS_JOHNMARSTON"):
			return "JohnMarston";
		case joaat("CS_JOHNWEATHERS"):
			return "CS_JOHNWEATHERS";
		case joaat("CS_JOSIAHTRELAWNY"):
			return "JosiahTrelawny";
		case joaat("CS_KAREN"):
			return "Karen";
		case joaat("CS_MRSADLER"):
			return "MrsAdler";
		case joaat("CS_KIERAN"):
			return "Kieran";
		case joaat("CS_LEOSTRAUSS"):
			return "LeoStrauss";
		case joaat("CS_LONDONDERRYSON"):
			return "LondonderrySon";
		case joaat("CS_MARYBETH"):
			return "MaryBeth";
		case joaat("CS_MARYLINTON"):
			return "MaryLinton";
		case joaat("CS_MICAHBELL"):
			return "MicahBell";
		case joaat("CS_MOLLYOSHEA"):
			return "MollyOshea";
		case joaat("CS_MRLINTON"):
			return "CS_MrLinton";
		case joaat("CS_MRPEARSON"):
			return "MrPearson";
		case joaat("CS_MRSLONDONDERRY"):
			return "MrsLondonderry";
		case joaat("CS_MUD2BIGGUY"):
			return "Mud2BigGuy";
		case joaat("CS_PROFESSORBELL"):
			return "ProfessorBell";
		case joaat("CS_REVSWANSON"):
			return "RevSwanson";
		case joaat("CS_SAMARITAN"):
			return "CS_Samaritan";
		case joaat("CS_STRDEPUTY_01"):
			return "StrDeputy_01";
		case joaat("CS_STRDEPUTY_02"):
			return "StrDeputy_02";
		case joaat("CS_STRSHERIFF_01"):
		case joaat("U_M_M_STRSHERRIFF_01"):
			return "StrSheriff_01";
		case joaat("CS_SUSANGRIMSHAW"):
			return "SusanGrimshaw";
		case joaat("CS_TAVISHGRAY"):
			return "TavishGray";
		case joaat("CS_THEODORELEVIN"):
			return "TheodoreLevin";
		case joaat("CS_THOMASDOWN"):
			return "ThomasDown";
		case joaat("CS_TILLY"):
			return "Tilly";
		case joaat("CS_UNCLE"):
			return "Uncle";
		case joaat("G_M_M_UNICRIMINALS_01"):
			return "G_M_M_UniCriminals_01";
		case joaat("G_M_M_UNIDUSTER_01"):
			return "G_M_M_UNIDUSTER_01";
		case joaat("CS_VALSHERIFF"):
			return "CS_VALSHERIFF";
		case joaat("S_M_M_MARSHALLSRURAL_01"):
			return "S_M_M_MARSHALLSRURAL_01";
		case joaat("U_M_O_VHTEXOTICSHOPKEEPER_01"):
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case joaat("CS_SEAN"):
			return "Sean";
		case joaat("CS_LENNY"):
			return "Lenny";
		case joaat("CS_HERCULE"):
			return "Hercule";
		case joaat("CS_CREOLECAPTAIN"):
			return "CreoleCaptain";
		case joaat("U_M_M_CREOLECAPTAIN_01"):
			return "U_M_M_CREOLECAPTAIN_01";
		case joaat("CS_RINGMASTER"):
			return "RingMaster";
		case joaat("U_M_M_VALBARTENDER_01"):
			return "U_M_M_VALBARTENDER_01";
		case joaat("A_M_M_EMRFARMHAND_01"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("A_M_M_GRISURVIVALIST_01"):
			return "A_M_M_GriSurvivalist_01";
		case joaat("CS_LILLYMILLET"):
			return "LillyMillet";
		case joaat("A_F_M_STRTOWNFOLK_01"):
			return "A_F_M_STRTOWNFOLK_01";
		case joaat("A_M_M_STRTOWNFOLK_01"):
			return "A_M_M_STRTOWNFOLK_01";
		case joaat("S_M_M_STRLUMBERJACK_01"):
			return "S_M_M_STRLUMBERJACK_01";
		case joaat("G_M_M_UNICRIMINALS_02"):
			return "G_M_M_UniCriminals_02";
		case joaat("G_M_M_UNICORNWALLGOONS_01"):
			return "G_M_M_UNICORNWALLGOONS_01";
		case joaat("A_M_M_NBXUPPERCLASS_01"):
			return "A_M_M_NBXUPPERCLASS_01";
		case joaat("A_F_M_NBXUPPERCLASS_01"):
			return "A_F_M_NBXUPPERCLASS_01";
		case joaat("A_M_M_VALFARMER_01"):
			return "A_M_M_VALFARMER_01";
		case joaat("A_M_M_VALTOWNFOLK_01"):
			return "A_M_M_VALTOWNFOLK_01";
		case joaat("A_M_M_VALTOWNFOLK_02"):
			return "A_M_M_VALTOWNFOLK_02";
		case joaat("A_F_M_VALTOWNFOLK_01"):
			return "A_F_M_VALTOWNFOLK_01";
		case joaat("U_M_M_NBXBARTENDER_01"):
			return "U_M_M_NBXBARTENDER_01";
		case joaat("CS_NBXEXECUTED"):
			return "NBXExecuted";
		case joaat("CS_RHODEPUTY_01"):
			return "RHODEPUTY_01";
		case joaat("U_M_M_RHDSHERIFF_01"):
			return "RHDSHERIFF_01";
		case joaat("CS_LEIGHGRAY"):
			return "LeighGray";
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return "Horse_01";
		case joaat("U_M_M_STRGENSTOREOWNER_01"):
			return "U_M_M_StrGenStoreOwner_01";
		case joaat("CS_TOMDICKENS"):
			return "TomDickens";
		case joaat("CS_DAVIDGEDDES"):
			return "DavidGeddes";
		case joaat("CS_ANSEL_ATHERTON"):
			return "ANSEL_ATHERTON";
		case joaat("CS_WROBEL"):
			return "CS_Wrobel";
		case joaat("A_C_COW"):
			return "COW";
		case joaat("A_C_BULL_01"):
			return "BULL";
		case joaat("CS_ALBERTCAKEESQUIRE"):
			return "ALBERTCAKEESQUIRE";
		case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case joaat("A_C_DOGCATAHOULACUR_01"):
			return "A_C_DOGCATAHOULACUR_01";
		case joaat("A_C_DOGRUFUS_01"):
			return "A_C_DOGRUFUS_01";
		case joaat("A_C_DOGLION_01"):
			return "A_C_DOGLION_01";
		case joaat("CS_TIGERHANDLER"):
			return "Handler";
		case joaat("CS_VALAUCTIONBOSS_01"):
			return "VALAUCTIONBOSS_01";
		case joaat("CS_NBXRECEPTIONIST_01"):
			return "NbxReceptionist_01";
		case joaat("U_M_M_BIVFOREMAN_01"):
			return "U_M_M_BiVForeman_01";
		case joaat("U_M_M_RACFOREMAN_01"):
			return "U_M_M_RACFOREMAN_01";
		case joaat("CS_CHAINPRISONER_01"):
			return "CHAINPRISONER_01";
		case joaat("CS_CHAINPRISONER_02"):
			return "CHAINPRISONER_02";
		case joaat("U_M_M_VALPOKERPLAYER_01"):
			return "U_M_M_ValPokerPlayer_01";
		case joaat("U_M_M_VALPOKERPLAYER_02"):
			return "U_M_M_ValPokerPlayer_02";
		case joaat("CS_DUNCANGEDDES"):
			return "DUNCANGEDDES";
		case joaat("CS_ANGUSGEDDES"):
			return "ANGUSGEDDES";
		case joaat("CS_EVELYNMILLER"):
			return "EvelynMiller";
		case joaat("CS_SISTERCALDERON"):
			return "SISTERCALDERON";
		case joaat("CS_EDGARROSS"):
			return "EDGARROSS";
		case joaat("CS_WINTONHOLMES"):
			return "U_M_M_GriSurvivalist_01";
		case joaat("U_F_M_RKSHOMESTEADTENANT_01"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("CS_ROCKYSEVEN_WIDOW"):
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case joaat("U_M_M_BHT_STRAWBERRYDUEL"):
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case joaat("U_M_M_RHDTRAINSTATIONWORKER_01"):
			return "StationWorker";
		case joaat("CS_LEVISIMON"):
			return "LEVISIMON";
		case joaat("S_M_M_FUSSARHENCHMAN_01"):
			return "S_M_M_GULFUSSARS_01";
		case joaat("A_C_DONKEY_01"):
			return "A_C_DONKEY_01";
		case joaat("A_M_M_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_01";
		case joaat("A_M_O_GUATOWNFOLK_01"):
			return "S_M_M_ISPWORKER_02";
		case joaat("U_M_O_VALBARTENDER_01"):
			return "U_M_O_ValBartender_01";
		case joaat("U_M_M_NBXBARTENDER_02"):
			return "U_M_M_NBXBARTENDER_02";
		case joaat("CS_UNIDUSTERJAIL_01"):
			return "CS_UNIDUSTERJAIL_01";
		case joaat("A_M_M_RHDTOWNFOLK_01"):
			return "A_M_M_RHDTOWNFOLK_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_01"):
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case joaat("U_M_M_UNIBOUNTYHUNTER_02"):
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case joaat("CS_BROTHERDORKINS"):
			return "BrotherDorkins";
		case joaat("G_M_M_UNIBRAITHWAITES_01"):
			return "G_M_M_UniBraithwaites_01";
		case joaat("A_M_M_GAMHIGHSOCIETY_01"):
			return "A_M_M_GAMHIGHSOCIETY_01";
		case joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"):
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case joaat("CS_EAGLEFLIES"):
			return "EagleFlies";
		case joaat("CS_RAINSFALL"):
			return "CS_RAINSFALL";
		case joaat("A_M_M_WAPWARRIORS_01"):
			return "A_M_M_WapWarriors_01";
		case joaat("A_M_Y_NBXSTREETKIDS_01"):
			return "A_M_Y_NBXSTREETKIDS_01";
		case joaat("U_M_M_BHT_SHACKESCAPE"):
			return "U_M_M_BHT_SHACKESCAPE";
		case joaat("A_M_M_HTLROUGHTRAVELLERS_01"):
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case joaat("CS_LEMIUXASSISTANT"):
			return "LemiuxAssistant";
		case joaat("P_KEYS01X"):
			return "p_keys01x";
		case joaat("CS_BALLOONOPERATOR"):
			return "CS_BALLOONOPERATOR";
		case joaat("A_M_M_BIVWORKER_01"):
			return "Worker1";
		case joaat("U_M_M_BHT_MINEFOREMAN"):
			return "U_M_M_BHT_MINEFOREMAN";
		case joaat("A_M_M_NBXSLUMS_01"):
			return "A_M_M_NbxSlums_01";
		case joaat("CS_SDPRIEST"):
			return "U_M_M_NBXPRIEST_01";
		case joaat("A_C_BEAR_01"):
			return "A_C_BEAR_01";
		case joaat("CS_MARSHALL_THURWELL"):
			return "MARSHALL_THURWELL";
		case joaat("CS_FAMOUSGUNSLINGER_02"):
			return "CS_FAMOUSGUNSLINGER_02";
		case joaat("CS_SD_STREETKID_01"):
			return "cs_sd_streetkid_01";
		case joaat("CS_SD_STREETKID_02"):
			return "cs_sd_streetkid_02";
		case joaat("CS_OBEDIAHHINTON"):
			return "ObediahHinton";
		case joaat("CS_POISONWELLSHAMAN"):
			return "PoisonWellShaman";
		case joaat("CS_COOPER"):
			return "A_M_M_EMRFARMHAND_01";
		case joaat("U_M_M_BHT_BENEDICTALLBRIGHT"):
			return "u_m_m_bht_benedictallbright";
		case joaat("CS_JULES"):
			return "Jules";
		case joaat("CS_MRDEVON"):
			return "MRDEVON";
		case joaat("CS_MRWAYNE"):
			return "MRWAYNE";
		case joaat("CS_PAYTAH"):
			return "PAYTAH";
		case joaat("CS_VALDEPUTY_01"):
			return "CS_VALDEPUTY_01";
		case joaat("MES_SADIE5_MALES_01"):
			return "MES_SADIE5_MALES_01^1";
		case joaat("A_M_M_NBXDOCKWORKERS_01"):
			return "A_M_M_NBXDOCKWORKERS_01";
		case joaat("U_M_M_VALSHERIFF_01"):
			return "U_M_M_VALSHERIFF_01";
		case joaat("S_M_M_BANKCLERK_01"):
			return "S_M_M_BANKCLERK_01";
		case joaat("U_M_M_NBXBRONTEASC_01"):
			return "U_M_M_NBXBRONTEASC_01";
		case joaat("P_C_HORSE_01"):
			return "P_C_HORSE_01";
	}
	return "";
}

bool func_454(int iParam0)
{
	return iParam0 != 0;
}

bool func_455(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_456(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_455(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_686(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_457(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_451(iParam0))
	{
		return;
	}
	iVar0 = func_684(iParam0);
	func_687(iVar0, bParam1);
}

void func_458(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_451(iParam0))
	{
		return;
	}
	iVar0 = func_684(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_459(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_451(iParam0))
	{
		return;
	}
	iVar0 = func_684(iParam0);
	if (bParam1)
	{
		func_688(iParam0, 4);
		func_687(iVar0, 1);
		func_689(iVar0, 1);
	}
	else
	{
		func_690(iParam0, 4);
		func_689(iVar0, 0);
	}
}

float func_460(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_451(iParam0))
	{
		return 0f;
	}
	iVar0 = func_684(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_461(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_451(iParam0))
	{
		return false;
	}
	iVar0 = func_684(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_462(var uParam0)
{
	struct<8> Var0;
	struct<8> Var8;

	Var0 = { func_213(uParam0) };
	Var8 = { func_193(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_463(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_691(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_464(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_213(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_444, sParam1);
	}
}

void func_465(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (iParam3 == 1)
	{
		if (ANIMSCENE::_0x9D1ECA9337BE9FC3(uParam0->f_444, sParam1))
		{
			iParam3 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_444, sParam1, iParam2, iParam3);
}

void func_466(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

void func_467(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

bool func_468(int iParam0)
{
	if (-1829635046 == func_692(81053684))
	{
		if (func_693(iParam0))
		{
			return true;
		}
	}
	else if (func_694(-525676072, iParam0))
	{
		if (func_693(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_469(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_470(int iParam0)
{
	struct<2> Var0;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_471(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false))
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, false), 0);
	}
	else
	{
		ENTITY::SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_472(int iParam0)
{
	int iVar0;

	if (func_271() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_RESTORE_PED_STAMINA(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_CHARGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_473(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_487(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3);
				if (iVar0 > WEAPON::GET_WEAPON_CLIP_SIZE(iVar3))
				{
					iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && PLAYER::_0x21091B4BEB6376EE(PLAYER::GET_PLAYER_INDEX()) == 0)
	{
		func_695(1);
	}
}

void func_474()
{
	int iVar0;

	iVar0 = func_486(Global_35, 9, 1, 0);
	if (func_487(iVar0))
	{
		return;
	}
	iVar0 = func_486(Global_35, 7, 1, 0);
	if (func_487(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_486(Global_35, 0, 1, 0);
	if (func_487(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_486(Global_35, 1, 1, 0);
	if (func_487(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_486(Global_35, 18, 1, 0);
	if (func_487(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_696();
	if (func_487(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_697(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_698(6291456, 0);
	if (func_487(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_697(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_475()
{
	return Global_1900383.f_393;
}

int func_476(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_448(*uParam0, 0f, 0f, 0f))
	{
		return 1;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_477(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_478(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_479(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_480()
{
	return Global_1899515;
}

void func_481(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_482()
{
	return (func_699() || func_700());
}

Vector3 func_483(var uParam0)
{
	return uParam0->f_505;
}

float func_484(var uParam0)
{
	return uParam0->f_508;
}

float func_485(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_486(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_487(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_488(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_489(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_490(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_495(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_701(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_491(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

bool func_492(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_493(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_494(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_492(1108822547, 6))
	{
		if (bParam2)
		{
			func_490(iParam0, iVar0, func_271() != -1, 0, 0);
			func_496(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_497(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_495(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_496(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_504(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_498(var uParam0)
{
	struct<8> Var0;

	uParam0->f_454 = { Var0 };
}

void func_499(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_462[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_500(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_501()
{
	Global_1911774 = 1;
}

struct<5> func_502(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_702(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_703(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_511(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_704(bParam1) };
			if (bParam2 && func_705(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_706(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_706(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_707(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_708(bParam1) };
			switch (func_470(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (func_709(iParam0, -1823706425))
			{
				Var0 = { func_511(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_709(iParam0, -1483207246))
			{
				Var0 = { func_511(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_710(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_503(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_495(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_505(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_711();
	if (iParam2 == 39)
	{
		Var0 = { func_502(iParam0, 1, 0) };
		iParam2 = func_504(func_503(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_712(iParam0, 866047851) && func_713(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_491(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_714(func_495(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_715(iParam2);
	func_716(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_717(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_717(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_718(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_719(iParam0, iParam2, iParam1, func_271() != -1);
	if (bParam4)
	{
		func_720(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_720(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_497(func_495(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_506(bool bParam0, bool bParam1, bool bParam2)
{
	func_721(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_507(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_489(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_722(Var0);
}

void func_508()
{
	func_723(&(Global_1946804.f_2776));
	func_724(32768);
	func_497(1108822547, 8, 6);
}

int func_509(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_504(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || Global_1946804.f_1378.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_510(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_445(Var0);
}

struct<4> func_511(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_469(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_513(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_512(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_511(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_513(bParam6), &Var0, 0);
	return uVar4;
}

int func_513(bool bParam0)
{
	if (func_271() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_514(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_515(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_514(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

void func_516(int iParam0)
{
	int iVar0;

	if (func_271() != -1)
	{
		return;
	}
	if (!func_725(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

int func_517(int iParam0)
{
	if (func_451(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		func_452(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_518(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_190(iParam0))
	{
		return;
	}
	if (func_404(iParam0))
	{
		func_520(iParam0, 0, 2);
	}
	iVar0 = func_32(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

bool func_519(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

void func_520(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_190(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_351(iParam0) && !func_404(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_726(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_351(iParam0))
	{
		iParam2 = -1;
	}
	if (func_669(iParam0) == 3 || (func_669(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_726(iParam0))))
	{
		func_727(func_191(iParam0), func_726(iParam0), iParam2);
		if ((!func_190(Global_1572864.f_8) && !func_74(0, 1, 0)) && !func_45(Global_1935630, 32768))
		{
			iVar0 = func_728(iParam0);
			if (iVar0 != -1)
			{
				func_729(0);
			}
			else if (func_191(iParam0) == 8)
			{
				iVar0 = func_730();
				if (iVar0 != -1)
				{
					func_729(0);
				}
			}
		}
	}
	func_731(iParam0, 0);
	if (func_405(0) == iParam0)
	{
		func_119(1);
		func_732(0);
		func_733(1);
	}
	func_734(iParam0, 1);
	func_735(iParam0);
}

bool func_521(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

bool func_522(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_523(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_736(*uParam0, -1);
		func_737(*uParam0, 0);
		func_738(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

void func_524(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

void func_525(var uParam0)
{
	if (func_451(uParam0->f_3))
	{
		func_452(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

var func_526(int iParam0)
{
	return Global_1392915[iParam0 /*12*/];
}

bool func_527(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_462[iVar0 /*9*/]), sParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_528(var uParam0, char* sParam1)
{
	struct<8> Var0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_193(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

bool func_529(int iParam0)
{
	return iParam0 > -1;
}

int func_530(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_531(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	func_530(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_532(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_298(iParam0);
	if (!func_126(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_533(int iParam0, int iParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_534(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_739(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_404(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_351(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_739(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_740(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_741(iParam0, 0))
					{
						func_278(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_742(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				func_531(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_111(func_298(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_111(func_586(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_535(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_531(iParam0, 50, 1);
		func_531(iParam0, 48, 1);
		func_531(iParam0, 49, 1);
		func_531(iParam0, 51, 1);
		func_531(iParam0, 52, 1);
		func_531(iParam0, 54, 1);
		func_531(iParam0, 55, 1);
	}
	else
	{
		func_278(iParam0, 50, 1);
		func_278(iParam0, 48, 1);
		func_278(iParam0, 49, 1);
		func_278(iParam0, 51, 1);
		if (bParam3)
		{
			func_278(iParam0, 54, 1);
		}
		else
		{
			func_531(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_278(iParam0, 52, 1);
			if (bParam3)
			{
				func_278(iParam0, 55, 1);
			}
		}
		else
		{
			func_531(iParam0, 52, 1);
			if (!bParam3)
			{
				func_531(iParam0, 55, 1);
			}
		}
	}
}

bool func_536(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_126(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_743(iParam0, iParam1);
	return bVar0;
}

void func_537(int iParam0, int iParam1, bool bParam2)
{
	if (!func_126(iParam0))
	{
		return;
	}
	if (!func_536(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_278(iParam0, 25, 1);
	}
}

void func_538(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_744(iParam2))
		{
			iVar0 = func_745(iParam2, -1);
			if (func_292(iParam1, iVar0))
			{
				if (func_746(iParam1, iVar0))
				{
					if (func_747(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_748(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_294(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_0xE3144B932DFDFF65(iParam1, 0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_278(iParam0, 66, 0);
		}
	}
}

void func_539(int iParam0)
{
	func_288(iParam0);
	func_289(iParam0, 0);
}

void func_540(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
			}
		}
	}
}

void func_541(int iParam0, int iParam1, bool bParam2)
{
	if (!func_529(iParam0))
	{
		return;
	}
	func_749(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_542(int iParam0)
{
	func_278(iParam0, 36, 1);
}

bool func_543(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_544(int iParam0, int iParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_697(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_697(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_545(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_126(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_546(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_662(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = func_750(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_751(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			func_752(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_753(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_467(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_500(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_547(int iParam0, int iParam1, char* sParam2)
{
	func_754(&(iParam0->f_958), iParam1, sParam2, 0);
}

void func_548(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam0);
	func_755(iVar0);
	func_278(iParam0, 60, 1);
	if (bParam1)
	{
		func_756(iParam0);
	}
}

void func_549(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam0);
	func_757(iVar0);
	func_531(iParam0, 60, 1);
	if (bParam1)
	{
		func_758(iParam0);
	}
}

void func_550(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam0);
	func_759(iVar0);
	if (iParam0 == 14)
	{
		func_760(iVar0);
	}
	func_278(iParam0, 61, 1);
	if (bParam1)
	{
		func_761(iParam0);
	}
}

void func_551(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = func_298(iParam0);
	func_762(iVar0);
	func_531(iParam0, 61, 1);
	if (bParam1)
	{
		func_763(iParam0);
	}
}

void func_552(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_764(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_765(1, bVar1, 1, sVar2);
		func_766(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_767(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_768();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_767(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_767(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_553(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_554(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_555(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_556()
{
	return "default_leadin_camera";
}

void func_557()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("BANDANA"));
	STREAMING::REMOVE_ANIM_DICT(func_592(1));
}

void func_558(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_559(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_560(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_412(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_561(var uParam0)
{
	if (func_673(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_3, 1))
	{
		func_414(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_674(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_674(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_562(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_416(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_563(var uParam0)
{
	vector3 vVar0;
	var uVar3;

	if (func_673(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &vVar0, &uVar3, 2);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

bool func_564(var uParam0)
{
	if (func_673(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_2, 1))
	{
		func_421(uParam0);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_674(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_565(var uParam0, int iParam1)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
	{
		return false;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_423(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, *uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_566(var uParam0)
{
	if (func_673(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_2, 1))
	{
		func_425(uParam0);
	}
	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_674(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_567(var uParam0)
{
	if (func_673(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_3, 1))
	{
		func_427(uParam0);
	}
	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_674(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_568(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_429(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_569(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_431(uParam0);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_570(var uParam0)
{
	if (func_673(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_2, 1))
	{
		func_433(uParam0);
	}
	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_674(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_571(var uParam0)
{
	if (func_673(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_673(uParam0->f_1, 1))
	{
		func_435(uParam0);
	}
	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_674(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_572(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

struct<4> func_573(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = { func_769(iParam0, iParam1) };
	Var0.f_3 = func_770(iParam0, iParam1);
	return Var0;
}

void func_574(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_771(iParam1))
		{
			func_772(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_773(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_774(iParam0, 0);
			bVar0 = true;
		}
		func_775(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

char* func_575()
{
	return "cutDeleteMe";
}

Vector3 func_576(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_577(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_578(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!func_488(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_776(uParam0, iParam1);
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, iParam1);
		}
	}
}

void func_579(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_777(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_541(iParam0, 1, 0);
		}
	}
	func_541(iParam0, 16, bParam1);
}

void func_580(int iParam0)
{
	func_541(iParam0, 8, 0);
}

int func_581(int iParam0, bool bParam1)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_778(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_582(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_126(iParam0))
	{
		iVar1 = func_298(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_779(iParam0);
		}
	}
	if (func_277(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_298(iParam0), 137, true);
	}
}

void func_583(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_298(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_298(iParam0), 204, false);
	}
}

void func_584(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_126(iParam0))
	{
		return;
	}
	if (func_127(iParam0))
	{
		if (!func_128(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_277(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_581(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_298(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_780(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_278(iParam0, 2, 1);
	}
	else
	{
		func_781(iParam0);
		func_278(iParam0, 1, 1);
	}
}

void func_585(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_126(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_586(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_587(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_529(iParam1))
	{
		return;
	}
	iVar0 = func_586(iParam1);
	if (func_782(iParam1))
	{
		if (!func_783(iParam1))
		{
			return;
		}
	}
	func_531(iParam1, 39, 1);
	func_784(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_784(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_784(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_278(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_785(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_588(int iParam0, int iParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 - (Global_1900383[iParam0 /*45*/].f_24 && iParam1));
}

void func_589()
{
	if (func_382(0))
	{
		func_786(0);
	}
	if (func_382(1))
	{
		func_786(1);
	}
	if (func_382(5))
	{
		func_786(5);
	}
	if (func_382(6))
	{
		func_787(6);
	}
}

int func_590(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_669(iParam0);
}

int func_591(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

char* func_592(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mech_inventory@clothing@bandana";
		case 1:
			return "mech_inventory@clothing@mask";
		case 2:
			return "mech_inventory@clothing@mask";
		case 3:
			return "mech_inventory@clothing@mask";
		case 4:
			return "mech_inventory@clothing@mask";
		case 5:
			return "mech_inventory@clothing@mask";
	}
	return "";
}

void func_593(var uParam0, bool bParam1, bool bParam2)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		if (!bParam1)
		{
			func_788(uParam0);
		}
		else if (bParam2)
		{
			func_789(uParam0);
		}
		else
		{
			func_790(uParam0, uParam0->f_1898);
		}
	}
	else
	{
		if (!func_63(uParam0, 1048576) && bParam1)
		{
			func_790(uParam0, uParam0->f_1898);
		}
		else if (!func_63(uParam0, 2097152) && bParam2)
		{
			func_789(uParam0);
		}
		else if ((func_63(uParam0, 1048576) && !bParam1) || (func_63(uParam0, 2097152) && !bParam2))
		{
			func_788(uParam0);
		}
		if (bParam1)
		{
			vVar0 = { uParam0->f_1882 * FtoV(func_791(uParam0->f_1898)) };
			if (!func_610(vVar0, VOLUME::_GET_VOLUME_SCALE(uParam0->f_1875), 1056964608 /* Float: 0.5f */, 1) && !func_90(vVar0))
			{
				VOLUME::_SET_VOLUME_SCALE(uParam0->f_1875, vVar0);
			}
		}
	}
}

void func_594(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_1688 < 0)
	{
		return;
	}
	if ((uParam0->f_1899 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901)) && VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_1901))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(uParam0->f_1901, iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || func_207(iVar2, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) < func_207(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1))
				{
					iVar1 = iVar2;
				}
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_63(uParam0, 8192))
		{
			if (func_207(iVar1, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) <= (uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 + 5f) || VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1879))
			{
				if (VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 5f)
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 5f);
				}
			}
			else if ((!func_792(512) || func_793(2)) && VEHICLE::_0xC6D7DDC843176701(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
	}
}

void func_595(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_1633[iVar2 /*15*/].f_11 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1633[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1898) && !uParam0->f_1633[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_1898, 1);
				uParam0->f_1633[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_1687 != 0 || func_63(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_1687 = 0;
					func_337(uParam0, 33554432);
				}
				bVar3 = func_577(uParam0->f_1633[iVar2 /*15*/].f_10, 131072);
				if (func_794(Global_35, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_1688 >= 0)
					{
						func_361(uParam0, uParam0->f_1633[iVar2 /*15*/].f_10, uParam0->f_1345[uParam0->f_1688 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						func_795();
					}
					func_796(uParam0, iVar2, iVar0, bVar3);
				}
				else if (func_797(&(uParam0->f_1633[iVar2 /*15*/])) != 0)
				{
					func_796(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (func_577(uParam0->f_1633[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_1688 >= 0)
				{
					if (((func_207(Global_35, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1) > uParam0->f_1016[uParam0->f_1688 /*41*/].f_17 && func_794(uParam0->f_1898, uParam0->f_1633[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_1687 != 0) || func_63(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (func_386(Global_35, &(uParam0->f_1687), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_1687 = 0;
							func_337(uParam0, 33554432);
						}
						else
						{
							func_364(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_596(var uParam0)
{
	if (uParam0->f_1688 < 0)
	{
		return false;
	}
	if (func_63(uParam0, 33554432))
	{
		return false;
	}
	if (func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && uParam0->f_1897)
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875) && VOLUME::IS_POINT_IN_VOLUME(uParam0->f_1875, uParam0->f_1876))
	{
		return true;
	}
	if (func_63(uParam0, 65536))
	{
		return true;
	}
	return false;
}

float func_597(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;

	fVar16 = 10000f;
	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			if (func_798(&vVar3, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1 /*41*/].f_1.f_2 + uParam0->f_1016[iParam1 /*41*/].f_10))
			{
				func_799(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true) - uParam0->f_1016[iParam1 /*41*/].f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

void func_598(var uParam0)
{
	int iVar0;

	func_800(uParam0);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && func_801(uParam0, iVar0)) && !func_554(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				if (!func_802(uParam0, &(uParam0->f_1016[iVar0 /*41*/].f_22)))
				{
					func_803(&(uParam0->f_1771), uParam0->f_1016[iVar0 /*41*/].f_22, 0, -1, 1, 0);
				}
				func_804(&(uParam0->f_1016[iVar0 /*41*/]), 1);
			}
		}
		iVar0++;
	}
}

void func_599(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

void func_600(int iParam0, var uParam1)
{
	*iParam0 = 0;
	if (!func_606(uParam1, 8))
	{
		if (func_606(uParam1, 1))
		{
			*iParam0 = 1;
		}
		else if (func_606(uParam1, 4))
		{
			*iParam0 = 4;
		}
		else if (func_606(uParam1, 2))
		{
			*iParam0 = 2;
		}
	}
}

void func_601(char* sParam0, int iParam1, int iParam2, float fParam3)
{
	func_607(sParam0, iParam2);
	func_805(iParam1, fParam3);
}

void func_602()
{
	if (MISC::IS_BIT_SET(Global_1357510, 4))
	{
	}
	else
	{
		MISC::SET_BIT(&Global_1357510, 0);
	}
}

void func_603(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 || iParam1);
}

char* func_604(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_605()
{
	return "CAMERA_LEADIN_ACTIVE_CONVERSATION_REQUEST";
}

bool func_606(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_607(char* sParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		if (!sParam0->f_16)
		{
			StringCopy(sParam0, "default_leadin_camera", 64);
			if (func_806(iParam1, 1))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_RIGHT_REQUEST", 64);
			}
			else if (func_806(iParam1, 2))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_LEFT_REQUEST", 64);
			}
			else if (func_806(iParam1, 4))
			{
				StringCopy(&(sParam0->f_8), "LEADIN_TREATMENT_CENTER_REQUEST", 64);
			}
			CAM::_0x6A4D224FC7643941(sParam0);
			sParam0->f_16 = 1;
		}
		else if (CAM::_0xDD0B7C5AE58F721D(sParam0) && !CAM::_0x927B810E43E99932(sParam0))
		{
			CAM::_0xB8B207C34285E978(sParam0);
		}
	}
}

float func_608(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_485(vVar0, vVar3, iParam2);
}

void func_609(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_610(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_611(var uParam0, int iParam1)
{
	uParam0->f_1665 = (uParam0->f_1665 - (uParam0->f_1665 && iParam1));
}

bool func_612(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (func_63(uParam0, 4))
	{
		return false;
	}
	vVar0 = { 0f, 0f, 0f };
	if (uParam0->f_1688 < 0 || uParam0->f_1688 >= 8)
	{
		return false;
	}
	if (!uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		return false;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (uParam0->f_1016[uParam0->f_1688 /*41*/].f_29)
	{
		if (uParam0->f_1016[uParam0->f_1688 /*41*/] == 0)
		{
			vVar3 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_4 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 };
			vVar6 = { 0f, 0f, 0f };
			vVar6.x = vVar3.y;
			vVar6.f_1 = (vVar3.x * -1f);
			if (func_798(&vVar0, uParam0->f_1765, Global_36, vVar6, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1))
			{
				iVar9 = 1;
				if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1)
				{
					if (vVar0.x > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
					{
						iVar9 = 0;
					}
				}
				else if (vVar0.x < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4)
				{
					iVar9 = 0;
				}
				if (iVar9 == 1)
				{
					if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_1)
					{
						if (vVar0.y > uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
						{
							iVar9 = 0;
						}
					}
					else if (vVar0.y < uParam0->f_1016[uParam0->f_1688 /*41*/].f_4.f_1)
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					if ((vVar0.z < (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 - 0.1f) || vVar0.z > (uParam0->f_1016[uParam0->f_1688 /*41*/].f_1.f_2 + uParam0->f_1016[uParam0->f_1688 /*41*/].f_10)) || (func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2) && (uParam0->f_1897 || uParam0->f_1899)))
					{
						iVar9 = 0;
					}
				}
				if (iVar9 == 1)
				{
					*iParam1 = uParam0->f_1688;
					return true;
				}
			}
		}
		else if (func_63(uParam0, 8))
		{
			*iParam1 = uParam0->f_1684;
			return true;
		}
	}
	return false;
}

void func_613(var uParam0, int iParam1)
{
	if (iParam1 >= 0)
	{
		uParam0->f_1016[iParam1 /*41*/].f_28 = 1;
		uParam0->f_1684 = iParam1;
		uParam0->f_1688 = iParam1;
		Global_43805 = iParam1;
		uParam0->f_1769 = 1;
	}
}

void func_614(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;

	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 35)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((func_629(&(uParam0->f_475[iParam1 /*18*/]), 4) && uParam0->f_475[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_475[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (func_629(&(uParam0->f_475[iParam1 /*18*/]), 64) && func_807(uParam0, iParam1, 0))
				{
					func_808(uParam0, uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_475[iParam1 /*18*/].f_3 >= 0 && uParam0->f_475[iParam1 /*18*/].f_5 >= 0) && uParam0->f_475[iParam1 /*18*/].f_3 != uParam0->f_475[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						func_809(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
					if ((func_629(&(uParam0->f_475[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						func_809(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_475[iParam1 /*18*/].f_13, uParam0->f_475[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_617(uParam0, iParam1, 0, 0);
			break;
	}
}

int func_615(var uParam0, int iParam1)
{
	if (uParam0->f_475[iParam1 /*18*/].f_1 > uParam0->f_1683)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_475[iParam1 /*18*/].f_3 /*13*/].f_2))
	{
	}
	if (uParam0->f_1683 < 0 || uParam0->f_1683 > 6)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_1 == 0)
	{
		return 1;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && func_8(uParam0) == 9)
	{
		return 1;
	}
	if (!func_63(uParam0, 4096) && uParam0->f_1896)
	{
		return 0;
	}
	if (Global_1430231.f_4)
	{
		return 0;
	}
	if (uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if (func_8(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/] != uParam0->f_1684)
	{
		return 0;
	}
	if ((((func_8(uParam0) > 3 && uParam0->f_475[iParam1 /*18*/].f_17 == 1) && func_360(uParam0) != 11) && func_359(uParam0, uParam0->f_1684)) && uParam0->f_475[iParam1 /*18*/].f_2 != 4)
	{
		return 0;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_2 == 9 && uParam0->f_475[iParam1 /*18*/].f_4 >= 0) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, true, false))
		{
			return 0;
		}
		else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/].f_8, func_225(Global_35)))
		{
			if (func_388(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 4))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 1))
				{
					return 0;
				}
			}
			else if (func_388(&(uParam0->f_1522[uParam0->f_475[iParam1 /*18*/].f_4 /*10*/]), 8))
			{
				if (!PED::_0xA218D2BBCAA7388C(Global_35, 0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_616(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_475[iParam1 /*18*/].f_2)
	{
		case 9:
			func_810(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_617(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (func_48(&(uParam0->f_1872)) >= IntToFloat((uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					func_800(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22)))
					{
						func_803(&(uParam0->f_1771), uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_475[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1685 = iParam1;
			break;
	}
}

int func_617(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;

	iVar2 = uParam0->f_1688;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_475[iParam1 /*18*/];
		fVar3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
		fVar4 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_7.f_1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (func_360(uParam0))
	{
		case 0:
			if (!bParam3)
			{
				if (!func_811(uParam0, iVar2))
				{
					uParam0->f_1685 = iParam1;
				}
				uParam0->f_475[iParam1 /*18*/].f_7 = 1;
			}
			if (((!func_339(&(uParam0->f_1016[iVar2 /*41*/]), 32) && func_812()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459))) || (!func_339(&(uParam0->f_1016[iVar2 /*41*/]), 128) && uParam0->f_1899))
			{
				if (uParam0->f_1899)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1901, 0.1f, -1, false);
					if (!func_63(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1901, 24, 1000);
					func_626(uParam0, 8);
				}
				else
				{
					func_364(uParam0, 131072);
					func_626(uParam0, 11);
				}
			}
			else if (uParam0->f_1897)
			{
				func_626(uParam0, 5);
			}
			else
			{
				func_813(uParam0);
			}
			break;
		case 1:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3f;
			if ((((!func_283(Global_35, 716706914) && !func_283(Global_35, 242628503)) && func_21(&(uParam0->f_1869)) >= 2.5f) || (!func_487(func_486(Global_35, 0, 1, 0)) && !func_487(func_486(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_813(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = func_21(&(uParam0->f_1869)) >= 3.5f;
			iVar1 = 5664;
			if (func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!func_359(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_386(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				func_813(uParam0);
			}
			if ((!uParam0->f_1897 && !uParam0->f_1899) || bVar0)
			{
				uParam0->f_1686 = 0;
				if (func_360(uParam0) == 5 || iParam1 < 0)
				{
					func_813(uParam0);
				}
				else
				{
					func_814(uParam0, iParam1, bParam2);
					func_26(&(uParam0->f_1869));
					func_626(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = func_21(&(uParam0->f_1869)) >= 1f;
			if (func_815(Global_35, 242628503) || bVar0)
			{
				func_626(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!func_339(&(uParam0->f_1016[iVar2 /*41*/]), 256))
			{
				if (func_468(&(uParam0->f_1903)))
				{
					func_816(uParam0->f_1903, 0);
				}
			}
			func_26(&(uParam0->f_1869));
			func_626(uParam0, 4);
			break;
		case 4:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if ((func_339(&(uParam0->f_1016[iVar2 /*41*/]), 256) || !func_468(&uVar5)) || bVar0)
			{
				if (func_817())
				{
					func_818();
					func_626(uParam0, 10);
				}
				else
				{
					func_626(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			if (func_817() || bVar0)
			{
				func_626(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = func_21(&(uParam0->f_1869)) >= 2f;
			iVar1 = 5664;
			if (func_339(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!func_359(uParam0, uParam0->f_1688))
			{
				iVar1 |= 2048;
			}
			if (func_386(Global_35, &(uParam0->f_1686), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1686 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1901, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_626(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (func_21(&(uParam0->f_1869)) >= 0.75f)
			{
				if (!func_63(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1901);
				func_364(uParam0, 131072);
				func_626(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_618(char* sParam0)
{
	if (sParam0->f_16)
	{
		CAM::_0x0A5A4F1979ABB40E(sParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && CAM::_0xDD0B7C5AE58F721D(sParam0))
		{
			CAM::_0x798BE43C9393632B(sParam0);
		}
		sParam0->f_16 = 0;
		StringCopy(sParam0, "", 64);
		StringCopy(&(sParam0->f_8), "", 64);
	}
}

void func_619(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 - (uParam0->f_1666.f_1 && iParam1));
}

bool func_620(var uParam0, char* sParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	struct<13> Var2;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	struct<8> Var20;
	int iVar28;
	vector3 vVar29;
	int iVar32;
	int iVar33;

	bVar0 = DATAFILE::PARSEDDATA_IS_FILE_VALID(uParam0->f_1889);
	if (!bVar0)
	{
		uParam0->f_1889 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(sParam1));
	}
	bVar1 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam0->f_1889);
	if (!bVar1)
	{
		return false;
	}
	func_819(uParam0);
	func_559(uParam0, iParam2);
	if (func_63(uParam0, 16384))
	{
		func_820(uParam0);
	}
	Var2.f_10 = joaat("WEAPON_UNARMED");
	iVar18 = 0;
	while (iVar18 < 8)
	{
		iVar16 = -1;
		func_821(uParam0, iVar18);
		if (func_822(uParam0, 0))
		{
			if (func_823(uParam0, 43, &iVar16))
			{
				if (iVar16 >= 0)
				{
					uParam0->f_1016[iVar16 /*41*/].f_27 = 0;
					func_824(uParam0, 1, &(uParam0->f_1016[iVar16 /*41*/].f_1));
					func_824(uParam0, 2, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_1));
					func_824(uParam0, 3, &(uParam0->f_1016[iVar16 /*41*/].f_1.f_2));
					func_824(uParam0, 4, &(uParam0->f_1016[iVar16 /*41*/].f_11));
					func_824(uParam0, 5, &(uParam0->f_1016[iVar16 /*41*/].f_12));
					func_824(uParam0, 6, &(uParam0->f_1016[iVar16 /*41*/].f_13));
					func_824(uParam0, 7, &(uParam0->f_1016[iVar16 /*41*/].f_4));
					func_824(uParam0, 8, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_1));
					func_824(uParam0, 9, &(uParam0->f_1016[iVar16 /*41*/].f_4.f_2));
					func_824(uParam0, 10, &(uParam0->f_1016[iVar16 /*41*/].f_7));
					func_824(uParam0, 11, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_1));
					func_824(uParam0, 12, &(uParam0->f_1016[iVar16 /*41*/].f_7.f_2));
					func_824(uParam0, 13, &(uParam0->f_1016[iVar16 /*41*/].f_10));
					func_824(uParam0, 14, &(uParam0->f_1016[iVar16 /*41*/].f_14));
					func_824(uParam0, 15, &(uParam0->f_1016[iVar16 /*41*/].f_15));
					if (func_823(uParam0, 16, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/] = iVar17;
					}
					func_824(uParam0, 19, &(uParam0->f_1016[iVar16 /*41*/].f_16));
					func_824(uParam0, 20, &(uParam0->f_1016[iVar16 /*41*/].f_17));
					func_824(uParam0, 31, &(uParam0->f_1016[iVar16 /*41*/].f_18));
					if (func_825(uParam0, 21, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_19), {Var20}, 3);
					}
					if (func_825(uParam0, 22, &Var20))
					{
						MemCopy(&(uParam0->f_1016[iVar16 /*41*/].f_22), {Var20}, 3);
					}
					func_823(uParam0, 23, &(uParam0->f_1016[iVar16 /*41*/].f_25));
					func_826(uParam0, &(uParam0->f_1016[iVar16 /*41*/].f_27));
					if (func_825(uParam0, 35, &(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
					}
					if (func_823(uParam0, 39, &iVar17))
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = iVar17;
					}
					else
					{
						uParam0->f_1016[iVar16 /*41*/].f_39 = 1;
					}
					if (func_824(uParam0, 40, &(uParam0->f_1016[iVar16 /*41*/].f_40)))
					{
						func_804(&(uParam0->f_1016[iVar16 /*41*/]), 2);
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar16 /*41*/].f_30)))
					{
						uParam0->f_1016[iVar16 /*41*/].f_30 = { func_447() };
					}
					uParam0->f_1016[iVar16 /*41*/].f_29 = 1;
					if (uParam0->f_1895 == -1 || uParam0->f_1016[uParam0->f_1895 /*41*/].f_17 < uParam0->f_1016[iVar16 /*41*/].f_17)
					{
						uParam0->f_1895 = iVar16;
					}
				}
			}
		}
		iVar18++;
	}
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			vVar29 = { vVar29 + uParam0->f_1016[iVar18 /*41*/].f_1 };
			iVar28++;
		}
		iVar18++;
	}
	vVar29 = { vVar29 / FtoV(BUILTIN::TO_FLOAT(iVar28)) };
	uParam0->f_1900 = 1;
	iVar18 = 0;
	while (iVar18 < 8)
	{
		if (uParam0->f_1016[iVar18 /*41*/].f_29)
		{
			if (!func_827(vVar29, uParam0->f_1016[iVar18 /*41*/].f_1, 5f, 1))
			{
				uParam0->f_1900 = 0;
			}
			else
			{
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 11)
			{
				iVar16 = -1;
				func_821(uParam0, iVar18);
				if (func_822(uParam0, 45))
				{
					if (func_823(uParam0, 47, &iVar16))
					{
						if (iVar16 >= 0)
						{
							func_828(&(uParam0->f_1522[iVar16 /*10*/]), 2);
							func_825(uParam0, 46, &(uParam0->f_1522[iVar16 /*10*/]));
							if (func_829(uParam0, 48, &bVar19))
							{
								if (bVar19)
								{
									func_828(&(uParam0->f_1522[iVar16 /*10*/]), 1);
								}
							}
							if (func_823(uParam0, 49, &iVar17))
							{
								if (iVar17 == 1)
								{
									func_828(&(uParam0->f_1522[iVar16 /*10*/]), 8);
								}
								else if (iVar17 == 2)
								{
									func_828(&(uParam0->f_1522[iVar16 /*10*/]), 4);
								}
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 35)
			{
				iVar16 = -1;
				func_821(uParam0, iVar18);
				if (func_822(uParam0, 50))
				{
					if (func_823(uParam0, 51, &iVar17))
					{
						Var2.f_1 = iVar17;
					}
					func_823(uParam0, 43, &(Var2.f_3));
					if (func_825(uParam0, 52, &Var20))
					{
						MemCopy(&(Var2.f_4), {Var20}, 4);
					}
					func_824(uParam0, 53, &(Var2.f_8));
					if (func_823(uParam0, 54, &iVar17))
					{
						Var2.f_10 = iVar17;
					}
					func_829(uParam0, 55, &(Var2.f_11));
					func_829(uParam0, 56, &(Var2.f_12));
					iVar32 = -1;
					if (func_830(uParam0, Var2.f_1, &iVar32))
					{
						if (iVar32 >= 0 && iVar32 < 35)
						{
							uParam0->f_3[iVar32 /*13*/].f_3 = Var2.f_3;
							uParam0->f_3[iVar32 /*13*/].f_4 = { Var2.f_4 };
							uParam0->f_3[iVar32 /*13*/].f_8 = Var2.f_8;
							uParam0->f_3[iVar32 /*13*/].f_10 = Var2.f_10;
							uParam0->f_3[iVar32 /*13*/].f_11 = Var2.f_11;
							uParam0->f_3[iVar32 /*13*/].f_12 = Var2.f_12;
							uParam0->f_3[iVar32 /*13*/] = 1;
							if (func_831(Var2.f_1))
							{
								func_364(uParam0, 16777216);
							}
						}
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			func_821(uParam0, iVar18);
			if (func_822(uParam0, 82))
			{
				if (func_825(uParam0, 83, &Var20))
				{
					MemCopy(&(uParam0->f_459), {Var20}, 4);
				}
				func_825(uParam0, 84, &(uParam0->f_459.f_4));
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_459.f_4)))
				{
					if (uParam0->f_459.f_15 == 1)
					{
						uParam0->f_459.f_4 = { func_440() };
					}
					else if (uParam0->f_459.f_15 == 2)
					{
						uParam0->f_459.f_4 = { func_447() };
					}
					else
					{
						uParam0->f_459.f_4 = { func_447() };
					}
				}
			}
			iVar33 = -1;
			iVar18 = 0;
			while (iVar18 < 30)
			{
				iVar16 = -1;
				func_821(uParam0, iVar18);
				if (func_822(uParam0, 57))
				{
					if (func_823(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_475[iVar16 /*18*/].f_8 = 0;
							func_823(uParam0, 58, &(uParam0->f_475[iVar16 /*18*/]));
							if (func_823(uParam0, 59, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_1 = func_832(iVar17);
							}
							if (func_823(uParam0, 60, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_2 = func_833(iVar17);
							}
							func_823(uParam0, 61, &(uParam0->f_475[iVar16 /*18*/].f_3));
							func_824(uParam0, 67, &(uParam0->f_475[iVar16 /*18*/].f_10));
							func_824(uParam0, 70, &(uParam0->f_475[iVar16 /*18*/].f_11));
							func_824(uParam0, 68, &(uParam0->f_475[iVar16 /*18*/].f_9));
							func_823(uParam0, 72, &(uParam0->f_475[iVar16 /*18*/].f_5));
							func_824(uParam0, 77, &(uParam0->f_475[iVar16 /*18*/].f_12));
							func_823(uParam0, 78, &(uParam0->f_475[iVar16 /*18*/].f_13));
							func_823(uParam0, 79, &(uParam0->f_475[iVar16 /*18*/].f_14));
							if (func_823(uParam0, 73, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_17 = iVar17;
							}
							if (func_823(uParam0, 75, &iVar17))
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = iVar17;
								bVar15 = true;
							}
							func_824(uParam0, 80, &(uParam0->f_475[iVar16 /*18*/].f_15));
							if (func_829(uParam0, 63, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 1;
								}
							}
							if (func_829(uParam0, 81, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 512;
								}
							}
							if (func_829(uParam0, 64, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 2;
								}
							}
							if (func_829(uParam0, 66, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 16;
								}
							}
							if (func_829(uParam0, 69, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 32;
								}
							}
							if (func_829(uParam0, 65, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 4;
								}
							}
							if (func_829(uParam0, 74, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 64;
								}
							}
							if (func_829(uParam0, 71, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 128;
								}
							}
							if (func_829(uParam0, 76, &bVar19))
							{
								if (bVar19)
								{
									uParam0->f_475[iVar16 /*18*/].f_8 |= 256;
								}
							}
							if (!bVar15 && uParam0->f_475[iVar16 /*18*/].f_2 == 9)
							{
								uParam0->f_475[iVar16 /*18*/].f_4 = uParam0->f_475[iVar16 /*18*/].f_3;
								uParam0->f_475[iVar16 /*18*/].f_3 = 0;
							}
							if (iVar33 == -1 || iVar16 > iVar33)
							{
								iVar33 = iVar16;
							}
							uParam0->f_475[iVar16 /*18*/].f_16 = uParam0->f_475[iVar16 /*18*/].f_2;
							uParam0->f_475[iVar16 /*18*/].f_6 = 1;
						}
					}
				}
				iVar18++;
			}
			if (iVar33 < 29)
			{
				uParam0->f_1894 = iVar33 + 1;
			}
			iVar18 = 0;
			while (iVar18 < 8)
			{
				iVar16 = -1;
				func_821(uParam0, iVar18);
				if (func_822(uParam0, 85))
				{
					func_823(uParam0, 86, &iVar16);
					if (iVar16 >= 0)
					{
						func_829(uParam0, 87, &(uParam0->f_1345[iVar18 /*22*/]));
						func_825(uParam0, 96, &(uParam0->f_1345[iVar18 /*22*/].f_2));
						func_825(uParam0, 97, &(uParam0->f_1345[iVar18 /*22*/].f_10));
						func_824(uParam0, 93, &(uParam0->f_1345[iVar18 /*22*/].f_18));
						func_824(uParam0, 94, &(uParam0->f_1345[iVar18 /*22*/].f_19));
						func_823(uParam0, 95, &(uParam0->f_1345[iVar18 /*22*/].f_20));
						uParam0->f_1345[iVar18 /*22*/].f_1 = 0;
						func_834(uParam0, &(uParam0->f_1345[iVar18 /*22*/].f_1));
					}
				}
				iVar18++;
			}
			iVar18 = 0;
			while (iVar18 < 2)
			{
				iVar16 = -1;
				func_821(uParam0, iVar18);
				if (func_822(uParam0, 98))
				{
					if (func_823(uParam0, 43, &iVar16))
					{
						if (iVar16 >= 0)
						{
							uParam0->f_1633[iVar16 /*15*/].f_10 = 0;
							func_835(uParam0, 99, &(uParam0->f_1633[iVar16 /*15*/]));
							func_835(uParam0, 100, &(uParam0->f_1633[iVar16 /*15*/].f_6));
							func_835(uParam0, 101, &(uParam0->f_1633[iVar16 /*15*/].f_3));
							if (func_823(uParam0, 102, &iVar17))
							{
								uParam0->f_1633[iVar16 /*15*/].f_9 = iVar17;
							}
							func_826(uParam0, &(uParam0->f_1633[iVar16 /*15*/].f_10));
							uParam0->f_1633[iVar16 /*15*/].f_11 = 1;
						}
					}
				}
				iVar18++;
			}
			DATAFILE::_DATAFILE_UNLOAD(uParam0->f_1889);
			func_364(uParam0, 1);
			func_364(uParam0, 16384);
			func_836(uParam0);
			return true;
		}
	}
}

bool func_621(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && func_388(&(uParam0->f_1522[iVar0 /*10*/]), 2)) && !func_388(&(uParam0->f_1522[iVar0 /*10*/]), 16)) && func_837(uParam0, iVar0))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				return false;
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				return false;
			}
			if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
			{
				func_828(&(uParam0->f_1522[iVar0 /*10*/]), 32);
			}
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
			func_828(&(uParam0->f_1522[iVar0 /*10*/]), 16);
		}
		iVar0++;
	}
	return true;
}

void func_622(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1522[iVar0 /*10*/])) && func_388(&(uParam0->f_1522[iVar0 /*10*/]), 2))
		{
			iVar1 = 0;
			if (func_837(uParam0, iVar0))
			{
				iVar1 |= 1;
			}
			uParam0->f_1522[iVar0 /*10*/].f_8 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_1522[iVar0 /*10*/]), iVar1, 0, false, true);
		}
		iVar0++;
	}
	StringCopy(&Var2, func_556(), 64);
	StringCopy(&(Var2.f_8), func_605(), 64);
	uParam0->f_1708 = { Var2 };
	uParam0->f_1731 = { Var2 };
	if (!func_338(uParam0, 8))
	{
		CAM::_0x6A4D224FC7643941(func_556());
		func_553(uParam0, 8);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_556()))
		{
			if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
			{
				CAM::_0x6A4D224FC7643941(&(uParam0->f_1345[iVar0 /*22*/].f_2));
				uParam0->f_1345[iVar0 /*22*/].f_21 = 1;
			}
		}
		iVar0++;
	}
}

bool func_623(var uParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;

	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
		{
			if (!func_388(&(uParam0->f_1522[iVar0 /*10*/]), 64))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, false))
				{
					func_838(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
					bVar1 = false;
					func_828(&(uParam0->f_1522[iVar0 /*10*/]), 64);
				}
				else
				{
					bVar1 = false;
				}
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_19)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_19), "empty"))
		{
			HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_1016[iVar0 /*41*/].f_19));
			if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_1016[iVar0 /*41*/].f_19)))
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (func_338(uParam0, 8) && !CAM::_0xDD0B7C5AE58F721D(func_556()))
	{
		bVar1 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && uParam0->f_1345[iVar0 /*22*/].f_21) && !CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!func_90(uParam0->f_1885) || uParam0->f_1888 != 0f)
		{
			bVar8 = true;
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
				{
					ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout");
				}
				if (bVar8)
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar2, &vVar5, 2);
					vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar2, uParam0->f_1888, uParam0->f_1885) };
					vVar5.f_2 = (vVar5.z - uParam0->f_1888);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar2, vVar5, 2);
				}
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_624(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if ((((!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !func_296(uParam0->f_3[iVar0 /*13*/].f_2)) && func_487(uParam0->f_3[iVar0 /*13*/].f_10)) && !func_831(uParam0->f_3[iVar0 /*13*/].f_1))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 0, false))
				{
					if (func_839(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 7, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(uParam0->f_3[iVar0 /*13*/].f_10))
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 9, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					else
					{
						uParam0->f_3[iVar0 /*13*/].f_10 = WEAPON::GIVE_WEAPON_TO_PED(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, 100, false, true, 2, true, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				if (uParam0->f_3[iVar0 /*13*/].f_11)
				{
					if (func_840(iVar1, 0, 0, 0) != uParam0->f_3[iVar0 /*13*/].f_10)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iVar1, uParam0->f_3[iVar0 /*13*/].f_10, true, 0, false, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_625(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_12)
		{
			func_841(&(uParam0->f_3[iVar0 /*13*/]));
		}
		iVar0++;
	}
}

void func_626(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	func_26(&(uParam0->f_1869));
}

void func_627(var uParam0)
{
	func_842(uParam0);
	func_843(uParam0);
}

int func_628(var uParam0)
{
	if (uParam0->f_1685 < 0 || uParam0->f_475[uParam0->f_1685 /*18*/].f_4 < 0)
	{
		return -1;
	}
	return uParam0->f_1522[uParam0->f_475[uParam0->f_1685 /*18*/].f_4 /*10*/].f_8;
}

bool func_629(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_630(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_631(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_632(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_633(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_634()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_635(int iParam0, bool bParam1)
{
	switch (func_590(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_636(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_647(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_637(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_382(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	func_844(iParam0);
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_0xAA9F048DCF69B6DC(iVar1))
	{
		if (!func_845(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_846(iParam0, 0);
	func_350(iParam0);
}

void func_638(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_847(&Var0);
	func_848(iParam0, Var0);
	func_849(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_850(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_851(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_852(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_853(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_854(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_855(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_856(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_857(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

int func_639(vector3 vParam0)
{
	return func_858(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_640(int iParam0)
{
	int iVar0;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_382(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0)
{
	int iVar0;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_382(iParam0))
	{
		return false;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_642(int iParam0)
{
	int iVar0;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_382(iParam0))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_643(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_787(iParam0);
	func_787(iParam0);
	func_859(iParam0, iParam1);
	func_860(iParam0, iParam1);
	func_861(iParam0, iParam1);
	iVar1 = func_80(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_862(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_80(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_862(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_589();
}

bool func_644()
{
	int iVar0;

	iVar0 = func_475();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_645()
{
	int iVar0;

	iVar0 = func_475();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_863(0);
}

int func_646(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

int func_647(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

void func_648(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_864(&uVar0, &uVar1, &uVar2);
	func_865(iParam0, uVar0);
	func_866(iParam0, uVar1);
	func_867(iParam0, uVar2);
	func_868(iParam0, 1);
	func_869(iParam0, 1);
}

void func_649(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_870(iParam0, 1);
}

void func_650(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 };
	Global_1900383[iParam0 /*45*/].f_22 = uParam4;
}

bool func_651(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_871(iParam0, 1);
}

struct<2> func_652(int iParam0)
{
	struct<2> Var0;
	var uVar2;
	var uVar3;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_872(iParam0, &uVar2))
	{
	}
	if (!func_873(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_653()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_874(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_874(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_874(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_874(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_874(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_874(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_654(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return;
	}
	func_875(iParam0);
	func_876(iParam0, uParam1);
	func_877(iParam0);
	func_878(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_879(iParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

void func_655(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_656(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_283(iParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_657(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_880(vVar0, vVar3, vParam1);
}

bool func_658(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_659(int iParam0, int iParam1)
{
	func_881(iParam0, iParam1);
}

bool func_660(int iParam0, int iParam1)
{
	float fVar0;

	if (!func_283(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (func_287(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_287(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_287(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_661(int iParam0, int iParam1)
{
	func_882(iParam0, iParam1);
}

char* func_662(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return func_225(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return func_883(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return func_884(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return "";
}

int func_663(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar1 /*13*/].f_2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam1) == ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar1 /*13*/].f_2))
				{
					iVar0++;
					if (iParam1 == uParam0->f_3[iVar1 /*13*/].f_2)
					{
						return iVar0;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_664(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_665(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_666(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

char* func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_668(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_885())
	{
		iVar2 = func_885();
	}
	iVar5 = func_886(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_436(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_436(iVar6) == 0)
			{
				return func_887(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_436(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_436(iVar6) == 0)
			{
				return func_887(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return func_887(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_669(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_888(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

void func_670(int iParam0, bool bParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	if (!func_403(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_726(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_726(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_191(iParam0), func_192(iParam0), func_889(iParam0), func_726(iParam0), Global_36);
		}
	}
	func_731(iParam0, 1);
	bParam1 = bParam1;
}

void func_671(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_436(Global_1898330[iParam0]);
		func_890(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

int func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

bool func_673(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_674(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_675(var uParam0)
{
	if (!func_673(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_674(&(uParam0->f_1), 1);
	}
}

void func_676(var uParam0)
{
	if (!func_673(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_674(uParam0, 1);
	}
}

bool func_677()
{
	if (func_271() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_678(int iParam0)
{
	return iParam0 != 0;
}

void func_679(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

void func_680(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_681(vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (!bParam8 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_90(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam6))
	{
		if (func_891(vParam0))
		{
			return 0;
		}
		iVar0 = VOLUME::_0x00BBF7CEAE8C666A(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam6, false, false) };
		iVar0 = VOLUME::_0xF383E96C4904DF0C(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		VOLUME::_0xB440F4E35393FC39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		VOLUME::_0xD460135C98940274(iVar0, bParam9);
	}
	func_892(iVar0, bParam8);
	return iVar0;
}

bool func_682(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_683(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

int func_684(int iParam0)
{
	return iParam0;
}

void func_685(int iParam0)
{
	if (!func_893(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945938[iParam0 /*18*/].f_3);
	}
	Global_1945938[iParam0 /*18*/].f_4 = 0;
	Global_1945938[iParam0 /*18*/] = 1;
	Global_1945938[iParam0 /*18*/].f_16 = 0;
	Global_1945938[iParam0 /*18*/].f_1 = 0;
	Global_1945938[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_9 = 0f;
	Global_1945938[iParam0 /*18*/].f_10 = 0;
	Global_1945938[iParam0 /*18*/].f_11 = 0;
	Global_1945938[iParam0 /*18*/].f_2 = 1;
	Global_1945938[iParam0 /*18*/].f_15 = -1f;
}

void func_686(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945938[iParam0 /*18*/].f_4 = iParam1;
	Global_1945938[iParam0 /*18*/] = iParam4;
	Global_1945938[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945938[iParam0 /*18*/].f_2 = iParam5;
	Global_1945938[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945938[iParam0 /*18*/].f_9 = fParam9;
	Global_1945938[iParam0 /*18*/].f_10 = iParam10;
	Global_1945938[iParam0 /*18*/].f_11 = iParam11;
	Global_1945938[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945938[iParam0 /*18*/].f_5 = iParam12;
	Global_1945938[iParam0 /*18*/].f_1 = 2;
	Global_1945938[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945938[iParam0 /*18*/].f_3 = iVar0;
	func_687(iParam0, 1);
	func_689(iParam0, 1);
	func_690(iParam0, 128);
}

void func_687(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_455(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_688(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_689(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_690(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

void func_691(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

int func_692(int iParam0)
{
	int iVar0;

	iVar0 = func_504(func_894(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_693(int iParam0)
{
	if (func_694(81053684, iParam0))
	{
		return true;
	}
	if (func_694(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_694(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_504(func_894(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_470(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_695(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_696()
{
	if (!func_487(Global_1935630.f_45))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

int func_697(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_487(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_487(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_271() == -1 && !func_895(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_895(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_487(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_896(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_897(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_898(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, bParam4);
	}
	return iVar0;
}

int func_698(int iParam0, int iParam1)
{
	var uVar0;

	return func_899(&uVar0, iParam0, iParam1);
}

bool func_699()
{
	return Global_1935436 == 1;
}

bool func_700()
{
	return Global_1935436 == 2;
}

int func_701(int iParam0)
{
	int iVar0;

	iVar0 = func_470(iParam0);
	switch (iVar0)
	{
		case -2061583405:
			return joaat("HATS");
		case -525676072:
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

struct<4> func_702(bool bParam0)
{
	return func_511(joaat("CHARACTER"), func_900(), -1591664384, bParam0);
}

int func_703(int iParam0)
{
	vector3 vVar0;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_704(bool bParam0)
{
	int iVar0;

	iVar0 = func_513(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_511(923904168, func_702(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_511(923904168, func_702(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_511(923904168, func_702(bParam0), -740156546, 0);
}

bool func_705(int iParam0, bool bParam1)
{
	if (func_470(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_901(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_706(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_512(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_707(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_902(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_708(bool bParam0)
{
	int iVar0;

	iVar0 = func_513(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_511(271701509, func_702(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_511(271701509, func_702(bParam0), 12999093, 0);
}

bool func_709(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_470(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_710(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_513(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_711()
{
	int iVar0;

	Global_1946804.f_1378 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_712(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

int func_713(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_714(int iParam0)
{
	func_497(iParam0, 8, 6);
}

void func_715(int iParam0)
{
	func_903(&(Global_1946804.f_2589), iParam0);
}

void func_716(int iParam0, int iParam1)
{
	func_904(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_717(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_718(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_470(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_493(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_716(iVar1, iVar3);
		}
	}
	if (func_905(-1586649372) && func_493(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_716(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
			}
			func_906(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_906(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_906(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_906(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_906(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_906(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_470(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_907(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_470(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_712(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_907(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_712(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_716(iVar1, iVar3);
					}
				}
			}
			switch (func_470(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_470(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_470(uParam0->f_1[iVar1 /*3*/]) || func_712(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_716(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_719(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_908(0);
	if (iParam2 != 0 && func_909(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_910(iParam0, func_495(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_720(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_271() != -1;
	iVar7 = func_908(0);
	if (func_491(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_495(iVar0, 1);
			if (func_492(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_492(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_911(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_912(uParam0);
				if (iVar3 > 0)
				{
					if (!func_491(524288))
					{
						func_489(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_495(iVar0, 1);
							if (func_492(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_492(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_911(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_716(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_724(524288);
				}
			}
		}
	}
}

void func_721(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_913(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_271() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_914(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_915(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_915(Global_40.f_7729);
				Global_1946804.f_1378 = func_915(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_916(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_917(0, 1);
	}
}

void func_722(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (func_682(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_683(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_489(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (func_682(Param0))
			{
				return;
			}
			func_683(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_489(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_510(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_723(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_724(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_725(int iParam0, var uParam1)
{
	*uParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*uParam1 = Global_1899528.f_11[iParam0];
	return *uParam1 != -1;
}

int func_726(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

void func_727(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_271() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_728(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_191(iParam0))
	{
		case 1:
			iVar0 = func_192(iParam0);
			return func_918(iVar0);
		case 8:
			iVar1 = func_192(iParam0);
			if (func_204(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_919(iVar1);
			}
			break;
	}
	return -1;
}

void func_729(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_271() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_920(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_921();
		Global_1898077.f_9 = func_922(Global_1894899.f_2);
		func_923(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_730()
{
	if (!func_635(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_635(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_635(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_635(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_635(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_635(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_635(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_731(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	func_924(iParam0, iParam1);
}

int func_732(bool bParam0)
{
	if (!bParam0 && func_925(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_733(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_734(int iParam0, bool bParam1)
{
	if (func_271() != -1)
	{
		return;
	}
	if (func_405(0) != iParam0)
	{
		return;
	}
	if (func_926(iParam0))
	{
		if (bParam1)
		{
			func_927(-525676072);
		}
		else
		{
			func_928(-525676072);
		}
	}
}

int func_735(int iParam0)
{
	return func_930(func_929(iParam0));
}

void func_736(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_737(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_738(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_739(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_529(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_635(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_931(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_635(Global_1347702[63 /*49*/].f_15, 1) || func_351(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_931(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_635(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_305(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_931(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_635(Global_1347702[134 /*49*/].f_15, 1) || func_351(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_635(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_931(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_932(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_635(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_298(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_536(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_740(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_741(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_127(iParam0) || func_277(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

struct<7> func_742(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_3 = { vParam2 };
	Var0.f_2 = uParam8;
	Var0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(Var0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_6), 3);
	}
	return Var0;
}

bool func_743(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_529(iParam0))
	{
		return false;
	}
	func_933(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_744(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_745(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return -1395382793;
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return 1680324116;
		case 1593315648:
			return 989578874;
		case -1559986688:
			return 174754238;
		case 1071744295:
			return -2065784734;
		case 977450639:
			return 2111449038;
		case 1901494236:
			return 1245083301;
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return 1996046145;
		case -2051275045:
			return -306710010;
		case 1495063555:
			return -339275545;
		case 1046468203:
			return 393090546;
		case 1018353621:
			return 114272443;
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return -1774801049;
		case -1684458716:
			return 1976273473;
		case -973332710:
			return -2045878709;
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return 1598276604;
		case 1199580439:
			return -1443192745;
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_934(296923297, iParam1);
			return func_935(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_934(1237718549, iParam1);
			return func_935(iVar0);
		case -23947011:
			return -456769142;
		case 1295334688:
			return 869636257;
		case 1200878026:
			return 1560123389;
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return -309158751;
		case -571427255:
			return -251280159;
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return -1120526485;
		case -445211559:
			return -757536090;
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return 1709174532;
		case 876535472:
			return -1916145078;
		case -1205468859:
			return -757536090;
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case -426171916:
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_746(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_292(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_748(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_749(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

int func_750(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_751(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam1))
		{
			return uParam0->f_13[iVar0 /*12*/];
		}
		iVar0++;
	}
	return 0;
}

void func_752(var uParam0, int iParam1)
{
	struct<12> Var0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == iParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_753(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_754(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> Var1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	func_936(uParam0);
	iVar0 = func_937(uParam0, iParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_662(iParam1);
		}
		iVar0 = func_938(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_939(uParam0);
		}
		else
		{
			Var1.f_10 = joaat("WEAPON_UNARMED");
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_939(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = iParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
	{
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0 /*13*/].f_9 = sParam2;
	}
	func_364(uParam0, 2);
}

void func_755(int iParam0)
{
	if (func_940(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		FIRE::STOP_ENTITY_FIRE(iParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
	}
}

void func_756(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	if (func_941(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	func_755(iVar0);
	func_784(iParam0, 8192, 1);
}

void func_757(int iParam0)
{
	if (func_940(iParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 0, false);
}

void func_758(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	if (func_941(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	func_757(iVar0);
	func_784(iParam0, 8192, 0);
}

void func_759(int iParam0)
{
	if (func_940(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
}

void func_760(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_127(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_761(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	if (func_941(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	func_759(iVar0);
	func_784(iParam0, 16384, 1);
}

void func_762(int iParam0)
{
	if (func_940(iParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(iParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
}

void func_763(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	if (func_941(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_586(iParam0);
	func_762(iVar0);
	func_784(iParam0, 16384, 0);
}

char* func_764(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_765(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_766(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_942(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

int func_767(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_768()
{
	func_943();
	func_944();
	func_945();
}

Vector3 func_769(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -249.9006f, 687.3135f, 112.3283f;
				case 1:
					return -247.4972f, 702.5792f, 112.4106f;
				case 2:
					return -236.2796f, 671.6187f, 112.3191f;
				case 3:
					return -237.2955f, 669.2944f, 112.3152f;
				case 4:
					return -232.038f, 669.1342f, 112.3122f;
				case 5:
					return -235.6726f, 666.3441f, 112.3104f;
				case 6:
					return -234.4291f, 664.4193f, 112.305f;
				case 7:
					return -238.8451f, 662.6245f, 112.4176f;
				case 8:
					return -236.8032f, 660.7002f, 112.3625f;
				case 9:
					return -241.7717f, 665.4426f, 112.4038f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_770(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 130.557f;
				case 1:
					return 464.0298f;
				case 2:
					return 39.2806f;
				case 3:
					return 239.2806f;
				case 4:
					return 121.2806f;
				case 5:
					return 13.2806f;
				case 6:
					return 277.2806f;
				case 7:
					return 43.8655f;
				case 8:
					return -11.52f;
				case 9:
					return 165.6f;
			}
			break;
	}
	return 0f;
}

bool func_771(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CS_SISTERCALDERON"):
		case joaat("CS_STRSHERIFF_01"):
		case joaat("CS_MUD2BIGGUY"):
		case joaat("CS_RAINSFALL"):
		case joaat("CS_PENELOPEBRAITHWAITE"):
		case joaat("CS_SWAMPWEIRDOSONNY"):
		case joaat("CS_UNIDUSTERJAIL_01"):
		case joaat("CS_IANGRAY"):
		case joaat("CS_TINYHERMIT"):
		case joaat("CS_TIMOTHYDONAHUE"):
		case joaat("CS_PRINCESSISABEAU"):
		case joaat("CS_LEVITICUSCORNWALL"):
		case joaat("CS_DIDSBURY"):
		case joaat("CS_FEATHERSTONCHAMBERS"):
		case joaat("CS_FEATSOFSTRENGTH"):
		case joaat("CS_BANDPIANIST"):
		case joaat("CS_ESCAPEARTISTASSISTANT"):
		case joaat("CS_GARETHBRAITHWAITE"):
		case joaat("CS_CREOLEGUY"):
		case joaat("CS_LEIGHGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_02"):
		case joaat("CS_GLORIA"):
		case joaat("CS_WARVET"):
		case joaat("CS_JOCKGRAY"):
		case joaat("CS_DAVIDGEDDES"):
		case joaat("CS_GUIDOMARTELLI"):
		case joaat("CS_DUNCANGEDDES"):
		case joaat("CS_DUSTERINFORMANT_01"):
		case joaat("CS_PINKERTONGOON"):
		case joaat("CS_MICKEY"):
		case joaat("CS_TWINBROTHER_02"):
		case joaat("CS_HESTONJAMESON"):
		case joaat("CS_STRDEPUTY_01"):
		case joaat("CS_ABE"):
		case joaat("CS_ODDFELLOWSPINHEAD"):
		case joaat("CS_SWAMPFREAK"):
		case joaat("CS_MRADLER"):
		case joaat("CS_ABERDEENPIGFARMER"):
		case joaat("CS_HOBARTCRAWLEY"):
		case joaat("CS_FORMYARTBIGWOMAN"):
		case joaat("CS_NORRISFORSYTHE"):
		case joaat("CS_JULES"):
		case joaat("CS_TOMDICKENS"):
		case joaat("CS_GERALDBRAITHWAITE"):
		case joaat("CS_PAYTAH"):
		case joaat("CS_CANCAN_03"):
		case joaat("CS_GRIZZLEDJON"):
		case joaat("CS_WROBEL"):
		case joaat("CS_MEREDITH"):
		case joaat("CS_CREEPYOLDLADY"):
		case joaat("CS_NBXRECEPTIONIST_01"):
		case joaat("CS_NBXPOLICECHIEFFORMAL"):
		case joaat("CS_CORNWALLTRAINCONDUCTOR"):
		case joaat("CS_RHODEPUTY_01"):
		case joaat("CS_DRMALCOLMMACINTOSH"):
		case joaat("CS_LEON"):
		case joaat("CS_SHERIFFOWENS"):
		case joaat("CS_SDDOCTOR_01"):
		case joaat("CS_SCOTTGRAY"):
		case joaat("CS_CANCAN_01"):
		case joaat("CS_CREOLECAPTAIN"):
		case joaat("CS_BRONTESBUTLER"):
		case joaat("CS_JANSON"):
		case joaat("CS_FORGIVENWIFE_01"):
		case joaat("CS_TIGERHANDLER"):
		case joaat("CS_FRENCHARTIST"):
		case joaat("CS_GENSTORYMALE"):
		case joaat("CS_CLAY"):
		case joaat("CS_STRDEPUTY_02"):
		case joaat("CS_FAMOUSGUNSLINGER_03"):
		case joaat("CS_BIVCOACHDRIVER"):
		case joaat("CS_BRAITHWAITEBUTLER"):
		case joaat("CS_CLEET"):
		case joaat("CS_JOE"):
		case joaat("CS_SLAVECATCHER"):
		case joaat("CS_BRAITHWAITEMAID"):
		case joaat("CS_TWINGROUPIE_02"):
		case joaat("CS_MRSGEDDES"):
		case joaat("CS_SAMARITAN"):
		case joaat("CS_EXCONFEDINFORMANT"):
		case joaat("CS_FRENCHMAN_01"):
		case joaat("CS_BANDSINGER"):
		case joaat("CS_BAPTISTE"):
		case joaat("CS_ANGUSGEDDES"):
		case joaat("CS_MYSTERIOUSSTRANGER"):
		case joaat("CS_FAMOUSGUNSLINGER_01"):
		case joaat("CS_BARTHOLOMEWBRAITHWAITE"):
		case joaat("CS_MIXEDRACEKID"):
		case joaat("CS_BEATENUPCAPTAIN"):
		case joaat("CS_EDGARROSS"):
		case joaat("CS_TWINGROUPIE_01"):
		case joaat("CS_MRSWEATHERS"):
		case joaat("CS_JAMIE"):
		case joaat("CS_KARENSJOHN_01"):
		case joaat("CS_THOMASDOWN"):
		case joaat("CS_OBEDIAHHINTON"):
		case joaat("CS_AGNESDOWD"):
		case joaat("CS_CAVEHERMIT"):
		case joaat("CS_BRYNNTILDON"):
		case joaat("CS_GERMANSON"):
		case joaat("CS_BRENDACRAWLEY"):
		case joaat("CS_COLFAVOURS"):
		case joaat("CS_RHODESKIDNAPVICTIM"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("CS_CANCAN_04"):
		case joaat("CS_TOWNCRIER"):
		case joaat("CS_FAMOUSGUNSLINGER_04"):
		case joaat("CS_DALEMARONEY"):
		case joaat("CS_ANGRYHUSBAND"):
		case joaat("CS_LILLIANPOWELL"):
		case joaat("CS_ANDERSHELGERSON"):
		case joaat("CS_POORJOE"):
		case joaat("CS_BRAITHWAITESERVANT"):
		case joaat("CS_BROTHERDORKINS"):
		case joaat("CS_ALBERTMASON"):
		case joaat("CS_FAMOUSGUNSLINGER_05"):
		case joaat("CS_BALLOONOPERATOR"):
		case joaat("CS_ALBERTCAKEESQUIRE"):
		case joaat("CS_MRSFELLOWS"):
		case joaat("CS_CANCANMAN_01"):
		case joaat("CS_POISONWELLSHAMAN"):
		case joaat("CS_CANCAN_02"):
		case joaat("CS_MEREDITHSMOTHER"):
		case joaat("CS_ANGEL"):
		case joaat("CS_ARCHERFORDHAM"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("CS_CHELONIANMASTER"):
		case joaat("CS_TWINBROTHER_01"):
		case joaat("CS_GERMANDAUGHTER"):
		case joaat("CS_LEMIUXASSISTANT"):
		case joaat("CS_CREOLEDOCTOR"):
		case joaat("CS_CRACKPOTROBOT"):
		case joaat("CS_BANDBASSIST"):
		case joaat("CS_GENSTORYFEMALE"):
		case joaat("CS_MARYLINTON"):
		case joaat("CS_VALPRAYINGMAN"):
		case joaat("CS_JOHNTHEBAPTISINGMADMAN"):
		case joaat("CS_MRS_CALHOUN"):
		case joaat("CS_THEODORELEVIN"):
		case joaat("CS_NICHOLASTIMMINS"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("CS_DINOBONESLADY"):
		case joaat("CS_BEAUGRAY"):
		case joaat("CS_STRAWBERRYOUTLAW_01"):
		case joaat("CS_CRACKPOTINVENTOR"):
		case joaat("CS_HERCULE"):
		case joaat("CS_GAVIN"):
		case joaat("CS_LEVISIMON"):
		case joaat("CS_LONDONDERRYSON"):
		case joaat("CS_CAPTAINMONROE"):
		case joaat("CS_FAMOUSGUNSLINGER_02"):
		case joaat("CS_MRSLONDONDERRY"):
		case joaat("CS_SOOTHSAYER"):
		case joaat("CS_TAVISHGRAY"):
		case joaat("CS_JOEBUTLER"):
		case joaat("CS_BANDDRUMMER"):
		case joaat("CS_LILLYMILLET"):
		case joaat("CS_ANSEL_ATHERTON"):
		case joaat("CS_RHODEPUTY_02"):
		case joaat("CS_EDMUNDLOWRY"):
		case joaat("CS_DISGUISEDDUSTER_02"):
		case joaat("CS_MAGNIFICO"):
		case joaat("CS_ARTAPPRAISER"):
		case joaat("CS_FORGIVENHUSBAND_01"):
		case joaat("CS_REVERENDFORTHERINGHAM"):
		case joaat("CS_DAVEYCALLENDER"):
		case joaat("CS_DESMOND"):
		case joaat("CS_ADAMGRAY"):
		case joaat("CS_JIMCALLOWAY"):
		case joaat("CS_SDSALOONDRUNK_01"):
		case joaat("CS_NBXDRUNK"):
		case joaat("CS_GERMANMOTHER"):
		case joaat("CS_RINGMASTER"):
		case joaat("CS_LUCANAPOLI"):
		case joaat("CS_RHODESASSISTANT"):
		case joaat("CS_ABERDEENSISTER"):
		case joaat("CS_NBXEXECUTED"):
		case joaat("CS_FAMOUSGUNSLINGER_06"):
		case joaat("CS_JOHNWEATHERS"):
		case joaat("CS_PROFESSORBELL"):
		case joaat("CS_RHODESSALOONBOUNCER"):
			return true;
		default:
			break;
	}
	return false;
}

void func_772(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_292(iParam0, iParam1))
		{
			if (func_746(iParam0, iParam1))
			{
				if (func_747(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_748(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_773(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_774(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_775(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

char* func_776(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1)
		{
			return func_946(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_777(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_778(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_947(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

void func_779(int iParam0)
{
	if (func_126(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_298(iParam0)))
		{
			func_545(iParam0, 67108864, 1);
			func_531(iParam0, 19, 1);
		}
	}
}

float func_780(int iParam0)
{
	if (!func_529(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_781(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_298(iParam0);
	iVar1 = func_581(iParam0, 0);
	func_948(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_782(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_783(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_784(int iParam0, int iParam1, bool bParam2)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 = (Global_1360165[iParam0 /*1157*/].f_70.f_1 - (Global_1360165[iParam0 /*1157*/].f_70.f_1 && iParam1));
	}
}

int func_785(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_529(iParam0))
	{
		return 0;
	}
	iVar0 = func_586(iParam0);
	if (func_111(iVar0, 0))
	{
		if (func_111(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_782(iParam0)) || func_783(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_949(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000f))
			{
				iVar1 = func_941(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_950(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_951(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_951(iParam0, 0));
					func_952(iParam0);
				}
			}
			else
			{
				if (func_305(iParam0, 32768, 1))
				{
					iVar2 = func_951(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_111(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_305(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_950(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_951(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_951(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_950(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_953(iParam0, 0);
	return 1;
}

void func_786(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_871(iParam0, 64))
	{
		func_787(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_901(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_954(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_787(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_631(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_955(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_871(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_956(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_383(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_384(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_957(Global_1900383[iParam0 /*45*/].f_26);
		func_958(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_297(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = func_631(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_787(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_788(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	func_959(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Global_35), &vVar0, &vVar3);
	vVar0.x = (vVar0.x * 0.35f);
	vVar3.x = (vVar3.x * 0.35f);
	vVar6 = { vVar3 - vVar0 };
	vVar6 = { vVar6 * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, vVar6);
	if (!Global_1935630.f_12)
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_337(uParam0, 1048576);
	func_337(uParam0, 2097152);
}

void func_789(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	int iVar14;
	int iVar15;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return;
	}
	func_959(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar1, &vVar2, &vVar5);
	vVar8 = { vVar5 - vVar2 };
	vVar8 = { vVar8 * Vector(0.9f, 0.9f, 0.9f) };
	if (VEHICLE::IS_DRAFT_VEHICLE(iVar0))
	{
		iVar14 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			iVar15 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), iVar14);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar15), &vVar2, &vVar5);
				vVar11 = { vVar5 - vVar2 };
				vVar11 = { vVar11 * Vector(0.9f, 0.9f, 0.9f) };
			}
			else
			{
				iVar14++;
			}
		}
		vVar8.f_1 = (vVar8.y + (vVar11.y / 2f));
	}
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), vVar8);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iVar0, 0f, (vVar11.y / 2f), 0f, 0f, 0f, 0f, 2, 1);
	}
	func_364(uParam0, 2097152);
	func_337(uParam0, 1048576);
}

void func_790(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return;
	}
	func_959(uParam0->f_1875);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	uParam0->f_1882 = { vVar4 - vVar1 };
	vVar7 = { uParam0->f_1882 * FtoV(func_791(iParam1)) };
	uParam0->f_1875 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iParam1, true, false), 0f, 0f, 0f, vVar7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_1875, iParam1, 0f, 0.5f, 0f, 0f, 0f, 0f, 2, 1);
	}
	func_364(uParam0, 1048576);
	func_337(uParam0, 2097152);
}

float func_791(int iParam0)
{
	if (TASK::IS_PED_SPRINTING(iParam0))
	{
		return 1f;
	}
	if (TASK::IS_PED_RUNNING(iParam0))
	{
		return 0.9f;
	}
	if (TASK::IS_PED_WALKING(iParam0))
	{
		return 0.8f;
	}
	return 0.7f;
}

bool func_792(int iParam0)
{
	switch (func_271())
	{
		case -1:
			return (Global_1357549.f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_793(int iParam0)
{
	switch (func_271())
	{
		case -1:
			return (Global_1357549.f_1494 && iParam0) != 0;
	}
	return false;
}

bool func_794(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

void func_795()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
}

void func_796(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	switch (func_797(&(uParam0->f_1633[iParam1 /*15*/])))
	{
		case 0:
			if (!bParam3)
			{
				return;
			}
			if (!func_577(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (func_468(&(uParam0->f_1903)))
				{
					func_816(uParam0->f_1903, 0);
					func_960(&(uParam0->f_1633[iParam1 /*15*/]), 2);
				}
			}
			break;
		case 1:
			if (!func_577(uParam0->f_1633[iParam1 /*15*/].f_10, 256))
			{
				if (!func_961())
				{
					func_960(&(uParam0->f_1633[iParam1 /*15*/]), 0);
				}
			}
			else
			{
				func_960(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
		case 2:
			if (!func_962())
			{
				func_960(&(uParam0->f_1633[iParam1 /*15*/]), 0);
			}
			break;
	}
}

int func_797(var uParam0)
{
	return uParam0->f_14;
}

bool func_798(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, vector3 vParam10)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;

	vVar0 = { vParam4 - vParam1 };
	vVar3 = { vParam1 - vParam10 };
	fVar6 = func_963(vParam7, vVar0);
	fVar7 = -func_963(vParam7, vVar3);
	if (MISC::ABSF(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = (fVar7 / fVar6);
	*uParam0 = { vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0 };
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return false;
	}
	return true;
}

void func_799(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3[4];
	vector3 vVar16[4];
	float fVar29[4];
	vector3 vVar34;
	vector3 vVar37;
	int iVar40;
	int iVar41;
	vector3 vVar42;
	float fVar45;

	if (!func_964(uParam0, iParam1))
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
	}
	else
	{
		*uParam2 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_12) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
		vParam3 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, ((BUILTIN::COS(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18), ((BUILTIN::SIN(uParam0->f_1016[iParam1 /*41*/].f_13) * uParam0->f_1016[iParam1 /*41*/].f_11) + uParam0->f_1016[iParam1 /*41*/].f_18)) };
	}
	vVar0 = { Global_36 };
	if ((uParam0->f_1897 && VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875)) && func_91(uParam0->f_1898, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_17, 1, 1))
	{
		vVar34 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_1875) };
		vVar37 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_1875) };
		vVar3[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar3[2 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (vVar34.y / 2f), 0f) };
		vVar3[3 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar37, ENTITY::GET_ENTITY_HEADING(uParam0->f_1898), (-vVar34.x / 2f), (-vVar34.y / 2f), 0f) };
		vVar16[0 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[1 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[0 /*3*/], vVar3[2 /*3*/], true) };
		vVar16[2 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[1 /*3*/], true) };
		vVar16[3 /*3*/] = { MISC::_0x83ACC65D9ACEC5EF(uParam0->f_1016[iParam1 /*41*/].f_1, vVar3[3 /*3*/], vVar3[2 /*3*/], true) };
		fVar29[0] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[0 /*3*/], true);
		fVar29[1] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[1 /*3*/], true);
		fVar29[2] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[2 /*3*/], true);
		fVar29[3] = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_1016[iParam1 /*41*/].f_1, vVar16[3 /*3*/], true);
		iVar41 = 0;
		iVar40 = 1;
		while (iVar40 <= 3)
		{
			if (fVar29[iVar40] < fVar29[iVar41])
			{
				iVar41 = iVar40;
			}
			iVar40++;
		}
		vVar0 = { vVar16[iVar41 /*3*/] };
	}
	*fParam6 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, *uParam2, true);
	*fParam7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam3, true);
	*fParam8 = func_485(uParam0->f_1016[iParam1 /*41*/].f_1, vVar0, 0);
	if (*fParam8 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam8 = (*fParam8 + 360f);
	}
	if (uParam0->f_1016[iParam1 /*41*/].f_13 < uParam0->f_1016[iParam1 /*41*/].f_12)
	{
		*fParam9 = (uParam0->f_1016[iParam1 /*41*/].f_13 + 360f);
	}
	else
	{
		*fParam9 = uParam0->f_1016[iParam1 /*41*/].f_13;
	}
	if (*fParam8 < *fParam9)
	{
		vVar42 = { uParam0->f_1016[iParam1 /*41*/].f_1 };
		vVar42.f_2 = Global_36.f_2;
		uParam0->f_1876 = { vVar42 + Vector(0f, (BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11), (BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_11)) };
		fVar45 = 0f;
		uParam0->f_1879 = { vVar42 + Vector(0f, ((BUILTIN::COS(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45), ((BUILTIN::SIN(*fParam8) * uParam0->f_1016[iParam1 /*41*/].f_17) + fVar45)) };
	}
}

void func_800(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (uParam0->f_3[iVar0 /*13*/].f_1 != 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3[iVar0 /*13*/].f_4)))
			{
				func_965(&(uParam0->f_1771), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), &(uParam0->f_3[iVar0 /*13*/].f_4), 0);
			}
		}
		iVar0++;
	}
}

bool func_801(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (8 == uParam0->f_475[iVar0 /*18*/].f_2 && uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_802(var uParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1016[iVar0 /*41*/].f_22)) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1016[iVar0 /*41*/].f_22), sParam1)) && func_554(&(uParam0->f_1016[iVar0 /*41*/]), 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_803(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_966(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

void func_804(var uParam0, int iParam1)
{
	uParam0->f_26 = (uParam0->f_26 || iParam1);
}

void func_805(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), fParam1);
		}
	}
	if (!func_967(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (!func_967(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (!func_967(iParam0, 16))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
	if (!func_967(iParam0, 128))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (!func_967(iParam0, 512))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
	if (!func_967(iParam0, 64))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
	}
	if (!(func_968(17) && func_207(Global_35, Global_1835011[17 /*74*/].f_18, 0) < 10f))
	{
		if (!func_967(iParam0, 2048))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	if (!func_967(iParam0, 4096))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!func_967(iParam0, 1024))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
		if (!func_967(iParam0, 8))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
		PED::SET_PED_RESET_FLAG(Global_35, 33, true);
		if (!func_967(iParam0, 32))
		{
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
	}
}

bool func_806(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_807(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 0 && func_8(uParam0) == 3)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if (uParam0->f_475[iParam1 /*18*/].f_17 == 2 && func_8(uParam0) == 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	if ((uParam0->f_475[iParam1 /*18*/].f_17 == 1 && func_8(uParam0) > 3) && func_8(uParam0) < 9)
	{
		if (bParam2)
		{
		}
		return true;
	}
	return false;
}

void func_808(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	char cVar1[64];
	int iVar9;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_387(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
			{
				iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2);
				if (PED::IS_PED_HUMAN(iVar9) && iVar9 != Global_35)
				{
					func_809(iVar9, Global_35, uParam2, uParam3);
				}
			}
		}
		iVar0++;
	}
}

void func_809(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<23> Var0;

	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_3 = uParam1;
	Var0.f_4 = 14283;
	Var0.f_14 = uParam2;
	Var0.f_15 = uParam3;
	IK::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_810(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	float fVar19;
	int iVar20;
	vector3 vVar21;

	if (uParam0->f_475[iParam2 /*18*/].f_4 < 0)
	{
		return;
	}
	iVar0 = uParam0->f_475[iParam2 /*18*/].f_4;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1522[iVar0 /*10*/].f_8))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1522[iVar0 /*10*/].f_8, true, false))
		{
			func_838(uParam0, uParam0->f_1522[iVar0 /*10*/].f_8);
			ANIMSCENE::GET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, &vVar1, &vVar4, 2);
			if (func_388(&(uParam0->f_1522[iVar0 /*10*/]), 1))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[iVar0 /*10*/].f_8, func_225(Global_35), &vVar7, false, 0, 2))
				{
					fVar19 = (func_485(vVar1, Global_36, 1) - func_485(vVar1, vVar7, 1));
					vVar4.f_2 = (vVar4.z + fVar19);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1522[iVar0 /*10*/].f_8, vVar1, vVar4, 2);
				}
			}
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, func_225(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0)
			{
				if ((func_8(uParam0) > 3 && !func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 16)) && !func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768))
				{
					func_969(uParam0, 1);
				}
				if (uParam0->f_1899)
				{
					if (func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 128))
					{
					}
					else
					{
						func_364(uParam0, 131072);
						return;
					}
				}
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1522[iVar0 /*10*/].f_8, false))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1522[iVar0 /*10*/].f_8, "b_PlayerArthur", !func_677(), false);
				}
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8);
				if (uParam0->f_475[iParam2 /*18*/].f_17 == 0)
				{
					func_828(&(uParam0->f_1522[iVar0 /*10*/]), 128);
					if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_1522[iVar0 /*10*/].f_8, "pl_breakout"))
					{
						func_389(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 0, -1, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8))
			{
				ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam0->f_1522[iVar0 /*10*/].f_8, false);
			}
			if (func_629(&(uParam0->f_475[iParam2 /*18*/]), 4))
			{
				uParam0->f_1685 = iParam2;
				if (((((func_355(uParam0) == 0 && !CAM::_0x81DCFD13CF39920E()) && uParam0->f_475[iParam2 /*18*/].f_17 == 1) && uParam0->f_475[iParam2 /*18*/] < 8) && !func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768)) && !func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 524288))
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					func_553(uParam0, 64);
				}
			}
			iVar20 = 0;
			while (iVar20 < 35)
			{
				if ((uParam0->f_3[iVar20 /*13*/] && uParam0->f_3[iVar20 /*13*/].f_8 > 0f) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar20 /*13*/].f_2))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar20 /*13*/].f_2, false);
				}
				iVar20++;
			}
			if ((ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1522[iVar0 /*10*/].f_8, func_225(Global_35)) && uParam0->f_475[iParam2 /*18*/].f_17 != 0) && !func_339(&(uParam0->f_1016[uParam0->f_475[iParam2 /*18*/] /*41*/]), 32768))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1522[iVar0 /*10*/].f_8, func_225(Global_35), &vVar21, false, 0, 2) && !func_90(vVar21))
				{
					func_970(uParam0, 0);
				}
			}
			uParam0->f_475[iParam2 /*18*/].f_7 = 1;
		}
	}
}

bool func_811(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*18*/] == iParam1)
		{
			if (func_629(&(uParam0->f_475[iVar0 /*18*/]), 4))
			{
				return true;
			}
			if (uParam0->f_475[iVar0 /*18*/].f_2 == 11)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_812()
{
	return ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35));
}

void func_813(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1897)
	{
		if (func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 8192) && PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 65536) || (!func_487(func_486(Global_35, 0, 1, 0)) && !func_487(func_486(Global_35, 1, 1, 0))))
		{
			if (func_359(uParam0, uParam0->f_1684))
			{
				func_971(uParam0->f_1016[uParam0->f_1684 /*41*/].f_7);
			}
		}
	}
	if (!func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 16) && (func_487(func_486(Global_35, 0, 1, 0)) || func_487(func_486(Global_35, 1, 1, 0))))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
		if (func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		func_626(uParam0, 1);
	}
	else if ((!func_359(uParam0, uParam0->f_1684) && !func_368(uParam0, 4)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_626(uParam0, 3);
	}
	else
	{
		func_626(uParam0, 6);
	}
}

void func_814(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	func_972(uParam0, iParam1, &vVar1, &fVar0);
	func_970(uParam0, func_606(uParam0->f_1345[uParam0->f_475[iParam1 /*18*/] /*22*/].f_1, 8));
	func_26(&(uParam0->f_1869));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!func_973(uParam0, uParam0->f_475[iParam1 /*18*/]))
		{
			func_804(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_555(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	func_971(vVar1);
	if (uParam0->f_475[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, uParam0->f_475[iParam1 /*18*/].f_15);
		func_553(uParam0, 32);
	}
	if (func_629(&(uParam0->f_475[iParam1 /*18*/]), 16))
	{
		func_974(uParam0, uParam0->f_475[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_975(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		func_976(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

bool func_815(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_816(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_977())
	{
		return 0;
	}
	if (!func_978(iParam0))
	{
		return 0;
	}
	if (func_979(iParam0))
	{
		iVar0 = 0;
		if (func_470(iParam0) == 81053684)
		{
			if (bParam1)
			{
				func_659(&iVar0, 2);
			}
		}
		return func_980(iParam0, iVar0);
	}
	return 0;
}

bool func_817()
{
	return Global_1357517;
}

void func_818()
{
	Global_1357516 = 0;
}

void func_819(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 103)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(uParam0->f_1889, iVar0, func_981(iVar0));
		iVar0++;
	}
}

void func_820(var uParam0)
{
	int iVar0;
	struct<16> Var1;
	struct<18> Var17;
	struct<41> Var35;
	struct<10> Var76;
	struct<22> Var86;

	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0 /*13*/] = 0;
		iVar0++;
	}
	uParam0->f_459 = { Var1 };
	StringCopy(&(uParam0->f_459), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_475)
	{
		uParam0->f_475[iVar0 /*18*/] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1522)
	{
		uParam0->f_1522[iVar0 /*10*/] = { Var76 };
		iVar0++;
	}
	uParam0->f_1683 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1016)
	{
		uParam0->f_1016[iVar0 /*41*/] = { Var35 };
		uParam0->f_1345[iVar0 /*22*/] = { Var86 };
		iVar0++;
	}
	uParam0->f_1684 = -1;
	uParam0->f_1765 = { Global_36 };
	uParam0->f_1768 = 0;
	uParam0->f_1769 = 0;
	uParam0->f_1688 = -1;
	uParam0->f_1689 = -1f;
	uParam0->f_1664 = 0;
	uParam0->f_1666 = 0;
	uParam0->f_1666.f_1 = 0;
	uParam0->f_1903 = 0;
	if (CAM::_0x927B810E43E99932(&(uParam0->f_1692)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1692));
	}
}

void func_821(var uParam0, int iParam1)
{
	uParam0->f_1889.f_1 = 0;
	uParam0->f_1889.f_3 = iParam1;
}

bool func_822(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1889.f_1), &(uParam0->f_1889));
	return bVar0;
}

bool func_823(var uParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_824(var uParam0, int iParam1, float* fParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_825(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_826(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_829(uParam0, 24, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_829(uParam0, 25, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_829(uParam0, 26, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_829(uParam0, 27, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
	if (func_829(uParam0, 28, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32;
		}
	}
	if (func_829(uParam0, 29, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 128;
		}
	}
	if (func_829(uParam0, 32, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 256;
		}
	}
	if (func_829(uParam0, 33, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 512;
		}
	}
	if (func_829(uParam0, 34, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8192;
		}
	}
	if (func_829(uParam0, 36, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 32768;
		}
	}
	if (func_829(uParam0, 37, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 65536;
		}
	}
	if (func_829(uParam0, 38, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 131072;
		}
	}
	if (func_829(uParam0, 41, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 262144;
		}
	}
	if (func_829(uParam0, 42, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 524288;
		}
	}
}

bool func_827(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_241(vParam0, vParam3) <= (fParam6 * fParam6);
}

void func_828(var uParam0, int iParam1)
{
	uParam0->f_9 = (uParam0->f_9 || iParam1);
}

bool func_829(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, &(uParam0->f_1889));
	return bVar0;
}

bool func_830(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		uParam0->f_1921 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			if (((func_831(iParam1) && !uParam0->f_3[iVar0 /*13*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) == Global_35)
			{
				iParam1 = ENTITY::GET_ENTITY_MODEL(Global_35);
			}
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2) == iParam1)
			{
				if (!uParam0->f_3[iVar0 /*13*/])
				{
					uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
					*iParam2 = iVar0;
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
					{
						ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
					}
					return true;
				}
			}
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, func_453(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9))
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, func_982(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		else if (STREAMING::IS_MODEL_VALID(iParam1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9)) && MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, "^"))
		{
			if ((ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::IS_MODEL_A_PED(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_453(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, func_453(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_3[iVar0 /*13*/].f_2) && STREAMING::_0x274EE1B90CFA669E(iParam1)) && !MISC::IS_STRING_NULL_OR_EMPTY(func_982(iParam1)))
			{
				if (MISC::_DOES_STRING_EXIST_IN_STRING(uParam0->f_3[iVar0 /*13*/].f_9, func_982(iParam1)))
				{
					if (!uParam0->f_3[iVar0 /*13*/])
					{
						uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3[iVar0 /*13*/].f_2);
						*iParam2 = iVar0;
						if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && !ITEMSET::IS_IN_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921))
						{
							ITEMSET::ADD_TO_ITEMSET(uParam0->f_3[iVar0 /*13*/].f_2, uParam0->f_1921);
						}
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_831(int iParam0)
{
	return (((iParam0 == joaat("PLAYER_ZERO") || iParam0 == joaat("PLAYER_ONE")) || iParam0 == joaat("PLAYER_TWO")) || iParam0 == joaat("PLAYER_THREE"));
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 7:
			return 6;
	}
	return 0;
}

int func_833(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 8:
			return 5;
		case 10:
			return 7;
		case 12:
			return 8;
		case 13:
			return 9;
		case 14:
			return 10;
		case 15:
			return 11;
	}
	return 0;
}

void func_834(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_829(uParam0, 88, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 1;
		}
	}
	if (func_829(uParam0, 89, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 2;
		}
	}
	if (func_829(uParam0, 90, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 4;
		}
	}
	if (func_829(uParam0, 91, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 8;
		}
	}
	if (func_829(uParam0, 92, &bVar0))
	{
		if (bVar0)
		{
			*uParam1 |= 16;
		}
	}
}

bool func_835(var uParam0, int iParam1, Vector3* vParam2)
{
	bool bVar0;

	uParam0->f_1889.f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &(uParam0->f_1889));
	return bVar0;
}

void func_836(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!func_63(uParam0, 8388608))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (uParam0->f_1016[iVar0 /*41*/].f_29)
		{
			uParam0->f_1016[iVar0 /*41*/].f_1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, uParam0->f_1885) };
			vVar1 = { uParam0->f_1016[iVar0 /*41*/].f_7 - uParam0->f_1016[iVar0 /*41*/].f_1 };
			vVar1 = { vVar1 + uParam0->f_1885 };
			uParam0->f_1016[iVar0 /*41*/].f_7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1016[iVar0 /*41*/].f_1, -uParam0->f_1888, vVar1) };
			uParam0->f_1016[iVar0 /*41*/].f_12 = (uParam0->f_1016[iVar0 /*41*/].f_12 + uParam0->f_1888);
			uParam0->f_1016[iVar0 /*41*/].f_13 = (uParam0->f_1016[iVar0 /*41*/].f_13 + uParam0->f_1888);
			if (uParam0->f_1016[iVar0 /*41*/].f_12 > 180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (-180f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_12 < -180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_12 = (180f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_12) - 180f));
			}
			if (uParam0->f_1016[iVar0 /*41*/].f_13 > 180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (-180f + (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180f));
			}
			else if (uParam0->f_1016[iVar0 /*41*/].f_13 < -180f)
			{
				uParam0->f_1016[iVar0 /*41*/].f_13 = (180f - (MISC::ABSF(uParam0->f_1016[iVar0 /*41*/].f_13) - 180f));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			uParam0->f_1633[iVar0 /*15*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1633[iVar0 /*15*/], -uParam0->f_1888, uParam0->f_1885) };
			uParam0->f_1633[iVar0 /*15*/].f_6.f_2 = (uParam0->f_1633[iVar0 /*15*/].f_6.f_2 + uParam0->f_1888);
		}
		iVar0++;
	}
	func_337(uParam0, 8388608);
}

bool func_837(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (((uParam0->f_475[iVar0 /*18*/].f_2 == 9 && uParam0->f_475[iVar0 /*18*/].f_4 == iParam1) && !func_388(&(uParam0->f_1522[iParam1 /*10*/]), 32)) && ((uParam0->f_475[iVar0 /*18*/].f_1 == 0 && !func_629(&(uParam0->f_475[iVar0 /*18*/]), 512)) || func_629(&(uParam0->f_475[iVar0 /*18*/]), 1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_838(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			StringCopy(&cVar1, uParam0->f_3[iVar0 /*13*/].f_9, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				cVar1 = { func_387(uParam0, uParam0->f_3[iVar0 /*13*/].f_2) };
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
			{
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
					{
						PED::SET_PED_CAN_BE_TARGETTED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2), false);
					}
				}
				else if (func_831(uParam0->f_3[iVar0 /*13*/].f_1))
				{
					if (func_677())
					{
						StringCopy(&cVar1, func_453(joaat("PLAYER_ZERO")), 64);
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
					else
					{
						StringCopy(&cVar1, func_453(joaat("PLAYER_THREE")), 64);
						if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, &cVar1))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, &cVar1, uParam0->f_3[iVar0 /*13*/].f_2, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_839(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_840(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, bParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_841(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2), iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				PED::DELETE_PED(&iVar1);
			}
			iVar0++;
		}
	}
}

void func_842(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_959(uParam0->f_1633[iVar0 /*15*/].f_12);
		iVar0++;
	}
}

void func_843(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_1633[iVar0 /*15*/].f_11)
		{
			func_959(uParam0->f_1633[iVar0 /*15*/].f_12);
			switch (uParam0->f_1633[iVar0 /*15*/].f_9)
			{
				case 0:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				case 1:
					uParam0->f_1633[iVar0 /*15*/].f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(uParam0->f_1633[iVar0 /*15*/], uParam0->f_1633[iVar0 /*15*/].f_6, uParam0->f_1633[iVar0 /*15*/].f_3);
					PATHFIND::_0x19C7567D2F2287D6(uParam0->f_1633[iVar0 /*15*/].f_12, 15);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_1633[iVar0 /*15*/].f_12, 0, 0, 0, -1, -1, 8);
					break;
				default:
					break;
					break;
			}
		}
		iVar0++;
	}
}

void func_844(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_983(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_0x88AD6CC10D8D35B2(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_845(int iParam0)
{
	if (!func_984(iParam0))
	{
		return false;
	}
	if (!func_985())
	{
		return true;
	}
	return false;
}

void func_846(int iParam0, int iParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = iParam1;
}

void func_847(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_848(int iParam0, struct<2> Param1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_986(iParam0, Param1))
	{
	}
	if (!func_987(iParam0, Param1.f_1))
	{
	}
}

void func_849(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_988(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_850(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_851(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_852(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_853(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_854(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_855(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_856(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_857(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_858(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

void func_859(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_860(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_861(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_989(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_989(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_990(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_991(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_992(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_993(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(iParam0, 0);
	PED::SET_PED_OWNS_ANIMAL(Global_35, iParam0, false);
	PED::_0xB8B6430EAD2D2437(iParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	PED::_0xFD6943B6DF77E449(iParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_0xAEB97D84CDF3C00B(iParam0, 0);
	if (func_344(iParam0))
	{
		iVar3 = func_345(iParam0);
		if (func_994(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_863(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

int func_864(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_634())
	{
		if (func_303())
		{
			bVar0 = false;
			if (!func_635(Global_1835011[15 /*74*/].f_1, 1) && !func_901(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_995();
				*iParam1 = func_996();
				*uParam2 = func_997();
				return 1;
			}
			else
			{
				*uParam0 = func_998();
				*iParam1 = func_999();
				*uParam2 = func_1000();
				return 1;
			}
		}
		else if (func_677())
		{
			if (!func_635(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_1001();
				*iParam1 = func_1002();
				*uParam2 = func_1003();
				return 1;
			}
			else
			{
				*uParam0 = func_1004();
				*iParam1 = func_1005();
				*uParam2 = func_1006();
				return 1;
			}
		}
	}
	else if (func_303())
	{
		*uParam0 = func_1007();
		*iParam1 = func_1008();
		*uParam2 = func_1009();
		return 1;
	}
	else if (func_677())
	{
		*uParam0 = func_1010();
		*iParam1 = func_1011();
		*uParam2 = func_1012();
		return 1;
	}
	return 0;
}

void func_865(int iParam0, var uParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = uParam1;
}

void func_866(int iParam0, var uParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = uParam1;
}

void func_867(int iParam0, var uParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = uParam1;
}

void func_868(int iParam0, int iParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

void func_869(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_630(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_864(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_1013(iParam1);
	iVar5 = func_80(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(iVar5, iVar7);
}

void func_870(int iParam0, int iParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 || iParam1);
}

bool func_871(int iParam0, int iParam1)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 && iParam1) != 0;
}

bool func_872(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_989(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1014(Var0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_469(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_873(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -1591664384;
	if (!func_989(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1014(Var0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_469(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_874(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_1015(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1016() };
	*uParam1 = func_1014(Var0, iParam0, 0);
	if (!func_469(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_875(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_876(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1017(iParam0, *uParam1);
	func_1017(iParam0, uParam1->f_1);
}

void func_877(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_878(int iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	func_1017(iParam0, *uParam1);
	func_1017(iParam0, uParam1->f_1);
	func_1017(iParam0, uParam1->f_2);
	func_1017(iParam0, uParam1->f_3);
	func_1017(iParam0, uParam1->f_4);
	func_1017(iParam0, uParam1->f_5);
}

int func_879(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_880(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_881(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_882(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_883(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_982(iVar0);
}

char* func_884(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("CANOE"):
			return "CANOE";
		case joaat("WAGON02X"):
			return "WAGON02X";
		case joaat("WAGON04X"):
			return "WAGON04X";
		case joaat("WAGON05X"):
			return "WAGON05X";
		case joaat("CHUCKWAGON000X"):
			return "CHUCKWAGON000X";
		case joaat("WAGONCIRCUS02X"):
			return "WAGONCIRCUS02X";
		case joaat("COACH2"):
			return "COACH2";
		case joaat("PRIVATECOALCAR01X"):
			return "PRIVATECOALCAR01X";
		case joaat("NORTHPASSENGER01X"):
			return "NORTHPASSENGER01X";
		case joaat("PRIVATESTEAMER01X"):
			return "PRIVATESTEAMER01X";
		case joaat("PRIVATEDINING01X"):
			return "PRIVATEDINING01X";
		case joaat("UTILLIWAG"):
			return "UTILLIWAG";
		case joaat("SKIFF"):
			return "SKIFF";
		case joaat("HANDCART"):
			return "HANDCART";
		case joaat("ROWBOATSWAMP"):
			return "ROWBOATSWAMP";
		case joaat("ROWBOATSWAMP02"):
			return "ROWBOATSWAMP02";
	}
	return "";
}

int func_885()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_886(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_887(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1018(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_885())
	{
		return -1;
	}
	iVar0 = func_886(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_924(iVar1, 0);
	func_1019(iVar1, 0);
	func_1020(iVar1, 0);
	func_1021(iVar1, 0);
	func_1022(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1023(iVar1, iParam4);
	}
	return iVar1;
}

int func_888(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_889(int iParam0)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return func_1024(func_436(iParam0));
}

void func_890(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_437(iParam0);
	*uParam1 = func_438(iParam0);
	*uParam2 = func_1024(iParam0);
}

bool func_891(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_892(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!bParam1 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!VOLUME::_0xF6A8A652A6B186CD(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!VOLUME::_0xF6A8A652A6B186CD(iVar0) || iVar0 == iParam0)
		{
			Global_1911670[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_893(int iParam0)
{
	return func_455(iParam0, 2);
}

int func_894(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_503(iVar0);
}

bool func_895(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_896(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_502(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1025((398 + iVar28), 1);
			if (func_706(iParam0, &Var0, iVar5, 0))
			{
				if (func_707(iParam0, &Var6, iVar5))
				{
					Var29 = { func_511(iParam0, Var0, iVar5, 0) };
					func_1026(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_1027(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_1028(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_1029(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_897(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_898(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_899(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1030(iParam1, 128);
	if (func_1031("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1032(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_487(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1030(iParam1, 512) && func_902(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_839(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_1030(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_1030(iParam1, 4))) && (!func_839(Var4.f_4) || func_1030(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_1030(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_1030(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_1033(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_1030(iParam1, 512) && !func_1030(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_899(uParam0, iParam1, iParam2);
	}
	else if (func_1030(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

struct<4> func_900()
{
	struct<4> Var0;

	return Var0;
}

bool func_901(int iParam0)
{
	if (!func_1034(iParam0))
	{
		return false;
	}
	return func_1035(iParam0);
}

bool func_902(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_513(0);
	*uParam1 = { func_511(iParam0, func_704(0), iParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

void func_903(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_1036(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1036(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1037(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Var4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var4[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_904(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1038(uParam0, 1))
	{
		func_1039(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_905(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_504(iParam0, 1) /*3*/] != Global_1946804.f_57[func_504(iParam0, 1) /*11*/];
}

void func_906(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = -1539589426;
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_716(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_716(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_716(iVar2, iVar0);
		}
	}
}

bool func_907(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

int func_908(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1040();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_909(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_910(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

int func_911(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_504(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_491(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3));
	return iVar0;
}

int func_912(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_913(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_271() == -1)
	{
		func_1041(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1042(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_914(int iParam0, int iParam1)
{
	if (func_271() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

int func_915(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return 2119049229;
		case 26:
			return 1352942778 /* GXTEntry: "The Rebel" */;
		case 27:
			return 1964379549 /* GXTEntry: "The Innocent" */;
		case 28:
			return 1201189539 /* GXTEntry: "The Pursuer" */;
		case 21:
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
		case 23:
			return -291256376;
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555 /* GXTEntry: "The Homesteader" */;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return -1611873049 /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return -361635024 /* GXTEntry: "The Cowboy" */;
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return -409616653 /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

void func_916(int iParam0, bool bParam1, int iParam2)
{
	func_1043(&(Global_1946804.f_1378), iParam0);
	func_1044(2, iParam0, 6);
	if (bParam1)
	{
		func_917(0, 1);
	}
}

void func_917(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1045(0);
	}
	if (bParam0)
	{
		func_489(8);
		func_489(512);
	}
	else
	{
		func_489(8);
		func_489(16);
	}
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_919(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_920(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_921()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_923(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_924(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1046(iParam0);
	}
	else
	{
		func_1047(iParam0, iParam1);
	}
	func_1048();
}

bool func_925(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1049(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_926(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	switch (func_191(iParam0))
	{
		case 1:
			switch (func_192(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_192(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_927(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_513(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_470(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1051(func_1050(iParam0), 6);
}

void func_928(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_513(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_470(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1052(func_1050(iParam0), 6);
}

int func_929(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_930(int iParam0)
{
	struct<5> Var0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_1053(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_931(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_932(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1054(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_933(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1055(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_934(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_536(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_935(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_936(var uParam0)
{
	int iVar0;
	struct<11> Var1;

	Var1.f_10 = joaat("WEAPON_UNARMED");
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			MISC::_COPY_MEMORY(&(uParam0->f_3[iVar0 /*13*/]), &Var1, 13);
		}
		iVar0++;
	}
}

int func_937(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_938(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3[iVar0 /*13*/].f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && MISC::ARE_STRINGS_EQUAL(uParam0->f_3[iVar0 /*13*/].f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_939(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_940(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

int func_941(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_1056(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

char* func_942(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_764(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_764(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

float func_943()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1057())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1058(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1058(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_1058(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(3, fVar9, fVar9 > 100f);
	return func_1066(fVar7, -100f, 100f);
}

float func_944()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1057())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1058(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1058(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_1058(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(2, fVar9, fVar9 > 100f);
	return func_1066(fVar7, -100f, 100f);
}

float func_945()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;

	if (func_1057())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1058(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1067())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1068())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1058(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1059();
	fVar2 = func_1060();
	fVar3 = func_1061();
	fVar4 = func_1062();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1063()));
	fVar7 = (func_1058(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1064(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1065(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1058(0);
	}
	return func_1066(fVar7, -100f, 100f);
}

var func_946(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_947(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

void func_948(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1069(iParam1);
	}
}

float func_949(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_241(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_586(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_951(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_1070(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_952(int iParam0)
{
	int iVar0;

	if (!func_529(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_953(int iParam0, int iParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

void func_954(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1072(func_1071(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_303())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_677();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_955(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_1072(func_1071(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_303())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_677())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_956(int iParam0)
{
	iParam0 = func_221(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

void func_957(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_958(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

void func_959(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_960(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

bool func_961()
{
	return func_1073();
}

int func_962()
{
	return func_1074();
}

float func_963(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_964(var uParam0, int iParam1)
{
	var uVar0;

	if (func_812())
	{
		return true;
	}
	if (func_468(&uVar0))
	{
		return true;
	}
	if ((func_487(func_840(Global_35, 0, 0, 0)) && !func_339(&(uParam0->f_1016[iParam1 /*41*/]), 16)) && !func_339(&(uParam0->f_1016[iParam1 /*41*/]), 64))
	{
		return true;
	}
	return false;
}

void func_965(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1075(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_966(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

bool func_967(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_968(int iParam0)
{
	int iVar0;

	if (!func_81(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_969(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_63(uParam0, 64) && func_355(uParam0) != 0)
	{
		return;
	}
	if (!bParam1)
	{
		iVar0 = func_840(Global_35, 0, 0, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
			{
				WEAPON::_DROP_CURRENT_PED_WEAPON(Global_35, true, false, true, false);
				func_364(uParam0, 256);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
		}
		iVar0 = func_840(Global_35, 0, 1, 0);
		if (WEAPON::IS_WEAPON_VALID(iVar0))
		{
			if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
			{
				WEAPON::_DROP_CURRENT_PED_WEAPON(Global_35, true, true, true, false);
				func_364(uParam0, 256);
			}
		}
	}
	else
	{
		func_1076(0);
		func_1076(1);
	}
}

void func_970(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 312, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 56, false);
	}
	func_603(uParam0, 4);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	if (PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x64FF4BF9AF59E139(PLAYER::GET_PLAYER_INDEX(), 1);
	}
	if ((func_355(uParam0) == 0 && uParam0->f_1684 >= 0) && !func_339(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		func_553(uParam0, 64);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 255, false);
	func_1077(0);
	if (func_234())
	{
		func_235(0);
	}
}

void func_971(vector3 vParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 250;
	if (func_487(func_486(Global_35, 0, 1, 0)) || func_487(func_486(Global_35, 1, 1, 0)))
	{
		iVar0 = 2000;
	}
	fVar1 = ENTITY::GET_ENTITY_HEADING(Global_35);
	if (!func_90(vParam0))
	{
		fVar1 = func_485(Global_36, vParam0, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, false, true);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, iVar0, fVar1, true, true);
	}
}

void func_972(var uParam0, int iParam1, var uParam2, float fParam3)
{
	if (func_629(&(uParam0->f_475[iParam1 /*18*/]), 32))
	{
		if (func_63(uParam0, 8))
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1684 /*41*/].f_1 + func_576(Global_36 - uParam0->f_1016[uParam0->f_1684 /*41*/].f_1) };
			if (!func_554(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = func_485(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else
		{
			*uParam2 = { uParam0->f_1016[uParam0->f_1688 /*41*/].f_1 + func_576(Global_36 - uParam0->f_1016[uParam0->f_1688 /*41*/].f_1) };
			if (!func_554(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
			{
				*fParam3 = func_485(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
			}
		}
	}
	else
	{
		*uParam2 = { func_1078(uParam0) };
		if (func_63(uParam0, 8))
		{
			if (!func_554(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 2))
			{
				*fParam3 = func_485(Global_36, uParam0->f_1016[uParam0->f_1684 /*41*/].f_1, 1);
			}
			else
			{
				*fParam3 = uParam0->f_1016[uParam0->f_1684 /*41*/].f_40;
			}
		}
		else if (!func_554(&(uParam0->f_1016[uParam0->f_1688 /*41*/]), 2))
		{
			*fParam3 = func_485(Global_36, uParam0->f_1016[uParam0->f_1688 /*41*/].f_1, 1);
		}
		else
		{
			*fParam3 = uParam0->f_1016[uParam0->f_1688 /*41*/].f_40;
		}
	}
}

bool func_973(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar12;
	int iVar13;

	iVar12 = 0;
	while (iVar12 < 30)
	{
		if (((uParam0->f_475[iVar12 /*18*/].f_17 == 1 && uParam0->f_475[iVar12 /*18*/].f_2 == 9) && uParam0->f_475[iVar12 /*18*/].f_4 >= 0) && uParam0->f_475[iVar12 /*18*/] == iParam1)
		{
			iVar13 = uParam0->f_1522[uParam0->f_475[iVar12 /*18*/].f_4 /*10*/].f_8;
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar13) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar13, true, false)) && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iVar13, func_225(Global_35)))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iVar13, func_225(Global_35), &vVar0, false, 0, 2))
				{
					if (!func_90(vVar0))
					{
						return true;
					}
				}
			}
		}
		iVar12++;
	}
	return false;
}

void func_974(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, var uParam7)
{
	var uVar0;
	var uVar7;
	int iVar14;
	float fVar15;

	func_1079(&uVar0, 0f, Global_36 - Vector(1f, 0f, 0f), (-2f * BUILTIN::SIN(ENTITY::GET_ENTITY_HEADING(Global_35))), (2f * BUILTIN::COS(ENTITY::GET_ENTITY_HEADING(Global_35))), 0f);
	func_1079(&uVar7, 1f, vParam3, (-2f * BUILTIN::SIN(fParam6)), (2f * BUILTIN::COS(fParam6)), 0f);
	if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) == MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_13))
	{
		if (MISC::ABSF(uParam0->f_1016[iParam1 /*41*/].f_12) >= 90f)
		{
			fVar15 = 180f;
		}
		else
		{
			fVar15 = 90f;
		}
	}
	else
	{
		fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 - uParam0->f_1016[iParam1 /*41*/].f_13);
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
		fVar15 = (fVar15 / 2f);
		if (uParam0->f_1016[iParam1 /*41*/].f_12 < uParam0->f_1016[iParam1 /*41*/].f_13)
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_12 + MISC::ABSF(fVar15));
		}
		else
		{
			fVar15 = (uParam0->f_1016[iParam1 /*41*/].f_13 + MISC::ABSF(fVar15));
		}
		if (fVar15 >= 180f)
		{
			fVar15 = (fVar15 - 360f);
		}
		else if (fVar15 <= -180f)
		{
			fVar15 = (fVar15 + 360f);
		}
	}
	*uParam7 = { uParam0->f_1016[iParam1 /*41*/].f_1 + Vector(0f, (BUILTIN::COS(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f)), (BUILTIN::SIN(fVar15) * (uParam0->f_1016[iParam1 /*41*/].f_11 / 2f))) };
	iVar14 = 0;
	while (iVar14 < 5)
	{
		*(uParam2[iVar14 /*3*/]) = { func_1080(Global_36, *uParam7, vParam3, (IntToFloat(iVar14 + 1) / BUILTIN::TO_FLOAT(5))) };
		iVar14++;
	}
}

void func_975(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	vector3 vVar0;

	if (bParam2)
	{
		TASK::TASK_ACHIEVE_HEADING(0, func_485(Global_36, *(uParam3[0 /*3*/]), 1), 0);
	}
	TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
	if (func_554(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
	{
		TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40, 0);
	}
	else
	{
		vVar0 = { func_1081(uParam0, iParam1) };
		if (!func_90(vVar0))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
	}
}

void func_976(var uParam0, int iParam1, bool bParam2, vector3 vParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	float fVar5;

	vVar0 = { func_1081(uParam0, iParam1) };
	if (!func_90(vVar0))
	{
		if (bParam2)
		{
			TASK::TASK_ACHIEVE_HEADING(0, func_485(Global_36, vParam3, 1), 0);
		}
		fVar3 = func_485(vParam3, vVar0, 1);
		if (func_554(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar3 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		if (func_629(&(uParam0->f_475[iParam1 /*18*/]), 256))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam3, 1f, 20000, fVar3, 1056964608 /* Float: 0.5f */, 0);
		}
		else
		{
			iVar4 = 4;
			iVar4 |= 4194304;
			fVar3 = (fVar3 % 360f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, iVar4, fVar3);
		}
		if (!func_554(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 4) && !func_554(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
		}
		else
		{
			TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
			TASK::TASK_STAND_STILL(0, -1);
		}
	}
	else
	{
		fVar5 = 40000f;
		if (func_554(&(uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/]), 2))
		{
			fVar5 = uParam0->f_1016[uParam0->f_475[iParam1 /*18*/] /*41*/].f_40;
		}
		fVar5 = (fVar5 % 360f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam3, 1f, 20000, 0.25f, 5, fVar5);
	}
}

bool func_977()
{
	return Global_1946804.f_2792;
}

bool func_978(int iParam0)
{
	if (func_1073())
	{
		return false;
	}
	if (!func_469(iParam0, 0))
	{
		return false;
	}
	if (!func_1082(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_979(int iParam0)
{
	return func_1083(iParam0);
}

int func_980(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1084(iParam0);
	if (func_712(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_468(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_1085();
			}
			else
			{
				iVar0 = func_1086();
			}
		}
		else if (func_287(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_1087();
		}
		else
		{
			iVar0 = func_1088();
		}
	}
	else if (func_693(&iVar2))
	{
		if (func_712(iVar2, -1303648999))
		{
			iVar0 = func_1085();
		}
		else
		{
			iVar0 = func_1086();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_1087();
	}
	else
	{
		iVar0 = func_1088();
	}
	if (iVar0 != 0)
	{
		Global_1946804.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

char* func_981(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "leadinData/zones/zone(%i)";
		case 1:
			return ":x1";
		case 2:
			return ":y1";
		case 3:
			return ":z1";
		case 4:
			return ":x2";
		case 5:
			return ":y2";
		case 6:
			return ":z2";
		case 7:
			return ":edgex";
		case 8:
			return ":edgey";
		case 9:
			return ":edgez";
		case 10:
			return ":xhit";
		case 11:
			return ":yhit";
		case 12:
			return ":zhit";
		case 13:
			return ":height";
		case 14:
			return ":trig1";
		case 15:
			return ":trig2";
		case 16:
			return ":areaType";
		case 17:
			return ":moveBlend";
		case 18:
			return ":animBlend";
		case 19:
			return ":fCamZoom";
		case 20:
			return ":fDismount";
		case 21:
			return ":tlDialogueFile";
		case 22:
			return ":tlDialogueLabel";
		case 23:
			return ":iDialogueDelay";
		case 24:
			return ":bQuickStop";
		case 25:
			return ":nomount";
		case 26:
			return ":bAllowClimb";
		case 27:
			return ":bAllowWeapon";
		case 28:
			return ":bAllowCarry";
		case 29:
			return ":usevehicle";
		case 30:
			return ":bSwapWeapon";
		case 31:
			return ":fFixupBuffer";
		case 32:
			return ":bAllowBandana";
		case 33:
			return ":bPickupCarriable";
		case 34:
			return ":bAllowCrouch";
		case 35:
			return ":playlist";
		case 36:
			return ":bPlayerHasControl";
		case 37:
			return ":bStopToHolster";
		case 38:
			return ":bFixupPlayerEarly";
		case 39:
			return ":walkStopOptions";
		case 40:
			return ":fWalkStopHeading";
		case 41:
			return ":bAllowLasso";
		case 42:
			return ":bNoLetterbox";
		case 43:
			return ":index";
		case 44:
			return ":tele";
		case 45:
			return "leadinData/scenes/scene(%i)";
		case 46:
			return ":sceneName";
		case 47:
			return ":sceneIndex";
		case 48:
			return ":sceneRel";
		case 49:
			return ":sceneFoot";
		case 50:
			return "leadinData/entities/entity(%i)";
		case 51:
			return ":model";
		case 52:
			return ":tlVoiceID";
		case 53:
			return ":fVisible";
		case 54:
			return ":weapon";
		case 55:
			return ":forceinhand";
		case 56:
			return ":bDeleteDraftAnimals";
		case 57:
			return "leadinData/behaviours/behaviour(%i)";
		case 58:
			return ":zone";
		case 59:
			return ":when";
		case 60:
			return ":what";
		case 61:
			return ":who";
		case 62:
			return ":syncType";
		case 63:
			return ":loop";
		case 64:
			return ":pause";
		case 65:
			return ":master";
		case 66:
			return ":bezier";
		case 67:
			return ":bezheading";
		case 68:
			return ":fVisible";
		case 69:
			return ":useradoffset";
		case 70:
			return ":radoffset";
		case 71:
			return ":returnlook";
		case 72:
			return ":lookatwho";
		case 73:
			return ":behaviourtype";
		case 74:
			return ":lookatplayer";
		case 75:
			return ":animscene";
		case 76:
			return ":nonavmesh";
		case 77:
			return ":phaseplayerend";
		case 78:
			return ":lookblendin";
		case 79:
			return ":lookblendout";
		case 80:
			return ":foliagemod";
		case 81:
			return ":disableinitloop";
		case 82:
			return "leadinData/cutscenes/cutscene(%i)";
		case 83:
			return ":cutName";
		case 84:
			return ":cutPlaylist";
		case 85:
			return "leadinData/cameras/camera(%i)";
		case 86:
			return ":index";
		case 87:
			return ":bDisabled";
		case 88:
			return ":bUseRightCam";
		case 89:
			return ":bUseLeftCam";
		case 90:
			return ":bUseCenterCam";
		case 91:
			return ":bUseNewCam";
		case 92:
			return ":bFocusOnEntity";
		case 96:
			return ":sCameraDictionaryName";
		case 97:
			return ":sCameraRequestName";
		case 95:
			return ":iNewCamLookAt";
		case 93:
			return ":fNewCamFocusOffsetHorz";
		case 94:
			return ":fNewCamFocusOffsetVert";
		case 98:
			return "leadinData/prepzones/prepzone(%i)";
		case 99:
			return ":vOrigin";
		case 100:
			return ":vRotation";
		case 101:
			return ":vScale";
		case 102:
			return ":eType";
	}
	return "";
}

char* func_982(int iParam0)
{
	switch (iParam0)
	{
		case joaat("P_CS_LEDGER01X"):
			return "P_CS_LEDGER01X";
		case joaat("P_CS_ROPE01X"):
			return "P_CS_ROPE01X";
		case joaat("P_DOOR01X"):
			return "P_DOOR01X";
		case joaat("P_DOOR03X"):
			return "P_DOOR03X";
		case joaat("P_DOOR12X"):
			return "p_door12x";
		case joaat("P_DOOR13X"):
			return "P_DOOR13X";
		case joaat("P_DOOR45X"):
			return "p_door45x";
		case joaat("P_CHAIRVICTORIAN01X"):
			return "p_chairvictorian01x";
		case joaat("P_CRATE03X"):
			return "p_crate03x";
		case joaat("P_CS_JUG01X"):
			return "p_cs_jug01x";
		case joaat("P_CS_WAGON02X"):
			return "p_cs_wagon02x";
		case joaat("P_DOOR37X"):
			return "P_DOOR37X";
		case joaat("P_DOOR_VAL_GENSTORE"):
			return "p_door_val_genstore";
		case joaat("P_DOORSTRAWBERRY01X"):
			return "p_doorstrawberry01x";
		case joaat("P_DOORFRENCH01L"):
			return "p_doorfrench01l";
		case joaat("P_DOORFRENCH01R"):
			return "p_doorfrench01r";
		case joaat("P_DOORMANSIONGATE01X"):
			return "p_doormansiongate01x";
		case joaat("P_DOORNBD39X"):
			return "p_doornbd39x";
		case joaat("P_DOORSALOON02X"):
			return "p_doorsaloon02x";
		case joaat("P_DOORVH_SALOON_L"):
			return "P_DOORVH_SALOON_L";
		case joaat("P_DOORVH_SALOON_R"):
			return "P_DOORVH_SALOON_R";
		case joaat("P_CIGARLIT01X"):
			return "p_cigarlit01x";
		case joaat("P_PEBBLE01X"):
			return "p_pebble01x";
		case joaat("P_CS_ROPE03X"):
			return "p_cs_rope03x";
		case joaat("P_CARDS01X"):
			return "P_CARDS01X";
		case joaat("P_CS_POKERHAND01X"):
			return "P_CS_POKERHAND01X";
		case joaat("P_CS_POKERHAND02X"):
			return "P_CS_POKERHAND02X";
		case joaat("P_CS_HOLDEMHAND01X"):
			return "P_CS_HOLDEMHAND01X";
		case joaat("P_CS_HOLDEMHAND02X"):
			return "P_CS_HOLDEMHAND02X";
		case joaat("P_CS_BUCKET01X"):
			return "P_CS_BUCKET01X";
		case joaat("P_CS_SYRINGE01X"):
			return "p_cs_syringe01x";
		case joaat("P_BOTTLEJD01X"):
			return "p_bottleJD01x";
		case joaat("P_RAG02X"):
			return "p_rag02x";
		case joaat("P_MAGNETO02X"):
			return "p_magneto02x";
		case joaat("P_MAGNETO01X"):
			return "p_magneto01x";
		case joaat("P_CS_WANTEDALIVE01X"):
			return "p_cs_wantedalive01x";
		case joaat("P_CS_RCRIDETHELIGHTNING"):
			return "P_CS_RCRIDETHELIGHTNING";
		case joaat("P_PEN01X"):
			return "p_pen01x";
		case joaat("P_CS_LETTER01A_X"):
			return "p_cs_letter01a_x";
		case joaat("P_CS_ELECTRICCHAIR01X"):
			return "p_cs_electricchair01x";
		case joaat("P_CS_GENERATOR01X"):
			return "p_cs_generator01x";
		case joaat("P_CS_ELECTRICHELMET01X"):
			return "p_cs_electricHelmet01x";
		case joaat("P_CS_GAG01X"):
			return "p_cs_gag01x";
		case joaat("P_DOOR_SHA_MAN01X"):
			return "p_door_sha_man01x";
		case joaat("P_STOOL01X"):
			return "p_stool01x";
		case joaat("P_STOOL02X"):
			return "p_stool02x";
		case joaat("P_JUGGLINGBALL01X"):
			return "p_jugglingball01x";
		case joaat("P_CHAIR02X"):
			return "p_chair02x";
		case joaat("P_CHAIR04X"):
			return "p_chair04x";
		case joaat("P_CRATE15X"):
			return "p_crate15x";
		case joaat("P_CLEAVER01X"):
			return "p_cleaver01x";
		case joaat("P_BOTTLE003X"):
			return "p_bottle003x";
		case joaat("P_CS_BOOK02X"):
			return "p_cs_book02x";
		case joaat("P_STICKYDYMT_SINGLE"):
			return "p_stickydymt_single";
		case joaat("P_CS_FUSEDYNAMITE01X"):
			return "p_cs_fusedynamite01x";
		case joaat("P_DYNAMITE01X"):
			return "p_dynamite01x";
		case joaat("P_CS_FUSESPOOL01X"):
			return "p_cs_fusespool01x";
		case joaat("P_CS_DETONATOR01X"):
			return "p_cs_detonator01x";
		case joaat("P_CS_BEDROLLCLSD01X"):
			return "p_cs_bedrollclsd01x";
		case joaat("P_CIGARETTE_CS01X"):
			return "P_CIGARETTE_CS01X";
		case joaat("P_MATCHES01X"):
			return "P_MATCHES01X";
		case joaat("P_MATCHSTICK01X"):
			return "P_MATCHSTICK01X";
		case joaat("P_WOODENCHAIR01X"):
			return "P_WOODENCHAIR01X";
		case joaat("P_CHAIR_CRATE02X"):
			return "P_CHAIR_CRATE02X";
		case joaat("P_KNITTINGNEEDLE01X"):
			return "p_knittingneedle01x";
		case joaat("P_KNITTINGSQUARE01X"):
			return "p_knittingsquare01x";
		case joaat("P_CS_RABBITMEAT01X"):
			return "p_cs_rabbitMeat01x";
		case joaat("P_CS_RABBITMEAT02X"):
			return "p_cs_rabbitMeat02x";
		case joaat("P_BOTTLE03X"):
			return "p_bottle03x";
		case joaat("P_CS_BILLSTACK01X"):
			return "p_cs_billstack01x";
		case joaat("P_CS_BILLSINGLE01X"):
			return "p_cs_billSingle01x";
		case joaat("P_BINOCULARS01X"):
			return "p_binoculars01x";
		case joaat("P_DOORRHOSHERIFF02X"):
			return "p_doorrhosheriff02x";
		case joaat("P_BARSTOOL01X"):
			return "P_BARSTOOL01X";
		case joaat("P_CS_SHOTGLASS01X"):
			return "p_cs_shotglass01x";
		case joaat("P_LAMP18X"):
			return "p_lamp18x";
		case joaat("P_CLOCK06X"):
			return "p_clock06x";
		case joaat("P_BOTTLE02X"):
			return "p_bottle02x";
		case joaat("P_CS_LOOTSACK01X"):
			return "p_cs_lootSack01x";
		case joaat("P_WINEBOX01X"):
			return "p_wineBox01x";
		case joaat("P_STRONGBOX01X"):
			return "p_strongBox01x";
		case joaat("P_CLOCKTABLE02X"):
			return "P_CLOCKTABLE02X";
		case joaat("P_GEN_STATUE03B"):
			return "p_gen_statue03b";
		case joaat("P_STOOLWINTER01X"):
			return "P_STOOLWINTER01X";
		case joaat("P_CS_BARRAG01X"):
			return "P_CS_BARRAG01X";
		case joaat("P_PLATE01X"):
			return "P_PLATE01X";
		case joaat("P_KNIFE01X"):
			return "P_KNIFE01X";
		case joaat("P_KNIFE02X"):
			return "P_KNIFE02X";
		case joaat("P_CS_CATFISH_WHOLE01X"):
			return "P_CS_CATFISH_WHOLE01X";
		case joaat("P_CS_CATFISH_WHOLE01BX"):
			return "P_CS_CATFISH_WHOLE01BX";
		case joaat("P_WOODWHITTLE01X"):
			return "P_WOODWHITTLE01X";
		case joaat("P_STICKFIREPOKER01X"):
			return "P_STICKFIREPOKER01X";
		case joaat("P_CS_WOODPILE01X"):
			return "P_CS_WOODPILE01X";
		case joaat("P_FORK01X"):
			return "P_FORK01X";
		case joaat("P_KNIFE04X"):
			return "P_KNIFE04X";
		case joaat("P_KNIFE03X"):
			return "p_knife03x";
		case joaat("P_CS_BOTTLESLIM01X"):
			return "P_CS_BOTTLESLIM01X";
		case joaat("P_CS_BLANKET01X"):
			return "P_CS_BLANKET01X";
		case joaat("P_BEDROLLCLOSED01X"):
			return "P_BEDROLLCLOSED01X";
		case joaat("P_CS_KINDLING01X"):
			return "P_CS_KINDLING01X";
		case joaat("P_CIGARTHIN01X"):
			return "P_CIGARTHIN01X";
		case joaat("P_DOOR_WGLASS01X"):
			return "p_door_wglass01x";
		case joaat("P_BROOM02X"):
			return "p_broom02x";
		case joaat("P_AMB_CLIPBOARD_01"):
			return "P_AMB_CLIPBOARD_01";
		case joaat("P_CHAIR07X"):
			return "P_CHAIR07X";
		case joaat("P_CS_CRATETNT01X"):
			return "p_cs_cratetnt01x";
		case joaat("P_CS_FLOURBAG01X"):
			return "p_cs_flourbag01x";
		case joaat("P_CS_SUPPLIES01X"):
			return "p_cs_supplies01x";
		case joaat("P_CS_SUPPLIES02X"):
			return "p_cs_supplies02x";
		case joaat("P_CS_SUPPLIES03X"):
			return "p_cs_supplies03x";
		case joaat("P_DOOR04X"):
			return "p_door04x";
		case joaat("P_DOOR11X"):
			return "p_door11x";
		case joaat("P_DOORRHOSALOON01_L"):
			return "p_doorrhosaloon01_l";
		case joaat("P_DOORRHOSALOON01_R"):
			return "p_doorrhosaloon01_r";
		case joaat("P_VAL_GATE2M02X"):
			return "P_VAL_GATE2M02X";
		case joaat("P_CS_STMDNKY01X"):
			return "P_CS_STMDNKY01X";
		case joaat("P_CS_HOOKPULLEY01X"):
			return "P_CS_HOOKPULLEY01X";
		case joaat("P_CHAIR_CS05X"):
			return "P_CHAIR_CS05X";
		case joaat("P_CHAIR18X"):
			return "P_CHAIR_18X";
		case joaat("P_CHAIR19X"):
			return "P_CHAIR19X";
		case joaat("P_CHAIR20X"):
			return "P_CHAIR20X";
		case joaat("P_CHAIR05X"):
			return "P_CHAIR05X";
		case joaat("P_CHAIR22X"):
			return "p_chair22x";
		case joaat("P_GLASS01X"):
			return "p_glass01x";
		case joaat("P_DININGCHAIRS01X"):
			return "P_DININGCHAIRS01X";
		case joaat("P_WINDSORCHAIR03X"):
			return "P_WINDSORCHAIR03X";
		case joaat("P_WINDSORCHAIR02X"):
			return "P_WINDSORCHAIR02X";
		case joaat("P_DOOR_VAL_JAIL02X"):
			return "p_door_val_jail02x";
		case joaat("P_CRATETNT01X"):
			return "P_CRATETNT01X";
		case joaat("P_CRATETNT02X"):
			return "P_CRATETNT02X";
		case joaat("P_MONEYSTACK01X"):
			return "P_MONEYSTACK01X";
		case joaat("P_AXE01X"):
			return "P_AXE01X";
		case joaat("P_HOE01X"):
			return "P_HOE01X";
		case joaat("P_SHOVEL01X"):
			return "P_SHOVEL01X";
		case joaat("P_SHOVEL04X"):
			return "P_SHOVEL04X";
		case joaat("P_BROOM01X"):
			return "P_BROOM01X";
		case joaat("P_PITCHFORK01X"):
			return "P_PITCHFORK01X";
		case joaat("P_SCYTHE01X"):
			return "P_SCYTHE01X";
		case joaat("P_SKIFF02X"):
			return "P_SKIFF02x";
		case joaat("P_DOOR_NBX_DOC01X_L"):
			return "p_door_nbx_doc01x_l";
		case joaat("P_DOOR_NBX_DOC01X_R"):
			return "p_door_nbx_doc01x_r";
		case joaat("P_CS_CAMERA"):
			return "p_cs_camera";
		case joaat("P_CS_CAMERATRIPOD"):
			return "p_cs_cameratripod";
		case joaat("P_CS_CAMERABAG01X"):
			return "p_cs_camerabag01x";
		case joaat("P_CAMERAFLASH01X"):
			return "p_cameraflash01x";
		case joaat("P_CS_SHUTTERRELEASE"):
			return "p_cs_shutterrelease";
		case joaat("ROWBOATSWAMP"):
			return "rowboatswamp";
		case joaat("P_CHAIR25X"):
			return "P_CHAIR25X";
		case joaat("P_DOORBRAIT01BX"):
			return "P_DOORBRAIT01BX";
		case joaat("P_CS_MAP01X"):
			return "P_CS_MAP01X";
		case joaat("P_HAMMER03X"):
			return "p_hammer03x";
		case joaat("P_CS_NAILBARREL01X"):
			return "p_cs_nailbarrel01x";
		case joaat("P_CS_BOOK04X"):
			return "p_cs_book04x";
		case joaat("P_CS_FAN01X"):
			return "p_cs_Fan01x";
		case joaat("P_CS_LEDGERSMALL01X"):
			return "p_cs_ledgerSmall01x";
		case joaat("P_CS_ENVELOPE01X"):
			return "p_cs_envelope01x";
		case joaat("P_WRAPPEDMEAT01X"):
			return "p_wrappedmeat01x";
		case joaat("P_CS_LETTER02X"):
			return "P_CS_LETTER02X";
		case joaat("P_CS_BOOK03X"):
			return "p_cs_book03x";
		case joaat("P_CS_GIFTBOX01X"):
			return "p_cs_giftBox01x";
		case joaat("P_BOILER01X"):
			return "p_boiler01x";
		case joaat("P_BOILER02X"):
			return "p_boiler02x";
		case joaat("P_MUGCOFFEE01X"):
			return "p_mugCoffee01x";
		case joaat("P_GLASSTALLBEER01X"):
			return "p_glasstallbeer01x";
		case joaat("P_PITCHER02X"):
			return "p_pitcher02x";
		case joaat("P_TRAY03X"):
			return "p_tray03x";
		case joaat("P_SIT_CHAIRWICKER01B"):
			return "p_sit_chairwicker01b";
		case joaat("S_INV_ORLEANDER01CX"):
			return "S_INV_ORLEANDER01CX";
		case joaat("S_INV_ORLEANDER01DX"):
			return "S_INV_ORLEANDER01DX";
		case joaat("P_LADLE02X"):
			return "P_LADLE02X";
		case joaat("P_CS_POT01X"):
			return "P_CS_POT01X";
		case joaat("P_CHAIRDINING03X"):
			return "P_CHAIRDINING03X";
		case joaat("P_SPOON01X"):
			return "P_SPOON01X";
		case joaat("P_BOWL03X"):
			return "P_BOWL03X";
		case joaat("P_CS_BRIDECATALOGUE01X"):
			return "P_CS_BRIDECATALOGUE01X";
		case joaat("P_JEWELRYBOX02BX"):
			return "P_JEWELRYBOX02BX";
		case joaat("P_CS_LETTERFOLDED01X"):
			return "P_CS_LETTERFOLDED01X";
		case joaat("P_CS_ARTHURHAT01X"):
			return "P_CS_ARTHURHAT01X";
		case joaat("P_OAR03X"):
			return "P_OAR03X";
		case joaat("P_DOOR_VAL_BANKVAULT"):
			return "P_DOOR_VAL_BANKVAULT";
		case joaat("P_DOOR_COMBANK01X"):
			return "P_DOOR_COMBANK01X";
		case joaat("P_CS_DONATION01X"):
			return "P_CS_DONATION01X";
		case joaat("P_DOOR_NBX_BANK03X_R"):
			return "p_door_nbx_bank03x_R";
		case joaat("P_DOOR_NBX_BANK03X_L"):
			return "p_door_nbx_bank03x_L";
		case joaat("P_CAMP_PLATE_02X"):
			return "p_camp_plate_02x";
		case joaat("P_STEWPLATE02X"):
			return "p_stewplate02x";
		case joaat("P_CS_LOG01X"):
			return "p_cs_log01x";
		case joaat("P_NDB_HOTELPLANK01X"):
			return "p_ndb_hotelplank01x";
		case joaat("P_GLASS06X"):
			return "p_glass06x";
		case joaat("P_CS_RAG01X"):
			return "p_cs_rag01x";
		case joaat("P_INKWELL01X"):
			return "p_inkwell01x";
		case joaat("P_CIGAR02X"):
			return "p_cigar02x";
		case joaat("P_BOTTLEBEER01X"):
			return "p_bottleBeer01x";
		case joaat("P_BEERMUGGLASS01X"):
			return "p_beermugglass01x";
		case joaat("P_NUTBOWL01X"):
			return "p_nutBowl01x";
		case joaat("P_CS_SACKLARGE01X"):
			return "p_cs_sacklarge01x";
		case joaat("P_CS_DRESSBOX01X"):
			return "p_cs_dressbox01x";
		case joaat("P_BELL05X"):
			return "p_bell05x";
		case joaat("P_WOODENDESKCHAIR01X"):
			return "p_woodendeskchair01x";
		case joaat("P_CHAIR06X"):
			return "p_chair06x";
		case joaat("P_JUG01X"):
			return "p_jug01x";
		case joaat("S_INV_MEDICINE01X"):
			return "S_INV_MEDICINE01X";
		case joaat("S_INV_MEDICINE_FTY"):
			return "S_INV_MEDICINE_FTY";
		case joaat("S_INV_MILKWEED01BX"):
			return "S_INV_Milkweed01bx";
		case joaat("P_BOTTLESLIM01X"):
			return "p_bottleslim01x";
		case joaat("P_CS_JOURNAL01X"):
			return "p_cs_journal01x";
		case joaat("P_MORTARPESTLE02X"):
			return "p_mortarpestle02x";
		case joaat("S_INV_BURDOCK01DX"):
			return "s_inv_burdock01dx";
		case joaat("P_CS_ROPELEGSPLIT"):
			return "p_cs_ropeLegSplit";
		case joaat("P_CS_ROPEHANDSSPLIT"):
			return "p_cs_ropeHandsSplit";
		case joaat("P_FISHINGPOLE01X"):
			return "p_fishingpole01x";
		case joaat("P_FISHINGPOLE02X"):
			return "P_FISHINGPOLE02X";
		case joaat("P_CS_FLOWERNECKLACE"):
			return "p_cs_flowernecklace";
		case joaat("P_CS_FLOWERS01X"):
			return "P_CS_FLOWERS01X";
		case joaat("S_INV_YARROW01CX"):
			return "s_inv_yarrow01cx";
		case joaat("P_CS_FISHINGPOLEBAG01X"):
			return "P_CS_FISHINGPOLEBAG01X";
		case joaat("P_STICK02X"):
			return "P_STICK02X";
		case joaat("P_CS_SOCK01X"):
			return "P_CS_SOCK01X";
		case joaat("P_DOOR_VAL_BANK00_RX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_DOOR_VAL_BANK00_LX"):
			return "P_DOOR_VAL_BANK00_RX";
		case joaat("P_CAN10X"):
			return "p_can10x";
		case joaat("P_CS_RABBITGUT"):
			return "p_cs_rabbitgut";
		case joaat("P_CS_RABBITHEADLESS"):
			return "p_cs_rabbitheadless";
		case joaat("P_CS_RABBITFEETLESS"):
			return "p_cs_rabbitfeetless";
		case joaat("P_KETTLE03X"):
			return "p_kettle03x";
		case joaat("S_CHE_WOODBIN01X"):
			return "s_che_woodbin01x";
		case joaat("S_LOOTABLEPOORCASE"):
			return "s_lootablepoorcase";
		case joaat("P_CS_BOOKHARDCV01X"):
			return "P_CS_BOOKHARDCV01X";
		case joaat("P_LETTERBUNDLE_01X"):
			return "P_LETTERBUNDLE_01X";
		case joaat("P_LETTERENVELOPE_CS01X"):
			return "P_LETTERENVELOPE_CS01X";
		case joaat("P_PACKAGE08X"):
			return "P_PACKAGE08X";
		case joaat("P_CIGARBOX02X"):
			return "P_CIGARBOX02X";
		case joaat("P_CRUCIFIX02X"):
			return "p_crucifix02x";
		case joaat("P_BOTTLECRATE01X"):
			return "p_bottleCrate01x";
		case joaat("P_CAN05X"):
			return "p_can05x";
		case joaat("P_CS_SUITCASE04X"):
			return "p_cs_suitcase04x";
		case joaat("P_CS_BAGSTRAUSS01X"):
			return "p_cs_bagstrauss01x";
		case joaat("P_BOTTLE008X"):
			return "P_BOTTLE008X";
		case joaat("P_BOTTLE009X"):
			return "P_BOTTLE009X";
		case joaat("P_BOTTLE010X"):
			return "P_BOTTLE010X";
		case joaat("P_POCKETMIRROR01X"):
			return "p_pocketMirror01x";
		case joaat("P_CIGARETTE01X"):
			return "P_CIGARETTE01X";
		case joaat("P_TRAVELTRUNK02X"):
			return "P_TRAVELTRUNK02X";
		case joaat("P_CHAIRWHITE01X"):
			return "P_CHAIRWHITE01X";
		case joaat("P_JOURNAL_OPEN01X"):
			return "P_JOURNAL_OPEN01X";
		case joaat("P_TABLE42_CS"):
			return "p_table42_cs";
		case joaat("P_CS_NEWSPAPER_02X"):
			return "p_cs_newspaper_02x";
		case joaat("P_CS_POTATOSLICE01X"):
			return "P_CS_POTATOSLICE01X";
		case joaat("S_APLSD_LOG"):
			return "S_APLSD_LOG";
		case joaat("S_APLSD_HRSATT"):
			return "S_APLSD_HRSATT";
		case joaat("P_SPITTOON01X"):
			return "p_spittoon01x";
		case joaat("P_WOODBOWL01X"):
			return "p_woodbowl01x";
		case joaat("P_PENCIL01X"):
			return "p_pencil01x";
		case joaat("P_SPOONMID01X"):
			return "P_SPOONMID01X";
		case joaat("P_PAN01X"):
			return "P_PAN01X";
		case joaat("P_PIPE01X"):
			return "P_Pipe01x";
		case joaat("P_CS_RAILROADBOND01X"):
			return "p_cs_railroadbond01x";
		case joaat("P_SHARPENINGSTONE01X"):
			return "p_sharpeningstone01x";
		case joaat("P_TREESTUMP02X"):
			return "p_treestump02x";
		case joaat("P_PLATE17X"):
			return "p_plate17x";
		case joaat("P_CS_NEWSPAPER_01X"):
			return "p_cs_newspaper_01x";
		case joaat("P_SADIEHAT01X"):
			return "p_sadiehat01x";
		case joaat("P_DOOR_BLA_JAIL_L_01X"):
			return "p_door_bla_jail_l_01x";
		case joaat("P_DOOR_BLA_JAIL_R_01X"):
			return "p_door_bla_jail_r_01x";
		case joaat("P_MASHEDPOTATO02X"):
			return "p_mashedPotato02x";
		case joaat("P_CS_BOOKHARDCV08X"):
			return "p_cs_bookHardCv08x";
	}
	return "";
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_984(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_985()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_986(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_989(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_511(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return func_1089(Var29, 1);
}

bool func_987(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -1591664384;
	if (!func_989(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_511(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return func_1089(Var29, 1);
}

void func_988(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_989(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1090(iParam0))
	{
		return false;
	}
	iVar0 = func_990(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_702(0) };
	if (!func_1091(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1092(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_991(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_1027(bParam10))
	{
		return func_1093(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1094(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_513(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1089(Var14, 1))
		{
		}
	}
	return true;
}

bool func_992(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_1027(bParam9))
	{
		return func_1095(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_1094(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, bParam9, 1) || !func_710(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1094(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_513(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_993(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_1096(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_994(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

int func_995()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_996()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_997()
{
	return 1;
}

int func_998()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_999()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1000()
{
	return 1;
}

int func_1001()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_1002()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_1003()
{
	return 2;
}

int func_1004()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1005()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1006()
{
	return 1;
}

int func_1007()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_1008()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_1009()
{
	return 1;
}

int func_1010()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_1011()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_1012()
{
	return 1;
}

void func_1013(int iParam0)
{
	if (func_1097() < iParam0)
	{
		func_1098(iParam0);
	}
}

int func_1014(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1099(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1015(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_470(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1100(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_1016()
{
	struct<4> Var0;

	Var0 = { func_702(0) };
	return func_511(856287005, Var0, -218846335, 0);
}

void func_1017(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, false, false);
}

bool func_1018(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1019(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_1020(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_1021(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_1022(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_1023(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

int func_1024(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

int func_1025(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return -1783281882;
		case 2:
			return 1704602624;
		case 3:
			return 1214181762;
		case 4:
			return 1520605650;
		case 5:
			return 551482925;
		case 6:
			return 843929315;
		case 7:
			return 1974334822;
		case 8:
			return -1963435638;
		case 9:
			return -430578371;
		case 10:
			return -730381952;
		case 11:
			return -1500304973;
		case 12:
			return -253503777;
		case 13:
			return 1352275534;
			return 1666399168;
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -1276976212;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return 802754820;
			return joaat("SLOTID_HORSE_MANE");
			return -1886147520;
			return -1142966831;
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return 724026534;
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return 1460218602;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return -629387103;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return 2011227407;
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_1026(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1101(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1027(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_513(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1027(bool bParam0)
{
	if (func_271() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_513(bParam0));
}

int func_1028(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1102(iParam0))
	{
		return 0;
	}
	if (!func_1027(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_1029(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_1103(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_1030(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1031(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_513(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1032(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

int func_1033(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_1034(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1035(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_1036(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1037(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1038(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1039(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1040()
{
	return Global_1946804.f_1;
}

void func_1041(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1042(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1043(var uParam0, int iParam1)
{
	int iVar0;

	if (func_271() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1041(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_1042(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1044(int iParam0, int iParam1, int iParam2)
{
	if (func_271() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] = (Global_26796.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

void func_1045(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

int func_1046(int iParam0)
{
	int iVar0;

	iVar0 = func_888(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1104(iVar0);
}

int func_1047(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888.f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888.f_40501 == 0)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40501)
	{
		if (iParam0 == Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			func_1105(iVar2);
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888.f_40501 < 31)
	{
		iVar2 = Global_1058888.f_40501;
		Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		if (Global_1058888.f_40501 > 32)
		{
			Global_1058888.f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1048()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

int func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 313;
		case 1250636944:
			return 259;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 315;
		case 1306158345:
			return 202;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 332;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1051(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_1052(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_1053(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1106((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1106(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_190(Global_1898164.f_1[0 /*5*/]))
	{
		func_731(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_1054(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1107(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_1055(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1056(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_529(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_529(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

bool func_1057()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1058(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1059()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1108(13);
	iVar1 = func_1109(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1060()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1061()
{
	if (func_1110())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1062()
{
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1063()
{
	return Global_1955565.f_3;
}

void func_1064(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_942(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1065(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_942(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

float func_1066(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_1067()
{
	return func_1108(12) <= -99f;
}

bool func_1068()
{
	return func_1108(12) >= 99f;
}

void func_1069(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_1070(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_941(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

char* func_1071(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_1111(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109400.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109400.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1225639.f_21[iParam0])
	{
		return sVar0;
	}
	if (func_1111(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108178[iParam0 /*37*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108178[iParam0 /*37*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1225639.f_120[iParam0]);
}

char* func_1072(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1112(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1073()
{
	if (Global_1946804.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804.f_2791)) < 1250)
	{
		return true;
	}
	if (func_1113())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

int func_1074()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BANDANA")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_1075(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

void func_1076(bool bParam0)
{
	int iVar0;

	iVar0 = func_840(Global_35, 0, bParam0, 0);
	if (func_487(iVar0))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
		{
			WEAPON::_DROP_CURRENT_PED_WEAPON(Global_35, true, bParam0, true, false);
		}
		else if (func_839(iVar0))
		{
			if (func_487(func_840(Global_35, 0, 7, 0)) || func_487(func_840(Global_35, 0, 9, 0)))
			{
				if (func_487(func_840(Global_35, 0, 8, 0)))
				{
					func_1114(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 7, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) && iVar0 != joaat("WEAPON_FISHINGROD"))
		{
			if (func_487(func_840(Global_35, 0, 7, 0)) || func_487(func_840(Global_35, 0, 9, 0)))
			{
				if (func_487(func_840(Global_35, 0, 10, 0)))
				{
					func_1114(iVar0);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 10, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (bParam0 == 0)
			{
				if (!func_487(func_840(Global_35, 0, 2, 0)))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
				}
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 3, false, false);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, bParam0, false, false);
	}
}

void func_1077(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_1078(var uParam0)
{
	if (func_63(uParam0, 8))
	{
		return uParam0->f_1016[uParam0->f_1684 /*41*/].f_7;
	}
	if (uParam0->f_1688 >= 0)
	{
		return uParam0->f_1016[uParam0->f_1688 /*41*/].f_7;
	}
	return 0f, 0f, 0f;
}

void func_1079(var uParam0, float fParam1, vector3 vParam2, vector3 vParam5)
{
	*uParam0 = fParam1;
	uParam0->f_4 = { vParam2 };
	uParam0->f_1 = { vParam5 };
}

Vector3 func_1080(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_1115(vParam0, vParam3, fParam9) };
	vVar3 = { func_1115(vParam3, vParam6, fParam9) };
	return func_1115(vVar0, vVar3, fParam9);
}

Vector3 func_1081(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_475[iParam1 /*18*/].f_3 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_475[iParam1 /*18*/].f_3 == uParam0->f_3[iVar0 /*13*/].f_3)
			{
				if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_3[iVar0 /*13*/].f_2) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[iVar0 /*13*/].f_2) != Global_35)
				{
					return ENTITY::GET_ENTITY_COORDS(uParam0->f_3[iVar0 /*13*/].f_2, true, false);
				}
			}
			iVar0++;
		}
	}
	return 0f, 0f, 0f;
}

bool func_1082(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_469(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_703(iParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == joaat("AMMO"))
	{
		if (!func_1116(iParam0, 1))
		{
			return false;
		}
	}
	return func_1117(iParam0, 0, bParam2) >= iParam1;
}

int func_1083(int iParam0)
{
	int iVar0;

	iVar0 = func_470(iParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

int func_1084(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_693(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1085()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_1118())
	{
		case 0:
			iVar0 = joaat("MASK_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1086()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_1118())
	{
		case 0:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_OFF_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_OFF_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1087()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_1118())
	{
		case 0:
			iVar0 = joaat("MASK_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("MASK_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("MASK_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_1088()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_1118())
	{
		case 0:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND");
			break;
		case 3:
			iVar0 = joaat("BANDANA_ON_LEFT_HAND_RIFLE");
			break;
		case 1:
			iVar0 = joaat("BANDANA_ON_RIGHT_HAND");
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_1089(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_1027(0))
	{
		return func_1119(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_513(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1090(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_990(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_702(0) };
	if (func_1120(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

bool func_1091(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_513(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1092(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_513(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_1093(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> Var0;
	int iVar14;
	int iVar15;
	struct<17> Var16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_1094(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_512(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_1121(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar33 = func_1122(1168099063, &Var16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_1094(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_1095(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<17> Var28;
	struct<17> Var45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	if (func_1094(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, 1, 0) || !func_710(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_1094(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_1121(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_1121(&Var14) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), 1168099063))
		{
			if (func_1123(iVar62, 1168099063, &Var28) && func_1123(iVar62, 1168099063, &Var45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_1124(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_1122(1168099063, &Var28, 0);
		iVar62 = func_1122(1168099063, &Var45, 0);
	}
	return iVar62;
}

bool func_1096(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

int func_1097()
{
	return Global_40.f_1095.f_3135;
}

void func_1098(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1099(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_513(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_710(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1100(int iParam0)
{
	int iVar0;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_470(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1101(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1102(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1103(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1104(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40501 < 32)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var1 };
	}
	Global_1058888.f_40501 = (Global_1058888.f_40501 - 1);
	if (Global_1058888.f_40501 < 0)
	{
		Global_1058888.f_40501 = 0;
	}
	return 1;
}

int func_1105(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888.f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 /*2*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1058888.f_40501.f_1[iParam0 /*2*/] = { Var1 };
	Global_1058888.f_40501++;
	if (Global_1058888.f_40501 > 32)
	{
		Global_1058888.f_40501 = 32;
	}
	return 1;
}

void func_1106(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

int func_1107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1125(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_1108(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_1109(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_1110()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_1111(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1126(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_1127())
	{
		return func_1126(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_1126(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_1112(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1113()
{
	int iVar0;

	iVar0 = Global_1946804.f_529[9];
	iVar0 = (iVar0 + Global_1946804.f_529[4]);
	iVar0 = (iVar0 + Global_1946804.f_529[10]);
	iVar0 = (iVar0 + Global_1946804.f_529[1]);
	iVar0 = (iVar0 + Global_1946804.f_529[2]);
	iVar0 = (iVar0 + Global_1946804.f_529[6]);
	iVar0 = (iVar0 + Global_1946804.f_529[29]);
	iVar0 = (iVar0 + Global_1946804.f_529[26]);
	iVar0 = (iVar0 + Global_1946804.f_529[18]);
	iVar0 = (iVar0 + Global_1946804.f_529[19]);
	return iVar0 > 0;
}

void func_1114(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		return;
	}
	if (Global_43891)
	{
		return;
	}
	WEAPON::_0xE9BD19F8121ADE3E(Global_35, iParam0);
}

Vector3 func_1115(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_1116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_469(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_1128(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1031("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1032(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_487(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_1033(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1033(iVar1);
	}
	return false;
}

int func_1117(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_703(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_1128(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_1129(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_513(bParam2), iParam0, 0);
	return iVar2;
}

int func_1118()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("WEAPON_UNARMED"))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_839(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_839(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_1119(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<29> Var16;
	struct<18> Var45;
	struct<17> Var63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_710(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_703(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1130(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1131(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_1132(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1133(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1121(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1122(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1120(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_513(bParam2), uParam0, iParam1);
}

struct<17> func_1121(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

int func_1122(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1123(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1124(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1124(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1124(iVar0, 1);
		return iVar0;
	}
	return -1;
}

bool func_1123(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1124(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1134(iParam0, iParam1);
}

int func_1125(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
		case joaat("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case joaat("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case joaat("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case joaat("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case joaat("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case joaat("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case joaat("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case joaat("CSTAG_PLAYER_DIRTY"):
			return 339;
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case joaat("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case joaat("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case joaat("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case joaat("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case joaat("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case joaat("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case joaat("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case joaat("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case joaat("CSTAG_PLAYER_AWAY"):
			return 340;
		case joaat("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case joaat("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case joaat("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case joaat("CSTAG_FLOW_REV1_POST"):
			return 390;
		case joaat("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case joaat("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case joaat("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case joaat("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case joaat("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case joaat("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case joaat("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case joaat("CSTAG_FLOW_MR52_POST"):
			return 475;
		case joaat("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case joaat("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case joaat("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case joaat("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case joaat("CSTAG_SDB_BASE"):
			return 5;
		case joaat("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case joaat("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case joaat("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case joaat("CSTAG_FLOW_TRN2_POST"):
			return 465;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1126(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1127()
{
	return Global_1109400.f_245;
}

int func_1128(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_469(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_703(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_712(iParam0, 1399091007))
	{
		func_1135(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1129(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1136(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1137(&Var0, func_704(0));
	}
	if (!func_1138(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_1033(iVar14);
	return iVar15;
}

struct<29> func_1130(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_513(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1121(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1131(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1139(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1124(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1124(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1124(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_1132(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_513(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1121(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1133(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1140(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1124(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1124(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1124(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1134(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1224227 < 20)
	{
		Global_1224227++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224227.f_1[iVar0 /*9*/] = { Global_1224227.f_1[iVar0 + 1 /*9*/] };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Global_1224227.f_1[(Global_1224227 - 1) /*9*/] = { Var1 };
}

void func_1135(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

struct<14> func_1136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

void func_1137(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1138(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_513(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1139(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_1140(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

