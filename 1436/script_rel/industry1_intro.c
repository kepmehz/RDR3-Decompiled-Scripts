#region Local Variables
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
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	char* sLocal_18 = NULL;
	char* sLocal_19 = NULL;
	bool bLocal_20 = false;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	bool bLocal_23 = false;
	bool bLocal_24 = false;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	struct<17> /*136*/ sLocal_31[1];
	int iLocal_49 = 0;
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = -1;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = -1;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 1073741824;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 1;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 1106247680;
	var uLocal_76 = 1067450368;
	var uLocal_77 = 0;
	var uLocal_78 = 1092616192;
	var uLocal_79 = 1112014848;
	var uLocal_80 = 1106247680;
	var uLocal_81 = 1101529088;
	var uLocal_82 = 1101004800;
	var uLocal_83 = 1084227584;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<2907> /*23256*/ sLocal_116 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion

void main()
{
	bool bVar0;
	struct<4> /*32*/ sVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_16 = "pl_IDLE";
	sLocal_17 = "pl_leadin_f";
	sLocal_18 = "pl_leadin_l";
	sLocal_19 = "pl_leadin_r";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (func_1(Local_116))
		{
			func_2(&Global_1935630, 32768);
		}
		func_3(&Local_116, 1);
	}
	func_4(&uScriptParam_0, &Local_116);
	while (!func_5(&Local_116, 1))
	{
		if (func_6(&Local_116) != 10)
		{
			if ((func_6(&Local_116) == 3 || func_6(&Local_116) == 4) && (!func_7(&Local_116) || func_8(&(Local_116.f_958)) > 0))
			{
				func_9(&Local_116, func_5(&Local_116, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && func_10(&Local_116)) && func_5(&Local_116, 65536))
			{
				func_9(&Local_116, 1);
			}
		}
		if (func_6(&Local_116) >= 3 && func_6(&Local_116) <= 7)
		{
			func_11(&Local_116);
		}
		if (((((func_6(&Local_116) >= 5 && func_6(&Local_116) <= 7) && !func_5(&Local_116, 4096)) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_116.f_428.f_444)) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_116.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_116.f_428.f_444))
		{
			MemCopy(&Var1, {func_12(Local_116)}, 4);
			func_13(Var1, &(Local_116.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (func_6(&Local_116))
		{
			case 8:
				if (func_14(&Local_116))
				{
					func_15(&Local_116);
					func_16(&Local_116);
					func_17(&Local_116, 0);
				}
				else if (!func_10(&Local_116))
				{
					if (!func_18(&(Local_116.f_2899)))
					{
						func_19(&(Local_116.f_2899), 0);
					}
					if (!func_20(&Local_116))
					{
						if (func_21(&(Local_116.f_2899)) >= 1f)
						{
							func_22(Local_116.f_2889, 2097152);
							func_23(&Local_116);
							func_24(&Local_116);
							func_17(&Local_116, 10);
						}
					}
					else
					{
						if (!func_5(&Local_116, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_116, 536870912);
						}
						func_26(&(Local_116.f_2899));
					}
				}
				break;
			case 0:
				if (func_10(&Local_116))
				{
					func_16(&Local_116);
				}
				if (!func_10(&Local_116) || func_5(&Local_116, 65536))
				{
					if (func_27(&Local_116))
					{
						func_17(&Local_116, 1);
					}
				}
				break;
			case 1:
				if (func_10(&Local_116))
				{
					func_16(&Local_116);
				}
				if (func_28(&Local_116))
				{
					func_17(&Local_116, 2);
				}
				break;
			case 2:
				if (func_10(&Local_116))
				{
					func_16(&Local_116);
				}
				if (func_29(&Local_116))
				{
					if (!func_7(&Local_116) || func_10(&Local_116))
					{
						if (!func_30(Local_116.f_2889))
						{
							Local_116.f_2889 = func_32(func_31(Local_116));
						}
						func_22(Local_116.f_2889, 4);
						func_25(&Local_116, 8192);
					}
					if (func_10(&Local_116))
					{
						func_33(&Local_116);
						func_17(&Local_116, 9);
					}
					else
					{
						func_17(&Local_116, 3);
					}
				}
				break;
			case 9:
				if (func_16(&Local_116))
				{
					func_34(&Local_116);
					func_15(&Local_116);
					func_35(&Local_116);
					if (!func_5(&Local_116, 256))
					{
						func_36(&Local_116);
						func_37(Local_116);
						func_38(&Local_116);
						func_17(&Local_116, 7);
					}
					else
					{
						func_17(&Local_116, 5);
					}
				}
				break;
			case 3:
				if (!func_5(&Local_116, 8192))
				{
					if (func_8(&(Local_116.f_958)) != 3)
					{
					}
					else
					{
						func_22(Local_116.f_2889, 4);
						func_25(&Local_116, 8192);
					}
				}
				func_39(&Local_116);
				if (func_40(func_32(Global_1835011[Local_116 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_116) || func_42(&Local_116, 32768))
				{
					func_34(&Local_116);
					func_15(&Local_116);
					func_17(&Local_116, 4);
					func_19(&(Local_116.f_2890), 0);
				}
				else if (func_10(&Local_116) && !func_1(Local_116))
				{
					if (!func_18(&(Local_116.f_2899)))
					{
						func_19(&(Local_116.f_2899), 0);
					}
					if (!func_20(&Local_116))
					{
						if (func_21(&(Local_116.f_2899)) >= 1f)
						{
							func_22(Local_116.f_2889, 2097152);
							func_23(&Local_116);
							func_24(&Local_116);
							func_17(&Local_116, 10);
						}
					}
					else
					{
						if (!func_5(&Local_116, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							func_25(&Local_116, 536870912);
						}
						func_26(&(Local_116.f_2899));
					}
				}
				break;
			case 4:
				func_43(&Local_116);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_116) || (func_42(&Local_116, 32768) && !func_5(&Local_116, 268435456)))
				{
					func_35(&Local_116);
					if (!func_5(&Local_116, 256))
					{
						func_36(&Local_116);
						func_38(&Local_116);
						if (!func_45(Global_1935630, 524288) || func_42(&Local_116, 524288))
						{
							func_37(Local_116);
							func_17(&Local_116, 7);
						}
						else
						{
							func_17(&Local_116, 6);
						}
					}
					else
					{
						func_37(Local_116);
						func_17(&Local_116, 5);
					}
				}
				break;
			case 5:
				func_46(&Local_116);
				func_47(&Local_116);
				if (func_48(&(Local_116.f_2884)) >= func_49(&Local_116))
				{
					func_36(&Local_116);
					func_38(&Local_116);
					func_26(&(Local_116.f_2884));
					if (!func_42(&Local_116, 524288))
					{
						func_37(Local_116);
						func_17(&Local_116, 7);
					}
					else
					{
						func_17(&Local_116, 6);
					}
				}
				break;
			case 6:
				if (!func_18(&(Local_116.f_2906)))
				{
					func_19(&(Local_116.f_2906), 0);
				}
				if ((func_50(&(Local_116.f_428)) == 4 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_116.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_116.f_428.f_444))
				{
					func_37(Local_116);
					func_17(&Local_116, 7);
				}
				else if (func_48(&(Local_116.f_2906)) >= 5f)
				{
					func_37(Local_116);
					func_17(&Local_116, 7);
				}
				break;
			case 7:
				func_51(&Local_116);
				if (func_52(&Local_116))
				{
					func_17(&Local_116, 10);
				}
				break;
			case 10:
				if (func_3(&Local_116, 0))
				{
					func_25(&Local_116, 1);
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
	PED::_RESERVE_AMBIENT_PEDS(10);
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
					PED::_ADD_PED_STAY_OUT_VOLUME(iVar0, iParam0->f_425);
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
				else if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
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
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam4->f_444, false)) && (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444) || func_83(uParam4, 512)))
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
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
					{
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
					}
				}
				if (func_99(uParam4, Global_35, 4))
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && func_98(uParam4) > 5000)
				{
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
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
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444))
						{
							ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam4->f_444);
						}
						func_26(&(uParam4->f_1));
						ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
						func_96(uParam4, 512);
						func_103(uParam4, 67108864, 1);
						func_86(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!func_83(uParam4, 16384) && !ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && func_98(uParam4) <= 5000) && func_98(uParam4) >= 0)
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
				ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
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
	func_25(iParam0, 262144);
	if (func_106(iParam0))
	{
		func_25(iParam0, 65536);
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
		func_107(*iParam0);
		func_25(iParam0, 1024);
		func_108(0);
		func_109(&Global_1935630, 32768);
		func_110(2);
		func_111(iParam0);
		func_112(1);
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
	return true;
}

