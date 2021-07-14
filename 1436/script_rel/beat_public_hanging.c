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
	int iLocal_14[3] = { 0, 0, 0 };
	var uLocal_18 = 5;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	char cLocal_59[64] = "";
	char cLocal_67[64] = "";
	int iLocal_75 = 0;
	struct<2> /*16*/ sLocal_76[16];
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<193> /*1544*/ sLocal_111 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_304 = 0;
	struct<32> /*256*/ sLocal_305[16];
	struct<12> /*96*/ sLocal_818[7];
	struct<8> /*64*/ sLocal_903 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> /*64*/ sLocal_911 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_919 = 0;
	struct<23> /*184*/ sLocal_920 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_963[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_980 = 0;
	var uLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	var uLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	float fLocal_1030 = 0f;
	float fLocal_1031 = 0f;
	float fLocal_1032 = 0f;
	float fLocal_1033[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1050 = 0f;
	vector3 vLocal_1051 = { 0f, 0f, 0f };
	vector3 vLocal_1054 = { 0f, 0f, 0f };
	vector3 vLocal_1057 = { 0f, 0f, 0f };
	vector3 vLocal_1060 = { 0f, 0f, 0f };
	vector3 vLocal_1063[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_1082 = { 0f, 0f, 0f };
	vector3 vLocal_1085 = { 0f, 0f, 0f };
	int iLocal_1088[3] = { 0, 0, 0 };
	int iLocal_1092 = 0;
	int iLocal_1093 = 0;
	int iLocal_1094 = 0;
	int iLocal_1095 = 0;
	int iLocal_1096[2] = { 0, 0 };
	int iLocal_1099 = 0;
	int iLocal_1100 = 0;
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	char cLocal_1104[32] = "";
	char cLocal_1108[32] = "";
	char cLocal_1112[32] = "";
	char cLocal_1116[32] = "";
	int iLocal_1120 = 0;
	struct<17> /*136*/ sLocal_1121[2];
	struct<17> /*136*/ sLocal_1156[2];
	struct<17> /*136*/ sLocal_1191[2];
	struct<17> /*136*/ sLocal_1226[2];
	struct<17> /*136*/ sLocal_1261[2];
	int iLocal_1296 = 0;
	int iLocal_1297[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1303[5] = { 0, 0, 0, 0, 0 };
	struct<21> /*168*/ sLocal_1309[5];
	var uLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	bool bLocal_1421 = false;
	bool bLocal_1422 = false;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	var uLocal_1437 = 0;
	int iLocal_1438 = 0;
	float fLocal_1439 = 0f;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	int iLocal_1443 = 0;
	char[] cLocal_1444[8] = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	vector3 vLocal_1447 = { 0f, 0f, 0f };
	var uLocal_1450 = 0;
	struct<23> /*184*/ sLocal_1451 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	bool bLocal_1476 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void main()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_109 = -1;
	fLocal_1050 = 7f;
	iLocal_1120 = -1;
	iLocal_1429 = -1;
	cLocal_1444 = "HNGP";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1422 = true;
	}
	if (!bLocal_1422)
	{
		Local_111.f_3 = func_1(&vScriptParam_0);
		Local_111.f_43 = func_2();
		Local_111.f_161 = func_3(vScriptParam_0.z, 2);
		func_4(&(Local_111.f_5), 1);
		func_5(&(Local_111.f_5), 0);
		func_6(&(Local_111.f_5), 1);
		func_7(&(Local_111.f_5), 1);
		func_8(&(Local_111.f_5), 1);
		func_9(&(Local_111.f_5), 0);
		func_10(&(Local_111.f_5), 1);
		func_11(&(Local_111.f_5), 1);
		func_12(&(Local_111.f_5), 1);
		func_13(&(Local_111.f_5), (15f + 5f));
		func_14(&(Local_111.f_5), BUILTIN::ROUND((1000f * 1.5f)));
		func_15();
	}
	while (true)
	{
		func_17(bLocal_1422, 2073, 0);
		if (bLocal_1422)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1417)
			{
				case 0:
					if (iLocal_109 == -1)
					{
						func_15();
					}
					else if (func_18())
					{
						iLocal_1417 = 1;
					}
					break;
				case 1:
					if (func_19(&Local_111, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_20(&Local_111, &uLocal_1446, &uLocal_1445);
						func_21();
						func_22();
						func_23();
						func_24(Local_111.f_51, &Local_818, Local_111.f_51.f_3, 0, 0, -1, 0);
						ENTITY::SET_ENTITY_COORDS(Local_818[0 /*12*/].f_8, vLocal_1054, true, false, true, true);
						ENTITY::SET_ENTITY_VISIBLE(Local_818[0 /*12*/].f_8, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_818[0 /*12*/].f_8, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_818[0 /*12*/].f_8, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, false);
						}
						func_25(0);
						iLocal_1417 = 3;
					}
					else if (Local_111.f_160)
					{
						func_16();
					}
					break;
				case 3:
					func_26();
					if (func_27())
					{
						if (func_28())
						{
							if (func_29())
							{
								func_30(iLocal_946[1], &Local_111, 0);
								func_30(iLocal_946[0], &Local_111, 0);
								func_30(iLocal_946[7], &Local_111, 0);
								func_31(iLocal_946[0], 0, 1);
								func_32();
								func_33();
								func_34(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
								iLocal_1417 = 4;
							}
						}
					}
					else
					{
						if (!func_35(&uLocal_1015))
						{
							func_36(&uLocal_1015);
						}
						else if (func_37(&uLocal_1015) > 10f)
						{
							func_16();
						}
						else if (!Local_111.f_161)
						{
							if ((!ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, Local_111.f_51, true) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, vLocal_1060, true)) || func_38(Global_35, Local_111.f_51, 1) < 20f)
							{
								func_16();
							}
						}
						if (func_39(&Local_111, &iLocal_946, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
						{
							func_16();
						}
					}
					break;
				case 4:
					if (!func_40(&Local_111, &iLocal_946, iLocal_109, 0, 1, 0, 1, 0))
					{
						func_16();
					}
					if (!Local_111.f_46)
					{
						if (func_41())
						{
							Local_111.f_46 = 1;
							func_42(0);
							EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
							if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
							{
								if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
								{
									ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Local_903, "LIST");
									ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8);
								}
								PHYSICS::ACTIVATE_PHYSICS(Local_818[2 /*12*/].f_8);
							}
							if (iLocal_109 == 1)
							{
								if (!func_43(iLocal_946[0], 0, 1) && Local_111.f_5.f_10 == iLocal_946[4])
								{
									func_44(iLocal_946[6], 0, "RE_PH_VAL_V1_WIFE_AGGRO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
							}
							func_45(Local_903);
							func_46();
							iLocal_1420 = iLocal_1419;
							func_6(&(Local_111.f_5), 0);
							func_8(&(Local_111.f_5), 0);
							func_12(&(Local_111.f_5), 0);
							func_4(&(Local_111.f_5), 0);
							func_47(&(Local_111.f_5), &iLocal_1419);
							func_48(iLocal_1099);
							func_48(iLocal_1094);
							func_48(iLocal_1096[0]);
							func_48(iLocal_1096[1]);
							func_48(iLocal_1100);
							func_49(&iLocal_1092, &uLocal_981);
							iLocal_110 = 5;
						}
					}
					if (func_50())
					{
						Local_111.f_50 = 1;
						Local_111.f_44 = 1;
						func_16();
					}
					if (func_39(&Local_111, &iLocal_946, func_51(iLocal_1019, 2048), 0, 1, func_52(), 1, 1, 0, 0, 0, 0, 0))
					{
						func_16();
					}
					break;
			}
			BUILTIN::WAIT(Local_111.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 1024);
	}
	else
	{
		func_54(iParam0, 1024);
	}
}

void func_5(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(&(uParam0->f_1), 256);
	}
	else
	{
		func_53(&(uParam0->f_1), 256);
	}
}

void func_6(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(&(uParam0->f_1), 16384);
	}
	else
	{
		func_53(&(uParam0->f_1), 16384);
	}
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(&(uParam0->f_1), 2048);
	}
	else
	{
		func_53(&(uParam0->f_1), 2048);
	}
}

void func_8(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 16);
	}
	else
	{
		func_54(iParam0, 67108864);
		func_54(iParam0, 16);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(&(uParam0->f_1), 1024);
	}
	else
	{
		func_53(&(uParam0->f_1), 1024);
	}
}

void func_10(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 256);
	}
	else
	{
		func_54(iParam0, 256);
	}
}

void func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 128);
	}
	else
	{
		func_54(iParam0, 128);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 32);
	}
	else
	{
		func_54(iParam0, 32);
	}
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_14(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_15()
{
	switch (func_2())
	{
		case 76:
			if (Local_111.f_161)
			{
				iLocal_109 = 1;
			}
			if (func_55(106, 1) != 7)
			{
				iLocal_109 = 1;
			}
			if (func_56(87, 2097152))
			{
				if (func_55(87, 0) == 3 && func_55(106, 3) != 7)
				{
					func_57();
					iLocal_109 = 3;
				}
			}
			if (func_55(84, 0) == 3 || func_55(84, 1) == 3)
			{
				if (func_55(106, 4) != 7)
				{
					if (func_58())
					{
						if (func_59(84, 6) == 2)
						{
							func_60(&iLocal_1296, 524288);
						}
					}
					else if (func_59(84, 6) == 1)
					{
						func_60(&iLocal_1296, 524288);
					}
					func_57();
					iLocal_109 = 4;
				}
			}
			break;
		case 105:
			if (Local_111.f_161)
			{
				iLocal_109 = 3;
			}
			if (func_55(87, 0) == 3 && func_55(106, 3) != 7)
			{
				func_57();
				iLocal_109 = 3;
			}
			if ((func_61(13) && func_55(106, 5) == 3) && func_55(106, 5) != 7)
			{
				if (func_62(106, 5))
				{
					func_57();
					iLocal_109 = 5;
				}
			}
			break;
		case 5:
			if (Local_111.f_161)
			{
				iLocal_109 = 7;
			}
			if (((func_61(12) && func_55(106, 6) == 3) && func_55(106, 6) != 7) && func_62(106, 6))
			{
				func_57();
				iLocal_109 = 6;
			}
			if ((func_55(30, 3) == 3 && func_55(106, 7) != 7) && func_62(106, 7))
			{
				func_57();
				iLocal_109 = 7;
			}
			break;
		case 38:
			if (Local_111.f_161)
			{
				iLocal_109 = 0;
			}
			if ((func_61(18) && func_55(106, 0) == 3) && func_55(106, 0) != 7)
			{
				func_57();
				iLocal_109 = 0;
			}
			if ((func_61(17) && func_55(106, 8) == 3) && func_55(106, 8) != 7)
			{
				func_57();
				iLocal_109 = 8;
			}
			break;
	}
}

void func_16()
{
	int iVar0;

	if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
	{
		PHYSICS::_0x751DF00EEFF122E3(iLocal_945);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
	{
		func_63(Local_818[2 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1423))
	{
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_1423);
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1423))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_1426, true);
		ENTITY::_UNPIN_MAP_ENTITY(iLocal_1424);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[3 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[3 /*12*/].f_8));
	}
	AUDIO::_0x531A78D6BF27014B("REPH_SOUNDS");
	func_42(0);
	if (func_55(Local_111.f_3, iLocal_109) != 7)
	{
		Local_111.f_45 = 0;
	}
	else if (iLocal_109 == 8 || iLocal_109 == 0)
	{
		if (func_51(iLocal_1019, 1))
		{
			func_64(113, 1, 0, 0, 12, 0, 0, 1);
		}
		else
		{
			func_64(113, 1, 0, 0, 0, 1, 0, 1);
		}
	}
	if (bLocal_1476)
	{
		func_65(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[1]) && iLocal_1120 != -1)
	{
		if (func_66(iLocal_946[1], 1))
		{
			func_67(iLocal_1120, 0, 1, 0, 0);
		}
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (PED::_0xCC2B20596E29E4E3(iLocal_946[iVar0], 93))
		{
			PED::_0x78815FC52832B690(iLocal_946[iVar0], 1);
		}
		iVar0++;
	}
	if (iLocal_982 != 0)
	{
		PED::_0x13E7320C762F0477(iLocal_982);
	}
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_945) && func_51(iLocal_1019, 1))
	{
		PED::DELETE_PED(&(iLocal_946[0]));
	}
	if (!Local_111.f_48)
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			PHYSICS::DELETE_ROPE(&iLocal_945);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8))
		{
			func_63(Local_818[1 /*12*/].f_8, 1, 1);
			OBJECT::DELETE_OBJECT(&(Local_818[1 /*12*/].f_8));
		}
		func_68(&(iLocal_946[0]));
	}
	if (func_43(iLocal_946[1], 0, 1))
	{
		func_69();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[1]));
		iLocal_946[1] = 0;
	}
	if (func_43(iLocal_946[3], 0, 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[3]));
		iLocal_946[3] = 0;
	}
	if (func_43(iLocal_946[2], 0, 1))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[2]));
		iLocal_946[2] = 0;
	}
	func_70(&Local_111, &iLocal_946, &uLocal_963, iLocal_109, uLocal_1446, uLocal_1445, 0, 1, 0, 1);
	func_71(&Local_818);
	func_49(&iLocal_1092, &uLocal_981);
	func_72();
	if (func_51(iLocal_1019, 32768) && !func_51(iLocal_1019, 64))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	func_73(&(Local_111.f_162), 1, 1);
	func_74(iLocal_1093, 0, 16);
	func_74(iLocal_1094, 0, 16);
	func_48(iLocal_1099);
	func_48(iLocal_1101);
	func_48(iLocal_1102);
	func_48(iLocal_1103);
	if (func_51(iLocal_1020, 524288))
	{
		LAW::_0x15ABD5004CAD2D99(-1);
	}
	if (STREAMING::IS_IPL_ACTIVE_HASH(-687151759))
	{
		STREAMING::REMOVE_IPL_HASH(-687151759);
	}
	func_25(1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(&cLocal_1116);
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_17(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_75(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_18()
{
	vector3 vVar0;

	switch (iLocal_1416)
	{
		case 0:
			if (func_76(&Local_111))
			{
				iLocal_984 = func_2();
				func_77();
				func_78();
				func_79();
				func_80();
				func_81(8000);
				func_82();
				func_83();
				if (iLocal_984 == 105)
				{
					STREAMING::REQUEST_IPL_HASH(-687151759);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_1116);
				}
				func_84();
				func_85();
				STREAMING::REQUEST_MODEL(iLocal_983, false);
				func_86(&Local_818);
				iLocal_1416 = 1;
			}
			break;
		case 1:
			if (func_87(vLocal_1051))
			{
				func_83();
			}
			if (!func_88(&uLocal_1415, cLocal_1444))
			{
				return false;
			}
			if (!func_89(&uLocal_18))
			{
				return false;
			}
			if (!func_90(&Local_305))
			{
				return false;
			}
			if (!func_91(&Local_818))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_983))
			{
				return false;
			}
			if (!func_92())
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_1116))
				{
					return false;
				}
			}
			if (!AUDIO::PREPARE_SOUNDSET("REPH_Sounds", false))
			{
				return false;
			}
			if (!func_51(iLocal_1019, 16))
			{
				if (func_93())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1425, 1);
					func_60(&iLocal_1019, 16);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1425, true, false) };
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1426, false);
				}
				else
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_19(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_94(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_95(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_96(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_97(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_98(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_20(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

void func_21()
{
	switch (func_2())
	{
		case 76:
			vLocal_1063[0 /*3*/] = { -246.1438f, 737.3981f, 115.4277f };
			vLocal_1063[1 /*3*/] = { -398.7397f, 665.9151f, 113.9332f };
			vLocal_1063[2 /*3*/] = { -296.851f, 787.2361f, 117.2366f };
			vLocal_1063[3 /*3*/] = { -327.1487f, 793.9059f, 116.8969f };
			vLocal_1063[4 /*3*/] = { -327.8563f, 784.8046f, 115.4862f };
			vLocal_1063[5 /*3*/] = { -315.8952f, 795.1304f, 116.6643f };
			break;
		case 105:
			vLocal_1063[0 /*3*/] = { 1375.769f, -1314.466f, 76.32277f };
			vLocal_1063[1 /*3*/] = { 1318.407f, -1296.664f, 75.25097f };
			vLocal_1063[2 /*3*/] = { 1411.61f, -1150.471f, 74.77523f };
			vLocal_1063[3 /*3*/] = { 1305.627f, -1144.795f, 80.3402f };
			break;
		case 5:
			vLocal_1063[0 /*3*/] = { 2722.911f, -1114.496f, 48.62066f };
			vLocal_1063[1 /*3*/] = { 2704.802f, -1150.268f, 49.52885f };
			vLocal_1063[2 /*3*/] = { 2655.789f, -1101.003f, 48.43829f };
			vLocal_1063[3 /*3*/] = { 2666.892f, -1154.844f, 50.07262f };
			break;
		case 38:
			vLocal_1063[0 /*3*/] = { -792.7476f, -1260.206f, 42.64177f };
			vLocal_1063[1 /*3*/] = { -779.3338f, -1214.716f, 42.52651f };
			vLocal_1063[2 /*3*/] = { -743.7635f, -1329.622f, 42.31908f };
			vLocal_1063[3 /*3*/] = { -749.9644f, -1226.849f, 42.28955f };
			break;
	}
}

void func_22()
{
	func_99(&(Local_305[0 /*32*/].f_22));
	func_99(&(Local_305[1 /*32*/].f_22));
	func_99(&(Local_305[2 /*32*/].f_22));
	func_99(&(Local_305[3 /*32*/].f_22));
	switch (func_2())
	{
		case 76:
			Local_305[0 /*32*/].f_6 = { -315.2755f, 733.6245f, 119.6267f };
			Local_305[0 /*32*/].f_9 = 97.3323f;
			Local_305[1 /*32*/].f_6 = { -316.742f, 735.309f, 119.587f };
			Local_305[1 /*32*/].f_9 = -74.959f;
			Local_305[2 /*32*/].f_6 = { -314.392f, 731.0801f, 119.6233f };
			Local_305[2 /*32*/].f_9 = 102.513f;
			Local_305[3 /*32*/].f_6 = { -311.3262f, 726.8218f, 119.6303f };
			Local_305[3 /*32*/].f_9 = 13.5013f;
			if (iLocal_109 == 1)
			{
				Local_305[4 /*32*/].f_6 = { -326.0518f, 730.278f, 117.2708f };
				Local_305[4 /*32*/].f_9 = 319.7657f;
				Local_305[5 /*32*/].f_6 = { -326.3795f, 730.9361f, 117.2685f };
				Local_305[5 /*32*/].f_9 = 283.096f;
				Local_305[6 /*32*/].f_6 = { -323.824f, 735.172f, 117.479f };
				Local_305[6 /*32*/].f_9 = 254.7158f;
				Local_305[7 /*32*/].f_6 = { -324.22f, 734.338f, 117.37f };
				Local_305[7 /*32*/].f_9 = 273.1146f;
				Local_305[8 /*32*/].f_6 = { -326.187f, 736.137f, 117.278f };
				Local_305[8 /*32*/].f_9 = 267.585f;
				Local_305[9 /*32*/].f_6 = { -322.886f, 730.317f, 117.257f };
				Local_305[9 /*32*/].f_9 = 310.6333f;
				Local_305[10 /*32*/].f_6 = { -322.091f, 731.231f, 117.281f };
				Local_305[10 /*32*/].f_9 = 310.6558f;
				Local_305[11 /*32*/].f_6 = { -326.547f, 728.225f, 117.192f };
				Local_305[11 /*32*/].f_9 = 275.6932f;
				Local_305[12 /*32*/].f_6 = { -325.246f, 726.145f, 117.126f };
				Local_305[12 /*32*/].f_9 = 309.952f;
				Local_305[13 /*32*/].f_6 = { -326.316f, 737.104f, 117.169f };
				Local_305[13 /*32*/].f_9 = 288.0259f;
				Local_305[14 /*32*/].f_6 = { -328.244f, 733.929f, 117.237f };
				Local_305[14 /*32*/].f_9 = 262.5461f;
				Local_305[15 /*32*/].f_6 = { -327.226f, 732.895f, 117.247f };
				Local_305[15 /*32*/].f_9 = 278.8557f;
			}
			else if (iLocal_109 == 3 || iLocal_109 == 4)
			{
				Local_305[4 /*32*/].f_6 = { -322.574f, 728.984f, 117.46f };
				Local_305[4 /*32*/].f_9 = 319.7657f;
				Local_305[5 /*32*/].f_6 = { -322.763f, 729.894f, 117.479f };
				Local_305[5 /*32*/].f_9 = 283.096f;
				Local_305[6 /*32*/].f_6 = { -323.761f, 734.452f, 117.46f };
				Local_305[6 /*32*/].f_9 = 254.7158f;
				Local_305[7 /*32*/].f_6 = { -324.157f, 733.618f, 117.335f };
				Local_305[7 /*32*/].f_9 = 273.1146f;
				Local_305[8 /*32*/].f_6 = { -325.674f, 734.058f, 117.288f };
				Local_305[8 /*32*/].f_9 = 287.585f;
				Local_305[9 /*32*/].f_6 = { -325.077f, 728.763f, 117.247f };
				Local_305[9 /*32*/].f_9 = 310.6333f;
				Local_305[10 /*32*/].f_6 = { -325.282f, 729.677f, 117.26f };
				Local_305[10 /*32*/].f_9 = 310.6558f;
				Local_305[11 /*32*/].f_6 = { -328.009f, 730.349f, 117.13f };
				Local_305[11 /*32*/].f_9 = 275.6932f;
				Local_305[12 /*32*/].f_6 = { -327.708f, 728.269f, 117.027f };
				Local_305[12 /*32*/].f_9 = 309.952f;
				Local_305[13 /*32*/].f_6 = { -327.778f, 729.227f, 117.091f };
				Local_305[13 /*32*/].f_9 = 288.0259f;
				Local_305[14 /*32*/].f_6 = { -326.922f, 733.182f, 117.261f };
				Local_305[14 /*32*/].f_9 = 262.5461f;
				Local_305[15 /*32*/].f_6 = { -325.904f, 732.148f, 117.272f };
				Local_305[15 /*32*/].f_9 = 278.8557f;
			}
			break;
		case 105:
			Local_305[0 /*32*/].f_6 = { 1374.777f, -1215.151f, 83.24785f };
			Local_305[0 /*32*/].f_9 = 91f;
			Local_305[1 /*32*/].f_6 = { 1372.869f, -1213.106f, 83.27f };
			Local_305[1 /*32*/].f_9 = -80.5593f;
			Local_305[2 /*32*/].f_6 = { 1373.672f, -1217.438f, 83.2467f };
			Local_305[2 /*32*/].f_9 = 0.3456f;
			Local_305[3 /*32*/].f_6 = { 1372.142f, -1216.922f, 83.23697f };
			Local_305[3 /*32*/].f_9 = 86.7845f;
			Local_305[4 /*32*/].f_6 = { 1364.32f, -1216.12f, 83.6242f };
			Local_305[4 /*32*/].f_9 = 253.606f;
			Local_305[5 /*32*/].f_6 = { 1364.37f, -1217.08f, 83.6078f };
			Local_305[5 /*32*/].f_9 = 280.1082f;
			Local_305[6 /*32*/].f_6 = { 1366.43f, -1217.19f, 83.7504f };
			Local_305[6 /*32*/].f_9 = 259.3929f;
			Local_305[7 /*32*/].f_6 = { 1366.98f, -1216.25f, 83.7338f };
			Local_305[7 /*32*/].f_9 = 237.8315f;
			Local_305[8 /*32*/].f_6 = { 1368.87f, -1211.26f, 83.3578f };
			Local_305[8 /*32*/].f_9 = 218.6253f;
			Local_305[9 /*32*/].f_6 = { 1368.57f, -1212.43f, 83.4111f };
			Local_305[9 /*32*/].f_9 = 206.3422f;
			Local_305[10 /*32*/].f_6 = { 1368.38f, -1213.16f, 83.4406f };
			Local_305[10 /*32*/].f_9 = 274.9343f;
			break;
		case 5:
			Local_305[0 /*32*/].f_6 = { 2689.182f, -1113.964f, 51.85639f };
			Local_305[0 /*32*/].f_9 = 180f;
			Local_305[1 /*32*/].f_6 = { 2686.217f, -1114.775f, 51.83819f };
			Local_305[1 /*32*/].f_9 = 10f;
			Local_305[2 /*32*/].f_6 = { 2690.83f, -1112.662f, 51.86667f };
			Local_305[2 /*32*/].f_9 = 180f;
			Local_305[3 /*32*/].f_6 = { 2692.438f, -1112.092f, 51.86667f };
			Local_305[3 /*32*/].f_9 = 180f;
			if (iLocal_109 == 6)
			{
				Local_305[4 /*32*/].f_6 = { 2685.39f, -1119.85f, 50.6781f };
				Local_305[4 /*32*/].f_9 = 327.063f;
				Local_305[5 /*32*/].f_6 = { 2686.2f, -1120.16f, 50.6789f };
				Local_305[5 /*32*/].f_9 = 20.66444f;
				Local_305[8 /*32*/].f_6 = { 2689.08f, -1122.67f, 50.6953f };
				Local_305[8 /*32*/].f_9 = 290.6095f;
				Local_305[9 /*32*/].f_6 = { 2690.19f, -1122.2f, 50.6845f };
				Local_305[9 /*32*/].f_9 = 333.2772f;
				Local_305[10 /*32*/].f_6 = { 2690.89f, -1121.91f, 50.6755f };
				Local_305[10 /*32*/].f_9 = 41.86931f;
				Local_305[11 /*32*/].f_6 = { 2686.4f, -1122.98f, 50.7074f };
				Local_305[11 /*32*/].f_9 = 343.3552f;
				Local_305[12 /*32*/].f_6 = { 2672.54f, -1149.74f, 49.7751f };
				Local_305[12 /*32*/].f_9 = 356.2835f;
				Local_305[13 /*32*/].f_6 = { 2687.04f, -1123.36f, 50.7171f };
				Local_305[13 /*32*/].f_9 = 2.224846f;
				Local_305[14 /*32*/].f_6 = { 2685.63f, -1122.69f, 50.6958f };
				Local_305[14 /*32*/].f_9 = 339.1096f;
				Local_305[15 /*32*/].f_6 = { 2691.799f, -1119.679f, 49.67808f };
				Local_305[15 /*32*/].f_9 = 4.9479f;
			}
			else if (iLocal_109 == 7)
			{
				Local_305[4 /*32*/].f_6 = { 2685.39f, -1119.85f, 50.6781f };
				Local_305[4 /*32*/].f_9 = 327.063f;
				Local_305[5 /*32*/].f_6 = { 2686.19f, -1120.15f, 50.6789f };
				Local_305[5 /*32*/].f_9 = 15.11797f;
				Local_305[6 /*32*/].f_6 = { 2689.59f, -1118.63f, 50.6845f };
				Local_305[6 /*32*/].f_9 = 31.44691f;
				Local_305[7 /*32*/].f_6 = { 2688.78f, -1118.51f, 50.6853f };
				Local_305[7 /*32*/].f_9 = 358.8627f;
				Local_305[8 /*32*/].f_6 = { 2689.08f, -1122.67f, 50.6953f };
				Local_305[8 /*32*/].f_9 = 287.6396f;
				Local_305[9 /*32*/].f_6 = { 2690.19f, -1122.2f, 50.6845f };
				Local_305[9 /*32*/].f_9 = 333.2772f;
				Local_305[10 /*32*/].f_6 = { 2690.89f, -1121.91f, 50.6755f };
				Local_305[10 /*32*/].f_9 = 41.86931f;
				Local_305[11 /*32*/].f_6 = { 2686.4f, -1122.98f, 50.7074f };
				Local_305[11 /*32*/].f_9 = 343.3552f;
				Local_305[13 /*32*/].f_6 = { 2687.04f, -1123.36f, 50.7171f };
				Local_305[13 /*32*/].f_9 = 2.224846f;
				Local_305[14 /*32*/].f_6 = { 2685.63f, -1122.69f, 50.6958f };
				Local_305[14 /*32*/].f_9 = 339.1096f;
			}
			break;
		case 38:
			Local_305[0 /*32*/].f_6 = { -764.2183f, -1259.881f, 46.39884f };
			Local_305[0 /*32*/].f_9 = 0f;
			Local_305[1 /*32*/].f_6 = { -762.5f, -1259f, 46.44f };
			Local_305[1 /*32*/].f_9 = 167.5f;
			Local_305[2 /*32*/].f_6 = { -767.0446f, -1260.933f, 46.442f };
			Local_305[2 /*32*/].f_9 = 7.2982f;
			Local_305[3 /*32*/].f_6 = { -759.5256f, -1259.957f, 46.43755f };
			Local_305[3 /*32*/].f_9 = 2.7305f;
			Local_305[4 /*32*/].f_6 = { -758.162f, -1251.22f, 43.4261f };
			Local_305[4 /*32*/].f_9 = 125.292f;
			Local_305[5 /*32*/].f_6 = { -758.796f, -1250.63f, 43.4431f };
			Local_305[5 /*32*/].f_9 = 178.0354f;
			Local_305[6 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_305[6 /*32*/].f_9 = 70f;
			Local_305[7 /*32*/].f_6 = { 0f, 0f, 0f };
			Local_305[7 /*32*/].f_9 = 72.3f;
			Local_305[8 /*32*/].f_6 = { -761.321f, -1248.81f, 43.4796f };
			Local_305[8 /*32*/].f_9 = 145.104f;
			Local_305[9 /*32*/].f_6 = { -762.527f, -1248.86f, 43.4829f };
			Local_305[9 /*32*/].f_9 = 132.821f;
			Local_305[10 /*32*/].f_6 = { -763.282f, -1248.88f, 43.4712f };
			Local_305[10 /*32*/].f_9 = 201.43f;
			Local_305[11 /*32*/].f_6 = { -754.268f, -1249.2f, 43.4834f };
			Local_305[11 /*32*/].f_9 = 132.85f;
			Local_305[13 /*32*/].f_6 = { -754.63f, -1248.55f, 43.5213f };
			Local_305[13 /*32*/].f_9 = 151.72f;
			Local_305[14 /*32*/].f_6 = { -753.753f, -1249.84f, 43.444f };
			Local_305[14 /*32*/].f_9 = 128.6f;
			break;
	}
}

void func_23()
{
	int iVar0;

	iVar0 = func_2();
	switch (iVar0)
	{
		case 76:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-314.9988f, 730.95f, 120.9345f, 0f, 0f, 10.01027f, 3.492473f, 12.3367f, 5.852195f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-311.7058f, 727.1721f, 120.9345f, 0f, 0f, 10.01027f, 1.952122f, 3.419903f, 5.852195f, "volGallows_1");
			iLocal_1088[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.1932f, 729.9329f, 120.9345f, 0f, 0f, 10.01027f, 1.952122f, 2.144702f, 5.852195f, "volGallows_2");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.1509f, 730.9465f, 116.5724f, 0f, 0f, 9.358871f, 3.872445f, 12.2541f, 5.082661f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.1828f, 733.669f, 120.0525f, 0f, 0f, 9.724305f, 1.096262f, 3.183935f, 2.053951f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.6089f, 730.8422f, 122.4587f, 0f, 0f, 10.01027f, 4.911602f, 12.3367f, 5.852195f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1099 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-318.447f, 738.67f, 119.023f, 0f, 0f, 9.724f, 5.72f, 5.096f, 5.672f, "m_volCrowdLeaveAvoid");
			POPULATION::_0xB56D41A694E42E86(iLocal_1099, 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-324.482f, 731.722f, 116.33f, 0f, 0f, 0f, 7.03f, 10f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-315.013f, 730.563f, 120.451f, 0f, 0f, 9.724f, 2.5f, 1.75f, 1.75f, "m_volGallowsLever");
			func_100(&iLocal_1103, -314.236f, 731.085f, 120.935f, 0f, 0f, 10.01f, 5.104f, 12.337f, 5.852f, "m_volGallowsScenarios");
			PED::_0x4C39C95AE5DB1329(iLocal_1103, false, 15);
			break;
		case 105:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.03f, -1215.265f, 83.41333f, 0f, 0f, -4.741005f, 4.542981f, 5.232084f, 3.394588f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1372.817f, -1216.848f, 83.41333f, 0f, 0f, -4.741005f, 4.542981f, 1.490506f, 3.394588f, "volGallows_1");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1373.982f, -1215.159f, 82.05772f, 0f, 0f, -4.500815f, 4.515121f, 5.183119f, 1.977623f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.948f, -1215.235f, 84.12434f, 0f, 0f, -4.500815f, 1.072868f, 3.429681f, 1.977623f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.041f, -1213.258f, 84.845f, 0f, 0f, -4.75f, 4.173f, 1.419f, 3.395f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1096[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1374.769f, -1215.266f, 84.845f, 0f, 0f, -4.75f, 2.828f, 5.388f, 3.395f, "m_volInstantAggro_1");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[1], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1366.561f, -1214.614f, 82.744f, 0f, 0f, 0f, 4.935f, 7.247f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1373.779f, -1216.084f, 84.136f, 0f, 0f, -4.501f, 2f, 2f, 2f, "m_volGallowsLever");
			break;
		case 5:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.578f, -1113.029f, 53.17216f, 0f, 0f, 0.105545f, 6.384113f, 4.858785f, 3.215056f, "volGallows_0");
			iLocal_1088[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2693.601f, -1111.802f, 51.86667f, 0f, 0f, -0.28834f, 4.542981f, 1.490506f, 3.394588f, "volGallows_1");
			iLocal_1088[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2692.396f, -1113.742f, 52.6933f, 30.27421f, 0f, -0.28834f, 1.68353f, 4.396268f, 3.201546f, "volGallows_2");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.352f, -1113.003f, 50.029f, 0f, 0f, 88.49092f, 4.515121f, 5.183119f, 2.456721f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.455f, -1113.981f, 52.029f, 0f, 0f, 89.67352f, 1.010195f, 3.503941f, 1.977623f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.423f, -1113.541f, 53.34824f, 0f, 0f, 0.105545f, 6.148695f, 3.854978f, 3.215056f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2688.809f, -1120.589f, 49.678f, 0f, 0f, 0f, 10f, 6.536f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2690.478f, -1113.403f, 52.574f, 0f, 0f, 89.674f, 2.5f, 1.75f, 1.75f, "m_volGallowsLever");
			break;
		case 38:
			iLocal_1088[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.6794f, -1260.927f, 47.38294f, 0f, 0f, 0.105545f, 9.793867f, 5.776073f, 5.577005f, "volGallows_0");
			iLocal_1094 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.625f, -1261.017f, 44.395f, 0f, 0f, 90f, 5.643f, 7.931f, 5.083f, "m_volUnderGallows");
			POPULATION::_0xB56D41A694E42E86(iLocal_1094, 0, 0, 0, -1, -1, 0);
			iLocal_1093 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.699f, -1259.857f, 46.358f, 0f, 0f, 90f, 1.032f, 3.036f, 2.054f, "m_volGallowsDoor");
			iLocal_1096[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-764.6163f, -1260.929f, 49.15394f, 0f, 0f, 0.105545f, 7.838906f, 5.553155f, 5.577005f, "m_volInstantAggro_0");
			POPULATION::_0xB56D41A694E42E86(iLocal_1096[0], 0, 0, 0, -1, -1, 0);
			iLocal_1101 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.807f, -1251.237f, 42.46f, 0f, 0f, 0f, 13.632f, 7.392f, 10f, "m_volSuppressLowCrimes");
			iLocal_1102 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-767.09f, -1260.82f, 47.129f, 0f, 0f, 90f, 1.75f, 2.5f, 1.75f, "m_volGallowsLever");
			break;
	}
	func_74(iLocal_1094, 1, 16);
	func_60(&iLocal_1019, 1024);
	func_74(iLocal_1093, 1, 23);
	func_60(&iLocal_1019, 2097152);
	func_101();
	MISC::CLEAR_AREA(Local_305[0 /*32*/].f_6, 7.5f, 512);
}

int func_24(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_51((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) };
					if (func_51((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_51((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!func_51((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_102(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_51((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_87((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (func_51((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_103((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_51((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((iParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_51((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_51((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_SET_ENTITY_FADE_IN((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_25(bool bParam0)
{
	if (func_2() != 38)
	{
		return;
	}
	if (bParam0)
	{
		func_104(-764.3207f, -1252.488f, 42.41662f, 10f, 5);
	}
	else
	{
		func_105(-764.3207f, -1252.488f, 42.41662f, 10f, 0, 0, 4);
	}
}

void func_26()
{
	if (!STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(iLocal_983))
	{
		STREAMING::REQUEST_COLLISION_FOR_MODEL(iLocal_983);
	}
	if (!STREAMING::HAS_COLLISION_FOR_MODEL_LOADED(Local_818[3 /*12*/].f_7))
	{
		STREAMING::REQUEST_COLLISION_FOR_MODEL(Local_818[3 /*12*/].f_7);
	}
}

bool func_27()
{
	if (iLocal_1120 == -1 || func_51(iLocal_1296, -2147483648))
	{
		return true;
	}
	if (!func_106(iLocal_1120, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_946[1]))
		{
			iLocal_946[1] = func_107(iLocal_1120, 1, 0, 0, 1, 1);
			if (!func_43(iLocal_946[1], 0, 1))
			{
				if (func_108(iLocal_1120, 1))
				{
					iLocal_946[1] = func_107(iLocal_1120, 1, 0, 0, 1, 1);
				}
				else if (func_109(iLocal_1120, 1, Local_305[1 /*32*/].f_6, Local_305[1 /*32*/].f_6.f_1, Local_305[1 /*32*/].f_6.f_2, 0))
				{
					iLocal_946[1] = func_107(iLocal_1120, 1, 0, 0, 1, 1);
				}
			}
		}
	}
	if (func_43(iLocal_946[1], 0, 1))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[1], true);
			func_34(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
			ENTITY::SET_ENTITY_COORDS(iLocal_946[1], Local_305[0 /*32*/].f_6, true, false, true, true);
			func_60(&iLocal_1296, -2147483648);
			return true;
		}
	}
	return false;
}

bool func_28()
{
	switch (iLocal_1418)
	{
		case 0:
			iLocal_1418 = 1;
			break;
		case 1:
			if (!func_110(Local_111.f_51, Local_111.f_51.f_3, &Local_305, &iLocal_946, 1, 0, -1, 1))
			{
				return false;
			}
			if (!PED::IS_PED_READY_TO_RENDER(iLocal_946[0]))
			{
				return false;
			}
			func_111();
			iLocal_1418 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_29()
{
	switch (iLocal_1433)
	{
		case 0:
			func_112();
			iLocal_1433++;
			break;
		case 1:
			func_113();
			iLocal_1433++;
			break;
		case 2:
			func_114();
			iLocal_1433++;
			break;
		case 3:
			func_115();
			iLocal_1433++;
			break;
		case 4:
			func_116();
			iLocal_1433++;
			break;
		case 5:
			func_117();
			iLocal_1433++;
			break;
		case 6:
			func_118();
			iLocal_1433++;
			break;
		case 7:
			func_119(iLocal_946[2], &cLocal_1112);
			iLocal_1433++;
			return true;
		case 8:
			return true;
	}
	return false;
}

int func_30(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_120(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_31(int iParam0, int iParam1, bool bParam2)
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

void func_32()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_121(iLocal_946[iVar0], iLocal_1094);
		if (iVar0 > 3)
		{
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_1096[0]))
			{
				func_121(iLocal_946[iVar0], iLocal_1096[0]);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_1096[1]))
			{
				func_121(iLocal_946[iVar0], iLocal_1096[1]);
			}
			if (VOLUME::DOES_VOLUME_EXIST(iLocal_1099))
			{
				func_121(iLocal_946[iVar0], iLocal_1099);
			}
		}
		iVar0++;
	}
}

void func_33()
{
	if (iLocal_109 == 1)
	{
		iLocal_1100 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), func_122(), 0f, 0f, 0f, 1f, 1f, 2f);
	}
}

void func_34(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_43(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_35(var uParam0)
{
	return func_123(*uParam0, 1);
}

void func_36(var uParam0)
{
	func_124(uParam0, 0f);
}

float func_37(var uParam0)
{
	if (!func_35(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_126() - uParam0->f_1);
}

float func_38(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_39(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_127())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_128(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_96(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_96(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_96(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_129(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_129(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_40(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_130(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_131(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_132(&(uParam0->f_5));
			}
			func_53(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_133(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_134(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_135(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_136(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_137(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_96(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_138(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_139())
	{
		return true;
	}
	if (iLocal_110 >= 2)
	{
		iVar1 = 2;
		if (func_35(&uLocal_994))
		{
			if (func_37(&uLocal_994) > 2.5f)
			{
				func_60(&iLocal_1020, 32768);
				func_60(&iLocal_1020, 8192);
				return true;
			}
		}
		if (!func_51(iLocal_1019, 1))
		{
			if (func_140(Global_35, iLocal_1096[0], 1, 0) || func_140(Global_35, iLocal_1096[1], 1, 0))
			{
				func_60(&iLocal_1020, 32768);
				return true;
			}
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (func_141(&Local_111, &Local_305, &iLocal_946, 0, &iLocal_1419, iVar0, 15, iVar1))
	{
		if (iLocal_1419 == 65536)
		{
			if (Local_111.f_5.f_10 != 0)
			{
				iLocal_980 = Local_111.f_5.f_10;
				func_47(&(Local_111.f_5), &iLocal_1419);
				func_142(&(Local_111.f_5), &iLocal_1419);
				vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
				return false;
			}
		}
		if (iLocal_1419 == 2048)
		{
			func_60(&iLocal_1020, 32768);
		}
		if (func_51(iLocal_1020, 32768))
		{
			if (((Local_111.f_5.f_10 != iLocal_946[1] && Local_111.f_5.f_10 != iLocal_946[2]) && Local_111.f_5.f_10 != iLocal_946[3]) && Local_111.f_5.f_10 != iLocal_946[0])
			{
				if (!func_51(iLocal_1020, 16384))
				{
					func_60(&iLocal_1020, 16384);
					func_60(&iLocal_1020, 262144);
					EVENT::_0x7C511E91738A0828(Local_111.f_5.f_10, Global_35, 5, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_111.f_5.f_10));
					func_47(&(Local_111.f_5), &iLocal_1419);
					func_142(&(Local_111.f_5), &iLocal_1419);
					func_143(&iLocal_1020, 32768);
					func_36(&uLocal_1009);
					func_48(iLocal_1092);
					return false;
				}
				else if (func_51(iLocal_1020, 262144))
				{
					fVar2 = func_37(&uLocal_1009);
					if (fVar2 > 3f)
					{
						func_143(&iLocal_1020, 262144);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_111.f_5.f_10))
						{
							EVENT::_0x7C511E91738A0828(Local_111.f_5.f_10, Global_35, 5, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_111.f_5.f_10));
							vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
							if (!func_51(iLocal_1020, 4194304))
							{
								func_44(iLocal_946[2], Global_35, "STOP_THAT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 0, 0, 0);
								func_60(&iLocal_1020, 4194304);
							}
						}
						func_47(&(Local_111.f_5), &iLocal_1419);
						func_142(&(Local_111.f_5), &iLocal_1419);
						func_143(&iLocal_1020, 32768);
						return false;
					}
				}
			}
		}
		vLocal_1447 = { ENTITY::GET_ENTITY_COORDS(Local_111.f_5.f_10, true, false) };
		vLocal_1447 = { vLocal_1447 };
		return true;
	}
	if (iLocal_110 >= 2)
	{
		if (!bLocal_1421)
		{
			if (Local_111.f_98[0] < 2f)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_946[0]))
				{
					if (!func_43(iLocal_946[0], 0, 1))
					{
						if (iLocal_1435 == 0)
						{
							iLocal_1435 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_1435) > 5000)
						{
							func_60(&iLocal_1020, 32768);
							func_60(&iLocal_1020, 4096);
							bLocal_1421 = true;
						}
					}
					else
					{
						bLocal_1421 = true;
					}
				}
			}
		}
	}
	return false;
}

void func_42(bool bParam0)
{
	if (bParam0)
	{
		if (!func_51(iLocal_1019, -2147483648))
		{
			if (iLocal_984 != 105)
			{
				if (func_144())
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(vLocal_1060, uLocal_1437);
					func_60(&iLocal_1019, -2147483648);
				}
			}
		}
	}
	else if (func_51(iLocal_1019, -2147483648))
	{
		AUDIO::STOP_STREAM(uLocal_1437);
		func_143(&iLocal_1019, -2147483648);
	}
}

bool func_43(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_145(iParam0, iParam1);
}

bool func_44(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_146(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_45(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_46()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
	{
		func_63(Local_818[4 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
	{
		func_63(Local_818[5 /*12*/].f_8, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[6 /*12*/].f_8))
	{
		func_63(Local_818[6 /*12*/].f_8, 1, 1);
	}
}

void func_47(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_147();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_148(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_48(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_49(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*iParam0);
		POPULATION::_0xA1CFB35069D23C23(*iParam0);
		VOLUME::_DELETE_VOLUME(*iParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

bool func_50()
{
	if (iLocal_110 >= 2)
	{
		func_149();
		func_150(1103626240 /* Float: 25f */);
		func_151();
		func_152();
		func_153();
		func_154();
		func_155();
		func_156();
	}
	func_157(&(iLocal_14[0]), 1);
	func_158(&(iLocal_14[1]), 2);
	func_159(&(iLocal_14[2]), 3);
	func_160();
	switch (iLocal_110)
	{
		case 0:
			if (func_161())
			{
				if (func_162())
				{
					if (func_163())
					{
						func_164();
						func_165(&iLocal_1092, &uLocal_981, vLocal_1060, 0f, 0f, 0f, 10f, 10f, 10f, 0, 0, 1, 0, "m_volCrowd");
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_818[3 /*12*/].f_8, vLocal_1057, fLocal_1032, true, false, true);
						ENTITY::PLAY_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], 8f, true, false, false, 0f, 0);
						vLocal_1082 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_4))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903.f_1);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_903.f_2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_1);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_911.f_3);
						}
						iLocal_110 = 1;
					}
				}
			}
			break;
		case 1:
			func_42(1);
			if (func_161())
			{
				if (func_38(Global_35, Local_111.f_51, 1) < func_166(&Local_111, 0))
				{
					if (!func_167(Global_35, 1))
					{
						if (func_168(&Local_111, 1077936128 /* Float: 3f */, 40f, 35f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
						{
							func_169();
							iLocal_1018 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), iLocal_946[0], 0f, 30f, 40f, -1f, 10f, 180f, false, false, -1, -1);
							func_34(iLocal_946[1], &(Local_305[1 /*32*/].f_23), 0);
							func_170();
							ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_903, &cLocal_1104, true);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_903.f_1, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_903.f_2, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_911, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_911.f_1, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_911.f_2, &cLocal_1108, true);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
							{
								ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_911.f_3, &cLocal_1108, true);
							}
							func_171(&(Local_111.f_181));
							func_172(Local_111.f_3, iLocal_109, 7, 0, 0);
							func_5(&(Local_111.f_5), 1);
							iLocal_110 = 2;
						}
					}
				}
			}
			break;
		case 2:
			func_171(&iLocal_1427);
			func_173();
			func_174();
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (func_51(iLocal_1019, 64))
			{
				func_177();
			}
			else
			{
				func_178();
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903, false) || (ANIMSCENE::_0x1F0E401031E20146(Local_903, &cLocal_1104) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_903) > 0.995f))
			{
				func_60(&iLocal_1019, 524288);
				func_175(1);
				func_45(Local_903);
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_1018);
				iLocal_110 = 3;
			}
			break;
		case 3:
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (func_177())
			{
				iLocal_110 = 7;
			}
			break;
		case 5:
			func_72();
			func_179();
			func_180();
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1426, Local_76[1 /*2*/], "push_lever_deputy_lever", 1) && ENTITY::_0xDF8E49EA89A01DB1(iLocal_1426, Local_76[1 /*2*/], "push_lever_deputy_lever") < 0.99f)
			{
				ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "push_lever_deputy_lever", Local_76[1 /*2*/], 0.0625f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
			{
				func_63(Local_818[2 /*12*/].f_8, 1, 1);
				PHYSICS::ACTIVATE_PHYSICS(Local_818[2 /*12*/].f_8);
			}
			iLocal_14[0] = 10;
			iLocal_14[1] = 10;
			iLocal_14[2] = 10;
			if (func_51(iLocal_1020, 32768))
			{
				if (func_51(iLocal_1020, 8192))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
				}
				else if (func_51(iLocal_1020, 4096))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT_CORPSE"), 0, 0, 0, 0, 0, 0, 0);
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, 0, 0, 0, 0, 0);
				}
			}
			func_181();
			iLocal_110 = 7;
			break;
		case 6:
			func_180();
			func_179();
			if (func_43(iLocal_946[0], 0, 1))
			{
				if (func_182(iLocal_945))
				{
					iLocal_110 = 7;
				}
			}
			else
			{
				iLocal_110 = 7;
			}
			break;
		case 7:
			func_180();
			func_179();
			if (iLocal_109 == 1)
			{
				func_175(0);
			}
			else if (iLocal_109 == 7)
			{
				func_176();
			}
			if (func_38(Global_35, Local_111.f_51, 1) > 35f)
			{
				if (!Local_111.f_46)
				{
					if (func_183())
					{
						return true;
					}
				}
				if (func_182(iLocal_945) && Local_111.f_98[0] > 100f)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_51(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_52()
{
	if (Local_111.f_48)
	{
		if (!Local_111.f_46)
		{
			if (func_51(iLocal_1019, 524288))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else if (func_51(iLocal_1019, 2048) || !func_43(iLocal_946[0], 0, 1))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_53(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_54(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_59(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

bool func_56(int iParam0, int iParam1)
{
	return func_184(iParam0, iParam1) > 0;
}

void func_57()
{
	func_60(&iLocal_1296, 4096);
	if (func_58())
	{
	}
}

bool func_58()
{
	if (func_185() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

void func_60(int iParam0, int iParam1)
{
	func_187(iParam0, iParam1);
}

int func_61(int iParam0)
{
	if (func_185() != -1)
	{
		return 0;
	}
	if (!func_188(iParam0))
	{
		return 0;
	}
	return func_189(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_62(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return false;
	}
	else if (func_58())
	{
		if ((func_190(iParam0, iParam1) == joaat("CS_JOHNMARSTON") || iParam1 == 0) || iParam1 == 8)
		{
			return true;
		}
	}
	else if (func_190(iParam0, iParam1) != joaat("CS_JOHNMARSTON"))
	{
		return true;
	}
	return false;
}

void func_63(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_64(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_191(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_185() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

void func_65(int iParam0)
{
	Global_1396116.f_139 = iParam0;
}

bool func_66(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_192(iParam0, 0, (954 - 1), 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!func_193(iVar0) && bParam1)
	{
		return false;
	}
	return func_194(iVar0, 1);
}

void func_67(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_195(iParam0))
	{
		return;
	}
	if (!func_194(iParam0, 1))
	{
		return;
	}
	if (!func_194(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_193(iParam0)) && func_196(iParam0))
	{
		return;
	}
	func_197(iParam0, 1);
	func_198(iParam0);
	if (func_200(func_199(iParam0)))
	{
		iVar0 = func_201(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_197(iParam0, 16);
	}
	if (func_194(iParam0, 128) && !bParam3)
	{
		func_202(iParam0, 0);
	}
}

void func_68(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_69()
{
	if (!Local_111.f_48)
	{
		if (iLocal_984 == 76)
		{
			if (func_38(iLocal_946[1], Local_305[1 /*32*/].f_6, 1) < 3f)
			{
				if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[1]) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, Local_305[1 /*32*/].f_6, true)) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_305[2 /*32*/].f_1, -314.4524f, 735.2739f, 119.6174f, true))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_946[1], -314.4524f, 735.2739f, 119.6174f, true, false, true, true);
				}
			}
		}
	}
}

void func_70(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_203(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_204(uParam0->f_3, 524288);
		}
	}
	if (func_43(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_43((*iParam1)[iVar0], 0, 0))
			{
				func_205((*iParam1)[iVar0], bVar3);
				if (func_206(uParam0, iParam1[iVar0]))
				{
					func_207(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_43((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], false, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_209((*iParam1)[iVar0], 1073741824 /* Float: 2f */, func_208(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_210(uParam0);
	}
	func_211(uParam0);
	if (!uParam0->f_186)
	{
		func_130(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_212(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_213(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_71(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*12*/])->f_8))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[iVar0 /*12*/])->f_8));
		}
		iVar0++;
	}
}

void func_72()
{
	func_48(iLocal_1095);
}

void func_73(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_214(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_215(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_216(iVar0);
	*uParam0 = 0;
}

void func_74(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam0, iParam2);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iParam0);
	}
}

bool func_75(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_217(iVar0))
	{
		return false;
	}
	if (func_218(iVar0, 1) || func_218(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_76(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_219(uParam0->f_3);
	iVar1 = func_220(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		fLocal_1033[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.75f);
		iVar0++;
	}
	switch (func_2())
	{
		case 76:
			func_221(&(Local_305[0 /*32*/].f_22));
			if (iLocal_109 == 1)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0192_A_M_M_HtlRoughTravellers_01_WHITE_01", 64);
				Local_305[0 /*32*/].f_3 = 1977838224;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0866_A_F_M_Civ_Poor_White_AVOID_04", 64);
				Local_305[4 /*32*/].f_3 = -193363968;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_TEENS_01");
				Local_305[5 /*32*/] = 4;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
				Local_305[5 /*32*/].f_3 = 1951334013;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -181744552;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = -1107173821;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -385240971;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0470_A_M_M_ValFarmer_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 347506650;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 1055317050;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -129904911;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 41345883;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = 1712564875;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = 2011450924;
				StringCopy(&(Local_305[12 /*32*/].f_23), "0466_A_M_M_ValTownfolk_02_WHITE_01", 64);
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -385240971;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = 1225453698;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 1536333193;
			}
			else if (iLocal_109 == 3)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0585_A_M_M_Civ_White_09", 64);
				Local_305[0 /*32*/].f_3 = -1645688396;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -2095519638;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = 1371178414;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = -81725888;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0868_A_F_M_Civ_Poor_White_AVOID_06", 64);
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = -81725888;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -1716866223;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0466_A_M_M_ValTownfolk_02_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = -1424665050;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0960_A_M_M_Rancher_White_05", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -1137215382;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -810344607;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 1349591263;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = 1648215160;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = 1961093572;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -1716866223;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -2031252009;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 705326154;
			}
			else if (iLocal_109 == 4)
			{
				iLocal_1120 = 3;
				Local_305[0 /*32*/].f_1 = joaat("RE_DEADJOHN_FEMALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "REDJ_WOMAN1", 64);
				Local_305[0 /*32*/].f_3 = -419378151;
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0484_U_M_M_ValSheriff_01", 64);
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1010_S_M_M_DispatchPolice_White_06", 64);
				Local_305[2 /*32*/].f_3 = -181744552;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1009_S_M_M_DispatchPolice_White_05", 64);
				Local_305[3 /*32*/].f_3 = -1107173821;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1446783140;
				StringCopy(&(Local_305[4 /*32*/].f_23), "0461_A_F_M_ValTownfolk_01_WHITE_01", 64);
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1446783140;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = -258810541;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = -1026391597;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 222664376;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0919_A_M_M_Civ_Poor_White_AVOID_02", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 528661298;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -580372742;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -1349461172;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
				Local_305[12 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[12 /*32*/] = 4;
				Local_305[12 /*32*/].f_3 = -104009789;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = -258810541;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -936965000;
				Local_305[15 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[15 /*32*/] = 4;
				Local_305[15 /*32*/].f_3 = 344697576;
			}
			break;
		case 105:
			func_99(&(Local_305[0 /*32*/].f_22));
			if (iLocal_109 == 3)
			{
				if (func_222(21))
				{
					iLocal_1120 = 70;
				}
				else
				{
					iLocal_1120 = 71;
				}
				Local_305[0 /*32*/].f_1 = joaat("RE_DROWNMURDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "0677_A_M_M_RhdTownfolk_02_WHITE_01", 64);
				Local_305[0 /*32*/].f_3 = -806572609;
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0405_U_M_M_RhdSheriff_01", 64);
				Local_305[1 /*32*/].f_3 = 185498487;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1006_S_M_M_DispatchPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = -62071308;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "0993_S_M_M_DispatchLawRural_White_08", 64);
				Local_305[3 /*32*/].f_3 = -1502465472;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 985950048;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 985950048;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0925_A_M_M_Civ_Poor_White_AVOID_08", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 276796119;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = 508669563;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 335813092;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[9 /*32*/] = 5;
				Local_305[9 /*32*/].f_3 = 611695303;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -681434979;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0701_A_M_M_RhdUpperClass_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 5)
			{
				if (func_222(21))
				{
					iLocal_1120 = 70;
				}
				else
				{
					iLocal_1120 = 71;
				}
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_HTLRANCHERBOUNTY_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBRA_TARGET", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "0405_U_M_M_RhdSheriff_01", 64);
				Local_305[1 /*32*/].f_3 = 498573497;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1006_S_M_M_DispatchPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1967280077;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "0993_S_M_M_DispatchLawRural_White_08", 64);
				Local_305[3 /*32*/].f_3 = 1244494244;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 249987835;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 249987835;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0701_A_M_M_RhdUpperClass_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1161359263;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				Local_305[6 /*32*/].f_3 = 860572612;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0927_A_M_M_Civ_Poor_White_AVOID_10", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -527391152;
				StringCopy(&(Local_305[8 /*32*/].f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[9 /*32*/] = 5;
				Local_305[9 /*32*/].f_3 = 985950048;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 204307849;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0921_A_M_M_Civ_Poor_White_AVOID_04", 64);
			}
			break;
		case 5:
			if (iLocal_109 == 7)
			{
				Local_305[0 /*32*/].f_1 = joaat("RE_INJUREDRIDER_MALES_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "REIR_Rider", 64);
				Local_305[0 /*32*/].f_3 = -1512795993;
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 263980226;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1001_S_M_M_AmbientSDPolice_White_04", 64);
				Local_305[2 /*32*/].f_3 = -403557073;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1000_S_M_M_AmbientSDPolice_White_03", 64);
				Local_305[3 /*32*/].f_3 = 909660602;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				Local_305[6 /*32*/].f_3 = 1379548191;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0806_S_M_M_Army_01_WHITE_01", 64);
				Local_305[7 /*32*/].f_3 = 1618466970;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 195403865;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 195403865;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 501171404;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -2049928019;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0301_A_M_M_NbxDockWorkers_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -1721582639;
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -468987614;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = 501171404;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -187534673;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0293_A_M_M_NbxUpperClass_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 6)
			{
				iLocal_1120 = 256;
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_UNIEXCONFEDSBOUNTY_01");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBCO_TARGET", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "1017_U_M_M_SDPoliceChief_01", 64);
				Local_305[1 /*32*/].f_3 = -228472306;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1001_S_M_M_AmbientSDPolice_White_04", 64);
				Local_305[2 /*32*/].f_3 = 119343708;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1000_S_M_M_AmbientSDPolice_White_03", 64);
				Local_305[3 /*32*/].f_3 = 1364401863;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1679487590;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1679487590;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0291_A_M_M_NbxTownfolk_02_HISPANIC_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 1456297931;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 1083648863;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0303_A_M_M_NbxLaborers_01_WHITE_01", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 822119474;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[11 /*32*/] = 4;
				Local_305[11 /*32*/].f_3 = -1692508048;
				StringCopy(&(Local_305[11 /*32*/].f_23), "0293_A_M_M_NbxUpperClass_01_WHITE_01", 64);
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[13 /*32*/] = 5;
				Local_305[13 /*32*/].f_3 = 1456297931;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -1921727203;
			}
			break;
		case 38:
			if (iLocal_109 == 0)
			{
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERSEARCH");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBH_TARGET20", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 597869415;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1003_S_M_M_AmbientBlWPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1672364849;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1008_S_M_M_DispatchPolice_White_04", 64);
				Local_305[3 /*32*/].f_3 = 290692733;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = 1979102785;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = 1979102785;
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "BLIND_BEGGAR", 64);
				Local_305[6 /*32*/].f_3 = -1357285928;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1022955933;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = -1083029193;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = -467627369;
				StringCopy(&(Local_305[9 /*32*/].f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = -168675782;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0753_A_M_M_BlWLaborer_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[11 /*32*/] = 5;
				Local_305[11 /*32*/].f_3 = -1083029193;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[13 /*32*/] = 4;
				Local_305[13 /*32*/].f_3 = 146365384;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = 445120357;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0060_A_M_M_BlWTownfolk_01_WHITE_01", 64);
			}
			else if (iLocal_109 == 8)
			{
				Local_305[0 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERBROTHER");
				Local_305[0 /*32*/] = 22;
				StringCopy(&(Local_305[0 /*32*/].f_23), "RBH_TARGET18", 64);
				Local_305[1 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[1 /*32*/] = 6;
				StringCopy(&(Local_305[1 /*32*/].f_23), "ARMA_SHERIFF", 64);
				Local_305[1 /*32*/].f_3 = 597869415;
				Local_305[2 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[2 /*32*/] = 6;
				StringCopy(&(Local_305[2 /*32*/].f_23), "1003_S_M_M_AmbientBlWPolice_White_02", 64);
				Local_305[2 /*32*/].f_3 = 1672364849;
				Local_305[3 /*32*/].f_1 = joaat("S_M_M_AMBIENTLAWRURAL_01");
				Local_305[3 /*32*/] = 6;
				StringCopy(&(Local_305[3 /*32*/].f_23), "1008_S_M_M_DispatchPolice_White_04", 64);
				Local_305[3 /*32*/].f_3 = 290692733;
				Local_305[4 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[4 /*32*/] = 5;
				Local_305[4 /*32*/].f_3 = -1971706613;
				Local_305[5 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[5 /*32*/] = 4;
				Local_305[5 /*32*/].f_3 = -1971706613;
				StringCopy(&(Local_305[5 /*32*/].f_23), "0901_A_M_M_Civ_Poor_White_AGGRESSIVE_01", 64);
				Local_305[6 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[6 /*32*/] = 4;
				StringCopy(&(Local_305[6 /*32*/].f_23), "REFR_VICTIM", 64);
				Local_305[6 /*32*/].f_3 = -1357285928;
				Local_305[7 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[7 /*32*/] = 4;
				Local_305[7 /*32*/].f_3 = 1022955933;
				StringCopy(&(Local_305[7 /*32*/].f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
				Local_305[8 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[8 /*32*/] = 4;
				Local_305[8 /*32*/].f_3 = 2025816470;
				Local_305[9 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[9 /*32*/] = 4;
				Local_305[9 /*32*/].f_3 = 2031551065;
				Local_305[10 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[10 /*32*/] = 4;
				Local_305[10 /*32*/].f_3 = 1692916219;
				StringCopy(&(Local_305[10 /*32*/].f_23), "0751_A_M_O_BlWUpperClass_01_WHITE_01", 64);
				Local_305[11 /*32*/].f_1 = joaat("RE_PUBLICHANGING_FEMALES_01");
				Local_305[11 /*32*/] = 5;
				Local_305[11 /*32*/].f_3 = 2025816470;
				Local_305[13 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[13 /*32*/] = 4;
				Local_305[13 /*32*/].f_3 = -1652831454;
				Local_305[14 /*32*/].f_1 = joaat("RE_PUBLICHANGING_MALES_01");
				Local_305[14 /*32*/] = 4;
				Local_305[14 /*32*/].f_3 = -1958369610;
				StringCopy(&(Local_305[14 /*32*/].f_23), "0067_A_M_M_BlWConstruction_01_HISPANIC_01", 64);
			}
			break;
	}
}

void func_78()
{
	if (iLocal_109 == 4)
	{
		Local_76[0 /*2*/] = "script_re@public_hanging@female";
		Local_76[3 /*2*/] = "script_re@public_hanging@female";
		Local_76[0 /*2*/].f_1 = "struggle_idle_female";
		Local_76[4 /*2*/].f_1 = "cower_l";
		Local_76[10 /*2*/].f_1 = "flinch_l";
		Local_76[7 /*2*/].f_1 = "cower_r";
		Local_76[11 /*2*/].f_1 = "flinch_r";
		Local_76[14 /*2*/].f_1 = "shot_loose_crim";
	}
	else
	{
		Local_76[0 /*2*/] = "script_re@public_hanging@criminal_male";
		Local_76[3 /*2*/] = "script_re@public_hanging@criminal_male";
		Local_76[0 /*2*/].f_1 = "struggle_idle";
		Local_76[4 /*2*/].f_1 = "cower_l_enter";
		Local_76[5 /*2*/].f_1 = "cower_l_loop";
		Local_76[6 /*2*/].f_1 = "cower_l_exit";
		Local_76[10 /*2*/].f_1 = "flinch_l";
		Local_76[7 /*2*/].f_1 = "cower_r_enter";
		Local_76[8 /*2*/].f_1 = "cower_r_loop";
		Local_76[9 /*2*/].f_1 = "cower_r_exit";
		Local_76[11 /*2*/].f_1 = "flinch_r";
		Local_76[12 /*2*/].f_1 = "cower_l_shoot";
		Local_76[13 /*2*/].f_1 = "cower_r_shoot";
		Local_76[14 /*2*/].f_1 = "shoot_loose_crim_close";
		Local_76[15 /*2*/].f_1 = "shoot_loose_crim_far";
	}
	Local_76[1 /*2*/] = "script_re@public_hanging@lever";
	Local_76[1 /*2*/].f_1 = "push_lever_deputy";
	func_223(Local_76[0 /*2*/], &uLocal_18);
	func_223(Local_76[3 /*2*/], &uLocal_18);
	func_223(Local_76[1 /*2*/], &uLocal_18);
}

void func_79()
{
	StringCopy(&cLocal_1112, "PBL_LEVER_GUARD_V1", 32);
	Local_903.f_7 = "script@beat@town@publicHanging@deputyplayerlever";
	if (iLocal_109 == 0 || iLocal_109 == 8)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_rhodes_rancher", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_spectators";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
	}
	else if (iLocal_109 == 1)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_Main_Dialogue", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_family";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
		Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
	}
	else if (iLocal_109 == 3)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_drown_murder", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		if (func_224() == 9)
		{
			Local_903.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupA";
			Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
			Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
			Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
			Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
			Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
		}
		else if (func_224() == 11)
		{
			Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
			Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
			Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		}
	}
	else if (iLocal_109 == 4)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_dead_john", 32);
		Local_903.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupA";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@decapitate@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@decapitate@groupD";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@decapitate@groupE";
		Local_911.f_7 = "script@beat@town@publichanging@crowds@decapitate@groupF";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 5)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_rhodes_rancher", 32);
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_5 = "script@beat@town@publichanging@crowds@generic@groupD";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 6)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_st_denis", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
	}
	else if (iLocal_109 == 7)
	{
		Local_903.f_4 = "script@beat@town@publichanging@sheriffspeech";
		StringCopy(&cLocal_1104, "PBL_Main_Dialogue", 32);
		StringCopy(&cLocal_1108, "PBL_ACTION", 32);
		Local_903.f_5 = "script@beat@town@publichanging@mainscene_spectators";
		Local_903.f_6 = "script@beat@town@publichanging@crowds@generic@groupB";
		Local_911.f_4 = "script@beat@town@publichanging@crowds@generic@groupC";
		Local_911.f_6 = "script@beat@town@publichanging@crowds@generic@groupA";
	}
}

void func_80()
{
	Local_818[0 /*12*/].f_7 = joaat("P_DETONATOR01X");
	Local_818[0 /*12*/] = { 0f, 0f, 0f };
	Local_818[0 /*12*/].f_10 = 0;
	Local_818[1 /*12*/].f_7 = joaat("P_CS_NOOSE01XB");
	Local_818[1 /*12*/] = { 0f, 0f, -1f };
	Local_818[1 /*12*/].f_10 = 0;
	if (!func_225())
	{
		Local_818[2 /*12*/].f_7 = joaat("P_CS_LETTER01A_X");
		Local_818[2 /*12*/] = { 0f, 0f, -0.5f };
		Local_818[2 /*12*/].f_10 = 0;
	}
	Local_818[3 /*12*/].f_7 = joaat("S_GALLOWLEVERNBX01X");
	Local_818[3 /*12*/] = { 0f, 0.5f, 0f };
	Local_818[3 /*12*/].f_10 = 0;
	Local_818[4 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[4 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[4 /*12*/].f_10 = 0;
	Local_818[5 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[5 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[5 /*12*/].f_10 = 0;
	Local_818[6 /*12*/].f_7 = joaat("P_CIGARETTE01X");
	Local_818[6 /*12*/] = { 0f, 0.25f, 0f };
	Local_818[6 /*12*/].f_10 = 0;
	if (func_2() == 5)
	{
		iLocal_983 = joaat("S_GALLOWDOORNBX01X");
	}
	else
	{
		iLocal_983 = joaat("S_GALLOWSSTAIRS04X");
	}
}

void func_81(int iParam0)
{
	Local_920.f_3 = Global_35;
	Local_920 = { 0f, 0f, 0f };
	Local_920.f_8 = 4;
	Local_920.f_20 = 2;
	Local_920.f_19 = 4;
	Local_920.f_22 = 3;
	Local_920.f_21 = 4;
	Local_920.f_17 = 4;
	Local_920.f_18 = 0;
	Local_920.f_9 = 1;
	Local_920.f_10 = 1;
	Local_920.f_11 = 1;
	Local_920.f_12 = 0;
	Local_920.f_4 = 21030;
	Local_920.f_7 = iParam0;
	Local_920.f_13 = 0;
}

void func_82()
{
	switch (func_2())
	{
		case 76:
			StringCopy(&cLocal_1116, "re_ph_val_law", 32);
			break;
		case 5:
			StringCopy(&cLocal_1116, "re_ph_std_law", 32);
			break;
		case 105:
			StringCopy(&cLocal_1116, "re_ph_rhd_law", 32);
			break;
	}
}

void func_83()
{
	switch (func_2())
	{
		case 76:
			fLocal_1030 = 3.3f;
			fLocal_1031 = 2.35f;
			vLocal_1054 = { -315.1255f, 733.6245f, 122.897f };
			vLocal_1057 = { -315.075f, 730.922f, 119.6113f };
			fLocal_1032 = 8.9f;
			vLocal_1051 = { -314.6394f, 733.692f, 119.5727f };
			vLocal_1060 = { -324.4821f, 731.7224f, 116.3298f };
			break;
		case 105:
			fLocal_1030 = 2.8f;
			fLocal_1031 = 1.8f;
			vLocal_1054 = { 1375.074f, -1215.15f, 86.75f };
			vLocal_1057 = { 1373.779f, -1216.084f, 83.24623f };
			fLocal_1032 = 265f;
			vLocal_1051 = { 1374.989f, -1214.637f, 83.2235f };
			vLocal_1060 = { 1366.561f, -1214.614f, 82.74409f };
			break;
		case 5:
			fLocal_1030 = 2f;
			fLocal_1031 = 1.25f;
			vLocal_1054 = { 2689.186f, -1113.87f, 54.26801f };
			vLocal_1057 = { 2690.893f, -1113.406f, 51.872f };
			fLocal_1032 = 89.8f;
			vLocal_1051 = { 2688.435f, -1113.967f, 51.049f };
			vLocal_1060 = { 2688.809f, -1120.589f, 49.67804f };
			break;
		case 38:
			fLocal_1030 = 3.3f;
			fLocal_1031 = 2.35f;
			vLocal_1054 = { -764.2183f, -1259.831f, 49.55884f };
			vLocal_1057 = { -767.09f, -1260.82f, 46.452f };
			fLocal_1032 = 260f;
			vLocal_1051 = { -764.7153f, -1260.407f, 46.3581f };
			vLocal_1060 = { -763.8068f, -1247.044f, 42.46014f };
			break;
		default:
			break;
	}
}

void func_84()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Local_305[iVar0 /*32*/].f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_305[iVar0 /*32*/].f_1, false);
		}
		iVar0++;
	}
}

void func_85()
{
	func_226(joaat("WORLD_HUMAN_STARE_STOIC"), 15, 0, 0);
	func_226(joaat("WORLD_HUMAN_GUARD_SCOUT"), 15, 0, 0);
	func_226(joaat("WORLD_HUMAN_SIT_GROUND"), 15, 0, 0);
}

void func_86(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

bool func_87(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_88(var uParam0, char* sParam1)
{
	return true;
}

bool func_89(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_90(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_227(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_91(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_92()
{
	if (!func_228(joaat("WORLD_HUMAN_STARE_STOIC")))
	{
		return false;
	}
	if (!func_228(joaat("WORLD_HUMAN_GUARD_SCOUT")))
	{
		return false;
	}
	if (!func_228(joaat("WORLD_HUMAN_SIT_GROUND")))
	{
		return false;
	}
	return true;
}

bool func_93()
{
	switch (iLocal_1024)
	{
		case 0:
			iLocal_1423 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iLocal_983, vLocal_1051, 9);
			iLocal_1424 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_818[3 /*12*/].f_7, vLocal_1057, 9);
			iLocal_1024++;
			break;
		case 1:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1423) && ENTITY::IS_MAP_ENTITY_PINNED(iLocal_1424))
			{
				iLocal_1425 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1423));
				iLocal_1426 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_1424));
				return true;
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1425))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1426))
	{
	}
	return false;
}

int func_94(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_229(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_230(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_133(iParam0, 128))
			{
				if (!func_231(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_232(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_233(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_87(*uParam1))
				{
					return func_234(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_235(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_3(Param4.f_2, 8))
				{
					func_230(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_236(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_237(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_238(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_133(iParam0, 128))
			{
				if (!func_239(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_234(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_232(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_236(uParam1))
					{
						return func_234(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_240(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_230(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_234(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_241("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_241("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_95(var uParam0, int iParam1)
{
	if (func_96(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_243(iParam1, func_242(uParam0), &(uParam0->f_172)))
		{
			if (func_43(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_96(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_97(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_245(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_96(uParam0->f_3, 1) && !func_96(uParam0->f_3, 32))
	{
		func_245(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_96(uParam0->f_3, 2) && !func_96(uParam0->f_3, 32))
	{
		func_245(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_246(uParam0->f_171, 1);
	}
	if (func_96(uParam0->f_3, 1))
	{
		func_245(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_247(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_98(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_99(int iParam0)
{
	func_60(iParam0, 2);
}

void func_100(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_101()
{
	iLocal_1095 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_1060, 0f, 0f, 0f, 6f, 6f, 6f, "m_volAmbientRestrictionCrowd");
	POPULATION::_0xB56D41A694E42E86(iLocal_1095, 2048, 0, 0, -1, -1, 2);
}

void func_102(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_248(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

float func_103(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

void func_104(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_249(vVar0, vVar3, 0f) };
	vVar9 = { func_250(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, 0, 1);
	}
	else
	{
		PATHFIND::_0x6C3F12ECEB6D2E2A(vVar6, vVar9, iParam4, 1);
	}
}

void func_105(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_249(vVar0, vVar3, 0f) };
	vVar9 = { func_250(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

bool func_106(int iParam0, bool bParam1)
{
	if (func_185() != -1)
	{
		return false;
	}
	if (!func_195(iParam0))
	{
		return false;
	}
	if (!func_193(iParam0) && bParam1)
	{
		return false;
	}
	return func_194(iParam0, 1);
}

int func_107(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_251(iParam0, 1))
	{
		return 0;
	}
	if (func_200(func_199(iParam0)))
	{
		iVar1 = func_201(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_193(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_252(iParam0, 1);
	func_253(iParam0);
	if (bParam3)
	{
		func_252(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

bool func_108(int iParam0, bool bParam1)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	if (!func_194(iParam0, 2))
	{
		return false;
	}
	if (func_194(iParam0, 32) && !bParam1)
	{
		func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_199(iParam0)));
		if (func_185() == -1)
		{
			if (func_194(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_201(iParam0));
				func_197(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_201(iParam0));
		}
		return false;
	}
	if (!func_255(iParam0) && func_185() == -1)
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		func_197(iParam0, 128);
		return true;
	}
	func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_199(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_201(iParam0));
	if (func_194(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_201(iParam0));
		func_197(iParam0, 2048);
	}
	return true;
}

bool func_109(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_195(iParam0))
	{
		return false;
	}
	if (!func_200(func_199(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		func_108(iParam0, 0);
		return false;
	}
	vVar0 = { uParam2, uParam3, uParam4 };
	if (!func_256(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_257(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_87(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_201(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_201(iParam0), 0);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_201(iParam0), 0);
	}
	if (!func_87(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_201(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

bool func_110(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_258() || !func_259(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_111()
{
	int iVar0;

	func_260(iLocal_946[0], 0);
	func_261(iLocal_946[0], 1, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_946[0], true, true);
	TASK::_0x7981037A96E7D174(iLocal_946[0]);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_946[0], 0, false);
	func_262(1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_946[0], 1);
	func_263(iLocal_946[0], 1);
	PED::ADD_RELATIONSHIP_GROUP("relCriminal", &iLocal_1443);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_946[0], iLocal_1443);
	TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_1443, joaat("PLAYER"));
	if (func_225())
	{
		func_264(iLocal_946[1], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[1], 54, false);
	}
	PED::_0x89F5E7ADECCCB49C(iLocal_946[1], "normal");
	PED::SET_PED_CONFIG_FLAG(iLocal_946[1], 188, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[1], 58, true);
	func_264(iLocal_946[2], joaat("GROUP_REPEATER"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[2], 54, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[2], 188, true);
	func_264(iLocal_946[3], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[3], 54, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 188, true);
	PED::_0x89F5E7ADECCCB49C(iLocal_946[3], "normal");
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 >= 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_946[iVar0]))
		{
			if (iLocal_109 == 1 && iVar0 == 4)
			{
			}
			else
			{
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[iVar0], 7, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 130, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 315, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[iVar0], 509, true);
			}
			if (iVar0 == 5)
			{
				if (iLocal_109 == 1)
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_946[5], true, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_946[5], 2, false);
				}
			}
		}
		iVar0++;
	}
}

void func_112()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_4))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
		{
			Local_903 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_4, 0, &cLocal_1104, false, true);
			if (func_225())
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, Local_305[1 /*32*/].f_6, 0f, 0f, Local_305[1 /*32*/].f_9, 2);
			}
			else
			{
				if (func_224() == 9)
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, -317.072f, 735.11f, 119.587f, 0f, 0f, -74.959f, 2);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903, Local_305[1 /*32*/].f_6, 0f, 0f, Local_305[1 /*32*/].f_9, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8, 0);
				}
			}
			if (func_43(iLocal_946[1], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iLocal_946[1], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903, "BOOL_Idle", false, false);
		}
	}
}

void func_113()
{
	if (iLocal_109 == 1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
		{
			Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
			if (func_43(iLocal_946[5], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "Son", iLocal_946[5], 0);
			}
			if (func_43(iLocal_946[4], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "Mother", iLocal_946[4], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (iLocal_109 == 7)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
		{
			Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
			if (func_43(iLocal_946[7], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_A", iLocal_946[7], 0);
			}
			if (func_43(iLocal_946[6], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_B", iLocal_946[6], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_5))
	{
		Local_903.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_5, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_1, func_122(), 0f, 0f, func_265(), 2);
		if (func_43(iLocal_946[4], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AF01", iLocal_946[4], 0);
		}
		if (func_43(iLocal_946[5], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AM01", iLocal_946[5], 0);
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", false, false);
	}
}

void func_114()
{
	if (func_224() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
		{
			Local_903.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_2, func_266(), 0f, 0f, func_267(), 2);
			if (func_43(iLocal_946[6], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[6], 0);
			}
			if (func_43(iLocal_946[7], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[7], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[4 /*12*/].f_8, iLocal_946[7], PED::GET_PED_BONE_INDEX(iLocal_946[7], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_6))
	{
		Local_903.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_6, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_2, func_266(), 0f, 0f, func_267(), 2);
		if (func_43(iLocal_946[8], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[8], 0);
		}
		if (func_43(iLocal_946[9], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[9], 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[4 /*12*/].f_8, iLocal_946[9], PED::GET_PED_BONE_INDEX(iLocal_946[9], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
		}
		if (func_43(iLocal_946[10], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM03", iLocal_946[10], 0);
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_2);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", false, false);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_818[4 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[4 /*12*/].f_8));
	}
}

void func_115()
{
	if (func_224() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
		{
			Local_911 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_4, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911, func_268(), 0f, 0f, func_269(), 2);
			if (func_43(iLocal_946[8], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[8], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[6 /*12*/].f_8, iLocal_946[8], PED::GET_PED_BONE_INDEX(iLocal_946[8], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_4))
	{
		Local_911 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_4, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911, func_268(), 0f, 0f, func_269(), 2);
		if (func_43(iLocal_946[5], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[5], 0);
		}
		if (func_43(iLocal_946[4], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911, "GROUP_CF01", iLocal_946[4], 0);
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_911);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", false, false);
	}
}

void func_116()
{
	if (func_224() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
		{
			Local_911.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_5, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_1, func_270(), 0f, 0f, func_271(), 2);
			if (func_43(iLocal_946[9], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[9], 0);
			}
			if (func_43(iLocal_946[10], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[10], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_1);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", false, false);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_5))
	{
		Local_911.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_5, 64, &cLocal_1108, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_1, func_270(), 0f, 0f, func_271(), 2);
		if (func_43(iLocal_946[6], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[6], 0);
		}
		if (func_43(iLocal_946[7], 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[7], 0);
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", false, false);
	}
}

void func_117()
{
	if (func_224() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
		{
			Local_911.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_2, func_272(), 0f, 0f, func_273(), 2);
			if (func_43(iLocal_946[11], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM01", iLocal_946[11], 0);
			}
			if (func_43(iLocal_946[12], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM02", iLocal_946[12], 0);
			}
			if (func_43(iLocal_946[13], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EF01", iLocal_946[13], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", false, false);
		}
	}
	else if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_6))
		{
			Local_911.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_6, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_2, func_272(), 0f, 0f, func_273(), 2);
			if (func_43(iLocal_946[11], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AF01", iLocal_946[11], 0);
			}
			if (func_43(iLocal_946[13], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM02", iLocal_946[13], 0);
			}
			if (func_43(iLocal_946[14], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM03", iLocal_946[14], 0);
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911.f_2, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_2);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", false, false);
		}
	}
}

void func_118()
{
	if (func_224() == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_911.f_7))
		{
			Local_911.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_911.f_7, 64, &cLocal_1108, false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_911.f_3, func_274(), 0f, 0f, func_275(), 2);
			if (func_43(iLocal_946[14], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM01", iLocal_946[14], 0);
			}
			if (func_43(iLocal_946[15], 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM02", iLocal_946[15], 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_818[5 /*12*/].f_8, iLocal_946[15], PED::GET_PED_BONE_INDEX(iLocal_946[15], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
			{
				OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_911.f_3, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_911.f_3);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_3, "LOOP_BOOL", false, false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
		{
			OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_818[5 /*12*/].f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_818[5 /*12*/].f_8));
	}
}

void func_119(int iParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_903.f_7))
	{
		Local_903.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_903.f_7, 0, sParam1, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_903.f_3, vLocal_1057, 0f, 0f, fLocal_1032, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iParam0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_903.f_3, "lever", Local_818[3 /*12*/].f_8, 0);
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_903.f_3, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_903.f_3);
		}
	}
}

bool func_120(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_121(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam1))
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	}
	if (PED::_ADD_PED_STAY_OUT_VOLUME(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_122()
{
	switch (iLocal_109)
	{
		case 0:
			return -763.9165f, -1251.671f, 42.45832f;
		case 8:
			return -763.9165f, -1251.671f, 42.45832f;
		case 1:
			return -326.277f, 730.5281f, 116.2461f;
		case 3:
			if (func_224() == 9)
			{
				return -322.7637f, 729.8936f, 116.4863f;
			}
			else
			{
				Jump @223; //curOff = 154
				return -322.7637f, 729.8936f, 116.4863f;
				Jump @223; //curOff = 175
				Jump @223; //curOff = 178
				return 2689.185f, -1118.585f, 49.678f;
				Jump @223; //curOff = 199
				return 2689.185f, -1118.585f, 49.678f;
			}
			return 0f, 0f, 0f;
			default:
				break;
	}
}

bool func_123(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_126() - fParam1);
	func_276(uParam0, 1);
	func_277(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_125(var uParam0)
{
	return func_123(*uParam0, 2);
}

float func_126()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_127()
{
	if (!func_278(Global_1395482.f_1))
	{
		return false;
	}
	return func_279(Global_1395482.f_1, 32);
}

bool func_128(int iParam0)
{
	if (func_96(iParam0, 1))
	{
		return false;
	}
	return (1 == func_191(iParam0) || 2 == func_191(iParam0));
}

float func_129(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_130(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_280(uParam0) };
	iVar3 = func_212(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_131(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_132(var uParam0)
{
	func_5(uParam0, 1);
	func_281(uParam0, 20);
}

bool func_133(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_134(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_244(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_282())
	{
		func_283(1);
	}
	func_284(iParam2, uParam0->f_43);
	func_285(iParam2, 0, 0, 0, 0);
	if (func_286(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_203(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_287(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_135(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_136(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_288())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_133(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_134(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_135(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_140(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_166(uParam0, bVar0);
		func_289(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_290(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_134(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_135(&(uParam0->f_121));
		}
	}
}

bool func_137(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_96(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_291())
			{
				fVar0 = 15f;
			}
		}
		if (func_292(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_293(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_292(uParam2, fVar1))
		{
			if (!func_294(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_295(uParam2->f_3, 2) && func_296(2))
		{
			return false;
		}
		if (func_96(iParam0, 4194304) || func_96(iParam0, 33554432))
		{
			if (func_297(1))
			{
				return false;
			}
		}
	}
	if (func_298(Global_35))
	{
		return false;
	}
	if (func_299(0, 1, 1) && !func_300(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_96(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_167(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_293(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_301())
		{
			return false;
		}
		iVar2 = func_302(func_2());
		if (func_303(iVar2))
		{
			if (func_304(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_305(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_306(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_138(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_307(uParam0->f_51))
	{
		func_308(uParam0->f_51, 0);
		fVar0 = func_309(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_310());
		bVar1 = func_208(!func_96(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_312(iVar2, func_311(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_139()
{
	if (func_313())
	{
		return true;
	}
	if (bLocal_1421)
	{
		return true;
	}
	if (func_51(iLocal_1019, 32))
	{
		return true;
	}
	if (iLocal_110 >= 2)
	{
		if (func_314())
		{
			return true;
		}
	}
	return false;
}

bool func_140(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_141(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (*uParam0 < iParam5 || *uParam0 > iParam6)
	{
		*uParam0 = iParam5;
	}
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		if (func_315((*iParam2)[*uParam0], iParam3, &(uParam0->f_5), iParam4, 0, uParam0->f_98[*uParam0]))
		{
			return true;
		}
		*uParam0++;
		if (*uParam0 > iParam6)
		{
			*uParam0 = iParam5;
		}
		iVar0++;
	}
	return false;
}

void func_142(var uParam0, int iParam1)
{
	*iParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_143(int iParam0, int iParam1)
{
	func_316(iParam0, iParam1);
}

bool func_144()
{
	if (func_51(iLocal_1019, 268435456))
	{
		return true;
	}
	if (!func_51(iLocal_1019, 268435456))
	{
		if (AUDIO::LOAD_STREAM("CROWD_WALLA", "REPH_Sounds"))
		{
			uLocal_1437 = AUDIO::_0x0556C784FA056628("CROWD_WALLA", "REPH_Sounds");
			func_60(&iLocal_1019, 268435456);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_145(int iParam0, int iParam1)
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
	if (func_51(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_51(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_51(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_51(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_51(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_51(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_51(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_51(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_291())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_317(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_318(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_36(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_319(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_321(func_320(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_147()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_148(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_53(iParam0, 134217728);
	}
	else
	{
		func_54(iParam0, 134217728);
	}
}

void func_149()
{
	if (iLocal_109 == 1)
	{
		if (func_43(iLocal_946[4], 0, 1))
		{
			func_322();
		}
	}
}

void func_150(float fParam0)
{
	int iVar0;

	if (Local_111.f_46 || !ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]))
	{
		return;
	}
	if (Local_111.f_98[0] <= fParam0 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[0]))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!func_323(Global_35, iLocal_1088[iVar0], 0, 1))
			{
				IK::_0x66F9EB44342BB4C5(Global_35, &Local_1451);
			}
			iVar0++;
		}
	}
}

void func_151()
{
	if (func_51(iLocal_1019, 256))
	{
		return;
	}
	if (Local_111.f_46)
	{
		if (!func_35(&uLocal_985))
		{
			func_36(&uLocal_985);
		}
		else if (func_37(&uLocal_985) > 3f)
		{
			func_45(Local_903.f_1);
			func_45(Local_903.f_2);
			func_45(Local_911);
			func_45(Local_911.f_1);
			func_45(Local_911.f_2);
			func_45(Local_911.f_3);
			func_60(&iLocal_1019, 256);
		}
	}
}

void func_152()
{
	if (func_51(iLocal_1019, 4))
	{
		if (!func_51(iLocal_1019, 2048))
		{
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 20, 1);
			if (func_182(iLocal_945))
			{
				if (func_324() && func_43(iLocal_946[0], 0, 1))
				{
					func_325(2, joaat("HONOR_EVENT_INTERVENED"), 0, 0, iLocal_946[0], 0, 1065353216 /* Float: 1f */, 0);
				}
				func_60(&iLocal_1019, 2048);
			}
		}
		if (func_51(iLocal_1019, 2048))
		{
			if (!func_51(iLocal_1019, 2097152))
			{
				if (VOLUME::DOES_VOLUME_EXIST(iLocal_1093))
				{
					if (func_326(&iLocal_946, iLocal_1093) == 0)
					{
						func_74(iLocal_1093, 1, 23);
						func_60(&iLocal_1019, 2097152);
					}
				}
			}
		}
	}
}

void func_153()
{
	if (iLocal_110 >= 2)
	{
		if (func_51(iLocal_1019, 512) || !ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
		{
			return;
		}
		if (ENTITY::_0x0B7CB1300CBFE19C(Local_818[2 /*12*/].f_8, 1))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, true);
			func_60(&iLocal_1019, 512);
		}
	}
}

void func_154()
{
	if (Local_111.f_46 || iLocal_110 <= 1)
	{
		return;
	}
	func_327();
	func_328();
}

void func_155()
{
	if (((Local_111.f_46 || iLocal_110 < 2) || func_51(iLocal_1019, 67108864)) || iLocal_1436 >= 5)
	{
		return;
	}
	switch (iLocal_1436)
	{
		case 0:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				func_329(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 1:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				iLocal_1436++;
			}
			break;
		case 2:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				func_329(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 3:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				iLocal_1436++;
			}
			break;
		case 4:
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
			{
				func_329(1891783641, iLocal_946[1], 1);
				iLocal_1436++;
			}
			break;
		case 5:
			break;
	}
}

void func_156()
{
	if (!func_51(iLocal_1020, 524288))
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_1101))
		{
			if (func_140(Global_35, iLocal_1101, 1, 0))
			{
				LAW::_0x15ABD5004CAD2D99(0);
				func_60(&iLocal_1020, 524288);
			}
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(iLocal_1101))
	{
		if (!func_140(Global_35, iLocal_1101, 1, 0))
		{
			LAW::_0x15ABD5004CAD2D99(-1);
			func_143(&iLocal_1020, 524288);
		}
	}
}

void func_157(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			*uParam0 = 10;
		}
	}
	if ((*uParam0 >= 1 && iLocal_110 >= 2) && !Local_111.f_46)
	{
		if (!func_51(iLocal_1296, 1048576))
		{
			iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1226, &(Local_111.f_192), 0f, 1, 0, "", func_330(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[iParam1], 0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_333(&(Local_1226[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_333(&(Local_1226[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_334(&(Local_1226[0 /*17*/]), 0, 0);
			func_334(&(Local_1226[1 /*17*/]), 0, 0);
			*uParam0 = 1;
			break;
		case 1:
			if (func_51(iLocal_1019, 524288))
			{
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_946[1], false);
				PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_946[1]);
				PED::_0x58F7DB5BD8FA2288(iLocal_946[1]);
				if (func_2() == 76)
				{
					func_336(iLocal_946[1], func_335(1), 0f, 0f, 0f, 0, 0, 0);
				}
				else
				{
					func_336(iLocal_946[1], func_335(1), 0f, 0f, 0f, 0, 0, 0);
				}
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_946[1], false, false);
				func_334(&(Local_1226[0 /*17*/]), 1, 0);
				func_334(&(Local_1226[1 /*17*/]), 1, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[1], 315, false);
				*uParam0 = 8;
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 8:
			func_337(1, 1075838976 /* Float: 2.5f */);
			switch (iLocal_1297[iParam1])
			{
				case 0:
					if (func_51(iLocal_1296, 524288))
					{
						func_44(Global_35, iLocal_946[1], "RE_PH_VAL_V4_ILO_MEMORY_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 7 && !func_51(iLocal_1296, 4096))
					{
						func_44(Global_35, iLocal_946[1], func_338("ILO_POS_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 5)
					{
						func_44(Global_35, iLocal_946[1], "RE_PH_RHD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_44(Global_35, iLocal_946[1], func_338("ILO_POS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					func_334(&(Local_1226[0 /*17*/]), 0, 0);
					func_334(&(Local_1226[1 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 16);
					*uParam0 = 9;
					break;
				case 1:
					if (func_51(iLocal_1296, 524288))
					{
						func_44(Global_35, iLocal_946[1], "RE_PH_VAL_V4_ILO_MEMORY_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 7 && !func_51(iLocal_1296, 4096))
					{
						func_44(Global_35, iLocal_946[1], func_338("ILO_NEG_ALT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 5)
					{
						func_44(Global_35, iLocal_946[1], "RE_PH_RHD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_44(Global_35, iLocal_946[1], func_338("ILO_NEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					func_334(&(Local_1226[0 /*17*/]), 0, 0);
					func_334(&(Local_1226[1 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 32);
					*uParam0 = 9;
					break;
			}
			break;
		case 9:
			func_337(1, 1075838976 /* Float: 2.5f */);
			if (!func_51(iLocal_1296, 64))
			{
				if (func_339(0, 1, Global_35, 1))
				{
					if (func_51(iLocal_1296, 16))
					{
						func_340(1);
					}
					else if (func_51(iLocal_1296, 32))
					{
						func_340(0);
					}
					func_60(&iLocal_1296, 64);
				}
			}
			else if (!func_51(iLocal_1296, 1048576))
			{
				if (func_339(0, 1, iLocal_946[1], 1))
				{
					func_341(&(Local_1309[1 /*21*/]), &Local_1226);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[1], false);
					func_342(&(iLocal_946[1]), &(Local_1309[1 /*21*/]), &Local_1226, 1, 1);
					func_60(&iLocal_1296, 1048576);
				}
			}
			break;
		case 10:
			if (func_343(iLocal_946[1], 1))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[1]))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_946[1], 0);
				}
				PED::_0x58F7DB5BD8FA2288(iLocal_946[1]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[1]));
				func_341(&(Local_1309[1 /*21*/]), &Local_1226);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_158(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			if (func_51(iLocal_1019, 64) && !func_51(iLocal_1019, 1048576))
			{
				func_344();
			}
			*uParam0 = 10;
		}
	}
	if (iLocal_110 >= 2 && !Local_111.f_46)
	{
		iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1191, &(Local_111.f_192), 0f, 1, 0, "", func_330(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[iParam1], 0);
	}
	switch (*uParam0)
	{
		case 0:
			if (iLocal_110 > 0)
			{
				if (func_43(iLocal_946[2], 0, 1))
				{
					func_345(iLocal_946[2], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 1, joaat("WORLD_HUMAN_GUARD_SCOUT_MALE_C"), 4f);
					ENTITY::SET_ENTITY_COORDS(iLocal_946[2], vLocal_1082, true, true, true, true);
				}
				func_333(&(Local_1191[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(&(Local_1191[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_334(&(Local_1191[0 /*17*/]), 0, 0);
				func_334(&(Local_1191[1 /*17*/]), 0, 0);
				if (iLocal_109 == 8)
				{
					fLocal_1439 = 0.57f;
				}
				else
				{
					fLocal_1439 = 0.26f;
				}
				*uParam0 = 1;
			}
			break;
		case 1:
			if (func_51(iLocal_1019, 67108864))
			{
				if (((iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -175914443)) || ((iLocal_109 != 7 && iLocal_109 != 8) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -112513130))) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") > fLocal_1439))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_946[2]);
					ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], -8f);
					ANIMSCENE::START_ANIM_SCENE(Local_903.f_3);
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_903.f_3, &cLocal_1112, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", true, false);
					func_346();
					ENTITY::PLAY_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], 1000f, false, true, true, 0.14f, 32768);
					PED::_0x7ABBD9E449E0DB00(iLocal_946[0], 0);
					func_48(iLocal_1092);
					func_60(&iLocal_1019, 64);
					*uParam0 = 2;
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903.f_3, false) || (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903.f_3, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_903.f_3) > 0.62f))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[2], Local_903.f_3))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iLocal_946[2]);
				}
				func_345(iLocal_946[2], joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 0, joaat("WORLD_HUMAN_GUARD_SCOUT_MALE_C"), 1000f);
				*uParam0 = 3;
			}
			break;
		case 4:
			func_347(iLocal_946[2], uParam0, 5, Local_305[2 /*32*/].f_6, Local_305[2 /*32*/].f_9, 1, &(Local_1309[2 /*21*/]), &Local_1191);
			switch (iLocal_1297[2])
			{
				case 0:
					func_44(Global_35, iLocal_946[2], func_338("PLY_DEFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_334(&(Local_1191[0 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 8192);
					fLocal_1050 = (fLocal_1050 + 3f);
					break;
				case 1:
					func_44(Global_35, iLocal_946[2], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_334(&(Local_1191[0 /*17*/]), 0, 0);
					func_334(&(Local_1191[1 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 131072);
					func_36(&uLocal_994);
					break;
			}
			break;
		case 3:
			if (func_51(iLocal_1019, 524288))
			{
				func_334(&(Local_1191[0 /*17*/]), 1, 0);
				func_334(&(Local_1191[1 /*17*/]), 1, 0);
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_348() || (func_140(Global_35, iLocal_1094, 1, 0) && !func_43(iLocal_946[0], 0, 1)))
			{
				func_36(&uLocal_991);
				func_349(&(Local_1309[2 /*21*/]), 0);
				func_333(&(Local_1191[0 /*17*/]), func_332(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(&(Local_1191[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				if (!func_51(iLocal_1296, 2))
				{
					func_334(&(Local_1191[0 /*17*/]), 1, 0);
				}
				else
				{
					func_334(&(Local_1191[0 /*17*/]), 0, 0);
				}
				func_334(&(Local_1191[1 /*17*/]), 1, 0);
				*uParam0 = 4;
			}
			else if (func_51(iLocal_1296, 65536) && func_51(iLocal_1296, 131072))
			{
			}
			else
			{
				if (!func_51(iLocal_1296, 65536) && !func_51(iLocal_1296, 8192))
				{
					if (!func_350(&(Local_1191[0 /*17*/]), 0, 0))
					{
						func_333(&(Local_1191[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						func_334(&(Local_1191[0 /*17*/]), 1, 0);
					}
				}
				else if (func_350(&(Local_1191[0 /*17*/]), 0, 0))
				{
					func_334(&(Local_1191[0 /*17*/]), 0, 0);
				}
				if (!func_51(iLocal_1296, 131072))
				{
					if (!func_350(&(Local_1191[1 /*17*/]), 0, 0))
					{
						func_333(&(Local_1191[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						func_334(&(Local_1191[1 /*17*/]), 1, 0);
					}
				}
				else if (func_350(&(Local_1191[1 /*17*/]), 0, 0))
				{
					func_334(&(Local_1191[1 /*17*/]), 0, 0);
				}
				switch (iLocal_1297[2])
				{
					case 0:
						func_44(Global_35, iLocal_946[2], func_338("GRT_POS_DEPUTY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						func_334(&(Local_1191[0 /*17*/]), 0, 0);
						func_334(&(Local_1191[1 /*17*/]), 0, 0);
						func_36(&uLocal_1006);
						func_60(&iLocal_1296, 65536);
						*uParam0 = 6;
						break;
					case 1:
						func_44(Global_35, iLocal_946[2], func_338("GRT_NEG_DEPUTY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						func_334(&(Local_1191[0 /*17*/]), 0, 0);
						func_334(&(Local_1191[1 /*17*/]), 0, 0);
						func_36(&uLocal_1006);
						func_60(&iLocal_1296, 131072);
						*uParam0 = 7;
						break;
				}
			}
			break;
		case 6:
			if (func_348() && !func_43(iLocal_946[0], 0, 1))
			{
				*uParam0 = 5;
			}
			else if (func_339(0, 1, Global_35, 1))
			{
				func_351(1);
				*uParam0 = 5;
			}
			break;
		case 7:
			if (func_348() && !func_43(iLocal_946[0], 0, 1))
			{
				*uParam0 = 5;
			}
			else if (func_339(0, 1, Global_35, 1))
			{
				func_351(0);
				*uParam0 = 5;
			}
			break;
		case 8:
			func_337(2, 1075838976 /* Float: 2.5f */);
			break;
		case 9:
			func_337(2, 1075838976 /* Float: 2.5f */);
			break;
		case 10:
			if (func_343(iLocal_946[2], 2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[2]));
				func_341(&(Local_1309[2 /*21*/]), &Local_1191);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_159(var uParam0, int iParam1)
{
	if (Local_111.f_46)
	{
		if (*uParam0 < 10)
		{
			*uParam0 = 10;
		}
	}
	if (!func_51(iLocal_1296, 2048))
	{
		if (iLocal_110 >= 2 && !Local_111.f_46)
		{
			iLocal_1297[iParam1] = func_331(&(iLocal_946[iParam1]), &(Local_1309[iParam1 /*21*/]), 20f, &Local_1156, &(Local_111.f_192), 0f, 1, 0, "", func_330(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_43(iLocal_946[3], 0, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_946[3], Local_305[3 /*32*/].f_6, Local_305[3 /*32*/].f_9, true, true, true);
				func_345(iLocal_946[3], joaat("WORLD_HUMAN_STARE_STOIC"), -1, 1, 0, 4f);
				func_333(&(Local_1156[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(&(Local_1156[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_334(&(Local_1156[0 /*17*/]), 0, 0);
				func_334(&(Local_1156[1 /*17*/]), 0, 0);
				*uParam0 = 1;
			}
			break;
		case 1:
			if (!Local_111.f_46)
			{
				if (iLocal_110 >= 2)
				{
					if (!func_51(iLocal_1019, 524288))
					{
						if (func_352())
						{
							func_341(&(Local_1309[iParam1 /*21*/]), &Local_1156);
							func_333(&(Local_1156[0 /*17*/]), func_332(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							func_333(&(Local_1156[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
							if (!func_51(iLocal_1296, 2))
							{
								func_334(&(Local_1156[0 /*17*/]), 1, 0);
							}
							else
							{
								func_334(&(Local_1156[0 /*17*/]), 0, 0);
							}
							func_334(&(Local_1156[1 /*17*/]), 1, 0);
							*uParam0 = 4;
						}
					}
					else
					{
						func_341(&(Local_1309[3 /*21*/]), &Local_1156);
						PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 130, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_946[3], 315, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[3], false);
						func_60(&iLocal_1296, 2048);
						TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_946[3], false);
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_946[3]);
						PED::_0x58F7DB5BD8FA2288(iLocal_946[3]);
						func_336(iLocal_946[3], func_335(3), 0f, 0f, 0f, 0f, 0f, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_946[3], false, false);
						*uParam0 = 8;
					}
				}
			}
			if (iLocal_110 >= 2)
			{
				if (!func_51(iLocal_1019, 524288))
				{
					switch (iLocal_1297[iParam1])
					{
						case 0:
							break;
						case 1:
							func_44(Global_35, iLocal_946[3], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_334(&(Local_1156[1 /*17*/]), 0, 0);
							func_36(&uLocal_994);
							break;
					}
				}
			}
			break;
		case 2:
			break;
		case 4:
			func_347(iLocal_946[3], uParam0, 1, Local_305[3 /*32*/].f_6, Local_305[3 /*32*/].f_9, 0, &(Local_1309[3 /*21*/]), &Local_1156);
			switch (iLocal_1297[iParam1])
			{
				case 0:
					func_44(Global_35, iLocal_946[3], func_338("PLY_DEFUSE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_334(&(Local_1156[0 /*17*/]), 0, 0);
					fLocal_1050 = (fLocal_1050 + 3f);
					func_60(&iLocal_1296, 2);
					func_36(&uLocal_997);
					break;
				case 1:
					func_44(Global_35, iLocal_946[3], func_338("PLY_ANTAGONIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_334(&(Local_1156[0 /*17*/]), 0, 0);
					func_334(&(Local_1156[1 /*17*/]), 0, 0);
					func_36(&uLocal_994);
					break;
			}
			break;
		case 8:
			func_337(3, 1075838976 /* Float: 2.5f */);
			break;
		case 9:
			func_337(3, 1075838976 /* Float: 2.5f */);
			break;
		case 10:
			if (func_343(iLocal_946[3], 3))
			{
				PED::_0x58F7DB5BD8FA2288(iLocal_946[3]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[3]));
				func_341(&(Local_1309[3 /*21*/]), &Local_1156);
				*uParam0 = 11;
			}
			break;
		case 11:
			break;
	}
}

void func_160()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]) || !func_51(iLocal_1019, 4))
	{
		return;
	}
	if (iLocal_110 >= 2)
	{
		func_353();
		func_354();
		func_355();
		func_356();
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			if (func_43(iLocal_946[0], 0, 1))
			{
				PED::SET_PED_RESET_FLAG(iLocal_946[0], 299, true);
			}
			func_357();
			func_358();
		}
	}
	if (iLocal_110 >= 2)
	{
		if (func_51(iLocal_1019, 1048576) && !func_51(iLocal_1019, 4194304))
		{
			iLocal_919 = 2;
		}
	}
	switch (iLocal_919)
	{
		case 0:
			if (func_51(iLocal_1019, 4))
			{
				if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Local_903, "CRIMINAL"))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_946[0], Local_305[0 /*32*/].f_6, Local_305[0 /*32*/].f_9, true, true, true);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle_female_crim", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
				}
				iLocal_919 = 1;
			}
			break;
		case 1:
			if (!func_51(iLocal_1019, 65536))
			{
				if (func_51(iLocal_1019, 16384))
				{
					if (func_225())
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "main_dialogue_a", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "intro_idle", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					}
					func_60(&iLocal_1019, 65536);
				}
			}
			if (Local_111.f_46)
			{
				Local_111.f_44 = 1;
				func_48(iLocal_1093);
				if (func_51(iLocal_1019, 2048))
				{
					TASK::_0x673A8779D229BA5A(iLocal_946[0], ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 0, 0);
					iLocal_919 = 5;
				}
				else if (func_43(iLocal_946[0], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!func_182(iLocal_945))
					{
						if (func_360(iLocal_946[0], Global_35, 1f) == 2)
						{
							if (PED::IS_PED_MALE(iLocal_946[0]))
							{
								TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
							}
						}
						else if (PED::IS_PED_MALE(iLocal_946[0]))
						{
							TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						}
					}
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 4f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					iLocal_919 = 4;
				}
			}
			else if (iLocal_110 > 1)
			{
				func_361();
			}
			break;
		case 2:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_946[0], 7, false);
				Local_111.f_44 = 1;
				func_72();
				if (func_43(iLocal_946[0], 0, 0) && !func_51(iLocal_1019, 4194304))
				{
					PED::SET_PED_TO_RAGDOLL(iLocal_946[0], 1500, 1500, 1, false, true, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 449, true);
				}
				func_60(&iLocal_1019, 4194304);
				iLocal_919 = 3;
			}
			break;
		case 3:
			iLocal_1023++;
			if (!func_51(iLocal_1019, 2048))
			{
				if (iLocal_1023 >= func_362())
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_946[0]))
					{
						func_363(iLocal_946[0], 0);
						if (iLocal_984 == 38)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 76)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_V", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 105)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_R", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						else if (iLocal_984 == 5)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("SCRIPT_NECK_SNAP_SD", ENTITY::GET_ENTITY_COORDS(iLocal_946[0], false, false), 0, false, 0, true, 0);
						}
						func_364(1);
						TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
						func_365(iLocal_946[0], 1, 0);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_946[0]);
					}
					func_60(&iLocal_1019, 1);
					if (iLocal_109 == 4)
					{
						func_172(84, 7, 16, 0, 0);
					}
					iLocal_919 = 7;
				}
				else if (iLocal_1023 == 3)
				{
					func_366();
				}
			}
			else
			{
				iLocal_919 = 4;
			}
			break;
		case 4:
			if (func_51(iLocal_1019, 2048))
			{
				TASK::_0x673A8779D229BA5A(iLocal_946[0], ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 0, 0);
				func_48(iLocal_1093);
				iLocal_919 = 5;
			}
			else if (!func_51(iLocal_1019, 64))
			{
				if (!func_51(iLocal_1019, 536870912))
				{
					if (!func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
					{
						func_367();
					}
					else
					{
						func_60(&iLocal_1019, 536870912);
					}
				}
				else
				{
					func_368();
				}
			}
			break;
		case 5:
			if (func_43(iLocal_946[0], 0, 0))
			{
				if (func_369())
				{
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_946[0], true);
					func_48(iLocal_1093);
					func_36(&uLocal_1440);
					func_143(&iLocal_1019, 2097152);
					PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_946[0], 0, true);
					func_262(0);
					func_370();
					iLocal_919 = 6;
				}
			}
			break;
		case 6:
			func_370();
			if (func_371(&uLocal_1440, 10f))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1443, joaat("REL_COP"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), iLocal_1443);
			}
			break;
		case 7:
			break;
	}
}

bool func_161()
{
	if (func_51(iLocal_1019, 134217728))
	{
		return true;
	}
	if (!func_372(Local_903, &cLocal_1104))
	{
		return false;
	}
	if (!func_372(Local_903.f_1, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_903.f_2, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_903.f_3, &cLocal_1112))
	{
		return false;
	}
	if (!func_372(Local_911, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_1, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_2, &cLocal_1108))
	{
		return false;
	}
	if (!func_372(Local_911.f_3, &cLocal_1108))
	{
		return false;
	}
	func_60(&iLocal_1019, 134217728);
	return true;
}

bool func_162()
{
	if (func_51(iLocal_1019, 33554432))
	{
		return true;
	}
	if (ENTITY::_0x6BFBDC46139C45AB(Local_305[0 /*32*/].f_6) && ENTITY::_0x6BFBDC46139C45AB(Local_305[2 /*32*/].f_6))
	{
		func_60(&iLocal_1019, 33554432);
		return true;
	}
	return false;
}

bool func_163()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[0 /*12*/].f_8))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_818[1 /*12*/].f_8))
			{
				OBJECT::CREATE_OBJECT_SKELETON(Local_818[1 /*12*/].f_8);
				if (ENTITY::DOES_ENTITY_EXIST(Local_818[1 /*12*/].f_8) && func_43(iLocal_946[0], 0, 1))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_818[1 /*12*/].f_8, iLocal_946[0], -1, PED::GET_PED_BONE_INDEX(iLocal_946[0], 14284), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[0]))
				{
					iLocal_945 = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(Local_818[0 /*12*/].f_8, true, false), 0f, 0f, 0f, fLocal_1031, 6, true, 31, -1f);
					AUDIO::_0xF092B6030D6FD49C(iLocal_945, "ROPE_SETTINGS_DEFAULT");
					PHYSICS::_0x522FA3F490E2F7AC(iLocal_945, 1, 1);
					PHYSICS::_0x8D59079C37C21D78(iLocal_945, 2f);
					PHYSICS::_0x462FF2A432733A44(iLocal_945, Local_818[0 /*12*/].f_8, Local_818[1 /*12*/].f_8, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
					PHYSICS::_0x3C6490D940FF5D0B(iLocal_945, 0, "ropeAttach", fLocal_1030, 0);
					PHYSICS::_0x76BAD9D538BCA1AA(iLocal_945, 0f);
					PHYSICS::_0xB40EA9E0D2E2F7F3(iLocal_945, 1f);
					PED::_0x86F0B6730C32AC14(iLocal_946[0], 1);
					PED::_0xEF371232BC6053E1(iLocal_946[0]);
					PED::_0x8101BA1C0B462412(iLocal_946[0], iLocal_945);
					func_60(&iLocal_1019, 4);
					return true;
				}
			}
		}
		return false;
	}
	return false;
}

void func_164()
{
	Local_1451.f_3 = iLocal_946[0];
	Local_1451.f_7 = 0;
	Local_1451.f_17 = 3;
	Local_1451.f_18 = 3;
	Local_1451.f_19 = 3;
	Local_1451.f_20 = 1;
	Local_1451.f_21 = 3;
	Local_1451.f_22 = 3;
}

void func_165(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_373(iParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_100(iParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_374(iParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_375(iParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*iParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*iParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*iParam0, false, 15);
		}
	}
}

float func_166(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_96(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_96(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_96(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_96(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_96(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_96(uParam0->f_3, 1))
		{
		}
		else if (func_96(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

bool func_167(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_376(iVar0) || func_377(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_168(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_166(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_288())
	{
		bVar1 = true;
		fVar3 = func_208(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_289(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_289(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_290(&(uParam0->f_121), iParam4, fParam1))
		{
			func_135(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_212(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_134(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_135(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_212(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (iLocal_109 == 4)
	{
		iVar1 = 2;
		iVar2 = 76;
	}
	else if (iLocal_109 == 5)
	{
		iVar1 = 1;
		iVar2 = 105;
	}
	else if (iLocal_109 == 6)
	{
		iVar1 = 4;
		iVar2 = 5;
	}
	else if (iLocal_109 == 8 || iLocal_109 == 0)
	{
		iVar1 = 2;
		iVar2 = 38;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (func_378(iVar2, iVar0) == Local_305[0 /*32*/].f_1)
			{
				func_379(iVar2, iVar0);
				func_380(iVar2, iVar0);
				func_381();
				func_65(1);
				bLocal_1476 = true;
			}
			iVar0++;
		}
	}
}

void func_170()
{
	if (iLocal_109 == 1)
	{
		if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("SC_WORLD_HUMAN_MOURNING"), false))
		{
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_WORLD_HUMAN_MOURNING"), 15, 0, joaat("SCRIPT_COMMON_KNEEL_MOURNING_FEMALE_A"));
		}
	}
}

void func_171(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_172(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (iParam3 != 0)
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
		if (iVar0 != 0)
		{
			func_382(iParam0, iParam1, iVar0);
			func_384(iParam0, iParam1, func_383(iParam3));
		}
	}
	else if (iParam4 != 0)
	{
		func_382(iParam0, iParam1, iParam4);
		func_384(iParam0, iParam1, func_383(iParam3));
	}
	func_385(iParam0, iParam1, iParam2);
	func_387(iParam0, iParam1, func_386(1));
	func_389(iParam0, iParam1, func_388());
}

void func_173()
{
	if (!func_51(iLocal_1019, 16384))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903, "BOOL_Idle", true, false);
		}
		if (func_225())
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", true, false);
			}
		}
		func_60(&iLocal_1019, 16384);
	}
}

void func_174()
{
	if (func_51(iLocal_1019, 8192))
	{
		return;
	}
	if (func_51(iLocal_1019, 4194304))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
		{
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL") == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_1, "LOOP_BOOL", true, false);
			}
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_2))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_2, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_1, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_2, "LOOP_BOOL", true, false);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_3))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_911.f_3, "LOOP_BOOL", true, false);
		}
		func_60(&iLocal_1019, 8192);
	}
}

void func_175(bool bParam0)
{
	int iVar0;

	if ((iLocal_109 != 1 || Local_111.f_46) || !func_43(iLocal_946[4], 0, 1))
	{
		return;
	}
	if (!func_51(iLocal_1019, 8388608))
	{
		if (!func_228(joaat("SC_WORLD_HUMAN_MOURNING")))
		{
			func_170();
		}
		if (((ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903.f_1, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_903.f_1) > 0.985f) || bParam0) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903.f_1, false))
		{
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_903.f_1, false))
			{
			}
			func_45(Local_903.f_1);
			func_48(iLocal_1100);
			if (!Local_111.f_46)
			{
				func_44(iLocal_946[4], iLocal_946[5], func_338("RUN_HOME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]) || TASK::IS_PED_EXITING_SCENARIO(iLocal_946[4], true))
			{
				PED::SET_PED_RESET_FLAG(iLocal_946[4], 12, true);
			}
			func_390(iLocal_946[4]);
			func_391();
			func_60(&iLocal_1019, 8388608);
		}
	}
	else
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]) || TASK::IS_PED_EXITING_SCENARIO(iLocal_946[4], true))
		{
			PED::SET_PED_RESET_FLAG(iLocal_946[4], 12, true);
		}
		if (!func_51(iLocal_1020, 16777216))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_946[4]))
			{
				if (PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(iLocal_946[4], vLocal_1051) || !PED::IS_PED_USING_ANY_SCENARIO(iLocal_946[4]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 128, 1.5f, 0);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					func_359(iLocal_946[4], &iVar0, 0, 0, 1, 1);
					func_44(iLocal_946[4], Global_35, "RE_PH_VAL_V1_BUMP_FLEE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_60(&iLocal_1020, 16777216);
				}
			}
			else if (!func_51(iLocal_1019, 4096))
			{
				func_392();
			}
		}
	}
}

void func_176()
{
	if ((((iLocal_109 != 7 || Local_111.f_46) || func_51(iLocal_1019, 8388608)) || !func_43(iLocal_946[6], 0, 1)) || !func_43(iLocal_946[7], 0, 1))
	{
		return;
	}
	if ((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[6], -1) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[7], -1)) && func_51(iLocal_1019, 1))
	{
		switch (iLocal_1029)
		{
			case 0:
				if (func_339(0, 1, iLocal_946[6], 1))
				{
					func_44(iLocal_946[6], iLocal_946[7], "RE_PH_STD_NASTY_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1029++;
				}
				break;
			case 1:
				if (func_339(0, 1, iLocal_946[6], 1))
				{
					func_44(iLocal_946[7], iLocal_946[6], "RE_PH_STD_NO_CARE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1029++;
				}
				break;
			case 2:
				if (func_339(0, 1, iLocal_946[7], 1))
				{
					func_44(iLocal_946[6], iLocal_946[7], "RE_PH_STD_NASTY_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					func_393(iLocal_946[7]);
					iLocal_1029++;
				}
				break;
			case 3:
				if (func_339(0, 1, iLocal_946[6], 1))
				{
					func_393(iLocal_946[6]);
					func_60(&iLocal_1019, 8388608);
				}
				break;
		}
	}
}

bool func_177()
{
	int iVar0;
	bool bVar1;

	if (!func_51(iLocal_1019, 64))
	{
		return false;
	}
	if (iLocal_1429 == 0)
	{
		return true;
	}
	bVar1 = true;
	iVar0 = 4;
	while (iVar0 <= 15)
	{
		if (func_43(iLocal_946[iVar0], 0, 1))
		{
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[iVar0], -1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_946[iVar0], 242628503, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_946[iVar0], 242628503, true) != 0)
				{
					if (iLocal_109 == 7 && (iVar0 == 6 || iVar0 == 7))
					{
						func_394(iLocal_946[iVar0], 0, 0, 1065353216 /* Float: 1f */, 0, 0, 0, 0);
					}
					else
					{
						func_394(iLocal_946[iVar0], 0, 0, 1065353216 /* Float: 1f */, 0, 0, 0, 1);
					}
				}
			}
			else
			{
				bVar1 = false;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		iLocal_1429 = 0;
	}
	return false;
}

void func_178()
{
	if (iLocal_980 != 0)
	{
		if (!LAW::_0x40851BCC33ACD9AB(iLocal_980))
		{
			if (iLocal_980 != iLocal_946[0])
			{
				if (iLocal_109 == 1)
				{
					if (iLocal_980 != iLocal_946[4] && iLocal_980 != iLocal_946[5])
					{
						func_48(iLocal_1092);
						TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
						EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
						iLocal_1025++;
					}
				}
				else
				{
					func_48(iLocal_1092);
					TASK::CLEAR_PED_TASKS(iLocal_980, true, false);
					EVENT::_0x7C511E91738A0828(iLocal_980, Global_35, 14, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_980);
					iLocal_1025++;
				}
			}
		}
	}
}

void func_179()
{
	if (func_51(iLocal_1019, 1024))
	{
		if (func_140(Global_35, iLocal_1094, 1, 0) && Local_111.f_46)
		{
			func_395(iLocal_946[3], iLocal_1094);
			func_395(iLocal_946[2], iLocal_1094);
			func_395(iLocal_946[1], iLocal_1094);
			func_74(iLocal_1094, 0, 16);
			func_143(&iLocal_1019, 1024);
		}
	}
}

void func_180()
{
	int iVar0;
	int iVar1;

	if (!Local_111.f_46)
	{
		return;
	}
	if (!func_35(&uLocal_985))
	{
		func_36(&uLocal_985);
	}
	iVar0 = 4;
	while (iVar0 <= 15)
	{
		if (func_43(iLocal_946[iVar0], 0, 0))
		{
			if (!func_396(iVar0))
			{
				if (func_37(&uLocal_985) >= fLocal_1033[iVar0])
				{
					func_397(iVar0);
					if (TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_946[iVar0]))
					{
						PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iLocal_946[iVar0], Global_36, 3);
					}
					if (((func_51(iLocal_1020, 131072) || func_51(iLocal_1020, 4096)) || func_51(iLocal_1020, 32768)) || (iLocal_1420 == 0 && func_139() == 0))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_946[iVar0], false, false);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[iVar0]));
					}
					else
					{
						if (iLocal_1028 < 5)
						{
							if (AUDIO::_0xF0EE69F500952FA5(iLocal_946[iVar0]))
							{
								func_44(iLocal_946[iVar0], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_SHOUTED_CLEAR"), 1, 0, 0);
								iLocal_1028++;
							}
						}
						TASK::_0x2E1D6D87346BB7D2(iLocal_946[iVar0], Global_35, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if ((iVar0 % 4) == 2)
						{
							TASK::TASK_REACT(0, Global_35, Global_36, "Flee_Human_MajorThreat", MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1f), 0, 4);
						}
						if ((iVar0 % 2) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 8192, 3f, 0);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(0, Global_35, 100f, -1, 8448, 3f, 0);
						}
						func_359(iLocal_946[iVar0], &iVar1, 0, 0, 1, 1);
						if (iLocal_109 == 1 && iLocal_946[iVar0] == iLocal_946[4])
						{
						}
						else
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[iVar0]));
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_946[iVar0], false, false);
					}
					func_398(&iLocal_1020, iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_181()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_399(&iLocal_946, 1, 1, 3, 0f, 30f);
	iVar3 = 0;
	if (iVar0 != 0 && iVar0 != iLocal_946[2])
	{
		switch (iLocal_109)
		{
			case 3:
				if (iLocal_984 == 76)
				{
					if (iVar0 == iLocal_946[3] || iVar0 == iLocal_946[1])
					{
						sVar2 = "RE_PH_VAL_V3_AGGRO";
					}
				}
				else if (iLocal_984 == 105)
				{
					if (iVar0 == iLocal_946[1])
					{
						sVar2 = "RE_PH_RHD_V2_AGGRO";
					}
				}
				break;
			case 4:
				sVar2 = "RE_PH_VAL_V4_AGGRO";
				break;
			case 5:
				if (iVar0 == iLocal_946[1])
				{
					sVar2 = "RE_PH_RHD_V3_AGGRO";
				}
				break;
			case 6:
				if (iVar0 == iLocal_946[1])
				{
					sVar2 = "RE_PH_STD_V3_AGGRO";
				}
				break;
			case 7:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "GENERIC_ANGRY_SHOUT";
				}
				break;
			case 0:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "OPENS_FIRE";
				}
				break;
			case 8:
				if (iVar0 == iLocal_946[3])
				{
					sVar2 = "OPENS_FIRE";
				}
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			sVar2 = func_338("AGGRO");
		}
	}
	else
	{
		if (iVar0 == iLocal_946[2])
		{
			switch (iLocal_109)
			{
				case 5:
					sVar2 = "GENERIC_ANGRY_SHOUT";
					break;
				case 6:
					sVar2 = "ITS_THEM_NEUTRAL_EXTREME";
					break;
				case 7:
					sVar2 = "ITS_THEM_NEUTRAL_EXTREME";
					break;
				case 0:
					sVar2 = "OPENS_FIRE";
					iVar3 = 2;
					break;
				case 8:
					sVar2 = "OPENS_FIRE";
					iVar3 = 2;
					break;
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2) || iVar0 == 0)
		{
			iVar1 = 1;
			while (iVar1 <= 3)
			{
				if (func_43(iLocal_946[iVar1], 0, 0) && func_317(iLocal_946[iVar1], 1, 1) < 50f)
				{
					iVar0 = iLocal_946[iVar1];
				}
				iVar1++;
			}
		}
	}
	if (iVar0 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_44(iVar0, Global_35, sVar2, 0, -1082130432 /* Float: -1f */, iVar3, 0, 0, 2, 1, 1, joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 1, 0, 0);
		}
		else
		{
			func_320(iVar0, "GENERIC_INSULT_HIGH_MALE", 1744022339, 0, 1, 0, 0, 1);
		}
	}
}

bool func_182(int iParam0)
{
	if (!PHYSICS::DOES_ROPE_EXIST(iParam0))
	{
		return true;
	}
	return false;
}

bool func_183()
{
	if (iLocal_110 >= 2)
	{
		if ((func_51(iLocal_1019, 1) && !Local_111.f_46) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_946[0]))
		{
			return true;
		}
	}
	return false;
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_400(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_401(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/].f_1;
	}
	return 0;
}

int func_185()
{
	return Global_1572887.f_12;
}

int func_186(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_402(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_187(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_188(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_189(int iParam0, bool bParam1)
{
	switch (func_403(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_186(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_3;
	}
	return 0;
}

int func_191(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

int func_192(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(iParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_199(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iVar2)))
		{
			if (func_201(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_193(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_194(int iParam0, int iParam1)
{
	if (func_185() != -1)
	{
		return false;
	}
	if (!func_195(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_195(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_196(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_197(int iParam0, int iParam1)
{
	if (func_185() != -1)
	{
		return;
	}
	if (!func_195(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_198(int iParam0)
{
	int iVar0;

	if (!func_195(iParam0))
	{
		return;
	}
	iVar0 = func_404(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_199(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_200(int iParam0)
{
	return iParam0 != 0;
}

int func_201(int iParam0)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_202(int iParam0, bool bParam1)
{
	if (!func_195(iParam0))
	{
		return 0;
	}
	if (!func_194(iParam0, 2))
	{
		return 0;
	}
	if (func_199(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		return 1;
	}
	if (func_194(iParam0, 1) && !bParam1)
	{
		func_252(iParam0, 128);
		return 1;
	}
	func_197(iParam0, 129);
	func_198(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_201(iParam0));
	func_254(iParam0, 0);
	return 1;
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_204(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

void func_205(int iParam0, bool bParam1)
{
	if (func_43(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_405(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_206(var uParam0, var uParam1)
{
	if (func_96(uParam0->f_3, 16777216))
	{
		if (func_406(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_207(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_208(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_209(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_43(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_208(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_68(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_210(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_407(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_408(uParam0);
	func_409(uParam0);
	func_410(uParam0);
	if (!func_411(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_308(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_412();
	}
	if (!func_413(uParam0->f_3) && !func_96(uParam0->f_3, 256))
	{
		func_64(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_48(uParam0->f_173);
	func_48(uParam0->f_172);
}

void func_211(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_212(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_213(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_185() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_214(int iParam0)
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

int func_215(int iParam0)
{
	return iParam0;
}

void func_216(int iParam0)
{
	if (!func_414(iParam0))
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

bool func_217(int iParam0)
{
	if (((func_218(iParam0, 1) && func_218(iParam0, 2)) && func_218(iParam0, 8)) && func_218(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_218(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_220(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_415(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_416(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_416(), iVar3);
		if (func_417(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_221(int iParam0)
{
	func_60(iParam0, 256);
}

bool func_222(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_189(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_223(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

int func_224()
{
	return Global_1897952.f_41;
}

bool func_225()
{
	if (iLocal_109 == 1 || iLocal_109 == 7)
	{
		return true;
	}
	return false;
}

int func_226(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return STREAMING::_REQUEST_SCENARIO_TYPE(iParam0, iParam1, iParam2, iParam3);
}

bool func_227(var uParam0)
{
	if (!func_418(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_418(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_228(int iParam0)
{
	return STREAMING::_HAS_SCENARIO_TYPE_LOADED(iParam0, false);
}

Vector3 func_229(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_244(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_419(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_420(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_230(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_96(iParam0, 32))
	{
		if (func_421(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_422(Global_35, &(uParam1->f_12)) };
				if (!func_87(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_423(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_309(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_310());
		if (func_424(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_312(iVar0, func_311(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_312(iVar0, func_311(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_96(iParam0, 1))
		{
			func_425(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_426(iParam0);
}

bool func_231(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_427(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_133(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_428(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_428(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_232(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_429(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_96(iParam0, 1))
			{
				if (func_133(iParam0, 2))
				{
				}
			}
			func_430(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_431(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_431(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_128(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_233(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_419(iParam1))
	{
		if (!func_432(iParam1, iVar0))
		{
			vVar4 = { func_229(iParam1, iVar0) };
			if (!func_87(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_238(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_433(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_87(vVar4))
	{
	}
	return vVar1;
}

int func_234(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_241("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_235(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_419(iParam0))
	{
		vVar1 = { func_229(iParam0, iVar0) };
		if (func_434(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_236(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_237(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_435(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_436(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_87(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_437(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_234(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_238(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_232(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_96(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_239(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_240(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_438(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_439(iParam0, uParam2))
	{
		return false;
	}
	if (!func_440(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_441(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

var func_241(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_442(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_443(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_442(sVar0, iParam1, 0, 0, 1, 1);
}

int func_242(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_243(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_244(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_245(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_246(int iParam0, int iParam1)
{
	if (func_444(iParam0))
	{
		return;
	}
	if (func_445(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

void func_247(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_54(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_248(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_446(*uParam0, 0f, 0f, 0f))
	{
		return true;
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
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

Vector3 func_249(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_250(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

bool func_251(int iParam0, bool bParam1)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	if ((func_194(iParam0, 1) && !func_193(iParam0)) && func_196(iParam0))
	{
		return false;
	}
	if (!func_194(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_256(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_252(int iParam0, int iParam1)
{
	if (func_185() != -1)
	{
		return;
	}
	if (!func_195(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_253(int iParam0)
{
	if (!func_195(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_254(int iParam0, int iParam1)
{
	if (!func_195(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_255(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	if (!func_194(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_256(int iParam0, bool bParam1)
{
	if (func_185() != -1)
	{
		return false;
	}
	if (!func_195(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_404(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_201(iParam0));
}

bool func_257(int iParam0)
{
	if (!func_195(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_201(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_201(iParam0), 0)))
		{
			return false;
		}
	}
	return true;
}

bool func_258()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_259(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> /*32*/ sVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_447(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_448(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_449(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_450(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_451(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_447(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_448(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_452(&(uParam0->f_22)));
					Var2 = { func_447(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_448(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_449(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_453(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_34(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

void func_260(int iParam0, bool bParam1)
{
	func_454(iParam0, bParam1);
}

void func_261(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		return;
	}
	else if (ENTITY::GET_IS_ANIMAL(iParam0))
	{
		iVar0 = func_455(iParam0);
		func_456(iVar0, ENTITY::_GET_IS_BIRD(iParam0));
	}
	if (bParam1)
	{
		func_454(iParam0, 0);
	}
}

void func_262(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 137, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 44, bParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 26, bParam0);
}

void func_263(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

int func_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_457(iParam3, 1);
	bVar1 = func_457(iParam3, 2);
	bVar2 = !func_457(iParam3, 4);
	bVar3 = func_457(iParam3, 8);
	bVar4 = !func_457(iParam3, 16);
	bVar5 = func_457(iParam3, 32);
	bVar6 = func_457(iParam3, 64);
	return func_458(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

float func_265()
{
	switch (iLocal_109)
	{
		case 0:
			return 253.5f;
		case 8:
			return 253.5f;
		case 1:
			return 10f;
		case 3:
			if (func_224() == 9)
			{
				return 283f;
			}
			break;
		case 4:
			return 283f;
		case 5:
			break;
		case 6:
			return 75f;
		case 7:
			return 75f;
	}
	return 0f;
}

Vector3 func_266()
{
	switch (iLocal_109)
	{
		case 0:
			return -762.565f, -1248.871f, 42.458f;
		case 8:
			return -762.565f, -1248.871f, 42.458f;
		case 1:
			return -324.1777f, 734.2256f, 116.4041f;
		case 3:
			if (func_224() == 9)
			{
				return -324.1151f, 733.5054f, 116.3617f;
			}
			else
			{
				return 1368.575f, -1212.47f, 82.467f;
			}
			break;
		case 4:
			return -324.1151f, 733.5054f, 116.3617f;
		case 5:
			return 1368.575f, -1212.47f, 82.42701f;
		case 6:
			return 2690.224f, -1122.174f, 49.6898f;
		case 7:
			return 2690.224f, -1122.174f, 49.6898f;
	}
	return 0f, 0f, 0f;
}

float func_267()
{
	switch (iLocal_109)
	{
		case 0:
			return 135.644f;
		case 8:
			return 135.644f;
		case 1:
			return 270.8f;
		case 3:
			if (func_224() == 9)
			{
				return 270.8f;
			}
			else
			{
				return -150.835f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return -150.835f;
		case 6:
			return -23.9f;
		case 7:
			return -23.9f;
	}
	return 0f;
}

Vector3 func_268()
{
	switch (iLocal_109)
	{
		case 0:
			return -759.083f, -1250.656f, 42.492f;
		case 8:
			return -759.083f, -1250.656f, 42.492f;
		case 1:
			return -326.1004f, 736.1454f, 116.2898f;
		case 3:
			if (func_224() == 9)
			{
				return -325.5957f, 734.0959f, 116.2971f;
			}
			else
			{
				return 1364.445f, -1217.195f, 82.6203f;
			}
			break;
		case 4:
			return -325.5957f, 734.0959f, 116.2971f;
		case 5:
			return 1364.445f, -1217.195f, 82.6203f;
		case 6:
			return 2686.455f, -1120.031f, 49.67808f;
		case 7:
			return 2686.455f, -1120.031f, 49.67808f;
	}
	return 0f, 0f, 0f;
}

float func_269()
{
	switch (iLocal_109)
	{
		case 0:
			return 147.835f;
		case 8:
			return 147.835f;
		case 1:
			return 265.8f;
		case 3:
			if (func_224() == 9)
			{
				return 285.8f;
			}
			else
			{
				return 276.149f;
			}
			break;
		case 4:
			return 285.8f;
		case 5:
			return 276.149f;
		case 6:
			return -10.394f;
		case 7:
			return -10.394f;
	}
	return 0f;
}

Vector3 func_270()
{
	switch (iLocal_109)
	{
		case 0:
			return -764.209f, -1251.806f, 42.45041f;
		case 8:
			return -764.209f, -1251.806f, 42.45041f;
		case 1:
			return -322.4158f, 730.6044f, 116.5431f;
		case 3:
			if (func_224() == 9)
			{
				return -325.0915f, 728.8259f, 116.2582f;
			}
			else
			{
				return 1366.963f, -1216.577f, 82.7131f;
			}
			break;
		case 4:
			return -325.0915f, 728.8259f, 116.2582f;
		case 5:
			return 1366.963f, -1216.577f, 82.7131f;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f, 0f, 0f;
}

float func_271()
{
	switch (iLocal_109)
	{
		case 0:
			return 180f;
		case 8:
			return 180f;
		case 1:
			return 315.8f;
		case 3:
			if (func_224() == 9)
			{
				return 310.8f;
			}
			else
			{
				return 290f;
			}
			break;
		case 4:
			return 310.8f;
		case 5:
			return 290f;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f;
}

Vector3 func_272()
{
	switch (iLocal_109)
	{
		case 0:
			return -753.802f, -1249.84f, 42.544f;
		case 8:
			return -753.802f, -1249.84f, 42.544f;
		case 1:
			return -326.6582f, 728.1327f, 116.1422f;
		case 3:
			if (func_224() == 9)
			{
				return -328.0656f, 730.264f, 116.14f;
			}
			break;
		case 4:
			return -328.0656f, 730.264f, 116.14f;
		case 5:
			break;
		case 6:
			return 2685.671f, -1122.667f, 49.69695f;
		case 7:
			return 2685.671f, -1122.667f, 49.69695f;
	}
	return 0f, 0f, 0f;
}

float func_273()
{
	switch (iLocal_109)
	{
		case 0:
			return 133.875f;
		case 8:
			return 133.875f;
		case 1:
			return 290.8f;
		case 3:
			if (func_224() == 9)
			{
				return 270.8f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return 0f;
		case 6:
			return 344.376f;
		case 7:
			return 344.376f;
	}
	return 0f;
}

Vector3 func_274()
{
	switch (iLocal_109)
	{
		case 0:
			break;
		case 8:
			break;
		case 1:
			return -328.13f, 733.9528f, 116.2449f;
		case 3:
			if (func_224() == 9)
			{
				return -326.8083f, 733.2062f, 116.2685f;
			}
			break;
		case 4:
			return -326.8083f, 733.2062f, 116.2685f;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
	}
	return 0f, 0f, 0f;
}

float func_275()
{
	switch (iLocal_109)
	{
		case 0:
			break;
		case 8:
			break;
		case 1:
			return 270.8f;
		case 3:
			if (func_224() == 9)
			{
				return 270.8f;
			}
			break;
		case 4:
			return 270.8f;
		case 5:
			return 0f;
		case 6:
			break;
		case 7:
			break;
			break;
	}
	return 0f;
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_277(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_278(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_279(int iParam0, int iParam1)
{
	if (!func_278(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

Vector3 func_280(var uParam0)
{
	return uParam0->f_51;
}

void func_281(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_282()
{
	return Global_1935436 == 2;
}

void func_283(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_284(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_96(iParam0, 2))
	{
		func_460(iParam0, func_459(iParam1));
	}
	else
	{
		func_461(iParam0, func_224());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_462(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_463(iParam0, 0);
	func_464(iParam0);
	func_465(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_96(iParam0, 16))
	{
		func_285(iParam0, 0, 0, 0, 0);
	}
}

void func_285(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_466() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_244(iVar1) && !func_96(iVar1, iParam2)) && (!bParam3 || !func_300(iVar1))) && (!bParam4 || !func_467(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_468(iVar0);
			}
		}
		iVar0++;
	}
}

int func_286(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_287(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_424(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_96(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_469(2, -1, 0, 0, 0);
			}
			else
			{
				func_469(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_469(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_470(1, uParam0->f_177))
				{
					func_471(16, uParam0->f_177);
					func_472(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_473(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_469(8, -1, 0, 0, 0);
	}
}

int func_288()
{
	if (func_474(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_475())
		{
			return 1;
		}
	}
	return 0;
}

int func_289(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_476(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_477(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_126() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_290(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_135(uParam0);
	return true;
}

bool func_291()
{
	return (Global_1894899 & 1 != 0 && func_2() != -1);
}

bool func_292(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_293(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_478(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
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

bool func_294(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_479(func_388());
	if (func_3(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_3(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_3(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_3(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_3(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_3(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_3(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_3(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_3(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_295(int iParam0, int iParam1)
{
	return (func_286(iParam0) && iParam1) != 0;
}

bool func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_480(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_481(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_482(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_483(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_484(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_485(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_486(iVar3))
	{
		return true;
	}
	return false;
}

bool func_297(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_487(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_298(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == joaat("WORLD_PLAYER_SLEEP_GROUND") || iVar0 == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_ARM")) || iVar0 == joaat("WORLD_HUMAN_SLEEP_GROUND_PILLOW")) || iVar0 == joaat("WORLD_ANIMAL_DOG_SLEEPING")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW")) || iVar0 == joaat("PROP_PLAYER_PRPTY_SAVE_GAME")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_LEFT")) || iVar0 == joaat("PROP_HUMAN_SLEEP_BED_PILLOW_RIGHT"))
	{
		return true;
	}
	if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME") || iVar0 == joaat("WORLD_PLAYER_SLEEP_BEDROLL"))
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_299(int iParam0, bool bParam1, bool bParam2)
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
		if (func_488())
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
		iVar0 = func_489(Global_1898164.f_1[0 /*5*/]);
		if (func_188(iVar0) && func_490(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_491(Global_1898164.f_1[0 /*5*/]))
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

bool func_300(int iParam0)
{
	if (!func_244(iParam0))
	{
		return false;
	}
	if (func_492(64) && func_493(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_301()
{
	return Global_1894899 & 4 != 0;
}

int func_302(int iParam0)
{
	if (!func_494(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_303(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_304(vector3 vParam0, int iParam3)
{
	if (!func_303(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_305(vector3 vParam0)
{
	float fVar0;

	if (func_87(vParam0))
	{
		return false;
	}
	fVar0 = func_208(func_291(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_306(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_36(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_36(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_35(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_495(uParam0, fParam2))
		{
			return true;
		}
		if (func_35(uParam0))
		{
			func_496(uParam0);
		}
	}
	return false;
}

bool func_307(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_308(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_87(vParam0))
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
			if (func_434(vVar2, vParam0, 2f, 1))
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

float func_309(int iParam0)
{
	if (!func_244(iParam0))
	{
		return 0f;
	}
	if (!func_497(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_310()
{
	return "unnamed";
}

char* func_311(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_312(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_425(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_313()
{
	if (func_51(iLocal_1019, 4))
	{
		if (func_51(iLocal_1019, 2048) && !func_51(iLocal_1019, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_314()
{
	int iVar0;

	if (Local_111.f_46)
	{
		return false;
	}
	iVar0 = func_498(Global_35, 1, 0, 0);
	if ((iVar0 == joaat("WEAPON_LASSO") && PED::IS_PED_SHOOTING(Global_35)) && func_499(iLocal_946[0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return true;
	}
	return false;
}

bool func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_500(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_501(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_502(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_503(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_504(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_505(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_293(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_502(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_506(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_507(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_508(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_509(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_509(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_502(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_510(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_511(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_512(iParam2, 4000))
				{
					if ((func_513(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_514(iParam2, iParam0)) && func_515(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_513(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_514(iParam2, iParam0)) && func_515(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_516(iParam0, Global_1935630.f_41))
							{
								func_517();
								*iParam3 = 2;
								func_502(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_516(iParam0, Global_1935630.f_41))
						{
							func_517();
							*iParam3 = 2;
							func_502(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_518(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_147() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_517();
						*iParam3 = 2;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_519())
					{
						if (func_516(iParam0, Global_1935630.f_42))
						{
							func_517();
							*iParam3 = 2;
							func_502(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_520(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_502(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_521(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_522(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_523(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_524(iParam2, 4000))
				{
					if (func_525(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_502(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_526(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_502(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_527(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_502(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_316(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

float func_317(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_318(Global_35, iParam0, bParam1, bParam2);
}

float func_318(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_319(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_320(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_528(iParam0, &Var0);
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_322()
{
	if (func_51(iLocal_1296, 512))
	{
		return;
	}
	if (iLocal_1303[4] > 0)
	{
		iLocal_1297[4] = func_331(&(iLocal_946[4]), &(Local_1309[4 /*21*/]), 20f, &Local_1121, &(Local_111.f_192), 0f, 1, 0, "", func_330(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[4], 0);
	}
	switch (iLocal_1303[4])
	{
		case 0:
			if (!func_51(iLocal_1296, 1))
			{
				func_341(&(Local_1309[4 /*21*/]), &Local_1121);
				func_333(&(Local_1121[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(&(Local_1121[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_334(&(Local_1121[0 /*17*/]), 0, 0);
				func_334(&(Local_1121[1 /*17*/]), 0, 0);
				func_60(&iLocal_1296, 1);
			}
			iLocal_1303[4] = 1;
			break;
		case 1:
			if (func_51(iLocal_1019, 4096))
			{
				func_334(&(Local_1121[0 /*17*/]), 1, 0);
				func_334(&(Local_1121[1 /*17*/]), 1, 0);
				func_529(&(Local_1121[0 /*17*/]), 8);
				func_529(&(Local_1121[1 /*17*/]), 8);
				iLocal_1303[4] = 5;
			}
			break;
		case 4:
			break;
		case 5:
			switch (iLocal_1297[4])
			{
				case 0:
					func_44(Global_35, iLocal_946[4], "RE_PH_VAL_V1_GRT_POS_WIFE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_334(&(Local_1121[0 /*17*/]), 0, 0);
					func_334(&(Local_1121[1 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 256);
					func_60(&iLocal_1296, 1024);
					iLocal_1303[4] = 6;
					break;
				case 1:
					func_44(Global_35, iLocal_946[4], "RE_PH_VAL_V1_GRT_NEG_WIFE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					func_81(8000);
					IK::_0x66F9EB44342BB4C5(iLocal_946[4], &Local_920);
					func_334(&(Local_1121[0 /*17*/]), 0, 0);
					func_334(&(Local_1121[1 /*17*/]), 0, 0);
					func_60(&iLocal_1296, 256);
					iLocal_1303[4] = 6;
					break;
			}
			break;
		case 6:
			if (func_339(-2f, 1, Global_35, 1))
			{
				func_44(iLocal_946[4], Global_35, "INTIMIDATED_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_946[4], 130, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[4], false);
				func_342(&(iLocal_946[4]), &(Local_1309[4 /*21*/]), &Local_1121, 1, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 7, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 3, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[4], 4, 2, 1);
				func_60(&iLocal_1296, 512);
				iLocal_1303[4] = 16;
			}
			break;
		case 16:
			break;
	}
}

bool func_323(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_324()
{
	if (((iLocal_109 == 0 || iLocal_109 == 5) || iLocal_109 == 6) || iLocal_109 == 8)
	{
		return true;
	}
	if (iLocal_109 == 3)
	{
		if (func_51(iLocal_1296, 4096))
		{
			return true;
		}
	}
	if (iLocal_109 == 4)
	{
		if (func_51(iLocal_1296, 4096))
		{
			return true;
		}
	}
	return false;
}

void func_325(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_185() != -1)
	{
		return;
	}
	if ((Global_36616 && func_530(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_531(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_532(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_533(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_532(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (func_140((*iParam0)[iVar1], iParam1, 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_327()
{
	if (!func_43(iLocal_946[1], 0, 0))
	{
		return;
	}
	switch (iLocal_1430)
	{
		case 0:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -107150995)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1365010891)))
				{
					func_44(iLocal_946[1], 0, func_338("LAW_INTRO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 1:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -223971469)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1569813648)))
				{
					func_44(iLocal_946[1], 0, func_338("LAW_CRIME"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 2:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1516677693)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 655261354)))
				{
					func_44(iLocal_946[1], iLocal_946[0], func_338("LAST_WORDS"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					func_60(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 3:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -273859117)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 962599897)))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 4:
			if (func_225())
			{
				if ((iLocal_109 == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -793724859)) || (iLocal_109 == 7 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 414664215)))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 5:
			if (iLocal_109 == 7)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1349088127))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 6:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1726099939))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1817889081))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_A")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_A")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_A", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1717656596))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1445688180))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
			{
				func_44(iLocal_946[1], 0, func_338("INTRO_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 7:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 343917799))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 2123918772))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_B")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_B")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 677273707))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 457961337))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1))
			{
				func_44(iLocal_946[1], 0, func_338("INTRO_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 8:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1030184686))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1203830790))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V3_DROWN_INTRO_C")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_VAL_V3_DROWN_INTRO_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_INTRO_C")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_INTRO_C", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 969769709))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -43666515))
				{
					func_44(iLocal_946[1], 0, func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
			{
				func_44(iLocal_946[1], iLocal_946[0], func_338("INTRO_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 9:
			switch (iLocal_109)
			{
				case 8:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -31975006))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 0:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -770777874))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 5:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 855458316))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 6:
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1116500892))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1353289895))
						{
							func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
							iLocal_1430++;
						}
					}
					else if (iLocal_984 == 105)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1525446693))
						{
							func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
							iLocal_1430++;
						}
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech", 1))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_A"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
					break;
			}
			break;
		case 10:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 56960060))
				{
					func_534();
					func_44(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1253268630))
				{
					func_534();
					func_44(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1191738721))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (iLocal_984 == 105)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_RHD_V2_DROWN_DESC_B")))
					{
						func_44(iLocal_946[1], 0, "RE_PH_RHD_V2_DROWN_DESC_B", "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 483141660))
				{
					func_44(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1594595880))
				{
					func_44(iLocal_946[1], 0, func_338("DESC_B"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (!func_35(&uLocal_1012))
			{
				func_36(&uLocal_1012);
			}
			else if (func_37(&uLocal_1012) > 6.5f && func_339(0, 1, iLocal_946[1], 1))
			{
				func_44(iLocal_946[1], 0, func_338("DESC_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_36(&uLocal_1012);
				iLocal_1430++;
			}
			break;
		case 11:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -240221997))
				{
					func_44(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1615657336))
				{
					func_44(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 251563137))
				{
					func_534();
					func_44(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1924270420))
				{
					func_534();
					func_44(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 105)
				{
					iLocal_1430++;
				}
				else if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1929696605))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_C"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
			}
			else if (func_37(&uLocal_1012) > 5.5f && func_339(0, 1, iLocal_946[1], 1))
			{
				func_36(&uLocal_1012);
				func_44(iLocal_946[1], 0, func_338("DESC_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 12:
			if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1625960744))
					{
						func_44(iLocal_946[1], 0, func_338("DESC_D"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else
				{
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 4)
			{
				if (func_37(&uLocal_1012) > 6.5f && func_339(0, 1, iLocal_946[1], 1))
				{
					func_44(iLocal_946[1], 0, func_338("DESC_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else
			{
				iLocal_1430++;
			}
			break;
		case 13:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1707459177))
				{
					func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1358507404))
				{
					func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.99f)
					{
						func_534();
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1429892085))
					{
						func_534();
						func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1483046590))
				{
					func_534();
					func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1549180221))
				{
					func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1028405345))
				{
					func_44(iLocal_946[1], 0, func_338("HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1))
			{
				func_534();
				func_44(iLocal_946[1], iLocal_946[0], func_338("HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 14:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 267305636))
				{
					func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					func_60(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 904913835))
				{
					func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					func_60(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1485395334))
					{
						func_60(&iLocal_1019, 67108864);
						func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -150311700))
				{
					func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					func_60(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 180043775))
				{
					func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					func_60(&iLocal_1019, 67108864);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1723680966))
				{
					func_44(iLocal_946[1], 0, func_338("LEVER"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
			{
				func_44(iLocal_946[1], iLocal_946[2], func_338("LEVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_60(&iLocal_1019, 67108864);
				iLocal_1430++;
			}
			break;
		case 15:
			if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -499322419))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1515657798))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1773213251))
					{
						func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 2122944737))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1193065802))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1979997563))
				{
					func_44(iLocal_946[1], 0, func_338("POST_HANG"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
				else if (!func_51(iLocal_1019, 67108864))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.62f)
					{
						func_60(&iLocal_1019, 67108864);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
			{
				func_44(iLocal_946[1], 0, func_338("POST_HANG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 16:
			if (func_225())
			{
				iLocal_1430++;
			}
			else if (iLocal_109 == 8)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1048947961))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 0)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -312231525))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 3)
			{
				if (iLocal_984 == 76)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 23580437))
					{
						func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
						iLocal_1430++;
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], 1815770417))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 6)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -385244152))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (iLocal_109 == 5)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -731493435))
				{
					func_44(iLocal_946[1], 0, func_338("JUSTICE"), "", -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -500314840, 1, 0, 0);
					iLocal_1430++;
				}
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -1925903126))
			{
				func_44(iLocal_946[1], 0, func_338("JUSTICE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				iLocal_1430++;
			}
			break;
		case 17:
			break;
	}
}

void func_328()
{
	if (iLocal_110 <= 1)
	{
		return;
	}
	func_535();
	if (iLocal_109 == 7)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.355f)
				{
					func_44(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.418f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.512f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1196222537, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 3:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.779f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "main_dialogue") >= 0.96f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
	else if (iLocal_109 == 6)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.885f)
					{
						func_44(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.1f)
					{
						func_44(iLocal_946[5], 0, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.325f)
					{
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.52f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "new_bordeaux_speech") >= 0.95f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.62f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
				{
					func_44(iLocal_946[5], 0, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.8f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.9f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 9:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.18f)
					{
						func_44(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 10:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.28f)
					{
						func_44(iLocal_946[5], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 11:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.28f)
					{
						func_44(iLocal_946[5], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 12:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 13:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.69f)
					{
						func_44(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
		}
	}
	else if (iLocal_109 == 1)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_CROWD_HANG")))
				{
					func_44(iLocal_946[6], 0, "RE_PH_VAL_V1_CROWD_HANG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], -54056400))
				{
					func_44(iLocal_946[7], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("GENERIC_CHEER")))
				{
					func_44(iLocal_946[12], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_CROWD_LOOKATHIM")))
				{
					func_44(iLocal_946[6], 0, "RE_PH_VAL_V1_CROWD_LOOKATHIM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 4:
				if (func_43(iLocal_946[11], 0, 1))
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[11], Local_911.f_2))
					{
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_911.f_2) > 0.95f)
						{
							func_44(iLocal_946[11], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1432++;
						}
					}
				}
				break;
			case 5:
				break;
		}
		if (!func_43(iLocal_946[4], 0, 0) || !func_43(iLocal_946[5], 0, 0))
		{
			return;
		}
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -70500784))
				{
					func_44(iLocal_946[5], 0, func_338("SON_PLEADCRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], 613050595))
				{
					func_44(iLocal_946[4], 0, func_338("WIFE_NO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -1000858821))
				{
					func_44(iLocal_946[5], 0, func_338("SON_PLEAD"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -1502025544))
				{
					func_44(iLocal_946[4], 0, func_338("WIFE_ILOVEYOU"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 4:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], 602807588))
				{
					func_44(iLocal_946[5], 0, func_338("SON_NO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], 494331268))
				{
					func_44(iLocal_946[5], 0, func_338("SON_NO_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 6:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -129839326))
				{
					func_44(iLocal_946[4], 0, func_338("WIFE_CRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[5], -782712322))
				{
					func_44(iLocal_946[5], 0, func_338("SON_ANGRY"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[4], -219186068))
				{
					func_44(iLocal_946[4], 0, func_338("WIFE_SOB"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				break;
		}
	}
	else if (iLocal_109 == 4)
	{
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.78f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.19f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_INSULT_HIGH_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.42f)
				{
					func_44(iLocal_946[7], 0, "GENERIC_INSULT_MED_FEMALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.9f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "dead_john_speech") >= 0.95f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.64f)
				{
					func_44(iLocal_946[4], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.75f)
				{
					func_44(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.95f)
				{
					func_44(iLocal_946[8], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.33f)
				{
					func_44(iLocal_946[4], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.43f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.64f)
				{
					func_44(iLocal_946[4], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
				{
					func_44(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
		}
	}
	else if (iLocal_109 == 5)
	{
		switch (iLocal_1431)
		{
			case 0:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.99f)
				{
					func_44(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.27f)
				{
					func_44(iLocal_946[5], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.8f)
				{
					func_44(iLocal_946[8], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 3:
				iLocal_1431++;
				break;
			case 4:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.95f)
				{
					func_44(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0f)
					{
						func_44(iLocal_946[6], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1431++;
					}
				}
				break;
			case 6:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.05f)
				{
					func_44(iLocal_946[8], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.484f)
				{
					func_44(iLocal_946[6], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.58f)
				{
					func_44(iLocal_946[5], 0, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.83f)
				{
					func_44(iLocal_946[8], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1431++;
				}
				break;
		}
	}
	else if (iLocal_109 == 3)
	{
		switch (iLocal_984)
		{
			case 105:
				switch (iLocal_1431)
				{
					case 0:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.8f)
						{
							func_44(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 1:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") >= 0.95f)
						{
							func_44(iLocal_946[8], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 2:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.8f)
						{
							func_44(iLocal_946[6], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 3:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.174f)
						{
							func_44(iLocal_946[8], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 4:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.76f)
						{
							func_44(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 5:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01") >= 0.95f)
							{
								func_44(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 6:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.64f)
						{
							func_44(iLocal_946[6], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 7:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.68f)
						{
							func_44(iLocal_946[5], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 8:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.85f)
						{
							func_44(iLocal_946[10], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 9:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0f)
						{
							func_44(iLocal_946[6], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 10:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.31f)
						{
							func_44(iLocal_946[5], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 11:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
						{
							func_44(iLocal_946[8], 0, "DISMISSIVE_REACT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
				}
				break;
			case 76:
				switch (iLocal_1431)
				{
					case 0:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0f)
							{
								func_44(iLocal_946[11], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 1:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.65f)
						{
							func_44(iLocal_946[6], 0, "GENERIC_MOCK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 2:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.9f)
						{
							func_44(iLocal_946[4], 0, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 3:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.37f)
						{
							func_44(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 4:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.89f)
							{
								func_44(iLocal_946[10], 0, "GENERIC_MOCK", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 5:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") >= 0.95f)
						{
							func_44(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 6:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.1f)
							{
								func_44(iLocal_946[11], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
								iLocal_1431++;
							}
						}
						break;
					case 7:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.63f)
						{
							func_44(iLocal_946[4], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 8:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.65f)
						{
							func_44(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 9:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.7f)
						{
							func_44(iLocal_946[6], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 10:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.72f)
						{
							func_44(iLocal_946[9], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 11:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.93f)
						{
							func_44(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 12:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03", 1))
						{
							if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.2f)
							{
								iLocal_1431++;
							}
						}
						break;
					case 13:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.6f)
						{
							func_44(iLocal_946[11], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
					case 14:
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
						{
							func_44(iLocal_946[9], 0, "GENERIC_SHOCKED_DISBELIEF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
							iLocal_1431++;
						}
						break;
				}
				break;
		}
	}
	else if (iLocal_109 == 8)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") >= 0.9f)
					{
						func_44(iLocal_946[5], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") >= 0.92f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.18f)
					{
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.32f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.57f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.94f)
					{
						func_44(iLocal_946[14], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.97f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_CHEER_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 7:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.2f)
				{
					func_44(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 8:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.23f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.35f)
				{
					func_44(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.45f)
				{
					func_44(iLocal_946[10], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.51f)
				{
					func_44(iLocal_946[5], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.9f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_SHOCKING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
	else if (iLocal_109 == 0)
	{
		switch (iLocal_1432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") >= 0.65f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.33f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.93f)
					{
						func_44(iLocal_946[9], 0, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") >= 0.98f)
					{
						func_44(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1196222537, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0f)
					{
						func_44(iLocal_946[9], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.61f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 6:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.71f)
					{
						func_44(iLocal_946[14], 0, "GENERIC_SHOCKED_MED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 7:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.81f)
					{
						func_44(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 8:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02", 1))
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_02") >= 0.97f)
					{
						func_44(iLocal_946[7], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
						iLocal_1432++;
					}
				}
				break;
			case 9:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.3f)
				{
					func_44(iLocal_946[10], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 10:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.44f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_CHEER", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 11:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.635f)
				{
					func_44(iLocal_946[9], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
			case 12:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_03") >= 0.95f)
				{
					func_44(iLocal_946[14], 0, "GENERIC_EXCITING_EVENT_COMMENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -417894478, 1, 0, 0);
					iLocal_1432++;
				}
				break;
		}
	}
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

int func_330(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_331(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_536(&iVar0);
	if (func_3(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_537(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_3(iVar0, 134217728))
	{
		func_538(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_539(558))
				{
					func_540(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

char[] func_332(int iParam0)
{
	if (func_541(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_333(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_214(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_542(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_543(iParam0->f_6, iParam0->f_5, 0);
			}
			func_544(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_545(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_334(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_546(iParam0, 13))
	{
		func_529(iParam0, 0);
	}
	else
	{
		func_547(iParam0, 0);
	}
	if (func_214(iParam0->f_6))
	{
		if (bParam2)
		{
			func_73(&(iParam0->f_6), 0, 1);
		}
	}
}

Vector3 func_335(int iParam0)
{
	switch (func_2())
	{
		case 76:
			switch (iParam0)
			{
				case 1:
					return -278.2031f, 806.9594f, 118.3688f;
				case 2:
					return -276.9769f, 801.252f, 118.4084f;
				case 3:
					return -278.1321f, 803.4739f, 118.3863f;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 1:
					return 1359.002f, -1306.369f, 76.71498f;
				case 2:
					return 1359.002f, -1306.369f, 76.71498f;
				case 3:
					return 1359.002f, -1306.369f, 76.71498f;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 1:
					return 2718.99f, -1237.612f, 49.03184f;
				case 2:
					return 2718.99f, -1237.612f, 49.03184f;
				case 3:
					return 2718.99f, -1237.612f, 49.03184f;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					return -806.8975f, -1268.754f, 43.07741f;
				case 2:
					return -806.8975f, -1268.754f, 43.07741f;
				case 3:
					return -760.8433f, -1269.036f, 43.04134f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_336(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	int iVar0;

	if (func_43(iParam0, 0, 0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1116))
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_1116, 0, 6664, -1, 0, 0, -1);
		}
		if (!func_87(vParam1))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, -1, 0.25f, 1, 40000f);
		}
		if (!func_87(vParam4))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam4, 1f, -1, 0.25f, 1, 40000f);
		}
		if (!bParam9)
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		func_359(iParam0, &iVar0, fParam7, fParam8, 1, 1);
	}
	if (bParam9)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	}
}

void func_337(int iParam0, float fParam1)
{
	if (Local_111.f_98[iParam0] < fParam1)
	{
		func_548(&(iLocal_946[iParam0]), 0, Global_35, 1, 0, 0, 0, 1);
	}
}

char* func_338(char* sParam0)
{
	char cVar0[64];
	var uVar8;

	StringCopy(&cVar0, "RE_PH_", 64);
	if (iLocal_984 == 76)
	{
		StringConCat(&cVar0, "VAL_", 64);
		if (iLocal_109 == 1)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		else if (iLocal_109 == 3)
		{
			StringConCat(&cVar0, "V3_DROWN_", 64);
		}
		else if (iLocal_109 == 4)
		{
			StringConCat(&cVar0, "V4_DEAD_JOHN_", 64);
		}
	}
	else if (iLocal_984 == 105)
	{
		StringConCat(&cVar0, "RHD_", 64);
		if (iLocal_109 == 3)
		{
			StringConCat(&cVar0, "V2_DROWN_", 64);
		}
		else if (iLocal_109 == 5)
		{
			StringConCat(&cVar0, "V3_BOUNTY_", 64);
		}
	}
	else if (iLocal_984 == 5)
	{
		StringConCat(&cVar0, "STD_", 64);
		if (iLocal_109 == 7)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		else if (iLocal_109 == 6)
		{
			StringConCat(&cVar0, "V3_BOUNTY_", 64);
		}
	}
	else if (iLocal_984 == 38)
	{
		StringConCat(&cVar0, "BLW_", 64);
		if (iLocal_109 == 0)
		{
			StringConCat(&cVar0, "V1_", 64);
		}
		if (iLocal_109 == 8)
		{
			StringConCat(&cVar0, "V2_", 64);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		StringConCat(&cVar0, sParam0, 64);
	}
	uVar8 = func_549(cVar0);
	return uVar8;
}

bool func_339(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_550(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_551(fParam0))
	{
		return false;
	}
	return true;
}

void func_340(bool bParam0)
{
	switch (iLocal_109)
	{
		case 1:
			if (bParam0)
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 3:
			if (func_224() == 9)
			{
				if (bParam0)
				{
					if (func_552(0))
					{
						func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_POS_SICK", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (func_552(0))
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_NEG_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (bParam0)
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_RHD_V2_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_RHD_V2_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 4:
			if (bParam0)
			{
				if (func_552(0))
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_POS_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (func_552(0))
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_NEG_SICK", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_VAL_V4_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 5:
			if (bParam0)
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_RHD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_RHD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 7:
			if (bParam0)
			{
				if (!func_51(iLocal_1296, 4096))
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_POS_ALT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (!func_51(iLocal_1296, 4096))
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_NEG_ALT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_STD_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 6:
			if (bParam0)
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_STD_V3_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_STD_V3_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 8:
			if (bParam0)
			{
				if (func_58())
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_POS_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (func_58())
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_NEG_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V1_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 0:
			if (bParam0)
			{
				if (func_58())
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_POS_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_POS", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (func_58())
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_NEG_J", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[1], Global_35, "RE_PH_BLW_V2_ILO_NEG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
	}
}

void func_341(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_553(iParam0, uParam1, 1);
	func_554(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_342(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_555(uParam0);
		func_341(iParam1, uParam2);
	}
	func_556(*uParam0, 1, bParam4);
}

bool func_343(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			if (PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, Global_36, 3))
			{
			}
			else
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			func_557(iParam0, &(uLocal_963[iParam1]), joaat("BLIP_STYLE_COP"), 0, 0, 0);
			PED::_0x78815FC52832B690(iParam0, 1);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, Global_36, 3);
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
			{
				if (iParam0 == iLocal_946[1])
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, Local_903))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iParam0);
					}
				}
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			if (func_51(iLocal_1020, 32768) || iLocal_1419 == 2048)
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 93, true);
				PED::_0x8ACC0506743A8A5C(iParam0, joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
				PED::REGISTER_TARGET(iParam0, Global_35, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_359(iParam0, &iVar0, 0, 0, 1, 1);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (func_498(iParam0, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				}
				func_359(iParam0, &iVar0, 0, 0, 1, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			return true;
		}
	}
	return false;
}

void func_344()
{
	func_143(&iLocal_1019, 64);
	ANIMSCENE::RESET_ANIM_SCENE(Local_903.f_3, &cLocal_1112);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", false, false);
	ENTITY::PLAY_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], 8f, true, false, false, 0f, 0);
	ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iLocal_1425, Local_76[1 /*2*/], &cLocal_59, 0f);
	ENTITY::STOP_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], -8f);
}

void func_345(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_346()
{
	if (iLocal_984 == 5)
	{
		StringCopy(&cLocal_59, "pull_lever_deputy_trapdoor_std", 64);
	}
	else
	{
		StringCopy(&cLocal_59, "pull_lever_deputy_trapdoor_val", 64);
	}
}

void func_347(int iParam0, var uParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, var uParam8, var uParam9)
{
	if (!func_51(iLocal_1019, 131072))
	{
		if (bParam7)
		{
			if (func_558(iParam0, &Local_920, -1))
			{
				func_36(&uLocal_991);
				iLocal_1435 = MISC::GET_GAME_TIMER();
				func_60(&iLocal_1019, 131072);
			}
		}
		else if (func_559(iParam0, Global_35, 0, 1048576000 /* Float: 0.25f */))
		{
			func_44(iParam0, Global_35, func_560(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_36(&uLocal_991);
			iLocal_1435 = MISC::GET_GAME_TIMER();
			func_60(&iLocal_1019, 131072);
		}
	}
	else if (!func_51(iLocal_1019, 262144))
	{
		if (func_348())
		{
			if (func_37(&uLocal_991) >= (fLocal_1050 + 1f) || (func_51(iLocal_1020, 33554432) && func_339(0, 1, iParam0, 1)))
			{
				func_561(iParam0, Global_35, 0, 0, 1048576000 /* Float: 0.25f */);
				func_44(iParam0, Global_35, func_562(iParam0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_60(&iLocal_1019, 262144);
				func_36(&uLocal_991);
			}
		}
		else if (!func_35(&uLocal_994))
		{
			if (func_37(&uLocal_991) >= (fLocal_1050 - 1f) || func_318(Global_35, iParam0, 1, 1) > 2f)
			{
				func_563(iParam0, vParam3, uParam6);
				func_349(uParam8, 0);
				func_333(uParam9[0 /*17*/], func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(uParam9[1 /*17*/], func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_334(uParam9[0 /*17*/], 0, 0);
				func_334(uParam9[1 /*17*/], 1, 0);
				func_60(&iLocal_1020, 33554432);
				*uParam1 = iParam2;
			}
		}
	}
	else if (!bLocal_1421)
	{
		if (func_348())
		{
			if (func_2() == 76 && func_140(Global_35, iLocal_1088[2], 1, 0))
			{
			}
			else if (func_37(&uLocal_991) >= fLocal_1050)
			{
				bLocal_1421 = true;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1435919172, true) != 0)
			{
				if (func_318(iParam0, Global_35, 1, 1) > 1.5f)
				{
					func_561(iParam0, Global_35, 0, 0f, 0f);
				}
				else
				{
					func_559(iParam0, Global_35, 0f, 0f);
				}
				func_36(&uLocal_991);
			}
		}
		else if (!func_35(&uLocal_994))
		{
			if (func_37(&uLocal_991) >= (fLocal_1050 - 1f) || func_318(Global_35, iParam0, 1, 1) > 2f)
			{
				func_563(iParam0, vParam3, uParam6);
				func_349(uParam8, 0);
				func_333(uParam9[0 /*17*/], func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				func_333(uParam9[1 /*17*/], func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				func_334(uParam9[0 /*17*/], 0, 0);
				func_334(uParam9[1 /*17*/], 1, 0);
				func_60(&iLocal_1020, 33554432);
				*uParam1 = iParam2;
			}
		}
	}
}

bool func_348()
{
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[0], true, 0) || (VOLUME::DOES_VOLUME_EXIST(iLocal_1088[1]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[1], true, 0))) || (VOLUME::DOES_VOLUME_EXIST(iLocal_1088[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[2], true, 0)))
	{
		if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[1], iLocal_1088[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[2], iLocal_1088[0], true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_946[3], iLocal_1088[0], true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_349(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_496(&(iParam0->f_18));
}

bool func_350(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_214(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_564(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_351(bool bParam0)
{
	switch (iLocal_109)
	{
		case 1:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 3:
			if (bParam0)
			{
				if (func_2() == 76)
				{
					func_44(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[2], Global_35, "LAW_INTERACT_MOVE_ALONG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
			}
			else if (func_2() == 76)
			{
				func_44(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 4:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "ARREST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 5:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "LAW_INTERACT_MOVE_ALONG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "INSULT_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 7:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 6:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "PLAYER_LOITERING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
		case 0:
		case 8:
			if (bParam0)
			{
				func_44(iLocal_946[2], Global_35, "TIME_TO_GO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_44(iLocal_946[2], Global_35, "LAW_INTERACT_NO_BUSINESS_HERE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			break;
	}
}

bool func_352()
{
	if (Local_111.f_48)
	{
		if (!func_51(iLocal_1019, 4194304))
		{
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[0], true, 0) || (VOLUME::DOES_VOLUME_EXIST(iLocal_1088[1]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[1], true, 0))) || (VOLUME::DOES_VOLUME_EXIST(iLocal_1088[2]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1088[2], true, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

void func_353()
{
	if (func_51(iLocal_1020, 65536) || iLocal_109 != 1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_946[4]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_946[4], Global_35, 1, 1))
		{
			func_60(&iLocal_1020, 65536);
		}
	}
}

void func_354()
{
	if (iLocal_110 < 2)
	{
		return;
	}
	if (iLocal_1303[0] >= 7)
	{
		iLocal_1297[0] = func_331(&(iLocal_946[0]), &(Local_1309[0 /*21*/]), 20f, &Local_1261, &(Local_111.f_192), 0f, 1, 0, "", func_330(3, 0, 0), 0, 0, 2, 0, Local_111.f_98[0], 0);
	}
	switch (iLocal_1303[0])
	{
		case 0:
			func_341(&(Local_1309[0 /*21*/]), &Local_1261);
			func_333(&(Local_1261[0 /*17*/]), func_332(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_333(&(Local_1261[1 /*17*/]), func_332(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			func_334(&(Local_1261[0 /*17*/]), 0, 0);
			func_334(&(Local_1261[1 /*17*/]), 1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_946[0], 315, false);
			iLocal_1303[0] = 7;
			break;
		case 7:
			if (Local_111.f_46)
			{
				if (!func_565(iLocal_946[0], 0, 0, 0))
				{
					func_334(&(Local_1261[0 /*17*/]), 1, 0);
					func_334(&(Local_1261[1 /*17*/]), 1, 0);
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				if (iLocal_109 == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V1_PRE_HANG")))
					{
						func_44(iLocal_946[0], iLocal_946[4], "RE_PH_VAL_V1_PRE_HANG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				switch (iLocal_1297[0])
				{
					case 0:
						break;
					case 1:
						func_44(Global_35, iLocal_946[0], func_338("ILO_CRIMINAL_PRE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						func_334(&(Local_1261[1 /*17*/]), 0, 0);
						break;
				}
			}
			break;
		case 8:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				switch (iLocal_1297[0])
				{
					case 0:
						func_44(Global_35, iLocal_946[0], func_338("GRT_POS_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						func_334(&(Local_1261[0 /*17*/]), 0, 0);
						func_36(&uLocal_1006);
						iLocal_1303[0] = 9;
						break;
					case 1:
						func_44(Global_35, iLocal_946[0], func_338("GRT_NEG_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						func_334(&(Local_1261[0 /*17*/]), 0, 0);
						func_334(&(Local_1261[1 /*17*/]), 0, 0);
						func_36(&uLocal_1006);
						iLocal_1303[0] = 10;
						break;
				}
			}
			else
			{
				func_349(&(Local_1309[0 /*21*/]), 0);
				func_334(&(Local_1261[0 /*17*/]), 1, 0);
				func_334(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 9:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (func_339(0, 1, Global_35, 1) && func_339(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
					}
					else
					{
						func_44(iLocal_946[0], Global_35, func_338("GRT_POS_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				func_349(&(Local_1309[0 /*21*/]), 0);
				func_334(&(Local_1261[0 /*17*/]), 1, 0);
				func_334(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 10:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (func_339(0, 1, Global_35, 1) && func_339(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_VAL_V1_CRIMINAL_BEG_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_109 == 7)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_STD_V1_CRIMINAL_GRT_NEG_CRIMINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						func_44(iLocal_946[0], Global_35, func_338("GRT_NEG_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					func_334(&(Local_1261[1 /*17*/]), 1, 0);
					iLocal_1303[0] = 11;
				}
			}
			else
			{
				func_349(&(Local_1309[0 /*21*/]), 0);
				func_334(&(Local_1261[0 /*17*/]), 1, 0);
				func_334(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 11:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				switch (iLocal_1297[0])
				{
					case 0:
						break;
					case 1:
						func_44(Global_35, iLocal_946[0], func_338("GRT_NEG2_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
						func_334(&(Local_1261[0 /*17*/]), 0, 0);
						func_334(&(Local_1261[1 /*17*/]), 0, 0);
						func_36(&uLocal_1006);
						iLocal_1303[0] = 12;
						break;
				}
			}
			else
			{
				func_349(&(Local_1309[0 /*21*/]), 0);
				func_334(&(Local_1261[0 /*17*/]), 1, 0);
				func_334(&(Local_1261[1 /*17*/]), 1, 0);
				iLocal_1303[0] = 13;
			}
			break;
		case 12:
			if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
			{
				if (func_339(0, 1, Global_35, 1) && func_339(0, 1, iLocal_946[0], 1))
				{
					if (iLocal_109 == 1)
					{
						func_44(iLocal_946[0], Global_35, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_109 == 7)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_STD_V1_CRIMINAL_GRT_NEG2_CRIMINAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						func_44(iLocal_946[0], Global_35, func_338("GRT_NEG2_CRIMINAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					iLocal_1303[0] = 8;
				}
			}
			else
			{
				func_349(&(Local_1309[0 /*21*/]), 0);
				if (iLocal_109 == 1)
				{
					func_334(&(Local_1261[0 /*17*/]), 0, 0);
				}
				else
				{
					func_334(&(Local_1261[1 /*17*/]), 1, 0);
				}
				iLocal_1303[0] = 13;
			}
			break;
		case 13:
			switch (iLocal_1297[0])
			{
				case 0:
					func_44(Global_35, iLocal_946[0], func_338("GRT_POS_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					func_334(&(Local_1261[0 /*17*/]), 0, 0);
					func_334(&(Local_1261[1 /*17*/]), 0, 0);
					func_36(&uLocal_1006);
					iLocal_1303[0] = 14;
					break;
				case 1:
					func_44(Global_35, iLocal_946[0], func_338("GRT_NEG_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					func_334(&(Local_1261[0 /*17*/]), 0, 0);
					func_334(&(Local_1261[1 /*17*/]), 0, 0);
					func_36(&uLocal_1006);
					iLocal_1303[0] = 15;
					break;
			}
			break;
		case 14:
			if (func_339(0, 1, Global_35, 1))
			{
				if (iLocal_109 == 1)
				{
				}
				else if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_POS_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("GRT_POS_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				func_36(&uLocal_1006);
				iLocal_1303[0] = 4;
			}
			break;
		case 15:
			if (func_339(0, 1, Global_35, 1))
			{
				if (iLocal_109 == 1)
				{
				}
				else if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_NEG_CRIMINAL_POST", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("GRT_NEG_CRIMINAL_POST"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				func_36(&uLocal_1006);
				iLocal_1303[0] = 4;
			}
			break;
		case 4:
			if ((func_37(&uLocal_1006) > 6f && func_339(0, 1, iLocal_946[0], 1)) && Local_111.f_98[0] < 20f)
			{
				if (iLocal_109 == 3)
				{
					if (iLocal_984 == 76)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_VAL_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
					else if (iLocal_984 == 105)
					{
						func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V2_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_109 == 5)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else if (iLocal_109 == 6)
				{
					func_44(iLocal_946[0], Global_35, "RE_PH_STD_V3_GRT_ILO_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("GRT_ILO_END"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 1744022339, 1, 0, 0);
				}
				iLocal_1303[0] = 16;
			}
			break;
		case 16:
			break;
	}
}

void func_355()
{
	if (!func_51(iLocal_1019, 2))
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			if (func_51(iLocal_1019, 64))
			{
				func_566(1);
				if (func_567())
				{
					func_568();
					func_366();
					func_364(1);
					func_60(&iLocal_1019, 2);
				}
			}
			else
			{
				func_569();
				if (Local_111.f_46 == 1)
				{
					if (!func_51(iLocal_1019, 2048))
					{
						func_570();
					}
				}
			}
		}
		else if (func_214(Local_111.f_162))
		{
			func_73(&(Local_111.f_162), 1, 1);
		}
	}
}

void func_356()
{
	vector3 vVar0;

	if (func_51(iLocal_1019, 1) && !func_51(iLocal_1020, 268435456))
	{
		if (PHYSICS::DOES_ROPE_EXIST(iLocal_945))
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(iLocal_946[0], 21030, 0f, 0f, 0f) };
			if ((((iLocal_984 == 76 && vVar0.z < 119.465f) || (iLocal_984 == 105 && vVar0.z < 83.85f)) || (iLocal_984 == 5 && vVar0.z < 52.17f)) || (iLocal_984 == 38 && vVar0.z < 46.16f))
			{
				PHYSICS::_0x814D453FCFDF119F(iLocal_945, 1, -999);
				func_60(&iLocal_1020, 268435456);
			}
		}
	}
}

void func_357()
{
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 3, 1);
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 4, 1);
	ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_946[0], 5, 1);
}

void func_358()
{
	if (!func_51(iLocal_1020, 2097152))
	{
		if (!PED::_IS_METAPED_USING_COMPONENT(iLocal_946[0], joaat("HEADS")))
		{
			ENTITY::DETACH_ENTITY(Local_818[1 /*12*/].f_8, true, true);
			func_60(&iLocal_1020, 2097152);
		}
	}
}

void func_359(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_360(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_571(iParam0, vVar0, fParam2);
}

void func_361()
{
	char* sVar0;

	func_572();
	if (iLocal_1022 >= 3)
	{
		return;
	}
	if (iLocal_110 == 2)
	{
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
		{
			switch (iLocal_1022)
			{
				case 0:
					func_36(&uLocal_1003);
					iLocal_1022++;
					break;
				case 1:
					if (iLocal_109 == 7)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[0], joaat("RE_PH_STD_V1_ARM")))
						{
							if (func_339(0, 1, iLocal_946[0], 1))
							{
								func_44(iLocal_946[0], iLocal_946[1], "RE_PH_STD_V1_ARM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_1022 = 3;
						}
					}
					else if (iLocal_109 == 4)
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_946[1], joaat("RE_PH_VAL_V4_DEAD_JOHN_INNOCENT")))
						{
							if (func_339(0, 1, iLocal_946[0], 1))
							{
								func_44(iLocal_946[0], iLocal_946[1], "RE_PH_VAL_V4_DEAD_JOHN_INNOCENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1223286396, 1, 0, 0);
							}
							iLocal_1022 = 3;
						}
					}
					else if (iLocal_109 == 6)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") > 0.75f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.65f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 3)
					{
						if (func_37(&uLocal_1003) > 16f)
						{
							if (iLocal_984 == 105)
							{
								sVar0 = func_573(1);
							}
							else
							{
								sVar0 = func_573(0);
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 8)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_02") > 0.95f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_01") > 0.53f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (func_37(&uLocal_1003) > 16f)
					{
						sVar0 = func_573(0);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_36(&uLocal_1003);
						iLocal_1022++;
					}
					break;
				case 2:
					if (iLocal_109 == 6)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.72f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "outro_line_01") > 0.18f)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 8)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "rhodes_rancher_speech") > 0.8f)
						{
							sVar0 = func_573(1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else if (iLocal_109 == 0)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "intro_line_03") > 0.65f)
						{
							sVar0 = func_573(0);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022 = (iLocal_1022 + 1);
						}
					}
					else if (iLocal_109 == 3)
					{
						if (iLocal_984 == 105)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_946[1], "script_re@public_hanging@sheriff", "drown_murder_speech") > 0.46f)
							{
								sVar0 = func_573(0);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
								{
									func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_1022++;
							}
						}
						else if (func_37(&uLocal_1003) > 12f)
						{
							iLocal_1022++;
						}
					}
					else if (func_37(&uLocal_1003) > 12f)
					{
						sVar0 = func_573(1);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_1022++;
					}
					break;
				case 3:
					if (iLocal_109 == 6)
					{
						if (func_37(&uLocal_1003) > 7f && func_339(0, 1, iLocal_946[0], 1))
						{
							sVar0 = func_573(2);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else
					{
						iLocal_1022++;
					}
					break;
				case 4:
					if (iLocal_109 == 6)
					{
						if (func_37(&uLocal_1003) > 8f && func_339(0, 1, iLocal_946[0], 1))
						{
							sVar0 = func_573(3);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
							{
								func_44(iLocal_946[0], Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_36(&uLocal_1003);
							iLocal_1022++;
						}
					}
					else
					{
						iLocal_1022++;
					}
					break;
			}
		}
	}
}

int func_362()
{
	if (iLocal_1438 <= 0)
	{
		switch (func_2())
		{
			case 76:
				iLocal_1438 = 8;
				break;
			case 105:
				iLocal_1438 = 6;
				break;
			case 5:
				iLocal_1438 = 7;
				break;
			case 38:
				iLocal_1438 = 11;
				break;
		}
	}
	return iLocal_1438;
}

void func_363(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

void func_364(bool bParam0)
{
	if (bParam0)
	{
		if (func_51(iLocal_1019, 32))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
	}
}

void func_365(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_366()
{
	if (!func_51(iLocal_1020, 8388608) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_946[0]))
	{
		if (func_43(iLocal_946[0], 0, 1))
		{
			func_320(iLocal_946[0], "SCREAM_SHOCKED", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
		}
	}
}

void func_367()
{
	int iVar0;
	char* sVar1;

	if (!PHYSICS::DOES_ROPE_EXIST(iLocal_945) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1))
	{
		return;
	}
	if (func_43(iLocal_946[0], 0, 0))
	{
		if (!func_51(iLocal_1019, 8))
		{
			if (func_574(vLocal_1057, 1) <= 1.5f && func_339(-3f, 1, iLocal_946[0], 1))
			{
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					sVar1 = "line_03";
				}
				else
				{
					sVar1 = "line_03_female_crim";
				}
				IK::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
				func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
				func_44(iLocal_946[0], Global_35, func_338("LEVER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_60(&iLocal_1019, 8);
				return;
			}
		}
		if (func_339(1f, 1, iLocal_946[0], 0))
		{
			switch (iLocal_1428)
			{
				case 0:
					if (iLocal_109 == 4)
					{
						IK::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], "line_01_female_crim", 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
						func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
						if ((func_190(106, 4) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(106, 4) != joaat("CS_JOHNMARSTON") && !func_58()))
						{
						}
						iLocal_1428++;
					}
					else if (func_51(iLocal_1020, 65536))
					{
						func_44(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						func_60(&iLocal_1020, 134217728);
						iLocal_1428++;
					}
					else
					{
						if (iLocal_109 == 3)
						{
							if (func_2() == 105)
							{
								if (func_56(87, 65536))
								{
									if ((func_190(87, 0) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(87, 0) != joaat("CS_JOHNMARSTON") && !func_58()))
									{
										if (func_552(0))
										{
											func_44(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
										}
										else
										{
											func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
										}
									}
								}
							}
							else if ((func_190(87, 0) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(87, 0) != joaat("CS_JOHNMARSTON") && !func_58()))
							{
								if (func_552(0))
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 5)
						{
							if ((func_190(106, 5) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(106, 5) != joaat("CS_JOHNMARSTON") && !func_58()))
							{
								if (func_552(0))
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 6)
						{
							if ((func_190(106, 6) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(106, 6) != joaat("CS_JOHNMARSTON") && !func_58()))
							{
								if (func_552(0))
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 7)
						{
							if ((func_190(30, 7) == joaat("CS_JOHNMARSTON") && func_58()) || (func_190(30, 7) != joaat("CS_JOHNMARSTON") && !func_58()))
							{
								if (func_552(0))
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
						}
						else if (iLocal_109 == 8)
						{
							func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						}
						else if (iLocal_109 == 0)
						{
							func_44(iLocal_946[0], Global_35, func_338("SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
						}
						iLocal_1428++;
					}
					break;
				case 1:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_01";
					}
					else
					{
						sVar1 = "line_01_female_crim";
					}
					IK::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					if (iLocal_109 == 4 && func_55(84, 0) == 3)
					{
						func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG_LAW"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_109 == 1)
					{
						if (func_575())
						{
							func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1428++;
					break;
				case 2:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_02";
					}
					else
					{
						sVar1 = "line_02_female_crim";
					}
					IK::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					func_44(iLocal_946[0], Global_35, func_338("ROPE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1428++;
					break;
				case 3:
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						sVar1 = "line_02";
					}
					else
					{
						sVar1 = "line_02_female_crim";
					}
					IK::_0x66F9EB44342BB4C5(iLocal_946[0], &Local_920);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], sVar1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -8f, -1, 16385, 0f, false, 0, false, 0, false);
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					if (iLocal_109 != 1)
					{
						func_44(iLocal_946[0], Global_35, func_338("ROPE_BEG"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_1428++;
					break;
				case 4:
					if (iLocal_109 == 3)
					{
						if (iLocal_984 == 76)
						{
							if (Local_111.f_98[0] > 20f && func_339(-3f, 1, iLocal_946[0], 1))
							{
								func_44(iLocal_946[0], Global_35, "RE_PH_VAL_V3_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1428++;
							}
						}
						else if (iLocal_984 == 105)
						{
							if (Local_111.f_98[0] > 20f && func_339(-3f, 1, iLocal_946[0], 1))
							{
								func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V2_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_1428++;
							}
						}
					}
					else if (iLocal_109 == 0)
					{
						if (Local_111.f_98[0] > 20f && func_339(-3f, 1, iLocal_946[0], 1))
						{
							func_44(iLocal_946[0], Global_35, "RE_PH_BLW_V1_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else if (iLocal_109 == 5)
					{
						if (Local_111.f_98[0] > 20f && func_339(-3f, 1, iLocal_946[0], 1))
						{
							func_44(iLocal_946[0], Global_35, "RE_PH_RHD_V3_BOUNTY_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else if (iLocal_109 == 6)
					{
						if (Local_111.f_98[0] > 20f && func_339(-3f, 1, iLocal_946[0], 1))
						{
							func_44(iLocal_946[0], Global_35, "RE_PH_STD_V3_LEAVE_ME", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1428++;
						}
					}
					else
					{
						iLocal_1428++;
					}
					break;
				case 5:
					break;
			}
		}
	}
}

void func_368()
{
	int iVar0;

	if (!func_51(iLocal_1019, 1073741824 /* Float: 2f */))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (func_360(iLocal_946[0], Global_35, 1f) == 2)
			{
				TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 4f, -8f, -1, 16384, 0f, false, 0, false, 0, false);
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
			}
			else
			{
				TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
				if (PED::IS_PED_MALE(iLocal_946[0]))
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
				}
			}
			func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
			func_47(&(Local_111.f_5), &iLocal_1419);
			func_36(&uLocal_1000);
			func_576();
			func_60(&iLocal_1019, 1073741824 /* Float: 2f */);
		}
	}
	else if (PED::IS_PED_MALE(iLocal_946[0]))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 1))
		{
			if (func_37(&uLocal_1000) > 5f)
			{
				if (func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
				{
					func_36(&uLocal_1000);
					func_47(&(Local_111.f_5), &iLocal_1419);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[9 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					}
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					func_143(&iLocal_1019, 1073741824 /* Float: 2f */);
					func_143(&iLocal_1019, 536870912);
				}
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 1))
		{
			if (func_37(&uLocal_1000) > 5f)
			{
				if (func_315(iLocal_946[0], 0, &(Local_111.f_5), &iLocal_1419, 0, Local_111.f_98[0]))
				{
					func_36(&uLocal_1000);
					func_47(&(Local_111.f_5), &iLocal_1419);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[6 /*2*/].f_1, 4f, -4f, -1, 16384, 0f, false, 0, false, 0, false);
					if (PED::IS_PED_MALE(iLocal_946[0]))
					{
						TASK::TASK_PLAY_ANIM(0, Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 8f, -4f, -1, 16385, 0f, false, 0, false, 0, false);
					}
					func_359(iLocal_946[0], &iVar0, 0, 0, 1, 1);
					func_143(&iLocal_1019, 1073741824 /* Float: 2f */);
					func_143(&iLocal_1019, 536870912);
				}
			}
		}
	}
	else if (func_37(&uLocal_1000) > 5f)
	{
		func_143(&iLocal_1019, 1073741824 /* Float: 2f */);
		func_143(&iLocal_1019, 536870912);
	}
}

bool func_369()
{
	int iVar0;

	if (PED::IS_PED_MALE(iLocal_946[0]))
	{
		if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[6 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[9 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[14 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (func_51(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[5 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[12 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (func_51(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[8 /*2*/].f_1, 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[13 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (func_51(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "main_dialogue_a", 1))
		{
			func_577();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], Local_76[14 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
			if (func_51(iLocal_1020, 65536))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_946[0], 93, true);
				PED::REGISTER_TARGET(iLocal_946[0], Global_35, 1);
				TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 4096);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[10 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[11 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[4 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[3 /*2*/], Local_76[7 /*2*/].f_1, 1))
	{
		func_577();
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], "shot_loose_crim", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		return true;
	}
	else if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], Local_76[0 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "intro_idle_female_crim", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_946[0], Local_76[0 /*2*/], "main_dialogue_a", 1))
	{
		func_577();
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, Local_76[3 /*2*/], "shot_loose_crim", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_946[0], true, false), 500f, -1, 8448, 1077936128);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_946[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_370()
{
	if (func_51(iLocal_1020, 65536))
	{
		return;
	}
	if (!func_51(iLocal_1019, 128))
	{
		if (func_182(iLocal_945))
		{
			if (func_339(-1f, 1, iLocal_946[0], 0))
			{
				if (iLocal_109 == 7)
				{
					func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (func_51(iLocal_1020, 65536))
				{
					if (!func_51(iLocal_1020, 134217728))
					{
						func_44(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					}
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_60(&iLocal_1019, 128);
			}
		}
	}
	else if (iLocal_109 == 7 && !func_51(iLocal_1020, 1048576))
	{
		if (func_339(-1f, 1, iLocal_946[0], 0))
		{
			func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_LEAVE2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_60(&iLocal_1020, 1048576);
		}
	}
}

bool func_371(var uParam0, float fParam1)
{
	if (func_495(uParam0, fParam1))
	{
		func_496(uParam0);
		return true;
	}
	return false;
}

bool func_372(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return false;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	else if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
		}
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_373(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_310());
	}
}

void func_374(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_310());
	}
}

void func_375(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_376(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

int func_378(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				return Global_40.f_9829[iVar0 /*4*/].f_1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

void func_379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			if (iVar1 == iParam1)
			{
				Global_40.f_9829[iVar0 /*4*/].f_1 = 0;
				Global_40.f_9829[iVar0 /*4*/].f_3 = 1;
				iVar2 = func_578(iParam0, iParam1);
				iVar3 = func_579(iParam0);
				PERSCHAR::_0x70605812ABC9FF0F(iVar2, iVar3);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_380(int iParam0, int iParam1)
{
	func_581(func_580(iParam0, iParam1));
}

void func_381()
{
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_val_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_rhd_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_std_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_str_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_blw_1", 1);
	PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME("prisoner_twd_1", 1);
}

void func_382(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_3 = iParam2;
}

int func_383(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	PED::_0xCB1A3864C524F784(iParam0, iVar0);
	return iVar0;
}

void func_384(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

void func_385(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

int func_386(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_583(1, 0, 0);
	}
	else
	{
		iVar0 = func_2();
	}
	return func_584(iVar0);
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_4 = iParam2;
}

int func_388()
{
	return Global_1899515;
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_582(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

void func_390(int iParam0)
{
	int iVar0;

	PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, "Sad", 1f, -1);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, joaat("SC_WORLD_HUMAN_MOURNING"), -1, false, joaat("SCRIPT_COMMON_KNEEL_MOURNING_FEMALE_A"), -1f, false);
	func_359(iParam0, &iVar0, 0, 0, 1, 1);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
	iLocal_1434 = MISC::GET_GAME_TIMER();
}

void func_391()
{
	int iVar0;
	float fVar1;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1063[2 /*3*/], 2f, -1, fVar1, 4194309, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -249.038f, 846.9818f, 122.7648f, 2f, -1, 5f, 524293, 40000f);
	TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SIT_GROUND"), -249.038f, 846.9818f, 122.7648f, 234.4783f, -1, true, false, 0, -1f, false);
	func_359(iLocal_946[5], &iVar0, 0.75f, 1f, 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[5], 3, 2, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_946[5], 4, 2, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_946[5], 130, false);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_946[5]));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_946[5], false);
}

void func_392()
{
	switch (iLocal_1027)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1434) > 3000 && func_339(0, 1, iLocal_946[4], 1))
			{
				func_44(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 1:
			if (func_339(0, 1, iLocal_946[4], 1))
			{
				func_44(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 2:
			if (func_339(0, 1, iLocal_946[4], 1))
			{
				func_44(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1027++;
			}
			break;
		case 3:
			if (func_339(0, 1, iLocal_946[4], 1))
			{
				if (func_585(iLocal_946[4]))
				{
					func_44(iLocal_946[4], 0, "RE_PH_VAL_V1_WOMAN_SOB_D", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_60(&iLocal_1019, 4096);
					iLocal_1027++;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_393(int iParam0)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
}

void func_394(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f);
	vVar1 = { func_586(iParam0, iParam4, iParam5, iParam6) };
	fParam3 = fParam3;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (!func_87(vVar1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, fParam3, -1, fVar4, 5, 40000f);
	}
	TASK::TASK_WANDER_IN_AREA(0, vVar1, 100f, 0f, 0f, true);
	func_359(iParam0, &iVar0, fParam1, fParam2, 1, 1);
	if (bParam7)
	{
		func_393(iParam0);
	}
	func_587(iParam0);
}

int func_395(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam1))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iParam1);
	}
	if (PED::_REMOVE_PED_STAY_OUT_VOLUME(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_396(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			if (func_51(iLocal_1020, 1))
			{
				return true;
			}
			break;
		case 5:
			if (func_51(iLocal_1020, 2))
			{
				return true;
			}
			break;
		case 6:
			if (func_51(iLocal_1020, 4))
			{
				return true;
			}
			break;
		case 7:
			if (func_51(iLocal_1020, 8))
			{
				return true;
			}
			break;
		case 8:
			if (func_51(iLocal_1020, 16))
			{
				return true;
			}
			break;
		case 9:
			if (func_51(iLocal_1020, 32))
			{
				return true;
			}
			break;
		case 10:
			if (func_51(iLocal_1020, 64))
			{
				return true;
			}
			break;
		case 11:
			if (func_51(iLocal_1020, 128))
			{
				return true;
			}
			break;
		case 12:
			if (func_51(iLocal_1020, 256))
			{
				return true;
			}
			break;
		case 13:
			if (func_51(iLocal_1020, 512))
			{
				return true;
			}
			break;
		case 14:
			if (func_51(iLocal_1020, 1024))
			{
				return true;
			}
			break;
		case 15:
			if (func_51(iLocal_1020, 2048))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_397(int iParam0)
{
	if (!func_43(iLocal_946[iParam0], 0, 1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "Sheriff", iLocal_946[1]);
			}
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_3, "plr", iLocal_946[2]);
			}
			break;
		case 3:
			break;
		case 4:
			if (iLocal_109 == 1)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "Mother", iLocal_946[4]);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CF01", iLocal_946[4]);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AF01", iLocal_946[4]);
				}
			}
			break;
		case 5:
			if (iLocal_109 == 1)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "Son", iLocal_946[5]);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "GROUP_AM01", iLocal_946[5]);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[5]);
				}
			}
			break;
		case 6:
			if (iLocal_109 == 7)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_B", iLocal_946[6]);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[6]);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[6]);
				}
			}
			break;
		case 7:
			if (iLocal_109 == 7)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_1, "MALE_A", iLocal_946[7]);
				}
			}
			else
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[7]);
				}
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[7]);
				}
			}
			break;
		case 8:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM01", iLocal_946[8]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911, "GROUP_CM01", iLocal_946[8]);
			}
			break;
		case 9:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM02", iLocal_946[9]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM01", iLocal_946[9]);
			}
			break;
		case 10:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903.f_2, "GROUP_BM03", iLocal_946[10]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_1, "GROUP_DM02", iLocal_946[10]);
			}
			break;
		case 11:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AF01", iLocal_946[11]);
				}
			}
			else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM01", iLocal_946[11]);
			}
			break;
		case 12:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EM02", iLocal_946[12]);
			}
			break;
		case 13:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM02", iLocal_946[13]);
				}
			}
			else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_EF01", iLocal_946[13]);
			}
			break;
		case 14:
			if (((iLocal_109 == 0 || iLocal_109 == 8) || iLocal_109 == 7) || iLocal_109 == 6)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_2))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_2, "GROUP_AM03", iLocal_946[14]);
				}
			}
			else if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM01", iLocal_946[14]);
			}
			break;
		case 15:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_911.f_3))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_911.f_3, "GROUP_FM02", iLocal_946[15]);
			}
			break;
	}
}

void func_398(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 4:
			func_60(iParam0, 1);
			break;
		case 5:
			func_60(iParam0, 2);
			break;
		case 6:
			func_60(iParam0, 4);
			break;
		case 7:
			func_60(iParam0, 8);
			break;
		case 8:
			func_60(iParam0, 16);
			break;
		case 9:
			func_60(iParam0, 32);
			break;
		case 10:
			func_60(iParam0, 64);
			break;
		case 11:
			func_60(iParam0, 128);
			break;
		case 12:
			func_60(iParam0, 256);
			break;
		case 13:
			func_60(iParam0, 512);
			break;
		case 14:
			func_60(iParam0, 1024);
			break;
		case 15:
			func_60(iParam0, 2048);
			break;
	}
}

int func_399(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return func_588(iParam0, Global_36, iParam1, iParam2, bParam3, iParam4, bParam5);
}

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_401(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_402(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_403(int iParam0)
{
	if (!func_491(iParam0))
	{
		return -1;
	}
	return func_589(iParam0);
}

int func_404(int iParam0)
{
	int iVar0;

	iVar0 = func_201(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

int func_405(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "INTERACT_LOCKON", fParam1, 0f, 0, 0f, 0f, 0, false, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0)
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

void func_407(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

void func_408(var uParam0)
{
	if (func_214(uParam0->f_162))
	{
		func_73(&(uParam0->f_162), 1, 1);
	}
	if (func_214(uParam0->f_163))
	{
		func_73(&(uParam0->f_163), 1, 1);
	}
	if (func_214(uParam0->f_164))
	{
		func_73(&(uParam0->f_164), 1, 1);
	}
	if (func_214(uParam0->f_165))
	{
		func_73(&(uParam0->f_165), 1, 1);
	}
}

void func_409(var uParam0)
{
	if (uParam0->f_170)
	{
		func_590();
	}
}

void func_410(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_591(32);
		func_64(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_411(var uParam0)
{
	if (func_592(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_593(uParam0->f_3);
		func_287(uParam0, 0, 1);
		func_594(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_595(0, 0);
		return true;
	}
	return false;
}

void func_412()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_413(int iParam0)
{
	if (!func_244(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

bool func_414(int iParam0)
{
	return func_596(iParam0, 2);
}

int func_415(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_316(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_416()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_417(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_185() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_418(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_420(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_421(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_422(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_87(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_423(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(-1702907713, *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_241("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_424(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_425(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_87(vParam0))
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
		if (func_307(vParam0))
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
	func_597(iVar0, bParam8);
	return iVar0;
}

void func_426(int iParam0)
{
	if (!func_244(iParam0))
	{
		return;
	}
	func_598(iParam0);
}

void func_427(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_428(int iParam0)
{
	if (func_133(iParam0, 2))
	{
		return 200;
	}
	if (func_133(iParam0, 4))
	{
		return 70;
	}
	if (func_133(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_429(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_96(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_224() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_96(iParam0, 2);
		bVar1 = func_96(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_291())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_430(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_133(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_431(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_133(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_133(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_432(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_420(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_433(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_87(vParam1))
	{
		return false;
	}
	if (func_438(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_128(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_434(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_435(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_208(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_441(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_147();
			iParam4->f_2 = func_38(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_441(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_147();
		iParam4->f_2 = func_38(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_436(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_147() - *uParam0) >= iParam1;
	}
	return false;
}

int func_437(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_87(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_438(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_96(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_599(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_96(iParam0, 33554432))
	{
		if (func_600(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_439(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_133(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_96(iParam0, 1) && !func_96(iParam0, 2))
	{
		if (func_96(iParam0, 4096) || func_96(iParam0, 2048))
		{
			if (func_601(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_440(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_602())
	{
		return false;
	}
	return true;
}

bool func_441(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_603(vVar0, vParam0) > func_603(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

var func_442(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_443(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_604(sParam1));
}

bool func_444(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_445(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

bool func_446(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_447(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_448(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_103((fParam0 + fParam1));
}

int func_449(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_605(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_606(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_607(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_607(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_608(iVar0))
		{
			func_34(iVar0, &(uParam1->f_23), 0);
		}
		if (func_608(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_609(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_610(&(uParam1->f_22)));
			func_365(iVar0, func_611(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_612(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_613(&(uParam1->f_22)))
		{
			func_614(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_615(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_51(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, true);
		}
		if (!func_608(iVar0))
		{
			func_617(iVar0, !func_616(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_618(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_619(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_619(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_450(int iParam0, int iParam1)
{
	if (func_620(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_530(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_452(var uParam0)
{
	return func_51(*uParam0, 32);
}

int func_453(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_454(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

int func_455(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (ENTITY::GET_IS_ANIMAL(iParam0))
	{
		iVar0 = func_621(iParam0);
	}
	return iVar0;
}

void func_456(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !Global_1935630.f_12)
	{
		iVar0 = func_622(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_623(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = func_624(iParam0);
			func_625(iVar1, uVar2, 1);
		}
	}
}

bool func_457(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_458(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_474(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_474(iVar4) && iVar4 != iVar0)
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
	if (func_185() == -1 && !func_626(iVar0))
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
				if (func_626(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_474(iVar0))
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
		func_627(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_628(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_629(iVar0))
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

int func_459(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_386(1);
	}
	else
	{
		iVar0 = func_584(iParam0);
	}
	return iVar0;
}

void func_460(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_400(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_401(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_133(iParam0, 8192))
	{
		iVar0 = func_401(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_462(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_64(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_463(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_96(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_630(262144, iVar0, 0, 1);
		}
	}
	if (func_96(iParam0, 128))
	{
		func_630(128, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 524288))
	{
		func_630(524288, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 536870912))
	{
		func_630(536870912, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 4194304))
	{
		func_630(4194304, iVar0, 0, 1);
	}
	else if (func_96(iParam0, 8388608))
	{
		func_630(8388608, iVar0, 0, 1);
	}
}

void func_464(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_465(bool bParam0)
{
	if (!bParam0 && func_631(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_466()
{
	return Global_1310750.f_16037;
}

bool func_467(int iParam0)
{
	if (!func_244(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_468(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_244(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_632(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_633(&Global_1393447, 1);
	func_634();
	func_635();
	func_636((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_147() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_637();
		if (iParam1 == -1)
		{
			if (func_3(iParam0, 1))
			{
				func_630(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_3(iParam0, 2))
			{
				func_630(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_3(iParam0, 4))
			{
				func_630(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_638(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_639(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_639((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_470(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_471(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_472(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_474(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_475()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_476(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_477(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_476(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_126() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_478(bool bParam0, bool bParam1, bool bParam2)
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

int func_479(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_480(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_481(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_482(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_483(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_484(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_485(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_486(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_487(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*iParam1 = Global_1935630.f_32;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*iParam2 = Global_1935630.f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_488()
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

int func_489(int iParam0)
{
	if (!func_491(iParam0))
	{
		return -1;
	}
	return func_641(func_640(iParam0));
}

bool func_490(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_491(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_492(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_493(int iParam0)
{
	return func_96(iParam0, Global_1310750.f_16072 | 64);
}

bool func_494(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_495(var uParam0, float fParam1)
{
	if (!func_35(uParam0))
	{
		return false;
	}
	if (func_37(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_496(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_497(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

int func_498(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_499(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_642(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_500(int iParam0, bool bParam1, int iParam2)
{
	func_643(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1224589.f_6)
		{
			return;
		}
		if (Global_1224589.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_644(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_53(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_297(1))
						{
							func_53(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_297(1) || *iParam0 & 8192 != 0))
				{
					func_54(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_645(iParam0))
			{
				iParam0->f_15 = func_147();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_147() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_646(iParam0);
}

bool func_501(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_647(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_648(iParam0, iVar2) <= func_649(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_502(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_650(iParam2, 1, 1, 1, 0))
	{
		func_53(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_148(iParam1, 1);
	func_412();
}

bool func_503(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_651(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_652(iParam1);
			if (func_653(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_654(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_148(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_148(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_504(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_655(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_652(iParam2);
		if (func_653(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_654(iParam2)
				{
					func_148(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_505(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_647(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_654(iParam1)
		{
			fVar3 = func_652(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_506(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_147();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_507(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_656(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED")) || (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_515(iParam2, iParam1))
			{
				func_148(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_508(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_657(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_515(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_148(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_509(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_658(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_148(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_148(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_659(iParam1, vVar0, vVar4))
					{
						func_148(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_148(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_659(iParam1, vVar0, vVar7))
					{
						func_148(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_510(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_647(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_660(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_661(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_662(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_663(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_664(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_511(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_512(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_147();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_665(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 1000))
		{
			return 1;
		}
	}
	if (func_666(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_514(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_515(int iParam0, int iParam1)
{
	if (func_667(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 1000))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_516(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_318(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_517()
{
}

bool func_518(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_668(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_147();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_38(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_147();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

bool func_519()
{
	if (Global_1935630.f_42 == 0)
	{
		return false;
	}
	if (Global_1935630.f_42 == Global_1935630.f_40)
	{
		return false;
	}
	if (Global_1935630.f_43 <= 0)
	{
		return false;
	}
	if ((func_147() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_520(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_649(iParam0);
	if (iParam0->f_12 > func_669(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_670(iParam1);
	iVar1 = func_671(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_521(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_672(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_522(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_673(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_674(iParam1, iParam0))
					{
						if (func_38(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_523(int iParam0, int iParam1)
{
	if (!func_552(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_524(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_147();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_525(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_526(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_147();
	}
	else if (func_147() - iParam1->f_4) > func_675(iParam1)
	{
		return func_676(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_527(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_35 == iVar1 || Global_1935630.f_40 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_528(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_529(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return 1;
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return 2;
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return 4;
		case joaat("HONOR_EVENT_SCARE"):
			return 32;
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return 64;
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return 128;
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return 256;
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return 512;
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return 1024;
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return 2048;
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return 4096;
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return 8192;
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return 16384;
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return 32768;
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return 65536;
		case joaat("HONOR_EVENT_THEFT"):
			return 131072;
		case joaat("HONOR_EVENT_INTERVENED"):
			return 262144;
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return 524288;
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return 1048576;
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return 2097152;
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return 4194304;
		default:
			break;
	}
	return 0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_532(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_677();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_678(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_679(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_58())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_680(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_677();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_681(iVar1);
		func_683(func_682(), 0, 4000);
		func_684(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_685(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_687(func_686(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_531(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_688(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_689(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_689(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_687(func_686(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_531(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_688(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_689(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_689(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_686(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_690(10, 1);
	}
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

void func_534()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_818[2 /*12*/].f_8))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "LIST", Local_818[2 /*12*/].f_8);
		ENTITY::SET_ENTITY_VISIBLE(Local_818[2 /*12*/].f_8, false);
		OBJECT::DELETE_OBJECT(&(Local_818[2 /*12*/].f_8));
	}
}

void func_535()
{
	if (func_51(iLocal_1019, -2147483648))
	{
		if ((iLocal_1025 > 3 || Local_111.f_46) || (func_691(&uLocal_1026) && func_692(1086324736 /* Float: 6f */) < 4))
		{
			func_42(0);
		}
	}
}

void func_536(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_537(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_536(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_208(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_36(&(iParam1->f_13));
		}
		if (func_693(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_694(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_537(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_555(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_695(*uParam0, 1, 1);
						}
					}
					else if (func_696(iParam1, 22))
					{
						func_695(*uParam0, 0, 1);
					}
				}
				if (func_697(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_698(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_699(iParam8);
					if (func_700(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_701(uParam3);
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
					func_702(iParam1, uParam3, fVar8);
					if (func_703(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_554(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_704(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_697(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_705(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_700(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_698(uParam0, func_697(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_699(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_554(uParam3, 0, 0, 1, 1);
					}
					func_706(iParam1, 1);
				}
				func_702(iParam1, uParam3, fVar8);
				if (func_704(uParam0, iParam1, fParam4, bVar6))
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
			func_341(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_538(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_707(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_44(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_539(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_185() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_540(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_708(iParam0, &iVar0, &iVar1);
	if (!func_709(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_710(iVar0, iVar1);
}

bool func_541(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_542(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_543(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_544(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (bParam1)
	{
		func_711(iParam0, 4);
		func_712(iVar0, 1);
		func_713(iVar0, 1);
	}
	else
	{
		func_714(iParam0, 4);
		func_713(iVar0, 0);
	}
}

void func_545(int* iParam0, char* sParam1)
{
	if (func_214(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_543(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_547(iParam0, 1);
}

bool func_546(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_547(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_548(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> /*112*/ sVar0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
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
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_60(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_143(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		IK::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

var func_549(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_550(int iParam0, bool bParam1)
{
	if (func_43(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_551(float fParam0)
{
	if (func_715(1))
	{
		return true;
	}
	if (func_35(&uLocal_0) && !func_371(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_552(int iParam0)
{
	if (func_58())
	{
		return false;
	}
	return func_189(Global_1347702[58 /*49*/].f_15, 1);
}

void func_553(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_73(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_349(iParam0, 0);
		}
	}
}

void func_554(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_214((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_73(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

void func_555(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_556(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_557(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

bool func_558(int iParam0, var uParam1, int iParam2)
{
	char* sVar0;

	if (func_43(iParam0, 0, 0))
	{
		if (PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, Global_36, 3) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, Global_35, -1, -1f, -1f, -1f);
			sVar0 = func_560(iParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				func_44(iParam0, Global_35, sVar0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			func_81(iParam2);
			IK::_0x66F9EB44342BB4C5(iParam0, uParam1);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_559(int iParam0, int iParam1, float fParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (func_43(iParam0, 0, 0) && func_43(iParam1, 0, 0))
	{
		if (PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, Global_36, 2) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, true);
			if (iVar1 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iVar1 != joaat("WEAPON_UNARMED"))
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			TASK::TASK_CONFRONT(0, Global_35, 3);
			func_359(iParam0, &iVar0, fParam2, fParam3, 1, 1);
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

char* func_560(int iParam0)
{
	char* sVar0;

	switch (iLocal_109)
	{
		case 6:
			sVar0 = "RE_PH_STD_V3_PLAYER_WARN";
			break;
		case 3:
			if (iLocal_984 == 76)
			{
				sVar0 = "RE_PH_VAL_V3_PLAYER_WARN";
			}
			else if (iLocal_984 == 105)
			{
				if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
				{
					sVar0 = "RE_PH_RHD_V2_PLAYER_WARN";
				}
			}
			break;
		case 4:
			sVar0 = "RE_PH_VAL_V4_PLAYER_WARN";
			break;
		case 5:
			if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN";
			}
			break;
		case 8:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LEAVE_NOW";
			}
			break;
		case 0:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LEAVE_NOW";
			}
			else if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_BLW_V1_PLAYER_WARN";
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_338("PLAYER_WARN");
	}
	return sVar0;
}

int func_561(int iParam0, int iParam1, bool bParam2, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_43(iParam0, 0, 0) && func_43(iParam1, 0, 0))
	{
		if ((PED::IS_PED_USING_ANY_SCENARIO(iParam0) && PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(iParam0, Global_36, 3)) || !PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, true);
			if (iVar1 == joaat("WEAPON_UNARMED"))
			{
				iVar2 = WEAPON::GET_BEST_PED_WEAPON(iParam0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar2, false, 0, false, false);
				bVar3 = true;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (bVar3)
			{
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			}
			if (bParam2)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, iParam1, iParam1, 1f, 0, 0.5f, 4f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			}
			else if (PED::GET_MOUNT(iParam0) == 0)
			{
				PED::_0x8ACC0506743A8A5C(iParam0, joaat("SITUATIONNORMAL"), 1, -1082130432 /* Float: -1f */);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam1, -1, false, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0, -1f, -1f, -1f);
			}
			func_359(iParam0, &iVar0, fParam3, fParam4, 1, 1);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

char* func_562(int iParam0)
{
	char* sVar0;

	switch (iLocal_109)
	{
		case 6:
			sVar0 = "RE_PH_STD_V3_PLAYER_WARN_AGAIN";
			break;
		case 3:
			if (iLocal_984 == 76)
			{
				sVar0 = "RE_PH_VAL_V3_PLAYER_WARN_AGAIN";
			}
			else if (iLocal_984 == 105)
			{
				if (iParam0 == iLocal_946[3] || iParam0 == iLocal_946[2])
				{
					sVar0 = "RE_PH_RHD_V2_PLAYER_WARN_AGAIN";
				}
			}
			break;
		case 4:
			sVar0 = "RE_PH_VAL_V4_PLAYER_WARN_AGAIN";
			break;
		case 5:
			if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN_AGAIN";
			}
			else if (iParam0 == iLocal_946[2])
			{
				sVar0 = "RE_PH_RHD_V3_PLAYER_WARN_AGAIN";
			}
			break;
		case 8:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LAST_WARNING";
			}
			break;
		case 0:
			if (iParam0 == iLocal_946[2])
			{
				sVar0 = "LAST_WARNING";
			}
			else if (iParam0 == iLocal_946[3])
			{
				sVar0 = "RE_PH_BLW_V1_PLAYER_WARN_AGAIN";
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_338("PLAYER_WARN_AGAIN");
	}
	return sVar0;
}

void func_563(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	float fVar1;

	fVar1 = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 993674639, true) != 1)
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (func_38(iParam0, vParam1, 1) > 1f)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, 1f, 20000, 0.25f, 0, fParam4);
		}
		if (MISC::ABSF((fVar1 - fParam4)) > 2f)
		{
			TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
		}
		if (iParam0 == iLocal_946[3])
		{
			func_345(0, joaat("WORLD_HUMAN_STARE_STOIC"), -1, 1, 0, 4f);
		}
		else
		{
			func_345(0, joaat("WORLD_HUMAN_GUARD_SCOUT"), -1, 1, 0, 4f);
		}
		func_359(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

bool func_564(int iParam0, bool bParam1)
{
	if (bParam1 && !func_214(iParam0))
	{
		return false;
	}
	return !func_596(iParam0, 4);
}

bool func_565(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_716(16))
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
					func_717(16);
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

void func_566(bool bParam0)
{
	if (bParam0)
	{
		if (func_51(iLocal_1019, 16777216))
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_946[0], true);
			func_143(&iLocal_1019, 16777216);
		}
	}
	else if (!func_51(iLocal_1019, 16777216))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_946[0], false);
		func_60(&iLocal_1019, 16777216);
	}
}

bool func_567()
{
	if (func_51(iLocal_1019, 1048576))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_1425, Local_76[1 /*2*/], &cLocal_59, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_1425, -596672321))
		{
			func_60(&iLocal_1019, 1048576);
			return true;
		}
	}
	return false;
}

void func_568()
{
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_946[0], Local_903))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "CRIMINAL", iLocal_946[0]);
	}
}

void func_569()
{
	if (func_43(iLocal_946[0], 0, 0))
	{
		func_566(0);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 47, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 12, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 36, true);
		PED::SET_PED_RESET_FLAG(iLocal_946[0], 31, true);
	}
	else
	{
		func_566(1);
	}
}

void func_570()
{
	if (!func_51(iLocal_1019, 32768))
	{
		if (func_718(&(Local_111.f_162), "HNGP_LEVER", vLocal_1057, 0, joaat("INPUT_INTERACT_POS"), 1.75f, 0, 1, 3, 0, 0, iLocal_1102, 0, 0, 0, 1, joaat("SHORT_TIMED_EVENT"), 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_903.f_3);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_73(&(Local_111.f_162), 1, 1);
			func_719(&iLocal_75, vLocal_1085);
			StringCopy(&cLocal_67, func_720(iLocal_75), 64);
			func_36(&uLocal_988);
			func_60(&iLocal_1019, 32768);
		}
	}
	else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903.f_3))
	{
		func_119(Global_35, &cLocal_67);
	}
	else if (func_721(&cLocal_67))
	{
		if (func_722(Global_35, Local_903.f_3, "plr", &cLocal_67, &uLocal_1450, 1065353216 /* Float: 1f */, 0, 1, 1) || func_723(&uLocal_988) > 10f)
		{
			if (func_723(&uLocal_988) > 10f)
			{
			}
			ENTITY::STOP_ENTITY_ANIM(iLocal_1426, "static_lever", Local_76[1 /*2*/], -8f);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_903.f_3, "bAction", true, false);
			func_346();
			ENTITY::PLAY_ENTITY_ANIM(iLocal_1425, &cLocal_59, Local_76[1 /*2*/], 1000f, false, true, true, 0.28f, 32768);
			func_60(&iLocal_1019, 64);
			func_60(&iLocal_1019, 32);
			PED::_0x7ABBD9E449E0DB00(iLocal_946[0], 0);
			func_325(2, joaat("HONOR_EVENT_CRUEL_DEATH"), 0, "HONOR_EVENT_CRUEL_DEATH", iLocal_946[0], 0, 1065353216 /* Float: 1f */, 0);
		}
	}
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
	fVar9 = func_724(vVar3, vVar6);
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
	if (func_725(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_572()
{
	if (!func_51(iLocal_1019, 8))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_946[1]))
		{
			if (func_51(iLocal_1296, 4096))
			{
				if (!func_51(iLocal_1020, 67108864))
				{
					if (Local_111.f_98[0] < 12f && PED::CAN_PED_SEE_ENTITY(iLocal_946[0], Global_35, false, false) == 1)
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
						{
							if (iLocal_109 == 7)
							{
								if (func_552(0))
								{
									func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_SPOT_SICK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
								else
								{
									func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_SPOT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
								}
							}
							else
							{
								func_44(iLocal_946[0], Global_35, func_338("SPOT2"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 0, 0, 0);
							}
							func_60(&iLocal_1020, 67108864);
							return;
						}
					}
				}
			}
		}
	}
}

char* func_573(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iLocal_109)
			{
				case 1:
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						sVar0 = "RE_PH_VAL_V3_DROWN_IDLE";
					}
					else if (iLocal_984 == 105)
					{
						sVar0 = "RE_PH_RHD_V2_DROWN_IDLE";
					}
					break;
				case 5:
					sVar0 = "RE_PH_RHD_V3_BOUNTY_IDLE2";
					break;
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_IDLE";
					break;
				case 7:
					break;
				case 8:
					sVar0 = "RE_PH_BLW_V2_THREAT";
					break;
				case 0:
					sVar0 = "RE_PH_BLW_V1_THREAT";
					break;
			}
			break;
		case 1:
			switch (iLocal_109)
			{
				case 1:
					break;
				case 3:
					if (iLocal_984 == 76)
					{
						sVar0 = "RE_PH_VAL_V3_DROWN_IDLE2";
					}
					else if (iLocal_984 == 105)
					{
						sVar0 = "RE_PH_RHD_V2_DROWN_IDLE2";
					}
					break;
				case 4:
					break;
				case 5:
					sVar0 = "RE_PH_RHD_V3_BOUNTY_IDLE";
					break;
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_IDLE2";
					break;
				case 7:
					break;
				case 8:
					sVar0 = "RE_PH_BLW_V2_THREAT_B";
					break;
				case 0:
					sVar0 = "RE_PH_BLW_V1_THREAT_B";
					break;
			}
			break;
		case 2:
			switch (iLocal_109)
			{
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_INNOCENT";
					break;
			}
			break;
		case 3:
			switch (iLocal_109)
			{
				case 6:
					sVar0 = "RE_PH_STD_V3_BOUNTY_INNOCENT_B";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

float func_574(vector3 vParam0, int iParam3)
{
	return func_38(Global_35, vParam0, iParam3);
}

bool func_575()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_576()
{
	if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_946[0]) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_946[0]))
	{
		switch (iLocal_1021)
		{
			case 0:
				if (iLocal_109 == 1)
				{
					if (func_51(iLocal_1020, 65536) && !func_51(iLocal_1020, 134217728))
					{
						func_44(iLocal_946[0], Global_35, "SICK_BASTARD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
						func_60(&iLocal_1020, 134217728);
					}
					else
					{
						func_44(iLocal_946[0], Global_35, "DONT_BE_STUPID", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					}
					iLocal_1021++;
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("REACT_COWER"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 1:
				if (iLocal_109 == 1)
				{
					func_44(iLocal_946[0], Global_35, "FIGHT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("REACT_COWER"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 2:
				if (iLocal_109 == 1)
				{
					func_44(iLocal_946[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("AGGRO"), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 3:
				if (iLocal_109 == 1)
				{
					func_44(iLocal_946[0], Global_35, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("AGGRO"), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 4:
				if (iLocal_109 == 1)
				{
					func_44(iLocal_946[0], Global_35, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else if (iLocal_109 == 7)
				{
					func_44(iLocal_946[0], Global_35, func_338("CRIMINAL_FLINCH"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				else
				{
					func_44(iLocal_946[0], Global_35, func_338("FLINCH"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1808677283, 1, 0, 0);
					iLocal_1021++;
				}
				break;
			case 5:
				break;
		}
	}
}

void func_577()
{
	TASK::UNCUFF_PED(iLocal_946[0]);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_903))
	{
		if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(Local_903, "CRIMINAL"))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_903, "CRIMINAL", iLocal_946[0]);
			TASK::CLEAR_PED_TASKS(iLocal_946[0], true, false);
		}
	}
}

int func_578(int iParam0, int iParam1)
{
	return func_199(func_580(iParam0, iParam1));
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return joaat("VAL_PRISONERS");
		case 26:
			return joaat("STR_PRISONERS");
		case 105:
			return joaat("RHD_PRISONERS");
		case 78:
			return joaat("ASB_PRISONERS");
		case 5:
			return joaat("SDN_PRISONERS");
		case 38:
			return joaat("BLA_PRISONER");
		case 115:
			return joaat("TBL_PRISONERS");
		default:
			break;
	}
	return -1;
}

int func_580(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_581(int iParam0)
{
	int iVar0;

	if (!func_195(iParam0))
	{
		return 0;
	}
	if (!func_200(func_199(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_201(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_201(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_201(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_201(iParam0));
	return 1;
}

int func_582(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_402(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_583(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_726(iVar2))
				{
					vVar3 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_584(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

bool func_585(int iParam0)
{
	int iVar0;

	if (PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(iParam0, vLocal_1051))
	{
		PED::_0x24C82EF607105FAA(iParam0, joaat("AVOID"));
		PED::_0xAAB050DA48B57978(iParam0, "Default_Sad", 0, -1, 4);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_586(iLocal_946[4], 0, 0, 0), 1f, -1, 1f, 4, 40000f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		func_359(iParam0, &iVar0, 0, 0, 1, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		return true;
	}
	return false;
}

Vector3 func_586(int iParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;

	if (func_87(iParam1, iParam2, iParam3))
	{
		vVar0 = { func_727(iParam0) };
	}
	else
	{
		vVar0 = { iParam1, iParam2, iParam3 };
	}
	return vVar0;
}

void func_587(int iParam0)
{
	int iVar0;

	if (func_43(iParam0, 0, 1))
	{
		iVar0 = 4;
		while (iVar0 <= 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_818[iVar0 /*12*/].f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_818[iVar0 /*12*/].f_8, iParam0))
				{
					func_63(Local_818[iVar0 /*12*/].f_8, 1, 1);
				}
			}
			iVar0++;
		}
	}
}

int func_588(int iParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (bParam6 < 0 || bParam6 >= *iParam0)
	{
		bParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= bParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			fVar2 = func_38((*iParam0)[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = (*iParam0)[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_589(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_728(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_590()
{
	func_729(23);
}

void func_591(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

int func_592(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_593(int iParam0)
{
	int iVar0;

	iVar0 = func_730(iParam0);
	if (iVar0 != 0)
	{
		func_731(-1, 24, 0, iVar0);
	}
}

void func_594(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_687(func_686(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_96(iParam0, 2))
	{
		func_732(iParam0, func_459(iParam3));
	}
	if (func_96(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_224();
		}
		func_733(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_133(iParam0, 65536))
	{
		func_734(iParam0, iParam1);
		func_735(iParam0, func_229(iParam0, iParam1));
		func_591(128);
	}
	func_462(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_463(iParam0, 1);
	if (!bParam2)
	{
		func_591(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_736(524288);
	}
	if (func_737(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_737(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_595(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_738(&Global_0, 8);
	}
	if (!func_739() || func_185() != -1)
	{
		return;
	}
	func_738(&Global_0, 1);
}

bool func_596(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_597(int iParam0, bool bParam1)
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

void func_598(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_599(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_87(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_600(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_87(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_601(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_87(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_129(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_602()
{
	int iVar0;
	int iVar1;

	iVar0 = func_740(func_2());
	if (iVar0 == 8)
	{
		iVar1 = func_302(func_2());
		if (func_304(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_741(func_386(0)))
	{
		return false;
	}
	if (func_742())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_603(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

char* func_604(char* sParam0)
{
	return sParam0;
}

int func_605(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_743(&uParam1))
	{
		return 1;
	}
	if (!func_248(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_606(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_607(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_744(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_608(int iParam0)
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

bool func_609(var uParam0)
{
	return func_51(*uParam0, 4);
}

bool func_610(var uParam0)
{
	return func_51(*uParam0, 64);
}

bool func_611(var uParam0)
{
	return func_51(*uParam0, 8);
}

bool func_612(var uParam0)
{
	return func_51(*uParam0, 128);
}

bool func_613(var uParam0)
{
	return func_51(*uParam0, 2048);
}

void func_614(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_615(var uParam0)
{
	return func_51(*uParam0, 1024);
}

bool func_616(var uParam0)
{
	return func_51(*uParam0, 256);
}

void func_617(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_618(var uParam0)
{
	return func_51(*uParam0, 512);
}

bool func_619(var uParam0)
{
	return func_51(*uParam0, 4096);
}

int func_620(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

int func_621(int iParam0)
{
	return ENTITY::_GET_PED_ANIMAL_TYPE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
}

int func_622(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	if (!func_745(iParam0))
	{
		return 0;
	}
	Var1 = { func_746(iParam0) };
	if (STATS::STAT_ID_GET_INT(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_623(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_747(joaat("PLUCKED"), func_624(iParam0)) };
	return STATS::STAT_ID_IS_VALID(&Var0);
}

int func_624(int iParam0)
{
	return iParam0;
}

void func_625(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_708(iParam0, &iVar0, &iVar1);
	if (!func_709(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_748(iParam0, 1024))
	{
		return;
	}
	func_710(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

bool func_626(int iParam0)
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

int func_627(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_749(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_750((398 + iVar28), 1);
			if (func_751(iParam0, &Var0, iVar5, 0))
			{
				if (func_752(iParam0, &Var6, iVar5))
				{
					Var29 = { func_753(iParam0, Var0, iVar5, 0) };
					func_754(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_755(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_756(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_757(iParam0, iParam1);
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

void func_628(int iParam0, int iParam1, float fParam2)
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

bool func_629(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

void func_630(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_424(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_413(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_758(iVar0) < func_759(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_462(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_631(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_760(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_632(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_633(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_634()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_761(iVar0, 128))
		{
			func_762(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_635()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_761(iVar0, 128) && func_761(iVar0, 1))
		{
			func_762(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_636(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_637()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_96(iVar0, 16777216))
		{
			if (!func_763(iVar0))
			{
				func_764(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_638(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_64(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_64(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_64(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_64(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_64(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_64(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_64(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_639(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_126();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_640(int iParam0)
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

int func_641(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_642(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_643(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_765();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_766(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_644(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_645(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_185() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_767(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_767(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_671(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_646(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_768(iParam0);
	}
}

bool func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_671(iParam2);
	}
	else
	{
		iVar1 = func_670(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_671(iParam0);
	}
	else
	{
		iVar0 = func_670(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_3(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_648(int iParam0, int iParam1)
{
	return func_318(iParam0, iParam1, 1, 1);
}

float func_649(int iParam0)
{
	return iParam0->f_26;
}

bool func_650(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

bool func_651(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_318(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_769(iVar0, 0)))
		{
			if (func_499(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_652(int iParam0)
{
	return iParam0->f_17;
}

bool func_653(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_3(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_654(int iParam0)
{
	return iParam0->f_18;
}

bool func_655(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_769(iVar0, 0)))
		{
			if (func_642(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_656(int iParam0)
{
	return iParam0->f_23;
}

int func_657(int iParam0)
{
	return iParam0->f_21;
}

int func_658(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_659(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_770(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_660(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
			{
				return 1;
			}
		}
	}
	if (func_771(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_661(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_662(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_298(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_663(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_298(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_664(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_298(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_665(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_666(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_498(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_667(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_668(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_38(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_669(int iParam0)
{
	return iParam0->f_24;
}

int func_670(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_671(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_672(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 1000))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 1000))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_665(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 1000))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_318(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_318(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_673(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_487(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_674(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_674(iParam1, iVar1))
				{
					if (func_38(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_674(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

int func_675(int iParam0)
{
	return iParam0->f_20;
}

int func_676(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_677()
{
	int iVar0;

	iVar0 = func_772();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_678(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_185() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_208(MISC::ABSF(fVar1) < 1f, func_208(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

bool func_679(int iParam0)
{
	if (!func_773(iParam0))
	{
		return false;
	}
	return func_774(iParam0);
}

int func_680(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_681(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_682()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_683(int iParam0, bool bParam1, int iParam2)
{
	func_775((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_776(iParam0);
}

void func_684(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_777(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_685(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_778(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_779(iVar5, &iVar2, &iVar0))
			{
				if (!func_780(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_781(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_782(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_677() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_677() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_783();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> /*16*/ func_686(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

void func_687(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

char* func_688(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_689(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_784(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_690(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_785(iParam0))
	{
		return 0;
	}
	if (!func_739())
	{
		return 0;
	}
	if (!func_786(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_691(var uParam0)
{
	if (!func_51(iLocal_1019, 64))
	{
		return false;
	}
	if (*uParam0 == 0)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (MISC::GET_GAME_TIMER() >= *uParam0 + 1000)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		return true;
	}
	return false;
}

int func_692(int iParam0)
{
	var uVar0;
	var uVar7[1];

	uVar0 = 6;
	uVar7[0] = Global_35;
	return func_787(&uVar0, &uVar7, 5, vLocal_1060, iParam0, 0, 1, 1, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
}

bool func_693(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_788(iParam0, iParam1))
		{
			if (!func_3(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_554(uParam2, 0, 0, 1, 0);
				func_53(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_3(iParam1->f_10, 1))
		{
			func_789(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_54(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_694(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_3(iParam4, 32);
		func_553(iParam1, uParam2, 0);
		iVar5 = func_790(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_554(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_3(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_3(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_3(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_3(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_3(iParam4, 8388608) || func_3(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_3(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_3(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_696(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_696(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_3(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_791(uParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_3(iParam4, 268435456))
			{
				iVar8 = func_792(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_793(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_696(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_3(iParam4, 2) || func_3(iParam4, 16))
			{
				func_695(*uParam0, 1, 1);
			}
			else
			{
				func_695(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_695(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_696(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_697(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_565(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_698(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_794(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_3(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_699(int iParam0)
{
	if (func_3(iParam0, 4))
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
	if (func_3(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_3(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_700(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_795(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_796(Global_35)) || func_797(Global_35)) || func_798(Global_35));
	fVar12 = -1f;
	if (func_35(&(iParam1->f_13)))
	{
		fVar12 = func_37(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_214((uParam4[iVar0 /*17*/])->f_6);
		func_799(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_800(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_801(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_554(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_802(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_553(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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
					if (func_803(iParam1, fParam6, iParam1->f_9))
					{
						func_36(&(iParam1->f_18));
						if (bVar6)
						{
							func_802(uParam4, 0, 0);
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
		func_804(iParam1, fParam2);
	}
	return bVar5;
}

void func_701(var uParam0)
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

void func_702(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_805(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_804(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_703(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_806(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_807(iParam1, 0);
				func_553(iParam1, uParam2, func_696(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_704(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_36(&(iParam1->f_18));
			return false;
		}
		else if (func_35(&(iParam1->f_18)))
		{
			func_496(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_35(&(iParam1->f_18)))
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
	return func_371(&(iParam1->f_18), fParam2);
	return true;
}

void func_705(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_799(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_706(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_707(int* iParam0)
{
	if (func_696(iParam0, 0))
	{
		if (func_808(iParam0))
		{
			func_706(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_709(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_809(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_810(iParam0))
	{
		return false;
	}
	if (func_811(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_748(iParam0, 1)) || func_812(32768))
	{
		if (!func_748(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_813())
	{
		return false;
	}
	return true;
}

void func_710(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_711(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_712(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_596(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_713(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_714(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

bool func_715(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_716(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_717(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

bool func_718(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;

	if (!func_214(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_814(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0, 0);
			func_815(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = func_816(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		else
		{
			if (func_87(vParam2))
			{
				return false;
			}
			*uParam0 = func_817(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		if (fParam8 != 0f)
		{
			func_542(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_795(1))
			{
				func_544(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			func_818(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (func_564(*uParam0, 0))
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				func_544(*uParam0, 0, 1);
			}
		}
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
		{
			func_544(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > func_795(1))
		{
			func_544(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (func_214(*uParam0))
			{
				func_73(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && func_819(*uParam0, 1)) || (bParam17 && func_820(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				func_821(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				func_822(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
			}
		}
		func_73(uParam0, 1, 1);
		return true;
	}
	return false;
}

void func_719(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;

	iVar8 = func_823(Global_35, 0, 0);
	if ((WEAPON::IS_WEAPON_MELEE_WEAPON(iVar8) || WEAPON::_IS_WEAPON_ONE_HANDED(iVar8)) || WEAPON::_IS_WEAPON_THROWABLE(iVar8))
	{
		if (PED::IS_PED_USING_ACTION_MODE(Global_35))
		{
			vVar0 = { func_824(2) };
			vVar3 = { func_824(8) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 2;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 8;
				vParam1 = { vVar3 };
			}
		}
		else
		{
			vVar0 = { func_824(3) };
			vVar3 = { func_824(7) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 3;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 7;
				vParam1 = { vVar3 };
			}
		}
	}
	else if (WEAPON::IS_WEAPON_BOW(iVar8))
	{
		vVar0 = { func_824(6) };
		vVar3 = { func_824(12) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
		fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
		if (fVar6 < fVar7)
		{
			*iParam0 = 6;
			vParam1 = { vVar0 };
		}
		else
		{
			*iParam0 = 12;
			vParam1 = { vVar3 };
		}
	}
	else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar8))
	{
		if (PED::IS_PED_USING_ACTION_MODE(Global_35))
		{
			vVar0 = { func_824(6) };
			vVar3 = { func_824(10) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 6;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 10;
				vParam1 = { vVar3 };
			}
		}
		else
		{
			vVar0 = { func_824(5) };
			vVar3 = { func_824(9) };
			fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
			fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
			if (fVar6 < fVar7)
			{
				*iParam0 = 6;
				vParam1 = { vVar0 };
			}
			else
			{
				*iParam0 = 10;
				vParam1 = { vVar3 };
			}
		}
	}
	else
	{
		vVar0 = { func_824(4) };
		vVar3 = { func_824(11) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false);
		fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, false);
		if (fVar6 < fVar7)
		{
			*iParam0 = 4;
			vParam1 = { vVar0 };
		}
		else
		{
			*iParam0 = 11;
			vParam1 = { vVar3 };
		}
	}
}

char* func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_LEVER_GUARD_V1";
		case 1:
			return "PBL_LEVER_GUARD_V2";
		case 2:
			return "PBL_PULL_1H_ACTION";
		case 3:
			return "PBL_PULL_1H_ARMED";
		case 4:
			return "PBL_PULL_ACTION_UNARMED";
		case 5:
			return "PBL_PULL_RIFLE";
		case 6:
			return "PBL_PULL_RIFLE_ACTION";
		case 7:
			return "PBL_PUSH_IH";
		case 8:
			return "PBL_PUSH_1H_ACTION";
		case 9:
			return "PBL_PUSH_RIFLE";
		case 10:
			return "PBL_PUSH_RIFLE_ACTION";
		case 11:
			return "PBL_PUSH_UNARMED";
		case 12:
			return "PBL_kick_behind";
		default:
			break;
	}
	return "PBL_PUSH_1H_ACTION";
}

bool func_721(char* sParam0)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_903.f_3, sParam0))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_903.f_3, sParam0);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_722(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { func_825(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_87(vVar0))
					{
						if (func_725(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_359(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::TASK_FLEE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_359(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_826(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

float func_723(var uParam0)
{
	if (!func_35(uParam0))
	{
		return 0f;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_126() - uParam0->f_1);
}

float func_724(vector3 vParam0, vector3 vParam3)
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

bool func_725(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_726(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

Vector3 func_727(int iParam0)
{
	switch (iLocal_109)
	{
		case 0:
		case 8:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 1:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[5 /*3*/];
			}
			break;
		case 3:
			switch (func_224())
			{
				case 9:
					if (iParam0 == iLocal_946[4])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[5])
					{
						return vLocal_1063[4 /*3*/];
					}
					else if (iParam0 == iLocal_946[6])
					{
						return vLocal_1063[5 /*3*/];
					}
					else if (iParam0 == iLocal_946[7])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[8])
					{
						return vLocal_1063[4 /*3*/];
					}
					else if (iParam0 == iLocal_946[9])
					{
						return vLocal_1063[0 /*3*/];
					}
					else if (iParam0 == iLocal_946[10])
					{
						return vLocal_1063[2 /*3*/];
					}
					else if (iParam0 == iLocal_946[11])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[12])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[13])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[14])
					{
						return vLocal_1063[5 /*3*/];
					}
					else if (iParam0 == iLocal_946[15])
					{
						return vLocal_1063[3 /*3*/];
					}
					break;
				case 11:
					if (iParam0 == iLocal_946[4])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[5])
					{
						return vLocal_1063[0 /*3*/];
					}
					else if (iParam0 == iLocal_946[6])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[7])
					{
						return vLocal_1063[3 /*3*/];
					}
					else if (iParam0 == iLocal_946[8])
					{
						return vLocal_1063[1 /*3*/];
					}
					else if (iParam0 == iLocal_946[9])
					{
						return vLocal_1063[2 /*3*/];
					}
					else if (iParam0 == iLocal_946[10])
					{
						return vLocal_1063[3 /*3*/];
					}
					break;
			}
			break;
		case 4:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return -361.4171f, 738.0641f, 115.7283f;
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[4 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[5 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 5:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 6:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
		case 7:
			if (iParam0 == iLocal_946[4])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[5])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[6])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[7])
			{
				return vLocal_1063[0 /*3*/];
			}
			else if (iParam0 == iLocal_946[8])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[9])
			{
				return vLocal_1063[2 /*3*/];
			}
			else if (iParam0 == iLocal_946[10])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[11])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[12])
			{
				return vLocal_1063[1 /*3*/];
			}
			else if (iParam0 == iLocal_946[13])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[14])
			{
				return vLocal_1063[3 /*3*/];
			}
			else if (iParam0 == iLocal_946[15])
			{
				return vLocal_1063[3 /*3*/];
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_728(int iParam0)
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

void func_729(int iParam0)
{
	int iVar0;

	if (func_185() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_145(func_827(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_827(iVar0), func_416(), 1))
			{
				func_828(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_731(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_829() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_829();
					}
					func_830(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_54(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_400(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_401(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_733(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_133(iParam0, 8192))
	{
		iVar0 = func_401(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_734(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_420(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_735(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_96(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_87(vParam1))
	{
		return;
	}
	if (!func_244(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_87(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_434(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_736(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_764(iVar0, iParam0);
		iVar0++;
	}
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_738(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_739()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_740(int iParam0)
{
	if (!func_494(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_741(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_742()
{
	return Global_1894899 & 2 != 0;
}

bool func_743(var uParam0)
{
	return func_51(*uParam0, 1);
}

void func_744(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_831(iParam1))
		{
			func_832(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_31(iParam0, 0, 1);
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
			func_833(iParam0, 0);
			bVar0 = true;
		}
		func_834(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_745(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

struct<2> /*16*/ func_746(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = { func_747(joaat("SKINNED"), func_624(iParam0)) };
	if (STATS::STAT_ID_IS_VALID(&Var0))
	{
		Var0 = { func_747(joaat("PLUCKED"), func_624(iParam0)) };
	}
	return Var0;
}

struct<2> /*16*/ func_747(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_748(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

struct<5> /*40*/ func_749(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_835(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_782(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_753(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_836(bParam1) };
			if (bParam2 && func_837(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_751(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_751(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_752(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_838(bParam1) };
			switch (func_839(iParam0))
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
			if (func_840(iParam0, -1823706425))
			{
				Var0 = { func_753(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_840(iParam0, -1483207246))
			{
				Var0 = { func_753(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_841(Var0, &Var27, bParam1, 0))
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

int func_750(int iParam0, int iParam1)
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

bool func_751(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_842(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_752(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_843(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_753(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_780(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_844(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_754(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_845(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_841(*uParam1, &Var0, bParam6, 0))
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
	if (!func_755(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_844(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_755(bool bParam0)
{
	if (func_185() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_844(bParam0));
}

int func_756(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_846(iParam0))
	{
		return 0;
	}
	if (!func_755(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_757(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_847(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_758(int iParam0)
{
	if (func_244(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_759(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_760(int iParam0, int iParam1)
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

bool func_761(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_762(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_763(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_764(int iParam0, int iParam1)
{
	if (!func_244(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

bool func_765()
{
	if (func_848())
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
		{
			return PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK"));
		}
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}
	return false;
}

void func_766(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_767(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630.f_12)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_35);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_768(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_54(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_53(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_769(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_770(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_771(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_772()
{
	return Global_40.f_11095.f_35;
}

bool func_773(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_775(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_849(bParam1);
	}
}

void func_776(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_777(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_778(int iParam0)
{
	vector3 vVar0;

	if (!func_850(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_779(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_850(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_780(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_781(int iParam0)
{
	return iParam0;
}

int func_782(int iParam0)
{
	vector3 vVar0;

	if (!func_780(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_783()
{
	int iVar0;

	iVar0 = func_677();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_784(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_785(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_786(int iParam0, int iParam1, int iParam2)
{
	if (!func_785(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

int func_787(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = func_851(uParam0, uParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_48(iVar0);
	return iVar1;
}

bool func_788(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_852((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_789(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_805(uParam0[iVar0 /*17*/]))
		{
			func_529(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_790(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_853(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_214((uParam2[iVar0 /*17*/])->f_6))
		{
			func_529(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_791(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_406(*uParam0);
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

int func_792(var uParam0, int iParam1)
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

void func_793(int* iParam0, int* iParam1)
{
	if (!func_696(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_529(iParam1, 19);
			func_807(iParam0, 23);
			func_854(iParam1, 2);
		}
	}
}

void func_794(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_853(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_795(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_796(int iParam0)
{
	return (func_855(iParam0, 4) || func_855(iParam0, 5));
}

int func_797(int iParam0)
{
	return func_855(iParam0, 7);
}

int func_798(int iParam0)
{
	return func_855(iParam0, 6);
}

void func_799(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_805(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_853(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_800(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_856(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_564(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_544(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_544(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_857(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_801(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_820(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_858(iParam1, 1))
	{
		func_859(iParam1, 1);
		return true;
	}
	return false;
}

void func_802(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_334(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_803(int* iParam0, float fParam1, bool bParam2)
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

void func_804(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_805(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_806(int iParam0)
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

void func_807(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_808(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_809(int iParam0, int iParam1)
{
	if (func_185() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_810(int iParam0)
{
	if (func_185() != -1)
	{
		if (func_748(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_748(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_811(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_748(iParam0, 65536) && !func_748(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_748(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_748(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_812(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_813()
{
	return Global_1905944.f_5694;
}

int func_814(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_596(iVar0, 2))
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
				func_860(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_815(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_214(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	Global_1945188[iVar0 /*18*/].f_9 = fParam1;
	HUD::_UIPROMPT_CONTEXT_SET_SIZE(Global_1945188[iVar0 /*18*/].f_3, fParam1);
}

int func_816(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_596(iVar0, 2))
		{
			if (iParam2 == Global_1945188[iVar0 /*18*/].f_10 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_860(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, bParam8, iParam9, bParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, bParam12, bParam13);
		return iVar1;
	}
	return 0;
}

int func_817(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_87(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_596(iVar0, 2))
		{
			if (func_434(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_860(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_818(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	func_712(iVar0, bParam1);
}

bool func_819(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_214(iParam0))
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_820(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_214(iParam0))
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_821(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_861(iParam0);
	if (bParam3)
	{
		func_862(iParam0, sParam1, iParam2);
	}
}

void func_822(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_863(iParam0, sParam4, iParam5);
	}
	func_864(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_823(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;

	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, bParam2))
	{
		return uVar0;
	}
	return joaat("WEAPON_UNARMED");
}

Vector3 func_824(int iParam0)
{
	vector3 vVar0;

	vVar0 = { vLocal_1082 };
	switch (iParam0)
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 1:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 2:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.95883f, -0.000471f, 1f) };
			break;
		case 3:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.803585f, -0.006519f, 1.005364f) };
			break;
		case 4:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.852332f, -0.081826f, 1f) };
			break;
		case 5:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 0.88744f, 0.030309f, 1f) };
			break;
		case 6:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, 1.005871f, -0.070214f, 1f) };
			break;
		case 7:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.830719f, -0.071351f, 1f) };
			break;
		case 8:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.802012f, -0.042675f, 1f) };
			break;
		case 9:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.744065f, 0.00757f, 1f) };
			break;
		case 10:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.899052f, -0.033155f, 1f) };
			break;
		case 11:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -0.635599f, 0.036676f, 1.005364f) };
			break;
		case 12:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_1057, fLocal_1032, -1.102158f, -0.069693f, 1.005364f) };
			break;
	}
	return vVar0;
}

Vector3 func_825(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_826(int iParam0, int iParam1)
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

int func_827(int iParam0)
{
	if (!func_865(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_828(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_866(iParam0))
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

int func_829()
{
	return Global_1899515;
}

void func_830(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_867(*uParam0);
	iVar1 = func_868(*uParam0);
	iVar2 = func_869(*uParam0);
	iVar3 = func_479(*uParam0);
	iVar4 = func_870(*uParam0);
	iVar5 = func_871(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_872(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_872(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_873(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_831(int iParam0)
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

void func_832(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_874(iParam0, iParam1))
		{
			if (func_875(iParam0, iParam1))
			{
				if (func_876(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_877(iParam0);
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

void func_833(int iParam0, bool bParam1)
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

void func_834(int iParam0, int iParam1)
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

struct<4> /*32*/ func_835(bool bParam0)
{
	return func_753(joaat("CHARACTER"), func_878(), -1591664384, bParam0);
}

struct<4> /*32*/ func_836(bool bParam0)
{
	int iVar0;

	iVar0 = func_844(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_753(923904168, func_835(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_753(923904168, func_835(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_753(923904168, func_835(bParam0), -740156546, 0);
}

bool func_837(int iParam0, bool bParam1)
{
	if (func_839(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_679(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_838(bool bParam0)
{
	int iVar0;

	iVar0 = func_844(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_753(271701509, func_835(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_753(271701509, func_835(bParam0), 12999093, 0);
}

int func_839(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_780(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_840(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_839(iParam0);
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

bool func_841(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_844(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_842(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_780(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_753(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_844(bParam6), &Var0, 0);
	return uVar4;
}

bool func_843(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_844(0);
	*uParam1 = { func_753(iParam0, func_836(0), iParam3, 0) };
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

int func_844(bool bParam0)
{
	if (func_185() == -1)
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

bool func_845(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_846(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_847(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_848()
{
	switch (Global_1935630.f_44)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
			return true;
		default:
			break;
	}
	return false;
}

void func_849(bool bParam0)
{
	func_879(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_850(int iParam0, var uParam1)
{
	if (!func_880(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_851(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(iParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			iVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_881(iVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreThisPed"))
				{
					if (!func_882(iVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
								{
									bVar3 = true;
								}
								else
								{
									iVar7++;
								}
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (!bParam11)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = iVar2;
							iVar4++;
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (iVar4 >= (iParam2 - 1) && iVar6 >= iParam2)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar4;
}

int func_852(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_853(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_214(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_73(&(iParam1->f_6), 0, 1);
	}
	if (!func_214(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_805(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_814(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_214(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_857(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_883(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_884(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_542(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_883(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_544(iParam1->f_6, 0, 1);
				}
				else
				{
					func_544(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_854(int* iParam0, int iParam1)
{
	if (!func_546(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_529(iParam0, 14);
		}
	}
}

int func_855(int iParam0, int iParam1)
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

bool func_856(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_857(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_214(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	func_883(iParam0, 18, 0, 1);
	func_883(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_858(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_214(iParam0))
	{
		return false;
	}
	iVar0 = func_215(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_859(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

void func_860(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_712(iParam0, 1);
	func_713(iParam0, 1);
	func_714(iParam0, 128);
}

void func_861(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_795(1) < iParam0)
	{
		iParam0 = func_795(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_686(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_862(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_689(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_863(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_689(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_864(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_885())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_689(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_886(iVar0);
			func_887(iVar0, 0, 0);
		}
		func_689(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_687(func_686(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_865(int iParam0)
{
	return iParam0 > -1;
}

bool func_866(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_867(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_321(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_868(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_869(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_870(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_871(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_872(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_873(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_888(uParam0, iParam6);
	func_889(uParam0, iParam5);
	func_890(uParam0, iParam4);
	func_891(uParam0, iParam3);
	func_892(uParam0, iParam2);
	func_893(uParam0, iParam1);
}

bool func_874(int iParam0, int iParam1)
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

bool func_875(int iParam0, int iParam1)
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

bool func_876(int iParam0, int iParam1)
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
	if (!func_874(iParam0, iVar0))
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

void func_877(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> /*32*/ func_878()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

void func_879(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_880(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_881(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_894(iParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_895(iParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_882(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_883(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_884(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_214(iParam0))
	{
		return;
	}
	iVar0 = func_215(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

bool func_885()
{
	if (func_896())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_886(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_897((Global_40.f_4283.f_325 + iParam0));
}

void func_887(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_885())
	{
		func_689(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_689(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

void func_888(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_889(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_890(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_868(*uParam0);
	iVar1 = func_867(*uParam0);
	if (iParam1 < 1 || iParam1 > func_872(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_891(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_892(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_893(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_894(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(iParam0, func_416(), 1))
	{
		return true;
	}
	return false;
}

int func_895(int iParam0, bool bParam1)
{
	return func_898(iParam0, Global_1894899.f_2, bParam1);
}

bool func_896()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_897(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_686(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_898(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_899(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_192(iParam0, iVar0, iVar1, bParam2);
}

bool func_899(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_185() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