void func_17(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_18(float fParam0)
{
	return func_113(*fParam0, 1);
}

void func_19(float fParam0, bool bParam1)
{
	if (bParam1 || !func_18(fParam0))
	{
		func_26(fParam0);
	}
}

bool func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_114(iVar1) && func_115(iVar1))
		{
			bVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(bVar2))
			{
				if (func_116(iVar1))
				{
					if (func_117(bVar2, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
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
	if (func_118(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_119() - uParam0->f_1);
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
	func_120(&(iParam0->f_428));
}

void func_24(int iParam0)
{
	func_121(&(iParam0->f_958), iParam0->f_958);
}

void func_25(int iParam0, int iParam1)
{
	iParam0->f_2 = (iParam0->f_2 || iParam1);
	if (iParam1 == 65536)
	{
		func_109(&Global_1935630, 32768);
		func_107(*iParam0);
	}
}

void func_26(float fParam0)
{
	func_122(fParam0, 0f);
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
	func_123(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (func_90(func_124(iParam0)))
	{
		vVar0 = { func_12(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { func_125(&(iParam0->f_428)) };
			if (!func_90(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, func_126(*iParam0), true) >= 10f)
				{
					func_127(iParam0, func_126(*iParam0));
				}
				else
				{
					func_127(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	func_71(iParam0);
	func_129(iParam0);
	func_130(iParam0);
	func_131(iParam0, Global_35, 0, 0, 0, 1);
	func_132(iParam0);
	func_133(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_134(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!func_5(iParam0, 1073741824 /* Float: 2f */) && !func_136(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	char cVar0[64];

	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return false;
	}
	if (!STREAMING::IS_IPL_ACTIVE_HASH(-1388202749))
	{
		STREAMING::REQUEST_IPL_HASH(-1388202749);
		return false;
	}
	if (!func_137(sLocal_16))
	{
		return false;
	}
	if (!func_137(sLocal_17))
	{
		return false;
	}
	if (!func_137(sLocal_18))
	{
		return false;
	}
	if (!func_137(sLocal_19))
	{
		return false;
	}
	if (func_138(Global_35, 0))
	{
		func_131(iParam0, Global_35, 0, 0, 0, 1);
		func_139(&(iParam0->f_958.f_1771), Global_35, "ARTHUR", 0);
	}
	if (func_138(bLocal_24, 0))
	{
		func_141(bLocal_24, func_140(0, 0), 2, 1073741824 /* Float: 2f */);
		func_139(&(iParam0->f_958.f_1771), bLocal_24, "HOSEA", 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_24, true);
		func_131(iParam0, bLocal_24, 0, 0, 0, 1);
	}
	if (func_138(bLocal_23, 0))
	{
		func_141(bLocal_23, func_140(0, 1), 2, 1073741824 /* Float: 2f */);
		func_139(&(iParam0->f_958.f_1771), bLocal_23, "DUTCH", 0);
		TASK::TASK_STAND_STILL(bLocal_23, -1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bLocal_23, true);
		ENTITY::FREEZE_ENTITY_POSITION(bLocal_23, true);
		ENTITY::SET_ENTITY_COLLISION(bLocal_23, false, false);
		ENTITY::SET_ENTITY_VISIBLE(bLocal_23, false);
	}
	func_142(&(Local_31[0 /*17*/]), "IND1_ILO_HOS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_144(&iLocal_49, &Local_31, 0, func_143(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iLocal_25 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_145(1, 0), 0f, 0f, func_146(1, 0), 6.3954f, 6.6554f, 3.9843f, "Ind1 Intro Blocker");
	func_147(iParam0, iLocal_25);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1886.584f, -1836.708f, 42.25996f, 0f, 0f, -70.43916f, 7.973451f, 7.65354f, 2f, "m_volTriggerFront");
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1889.879f, -1842.167f, 41.93663f, 0.080091f, 0.00918f, -19.04509f, 12.07183f, 6.861003f, 2.678024f, "m_volTriggerLeft");
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1892.086f, -1835.776f, 41.94608f, 0.080091f, 0.00918f, -19.04509f, 12.07183f, 6.861003f, 2.678024f, "m_volTriggerRight");
	iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1888.238f, -1837.511f, 42.25996f, 0f, 0f, -115.9028f, 7.973451f, 7.65354f, 2.893382f, "m_volTrigger");
	iLocal_30 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), func_145(1, 1), 0f, 0f, 0f, 1f, 1f, 3f);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_21, "ARTHUR", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_21, "HoseaMatthews", bLocal_24, 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_21);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_21, sLocal_16, true);
	}
	StringCopy(&cVar0, "multistart", 64);
	func_148(iParam0, cVar0);
	func_149(iParam0, &cVar0, 0);
	func_75(iParam0, 524288);
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

	MemCopy(&uVar0, {func_150(*iParam0)}, 3);
	SCRIPTS::REQUEST_SCRIPT(&uVar0);
}

void func_34(int iParam0)
{
}

void func_35(int iParam0)
{
	func_56(iParam0);
	func_2(&Global_1935630, 32768);
	func_151(iParam0);
	func_26(&(iParam0->f_2884));
	if (func_152())
	{
		func_153();
	}
	if (func_42(iParam0, 524288))
	{
		func_109(&Global_1935630, 524288);
	}
	else if (!func_42(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	func_154(&(iParam0->f_428), &(iParam0->f_958));
	if (func_5(iParam0, 262144))
	{
		if (func_155(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(func_156(4), 0, 0);
		}
		else if (func_155(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(func_156(2), 0, 0);
		}
		else if (func_155(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(func_156(8), 0, 0);
		}
		else if (func_155(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(func_156(16), 0, 0);
		}
		else if (func_155(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(func_156(32), 0, 0);
		}
	}
}

void func_36(int iParam0)
{
	if (func_138(bLocal_24, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(bLocal_24, false);
		TASK::TASK_CLEAR_LOOK_AT(bLocal_24);
		MISC::_0xE98D55C5983F2509(bLocal_24);
	}
	if (func_138(bLocal_23, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(bLocal_23, false);
		ENTITY::SET_ENTITY_COLLISION(bLocal_23, true, false);
		ENTITY::SET_ENTITY_VISIBLE(bLocal_23, true);
	}
	func_157(iLocal_26);
	func_157(iLocal_27);
	func_157(iLocal_28);
	func_157(iLocal_29);
	func_157(iLocal_30);
	func_158(iParam0, 5, bLocal_24, 0, 0, 1, 0);
	func_158(iParam0, 0, bLocal_23, 0, 0, 1, 0);
}

void func_37(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_159(iParam0))
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
	uVar1 = func_160(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		HUD::SET_MISSION_NAME(true, &uVar1);
		MISC::_0x1096603B519C905F(&uVar1);
	}
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> /*32*/ sVar3;

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
						func_161(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

void func_39(int iParam0)
{
	func_162(5f);
	switch (iLocal_15)
	{
		case 0:
			func_163(&iLocal_15, 1);
			break;
		case 1:
			if (func_164(Global_35, func_145(0, 0), &uLocal_110, 40f, 20f, 10.5f, 10f, 0.5f, 0, 0, 1, 1, 1) || (func_165(Global_35, bLocal_24, 10f, 1) && !func_166(Global_35)))
			{
				func_19(&uLocal_113, 0);
				func_163(&iLocal_15, 2);
			}
			break;
		case 2:
			func_9(iParam0, 1);
			if ((func_166(Global_35) || PED::IS_PED_CARRYING_SOMETHING(Global_35)) || !func_167(iParam0, 256))
			{
				func_168(&(Local_31[0 /*17*/]), 9);
			}
			if (func_169(Global_35, bLocal_24, 1, 1) < 15f && func_170(Global_35, bLocal_24, 0.25f))
			{
				if (func_171(&uLocal_113, 15f))
				{
					func_172(bLocal_24, "PLAYER_HANGING_AROUND", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				}
			}
			iLocal_22 = func_173(&bLocal_24, &iLocal_49, 4f, &Local_31, 0f, 3, 0, 0, 1, iLocal_29, 0, 2, -1082130432 /* Float: -1f */);
			if (iLocal_22 != -1)
			{
				if (func_174(Global_35, iLocal_26, 1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_21, sLocal_17, true);
				}
				else if (func_174(Global_35, iLocal_27, 1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_21, sLocal_18, true);
				}
				else if (func_174(Global_35, iLocal_28, 1, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_21, sLocal_19, true);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_21, sLocal_17, true);
				}
				func_163(&iLocal_15, 3);
			}
			break;
		case 3:
			func_175(&bLocal_24, &iLocal_49, &Local_31, 0f, -1082130432 /* Float: -1f */, 0);
			break;
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_30(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

bool func_41(int iParam0)
{
	if (iLocal_15 == 3)
	{
		func_175(&bLocal_24, &iLocal_49, &Local_31, 0f, -1082130432 /* Float: -1f */, 0);
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_21, false) && !ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_21, sLocal_16, true))
		{
			return true;
		}
	}
	return false;
}

bool func_42(int iParam0, int iParam1)
{
	return func_63(&(iParam0->f_958), iParam1);
}

void func_43(int iParam0)
{
}

bool func_44(int iParam0)
{
	func_175(&bLocal_24, &iLocal_49, &Local_31, 0f, -1082130432 /* Float: -1f */, 0);
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iLocal_21) >= 0.97f)
	{
		func_176(&iLocal_49, bLocal_24);
		return true;
	}
	return false;
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
		if (func_177(&(iParam0->f_958)))
		{
			func_178(&(iParam0->f_958), 0, 0);
			func_25(iParam0, 33554432);
		}
	}
}

float func_48(float fParam0)
{
	if (!func_18(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_118(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_119() - fParam0->f_1);
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
		if (func_159(*iParam0))
		{
			return true;
		}
		return false;
	}
	bVar3 = func_179();
	if (bVar3)
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	}
	if (!func_5(iParam0, 32))
	{
		if (func_179())
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
		if (!func_179())
		{
			return true;
		}
		if (!func_5(iParam0, 4096))
		{
			if (func_159(*iParam0))
			{
				func_25(iParam0, 4096);
			}
			else
			{
				func_111(iParam0);
			}
		}
		else if (!func_159(*iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_53(int iParam0)
{
	if (func_138(bLocal_23, 0))
	{
		ENTITY::SET_ENTITY_COLLISION(bLocal_23, true, false);
	}
	func_176(&iLocal_49, bLocal_24);
	return true;
}

void func_54(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		func_180(iParam0->f_426);
	}
}

void func_55(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		func_181(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam0->f_425))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iParam0->f_425);
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
	bool bVar4;

	bVar0 = func_40(iParam0->f_2889, 2097152);
	bVar1 = func_5(iParam0, 1024);
	iVar2 = 0;
	while (iVar2 < 27)
	{
		iVar3 = iVar2;
		if (!func_114(iVar3))
		{
		}
		else if (!func_115(iVar3))
		{
		}
		else if (!func_116(iVar3))
		{
		}
		else
		{
			bVar4 = Global_1360165[iVar2 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(bVar4))
			{
			}
			else
			{
				func_158(iParam0, iVar3, bVar4, 0, bVar0, !bVar1, 0);
			}
		}
		iVar2++;
	}
}

void func_57(int iParam0)
{
	func_182(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
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
		Global_1945188.f_865 = (Global_1945188.f_865 - Global_1945188.f_865 & 2);
	}
	else
	{
		Global_1945188.f_865 |= 2;
	}
	func_183(bParam0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_184())
	{
		return;
	}
	func_185();
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (!func_114(iVar1))
		{
		}
		else
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (func_186(iVar2))
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

	if (func_187(Global_1898437) && func_188(Global_1898437) == 1)
	{
		iVar0 = func_189(Global_1898437);
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
	struct<8> /*64*/ sVar0;

	Var0 = { func_190(uParam0) };
	func_191(uParam0, &Var0);
}

void func_71(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_425))
	{
		StringCopy(&cVar0, func_192(), 64);
		StringConCat(&cVar0, "_NO_AMBIENT_CONTENT", 64);
		iParam0->f_425 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_193(*iParam0), 0f, 0f, 0f, 5f, 5f, 5f, &cVar0);
		func_194(iParam0, iParam0->f_425, 0);
		func_195(*iParam0, iParam0->f_425);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_426))
	{
		StringCopy(&cVar8, func_192(), 64);
		StringConCat(&cVar8, "_NO_SCRIPT_CONTENT", 64);
		iParam0->f_426 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_193(*iParam0), 0f, 0f, 0f, 25f, 25f, 25f, &cVar8);
		func_196(iParam0, iParam0->f_426);
	}
}

void func_72(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_197(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		HUD::TEXT_BLOCK_REQUEST(&Var0);
	}
}

void func_73(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_198(iParam0) };
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
		if (func_199())
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
		iVar0 = func_189(Global_1898164.f_1[0 /*5*/]);
		if (func_200(iVar0) && func_201(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_187(Global_1898164.f_1[0 /*5*/]))
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
	func_202(&(iParam0->f_428), &(iParam0->f_958));
}

bool func_77(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> /*64*/ sVar4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> /*64*/ sVar15;

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
			vVar0 = { func_125(uParam0) };
			if (!func_90(vVar0))
			{
				func_203(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = func_204(Global_35, func_89(uParam0), 1);
	if (func_83(uParam0, 128) || func_83(uParam0, 256))
	{
		if ((fVar3 >= func_205(uParam0) && !bParam2) || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
		{
			if (uParam0->f_529)
			{
				func_206();
				uParam0->f_529 = 0;
			}
			func_207(uParam0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
			}
			func_208(uParam0);
			func_103(uParam0, 128, 1);
			func_103(uParam0, 256, 1);
			func_103(uParam0, 4096, 1);
			func_103(uParam0, 32768, 1);
			func_103(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= func_209(uParam0) || bParam2)
	{
		if (!func_83(uParam0, 128))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
			{
				if (func_209(uParam0) >= func_205(uParam0))
				{
				}
				Var4 = { func_210(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					func_211(uParam0);
				}
				Var4 = { func_210(uParam0) };
				iVar12 = 256;
				if (!func_83(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_444 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), iVar12, &Var4, false, true);
				func_212(uParam0, 0, 0, 0, 0);
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
			if (func_213())
			{
				func_214(4096);
				uParam0->f_529 = 1;
			}
		}
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_444, true, false))
		{
			bVar13 = true;
			Var15 = { func_190(uParam0) };
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
	if (func_155(&(uParam0->f_29), 62))
	{
		switch (func_215())
		{
			case 1:
				if (!func_155(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_155(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_155(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_155(&(uParam0->f_29), 32))
				{
					if (func_155(&(uParam0->f_29), 2))
					{
						if (func_217(func_216()) < 5)
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
	iParam0 = func_218(iParam0);
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
			MemCopy(&(uParam0->f_440), {func_219("cutscene@", MISC::_0x5B4A8121A47D844D((iVar0 - 1)), 1, 63)}, 4);
		}
		MISC::_0x3C3C7B1B5EC08764();
	}
	else
	{
		MemCopy(&(uParam0->f_440), {func_219("cutscene@", sParam1, 1, 63)}, 4);
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

	if (((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_444, false)) || ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444)) || func_83(uParam0, 512))
	{
		if (!func_220(uParam0->f_501, 128))
		{
			func_221();
		}
		return;
	}
	if ((func_99(uParam0, Global_35, 4) || (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_222(Global_35)) && ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_444, func_222(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_444))
	{
		if (!func_220(uParam0->f_501, 128))
		{
			func_221();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(9);
	if (iVar1 != 0)
	{
		if (func_223(iVar1))
		{
			if (func_224(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (func_220(uParam0->f_501, 512))
	{
		bVar2 = true;
	}
	if (func_225(bVar0, bVar2))
	{
		ANIMSCENE::TRIGGER_ANIM_SCENE_SKIP(uParam0->f_444);
		func_221();
	}
}

void func_85(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;
	char cVar8[32];

	if (func_50(uParam0) == 2 && (func_226(uParam0->f_500, 16384) || func_83(uParam0, 268435456)))
	{
		Var0 = { func_190(uParam0) };
		func_227(uParam0, &Var0);
	}
	func_228(uParam0, sParam1);
	if (func_83(uParam0, 131072))
	{
		func_229(uParam0, 0);
	}
	if (func_230())
	{
		PED::SET_PED_RESET_FLAG(Global_35, 265, true);
		func_231();
	}
	if (func_232())
	{
		func_233(1);
	}
	func_212(uParam0, 0, 0, 0, 0);
	StringCopy(&cVar8, sParam1, 32);
	func_234(uParam0, cVar8);
	func_93(1, 0);
	func_207(uParam0);
	if (func_235() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, func_222(Global_35)))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_87(uParam0, 1))
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_436);
	}
	func_236(uParam0);
	func_237(uParam0, 1);
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
		func_238(uParam0);
		func_237(uParam0, 0);
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
	else if (func_239(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
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
	if (func_240())
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_241())
		{
			func_242(1);
		}
	}
	AUDIO::_0x36559148B78853B3(0, iParam1, 0);
}

void func_94(var uParam0)
{
	vector3 vVar0;

	if (!func_83(uParam0, 4))
	{
		if (func_226(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { func_243(uParam0) };
		if (!func_226(uParam0->f_500, 524288))
		{
			func_244(&(uParam0->f_512));
		}
		func_245(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_246(uParam0, 0f, 0f, 0f);
		func_247(uParam0);
		func_248(uParam0);
		func_249(uParam0, 0f, 0f, 0f, 0, 0);
		func_250(uParam0);
		func_96(uParam0, 4);
		func_251(uParam0, 0);
		func_252(&(Global_1946054.f_1497), Global_35, 1, 64, 1, 1, 1);
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
		func_251(uParam0, 1);
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
		if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == iParam1) && func_253(&(uParam0->f_13[iVar0 /*12*/]), iParam2))
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
			ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, true);
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
		func_251(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		func_206();
		func_96(uParam0, 536870912);
	}
	if (func_83(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_254(uParam0);
	func_86(uParam0, 1);
	func_208(uParam0);
	func_255(uParam0);
	func_256(uParam0);
	func_257(uParam0, 4);
	func_211(uParam0);
	func_229(uParam0, 1);
	func_207(uParam0);
	func_258(&(uParam0->f_1));
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	func_259(!func_220(uParam0->f_501, 128));
	if (!func_220(uParam0->f_501, 128))
	{
		func_221();
	}
}

void func_103(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444)) && ANIMSCENE::WAS_ANIM_SCENE_SKIPPED(uParam0->f_444))
	{
		ANIMSCENE::_CLEAR_ANIM_SCENE_WAS_SKIPPED(uParam0->f_444);
	}
}

void func_104(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_260(2000);
	Global_16 = 0;
	func_261();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_220(*uParam0, 8));
	if (!func_220(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_220(*uParam0, 2) || func_220(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_220(*uParam0, 16))
	{
		func_61(1);
	}
	if (func_220(*uParam0, 32))
	{
		func_262(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_263(joaat("KIT_BANDANA"), 0);
	}
	func_252(&(Global_1946054.f_1497), Global_35, 1, 49217, 1, 1, 1);
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

bool func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;

	bVar0 = PED::IS_PED_ON_FOOT(Global_35);
	if (!bVar0 && func_5(iParam0, 1048576))
	{
		func_66(iParam0, 1048576);
		return false;
	}
	if (!func_5(iParam0, 8388608))
	{
		if (BUILTIN::VDIST2(func_193(*iParam0), Global_36) < (10f * 10f))
		{
			func_25(iParam0, 8388608);
			func_19(&(iParam0->f_2890), 0);
		}
		else
		{
			return false;
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
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Global_35, func_193(*iParam0)) };
			if (vVar2.x > 0f)
			{
				iVar1 = 262144;
			}
			if (func_264(Global_35, &(iParam0->f_421), 0, 256, iVar1, 1084227584 /* Float: 5f */, 100, 0, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_422) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_422, true, 0))
	{
		return true;
	}
	else if (BUILTIN::VDIST2(func_193(*iParam0), Global_36) < (2.5f * 2.5f))
	{
		return true;
	}
	else if (!func_5(iParam0, 2097152))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_193(*iParam0), 1f, 20000, 0.25f, 0, 40000f);
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
			return true;
		}
	}
	return false;
}

void func_107(int iParam0)
{
	int iVar0;

	iVar0 = func_32(func_31(iParam0));
	if (!func_30(iVar0))
	{
		return;
	}
	func_22(iVar0, 1024);
}

void func_108(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_2(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_109(&Global_1935630, 4194304);
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

void func_109(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_110(int iParam0)
{
	int iVar0;

	if (func_265() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_138(func_266(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_266(iVar0), func_267(), 1))
			{
				func_268(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	if (Global_1935630.f_13)
	{
		LAW::_0x61B98367D93F012F(PLAYER::GET_PLAYER_INDEX());
		func_108(0);
		func_65(iParam0, 1);
	}
	func_269(1, 0, 1);
}

void func_112(bool bParam0)
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
	func_270(0f);
	Global_1935436.f_11 = 1;
	if (func_271())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_272();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0)
{
	return func_273(iParam0, 16, 1);
}

bool func_116(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!func_115(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_117(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_204(bParam0, Global_36, 1);
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
		if (PED::_0x5102307CE88798EB(bParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(bParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(bParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(bParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_118(float fParam0)
{
	return func_113(*fParam0, 2);
}

float func_119()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_120(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
}

void func_121(var uParam0, int iParam1)
{
	func_274(uParam0, 4);
	func_275(uParam0, 10);
	func_276(uParam0, iParam1);
}

void func_122(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_119() - fParam1);
	func_277(fParam0, 1);
	func_278(fParam0, 2);
	fParam0->f_2 = 0f;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if ((!ITEMSET::IS_ITEMSET_VALID(iParam1) || !ITEMSET::IS_ITEMSET_VALID(iParam2)) || !ITEMSET::IS_ITEMSET_VALID(iParam3))
	{
		return;
	}
	if (!func_279(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_58 = iParam1;
	Global_1835011[iParam0 /*74*/].f_59 = iParam2;
	Global_1835011[iParam0 /*74*/].f_60 = iParam3;
}

Vector3 func_124(int iParam0)
{
	return func_89(&(iParam0->f_428));
}

Vector3 func_125(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;

	MemCopy(&uVar0, {func_280(uParam0)}, 8);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_445))
	{
		uParam0->f_445 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_440), 0, 0, false, true);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_445, false))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_445, func_222(Global_35), &vVar14, false, 0, 2))
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

Vector3 func_126(int iParam0)
{
	return func_193(iParam0);
}

void func_127(int iParam0, vector3 vParam1)
{
	func_203(&(iParam0->f_428), vParam1);
}

bool func_128(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_24))
	{
		vVar0 = { func_145(0, 0) };
		func_281(iParam0, 5, &bLocal_24, 1, 1, vVar0.x, vVar0.y, vVar0.z, 0, -922193456, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_23))
	{
		vVar3 = { func_145(0, 1) };
		func_281(iParam0, 0, &bLocal_23, 0, 1, vVar3.x, vVar3.y, vVar3.z, 0, -268604689, 0, 0, 0);
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_21))
	{
		iLocal_21 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@IND1@LEADIN@INT@Leadin_ILO", 0, 0, false, true);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_21, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_21, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_21);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_21, true, false))
	{
		return false;
	}
	func_282(iParam0, 500f);
	func_283(iParam0, 525f);
	return true;
}

void func_129(int iParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iLocal_14))
	{
		iLocal_14 = ITEMSET::CREATE_ITEMSET(true);
	}
}

void func_130(int iParam0)
{
	func_182(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

void func_131(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	func_284(iParam0, bParam1, sParam2, iParam3, iParam4, bParam5, 0);
}

void func_132(int iParam0)
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
		if (!func_285(&vVar0))
		{
			return;
		}
		func_286(iParam0, vVar0, 0);
		func_25(iParam0, 524288);
	}
}

void func_133(int iParam0)
{
	if (func_209(&(iParam0->f_428)) != 15f || func_205(&(iParam0->f_428)) != 20f)
	{
		return;
	}
	switch (*iParam0)
	{
		case 31:
			func_287(&(iParam0->f_428), 50f);
			func_288(&(iParam0->f_428), 75f);
			break;
		case 34:
			func_287(&(iParam0->f_428), 35f);
			func_288(&(iParam0->f_428), 50f);
			break;
		case 62:
			func_287(&(iParam0->f_428), 25f);
			func_288(&(iParam0->f_428), 30f);
			break;
		default:
			break;
	}
}

int func_134(int iParam0)
{
	return func_289(&(iParam0->f_8), &(iParam0->f_24), &(iParam0->f_35), &(iParam0->f_51), &(iParam0->f_55), &(iParam0->f_57), &(iParam0->f_393), &(iParam0->f_398), &(iParam0->f_404), &(iParam0->f_408), &(iParam0->f_412), &(iParam0->f_417), -1);
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_5(iParam0, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	iVar0 = func_290(*iParam0);
	if (!func_114(iVar0))
	{
		return 1;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(func_266(iVar0));
	return func_281(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_136(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	char cVar9[64];

	iVar0 = 1;
	MemCopy(&uVar1, {func_197(iParam0)}, 8);
	StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
	{
		if (!func_291(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_198(iParam0)}, 8);
		StringCopy(&cVar9, HUD::_GET_LABEL_TEXT_2(&uVar1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar9))
		{
			if (!func_292(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_137(char* sParam0)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_21, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_21, sParam0))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iLocal_21, sParam0);
		}
		return false;
	}
	return true;
}

bool func_138(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_293(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_293(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_293(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_293(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_293(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_293(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_293(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_293(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

void func_139(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_294(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

struct<4> /*32*/ func_140(int iParam0, int iParam1)
{
	return func_295(iParam0, iParam1);
}

void func_141(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, float fParam6)
{
	func_296(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_142(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_297(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_298(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_299(iParam0->f_6, iParam0->f_5, 0);
			}
			func_300(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_301(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_143(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_27;
}

void func_144(int* iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iParam0->f_57 = { 0f, 0f, 0f };
	func_302(iParam0, iParam3, 0);
	func_303(uParam1, iParam2);
	func_304(iParam0, iParam4);
	if (!MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::SET_BIT(&(iParam0->f_21), 0);
	}
	if (fParam5 > -1f)
	{
		func_305(iParam0, fParam5);
	}
	if (iParam6 == 1)
	{
		func_306(iParam0, 17);
	}
	if (iParam7 == 1)
	{
		func_306(iParam0, 16);
	}
	if (iParam8 == 1)
	{
		func_306(iParam0, 15);
	}
	if (iParam9 == 1)
	{
		func_306(iParam0, 13);
	}
	if (iParam10 == 1)
	{
		func_306(iParam0, 12);
	}
	if (iParam11 == 1)
	{
		func_306(iParam0, 11);
	}
	if (iParam12 == 1)
	{
		func_306(iParam0, 8);
	}
	if (iParam13 == 1)
	{
		func_306(iParam0, 10);
	}
	if (iParam14 == 1)
	{
		func_306(iParam0, 9);
	}
	if (iParam15 == 1)
	{
		func_306(iParam0, 18);
	}
	if (iParam16 == 1)
	{
		func_306(iParam0, 20);
	}
	if (iParam17 == 1)
	{
		func_306(iParam0, 19);
	}
}

Vector3 func_145(int iParam0, int iParam1)
{
	return func_307(iParam0, iParam1);
}

float func_146(int iParam0, int iParam1)
{
	return func_308(iParam0, iParam1);
}

void func_147(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	func_54(iParam0);
	func_55(iParam0);
	func_194(iParam0, iParam1, 0);
	func_196(iParam0, iParam1);
	func_195(*iParam0, iParam1);
}

void func_148(int iParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8)
{
	func_191(&(iParam0->f_428), &cParam1);
	func_25(iParam0, 8);
}

void func_149(int iParam0, char[4] cParam1, bool bParam2)
{
	func_309(&(iParam0->f_428), cParam1, bParam2);
}

struct<4> /*32*/ func_150(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (!func_81(iParam0))
	{
		return Var0;
	}
	return Global_1835011[iParam0 /*74*/].f_3;
}

void func_151(int iParam0)
{
	struct<12> /*96*/ sVar0;
	int iVar12;

	if (func_310(&(iParam0->f_428)) > 15)
	{
	}
	iVar12 = 0;
	while (iVar12 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_428.f_13[iVar12 /*12*/]))
		{
			Global_43619[iVar12 /*12*/] = { iParam0->f_428.f_13[iVar12 /*12*/] };
		}
		else
		{
			Global_43619[iVar12 /*12*/] = { Var0 };
		}
		iVar12++;
	}
}

bool func_152()
{
	return func_311(SCRIPTS::GET_ID_OF_THIS_THREAD());
}

void func_153()
{
	if (func_152())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_179())
		{
			func_61(1);
		}
	}
}

void func_154(var uParam0, var uParam1)
{
	struct<8> /*64*/ sVar0;

	if (func_63(uParam1, 32768))
	{
		Var0 = { func_190(uParam0) };
		func_227(uParam0, &Var0);
		if (func_63(uParam1, 131072))
		{
			func_96(uParam0, 268435456);
			if (func_90(uParam0->f_505))
			{
				uParam0->f_505 = { func_312(uParam1, uParam1->f_1684) };
			}
			if (func_90(uParam0->f_502))
			{
				uParam0->f_502 = { func_312(uParam1, uParam1->f_1684) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_502, &(uParam0->f_502.f_2), false);
				uParam0->f_502.f_2 = (uParam0->f_502.f_2 + 0.5f);
			}
		}
		if (func_63(uParam1, 268435456))
		{
			func_313(&(uParam0->f_500), 16384);
		}
	}
	else if (func_63(uParam1, 524288))
	{
		func_96(uParam0, 67108864);
		func_314(uParam1, 524288);
	}
	if (func_315(uParam1, 128))
	{
		func_96(uParam0, 32);
	}
	if (uParam1->f_1903 != 0)
	{
		uParam0->f_512 = uParam1->f_1903;
		if (uParam1->f_1684 >= 0 && func_316(&(uParam1->f_1016[uParam1->f_1684 /*41*/]), 256))
		{
			func_313(&(uParam0->f_500), 524288);
		}
	}
	if (*uParam1 == 0 && CAM::_0x927B810E43E99932(&(uParam1->f_1692)))
	{
		MISC::_COPY_MEMORY(&(uParam0->f_513), &(uParam1->f_1692), 16);
	}
}

bool func_155(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_156(int iParam0)
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

void func_157(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_158(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return;
	}
	if (!func_114(iParam1))
	{
		return;
	}
	func_317(bParam2);
	if (bParam4)
	{
		func_318(iParam0, bParam2, 0);
	}
	if (!bParam6)
	{
		if (!func_5(iParam0, 4194304))
		{
			bParam6 = func_319(&(Global_1835011[*iParam0 /*74*/]), 1024);
			bVar0 = func_319(&(Global_1835011[*iParam0 /*74*/]), 65536);
		}
	}
	func_320(iParam1, iParam3, bParam4, bParam5, -1082130432 /* Float: -1f */, 1, 1, bParam6, bVar0, 0, 0);
}

bool func_159(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_321(Global_1835011[iParam0 /*74*/].f_1);
}

var func_160(int iParam0)
{
	var uVar0;

	if (!func_81(iParam0))
	{
		return uVar0;
	}
	return Global_1835011[iParam0 /*74*/].f_8;
}

int func_161(var uParam0, var uParam1)
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
				func_227(uParam0, &(uParam1->f_1016[uParam1->f_1684 /*41*/].f_30));
				func_96(uParam0, 2097152);
				return 1;
			}
		}
	}
	return 0;
}

void func_162(float fParam0)
{
	if (func_169(Global_35, bLocal_24, 1, 1) < fParam0)
	{
		if (!bLocal_20)
		{
			func_322(bLocal_24, 1);
			bLocal_20 = true;
		}
	}
	else if (func_169(Global_35, bLocal_24, 1, 1) > (fParam0 * 1.25f))
	{
		if (bLocal_20)
		{
			func_322(bLocal_24, 0);
			bLocal_20 = false;
		}
	}
}

void func_163(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_164(bool bParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	func_323(bParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = func_204(bParam0, vParam1, 1);
	if (!func_18(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_19(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_258(fParam4);
	}
	if (func_18(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				bVar3 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(bVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(bVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_48(fParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_324(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_324(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return true;
				}
			}
		}
		if (bParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(bParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(bParam0, 175, true);
		}
	}
	return false;
}

bool func_165(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(bParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_166(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_167(int iParam0, int iParam1)
{
	return func_83(&(iParam0->f_428), iParam1);
}

void func_168(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

float func_169(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

bool func_170(int iParam0, bool bParam1, float fParam2)
{
	return func_325(iParam0, ENTITY::GET_ENTITY_COORDS(bParam1, false, false), fParam2);
}

bool func_171(float fParam0, float fParam1)
{
	if (func_326(fParam0, fParam1))
	{
		func_258(fParam0);
		return true;
	}
	return false;
}

bool func_172(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_327(bParam0, &Var0);
}

int func_173(bool bParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		func_328(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0));
		fVar8 = func_329(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
		func_175(bParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*bParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_26(&(iParam1->f_13));
		}
		if (func_330(*bParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_331(bParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_173(bParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_332(bParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*bParam0, 317, true))
						{
							func_333(*bParam0, 1, 1);
						}
					}
					else if (func_334(iParam1, 22))
					{
						func_333(*bParam0, 0, 1);
					}
				}
				if (func_335(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_336(bParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_337(iParam8);
					func_338(iParam1, uParam3);
					if (func_339(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_340(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_341(iParam1, uParam3, fVar8);
					if (func_342(*bParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_343(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				if (func_335(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_344(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_339(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_336(bParam0, func_335(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_337(iParam8);
					func_338(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					func_343(uParam3, 0, 0, 1, 1);
					func_345(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!func_346(Global_35, 501393341) && !func_346(Global_35, 242628503))
						{
							iVar9 = 0;
							if (func_347(Global_35, *bParam0, 1f) == 3)
							{
								iVar9 = 131072;
							}
							else
							{
								iVar9 = 262144;
							}
							iParam1->f_28 = PED::GET_MOUNT(Global_35);
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, iVar9, 0, 0, 0, 0);
						}
					}
					else if ((((!PED::IS_PED_ON_MOUNT(Global_35) && func_138(iParam1->f_28, 0)) && func_165(Global_35, iParam1->f_28, iParam1->f_29, 1)) && !func_346(iParam1->f_28, 518218985)) && !func_346(iParam1->f_28, 242628503))
					{
						TASK::TASK_SMART_FLEE_PED(iParam1->f_28, Global_35, (iParam1->f_29 + 3f), -1, 2304, 1f, 0);
						iParam1->f_28 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (!func_346(Global_35, -828834893) && !func_346(Global_35, 242628503))
						{
							iVar10 = 0;
							if (func_347(Global_35, *bParam0, 1f) == 3)
							{
								iVar10 = 131072;
							}
							else
							{
								iVar10 = 262144;
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, iVar10);
						}
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || func_348(iParam1, bParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_349(iParam1)))
					{
					}
					else if (!func_350(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							func_26(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								func_351(uParam3, 0, 0);
							}
							iParam1->f_2 = 4;
						}
						if (iParam1->f_2 != 2 && iParam1->f_2 != 4)
						{
							iVar0 = iParam1->f_1;
							if (iVar0 != -1)
							{
								iParam1->f_1 = -1;
							}
							return iVar0;
						}
					}
				}
				break;
			case 4:
				if (func_352(bParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_335(bParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_344(*bParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_339(bParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_336(bParam0, func_335(bParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_337(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_343(uParam3, 0, 0, 1, 1);
					}
					func_345(iParam1, 1);
				}
				func_341(iParam1, uParam3, fVar8);
				if (func_352(bParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_353(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_174(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_175(bool bParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	func_354(iParam1, *bParam0, iParam1->f_56, 0);
	fVar0 = func_329(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	func_355(iParam1, fParam3);
	func_356(bParam0, iParam1, uParam2, fVar0);
	func_357(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		func_358(iParam1, uParam2, bParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = func_348(iParam1, bParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_349(iParam1);
			}
		}
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 20))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 20);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 0))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 0);
	}
	MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
	func_359(iParam0, &bParam1, 0);
	func_332(&bParam1);
	func_360(iParam0, 0);
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_361(iParam0, 0);
	}
	func_362(iParam0);
	func_363(iParam0, bParam1);
	func_364(iParam0);
	func_365(iParam0);
}

bool func_177(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

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
						Var3 = { func_366(uParam0, uParam0->f_3[iVar2 /*13*/].f_2) };
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

void func_178(var uParam0, bool bParam1, bool bParam2)
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
				else if (func_63(uParam0, 32768) && func_367(&(uParam0->f_1522[iVar0 /*10*/]), 128))
				{
					func_368(uParam0->f_1522[iVar0 /*10*/].f_8, 10000, 1, -1, 0);
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

bool func_179()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_180(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_369(vVar0, 0);
}

void func_181(var uParam0, int iParam1, bool bParam2)
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

void func_182(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_370(uParam0[iVar0 /*3*/]))
		{
			if (func_371((uParam0[iVar0 /*3*/])->f_2, iParam12))
			{
				func_372(uParam0[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_373(uParam1[iVar0 /*5*/]))
		{
			if (func_371((uParam1[iVar0 /*5*/])->f_4, iParam12))
			{
				func_374(uParam1[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_375(uParam2[iVar0 /*3*/]))
		{
			if (func_371((uParam2[iVar0 /*3*/])->f_2, iParam12))
			{
				func_376(uParam2[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_377(uParam3[iVar0 /*3*/]))
		{
			if (func_371((uParam3[iVar0 /*3*/])->f_2, iParam12))
			{
				func_378(uParam3[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	if (func_371(uParam4->f_1, iParam12))
	{
		func_379(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_380(uParam5[iVar0 /*67*/]))
		{
			if (func_371((uParam5[iVar0 /*67*/])->f_3, iParam12))
			{
				func_381(uParam5[iVar0 /*67*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_380(uParam5[iVar0 /*67*/]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_382(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/])))
				{
					if (func_371((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/].f_2, iParam12))
					{
						func_383(&((uParam5[iVar0 /*67*/])->f_4[iVar1 /*3*/]), (uParam5[iVar0 /*67*/])->f_1);
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
		if (func_384(uParam6[iVar0 /*4*/]))
		{
			if (func_371((uParam6[iVar0 /*4*/])->f_3, iParam12))
			{
				func_385(uParam6[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_386(uParam7[iVar0 /*5*/]))
		{
			if (func_371((uParam7[iVar0 /*5*/])->f_4, iParam12))
			{
				func_387(uParam7[iVar0 /*5*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_388(uParam8[iVar0 /*3*/]))
		{
			if (func_371((uParam8[iVar0 /*3*/])->f_2, iParam12))
			{
				func_389(uParam8[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_390(uParam9[iVar0 /*3*/]))
		{
			if (func_371((uParam9[iVar0 /*3*/])->f_2, iParam12))
			{
				func_391(uParam9[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_392(uParam10[iVar0 /*4*/]))
		{
			if (func_371((uParam10[iVar0 /*4*/])->f_3, iParam12))
			{
				func_393(uParam10[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_394(uParam11[iVar0 /*3*/]))
		{
			if (func_371((uParam11[iVar0 /*3*/])->f_2, iParam12))
			{
				func_395(uParam11[iVar0 /*3*/]);
			}
		}
		iVar0++;
	}
}

void func_183(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

bool func_184()
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

void func_185()
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

bool func_186(int iParam0)
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

bool func_187(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_188(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return func_397(func_396(iParam0));
}

int func_189(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_398(func_396(iParam0));
}

struct<8> /*64*/ func_190(var uParam0)
{
	struct<8> /*64*/ sVar0;

	Var0 = { func_399(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { func_400() };
	}
	return Var0;
}

void func_191(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_446), sParam1, 64);
}

char* func_192()
{
	return "unnamed";
}

Vector3 func_193(int iParam0)
{
	if (func_401(iParam0))
	{
		return func_402(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_194(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_425 = iParam1;
	POPULATION::_0x18262CAFEBB5FBE1(iParam1, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam1, 0, 0, 0, -1, -1, iParam2);
	PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	func_66(iParam0, 512);
	iParam0->f_427 = func_403(iParam1, 0, 0, 0);
}

void func_195(int iParam0, int iParam1)
{
	if (!func_81(iParam0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_279(iParam0))
	{
	}
	Global_1835011[iParam0 /*74*/].f_61 = iParam1;
}

void func_196(int iParam0, int iParam1)
{
	char cVar0[64];

	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	iParam0->f_426 = iParam1;
	func_404(iParam1);
	StringCopy(&cVar0, func_192(), 64);
	func_405(iParam1, &cVar0, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
}

struct<2> /*16*/ func_197(int iParam0)
{
	struct<2> /*16*/ sVar0;

	MemCopy(&Var0, {func_160(iParam0)}, 2);
	return Var0;
}

struct<2> /*16*/ func_198(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_197(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

bool func_199()
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

bool func_200(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_201(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_202(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1016[iVar0 /*41*/].f_30)))
		{
			func_309(uParam0, &(uParam1->f_1016[iVar0 /*41*/].f_30), 1);
		}
		iVar0++;
	}
}

void func_203(var uParam0, vector3 vParam1)
{
	if (func_90(vParam1))
	{
		return;
	}
	uParam0->f_5 = { vParam1 };
}

float func_204(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_205(var uParam0)
{
	return uParam0->f_435;
}

void func_206()
{
	struct<4> /*32*/ sVar0;

	Global_1946054.f_858 = (Global_1946054.f_858 - 1);
	if (Global_1946054.f_858 <= 0)
	{
		Var0 = 35;
		func_406(Var0);
	}
}

void func_207(var uParam0)
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
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, &(uParam0->f_462[iVar0 /*9*/]));
		}
		uParam0->f_462[iVar0 /*9*/].f_8 = 0;
		iVar0++;
	}
}

void func_208(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (func_83(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			func_407(uParam0);
			PATHFIND::RESET_ROADS_IN_VOLUME(uParam0->f_4, false);
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

float func_209(var uParam0)
{
	return uParam0->f_434;
}

struct<8> /*64*/ func_210(var uParam0)
{
	return uParam0->f_446;
}

void func_211(var uParam0)
{
	struct<8> /*64*/ sVar0;

	Var0 = { func_408() };
	func_191(uParam0, &Var0);
}

void func_212(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (func_83(uParam0, 16))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_4) && !func_409(uParam0->f_5, 0f, 0f, 0f))
	{
		uParam0->f_4 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(uParam0->f_5, 0f, 0f, 0f, 5f, 5f, 5f, func_192());
		func_96(uParam0, 8);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_4))
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_4, iParam1, iParam4, 0, -1, -1, iParam3);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_4, iParam1, 0, 0, -1, -1, 0);
		func_410(uParam0, uParam0->f_4, 0, 1);
		PATHFIND::SET_ROADS_IN_VOLUME(uParam0->f_4, false, false, bParam2);
		func_96(uParam0, 16);
	}
}

bool func_213()
{
	return Global_1946054.f_1497 != Global_1946054.f_2163.f_1;
}

void func_214(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_411(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_406(Var0);
}

int func_215()
{
	return Global_1899516;
}

int func_216()
{
	return Global_1899515;
}

int func_217(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_218(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

struct<8> /*64*/ func_219(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> /*64*/ sVar18;

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

bool func_220(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_221()
{
	if (func_297(Global_43801))
	{
		func_412(&Global_43801, 0, 0);
	}
}

char* func_222(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (bParam0 == Global_35)
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
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return func_413(iVar0);
}

bool func_223(int iParam0)
{
	int iVar0;

	if (func_414(iParam0))
	{
		iVar0 = UIFEED::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

bool func_224(int iParam0, bool bParam1)
{
	if (bParam1 && !func_297(iParam0))
	{
		return false;
	}
	return !func_415(iParam0, 4);
}

bool func_225(bool bParam0, bool bParam1)
{
	if (!func_297(Global_43801))
	{
		Global_43801 = func_416("CUTSCENE_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
		Global_1945188[Global_43801 /*18*/].f_16 = Global_23[3];
		func_417(Global_43801, 0, 1);
		func_418(Global_43801, 6, 1);
		if (bParam1)
		{
			func_418(Global_43801, 14, 1);
		}
	}
	else
	{
		if (!func_224(Global_43801, 0))
		{
			func_300(Global_43801, 1, 1);
		}
		if (func_419(Global_43801, 1) != 0f && bParam0)
		{
			func_417(Global_43801, 1, 1);
		}
		else
		{
			func_417(Global_43801, 0, 1);
		}
		return func_420(Global_43801, 1);
	}
	return false;
}

bool func_226(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_227(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> /*64*/ sVar1;

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
	func_191(uParam0, sParam1);
	func_103(uParam0, 2097152, 1);
	func_96(uParam0, 33554432);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1, true);
}

void func_228(var uParam0, char* sParam1)
{
	if (((!func_83(uParam0, 32) || func_421(uParam0)) || func_83(uParam0, 268435456)) && !func_83(uParam0, 65536))
	{
		func_313(&(uParam0->f_500), 256);
	}
}

void func_229(var uParam0, bool bParam1)
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

bool func_230()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

void func_231()
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

bool func_232()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

void func_233(bool bParam0)
{
	if (func_232())
	{
		Global_1357509 = 1;
	}
	if (func_422(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_234(var uParam0, char[16] cParam1)
{
	uParam0->f_440 = { cParam1 };
}

bool func_235()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_236(var uParam0)
{
	int iVar0;
	struct<8> /*64*/ sVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			func_423(uParam0, &(uParam0->f_462[iVar0 /*9*/]));
		}
		iVar0++;
	}
	Var1 = { func_408() };
	func_423(uParam0, &Var1);
	Var1 = { func_190(uParam0) };
	func_423(uParam0, &Var1);
}

void func_237(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_253(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (func_253(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_424(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !func_253(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						func_425(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_238(var uParam0)
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
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || func_253(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				func_426(&(uParam0->f_13[iVar0 /*12*/]), 1);
			}
		}
		iVar0++;
	}
}

float func_239(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_240()
{
	return func_414(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_241()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_242(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

Vector3 func_243(var uParam0)
{
	return uParam0->f_502;
}

void func_244(var uParam0)
{
	int iVar0;

	if (func_427(&iVar0))
	{
		if (func_428(iVar0, 0))
		{
			if (func_429(iVar0) == -525676072)
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("MASKS_LARGE"), 0);
				func_262(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::REMOVE_TAG_FROM_META_PED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!func_428(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_245(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_430(0, 0);
		func_431(-1);
	}
	func_92(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_226(*uParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_226(*uParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_226(*uParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_226(*uParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_226(*uParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_226(*uParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_226(*uParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_226(*uParam0, 4) && !func_226(*uParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_226(*uParam0, 2048))
	{
		func_432(0, 0);
	}
	if (func_226(*uParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_226(*uParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_226(*uParam0, 8192))
	{
		func_433();
	}
	if (!func_226(*uParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_226(*uParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_226(*uParam0, 1024))
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
		if (!func_226(*uParam0, 16))
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
						if (func_434() == iVar7)
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
						func_435(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_436(2);
						func_437(-1);
						func_438(vVar3);
						func_440(func_439());
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
	if (!func_226(*uParam0, 4096))
	{
		func_425(Global_35);
	}
	if (!func_226(*uParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_226(*uParam0, 2097152))
	{
		if (func_441() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_112(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_246(var uParam0, vector3 vParam1)
{
	uParam0->f_502 = { vParam1 };
}

void func_247(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	if (func_83(uParam0, 2048) && !func_90(func_442(uParam0)))
	{
		bVar0 = VOLUME::DOES_VOLUME_EXIST(uParam0->f_4);
		bVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(bVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar1, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != bVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(bVar1))
			{
				iVar2 |= 32;
			}
			func_296(bVar1, func_442(uParam0), func_443(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		bVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(bVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(bVar3, uParam0->f_4, true, 0)) || func_83(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, bVar3, true))
		{
			func_296(bVar3, func_442(uParam0), func_443(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_248(var uParam0)
{
	bool bVar0;
	vector3 vVar1;

	if ((func_83(uParam0, 268435456) && !func_90(func_442(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		bVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			vVar1 = { func_442(uParam0) };
			func_296(bVar0, vVar1, func_444(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(bVar0, false);
			ENTITY::SET_ENTITY_VELOCITY(bVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(bVar0, 0f);
		}
	}
}

void func_249(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
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

void func_250(var uParam0)
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
					if (!func_253(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (func_446(func_445(iVar1, 0, 1, 0)))
						{
							if (!func_447(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (func_446(func_445(iVar1, 1, 1, 0)))
						{
							if (!func_447(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
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

void func_251(var uParam0, bool bParam1)
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

void func_252(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_265() != -1;
	Global_1946054.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_189);
			}
			if ((Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_190);
			}
			func_448(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_449(bParam1, 29, bVar4, 1, 0);
			func_449(bParam1, 31, bVar4, 1, 0);
			func_449(bParam1, 30, bVar4, 1, 0);
			func_449(bParam1, 22, bVar4, 1, 0);
			func_449(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_450(32768) && func_451(1108822547, 8)) && func_452(10, iParam3))
	{
		func_453(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946054.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_454(iVar1, 1);
			if (func_451(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_452(iVar1, iParam3))
				{
				}
				else if ((func_451(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_451(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_449(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_455(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946054.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_449(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_451(iVar3, 1))
							{
								func_456(iVar3, 1, 6);
							}
							Global_1946054.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946054.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(bParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(bParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_253(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

void func_254(var uParam0)
{
	StringCopy(&(uParam0->f_440), "", 32);
	func_457(uParam0);
	func_203(uParam0, 0f, 0f, 0f);
	func_458(uParam0);
}

void func_255(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		uParam0->f_13[iVar0 /*12*/].f_11 = 0;
		iVar0++;
	}
}

void func_256(var uParam0)
{
	uParam0->f_8 = 0;
}

void func_257(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		func_459(&(uParam0->f_13[iVar0 /*12*/]), iParam1);
		iVar0++;
	}
}

void func_258(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

void func_259(bool bParam0)
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
		func_221();
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
}

void func_260(int iParam0)
{
	func_460();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_261()
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

int func_262(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_461(iParam1, 1, 0) };
		iParam3 = func_462(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_464(iParam1, iParam2, func_463(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_465(1, (func_265() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_463(iParam3, 1) /*11*/])
			{
				func_466(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_450(32768) && iParam1 != Global_1946054.f_57[func_463(iParam3, 1) /*11*/])
			{
				func_467();
				func_466(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_466(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_468(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_466(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_214(0);
			func_469(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_466(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_263(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_461(iParam0, 0, 0) };
	Var5 = { func_470(iParam0, Var0, Var0.f_4, 0) };
	if (func_471(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_472(0), &Var5, bParam1);
}

bool func_264(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(bParam0);
	if (bVar3)
	{
		bVar2 = PED::GET_MOUNT(bParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(bVar2) || ENTITY::IS_ENTITY_DEAD(bVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(bParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_293(*uParam1, 128))
	{
		if (!func_346(bParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(bParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_293(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_473(bVar2))
			{
				return false;
			}
			if (!func_346(bParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_474(bVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_293(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(bParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_475(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(bParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(bParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(bParam0)));
			func_476(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_293(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_293(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_473(bVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(bParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_475(iParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!func_475(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_475(iParam2, 8192))
				{
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(bVar2, 0))
		{
			return false;
		}
		if (func_293(*uParam1, 2336))
		{
			if (!func_473(bVar2))
			{
			}
			if (func_477(bVar2, *uParam1))
			{
				func_478(uParam1, 32);
				func_478(uParam1, 256);
				func_478(uParam1, 2048);
				func_476(uParam1, 512);
				func_476(uParam1, 1024);
				func_476(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_293(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_473(bVar2))
			{
			}
			if (TASK::IS_PED_WALKING(bVar2))
			{
				return false;
			}
			else
			{
				func_478(uParam1, 64);
			}
		}
		if (func_475(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if (((TASK::IS_PED_SPRINTING(bVar2) || (TASK::IS_PED_RUNNING(bVar2) && func_475(iParam2, 1024))) || func_475(iParam2, 8)) && !func_293(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 1, 0, 0);
			func_476(uParam1, 32);
		}
		else if ((TASK::IS_PED_RUNNING(bVar2) && func_475(iParam2, 4096)) && !func_293(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 8, 0, 0);
			func_476(uParam1, 2048);
			func_476(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2) >= 1.001f) && func_475(iParam2, 32)) && !func_293(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(bVar2, 3, 0, 0);
			func_476(uParam1, 256);
			func_476(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(bVar2))
		{
			TASK::TASK_STAND_STILL(bVar2, -1);
			func_476(uParam1, 64);
		}
		else if (!func_475(iParam2, 1))
		{
			if (!func_475(iParam2, 256))
			{
				WEAPON::_0xB832F1A686B9B810(bParam0, true, 0);
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (func_474(bVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_293(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(bVar2, 0f);
			func_476(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(bParam0, 1000);
			func_476(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_475(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(bParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_476(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_475(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(bParam0, 200);
		func_476(uParam1, 8);
	}
	return false;
}

int func_265()
{
	return Global_1572887.f_12;
}

bool func_266(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_267()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_268(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_114(iParam0))
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

void func_269(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

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
				bVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
				if (bParam0)
				{
					if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x32A1E3B83D501096(bVar3)))
					{
						PERSCHAR::_0x7B204F88F6C3D287(PERSCHAR::_0x32A1E3B83D501096(bVar3));
					}
					else
					{
						PED::DELETE_PED(&bVar3);
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(bVar3, false, false);
					if (bParam2)
					{
						TASK::_0xDF94844D474F31E5(bVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_270(float fParam0)
{
	func_480(10, fParam0);
}

bool func_271()
{
	if (func_265() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_272()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

bool func_273(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_274(var uParam0, int iParam1)
{
	uParam0->f_1683 = iParam1;
}

void func_275(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

int func_276(var uParam0, int iParam1)
{
	int iVar0;

	if (func_315(uParam0, 4))
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
			if (func_152())
			{
				if (!func_63(uParam0, 524288))
				{
					HUD::_HIDE_HUD_COMPONENT(-1679307491);
				}
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
			}
			break;
	}
	if (func_152())
	{
		func_314(uParam0, 512);
		func_481(uParam0, 128);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", false, -1);
		if (func_482(&(uParam0->f_1016[uParam0->f_1684 /*41*/]), 4))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, func_483(uParam0->f_1016[uParam0->f_1684 /*41*/].f_39), false, -1);
		}
		PED::SET_PED_CONFIG_FLAG(Global_35, 255, true);
	}
	func_153();
	func_178(uParam0, 1, 0);
	func_64(uParam0);
	if (func_63(uParam0, 524288) && CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	func_481(uParam0, 4);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_1875))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1875);
	}
	if (func_315(uParam0, 8) && CAM::_0xDD0B7C5AE58F721D(func_484()))
	{
		CAM::_0x798BE43C9393632B(func_484());
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1345[iVar0 /*22*/].f_2)) && !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1345[iVar0 /*22*/].f_2), func_484())) && CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_1345[iVar0 /*22*/].f_2)))
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
		func_221();
	}
	if (func_315(uParam0, 16))
	{
		if (func_485(uParam0) == 0)
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
	func_486();
	if (func_315(uParam0, 32))
	{
		TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(Global_35, 1f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1901))
	{
		if (!func_63(uParam0, 8192))
		{
			if (VEHICLE::_GET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901) != 50f)
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1901, 50f);
			}
		}
		if (VEHICLE::_0x404527BC03DA0E6C(uParam0->f_1901))
		{
			VEHICLE::_STOP_BRING_VEHICLE_TO_HALT(uParam0->f_1901);
		}
	}
	func_487(uParam0);
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_1921))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_1921);
	}
	return 1;
}

void func_277(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_278(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_279(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_488(Global_1835011[iParam0 /*74*/].f_1);
}

struct<4> /*32*/ func_280(var uParam0)
{
	return uParam0->f_440;
}

int func_281(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, var uParam5, var uParam6, var uParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;

	if (!func_114(iParam1))
	{
		return 0;
	}
	if (func_489(iParam0, *bParam2))
	{
		if (*bParam2 != func_490(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { uParam5, uParam6, uParam7 };
	if (func_90(vVar0))
	{
		vVar0 = { func_126(*iParam0) };
	}
	if (!func_491(iParam1, 28, 1))
	{
		func_492(iParam1, 28, 1);
	}
	*bParam2 = func_493(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(*bParam2))
		{
			return 0;
		}
		func_494(iParam0, *bParam2);
		func_495(iParam0, *bParam2);
		func_496(*bParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*bParam2, true);
			if (!func_346(*bParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*bParam2, -1);
			}
		}
		func_284(iParam0, *bParam2, 0, 0, 0, 1, 0);
		func_497(iParam1, 0, 0, 1);
		func_498(iParam1);
		return 1;
	}
	return 0;
}

void func_282(int iParam0, float fParam1)
{
	iParam0->f_428.f_434 = fParam1;
}

void func_283(int iParam0, float fParam1)
{
	iParam0->f_428.f_435 = fParam1;
}

void func_284(int iParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_499(&(iParam0->f_428), bParam1, sParam2, iParam3, iParam4, bParam6);
	func_500(iParam0, bParam1, sParam2);
	if (bParam5)
	{
		func_494(iParam0, bParam1);
	}
}

bool func_285(char* sParam0)
{
	if (DATAFILE::_0x4F9E3ED7617123AC(MISC::GET_HASH_KEY(sParam0)))
	{
		return true;
	}
	return false;
}

void func_286(int iParam0, vector3 vParam1, int iParam4)
{
	MemCopy(&(iParam0->f_2880), {vParam1}, 4);
	func_25(iParam0, 32768);
	func_501(&(iParam0->f_958), iParam4);
}

void func_287(var uParam0, float fParam1)
{
	uParam0->f_434 = fParam1;
}

void func_288(var uParam0, float fParam1)
{
	uParam0->f_435 = fParam1;
}

int func_289(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_370(uParam0[iVar1 /*3*/]))
		{
			if (func_371((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_502(uParam0[iVar1 /*3*/]))
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
		if (func_373(uParam1[iVar1 /*5*/]))
		{
			if (func_371((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_503(uParam1[iVar1 /*5*/]))
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
		if (func_375(uParam2[iVar1 /*3*/]))
		{
			if (func_371((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_504(uParam2[iVar1 /*3*/]))
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
		if (func_377(uParam3[iVar1 /*3*/]))
		{
			if (func_371((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_378(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_371(uParam4->f_1, iParam12))
	{
		if (!func_379(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_380(uParam5[iVar1 /*67*/]))
		{
			if (func_371((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_505(uParam5[iVar1 /*67*/]))
				{
					if (!func_506(uParam5[iVar1 /*67*/]))
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
		if (func_380(uParam5[iVar1 /*67*/]))
		{
			if (func_371((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (func_505(uParam5[iVar1 /*67*/]))
				{
					if (func_506(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_382(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!func_507(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
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
		if (func_384(uParam6[iVar1 /*4*/]))
		{
			if (func_371((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_508(uParam6[iVar1 /*4*/]))
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
		if (func_386(uParam7[iVar1 /*5*/]))
		{
			if (func_371((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!func_509(uParam7[iVar1 /*5*/]))
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
		if (func_388(uParam8[iVar1 /*3*/]))
		{
			if (func_371((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_510(uParam8[iVar1 /*3*/]))
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
		if (func_390(uParam9[iVar1 /*3*/]))
		{
			if (func_371((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_511(uParam9[iVar1 /*3*/]))
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
		if (func_392(uParam10[iVar1 /*4*/]))
		{
			if (func_371((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!func_512(uParam10[iVar1 /*4*/]))
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
		if (func_394(uParam11[iVar1 /*3*/]))
		{
			if (func_371((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!func_513(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_290(int iParam0)
{
	if (!func_81(iParam0))
	{
		return 1;
	}
	return func_514(iParam0);
	return -1;
}

bool func_291(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_197(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_292(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_198(iParam0) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&Var0))
		{
			return false;
		}
	}
	return true;
}

bool func_293(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_294(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

struct<4> /*32*/ func_295(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	Var0 = { func_307(iParam0, iParam1) };
	Var0.f_3 = func_308(iParam0, iParam1);
	return Var0;
}

void func_296(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	bool bVar6;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(bParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (bParam0 == func_515(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_516(bParam0))
	{
		if (func_517(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_293(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_296(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_296(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_293(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_293(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_293(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_293(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_293(iParam5, 129))
	{
		if (func_293(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_293(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_293(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_293(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_516(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_293(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_293(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_297(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_298(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_299(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_300(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (bParam1)
	{
		func_519(iParam0, 4);
		func_520(iVar0, 1);
		func_521(iVar0, 1);
	}
	else
	{
		func_522(iParam0, 4);
		func_521(iVar0, 0);
	}
}

void func_301(int* iParam0, char* sParam1)
{
	if (func_297(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_299(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_523(iParam0, 1);
}

void func_302(int* iParam0, int iParam1, int iParam2)
{
	if (MAP::DOES_BLIP_EXIST(iParam1))
	{
		iParam0->f_56 = iParam1;
		if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
		{
			MISC::SET_BIT(&(iParam0->f_21), 16);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (iParam2 != 0)
	{
		iParam0->f_55 = iParam2;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
}

void func_303(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (iVar0 == iParam1)
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
			{
				MISC::SET_BIT(uParam0[iVar0 /*17*/], 12);
			}
		}
		else if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 12))
		{
			MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 12);
		}
		iVar0++;
	}
}

void func_304(int* iParam0, int iParam1)
{
	func_258(&(iParam0->f_22));
	iParam0->f_25 = iParam1;
}

void func_305(int* iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
		MISC::SET_BIT(iParam0, 14);
	}
}

void func_306(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

Vector3 func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1891.57f, -1837.985f, 41.4657f;
				case 1:
					return 1895.314f, -1855.851f, 35.6326f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1890.891f, -1838.181f, 41.4598f;
				case 1:
					return 1891.572f, -1839.093f, 41.4602f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_308(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 425.304f;
				case 1:
					return 145.9008f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 239.383f;
				case 1:
					return 427.6784f;
			}
			break;
	}
	return 0f;
}

void func_309(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (func_524(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_462[iVar0 /*9*/])))
		{
			if (!func_525(uParam0, sParam1) || func_83(uParam0, 8388608))
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

int func_310(var uParam0)
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

bool func_311(int iParam0)
{
	return Global_43884 == iParam0;
}

Vector3 func_312(var uParam0, int iParam1)
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
			vVar10 = { func_526(vVar10) * Vector(2f, 2f, 2f) };
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

void func_313(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_314(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 - (uParam0->f_1664 && iParam1));
}

bool func_315(var uParam0, int iParam1)
{
	return (uParam0->f_1666.f_1 && iParam1) != 0;
}

bool func_316(var uParam0, int iParam1)
{
	return func_527(uParam0->f_27, iParam1);
}

void func_317(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_IN_GROUP(bParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(bParam0);
		}
		PED::SET_PED_CAN_RAGDOLL(bParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
	}
}

void func_318(int iParam0, bool bParam1, char* sParam2)
{
	func_528(&(iParam0->f_428), bParam1, sParam2);
}

bool func_319(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

void func_320(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_492(iParam0, 56, 1);
		func_19(&(Global_1359489.f_40), 1);
	}
	func_529(iParam0, 0);
	func_530(iParam0, 4, 0);
	func_531(iParam0);
	func_532(iParam0);
	func_533(iParam0, 37, 1);
	bVar0 = func_138(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_534(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_491(iParam0, 64, 1))
	{
		func_533(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_533(iParam0, 33, 1);
		func_533(iParam0, 34, 1);
		func_535(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_536(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_492(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_492(iParam0, 35, 1);
			if (bParam8)
			{
				func_492(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_537(iParam0, 0);
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
		func_533(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_492(iParam0, 33, 1);
		func_536(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_19(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_258(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_492(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_538(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_491(iParam0, 45, 1))
	{
		func_533(iParam0, 45, 1);
	}
	func_539(iParam0, 16, 1);
	func_533(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_138(func_540(iParam0), 0))
		{
			func_541(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_321(int iParam0)
{
	int iVar0;

	iVar0 = func_542(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_322(bool bParam0, bool bParam1)
{
	if (!func_138(bParam0, 0))
	{
		return;
	}
	if (!func_138(Global_35, 0))
	{
		return;
	}
	if (bParam1)
	{
		TASK::TASK_LOOK_AT_ENTITY(bParam0, Global_35, -1, 0, 51, 0);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(bParam0);
	}
}

void func_323(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (bParam4)
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return;
	}
	if (func_409(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((bParam5 < 0f || bParam6 < 0f) || bParam7 < 0f) || bParam8 < 0f)
	{
		return;
	}
	if (((((!bParam5 > bParam6 || !bParam5 > bParam7) || !bParam5 > bParam8) || !bParam6 > bParam7) || !bParam6 > bParam8) || !bParam7 > bParam8)
	{
		return;
	}
	bVar0 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar3 = func_204(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.75f);
		}
		if ((func_543() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(bVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar2, 1.75f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(bVar2, 1.75f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam6 && bVar3 > bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1.5f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.25f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(bVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar2, 1.25f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(bVar2, 1.25f));
				}
				iVar4++;
			}
		}
	}
	if (bVar3 <= bParam7)
	{
		if (bParam11)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1f);
			if (bParam9 == 1)
			{
				if (PED::_0x33FA048675821DA7(bVar0, 3))
				{
					PED::_0x06D26A96CA1BCA75(bVar0, 3, 0f, 0);
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
		{
			iVar4 = 0;
			while (iVar4 < 6)
			{
				bVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar1, iVar4);
				if (!ENTITY::IS_ENTITY_DEAD(bVar2))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar2, 1f);
					if (bParam9 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
						{
							if (PED::_0x33FA048675821DA7(bVar0, 3))
							{
								PED::_0x06D26A96CA1BCA75(bVar2, 3, 0f, 0);
							}
						}
					}
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar1, PED::_0x46BF2A810679D6E6(bVar2, 1f));
				}
				iVar4++;
			}
		}
	}
	if (bParam4)
	{
		if (bVar3 <= bParam8)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(bVar0) && !func_324(bParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_324(bParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, iParam12);
			}
		}
	}
}

bool func_324(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_325(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_326(float fParam0, float fParam1)
{
	if (!func_18(fParam0))
	{
		return false;
	}
	if (func_48(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_327(bool bParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(bParam0, uParam1);
}

void func_328(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_329(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_330(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_544(iParam0, iParam1))
		{
			if (!func_475(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_343(uParam2, 0, 0, 1, 0);
				func_545(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_475(iParam1->f_10, 1))
		{
			func_546(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_547(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_331(bool bParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		bVar4 = func_475(iParam4, 32);
		func_548(iParam1, uParam2, 0);
		iVar5 = func_549(*bParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			return true;
		}
		func_343(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_475(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_475(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_475(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_475(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_475(iParam4, 8388608) || func_475(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_475(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_475(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_334(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*bParam0, "IloGeneralEvents", 2);
		}
		if (!func_334(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_475(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_550(bParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*bParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*bParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*bParam0, 301, false);
			if (func_475(iParam4, 268435456))
			{
				iVar8 = func_551(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_552(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_334(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*bParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*bParam0, 493, false);
			}
			if (func_475(iParam4, 2) || func_475(iParam4, 16))
			{
				func_333(*bParam0, 1, 1);
			}
			else
			{
				func_333(*bParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_332(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		MISC::_0xE98D55C5983F2509(*bParam0);
		PED::SET_PED_CONFIG_FLAG(*bParam0, 297, false);
	}
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_334(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_335(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_553(*bParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_336(bool bParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_554(*bParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_475(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_337(int iParam0)
{
	if (func_475(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_475(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_475(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

int func_338(int* iParam0, var uParam1)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || func_555()) || func_556()) || func_557())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_26(&(iParam0->f_46));
	}
	if (func_18(&(iParam0->f_46)) && !func_326(&(iParam0->f_46), 0.25f))
	{
		func_558(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_339(bool bParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;

	iVar1 = func_559(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*bParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_560(Global_35)) || func_561(Global_35)) || func_562(Global_35));
	fVar12 = -1f;
	if (func_18(&(iParam1->f_13)))
	{
		fVar12 = func_48(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_297((uParam4[iVar0 /*17*/])->f_6);
		func_563(*bParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_564(*bParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_565(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_343(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_351(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_548(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							func_566(iParam1, uParam4, bParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							func_358(iParam1, uParam4, bParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (func_446(func_445(Global_35, 0, 1, 0)) || func_446(func_445(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_567(iParam1, fParam6, iParam1->f_9))
					{
						func_26(&(iParam1->f_18));
						if (bVar6)
						{
							func_351(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_568(iParam1, fParam2);
	}
	return bVar5;
}

void func_340(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_341(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_569(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_568(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_342(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_570(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_306(iParam1, 0);
				func_548(iParam1, uParam2, func_334(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_343(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_297((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_412(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_344(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_563(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_345(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_346(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_347(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_571(iParam0, vVar0, fParam2);
}

bool func_348(int* iParam0, bool bParam1)
{
	vector3 vVar0;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
	{
		return true;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_346(Global_35, -208384378))
	{
		if (!MISC::IS_BIT_SET(iParam0->f_21, 19) && MISC::IS_BIT_SET(iParam0->f_21, 4))
		{
			vVar0 = { iParam0->f_57 };
			iParam0->f_57 = { func_572(*bParam1, Global_35, 2.5f) };
			iParam0->f_57 = { iParam0->f_57 + Global_36 };
			iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 3f);
			func_573(iParam0->f_60, iParam0->f_57);
			iParam0->f_57 = { vVar0 };
			MISC::SET_BIT(&(iParam0->f_21), 19);
		}
		return true;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_35) && !func_346(Global_35, -208384378))
	{
		if (func_574(Global_35))
		{
			iParam0->f_60 = func_434();
		}
		else
		{
			iParam0->f_60 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_60))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iParam0->f_60, Global_36, 2f, 9);
		}
	}
	return false;
}

bool func_349(int* iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 13))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM_IN_AIR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 6))
	{
		if (func_446(func_445(Global_35, 0, 1, 0)) || func_446(func_445(Global_35, 1, 1, 0)))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 6);
			MISC::CLEAR_BIT(&(iParam0->f_21), 7);
		}
		else
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		if (!func_446(func_445(Global_35, 0, 1, 0)) && !func_446(func_445(Global_35, 1, 1, 0)))
		{
			func_258(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((func_446(func_445(Global_35, 0, 1, 0)) || func_446(func_445(Global_35, 1, 1, 0))) && !func_346(Global_35, 716706914)) && !func_346(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = func_21(&(iParam0->f_52)) >= 1.5f;
		if ((!func_446(func_445(Global_35, 0, 1, 0)) && !func_446(func_445(Global_35, 1, 1, 0))) || bVar0)
		{
			func_258(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_350(int* iParam0)
{
	var uVar0;
	bool bVar1;

	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (func_427(&uVar0))
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_575())
			{
			}
		}
		else
		{
			func_19(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = func_21(&(iParam0->f_37)) >= 1.5f;
		if ((!func_427(&uVar0) || func_575()) || bVar1)
		{
			if (bVar1)
			{
				func_576();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_351(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_577(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_352(bool bParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*bParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*bParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_26(&(iParam1->f_18));
			return false;
		}
		else if (func_18(&(iParam1->f_18)))
		{
			func_258(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_18(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_171(&(iParam1->f_18), fParam2);
	return true;
}

void func_353(int* iParam0, var uParam1)
{
	int iVar0;
	struct<35> /*280*/ sVar1;
	struct<10> /*80*/ sVar62;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var1.f_26 = 1106247680;
	Var1.f_27 = 1067450368;
	Var1.f_29 = 1092616192;
	Var1.f_30 = 1112014848;
	Var1.f_31 = 1106247680;
	Var1.f_32 = 1101529088;
	Var1.f_33 = 1101004800;
	Var1.f_34 = 1084227584;
	Var62.f_2 = 570;
	Var62.f_3 = 1065353216;
	Var62.f_4 = -1082130432;
	Var62.f_9 = 3;
	func_176(iParam0, 0);
	func_548(iParam0, uParam1, 1);
	func_343(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 61);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var62, 17);
		iVar0++;
	}
}

int func_354(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!func_138(bParam1, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MAP::DOES_BLIP_EXIST(iParam2) && MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MAP::_0x97F6F158CC5B5CA2(bParam1, iParam2);
		MISC::SET_BIT(&(iParam0->f_21), 17);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 18) && iParam3 != 0)
	{
		if (!MAP::_0x3CB8859F04763C78(bParam1, iParam2))
		{
			MAP::_0xBB68D4D3CA3DE402(bParam1, iParam3);
		}
		MISC::SET_BIT(&(iParam0->f_21), 18);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17) && MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		return 1;
	}
	return 0;
}

void func_355(int iParam0, float fParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 14))
	{
		iParam0->f_26 = fParam1;
	}
}

void func_356(bool bParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (ENTITY::IS_ENTITY_DEAD(*bParam0))
	{
		return;
	}
	func_578(bParam0, iParam1);
	fVar0 = func_329(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		func_338(iParam1, uParam2);
		func_579(iParam1);
		func_580(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		func_581(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				func_582(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (func_347(Global_35, *bParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			func_323(Global_35, ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, func_329(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && func_138(iParam1->f_28, 0)) && func_165(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !func_346(iParam1->f_28, 518218985)) && !func_346(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_357(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			func_361(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_19(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || func_326(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

void func_358(int* iParam0, var uParam1, bool bParam2, bool bParam3, char* sParam4, float fParam5)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	bVar0 = func_329(fParam5 >= 0f, fParam5, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*bParam2, true, false)));
	if ((bVar0 >= (iParam0->f_26 + 0.5f) && MISC::IS_BIT_SET(iParam0->f_21, 20)) && MISC::IS_BIT_SET(*iParam0, 18))
	{
		if (!func_346(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, *bParam2, 5000, -1f, -1f, -1f);
		}
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 175, bParam3);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (bParam3 == 0)
	{
		func_583(iParam0, uParam1, bParam2, sParam4);
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), *bParam2, "ForcedILO", 0f, 0f, 0f, *bParam2, 0);
		MISC::SET_BIT(&(iParam0->f_21), 5);
	}
}

int func_359(int iParam0, bool bParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_60) || !func_138(*bParam1, 0))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_60) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0->f_60)) && iParam2 == 0)
	{
		return 0;
	}
	if (func_90(iParam0->f_57))
	{
		func_584(iParam0, bParam1);
	}
	func_573(iParam0->f_60, iParam0->f_57);
	iParam0->f_57 = { 0f, 0f, 0f };
	iParam0->f_60 = 0;
	return 0;
}

void func_360(int iParam0, bool bParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_258(&(iParam0->f_18));
	if (bParam1)
	{
		iParam0->f_21 = 0;
		iParam0->f_25 = 0f;
		iParam0->f_26 = 30f;
		iParam0->f_27 = 1.25f;
		iParam0->f_29 = 10f;
		iParam0->f_30 = 50f;
		iParam0->f_31 = 30f;
		iParam0->f_32 = 21f;
		iParam0->f_33 = 20f;
		iParam0->f_34 = 5f;
		iParam0->f_28 = 0;
		iParam0->f_60 = 0;
		iParam0->f_57 = { 0f, 0f, 0f };
		iParam0->f_55 = 0;
		func_258(&(iParam0->f_22));
		func_258(&(iParam0->f_37));
		func_258(&(iParam0->f_40));
		func_258(&(iParam0->f_43));
		func_258(&(iParam0->f_49));
		func_258(&(iParam0->f_52));
		func_364(iParam0);
		func_365(iParam0);
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			MAP::REMOVE_BLIP(&(iParam0->f_56));
		}
	}
}

void func_361(int iParam0, bool bParam1)
{
	if (!MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (bParam1)
		{
			CAM::_0xC64ABC0676AF262B();
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 3);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 4))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 4);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
}

void func_362(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 5))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		MISC::CLEAR_BIT(&(iParam0->f_21), 5);
	}
	func_585();
}

void func_363(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_138(bParam1, 0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(bParam1);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(iParam0->f_56))
		{
			iVar0 = iParam0->f_56;
		}
		else
		{
			return;
		}
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 16))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 16);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 17))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 17);
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 18))
	{
		MISC::CLEAR_BIT(&(iParam0->f_21), 18);
	}
	if (MAP::_0x3CB8859F04763C78(bParam1, iVar0))
	{
		MAP::_0x44813684F72B563C(bParam1, iVar0);
	}
	if (iParam0->f_55 != 0)
	{
		iParam0->f_55 = 0;
	}
}

void func_364(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0->f_21, 2) && VOLUME::DOES_VOLUME_EXIST(iParam0->f_35))
	{
		func_586(iParam0->f_35);
		func_157(iParam0->f_35);
		MISC::CLEAR_BIT(&(iParam0->f_21), 2);
	}
}

void func_365(int iParam0)
{
	func_157(iParam0->f_36);
}

struct<8> /*64*/ func_366(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, func_587(iParam1), 64);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			iVar8 = func_588(uParam0, iParam1);
			if (iVar8 > 0)
			{
				StringConCat(&cVar0, "^", 64);
				StringIntConCat(&cVar0, iVar8, 64);
			}
		}
	}
	return cVar0;
}

bool func_367(var uParam0, int iParam1)
{
	return (uParam0->f_9 && iParam1) != 0;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
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

void func_369(vector3 vParam0, int iParam3)
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
			if (func_589(vVar2, vParam0, 2f, 1))
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

bool func_370(var uParam0)
{
	return *uParam0 != 0;
}

bool func_371(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_590(iParam1);
	return (uParam0 && iVar0) != 0;
}

void func_372(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
		func_592(&(uParam0->f_1), 1);
	}
}

bool func_373(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_374(var uParam0)
{
	if (!func_591(uParam0->f_3, 1))
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
		func_592(&(uParam0->f_3), 1);
	}
}

bool func_375(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_376(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

bool func_377(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

bool func_378(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_593(uParam0);
	}
	if (STREAMING::_0x85B8F04555AB49B8(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_379(var uParam0)
{
	if (func_591(*uParam0, 2))
	{
		return true;
	}
	if (!func_591(*uParam0, 1))
	{
		func_594(uParam0);
	}
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_592(uParam0, 2);
		return true;
	}
	return false;
}

bool func_380(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_381(var uParam0)
{
	char* sVar0;

	if (!func_591(uParam0->f_2, 1))
	{
		if (func_505(uParam0))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
			{
				sVar0 = func_413(ENTITY::GET_ENTITY_MODEL(Global_35));
				if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, sVar0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_zero") && func_271())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1, "player_three") && func_595())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player_three", Global_35, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
				func_592(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_382(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_383(var uParam0, int iParam1)
{
	if (!func_591(uParam0->f_1, 1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false))
		{
			return;
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam1, *uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

bool func_384(var uParam0)
{
	return *uParam0 != 0;
}

void func_385(var uParam0)
{
	if (!func_591(uParam0->f_2, 1))
	{
		PROPSET::_REQUEST_PROP_SET(*uParam0);
		func_592(&(uParam0->f_2), 1);
	}
}

bool func_386(var uParam0)
{
	return *uParam0 != 0;
}

void func_387(var uParam0)
{
	if (!func_591(uParam0->f_3, 1))
	{
		WEAPON::_REQUEST_WEAPON_ASSET(*uParam0, uParam0->f_1, uParam0->f_2);
		func_592(&(uParam0->f_3), 1);
	}
}

bool func_388(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_389(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

bool func_390(var uParam0)
{
	return func_596(*uParam0);
}

void func_391(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_IPL_HASH(*uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

bool func_392(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_393(var uParam0)
{
	if (!func_591(uParam0->f_2, 1))
	{
		AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2);
		func_592(&(uParam0->f_2), 1);
	}
}

bool func_394(var uParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(*uParam0);
}

void func_395(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		STREAMING::REQUEST_MOVE_NETWORK_DEF(*uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

int func_396(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/];
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_397(int iParam0)
{
	return iParam0 & 31;
}

int func_398(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

struct<8> /*64*/ func_399(var uParam0)
{
	return uParam0->f_454;
}

struct<8> /*64*/ func_400()
{
	char cVar0[64];

	StringCopy(&cVar0, "MultiStart", 64);
	return cVar0;
}

bool func_401(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_79(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_402(int iParam0)
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

int func_403(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_597(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return iVar0;
}

void func_404(int iParam0)
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
			func_598(iVar0, 4096, 0);
			func_598(iVar0, 131072, 0);
			func_599(iVar0, 1);
		}
		iVar0++;
	}
}

int func_405(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_600(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_406(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_601(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_601(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_602(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_448(8);
}

void func_407(var uParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_9))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_9, false);
	}
}

struct<8> /*64*/ func_408()
{
	char cVar0[64];

	StringCopy(&cVar0, "NormalStart", 64);
	return cVar0;
}

bool func_409(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_410(var uParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_411(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_412(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_297(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_518(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_603(iVar0);
	*uParam0 = 0;
}

char* func_413(int iParam0)
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

bool func_414(int iParam0)
{
	return iParam0 != 0;
}

bool func_415(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_416(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_415(iVar0, 2))
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
		func_604(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, bParam4, iParam5, bParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_417(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	func_520(iVar0, bParam1);
}

void func_418(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

float func_419(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_297(iParam0))
	{
		return 0f;
	}
	iVar0 = func_518(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_420(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_297(iParam0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_421(var uParam0)
{
	struct<8> /*64*/ sVar0;
	struct<8> /*64*/ sVar8;

	Var0 = { func_210(uParam0) };
	Var8 = { func_190(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(&Var0, &Var8);
}

bool func_422(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_605(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_423(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { func_210(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_444, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_444, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_444, sParam1);
	}
}

void func_424(var uParam0, char* sParam1, int iParam2, int iParam3)
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

void func_425(int iParam0)
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

void func_426(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

bool func_427(int iParam0)
{
	if (-1829635046 == func_606(81053684))
	{
		if (func_607(iParam0))
		{
			return true;
		}
	}
	else if (func_608(-525676072, iParam0))
	{
		if (func_607(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_428(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_429(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_430(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		ENTITY::_CHANGE_ENTITY_HEALTH(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
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

void func_431(int iParam0)
{
	int iVar0;

	if (func_265() != -1)
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
		PED::_CHANGE_PED_STAMINA(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

void func_432(bool bParam0, bool bParam1)
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
			if (func_446(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
			{
				if (bParam0)
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar3) < WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4)
					{
						WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar3), (WEAPON::GET_WEAPON_CLIP_SIZE(iVar3) * 4 - WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(Global_35, iVar3))), joaat("ADD_REASON_DEFAULT"));
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
		func_609(1);
	}
}

void func_433()
{
	int iVar0;

	iVar0 = func_445(Global_35, 9, 1, 0);
	if (func_446(iVar0))
	{
		return;
	}
	iVar0 = func_445(Global_35, 7, 1, 0);
	if (func_446(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_445(Global_35, 0, 1, 0);
	if (func_446(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_445(Global_35, 1, 1, 0);
	if (func_446(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_445(Global_35, 18, 1, 0);
	if (func_446(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_610();
	if (func_446(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_611(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_612(6291456, 0);
	if (func_446(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_611(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_434()
{
	return Global_1900383.f_393;
}

int func_435(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_409(*uParam0, 0f, 0f, 0f))
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

void func_436(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_437(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_438(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_439()
{
	return Global_1899515;
}

void func_440(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

bool func_441()
{
	return (func_613() || func_614());
}

Vector3 func_442(var uParam0)
{
	return uParam0->f_505;
}

float func_443(var uParam0)
{
	return uParam0->f_508;
}

float func_444(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
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

int func_445(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_446(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_447(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_448(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_449(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_454(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_615(iParam4);
		}
		else if (iParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(bParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_450(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

bool func_451(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_452(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_453(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_451(1108822547, 6))
	{
		if (bParam2)
		{
			func_449(bParam0, iVar0, func_265() != -1, 0, 0);
			func_455(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_456(1108822547, 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

int func_454(int iParam0, int iParam1)
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

void func_455(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_456(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_463(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_457(var uParam0)
{
	struct<8> /*64*/ sVar0;

	uParam0->f_454 = { Var0 };
}

void func_458(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_462[iVar0 /*9*/]), "", 64);
		iVar0++;
	}
}

void func_459(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

void func_460()
{
	Global_1911774 = 1;
}

struct<5> /*40*/ func_461(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_616(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_617(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_470(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_618(bParam1) };
			if (bParam2 && func_619(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_620(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_620(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_621(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
			}
			else
			{
				Var0.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { func_622(bParam1) };
			switch (func_429(iParam0))
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
			if (func_623(iParam0, -1823706425))
			{
				Var0 = { func_470(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_623(iParam0, -1483207246))
			{
				Var0 = { func_470(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_624(Var0, &Var27, bParam1, 0))
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

int func_462(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_454(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_463(int iParam0, int iParam1)
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

bool func_464(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_625();
	if (iParam2 == 39)
	{
		Var0 = { func_461(iParam0, 1, 0) };
		iParam2 = func_463(func_462(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_626(iParam0, 866047851) && func_627(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_450(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_628(func_454(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_629(iParam2);
	func_630(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_631(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_631(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_632(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_633(iParam0, iParam2, iParam1, func_265() != -1);
	if (bParam4)
	{
		func_634(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_634(&(Global_1946054.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946054.f_2589)
		{
			if (Global_1946054.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946054.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_456(func_454(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_465(bool bParam0, bool bParam1, bool bParam2)
{
	func_635(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_466(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_448(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_636(Var0);
}

void func_467()
{
	func_637(&(Global_1946054.f_2776));
	func_638(32768);
	func_456(1108822547, 8, 6);
}

int func_468(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_463(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/] || Global_1946054.f_1378.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_469(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_406(Var0);
}

struct<4> /*32*/ func_470(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_428(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_472(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_471(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_470(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_472(bParam6), &Var0, 0);
	return uVar4;
}

int func_472(bool bParam0)
{
	if (func_265() == -1)
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

bool func_473(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(bParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(bParam0, 0f);
	if (func_346(bParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(bParam0)))
	{
		return true;
	}
	return false;
}

bool func_474(bool bParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	return func_639(vVar0, vVar3, vParam1);
}

bool func_475(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_476(int iParam0, int iParam1)
{
	func_640(iParam0, iParam1);
}

bool func_477(bool bParam0, int iParam1)
{
	float fVar0;

	if (!func_346(bParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(bParam0, 1041577989);
	if (func_293(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (func_293(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_293(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_478(var uParam0, int iParam1)
{
	func_641(uParam0, iParam1);
}

bool func_479(int iParam0)
{
	return iParam0 > -1;
}

void func_480(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_642(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_643(1, bVar1, 1, sVar2);
		func_644(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_645(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_646();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_645(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_645(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_481(var uParam0, int iParam1)
{
	uParam0->f_1666.f_1 = (uParam0->f_1666.f_1 || iParam1);
}

bool func_482(var uParam0, int iParam1)
{
	return (uParam0->f_26 && iParam1) != 0;
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HandsOnBelt";
	}
	return "Disabled";
}

char* func_484()
{
	return "default_leadin_camera";
}

int func_485(var uParam0)
{
	return *uParam0;
}

void func_486()
{
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("BANDANA"));
	STREAMING::REMOVE_ANIM_DICT(func_647(1));
}

void func_487(var uParam0)
{
	func_648(&(uParam0->f_1904));
}

bool func_488(int iParam0)
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
		iVar0 = func_649(iParam0);
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

bool func_489(int iParam0, int iParam1)
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

int func_490(int iParam0)
{
	if (func_114(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_491(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return false;
		}
	}
	func_650(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_492(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return;
		}
	}
	func_650(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_493(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_114(iParam0))
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
			if (func_491(iParam0, 2, 1))
			{
				func_533(iParam0, 2, 1);
			}
			if (func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_492(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_320(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_138(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_138(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_651(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_492(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_652(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_492(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_652(iParam0, 1);
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
			if (!func_491(iParam0, 44, 0))
			{
				func_492(iParam0, 44, 0);
			}
			if (func_653(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_652(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_533(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			func_536(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_497(iParam0, 0, 0, 1);
			}
			func_533(iParam0, 33, 1);
			func_533(iParam0, 34, 1);
			func_533(iParam0, 29, 1);
			if (!func_90(vVar0) && bParam7)
			{
				func_652(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_652(iParam0, 4);
			}
			else
			{
				func_652(iParam0, 5);
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
						func_651(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_296(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
				func_652(iParam0, 4);
			}
			else
			{
				func_652(iParam0, 5);
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
				if (func_654(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_655(iParam0, iParam13, 0);
						func_656(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_491(iParam0, 25, 0))
						{
							func_533(iParam0, 25, 0);
						}
						func_492(iParam0, 66, 0);
						func_652(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_652(iParam0, 5);
				}
				func_492(iParam0, 28, 1);
			}
			else
			{
				func_652(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_652(iParam0, 6);
			}
			break;
		case 6:
			if (func_138(Global_1360165[iParam0 /*1157*/], 0))
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
					func_657(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_658(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_652(iParam0, 7);
		case 7:
			func_536(iParam0, bParam9, bParam15, 0);
			func_530(iParam0, 4, bParam11);
			func_532(iParam0);
			if (bParam20)
			{
				if (func_659(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_660(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_652(iParam0, 0);
			func_661(iParam0, 16, 1);
			func_533(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_494(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1) == Global_35)
	{
		return;
	}
	if (!ITEMSET::IS_IN_ITEMSET(bParam1, iParam0->f_5))
	{
		ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_5);
		if (ENTITY::IS_ENTITY_AN_OBJECT(bParam1))
		{
			if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1)))
			{
				EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam1), 1, 1);
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(bParam1))
		{
			bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
			EVENT::_0xBB1E41DD3D3C6250(bVar0, "SpMissionTriggers", 0);
			if (PED::IS_PED_HUMAN(bVar0))
			{
				ANIMSCENE::_0x99B2A2E3655DEAF1(bVar0, "ClosestScenario");
			}
			EVENT::_0x1A5C5D350068A673(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1), 0);
			ITEMSET::ADD_TO_ITEMSET(bParam1, iParam0->f_6);
		}
	}
}

void func_495(int iParam0, int iParam1)
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

void func_496(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
	}
	if (bParam2 && (!func_179() || !ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Global_43800, func_222(bParam0))))
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(bParam0, true, false);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bParam0, false, true);
		if (!Global_1935630.f_12)
		{
			if (bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(bParam0, true);
			}
		}
		PED::FORCE_PED_MOTION_STATE(bParam0, joaat("MOTIONSTATE_IDLE"), true, 0, false);
		PED::_SET_PED_CROUCH_MOVEMENT(bParam0, false, 0, false);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	if (bParam3)
	{
		func_659(bParam0);
	}
}

void func_497(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_662(iParam0, bParam3);
	}
	else
	{
		func_663(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_664(iParam0, bParam3);
	}
	else
	{
		func_665(iParam0, bParam3);
	}
}

void func_498(int iParam0)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return;
	}
	bVar0 = func_266(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	PED::_0x406CCF555B04FAD3(bVar0, 0, 0f);
}

void func_499(var uParam0, bool bParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(bParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_587(bParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1))
		{
		}
		return;
	}
	iVar0 = func_666(uParam0, bParam1);
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
		bVar1 = func_667(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(bVar1) && bVar1 != bParam1)
		{
			func_668(uParam0, bVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_669(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = bParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			func_426(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			func_459(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_500(int iParam0, bool bParam1, char* sParam2)
{
	func_670(&(iParam0->f_958), bParam1, sParam2, 0);
}

void func_501(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_502(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_372(uParam0);
	}
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_503(var uParam0)
{
	if (func_591(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_3, 1))
	{
		func_374(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(*uParam0))
			{
				func_592(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_2, *uParam0))
			{
				func_592(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_504(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_376(uParam0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_505(var uParam0)
{
	vector3 vVar0;
	var uVar3;

	if (func_591(uParam0->f_2, 1))
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

bool func_506(var uParam0)
{
	if (func_591(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_2, 1))
	{
		func_381(uParam0);
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		func_592(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_507(var uParam0, int iParam1)
{
	if (func_591(uParam0->f_1, 2))
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
	if (!func_591(uParam0->f_1, 1))
	{
		func_383(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, *uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_508(var uParam0)
{
	if (func_591(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_2, 1))
	{
		func_385(uParam0);
	}
	if (PROPSET::_HAS_PROP_SET_LOADED(*uParam0))
	{
		func_592(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_509(var uParam0)
{
	if (func_591(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_3, 1))
	{
		func_387(uParam0);
	}
	if (WEAPON::_HAS_WEAPON_ASSET_LOADED(*uParam0))
	{
		func_592(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_510(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_389(uParam0);
	}
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_511(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_391(uParam0);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_512(var uParam0)
{
	if (func_591(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_2, 1))
	{
		func_393(uParam0);
	}
	if (AUDIO::PREPARE_SOUND(*uParam0, uParam0->f_1, -2))
	{
		func_592(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_513(var uParam0)
{
	if (func_591(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_591(uParam0->f_1, 1))
	{
		func_395(uParam0);
	}
	if (STREAMING::HAS_MOVE_NETWORK_DEF_LOADED(*uParam0))
	{
		func_592(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_514(int iParam0)
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

bool func_515(var uParam0)
{
	return uParam0;
}

bool func_516(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_517(int iParam0)
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

int func_518(int iParam0)
{
	return iParam0;
}

void func_519(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_520(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_415(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_521(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_522(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

void func_523(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_524(var uParam0, char* sParam1)
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

bool func_525(var uParam0, char* sParam1)
{
	struct<8> /*64*/ sVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	Var0 = { func_190(uParam0) };
	return MISC::ARE_STRINGS_EQUAL(sParam1, &Var0);
}

Vector3 func_526(vector3 vParam0)
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

bool func_527(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_528(var uParam0, bool bParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_444))
	{
		return;
	}
	if (!func_447(uParam0, bParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_671(uParam0, bParam1);
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_444, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_444, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_444, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(bParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_444, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_444, sParam2, bParam1);
		}
	}
}

void func_529(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_672(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_530(iParam0, 1, 0);
		}
	}
	func_530(iParam0, 16, bParam1);
}

void func_530(int iParam0, int iParam1, bool bParam2)
{
	if (!func_479(iParam0))
	{
		return;
	}
	func_673(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_531(int iParam0)
{
	func_530(iParam0, 8, 0);
}

void func_532(int iParam0)
{
	func_492(iParam0, 36, 1);
}

void func_533(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return;
		}
	}
	func_650(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

int func_534(int iParam0, bool bParam1)
{
	if (!func_114(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_674(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_535(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_114(iParam0))
	{
		bVar1 = func_266(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(bVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(bVar1);
			PED::SET_PED_CONFIG_FLAG(bVar1, 179, true);
			func_675(iParam0);
		}
	}
	if (func_491(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_266(iParam0), 137, true);
	}
}

void func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_533(iParam0, 50, 1);
		func_533(iParam0, 48, 1);
		func_533(iParam0, 49, 1);
		func_533(iParam0, 51, 1);
		func_533(iParam0, 52, 1);
		func_533(iParam0, 54, 1);
		func_533(iParam0, 55, 1);
	}
	else
	{
		func_492(iParam0, 50, 1);
		func_492(iParam0, 48, 1);
		func_492(iParam0, 49, 1);
		func_492(iParam0, 51, 1);
		if (bParam3)
		{
			func_492(iParam0, 54, 1);
		}
		else
		{
			func_533(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_492(iParam0, 52, 1);
			if (bParam3)
			{
				func_492(iParam0, 55, 1);
			}
		}
		else
		{
			func_533(iParam0, 52, 1);
			if (!bParam3)
			{
				func_533(iParam0, 55, 1);
			}
		}
	}
}

void func_537(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_266(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_266(iParam0), 204, false);
	}
}

void func_538(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_114(iParam0))
	{
		return;
	}
	if (func_115(iParam0))
	{
		if (!func_116(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_491(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_534(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_266(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_676(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(bVar1, true)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_492(iParam0, 2, 1);
	}
	else
	{
		func_677(iParam0);
		func_492(iParam0, 1, 1);
	}
}

void func_539(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

bool func_540(int iParam0)
{
	if (!func_114(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_541(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;

	if (!func_479(iParam1))
	{
		return;
	}
	bVar0 = func_540(iParam1);
	if (func_678(iParam1))
	{
		if (!func_679(iParam1))
		{
			return;
		}
	}
	func_533(iParam1, 39, 1);
	func_680(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_680(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!bParam2)
		{
			func_680(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(bVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			func_492(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_681(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_542(int iParam0)
{
	if (!func_187(iParam0))
	{
		return -1;
	}
	return func_649(iParam0);
}

bool func_543()
{
	if (func_265() == -1 && func_74(0, 0, 1))
	{
		return (Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

bool func_544(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_682((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_545(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_546(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_569(uParam0[iVar0 /*17*/]))
		{
			func_168(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_547(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_548(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_412(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_360(iParam0, 0);
		}
	}
}

int func_549(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_683(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_297((uParam2[iVar0 /*17*/])->f_6))
		{
			func_168(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_550(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_684(*bParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_551(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_552(int* iParam0, int* iParam1)
{
	if (!func_334(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_168(iParam1, 19);
			func_306(iParam0, 23);
			func_685(iParam1, 2);
		}
	}
}

bool func_553(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_686(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_687(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_554(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_683(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_555()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_556()
{
	return Global_1935689.f_1;
}

bool func_557()
{
	return Global_1357517;
}

void func_558(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_168(uParam0[iVar0 /*17*/], 9);
		iVar0++;
	}
}

int func_559(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_560(int iParam0)
{
	return (func_688(iParam0, 4) || func_688(iParam0, 5));
}

int func_561(int iParam0)
{
	return func_688(iParam0, 7);
}

int func_562(int iParam0)
{
	return func_688(iParam0, 6);
}

void func_563(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_569(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_683(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_564(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_689(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_224(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_300(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_300(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_690(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_565(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_420(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_691(iParam1, 1))
	{
		func_692(iParam1, 1);
		return true;
	}
	return false;
}

void func_566(int* iParam0, var uParam1, bool bParam2, float fParam3, char* sParam4)
{
	func_343(uParam1, 1, 1, 1, 0);
	func_332(bParam2);
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*bParam2, sParam4, fParam3, 0f, 8, 0f, 0f, 0, false, -1);
}

bool func_567(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_568(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_569(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_570(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

int func_571(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_693(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_639(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

Vector3 func_572(int iParam0, int iParam1, float fParam2)
{
	return func_694(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false), fParam2);
}

void func_573(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

bool func_574(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_695(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var3, bParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return true;
				}
			}
		}
		iVar9++;
	}
	return false;
}

int func_575()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_696())
	{
		return 0;
	}
	if (!func_607(&iVar0))
	{
		return 0;
	}
	if (!func_697(iVar0))
	{
		return 0;
	}
	iVar1 = func_698(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_476(&iVar2, 1);
	return func_699(iVar0, iVar2);
}

int func_576()
{
	int iVar0;
	int iVar1;

	if (!func_607(&iVar0))
	{
		return 0;
	}
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_698(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_700(Global_1946054.f_57[func_463(iVar1, 1) /*11*/], 8);
	func_466(26, 0, 0, 0, 0);
	return 1;
}

void func_577(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_701(iParam0, 13))
	{
		func_168(iParam0, 0);
	}
	else
	{
		func_523(iParam0, 0);
	}
	if (func_297(iParam0->f_6))
	{
		if (bParam2)
		{
			func_412(&(iParam0->f_6), 0, 1);
		}
	}
}

void func_578(bool bParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(*iParam1, 21))
	{
		func_365(iParam1);
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam1->f_36) || !func_138(*bParam0, 0))
	{
		return;
	}
	iParam1->f_36 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(*bParam0, true, false), 0f, 0f, 0f, 0.55f, 0.55f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iParam1->f_36, 1);
}

int func_579(int iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 8))
	{
		return 1;
	}
	func_702(64);
	if (MISC::IS_BIT_SET(iParam0->f_21, 14))
	{
		if (func_446(func_445(Global_35, 0, 1, 0)) && func_445(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 14);
			MISC::CLEAR_BIT(&(iParam0->f_21), 15);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		if (((func_446(func_445(Global_35, 0, 1, 0)) && func_445(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !func_346(Global_35, 716706914)) && !func_346(Global_35, 242628503))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			func_19(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = func_21(&(iParam0->f_49)) >= 1.5f;
		if (!func_446(func_445(Global_35, 0, 1, 0)) || bVar0)
		{
			func_233(0);
			func_258(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_580(int iParam0)
{
	bool bVar0;

	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_19(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = func_21(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			func_258(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_581(bool bParam0)
{
	if (bParam0)
	{
		func_703(4);
	}
	func_703(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

void func_582(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1, iParam2, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1, iParam2, 0, -1, -1, 2);
}

void func_583(int* iParam0, var uParam1, bool bParam2, char* sParam3)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(*bParam2))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*bParam2, iParam0->f_26, 3, 1, 0, sParam3, 0);
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			if (!func_297((uParam1[iVar1 /*17*/])->f_6) || func_704((uParam1[iVar1 /*17*/])->f_6) == 0)
			{
			}
			else
			{
				HUD::_UIPROMPT_SET_GROUP(func_704((uParam1[iVar1 /*17*/])->f_6), iVar0, 0);
			}
			iVar1++;
		}
	}
}

void func_584(int iParam0, bool bParam1)
{
	if (!func_138(*bParam1, 0))
	{
		return;
	}
	iParam0->f_57 = { func_572(*bParam1, Global_35, iParam0->f_26) };
	iParam0->f_57 = { iParam0->f_57 + Global_36 };
	iParam0->f_57.f_2 = (iParam0->f_57.f_2 + 10f);
}

void func_585()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_705();
}

void func_586(int iParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam0);
	POPULATION::_0x74C2B3DC0B294102(iParam0);
}

char* func_587(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return "";
	}
	if (ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		return func_222(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(bParam0))
	{
		return func_706(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
	{
		return func_707(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
	}
	return "";
}

int func_588(var uParam0, int iParam1)
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

bool func_589(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_590(int iParam0)
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

bool func_591(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_592(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_593(var uParam0)
{
	if (!func_591(uParam0->f_1, 1))
	{
		STREAMING::_0x03DDBF2D73799F9E(*uParam0);
		func_592(&(uParam0->f_1), 1);
	}
}

void func_594(var uParam0)
{
	if (!func_591(*uParam0, 1))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_592(uParam0, 1);
	}
}

bool func_595()
{
	if (func_265() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_596(int iParam0)
{
	return iParam0 != 0;
}

void func_597(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_598(int iParam0, int iParam1, bool bParam2)
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

void func_599(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		Global_1393237.f_11[iParam0 /*30*/].f_24 = iParam1;
	}
}

int func_600(vector3 vParam0, float fParam3, char[4] cParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
		if (func_708(vParam0))
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
	func_709(iVar0, bParam8);
	return iVar0;
}

bool func_601(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_602(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_603(int iParam0)
{
	if (!func_710(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);
	}
	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
}

void func_604(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
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
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_520(iParam0, 1);
	func_521(iParam0, 1);
	func_522(iParam0, 128);
}

void func_605(int iParam0)
{
	struct<16> /*128*/ sVar0;

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

int func_606(int iParam0)
{
	int iVar0;

	iVar0 = func_463(func_711(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_607(int iParam0)
{
	if (func_608(81053684, iParam0))
	{
		return true;
	}
	if (func_608(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

bool func_608(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_463(func_711(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_429(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_609(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_610()
{
	if (!func_446(Global_1935630.f_45))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

int func_611(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_446(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_446(iVar4) && iVar4 != iVar0)
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
	if (func_265() == -1 && !func_712(iVar0))
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
				if (func_712(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_446(iVar0))
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
		func_713(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_714(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_715(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

int func_612(int iParam0, int iParam1)
{
	var uVar0;

	return func_716(&uVar0, iParam0, iParam1);
}

bool func_613()
{
	return Global_1935436 == 1;
}

bool func_614()
{
	return Global_1935436 == 2;
}

int func_615(int iParam0)
{
	int iVar0;

	iVar0 = func_429(iParam0);
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

struct<4> /*32*/ func_616(bool bParam0)
{
	return func_470(joaat("CHARACTER"), func_717(), -1591664384, bParam0);
}

int func_617(int iParam0)
{
	vector3 vVar0;

	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_618(bool bParam0)
{
	int iVar0;

	iVar0 = func_472(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_470(923904168, func_616(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_470(923904168, func_616(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_470(923904168, func_616(bParam0), -740156546, 0);
}

bool func_619(int iParam0, bool bParam1)
{
	if (func_429(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_718(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_620(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_471(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_621(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_719(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_622(bool bParam0)
{
	int iVar0;

	iVar0 = func_472(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_470(271701509, func_616(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_470(271701509, func_616(bParam0), 12999093, 0);
}

bool func_623(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_429(iParam0);
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

bool func_624(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_472(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_625()
{
	int iVar0;

	Global_1946054.f_1378 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_626(int iParam0, int iParam1)
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

int func_627(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_628(int iParam0)
{
	func_456(iParam0, 8, 6);
}

void func_629(int iParam0)
{
	func_720(&(Global_1946054.f_2589), iParam0);
}

void func_630(int iParam0, int iParam1)
{
	func_721(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_632(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_429(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_452(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_630(iVar1, iVar3);
		}
	}
	if (func_722(-1586649372) && func_452(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_630(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
			}
			func_723(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_723(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_723(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_723(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_723(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_723(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_429(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_724(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_429(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_626(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_724(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_626(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_630(iVar1, iVar3);
					}
				}
			}
			switch (func_429(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_429(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_429(uParam0->f_1[iVar1 /*3*/]) || func_626(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_630(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_633(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_725(0);
	if (iParam2 != 0 && func_726(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_727(iParam0, func_454(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_634(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_265() != -1;
	iVar7 = func_725(0);
	if (func_450(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946054.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_454(iVar0, 1);
			if (func_451(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_451(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_728(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_729(uParam0);
				if (iVar3 > 0)
				{
					if (!func_450(524288))
					{
						func_448(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946054.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_454(iVar0, 1);
							if (func_451(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_451(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_728(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_630(iVar0, iParam2);
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
					func_638(524288);
				}
			}
		}
	}
}

void func_635(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_730(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_265() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_731(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_732(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_732(Global_40.f_7729);
				Global_1946054.f_1378 = func_732(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_733(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_734(0, 1);
	}
}

void func_636(struct<4> /*32*/ sParam0)
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
			if (Global_1946054.f_850 >= 25)
			{
				return;
			}
			if (func_601(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946054.f_850)
				{
					iVar1 = ((Global_1946054.f_855 + iVar0) % 25);
					if ((Global_1946054.f_668[iVar1 /*4*/] == Param0 && Global_1946054.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946054.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_602(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_448(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
			{
				return;
			}
			if (func_601(Param0))
			{
				return;
			}
			func_602(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_448(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_469(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_637(var uParam0)
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

void func_638(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_639(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_640(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_641(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

char* func_642(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_643(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_644(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_735(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

int func_645(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_646()
{
	func_736();
	func_737();
	func_738();
}

char* func_647(int iParam0)
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

void func_648(char* sParam0)
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

int func_649(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_739(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_650(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_651(int iParam0, bool bParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = func_266(iParam0);
	if (!func_114(iParam0) || ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(bVar0, true, false);
	}
}

void func_652(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_653(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_479(iParam0))
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
					iParam4 = func_740(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_488(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_321(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_740(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_741(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_742(iParam0, 0))
					{
						func_492(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_743(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				func_533(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_138(func_266(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!func_138(func_540(iParam0), 0))
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

bool func_654(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_114(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_744(iParam0, iParam1);
	return bVar0;
}

void func_655(int iParam0, int iParam1, bool bParam2)
{
	if (!func_114(iParam0))
	{
		return;
	}
	if (!func_654(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_492(iParam0, 25, 1);
	}
}

void func_656(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_745(iParam2))
		{
			iVar0 = func_746(iParam2, -1);
			if (func_747(iParam1, iVar0))
			{
				if (func_748(iParam1, iVar0))
				{
					if (func_749(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_750(iParam1);
					}
				}
				else
				{
					PED::_SET_PED_BODY_COMPONENT(iParam1, iVar0);
				}
			}
		}
		func_751(iParam0, iParam1, 0);
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
			func_492(iParam0, 66, 0);
		}
	}
}

void func_657(int iParam0)
{
	func_752(iParam0);
	func_753(iParam0, 0);
}

void func_658(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
			}
		}
	}
}

bool func_659(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_0xE9BD19F8121ADE3E(bParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_660(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_611(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_611(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_661(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_114(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_662(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	bVar0 = func_266(iParam0);
	func_754(bVar0);
	func_492(iParam0, 60, 1);
	if (bParam1)
	{
		func_755(iParam0);
	}
}

void func_663(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	bVar0 = func_266(iParam0);
	func_756(bVar0);
	func_533(iParam0, 60, 1);
	if (bParam1)
	{
		func_757(iParam0);
	}
}

void func_664(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	bVar0 = func_266(iParam0);
	func_758(bVar0);
	if (iParam0 == 14)
	{
		func_759(bVar0);
	}
	func_492(iParam0, 61, 1);
	if (bParam1)
	{
		func_760(iParam0);
	}
}

void func_665(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	bVar0 = func_266(iParam0);
	func_761(bVar0);
	func_533(iParam0, 61, 1);
	if (bParam1)
	{
		func_762(iParam0);
	}
}

int func_666(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_667(var uParam0, char* sParam1)
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

void func_668(var uParam0, bool bParam1)
{
	struct<12> /*96*/ sVar0;
	int iVar12;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 35)
	{
		if (uParam0->f_13[iVar12 /*12*/] == bParam1)
		{
			uParam0->f_13[iVar12 /*12*/] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_669(var uParam0)
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

void func_670(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	func_763(uParam0);
	iVar0 = func_764(uParam0, bParam1);
	if (bParam3)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = func_587(bParam1);
		}
		iVar0 = func_765(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_766(uParam0);
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
		iVar0 = func_766(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0 /*13*/].f_2 = bParam1;
	uParam0->f_3[iVar0 /*13*/].f_1 = ENTITY::GET_ENTITY_MODEL(bParam1);
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
	func_767(uParam0, 2);
}

char* func_671(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return "";
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13[iVar0 /*12*/]) && uParam0->f_13[iVar0 /*12*/] == bParam1)
		{
			return func_768(uParam0->f_13[iVar0 /*12*/].f_1);
		}
		iVar0++;
	}
	return "";
}

bool func_672(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_673(var uParam0, int iParam1, bool bParam2)
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

void func_674(int iParam0)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_769(iParam0);
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

void func_675(int iParam0)
{
	if (func_114(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_266(iParam0)))
		{
			func_661(iParam0, 67108864, 1);
			func_533(iParam0, 19, 1);
		}
	}
}

float func_676(int iParam0)
{
	if (!func_479(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_677(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_266(iParam0);
	iVar1 = func_534(iParam0, 0);
	func_770(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_678(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_679(int iParam0)
{
	if (!func_479(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_680(int iParam0, int iParam1, bool bParam2)
{
	if (!func_479(iParam0))
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

int func_681(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_479(iParam0))
	{
		return 0;
	}
	bVar0 = func_540(iParam0);
	if (func_138(bVar0, 0))
	{
		if (func_138(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_678(iParam0)) || func_679(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_771(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_772(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_773(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_774(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_774(iParam0, 0));
					func_775(iParam0);
				}
			}
			else
			{
				if (func_273(iParam0, 32768, 1))
				{
					iVar2 = func_774(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_138(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_273(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_773(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_774(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_774(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_773(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_776(iParam0, 0);
	return 1;
}

int func_682(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_683(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_297(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_412(&(iParam1->f_6), 0, 1);
	}
	if (!func_297(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_569(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_777(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_297(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_690(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_778(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_779(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_298(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_778(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_300(iParam1->f_6, 0, 1);
				}
				else
				{
					func_300(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_684(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_685(int* iParam0, int iParam1)
{
	if (!func_701(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_168(iParam0, 14);
		}
	}
}

bool func_686(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_687(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_688(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_689(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_690(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_297(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	func_778(iParam0, 18, 0, 1);
	func_778(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_691(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_297(iParam0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_692(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

float func_693(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

Vector3 func_694(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return func_526(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

int func_695(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

bool func_696()
{
	return Global_1946054.f_2792;
}

bool func_697(int iParam0)
{
	if (func_780())
	{
		return false;
	}
	if (!func_428(iParam0, 0))
	{
		return false;
	}
	if (!func_781(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_698(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_461(iParam0, 1, 0) };
	return func_462(Var0.f_4);
}

int func_699(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_782(iParam0);
	if (func_626(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_427(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_783();
			}
			else
			{
				iVar0 = func_784();
			}
		}
		else if (func_293(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_785();
		}
		else
		{
			iVar0 = func_786();
		}
	}
	else if (func_607(&iVar2))
	{
		if (func_626(iVar2, -1303648999))
		{
			iVar0 = func_783();
		}
		else
		{
			iVar0 = func_784();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_785();
	}
	else
	{
		iVar0 = func_786();
	}
	if (iVar0 != 0)
	{
		Global_1946054.f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_700(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	iVar0 = func_698(iParam0);
	iVar1 = func_463(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (func_787(iParam0) && func_788(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && func_450(32768)) || Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && iParam0 != Global_1946054.f_1497.f_1[iVar1 /*3*/])
	{
		if (func_787(Global_1946054.f_1497.f_1[iVar1 /*3*/]) && func_788(Global_1946054.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (func_429(iParam0))
		{
			case 81053684:
				if (func_608(-525676072, &uVar3))
				{
					iVar2 = func_463(func_711(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946054.f_2377[iVar2 /*2*/] = Global_1946054.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (func_450(32768))
						{
							func_628(func_454(iVar1, 1));
						}
						if (func_450(32768) || (func_608(-2061583405, &iVar4) && !func_788(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (func_608(81053684, &iVar4))
						{
							iVar2 = func_463(func_711(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946054.f_2377[iVar2 /*2*/] = Global_1946054.f_57[iVar2 /*11*/];
							}
							Global_1946054.f_2377[iVar1 /*2*/] = iParam0;
							func_789(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

bool func_701(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_702(int iParam0)
{
	Global_1935496.f_29 = (Global_1935496.f_29 || iParam0);
}

void func_703(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

int func_704(int iParam0)
{
	int iVar0;

	iVar0 = func_518(iParam0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		return 0;
	}
	return Global_1945188[iVar0 /*18*/].f_3;
}

void func_705()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

char* func_706(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return "";
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return func_790(iVar0);
}

char* func_707(int iParam0)
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

bool func_708(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_709(int iParam0, bool bParam1)
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

bool func_710(int iParam0)
{
	return func_415(iParam0, 2);
}

int func_711(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_462(iVar0);
}

bool func_712(int iParam0)
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

int func_713(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

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
		Var0 = { func_461(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_791((398 + iVar28), 1);
			if (func_620(iParam0, &Var0, iVar5, 0))
			{
				if (func_621(iParam0, &Var6, iVar5))
				{
					Var29 = { func_470(iParam0, Var0, iVar5, 0) };
					func_792(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_793(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_794(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_795(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_714(int iParam0, int iParam1, float fParam2)
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

bool func_715(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_716(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;
	bool bVar18;
	var uVar19;
	struct<22> /*176*/ sVar23;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_796(iParam1, 128);
	if (func_797("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_798(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_446(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_796(iParam1, 512) && func_719(Var4.f_4, &uVar19, &Var23, joaat("SLOTID_WEAPON_0"))) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_799(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_796(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_796(iParam1, 4))) && (!func_799(Var4.f_4) || func_796(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_796(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_796(iParam1, 1048576)))
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
		func_800(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_796(iParam1, 512) && !func_796(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_716(uParam0, iParam1, iParam2);
	}
	else if (func_796(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

struct<4> /*32*/ func_717()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_718(int iParam0)
{
	if (!func_801(iParam0))
	{
		return false;
	}
	return func_802(iParam0);
}

bool func_719(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_472(0);
	*uParam1 = { func_470(iParam0, func_618(0), iParam3, 0) };
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

void func_720(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;

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
			if ((func_803(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_803(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_804(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_721(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_805(uParam0, 1))
	{
		func_806(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_722(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_463(iParam0, 1) /*3*/] != Global_1946054.f_57[func_463(iParam0, 1) /*11*/];
}

void func_723(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
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
			func_630(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_630(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_630(iVar2, iVar0);
		}
	}
}

bool func_724(int iParam0)
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

int func_725(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_807();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_726(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_727(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

int func_728(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_463(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_450(524288))
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

int func_729(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_730(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_265() == -1)
	{
		func_808(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_809(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_731(int iParam0, int iParam1)
{
	if (func_265() == -1)
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

int func_732(int iParam0)
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

void func_733(int iParam0, bool bParam1, int iParam2)
{
	func_810(&(Global_1946054.f_1378), iParam0);
	func_811(2, iParam0, 6);
	if (bParam1)
	{
		func_734(0, 1);
	}
}

void func_734(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_812(0);
	}
	if (bParam0)
	{
		func_448(8);
		func_448(512);
	}
	else
	{
		func_448(8);
		func_448(16);
	}
}

char* func_735(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_642(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_642(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_736()
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

	if (func_813())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_814(2);
	}
	if (Global_1347477.f_119)
	{
		return func_814(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_815();
	fVar2 = func_816();
	fVar3 = func_817();
	fVar4 = func_818();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_819()));
	fVar7 = (func_814(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_820(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_821(3, fVar9, fVar9 > 100f);
	return func_822(fVar7, -100f, 100f);
}

float func_737()
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

	if (func_813())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_814(1);
	}
	if (Global_1347477.f_119)
	{
		return func_814(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_815();
	fVar2 = func_816();
	fVar3 = func_817();
	fVar4 = func_818();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_819()));
	fVar7 = (func_814(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_820(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_821(2, fVar9, fVar9 > 100f);
	return func_822(fVar7, -100f, 100f);
}

float func_738()
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

	if (func_813())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_814(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_823())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_824())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_814(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_815();
	fVar2 = func_816();
	fVar3 = func_817();
	fVar4 = func_818();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_819()));
	fVar7 = (func_814(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_820(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_821(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_814(0);
	}
	return func_822(fVar7, -100f, 100f);
}

int func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1058888.f_40431 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888.f_40431 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (Global_1058888.f_40431.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (Global_1058888.f_40431.f_1[iVar2 /*2*/] < iParam0)
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

int func_740(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_479(iParam0))
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
					if (func_825(Global_1835011[4 /*74*/].f_1, 1))
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
					if (func_826(iVar0, 9, 11))
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
					if (func_825(Global_1347702[63 /*49*/].f_15, 1) || func_321(Global_1347702[63 /*49*/].f_15))
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
					if (func_826(iVar0, 9, 12))
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
					if (!func_825(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_273(18, 134217728, 1))
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
					if (func_826(iVar0, 9, 11))
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
					if (func_825(Global_1347702[134 /*49*/].f_15, 1) || func_321(Global_1347702[134 /*49*/].f_15))
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
					if (func_825(Global_1835011[38 /*74*/].f_1, 1))
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
					if (func_826(iVar0, 9, 11))
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
					if (func_827(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_825(Global_1347702[1 /*49*/].f_15, 1))
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
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_266(iParam0)))
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
	if (!func_654(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_741(int iParam0)
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

bool func_742(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_115(iParam0) || func_491(iParam0, 44, 1))
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

struct<7> /*56*/ func_743(int iParam0, int iParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> /*56*/ sVar0;

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

bool func_744(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return false;
	}
	func_828(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_745(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_746(int iParam0, int iParam1)
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
			iVar0 = func_829(296923297, iParam1);
			return func_830(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_829(1237718549, iParam1);
			return func_830(iVar0);
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

bool func_747(int iParam0, int iParam1)
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

bool func_748(int iParam0, int iParam1)
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

bool func_749(int iParam0, int iParam1)
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
	if (!func_747(iParam0, iVar0))
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

void func_750(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_751(int iParam0, int iParam1, bool bParam2)
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
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_747(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_747(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_747(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_747(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_747(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_747(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_747(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_747(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_747(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_747(iParam1, -1100875244))
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
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_747(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_747(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_747(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_747(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_747(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_747(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_747(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_747(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_747(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_747(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_747(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_747(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_747(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_747(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_747(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_747(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_752(int iParam0)
{
	func_831(iParam0, 1);
	func_831(iParam0, 128);
	func_831(iParam0, 256);
	func_831(iParam0, 512);
	func_831(iParam0, 1024);
	func_831(iParam0, 2048);
	func_831(iParam0, 4096);
	func_831(iParam0, 65536);
	func_831(iParam0, 16384);
	func_831(iParam0, 262144);
	func_831(iParam0, 524288);
	func_831(iParam0, 1048576);
	func_831(iParam0, 2097152);
	func_831(iParam0, 32768);
	func_831(iParam0, 131072);
	func_831(iParam0, 134217728);
	func_831(iParam0, 1073741824 /* Float: 2f */);
}

void func_753(int iParam0, bool bParam1)
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

void func_754(bool bParam0)
{
	if (func_832(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_755(int iParam0)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (func_772(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_540(iParam0);
	func_754(bVar0);
	func_680(iParam0, 8192, 1);
}

void func_756(bool bParam0)
{
	if (func_832(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_757(int iParam0)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (func_772(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_540(iParam0);
	func_756(bVar0);
	func_680(iParam0, 8192, 0);
}

void func_758(bool bParam0)
{
	if (func_832(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_759(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (func_115(14))
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
	if (!ENTITY::IS_ENTITY_IN_VOLUME(bParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 909522);
}

void func_760(int iParam0)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (func_772(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_540(iParam0);
	func_758(bVar0);
	func_680(iParam0, 16384, 1);
}

void func_761(bool bParam0)
{
	if (func_832(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_762(int iParam0)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (func_772(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_540(iParam0);
	func_761(bVar0);
	func_680(iParam0, 16384, 0);
}

void func_763(var uParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;

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

int func_764(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0 /*13*/].f_2) && uParam0->f_3[iVar0 /*13*/].f_2 == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_765(var uParam0, char* sParam1)
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

int func_766(var uParam0)
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

void func_767(var uParam0, int iParam1)
{
	uParam0->f_1664 = (uParam0->f_1664 || iParam1);
}

char* func_768(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_769(int iParam0)
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

void func_770(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_833(bParam1);
	}
}

float func_771(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
	}
	return func_239(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_772(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_834(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_773(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar0 = func_540(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(bVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		bVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(bVar3))
		{
		}
		else
		{
			if (!ENTITY::_0x88AD6CC10D8D35B2(bVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&bVar3);
		}
		iVar2++;
	}
}

int func_774(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_835(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_775(int iParam0)
{
	int iVar0;

	if (!func_479(iParam0))
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

void func_776(int iParam0, int iParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

int func_777(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_415(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_604(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_778(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_779(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_297(iParam0))
	{
		return;
	}
	iVar0 = func_518(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_780()
{
	if (Global_1946054.f_2793)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946054.f_2791)) < 1250)
	{
		return true;
	}
	if (func_836())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_428(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_617(iParam0);
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
		if (!func_837(iParam0, 1))
		{
			return false;
		}
	}
	return func_838(iParam0, 0, bParam2) >= iParam1;
}

int func_782(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_607(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_783()
{
	int iVar0;

	iVar0 = joaat("MASK_OFF_LEFT_HAND");
	switch (func_839())
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

int func_784()
{
	int iVar0;

	iVar0 = joaat("BANDANA_OFF_LEFT_HAND");
	switch (func_839())
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

int func_785()
{
	int iVar0;

	iVar0 = joaat("MASK_ON_LEFT_HAND");
	switch (func_839())
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

int func_786()
{
	int iVar0;

	iVar0 = joaat("BANDANA_ON_LEFT_HAND");
	switch (func_839())
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

bool func_787(int iParam0)
{
	switch (func_429(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

int func_788(int iParam0)
{
	var uVar0;

	return func_840(iParam0, &uVar0);
}

void func_789(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_2377[func_463(iParam0, 1) /*2*/].f_1 = (Global_1946054.f_2377[func_463(iParam0, 1) /*2*/].f_1 || iParam1);
}

char* func_790(int iParam0)
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

int func_791(int iParam0, int iParam1)
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
		case 14:
			return 1666399168;
		case 15:
			return -1911121386;
		case 16:
			return 1756656691;
		case 17:
			return -1774867076;
		case 18:
			return -421952220;
		case 19:
			return -1087003323;
		case 20:
			return 1231618917;
		case 21:
			return -1183777174;
		case 22:
			return -841767082;
		case 23:
			return 1043717005;
		case 24:
			return 142663787;
		case 25:
			return 1718143051;
		case 26:
			return -6605744;
		case 27:
			return 953047564;
		case 28:
			return 769706682;
		case 29:
			return 1635590003;
		case 30:
			return -2047978619;
		case 31:
			return -586319254;
		case 32:
			return 249896112;
		case 33:
			return -1060513333;
		case 34:
			return 1317351007;
		case 35:
			return -500478573;
		case 36:
			return -806573802;
		case 37:
			return -1109949204;
		case 38:
			return -740156546;
		case 39:
			return -684532710;
		case 40:
			return 1158805436;
		case 41:
			return -559473670;
		case 42:
			return -797147251;
		case 43:
			return -382216265;
		case 44:
			return 1419177114;
		case 45:
			return 1704297235;
		case 46:
			return -1139016418;
		case 47:
			return 897705377;
		case 48:
			return 17961769;
		case 49:
			return 205582207;
		case 50:
			return 900740963;
		case 51:
			return -1369589344;
		case 52:
			return -1695823795;
		case 53:
			return -41453074;
		case 54:
			return 539767227;
		case 55:
			return 1210490314;
		case 56:
			return -399684751;
		case 57:
			return 2138893455;
		case 58:
			return -1617010487;
		case 59:
			return -832377028;
		case 60:
			return -428040245;
		case 61:
			return 1279288897;
		case 62:
			return -594897905;
		case 63:
			return -1360459240;
		case 64:
			return 1838428396;
		case 65:
			return -1467846997;
		case 66:
			return -490610263;
		case 67:
			return -1885413079;
		case 68:
			return 708884155;
		case 69:
			return -134459952;
		case 70:
			return -1912136700;
		case 71:
			return -1268031552;
		case 72:
			return 1177953227;
		case 73:
			return 2130805296;
		case 74:
			return 38093490;
		case 75:
			return -269153218;
		case 76:
			return -1995068011;
		case 77:
			return -164284834;
		case 78:
			return 1446463345;
		case 79:
			return 1501315823;
		case 80:
			return -750379482;
		case 81:
			return -929560937;
		case 82:
			return 608323241;
		case 83:
			return 1030796013;
		case 84:
			return 1915057434;
		case 85:
			return -1582276476;
		case 86:
			return 692059311;
		case 87:
			return 2062839241;
		case 88:
			return -1884531872;
		case 89:
			return -866434534;
		case 90:
			return -1252192421;
		case 91:
			return 1243288963;
		case 92:
			return -1953772189;
		case 93:
			return 754411745;
		case 94:
			return 545309006;
		case 95:
			return -1089810811;
		case 96:
			return 1957869400;
		case 97:
			return -241412332;
		case 98:
			return -1548010959;
		case 99:
			return 550150488;
		case 100:
			return 946565453;
		case 101:
			return 434443248;
		case 102:
			return -1709914938;
		case 103:
			return 366686112;
		case 104:
			return -1370063350;
		case 105:
			return 2126829550;
		case 106:
			return 226552910;
		case 107:
			return 721193431;
		case 108:
			return -315672460;
		case 109:
			return 623544501;
		case 110:
			return 259556714;
		case 111:
			return -2125361825;
		case 112:
			return 1078230356;
		case 113:
			return 1885364811;
		case 114:
			return 1630382737;
		case 115:
			return 1738245512;
		case 116:
			return 1540262216;
		case 117:
			return 1016871472;
		case 118:
			return 13829069;
		case 119:
			return 737051352;
		case 120:
			return 1734614610;
		case 121:
			return -208715295;
		case 122:
			return 1435062936;
		case 123:
			return 1483055553;
		case 124:
			return 380335002;
		case 125:
			return -1079385677;
		case 126:
			return 676610411;
		case 127:
			return 2145419552;
		case 128:
			return 657238733;
		case 129:
			return 1850579281;
		case 130:
			return -1923957384;
		case 131:
			return -1142828108;
		case 132:
			return -1400618531;
		case 133:
			return -1433857135;
		case 134:
			return 209987206;
		case 135:
			return 1686943047;
		case 136:
			return -1276976212;
		case 137:
			return -59178517;
		case 138:
			return 2134884601;
		case 139:
			return 651707517;
		case 140:
			return -633788535;
		case 141:
			return 116394463;
		case 142:
			return -1196973875;
		case 143:
			return 801752086;
		case 144:
			return 184475332;
		case 145:
			return -1880922659;
		case 146:
			return -898138634;
		case 147:
			return -2107418444;
		case 148:
			return -679970099;
		case 149:
			return -1531392549;
		case 150:
			return 1612483376;
		case 151:
			return 463930900;
		case 152:
			return -632148238;
		case 153:
			return 55303249;
		case 154:
			return 2108322089;
		case 155:
			return -1358896714;
		case 156:
			return 74475632;
		case 157:
			return -28710953;
		case 158:
			return -1791599168;
		case 159:
			return 1605938169;
		case 160:
			return 1255242276;
		case 161:
			return 636467727;
		case 162:
			return -1567688525;
		case 163:
			return -77886679;
		case 164:
			return -1057900679;
		case 165:
			return -1960888134;
		case 166:
			return -1719717295;
		case 167:
			return -1779244911;
		case 168:
			return -670540863;
		case 169:
			return 223362311;
		case 170:
			return 1150824567;
		case 171:
			return 974471191;
		case 172:
			return 1989683968;
		case 173:
			return 254804477;
		case 174:
			return 192057609;
		case 175:
			return 1553957817;
		case 176:
			return 2099829015;
		case 177:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 178:
			return -1948423372;
		case 179:
			return 981083654;
		case 180:
			return 1283289876;
		case 181:
			return -606884489;
		case 182:
			return -100418572;
		case 183:
			return 663645231;
		case 184:
			return 1442217033;
		case 185:
			return 1410986244;
		case 186:
			return 847409839;
		case 187:
			return 923926911;
		case 188:
			return 109995826;
		case 189:
			return -747412737;
		case 190:
			return 1114341727;
		case 191:
			return -539456939;
		case 192:
			return 45887121;
		case 193:
			return 913271624;
		case 194:
			return -1652812715;
		case 195:
			return -1791365775;
		case 196:
			return -979299941;
		case 197:
			return 713062001;
		case 198:
			return -575045963;
		case 199:
			return 1852965262;
		case 200:
			return -1398836354;
		case 201:
			return -1829885298;
		case 202:
			return -1773850357;
		case 203:
			return -564258009;
		case 204:
			return 2016532685;
		case 205:
			return -1070563798;
		case 206:
			return -1619221343;
		case 207:
			return -345571691;
		case 208:
			return 544288390;
		case 209:
			return 159578294;
		case 210:
			return -76852849;
		case 211:
			return 1110295244;
		case 212:
			return 2104563477;
		case 213:
			return 1947827651;
		case 214:
			return -933072766;
		case 215:
			return 2104388648;
		case 216:
			return -1677140601;
		case 217:
			return -2133097881;
		case 218:
			return -826678792;
		case 219:
			return -513522325;
		case 220:
			return 1970588249;
		case 221:
			return -2080032591;
		case 222:
			return 1758847745;
		case 223:
			return 895010282;
		case 224:
			return -511891179;
		case 225:
			return -1207567168;
		case 226:
			return -1315407613;
		case 227:
			return 1786352060;
		case 228:
			return -833319691;
		case 229:
			return 1591329969;
		case 230:
			return 2123222014;
		case 231:
			return -1578397674;
		case 232:
			return 1473261684;
		case 233:
			return -241855024;
		case 234:
			return 12999093;
		case 235:
			return -6796437;
		case 236:
			return -268116367;
		case 237:
			return -636470867;
		case 238:
			return 1737668280;
		case 239:
			return 892807236;
		case 240:
			return -733247890;
		case 241:
			return 24047176;
		case 242:
			return -1561999014;
		case 243:
			return -2052774042;
		case 244:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 245:
			return joaat("SLOTID_HORSE_BLANKET");
		case 246:
			return joaat("SLOTID_HORSE_CANTLE");
		case 247:
			return joaat("SLOTID_HORSE_FENDER");
		case 248:
			return joaat("SLOTID_HORSE_HORN");
		case 249:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 250:
			return joaat("SLOTID_HORSE_LANTERN");
		case 251:
			return joaat("SLOTID_HORSE_MANE");
		case 252:
			return joaat("SLOTID_HORSE_MASK");
		case 253:
			return joaat("SLOTID_HORSE_MOUSTACHE");
		case 254:
			return joaat("SLOTID_HORSE_REINS");
		case 255:
			return joaat("SLOTID_HORSE_SADDLE");
		case 256:
			return 1221327846;
		case 257:
			return 923162715;
		case 258:
			return 625423581;
		case 259:
			return 326668608;
		case 260:
			return 669530755;
		case 261:
			return 429759982;
		case 262:
			return -2111934838;
		case 263:
			return 1886178087;
		case 264:
			return 1587783573;
		case 265:
			return -279722001;
		case 266:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 267:
			return 724026534;
		case 268:
			return joaat("SLOTID_HORSE_SEAT");
		case 269:
			return joaat("SLOTID_HORSE_SEX");
		case 270:
			return joaat("SLOTID_HORSE_SKIRT");
		case 271:
			return -1824203570;
		case 272:
			return -1654197998;
		case 273:
			return 798987653;
		case 274:
			return 976923323;
		case 275:
			return 1167442289;
		case 276:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 277:
			return joaat("SLOTID_HORSE_TAIL");
		case 278:
			return -2015960939;
		case 279:
			return 1132377945;
		case 280:
			return 739936401;
		case 281:
			return 1201880974;
		case 282:
			return 819728896;
		case 283:
			return 1746010219;
		case 284:
			return 1433393959;
		case 285:
			return -1287636759;
		case 286:
			return -706917073;
		case 287:
			return -2166805;
		case 288:
			return -1391602433;
		case 289:
			return 1782075221;
		case 290:
			return 1282544585;
		case 291:
			return 1732594027;
		case 292:
			return -1058817012;
		case 293:
			return 1090546265;
		case 294:
			return 1460218602;
		case 295:
			return -1783120823;
		case 296:
			return -1535745896;
		case 297:
			return -2086922122;
		case 298:
			return -1675198649;
		case 299:
			return 1189497682;
		case 300:
			return -1565675519;
		case 301:
			return -268973591;
		case 302:
			return 1039159916;
		case 303:
			return 1111816631;
		case 304:
			return 405591388;
		case 305:
			return 897456793;
		case 306:
			return 104187473;
		case 307:
			return 773808542;
		case 308:
			return -1120669954;
		case 309:
			return -1389278274;
		case 310:
			return 552979403;
		case 311:
			return -1571578784;
		case 312:
			return -708312114;
		case 313:
			return 688823508;
		case 314:
			return -1622147240;
		case 315:
			return 830292162;
		case 316:
			return 226276782;
		case 317:
			return -678416628;
		case 318:
			return -1098528034;
		case 319:
			return -629387103;
		case 320:
			return 316207340;
		case 321:
			return -1909200748;
		case 322:
			return -939652363;
		case 323:
			return joaat("SLOTID_PROGRESSION");
		case 324:
			return 2011227407;
		case 325:
			return -375447933;
		case 326:
			return 537014919;
		case 327:
			return 1784584921;
		case 328:
			return -140655024;
		case 329:
			return 1084182731;
		case 330:
			return -1045471300;
		case 331:
			return 1617414719;
		case 332:
			return -787761753;
		case 333:
			return -490616606;
		case 334:
			return 1491346514;
		case 335:
			return -1360128126;
		case 336:
			return -1311702610;
		case 337:
			return -904250715;
		case 338:
			return 1034665895;
		case 339:
			return -101524555;
		case 340:
			return 1419152594;
		case 341:
			return -451359317;
		case 342:
			return -1915385310;
		case 343:
			return 1315162488;
		case 344:
			return -361152079;
		case 345:
			return -2041626192;
		case 346:
			return -2077812539;
		case 347:
			return -1371514637;
		case 348:
			return 1730017037;
		case 349:
			return 892816668;
		case 350:
			return -1994943603;
		case 351:
			return 603133554;
		case 352:
			return -30160144;
		case 353:
			return -1248299493;
		case 354:
			return 727393558;
		case 355:
			return 755611221;
		case 356:
			return -170255458;
		case 357:
			return 1011151573;
		case 358:
			return 1122339631;
		case 359:
			return 454815308;
		case 360:
			return 990701735;
		case 361:
			return -246340825;
		case 362:
			return -1410671073;
		case 363:
			return 1547608292;
		case 364:
			return -714132970;
		case 365:
			return 732290690;
		case 366:
			return 971340545;
		case 367:
			return -234132662;
		case 368:
			return -2143057988;
		case 369:
			return -993947465;
		case 370:
			return -486552269;
		case 371:
			return -1156317860;
		case 372:
			return 1229625803;
		case 373:
			return -388596167;
		case 374:
			return -1204639465;
		case 375:
			return -1384685096;
		case 376:
			return -2026728113;
		case 377:
			return -1228057307;
		case 378:
			return 1835126290;
		case 379:
			return 1890833594;
		case 380:
			return -751549960;
		case 381:
			return -1682270750;
		case 382:
			return -1839865333;
		case 383:
			return -1990383629;
		case 384:
			return 1712094016;
		case 385:
			return 1532953697;
		case 386:
			return 1620318083;
		case 387:
			return -307230331;
		case 388:
			return -1034549620;
		case 389:
			return -1293064293;
		case 390:
			return -1540142553;
		case 391:
			return -1769886012;
		case 392:
			return -1983081126;
		case 393:
			return -1106117124;
		case 394:
			return -1873108338;
		case 395:
			return -2097543219;
		case 396:
			return 155413195;
		case 397:
			return -1162387149;
		case 398:
			return joaat("SLOTID_WEAPON_0");
		case 399:
			return joaat("SLOTID_WEAPON_1");
		case 400:
			return -1876502240;
		case 401:
			return -2107032155;
		case 402:
			return 1570861011;
		case 403:
			return 1075981185;
		case 404:
			return 960195961;
		case 405:
			return 1150460649;
		case 406:
			return 1689424794;
		case 407:
			return 619103418;
		case 408:
			return 1355448197;
		case 409:
			return 1681762005;
		case 410:
			return 1026887814;
		case 411:
			return 354352628;
		case 412:
			return 1519366642;
		case 413:
			return -82757515;
		case 414:
			return 386306655;
		case 415:
			return 1243962119;
		case 416:
			return 756214903;
		case 417:
			return -718417579;
		case 418:
			return -1445516411;
		case 419:
			return 1232060796;
		case 420:
			return -672392892;
		case 421:
			return 1465341584;
		case 422:
			return -427758369;
		case 423:
			return -735647142;
		case 424:
			return 1535838048;
		case 425:
			return -602272282;
		case 426:
			return 2051264661;
		case 427:
			return 487172188;
		case 428:
			return 282270687;
		case 429:
			return 1607708943;
		case 430:
			return 1686264939;
		case 431:
			return 314786149;
		case 432:
			return 1402841185;
		case 433:
			return 1099170772;
		case 434:
			return 2125676786;
		case 435:
			return -363896735;
		case 436:
			return -468790222;
		case 437:
			return -1779133048;
		case 438:
			return 1732537631;
		case 439:
			return 1755095401;
		case 440:
			return 835771095;
		case 441:
			return 1963317232;
		case 442:
			return 259627919;
		case 443:
			return 1299075397;
		case 444:
			return -1509094230;
		case 445:
			return 61132362;
		case 446:
			return 1549741908;
		case 447:
			return 288484254;
		case 448:
			return -1877032947;
		case 449:
			return -1395676456;
		case 450:
			return 1136146715;
		case 451:
			return 468034421;
		case 452:
			return 1079459546;
		case 453:
			return -140369351;
		case 454:
			return 1822341990;
		case 455:
			return 1219701681;
		case 456:
			return 1601295268;
		case 457:
			return -1692460667;
		case 458:
			return 1471419228;
		case 459:
			return 907446160;
		case 460:
			return -1126482585;
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return 1261891225;
		case 464:
			return 763162704;
		case 465:
			return 1335861197;
		case 466:
			return 526744654;
		case 467:
			return -1177461517;
		case 468:
			return -241638635;
		case 469:
			return 1024262875;
		case 470:
			return 853355463;
		case 471:
			return -337288221;
		case 472:
			return 361381308;
		case 473:
			return -1264898804;
		case 474:
			return -585289073;
		case 475:
			return 1423542233;
		case 476:
			return -948489286;
		case 477:
			return 2063859257;
		case 478:
			return -1652627327;
		case 479:
			return -1959697839;
		case 480:
			return -1532267859;
		case 481:
			return -1410062763;
		case 482:
			return -901428716;
		case 483:
			return -1628873469;
		case 484:
			return 144855571;
		case 485:
			return -617589883;
		case 486:
			return -1306457086;
		case 487:
			return 1713542477;
		case 488:
			return -305542365;
		case 489:
			return 1985390213;
		case 490:
			return -2145069367;
		case 491:
			return -1674390752;
		case 492:
			return -2117214398;
		case 493:
			return 1880805647;
		case 494:
			return -62390436;
		case 495:
			return 1815288415;
		case 496:
			return 196214097;
		case 497:
			return -201958220;
		case 498:
			return 244353594;
		case 499:
			return 302954672;
		case 500:
			return -1870144662;
		case 501:
			return 257892944;
		case 502:
			return -607182722;
		case 503:
			return -13254502;
		case 504:
			return 1400281261;
		case 505:
			return 1601515402;
		case 506:
			return -940704970;
		case 507:
			return -548371721;
		case 508:
			return -1022384613;
		case 509:
			return -357406394;
		case 510:
			return 1077068189;
		case 511:
			return -782241404;
		case 512:
			return 1669853467;
		case 513:
			return 1592019450;
		case 514:
			return 635273153;
		case 515:
			return -1559225678;
		case 516:
			return -266425508;
		case 517:
			return 1117400455;
		case 518:
			return 454332195;
		case 519:
			return -1328061889;
		case 520:
			return 561650932;
		case 521:
			return 256105670;
		case 522:
			return 1976779618;
		case 523:
			return -269095126;
		case 524:
			return 2145617267;
		case 525:
			return 1150213537;
		case 526:
			return 1598825281;
		case 527:
			return -712527121;
		case 528:
			return 1308553072;
		case 529:
			return 852866398;
		case 530:
			return -1794417972;
		case 531:
			return 293062146;
		case 532:
			return 95360094;
		case 533:
			return 807631773;
		case 534:
			return 1603958275;
		case 535:
			return 860052020;
		case 536:
			return -1885979781;
		case 537:
			return 746147970;
		case 538:
			return 666663006;
		case 539:
			return -2096186453;
		case 540:
			return 859409444;
		case 541:
			return -671427187;
		case 542:
			return 100192478;
		case 543:
			return 307812616;
		case 544:
			return 1670843243;
		case 545:
			return 899615863;
		case 546:
			return -298901850;
		case 547:
			return 1379186917;
		case 548:
			return -817206030;
		case 549:
			return -1150323212;
		case 550:
			return -247466821;
		case 551:
			return 427124242;
		case 552:
			return 855418120;
		case 553:
			return -777015093;
		case 554:
			return -722462870;
		case 555:
			return -937454324;
		case 556:
			return -339438116;
		case 557:
			return 2135639035;
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return 495693044;
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return 359221401;
		case 570:
			return 1005272;
		case 571:
			return 1583044470;
		case 572:
			return 348853959;
		case 573:
			return 1045621973;
		case 574:
			return 1084576580;
		case 575:
			return 1651573695;
		case 576:
			return 1463321587;
		case 577:
			return -997505963;
		case 578:
			return -1649851713;
		case 579:
			return -386012962;
		case 580:
			return 1227915917;
		case 581:
			return -218846335;
		case 582:
			return -352578118;
		case 583:
			return 1426626782;
		case 584:
			return -714081520;
		case 585:
			return 74547781;
		case 586:
			return 1271463052;
		case 587:
			return 1983140194;
		case 588:
			return 677262775;
		case 589:
			return -832337898;
		case 590:
			return -319249747;
		case 591:
			return -16955722;
		case 592:
			return -1535425646;
		case 593:
			return -1063641743;
		case 594:
			return -1041133401;
		case 595:
			return 1380479304;
		case 596:
			return 600890828;
		case 597:
			return 733333190;
		case 598:
			return 1843035435;
		case 599:
			return -304127320;
		case 600:
			return 122470371;
		case 601:
			return 0;
		case 602:
			return -1591664384;
		case 603:
			return -673000374;
		case 604:
			return -1150938404;
		case 605:
			return -1756997214;
		case 606:
			return -813824107;
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

bool func_792(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_841(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_624(*uParam1, &Var0, bParam6, 0))
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
	if (!func_793(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_472(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_793(bool bParam0)
{
	if (func_265() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_472(bParam0));
}

int func_794(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_842(iParam0))
	{
		return 0;
	}
	if (!func_793(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_795(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_843(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_796(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_797(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_472(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_798(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_799(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_800(int iParam0)
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

bool func_801(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_802(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_803(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_804(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_805(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_806(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_807()
{
	return Global_1946054.f_1;
}

void func_808(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_809(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_810(var uParam0, int iParam1)
{
	int iVar0;

	if (func_265() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_808(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_809(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_811(int iParam0, int iParam1, int iParam2)
{
	if (func_265() == -1)
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

void func_812(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_813()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_814(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_815()
{
	float fVar0;
	int iVar1;

	fVar0 = func_844(13);
	iVar1 = func_845(fVar0);
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

float func_816()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_817()
{
	if (func_846())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_818()
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

float func_819()
{
	return Global_1954815.f_3;
}

void func_820(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_735(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_821(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_735(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

float func_822(float fParam0, float fParam1, float fParam2)
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

bool func_823()
{
	return func_844(12) <= -99f;
}

bool func_824()
{
	return func_844(12) >= 99f;
}

bool func_825(int iParam0, bool bParam1)
{
	switch (func_542(iParam0))
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

bool func_826(int iParam0, int iParam1, int iParam2)
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

bool func_827(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_847(iParam0);
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

int func_828(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_848(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_829(int iParam0, int iParam1)
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
		if (func_654(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_830(int iParam0)
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

void func_831(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

bool func_832(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

void func_833(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_834(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_479(iParam0))
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
	if (!func_479(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_835(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_772(iParam0, 1);
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

bool func_836()
{
	int iVar0;

	iVar0 = Global_1946054.f_529[9];
	iVar0 = (iVar0 + Global_1946054.f_529[4]);
	iVar0 = (iVar0 + Global_1946054.f_529[10]);
	iVar0 = (iVar0 + Global_1946054.f_529[1]);
	iVar0 = (iVar0 + Global_1946054.f_529[2]);
	iVar0 = (iVar0 + Global_1946054.f_529[6]);
	iVar0 = (iVar0 + Global_1946054.f_529[29]);
	iVar0 = (iVar0 + Global_1946054.f_529[26]);
	iVar0 = (iVar0 + Global_1946054.f_529[18]);
	iVar0 = (iVar0 + Global_1946054.f_529[19]);
	return iVar0 > 0;
}

bool func_837(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_428(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_849(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_797("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_798(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_446(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_800(iVar1);
				return true;
			}
			iVar3++;
		}
		func_800(iVar1);
	}
	return false;
}

int func_838(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_617(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_849(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_850(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_472(bParam2), iParam0, 0);
	return iVar2;
}

int func_839()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_799(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_799(iVar0)) || iVar0 == joaat("WEAPON_LASSO"))
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

int func_840(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

bool func_841(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_842(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_843(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

float func_844(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_845(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

bool func_846()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_847(int iParam0)
{
	int iVar0;
	int iVar1;

	func_851(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_848(int iParam0, int iParam1)
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

int func_849(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_428(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_617(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_626(iParam0, 1399091007))
	{
		func_852(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_850(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_853(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_854(&Var0, func_618(0));
	}
	if (!func_855(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_800(iVar18);
	return iVar19;
}

int func_851(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_856(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_852(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_853(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<18> /*144*/ sVar0;

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
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
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

void func_854(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_855(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_472(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_856(int iParam0, int iParam1)
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

