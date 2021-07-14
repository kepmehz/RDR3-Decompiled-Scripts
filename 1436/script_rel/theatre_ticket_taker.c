#region Local Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<74> /*592*/ sLocal_3 = { 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 1097859072;
	var uLocal_94 = 1000;
	var uLocal_95 = 1067450368;
	var uLocal_96 = 5000;
	var uLocal_97 = 42;
	var uLocal_98 = 1103626240;
	var uLocal_99 = 1077936128;
	var uLocal_100 = 1106247680;
	var uLocal_101 = 1103101952;
	var uLocal_102 = 1097859072;
	var uLocal_103 = 1103626240;
	var uLocal_104 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void main()
{
	struct<140> /*1120*/ sVar0;

	Var0.f_1 = -1;
	Var0.f_12 = 24;
	Var0.f_114 = joaat("INPUT_CONTEXT_Y");
	Var0.f_128 = 2;
	Var0.f_131 = 2;
	Var0.f_1 = vScriptParam_0.y;
	Var0.f_119 = vScriptParam_0.z;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&Var0);
	}
	Var0.f_139 = func_2();
	if (!func_3(&Var0))
	{
		func_1(&Var0);
	}
	while (!func_4(&Var0))
	{
		switch (Var0.f_11)
		{
			case 0:
				func_5(&Var0);
				Var0.f_11 = 1;
				break;
			case 1:
				if (func_6(&Var0))
				{
					Var0.f_11 = 2;
				}
				break;
			case 2:
				if (func_7(&Var0))
				{
					Var0.f_11 = 3;
				}
				break;
			case 3:
				if (func_8(&Var0, 0))
				{
					func_9(&Var0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_134))
				{
					Var0.f_11 = 2;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
}

void func_1(var uParam0)
{
	func_10(uParam0);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_138))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_138));
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_6);
	}
	if (func_11(uParam0->f_128[0]))
	{
		func_12(&(uParam0->f_128[0]), 1, 1);
	}
	if (func_11(uParam0->f_128[1]))
	{
		func_12(&(uParam0->f_128[1]), 1, 1);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1894899.f_2;
}

bool func_3(var uParam0)
{
	uParam0->f_111 = "BUY_TICKET";
	uParam0->f_112 = "SHOW_GET_INFO";
	uParam0->f_9 = 1;
	uParam0->f_120 = 0;
	uParam0->f_135 = { 0f, 1f, 0f };
	uParam0->f_113 = "";
	uParam0->f_8 = 1;
	uParam0->f_124 = 3f;
	uParam0->f_2 = { func_13(uParam0->f_1) };
	Local_3.f_24 = uParam0->f_119;
	if (func_14(Local_3.f_24))
	{
		uParam0->f_7 = 1;
	}
	if (func_15(36))
	{
		if (uParam0->f_1 == 283)
		{
			uParam0->f_122 = 1;
		}
	}
	else
	{
		uParam0->f_122 = 0;
	}
	uParam0->f_117 = func_16(uParam0->f_1);
	if (uParam0->f_117 >= 100)
	{
		uParam0->f_111 = "BUY_TICKET_DLR";
	}
	func_17(uParam0, 0);
	func_18(&(Local_3.f_51), &(Local_3.f_52), Local_3.f_24);
	switch (func_2())
	{
		case 5:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 38:
			uParam0->f_110 = "NBX_Bartender";
			break;
		case 76:
			uParam0->f_110 = "NBX_Bartender";
			break;
	}
	return true;
}

bool func_4(var uParam0)
{
	float fVar0;

	uParam0->f_140++;
	if (uParam0->f_140 < 10)
	{
		return false;
	}
	uParam0->f_140 = 0;
	if (func_2() != uParam0->f_139 || uParam0->f_139 == -1)
	{
		return true;
	}
	if (!uParam0->f_122 && func_19(0, 1, 1))
	{
		return true;
	}
	if (uParam0->f_11 == 4)
	{
		return true;
	}
	fVar0 = func_20(Global_35, uParam0->f_2, 1);
	if (fVar0 > 60f)
	{
		return true;
	}
	return false;
}

void func_5(var uParam0)
{
	PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_6(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 != -1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(uParam0->f_1)))
		{
			return false;
		}
	}
	if (!func_22(uParam0))
	{
		return false;
	}
	return PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
}

bool func_7(var uParam0)
{
	int iVar0;

	func_23(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (*uParam0 != 0)
		{
			uParam0->f_134 = func_24(*uParam0, uParam0->f_2, uParam0->f_5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else if (uParam0->f_1 != -1)
		{
			if (uParam0->f_9)
			{
				if (func_20(Global_35, uParam0->f_2, 1) < 100f)
				{
					if (!func_25(uParam0->f_1, 0, 0, 0, 0, 0))
					{
						return false;
					}
				}
			}
			uParam0->f_134 = func_26(uParam0->f_1);
		}
		else
		{
			func_1(uParam0);
		}
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_110))
	{
		func_27(&(uParam0->f_12), uParam0->f_134, uParam0->f_110, 0);
	}
	MISC::REGISTER_INTERACTION_LOCKON_PROMPT(uParam0->f_134, "", 3f, 0f, 4, 0f, 0f, 0, false, -1);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 297, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);
	if (uParam0->f_120 != 0)
	{
		if (!uParam0->f_10)
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
			{
				uParam0->f_138 = func_28(uParam0->f_134, uParam0->f_120, 1, 1);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_138))
			{
				uParam0->f_138 = MAP::BLIP_ADD_FOR_COORDS(uParam0->f_120, uParam0->f_2);
			}
			if (uParam0->f_121 != 0)
			{
				MAP::SET_BLIP_SPRITE(uParam0->f_138, uParam0->f_121, true);
				iVar0 = func_29(uParam0->f_121);
				if (iVar0 != 0)
				{
					MAP::SET_BLIP_FLASH_TIMER(uParam0->f_138, iVar0, -1);
				}
			}
		}
	}
	if (uParam0->f_8 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_134, 0, false);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		if (func_8(uParam0, 0))
		{
			if (uParam0->f_124 > 0f)
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, uParam0->f_124, uParam0->f_124, 1.7f, "Interact_Ped - volProximityRng");
			}
			else
			{
				uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 5f, 5f, 1.7f, "Interact_Ped - volProximityRng");
			}
		}
		else
		{
			uParam0->f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, false, false), 0f, 0f, 0f, 3.5f, 3.5f, 1.7f, "Interact_Ped - volProximityRng");
		}
	}
	return true;
}

bool func_8(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_118, iParam1);
}

int func_9(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	func_30(uParam0);
	if (uParam0->f_123 == 1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		return 0;
	}
	bVar0 = false;
	bVar1 = PED::IS_PED_CARRYING_SOMETHING(Global_35);
	if (!bVar1)
	{
		bVar1 = func_31(Global_35);
	}
	if (func_32(Global_35, uParam0->f_6, 0, 0))
	{
		bVar0 = true;
		func_33(uParam0);
	}
	else
	{
		func_34(uParam0);
	}
	if (bVar0)
	{
		if (func_35(Global_35, uParam0->f_134, 1, 1) < uParam0->f_124)
		{
			if (!func_11(uParam0->f_128[0]) && !uParam0->f_131[0])
			{
				uParam0->f_128[0] = func_36(uParam0->f_111, joaat("INPUT_INTERACT_LOCKON_POS"), uParam0->f_134, 1, 1, 0, 0, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				HUD::_UIPROMPT_SET_GROUP(Global_1945188[func_37(uParam0->f_128[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
				if (uParam0->f_117 >= 100)
				{
					func_38(uParam0->f_128[0], uParam0->f_111, (BUILTIN::TO_FLOAT(uParam0->f_117) / 100f), 2, 1);
				}
				else
				{
					func_39(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, 0);
				}
			}
			if ((!func_11(uParam0->f_128[1]) && uParam0->f_7) && !uParam0->f_131[1])
			{
				uParam0->f_128[1] = func_36(uParam0->f_112, joaat("INPUT_INTERACT_LOCKON_NEG"), uParam0->f_134, 1, 1, 0, 0, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				HUD::_UIPROMPT_SET_GROUP(Global_1945188[func_37(uParam0->f_128[1]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(uParam0->f_134), 0);
			}
			iVar2 = -1;
			if (func_11(uParam0->f_128[0]))
			{
				func_40(uParam0, 0, bVar1);
				if (func_41(uParam0->f_128[0], 1))
				{
					iVar2 = 0;
					func_42(&(uParam0->f_125));
					uParam0->f_131[0] = 1;
					func_12(&(uParam0->f_128[0]), 1, 1);
					if (func_11(uParam0->f_128[1]))
					{
						func_43(uParam0, 1);
						func_12(&(uParam0->f_128[1]), 1, 1);
					}
				}
			}
			if (func_11(uParam0->f_128[1]))
			{
				func_40(uParam0, 1, bVar1);
				if (func_41(uParam0->f_128[1], 1))
				{
					iVar2 = 1;
					func_42(&(uParam0->f_125));
					func_43(uParam0, 1);
					func_12(&(uParam0->f_128[1]), 1, 1);
					func_43(uParam0, 0);
				}
			}
			switch (iVar2)
			{
				case 0:
					func_44(uParam0);
					return 1;
				case 1:
					func_45(uParam0);
					return 1;
			}
		}
		else
		{
			func_46(uParam0);
		}
	}
	else
	{
		func_46(uParam0);
	}
	return 0;
}

void func_10(var uParam0)
{
	int iVar0;

	func_47(&(Local_3.f_10[0 /*3*/]), "IG2");
	func_47(&(Local_3.f_10[1 /*3*/]), "IG3");
	func_47(&(Local_3.f_10[2 /*3*/]), "IG4");
	func_48(&Local_3, 0);
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (func_51(func_49(iVar0), func_50(Local_3.f_24)))
		{
			AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_49(iVar0), func_50(Local_3.f_24)));
		}
		else
		{
			iVar0++;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_3.f_52))
	{
		VOLUME::_DELETE_VOLUME(Local_3.f_52);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_3.f_51))
	{
		VOLUME::_DELETE_VOLUME(Local_3.f_51);
	}
	if (func_52(uParam0->f_1))
	{
		func_53(uParam0->f_1, 0, 1, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, false);
	if (func_54(Global_1394141.f_1326, 16))
	{
		func_55(&(Global_1394141.f_1326), 16);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_56(Global_35);
	}
}

bool func_11(int iParam0)
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

void func_12(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_11(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_37(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_57(iVar0);
	*uParam0 = 0;
}

Vector3 func_13(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 2542.098f, -1282.514f, 48.21795f;
		case 284:
			return 2687.112f, -1361.769f, 47.24998f;
		case 33:
			return -355.2777f, 704.6901f, 116.0523f;
		case 525:
			return -790.1024f, -1362.621f, 42.90462f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_14(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

bool func_15(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_58(Global_1835011[iParam0 /*74*/].f_1);
}

int func_16(int iParam0)
{
	int iVar0;

	iVar0 = 200;
	switch (iParam0)
	{
		case 283:
			iVar0 = func_59(-1110862888 /* GXTEntry: "Theatre Ticket" */, -915411861, 1, 0, 0);
			break;
		case 284:
			if (func_60(45))
			{
				iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 0);
			}
			else
			{
				iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 0);
			}
			break;
		case 525:
			iVar0 = func_59(2037803338 /* GXTEntry: "Movie Ticket" */, -915411861, 1, 0, 0);
			break;
		case 33:
			iVar0 = func_59(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, -915411861, 1, 0, 0);
			break;
	}
	return iVar0;
}

void func_17(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_118), iParam1);
}

void func_18(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2538.033f, -1279.347f, 49.98048f, 0f, 0f, 11.90726f, 5.5f, 5.5f, 2f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2545.899f, -1284.449f, 52.68468f, 0f, 0f, 0f, 19.06469f, 21.41224f, 12.2805f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam0, 2537.024f, -1293.295f, 52.62739f, 0f, 0f, 0f, 8.533219f, 26.71697f, 9.024663f);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2533.624f, -1276.359f, 49.78957f, 0f, 0f, -25.0941f, 2.553831f, 2.187363f, 3.282658f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2535.758f, -1273.773f, 49.78957f, 0f, 0f, -64.99103f, 2.553831f, 2.187363f, 3.282658f);
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "TheaterWepCheck");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2685.939f, -1360.082f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2689.12f, -1363.918f, 48.17015f, 0f, 0f, 39.667f, 1f, 1.110557f, 2.040186f);
			}
			break;
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-347.6901f, 704.0504f, 118.0073f, 0f, 0f, 14.63188f, 3.596706f, 3.045884f, 2.800292f, "TheaterWepCheck");
			}
			break;
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.5135f, -1362.535f, 44.1069f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "TheaterWepCheck");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1359.049f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, -791.2835f, -1366.186f, 43.89287f, 0f, 0f, 0f, 1.288786f, 1f, 2.321684f);
			}
			break;
	}
}

bool func_19(int iParam0, bool bParam1, bool bParam2)
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
		if (func_61())
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
		iVar0 = func_62(Global_1898164.f_1[0 /*5*/]);
		if (func_63(iVar0) && func_64(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_65(Global_1898164.f_1[0 /*5*/]))
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

float func_20(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

int func_21(int iParam0)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_22(var uParam0)
{
	return true;
}

void func_23(var uParam0)
{
}

bool func_24(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_67(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_25(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_66(iParam0))
	{
		return false;
	}
	if (!func_69(func_68(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		func_70(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_71(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_72(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_73(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_21(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_21(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_21(iParam0), false);
	}
	if (!func_73(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_21(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_26(int iParam0)
{
	int iVar0;

	iVar0 = func_21(iParam0);
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

void func_27(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_74(uParam0, iParam1, sParam2))
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

int func_28(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return 0;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
	}
	else
	{
		MAP::_BLIP_SET_STYLE(iVar0, iParam1);
	}
	if (bParam3)
	{
		if ((iParam1 == 408396114 || iParam1 == 1259054292) || iParam1 == -308585968)
		{
			MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
		}
	}
	return iVar0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MG_POKER"):
			return 3;
		case joaat("BLIP_MG_BLACKJACK"):
			return 1;
		case joaat("BLIP_FENCE_BUILDING"):
			return 7;
		case joaat("BLIP_MG_DOMINOES"):
			return 2;
		case joaat("BLIP_MG_FISHING"):
			return 59;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET"):
			return 4;
		case joaat("BLIP_SUMMER_COW"):
			return 5;
		case joaat("BLIP_MG_DOMINOES_ALL3S"):
			return 8;
		case joaat("BLIP_MG_DOMINOES_ALL5S"):
			return 9;
		case joaat("BLIP_MG_DOMINOES_DRAW"):
			return 10;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT"):
			return 11;
		case joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS"):
			return 12;
		case joaat("BLIP_PROC_LOANSHARK"):
			return 14;
		case joaat("BLIP_AMBIENT_HERD"):
			return 13;
		case joaat("BLIP_PROC_BOUNTY_POSTER"):
			return 16;
		case joaat("BLIP_AMBIENT_COACH"):
			return 17;
		case joaat("BLIP_AMBIENT_TRAIN"):
			return 18;
		case joaat("BLIP_AMBIENT_RIVERBOAT"):
			return 19;
		case joaat("BLIP_AMBIENT_QUARTERMASTER"):
			return 22;
		case joaat("BLIP_SHOP_STORE"):
			return 20;
		case joaat("BLIP_SHOP_SHADY_STORE"):
			return 21;
		case joaat("BLIP_SHOP_GUNSMITH"):
			return 23;
		case joaat("BLIP_SHOP_COACH_FENCING"):
			return 24;
		case joaat("BLIP_SHOP_DOCTOR"):
			return 25;
		case joaat("BLIP_SHOP_TAILOR"):
			return 26;
		case joaat("BLIP_SHOP_BLACKSMITH"):
			return 28;
		case joaat("BLIP_SHOP_TRAINER"):
			return 29;
		case joaat("BLIP_POST_OFFICE"):
			return 33;
		case joaat("BLIP_POST_OFFICE_REC"):
			return 34;
		case joaat("BLIP_SHOP_TRAIN"):
			return 30;
		case joaat("BLIP_SHOP_BARBER"):
			return 31;
		case joaat("BLIP_SHOP_BUTCHER"):
			return 32;
		case joaat("BLIP_SHOP_TACKLE"):
			return 35;
		case joaat("BLIP_SHOP_ANIMAL_TRAPPER"):
			return 36;
		case joaat("BLIP_SHOP_HORSE"):
			return 37;
		case joaat("BLIP_SHOP_HORSE_FENCING"):
			return 38;
		case joaat("BLIP_SHOP_HORSE_SADDLE"):
			return 39;
		case joaat("BLIP_PHOTO_STUDIO"):
			return 44;
		case joaat("BLIP_HOTEL_BED"):
			return 43;
		case joaat("BLIP_SALOON"):
			return 27;
		case joaat("BLIP_AMBIENT_NEWSPAPER"):
			return 40;
		case joaat("BLIP_SHOP_MARKET_STALL"):
			return 41;
		case joaat("BLIP_STABLE"):
			return 45;
		case joaat("BLIP_PROC_HOME"):
			return 46;
		case joaat("BLIP_PROC_HOME_LOCKED"):
			return 47;
		case joaat("BLIP_AMBIENT_TELEGRAPH"):
			return 49;
		case joaat("BLIP_AMBIENT_COACH_TAXI"):
			return 50;
		case joaat("BLIP_AMBIENT_THEATRE"):
			return 51;
		case joaat("BLIP_REGION_CARAVAN"):
			return 52;
		case joaat("BLIP_EVENT_APPLESEED"):
			return 53;
		case joaat("BLIP_EVENT_CASTOR"):
			return 54;
		case joaat("BLIP_EVENT_RAILROAD_CAMP"):
			return 55;
		case joaat("BLIP_EVENT_RIGGS_CAMP"):
			return 56;
		case joaat("BLIP_REGION_HIDEOUT"):
			return 57;
		case joaat("BLIP_TOWN"):
			return 62;
		default:
			break;
	}
	return 0;
}

void func_30(var uParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_75(Local_3.f_24);
	if (func_19(0, 0, 1) && func_15(36))
	{
		Local_3.f_33 = 1;
	}
	else
	{
		Local_3.f_33 = 0;
	}
	if (!Local_3.f_35)
	{
		if ((func_76(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) || LAW::_0xF46108C50A22B029()) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && !Global_1394141.f_1331))
		{
			Local_3.f_35 = 1;
		}
	}
	else if ((!func_76(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && !LAW::_0xF46108C50A22B029()) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		Local_3.f_35 = 0;
	}
	Local_3.f_36 = func_32(Global_35, Local_3.f_51, 1, 0);
	Local_3.f_37 = func_32(Global_35, Global_1394141.f_7[Global_40.f_9028[Local_3.f_24] /*31*/].f_4, 1, 0);
	func_77(uParam0, &Local_3);
	func_78(uParam0, &Local_3);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		if (!func_54(Local_3.f_25, 4096))
		{
			func_79(&(Local_3.f_25), 4096);
		}
		if (!Local_3.f_33)
		{
			if (Local_3 != 0)
			{
				Local_3 = 0;
			}
			return;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_134) && !Local_3.f_33)
	{
		return;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_134, 49, true);
	}
	bVar1 = func_60(45);
	if (Local_3.f_24 == 1 && bVar1)
	{
		uParam0->f_11 = 4;
	}
	if (Local_3.f_24 == 2 && !bVar1)
	{
		uParam0->f_11 = 4;
	}
	switch (Local_3)
	{
		case 0:
			if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
			{
				DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", true);
			}
			if (!func_52(uParam0->f_1))
			{
				func_80(uParam0->f_1, 1, 0, 0, 1, 1);
			}
			func_48(&Local_3, 0);
			func_81(uParam0, &Local_3, 0);
			func_82(uParam0, &Local_3, 0);
			func_83(uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 130, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 315, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 330, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 44, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 174, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_134, 448, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
			func_84(&(Local_3.f_73), 1);
			func_85(&(Local_3.f_73), 1);
			func_86(&(Local_3.f_73), 1);
			func_87(&(Local_3.f_73), 1);
			func_88(&(Local_3.f_73), 1);
			func_89(&(Local_3.f_73), 0);
			func_90(&(Local_3.f_73), 1);
			func_91(&(Local_3.f_73), 1);
			func_92(&(Local_3.f_73), 1);
			func_93(&(Local_3.f_73), 1);
			func_94(&(Local_3.f_73), 0);
			func_95(&(Local_3.f_73), 1);
			func_96(&(Local_3.f_73), 0);
			func_87(&(Local_3.f_73), 1);
			func_97(&(Local_3.f_73), 1);
			func_98(&(Local_3.f_73), 0);
			func_99(&(Local_3.f_73), 0);
			func_100(&(Local_3.f_73), 0);
			func_101(&(Local_3.f_73), 0);
			Global_1394141.f_1279[Local_3.f_24 /*8*/].f_6 = 0;
			if (func_102(Global_1347702[144 /*49*/].f_15, 1))
			{
				func_79(&(Global_40.f_9028.f_12), 1);
			}
			if (!func_51(func_49(Local_3.f_26), func_50(Local_3.f_24)))
			{
				Local_3.f_26 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
			}
			func_55(&(Local_3.f_25), 65536);
			func_103(&Local_3, 1);
			break;
		case 1:
			func_78(uParam0, &Local_3);
			func_104(uParam0, &Local_3);
			if ((Local_3.f_24 == 3 && !func_54(Local_3.f_25, 65536)) && func_105())
			{
				func_79(&(Local_3.f_25), 65536);
			}
			if (func_106(&(uParam0->f_125)))
			{
				if (func_107(&(uParam0->f_125)) > 1f)
				{
					func_108(&(uParam0->f_125));
				}
			}
			else
			{
				if (!func_110(func_109(uParam0->f_1)))
				{
					if (!uParam0->f_131[0])
					{
						uParam0->f_131[0] = 1;
					}
				}
				else if (uParam0->f_131[0])
				{
					uParam0->f_131[0] = 0;
				}
				if (!func_54(Local_3.f_25, 8))
				{
					if (!func_110(func_109(uParam0->f_1)))
					{
						if (!uParam0->f_131[1])
						{
							uParam0->f_131[1] = 1;
						}
					}
					else if (uParam0->f_131[1])
					{
						uParam0->f_131[1] = 0;
					}
				}
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_3.f_72) && PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_134, joaat("WORLD_HUMAN_SHOPKEEPER")))
			{
				Local_3.f_72 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_134, false);
			}
			func_111(uParam0);
			if ((bVar0 && uParam0->f_1 == 283) && !func_15(36))
			{
				func_112(uParam0, &Local_3);
			}
			else if (Local_3.f_33)
			{
			}
			else
			{
				func_113(&Local_3, uParam0);
				func_114(uParam0, &Local_3);
			}
			break;
		case 2:
			break;
	}
}

int func_31(bool bParam0)
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
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
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
		iVar2 = func_115(iVar9);
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
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

bool func_32(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_33(var uParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		return;
	}
	bVar0 = func_75(Local_3.f_24);
	if (((!func_54(Local_3.f_25, 16384) && func_11(uParam0->f_128[0])) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON"))) && !Global_1394141.f_1328)
	{
		func_116(&Local_3);
		if (bVar0)
		{
			uParam0->f_111 = "SHOW_ODDFELLOW";
			func_117(uParam0->f_128[0], uParam0->f_111, 0);
		}
		else if (func_118(&Local_3))
		{
			uParam0->f_111 = "SHOW_USE_TICKET";
			func_117(uParam0->f_128[0], uParam0->f_111, 0);
		}
		else
		{
			uParam0->f_111 = "SHOP_BUY_TICKET_PRICE";
			func_39(uParam0->f_128[0], uParam0->f_111, uParam0->f_117, 0);
		}
		func_79(&(Local_3.f_25), 16384);
	}
	if ((!func_54(Local_3.f_25, 262144) && !func_110(Local_3.f_24)) && !Global_1394141.f_1328)
	{
		func_119("SHOW_HLP_NOSHOW", 10000, 0, 0, 0, 1);
		func_79(&(Local_3.f_25), 262144);
	}
	if (!func_75(Local_3.f_24))
	{
		if (Local_3.f_33)
		{
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
			{
				func_82(uParam0, &Local_3, 1);
			}
		}
		if (func_54(Global_40.f_9028.f_12, 4) && !func_54(Global_40.f_9028.f_12, 8))
		{
			if (func_110(func_109(uParam0->f_1)) && !func_120(func_109(uParam0->f_1)))
			{
				func_82(uParam0, &Local_3, 1);
			}
		}
	}
}

void func_34(var uParam0)
{
	if (func_54(Local_3.f_25, 16384))
	{
		func_55(&(Local_3.f_25), 16384);
	}
}

float func_35(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

int func_36(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_121(iVar0, 2))
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
				func_122(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_37(int iParam0)
{
	return iParam0;
}

void func_38(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(6, sParam1, sParam2));
}

void func_39(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (uParam0->f_131[iParam1])
	{
		if (func_123(uParam0->f_128[iParam1], 0))
		{
			func_124(uParam0->f_128[iParam1], 0, 1);
		}
	}
	else
	{
		bVar0 = false;
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_134))
		{
			bVar0 = true;
		}
		if (!func_123(uParam0->f_128[iParam1], 0))
		{
			if (!bVar0 && !bParam2)
			{
				func_124(uParam0->f_128[iParam1], 1, 1);
			}
		}
		else if (bVar0 || bParam2)
		{
			func_124(uParam0->f_128[iParam1], 0, 1);
		}
	}
}

bool func_41(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_11(iParam0))
	{
		return false;
	}
	iVar0 = func_37(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_42(var uParam0)
{
	func_125(uParam0, 0f);
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_131[iParam1] = 1;
	func_124(uParam0->f_128[iParam1], 0, 1);
}

void func_44(var uParam0)
{
	if (!func_75(Local_3.f_24))
	{
		if (uParam0->f_117 > 0 && (func_126(1) >= uParam0->f_117 || func_118(&Local_3)))
		{
			func_79(&(Local_3.f_25), 4);
			func_82(uParam0, &Local_3, 1);
			func_127(uParam0, &Local_3, 1);
		}
	}
	else
	{
		func_79(&(Local_3.f_25), 4);
		func_82(uParam0, &Local_3, 1);
		func_127(uParam0, &Local_3, 1);
	}
}

void func_45(var uParam0)
{
	func_79(&(Local_3.f_25), 524288);
	uParam0->f_7 = 0;
	func_79(&(Local_3.f_25), 8);
	uParam0->f_131[0] = 0;
}

void func_46(var uParam0)
{
	if (func_11(uParam0->f_128[0]))
	{
		func_12(&(uParam0->f_128[0]), 1, 1);
	}
	if (func_11(uParam0->f_128[1]))
	{
		func_12(&(uParam0->f_128[1]), 1, 1);
	}
}

void func_47(var uParam0, char* sParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(*uParam0);
	uParam0->f_1 = 0;
}

void func_48(int iParam0, bool bParam1)
{
	if (iParam0->f_35 && !bParam1)
	{
		return;
	}
	switch (iParam0->f_24)
	{
		case 0:
			func_128(212326452, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-80890560, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-302077142, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-531755063, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_128(-2034821814, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-786191838, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-1518382426, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-223351546, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_128(235202295, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-71941542, 0, 0f, 0, 0, 0, 0, 0);
			func_128(-723815263, 0, 0f, 0, 0, 0, 0, 0);
			func_128(1920184275, 0, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			break;
		case 4:
			func_128(1373799284, 0, 0f, 0, 0, 0, 0, 0);
			func_128(1735175816, 0, 0f, 0, 0, 0, 0, 0);
			break;
	}
	iParam0->f_38 = 0;
}

char* func_49(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
		case 1:
			return "Post_Show_La_Bohemienne_Music";
		case 2:
			return "Post_Show_Rough_Riders_March_Music";
		case 3:
			return "Post_Show_The_Harlem_Rag_Music";
		case 4:
			return "Post_Show_The_Mississippi_Rag_Music";
		case 5:
			return "Pre_Show_Galop_du_Carnival_Music";
		case 6:
			return "Pre_Show_Ma_Ragtime_Baby_Music";
		case 7:
			return "Pre_Show_The_Bosn_Rag_Music";
		case 8:
			return "Pre_Show_The_Keyhole_in_the_Door_Music";
		case 9:
			return "Pre_Show_Walking_for_dat_Cake_Music";
		default:
			break;
	}
	return "Post_Show_Dars_Ragtime_on_de_Moon_Music";
}

char* func_50(int iParam0)
{
	if (iParam0 == 3)
	{
		return "wax_cylinder_show_music";
	}
	return "3235391231_intro";
}

bool func_51(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::_0x0556C784FA056628(sParam0, sParam1);
	if (iVar0 != -1 && AUDIO::IS_STREAM_PLAYING(iVar0))
	{
		return true;
	}
	return false;
}

bool func_52(int iParam0)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_66(iParam0))
	{
		return;
	}
	if (!func_129(iParam0, 1))
	{
		return;
	}
	if (!func_129(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_52(iParam0)) && func_130(iParam0))
	{
		return;
	}
	func_131(iParam0, 1);
	func_132(iParam0);
	if (func_69(func_68(iParam0)))
	{
		iVar0 = func_21(iParam0);
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
		func_131(iParam0, 16);
	}
	if (func_129(iParam0, 128) && !bParam3)
	{
		func_133(iParam0, 0);
	}
}

bool func_54(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_55(var uParam0, int iParam1)
{
	func_134(uParam0, iParam1);
}

void func_56(bool bParam0)
{
	TASK::TASK_CLEAR_LOOK_AT(bParam0);
	PED::_0xAAC0EE3B4999ABB5(bParam0, false);
}

void func_57(int iParam0)
{
	if (!func_135(iParam0))
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

bool func_58(int iParam0)
{
	int iVar0;

	iVar0 = func_136(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_59(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> /*16*/ sVar0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<18> /*144*/ sVar35;
	int iVar53;
	struct<9> /*72*/ sVar54;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;

	if (func_137(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35.f_14 = -1;
		Var35.f_15 = -1;
		Var35.f_16 = -1;
		Var35.f_17 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
		}
		iVar53 = 0;
		if (func_138(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar53 = (iVar53 + Var0[iVar32 /*2*/].f_1);
					Jump @253; //curOff = 225
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var54 = -1;
		Var54.f_1 = -1;
		Var54.f_2 = -1;
		Var54.f_3 = -1;
		Var54.f_4 = -1;
		Var54.f_5 = -1;
		Var54.f_6 = -1;
		Var54.f_7 = -1;
		Var54.f_8 = -1;
		iVar68 = func_139(iParam0, 862142561);
		if (iVar68 != 0)
		{
			Var54.f_8 = iVar68;
			iVar65 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&Var54, &iVar64, 1);
			if (iVar65 != -1)
			{
				iVar66 = 0;
				while (iVar66 < iVar64)
				{
					iVar67 = func_140(iVar66, iVar65);
					if (func_141(iVar67, 0) && iVar67 != iParam0)
					{
						if (bParam4)
						{
							iVar53 = (iVar53 + func_59(iVar67, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar67;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar53 = (iVar53 + func_59(iVar67, -915411861, 1, 0, 0));
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar66++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar65);
			}
		}
		return iVar53;
	}
	if (!func_138(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_60(int iParam0)
{
	if (!func_142(iParam0))
	{
		return false;
	}
	return func_143(iParam0);
}

bool func_61()
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

int func_62(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	return func_145(func_144(iParam0));
}

bool func_63(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_65(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_66(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

void func_67(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(bParam1));
	if (!bParam7)
	{
		if (func_146(bParam1))
		{
			func_147(bParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(bParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(bParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(bParam0, WEAPON::_0xD42514C182121C23(bParam1));
		}
		if (PED::IS_PED_MALE(bParam0) && !bParam3)
		{
			func_148(bParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(bParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(bParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_149(bParam0, 0);
			bVar0 = true;
		}
		func_150(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

int func_68(int iParam0)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_69(int iParam0)
{
	return iParam0 != 0;
}

int func_70(int iParam0, bool bParam1)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (!func_129(iParam0, 2))
	{
		return 0;
	}
	if (func_129(iParam0, 32) && !bParam1)
	{
		func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_68(iParam0)));
		if (func_152() == -1)
		{
			if (func_129(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_21(iParam0));
				func_131(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_21(iParam0));
		}
		return 0;
	}
	if (!func_153(iParam0) && func_152() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		func_131(iParam0, 128);
		return 1;
	}
	func_151(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_68(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_21(iParam0));
	if (func_129(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_21(iParam0));
		func_131(iParam0, 2048);
	}
	return 1;
}

bool func_71(int iParam0, bool bParam1)
{
	if (func_152() != -1)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_26(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_21(iParam0));
}

bool func_72(int iParam0)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_21(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_21(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_73(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_74(var uParam0, int iParam1, char* sParam2)
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

bool func_75(int iParam0)
{
	if (func_54(Global_1394141.f_1326, 16) && iParam0 == 0)
	{
		return true;
	}
	if ((func_54(Global_40.f_9028.f_12, 1) && !func_54(Global_40.f_9028.f_12, 2)) && iParam0 == 0)
	{
		return true;
	}
	return false;
}

int func_76(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_154(bParam1, bParam2, bParam3);
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

void func_77(var uParam0, var uParam1)
{
	if (uParam1->f_35 || uParam1->f_34)
	{
		if (!func_155(uParam0))
		{
			func_83(uParam0, 1);
			func_81(uParam0, uParam1, 0);
		}
		if (!uParam1->f_38)
		{
			func_156(uParam1);
		}
		else if (func_157(uParam1, 0))
		{
			uParam1->f_38 = 0;
			func_48(uParam1, 1);
		}
	}
	else
	{
		if (func_155(uParam0))
		{
			func_83(uParam0, 0);
		}
		if (uParam1->f_38)
		{
			func_48(uParam1, 0);
		}
	}
}

void func_78(var uParam0, var uParam1)
{
	switch (uParam1->f_8)
	{
		case 0:
			if (!func_110(func_109(uParam0->f_1)))
			{
				func_158(&(uParam1->f_2), 5);
				func_159(&(uParam1->f_8), 3);
			}
			else
			{
				if (func_160(uParam0, uParam1))
				{
				}
				if (Global_1394141.f_1328)
				{
					func_159(&(uParam1->f_8), 1);
				}
			}
			break;
		case 1:
			if ((Global_1394141.f_1330 && uParam1->f_2 < 5) && uParam1->f_2 != 0)
			{
				func_158(&(uParam1->f_2), 5);
			}
			if (Global_1394141.f_1329)
			{
				func_159(&(uParam1->f_8), 2);
			}
			break;
		case 2:
			if (Global_1394141.f_1329)
			{
				if (func_160(uParam0, uParam1))
				{
					func_159(&(uParam1->f_8), 3);
				}
			}
			else
			{
				func_159(&(uParam1->f_8), 1);
			}
			if (!Global_1394141.f_1328)
			{
				if (func_160(uParam0, uParam1))
				{
					func_159(&(uParam1->f_8), 3);
				}
			}
			break;
		case 3:
			if (func_110(func_109(uParam0->f_1)))
			{
				func_159(&(uParam1->f_8), 0);
			}
			break;
	}
	func_161(uParam0, uParam1);
}

void func_79(var uParam0, int iParam1)
{
	func_162(uParam0, iParam1);
}

int func_80(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_163(iParam0, 1))
	{
		return 0;
	}
	if (func_69(func_68(iParam0)))
	{
		iVar1 = func_21(iParam0);
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
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_52(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_164(iParam0, 1);
	func_165(iParam0);
	if (bParam3)
	{
		func_164(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_3 = iParam2;
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_4 = iParam2;
}

void func_82(var uParam0, int iParam1, int iParam2)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_2 = iParam2;
}

void func_83(var uParam0, int iParam1)
{
	Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5 = iParam1;
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 4);
	}
	else
	{
		func_167(&(uParam0->f_1), 4);
	}
}

void func_85(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 2);
	}
	else
	{
		func_167(&(uParam0->f_1), 2);
	}
}

void func_86(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 2048);
	}
	else
	{
		func_167(&(uParam0->f_1), 2048);
	}
}

void func_87(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 16384);
	}
	else
	{
		func_167(&(uParam0->f_1), 16384);
	}
}

void func_88(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 1);
	}
	else
	{
		func_167(&(uParam0->f_1), 1);
	}
}

void func_89(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 128);
	}
	else
	{
		func_166(uParam0, 128);
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 8);
	}
	else
	{
		func_167(&(uParam0->f_1), 8);
	}
}

void func_91(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 32);
	}
	else
	{
		func_166(uParam0, 32);
	}
}

void func_92(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 256);
	}
	else
	{
		func_166(uParam0, 256);
	}
}

void func_93(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 16);
	}
	else
	{
		func_167(&(uParam0->f_1), 16);
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 16);
	}
	else
	{
		func_166(uParam0, 67108864);
		func_166(uParam0, 16);
	}
}

void func_95(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 8);
	}
	else
	{
		func_166(uParam0, 8);
	}
}

void func_96(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 256);
	}
	else
	{
		func_167(&(uParam0->f_1), 256);
	}
}

void func_97(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 524288);
	}
	else
	{
		func_167(&(uParam0->f_1), 524288);
	}
}

void func_98(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 4);
	}
	else
	{
		func_166(uParam0, 4);
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 1024);
	}
	else
	{
		func_167(&(uParam0->f_1), 1024);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_166(&(uParam0->f_1), 131072);
	}
	else
	{
		func_167(&(uParam0->f_1), 131072);
	}
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 2);
	}
	else
	{
		func_166(uParam0, 2);
	}
}

bool func_102(int iParam0, bool bParam1)
{
	switch (func_136(iParam0))
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

void func_103(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_104(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam1->f_7)
	{
		case 0:
			if (uParam1->f_36 && !uParam1->f_37)
			{
				func_168(&(uParam1->f_7), 1);
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(1664736751);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (func_169(uParam0->f_134, 0, 0, 0))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					uParam1->f_34 = 1;
				}
			}
			else if (!uParam1->f_34)
			{
				if (((WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT_1")) && iVar0 != joaat("OBJECT_2"))
				{
					func_170(0);
				}
				if (((WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT_1")) && iVar0 != joaat("OBJECT_2"))
				{
					func_170(1);
				}
			}
			if ((((!uParam1->f_36 || uParam1->f_37) || uParam1->f_35) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || uParam1->f_34)
			{
				func_168(&(uParam1->f_7), 2);
			}
			break;
		case 2:
			if ((!uParam1->f_35 && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && !uParam1->f_34)
			{
				func_168(&(uParam1->f_7), 0);
			}
			break;
	}
}

bool func_105()
{
	int iVar0;
	bool bVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-348.416f, 699.4218f, 117.6852f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		bVar1 = true;
		if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_closed"))
		{
			INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_closed", 0);
			bVar1 = false;
		}
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "val_magiclantern_intgroup_open"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "val_magiclantern_intgroup_open", true);
			bVar1 = false;
		}
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

bool func_106(var uParam0)
{
	return func_171(*uParam0, 1);
}

float func_107(var uParam0)
{
	if (!func_106(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_172(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_173() - uParam0->f_1);
}

void func_108(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 0;
		case 284:
			if (func_60(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 525:
			return 4;
		case 33:
			return 3;
	}
	return -1;
}

bool func_110(int iParam0)
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_3;
}

void func_111(var uParam0)
{
	vector3 vVar0;

	if (uParam0->f_1 == 33)
	{
		if (func_110(func_109(33)))
		{
			if (!func_174(1015669983) || func_120(3))
			{
				func_175(1015669983);
			}
		}
		else if (!Global_1394141.f_1328 && func_174(1015669983))
		{
			vVar0 = { -352.0567f, 704.7408f, 117.9537f };
			if (func_20(Global_35, vVar0, 1) > 30f)
			{
				func_176(1015669983);
			}
		}
	}
}

int func_112(var uParam0, int iParam1)
{
	if (!Global_1394141.f_1328)
	{
		if (func_54(Global_1394141.f_1326, 16) && func_20(Global_35, func_13(uParam0->f_1), 1) > 40f)
		{
			func_55(&(Global_1394141.f_1326), 16);
			if (iParam1->f_1 < 11)
			{
				func_177(&(iParam1->f_1), 11);
			}
		}
	}
	switch (iParam1->f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_178(0), false);
			STREAMING::REQUEST_MODEL(func_178(1), false);
			func_177(&(iParam1->f_1), 1);
			break;
		case 1:
			if (!func_182(&(iParam1->f_10[0 /*3*/]), func_179(0), func_181(func_180()), 1))
			{
				return 0;
			}
			if (!func_182(&(iParam1->f_10[1 /*3*/]), func_179(1), func_183(), 1))
			{
				return 0;
			}
			if (!func_182(&(iParam1->f_10[2 /*3*/]), func_179(2), func_184(2), 1))
			{
				return 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_178(0)) && !STREAMING::HAS_MODEL_LOADED(func_178(1)))
			{
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
			{
				iParam1->f_53[0] = OBJECT::CREATE_OBJECT(func_178(0), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
			{
				iParam1->f_53[1] = OBJECT::CREATE_OBJECT(func_178(1), 2542.248f, -1281.838f, 49.28225f, true, true, false, false, true);
			}
			if (!func_180() && ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam1->f_10[0 /*3*/], "b_playerArthur", true, false);
			}
			func_185(iParam1);
			func_177(&(iParam1->f_1), 2);
			break;
		case 2:
			if (func_32(Global_35, iParam1->f_59[1], 1, 0) && func_54(iParam1->f_25, 4))
			{
				func_55(&(iParam1->f_25), 4);
				func_177(&(iParam1->f_1), 3);
			}
			break;
		case 3:
			func_186(uParam0, &(iParam1->f_10[0 /*3*/]));
			func_177(&(iParam1->f_1), 4);
			break;
		case 4:
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[0 /*3*/], false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[0 /*3*/]) > 0.85f)
			{
				func_82(uParam0, iParam1, 1);
				func_177(&(iParam1->f_1), 5);
			}
			break;
		case 5:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (func_54(Global_1394141.f_1326, 32) && func_32(Global_35, iParam1->f_59[0], 1, 0))
			{
				func_177(&(iParam1->f_1), 6);
			}
			break;
		case 6:
			func_187(uParam0, &(iParam1->f_10[1 /*3*/]), iParam1);
			func_177(&(iParam1->f_1), 7);
			break;
		case 7:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") || ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[1 /*3*/]) > 0.5f))
			{
				func_177(&(iParam1->f_1), 8);
			}
			break;
		case 8:
			if (func_20(Global_35, func_13(uParam0->f_1), 1) > 30f)
			{
				func_177(&(iParam1->f_1), 10);
				return 0;
			}
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
			if (!func_11(iParam1->f_70[0]))
			{
				iParam1->f_70[0] = func_188("TAKE_LETTER", joaat("INPUT_CONTEXT_Y"), iParam1->f_59[1], 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (func_41(iParam1->f_70[0], 1))
			{
				func_12(&(iParam1->f_70[0]), 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 2541.031f, -1281.497f, 49.21795f, 1f, 20000, 0.25f, 0, -136.15f);
				func_177(&(iParam1->f_1), 9);
			}
			break;
		case 9:
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
				TASK::TASK_STAND_STILL(uParam0->f_134, -1);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 8 || func_20(Global_35, 2541.031f, -1281.497f, 49.21795f, 1) < 0.5f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_189(uParam0, &(iParam1->f_10[2 /*3*/]), iParam1);
				func_177(&(iParam1->f_1), 10);
			}
			break;
		case 10:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
			{
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
				{
					if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[1 /*3*/], false))
					{
						if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iParam1->f_10[1 /*3*/], "s_m_m_sdticketseller_01") && TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, -982327190, true) != 1)
						{
							ENTITY::SET_ENTITY_COORDS(uParam0->f_134, 2552.9f, -1284.376f, 48.21795f, true, false, true, true);
							TASK::TASK_STAND_STILL(uParam0->f_134, -1);
						}
					}
					else
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
					}
				}
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false)) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[0 /*3*/], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[2 /*3*/], false)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[2 /*3*/]) > 0.5f)
			{
				if (!func_54(iParam1->f_25, 131072))
				{
					func_190(joaat("DOCUMENT_ODDFELLOWS_LETTER"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					func_191(4000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_53[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam1->f_53[1]));
					}
					func_79(&(iParam1->f_25), 131072);
				}
			}
			if (func_20(Global_35, func_13(uParam0->f_1), 1) > 30f)
			{
				func_177(&(iParam1->f_1), 11);
			}
			break;
		case 11:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[0 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[1 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1->f_10[2 /*3*/], true, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
			}
			if (func_11(iParam1->f_70[0]))
			{
				func_12(&(iParam1->f_70[0]), 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[0]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_53[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[1]))
			{
				OBJECT::DELETE_OBJECT(&(iParam1->f_53[1]));
			}
			func_55(&(Global_1394141.f_1326), 16);
			func_177(&(iParam1->f_1), 12);
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_113(var uParam0, var uParam1)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (func_54(uParam0->f_25, 524288))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && func_193(Global_35, "WHATS_PLAYING", 291934926, uParam1->f_134, 1, func_192(func_180()), 0, 1))
				{
					func_42(&(uParam0->f_39));
					func_194(&(uParam0->f_9), 1);
				}
			}
			break;
		case 1:
			if (!func_195(0f) && func_107(&(uParam0->f_39)) > 2f)
			{
				func_194(&(uParam0->f_9), 2);
			}
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && func_193(uParam1->f_134, func_196(Global_40.f_9028[uParam0->f_24]), 291934926, Global_35, 1, func_197(uParam1->f_1), 0, 1))
			{
				func_42(&(uParam0->f_39));
				func_194(&(uParam0->f_9), 3);
			}
			break;
		case 3:
			if ((!AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_134) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && func_107(&(uParam0->f_39)) > 3f)
			{
				func_42(&(uParam0->f_39));
				func_55(&(uParam0->f_25), 8);
				func_194(&(uParam0->f_9), 4);
			}
			break;
		case 4:
			if (func_107(&(uParam0->f_39)) > 45f)
			{
				func_42(&(uParam0->f_39));
				func_194(&(uParam0->f_9), 5);
			}
			break;
		case 5:
			if (!Global_1394141.f_1328)
			{
				func_55(&(uParam0->f_25), 524288);
				uParam1->f_7 = 1;
				uParam1->f_131[1] = 0;
				func_194(&(uParam0->f_9), 0);
			}
			break;
	}
}

void func_114(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 150f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		fVar0 = func_35(Global_35, uParam0->f_134, 1, 1);
	}
	bVar1 = false;
	if (func_198(uParam0->f_134, 1, 1, 1, 0, 0) || func_199(uParam0->f_134, 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))
	{
		if (PED::GET_PED_RESET_FLAG(Global_35, 311))
		{
			bVar1 = true;
		}
	}
	if ((iParam1->f_34 && !bVar1) && fVar0 > 40f)
	{
		iParam1->f_34 = 0;
	}
	if ((iParam1->f_3 >= 3 && iParam1->f_3 != 7) && fVar0 < 40f)
	{
		if (iParam1->f_35 || func_200(uParam0->f_134, 0, &(iParam1->f_73), &(iParam1->f_101), 0, 0))
		{
			if (iParam1->f_3 == 3)
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_134, iParam1->f_10[3 /*3*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134);
					func_201(iParam1, 0);
					func_202(&(iParam1->f_3), 4);
					func_42(&(iParam1->f_67));
					func_203(&(iParam1->f_6), 3);
				}
				else
				{
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
					func_202(&(iParam1->f_3), 7);
				}
			}
		}
	}
	if (iParam1->f_5 != -1)
	{
		if (((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iParam1->f_10[3 /*3*/], func_204(iParam1->f_5))) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(iParam1->f_4)))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(iParam1->f_10[3 /*3*/], func_204(iParam1->f_5));
			iParam1->f_5 = -1;
		}
	}
	if (func_54(iParam1->f_25, 4096))
	{
		iParam1->f_3 = 9;
		func_55(&(iParam1->f_25), 4096);
	}
	switch (iParam1->f_3)
	{
		case 0:
			iParam1->f_28 = 1;
			iParam1->f_30 = 1;
			func_116(iParam1);
			func_201(iParam1, 10);
			func_205(iParam1);
			func_206(&(iParam1->f_59[2]), &(iParam1->f_59[3]), func_109(uParam0->f_1));
			func_202(&(iParam1->f_3), 1);
			break;
		case 1:
			if (!func_182(&(iParam1->f_10[3 /*3*/]), func_179(3), func_204(10), 1))
			{
				return;
			}
			if (!func_207(iParam1))
			{
				return;
			}
			if (!func_208(iParam1, ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), func_109(uParam0->f_1)))
			{
				return;
			}
			func_202(&(iParam1->f_3), 2);
			break;
		case 2:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[3 /*3*/]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
				func_209(iParam1, func_109(uParam0->f_1));
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1->f_10[3 /*3*/], func_210(func_109(uParam0->f_1)), func_211(func_109(uParam0->f_1)), 2);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_178(2));
				func_202(&(iParam1->f_3), 3);
			}
			break;
		case 3:
			if (bVar1)
			{
				func_82(uParam0, iParam1, 0);
				func_127(uParam0, iParam1, 0);
				func_81(uParam0, iParam1, 0);
				func_201(iParam1, 0);
				func_202(&(iParam1->f_3), 4);
				func_42(&(iParam1->f_67));
				iParam1->f_34 = 1;
				Global_1394141.f_1279[iParam1->f_24 /*8*/].f_6 = 1;
				func_203(&(iParam1->f_6), 3);
			}
			func_212(uParam0, iParam1, bVar1, fVar0);
			break;
		case 4:
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false))
			{
				if (!func_213(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4)))
				{
					return;
				}
				func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_10[3 /*3*/]);
				func_202(&(iParam1->f_3), 3);
			}
			else
			{
				if (!func_213(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4)))
				{
					return;
				}
				if (iParam1->f_4 == 5 || iParam1->f_4 == 4)
				{
					bVar2 = false;
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						func_170(0);
						bVar2 = true;
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 1, false) && iVar3 != joaat("WEAPON_UNARMED"))
					{
						func_170(1);
						bVar2 = true;
					}
					if (!bVar2)
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam1->f_10[3 /*3*/], "ARTHUR", func_204(iParam1->f_4), 1069379748 /* Float: 1.48f */, false, 0, 20000, -1082130432 /* Float: -1f */);
						func_202(&(iParam1->f_3), 5);
					}
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_10[3 /*3*/], "SHOPKEEPER", uParam0->f_134, 0);
					if (iParam1->f_4 == 0 || iParam1->f_4 == 1)
					{
						func_42(&(iParam1->f_64));
						func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
						func_202(&(iParam1->f_3), 7);
					}
					else
					{
						func_42(&(iParam1->f_67));
						func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
						func_202(&(iParam1->f_3), 3);
					}
				}
			}
			if (((iParam1->f_4 != 5 && iParam1->f_4 != 4) && iParam1->f_4 != 9) && iParam1->f_4 != 10)
			{
				func_193(uParam0->f_134, func_215(iParam1->f_4, 0), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x337F1CC8EE895601(iParam1->f_10[3 /*3*/], "ARTHUR"))
			{
				func_214(&(iParam1->f_10[3 /*3*/]), func_204(iParam1->f_4), func_204(iParam1->f_4));
				func_202(&(iParam1->f_3), 6);
			}
			break;
		case 6:
			if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1->f_10[3 /*3*/], false) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(iParam1->f_4))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 0.267f)
			{
				if (func_118(iParam1))
				{
					func_216(iParam1);
					func_55(&(iParam1->f_25), 16384);
				}
				else
				{
					func_193(Global_35, "TICKET_PLEASE", 291934926, uParam0->f_134, 1, func_192(func_180()), 0, 1);
					func_217(uParam0->f_117, 0, 0, 1, 1);
				}
				func_202(&(iParam1->f_3), 3);
			}
			break;
		case 7:
			if (!func_54(iParam1->f_25, 8192))
			{
				if (!iParam1->f_35)
				{
					func_218(uParam0);
				}
				func_79(&(iParam1->f_25), 8192);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_134, 474215631, true) != 1)
			{
				if (((func_219(&(iParam1->f_64)) > 5f && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(1))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(3))) && !ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(0)))
				{
					TASK::TASK_COWER(uParam0->f_134, -1, Global_35, 0);
				}
			}
			if (!iParam1->f_35 && !iParam1->f_34)
			{
				func_220(uParam0, iParam1);
				func_202(&(iParam1->f_3), 0);
				return;
			}
			if ((func_219(&(iParam1->f_64)) > 10f && !func_221(1)) && !func_54(iParam1->f_25, 32))
			{
				func_201(iParam1, 1);
				func_79(&(iParam1->f_25), 32);
				func_42(&(iParam1->f_64));
				func_202(&(iParam1->f_3), 4);
			}
			if ((!func_54(iParam1->f_25, 134217728) && !func_221(1)) && MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_134, true, false), 2f, true, true))
			{
				func_193(uParam0->f_134, "GENERIC_SHOCKED_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(iParam1->f_25), 134217728);
			}
			if ((func_219(&(iParam1->f_64)) > 15f && !func_221(1)) && !func_54(iParam1->f_25, 67108864))
			{
				func_193(uParam0->f_134, "HELP_SHOUT", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(iParam1->f_25), 67108864);
			}
			break;
		case 9:
			func_220(uParam0, iParam1);
			func_202(&(iParam1->f_3), 0);
			break;
		case 8:
			break;
		case 10:
			break;
	}
}

int func_115(int iParam0)
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

void func_116(var uParam0)
{
	if (!uParam0->f_48 && func_222(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0))
	{
		uParam0->f_48 = 1;
	}
	if (!uParam0->f_49 && func_222(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0))
	{
		uParam0->f_49 = 1;
	}
	if (!uParam0->f_50 && func_222(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0))
	{
		uParam0->f_50 = 1;
	}
}

void func_117(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

bool func_118(int iParam0)
{
	switch (iParam0->f_24)
	{
		case 1:
		case 3:
			if (iParam0->f_49)
			{
				return true;
			}
			break;
		case 2:
		case 4:
			if (iParam0->f_50)
			{
				return true;
			}
			break;
		case 0:
			if (iParam0->f_48)
			{
				return true;
			}
			break;
	}
	return false;
}

var func_119(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_120(int iParam0)
{
	return Global_1394141.f_1279[iParam0 /*8*/].f_2;
}

bool func_121(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_122(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_223(iParam0, 1);
	func_224(iParam0, 1);
	func_225(iParam0, 128);
}

bool func_123(int iParam0, bool bParam1)
{
	if (bParam1 && !func_11(iParam0))
	{
		return false;
	}
	return !func_121(iParam0, 4);
}

void func_124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_11(iParam0))
	{
		return;
	}
	iVar0 = func_37(iParam0);
	if (bParam1)
	{
		func_226(iParam0, 4);
		func_223(iVar0, 1);
		func_224(iVar0, 1);
	}
	else
	{
		func_225(iParam0, 4);
		func_224(iVar0, 0);
	}
}

void func_125(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_173() - fParam1);
	func_227(uParam0, 1);
	func_228(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_126(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_127(var uParam0, int iParam1, bool bParam2)
{
	if (DECORATOR::DECOR_EXIST_ON(uParam0->f_134, "bUpdatedPlayer"))
	{
		DECORATOR::DECOR_SET_BOOL(uParam0->f_134, "bUpdatedPlayer", bParam2);
	}
	iParam1->f_32 = bParam2;
}

void func_128(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_229(iParam0, 0, 0);
	if (func_230(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_231(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_232(iParam0, 1);
			}
			else
			{
				func_233(iParam0, 1);
			}
		}
		else
		{
			func_234(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_235())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_129(int iParam0, int iParam1)
{
	if (func_152() != -1)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_130(int iParam0)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_131(int iParam0, int iParam1)
{
	if (func_152() != -1)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_132(int iParam0)
{
	int iVar0;

	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_26(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_133(int iParam0, bool bParam1)
{
	if (!func_66(iParam0))
	{
		return 0;
	}
	if (!func_129(iParam0, 2))
	{
		return 0;
	}
	if (func_68(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iParam0)))
	{
		return 1;
	}
	if (func_129(iParam0, 1) && !bParam1)
	{
		func_164(iParam0, 128);
		return 1;
	}
	func_131(iParam0, 129);
	func_132(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_21(iParam0));
	func_151(iParam0, 0);
	return 1;
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_135(int iParam0)
{
	return func_121(iParam0, 2);
}

int func_136(int iParam0)
{
	if (!func_65(iParam0))
	{
		return -1;
	}
	return func_236(iParam0);
}

bool func_137(int iParam0, int iParam1)
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

bool func_138(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	iVar47 = 0;
	while (iVar47 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar47 /*2*/]) = { Var0.f_4[iVar47 /*2*/] };
		iVar47++;
	}
	if (bParam4)
	{
		func_237(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_139(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_0xD389A2549C4EFB30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_0x8750F69A720C2E41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_142(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_144(int iParam0)
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

int func_145(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_146(bool bParam0)
{
	switch (bParam0)
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

void func_147(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_238(bParam0, iParam1))
		{
			if (func_239(bParam0, iParam1))
			{
				if (func_240(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_241(bParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(bParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(bParam0, 9);
		}
	}
}

void func_148(bool bParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(bParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_149(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(bParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_150(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

void func_151(int iParam0, int iParam1)
{
	if (!func_66(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

int func_152()
{
	return Global_1572887.f_12;
}

bool func_153(int iParam0)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	if (!func_129(iParam0, 2))
	{
		return false;
	}
	return true;
}

int func_154(bool bParam0, bool bParam1, bool bParam2)
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

bool func_155(var uParam0)
{
	return Global_1394141.f_1279[func_109(uParam0->f_1) /*8*/].f_5;
}

void func_156(var uParam0)
{
	if (func_157(uParam0, 1))
	{
		if (func_242(uParam0->f_24))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
			}
			if (!func_243(Global_35, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_244(uParam0->f_24), 1f, 20000, 0.25f, 0, 40000f);
			}
		}
		return;
	}
	if (func_243(Global_35, 713668775))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	switch (uParam0->f_24)
	{
		case 0:
			func_128(212326452, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-80890560, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-302077142, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-531755063, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 1:
			func_128(-2034821814, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-786191838, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-1518382426, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-223351546, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 2:
			func_128(235202295, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-71941542, 1, 0f, 0, 0, 0, 0, 0);
			func_128(-723815263, 1, 0f, 0, 0, 0, 0, 0);
			func_128(1920184275, 1, 0f, 0, 0, 0, 0, 0);
			break;
		case 3:
			func_105();
			break;
		case 4:
			func_128(1373799284, 1, 0f, 0, 0, 0, 0, 0);
			func_128(1735175816, 1, 0f, 0, 0, 0, 0, 0);
			break;
	}
	uParam0->f_38 = 1;
}

bool func_157(var uParam0, bool bParam1)
{
	if (uParam0->f_36 || uParam0->f_37)
	{
		return true;
	}
	if (bParam1 && func_32(Global_35, uParam0->f_52, 1, 0))
	{
		return true;
	}
	return false;
}

void func_158(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_160(var uParam0, var uParam1)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_134))
	{
		fVar0 = func_35(Global_35, uParam0->f_134, 1, 1);
	}
	else
	{
		fVar0 = 150f;
	}
	if (fVar0 < 30f)
	{
		if (((uParam1->f_2 == 6 || uParam1->f_2 == 5) || uParam1->f_2 == 0) && (Global_1394141.f_1328 || func_110(uParam1->f_24)))
		{
			func_158(&(uParam1->f_2), 1);
			return false;
		}
	}
	else if (fVar0 > 40f)
	{
		if (uParam1->f_2 != 5 && uParam1->f_2 != 6)
		{
			func_158(&(uParam1->f_2), 5);
			return true;
		}
	}
	return false;
}

void func_161(var uParam0, var uParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	switch (uParam1->f_2)
	{
		case 0:
			break;
		case 1:
			if ((func_110(func_109(uParam0->f_1)) || Global_1394141.f_1328) && func_35(Global_35, uParam0->f_134, 1, 1) < 30f)
			{
				if (AUDIO::LOAD_STREAM(func_49(uParam1->f_26), func_50(uParam1->f_24)))
				{
					func_158(&(uParam1->f_2), 2);
				}
			}
			break;
		case 2:
			AUDIO::PLAY_STREAM_FROM_POSITION(func_245(uParam0->f_1), AUDIO::_0x0556C784FA056628(func_49(uParam1->f_26), func_50(uParam1->f_24)));
			func_158(&(uParam1->f_2), 3);
			break;
		case 3:
			if (!AUDIO::IS_STREAM_PLAYING(AUDIO::_0x0556C784FA056628(func_49(uParam1->f_26), func_50(uParam1->f_24))))
			{
				func_158(&(uParam1->f_2), 4);
			}
			break;
		case 4:
			uParam1->f_26++;
			if (uParam1->f_26 >= 10)
			{
				uParam1->f_26 = 0;
			}
			func_158(&(uParam1->f_2), 1);
			break;
		case 5:
			if (func_51(func_49(uParam1->f_26), func_50(uParam1->f_24)))
			{
				AUDIO::STOP_STREAM(AUDIO::_0x0556C784FA056628(func_49(uParam1->f_26), func_50(uParam1->f_24)));
				func_158(&(uParam1->f_2), 6);
			}
			break;
		case 6:
			break;
	}
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_163(int iParam0, bool bParam1)
{
	if (!func_66(iParam0))
	{
		return false;
	}
	if ((func_129(iParam0, 1) && !func_52(iParam0)) && func_130(iParam0))
	{
		return false;
	}
	if (!func_129(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_71(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_164(int iParam0, int iParam1)
{
	if (func_152() != -1)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_165(int iParam0)
{
	if (!func_66(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_166(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_167(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_168(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_169(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_246(16))
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
					func_247(16);
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

void func_170(bool bParam0)
{
	int iVar0;

	iVar0 = func_248(Global_35, 0, bParam0, 0);
	if (func_249(iVar0))
	{
		if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iVar0))
		{
			WEAPON::_DROP_CURRENT_PED_WEAPON(Global_35, true, bParam0, true, false);
		}
		else if (func_250(iVar0))
		{
			if (func_249(func_248(Global_35, 0, 7, 0)) || func_249(func_248(Global_35, 0, 9, 0)))
			{
				if (func_249(func_248(Global_35, 0, 8, 0)))
				{
					func_251(iVar0);
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
			if (func_249(func_248(Global_35, 0, 7, 0)) || func_249(func_248(Global_35, 0, 9, 0)))
			{
				if (func_249(func_248(Global_35, 0, 10, 0)))
				{
					func_251(iVar0);
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
				if (!func_249(func_248(Global_35, 0, 2, 0)))
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

bool func_171(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_172(var uParam0)
{
	return func_171(*uParam0, 2);
}

float func_173()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_252(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_252(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40497[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_252(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40497.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_177(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_LETTER03X");
		case 1:
			return joaat("P_MONEYSTACK01X");
		case 2:
			return joaat("P_COINSTACK02");
		case 3:
			return joaat("P_FOLDEDBILLSXSMALL01BX");
		case 4:
			return joaat("P_CS_ADMITTICKET01X");
		default:
			break;
	}
	return 0;
}

char[] func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@roddf@ig@roddf_s3@ig2_boxofficegreet";
		case 1:
			return "script@rcm@roddf@ig@roddf_s3@ig3_boxofficeleave";
		case 2:
			return "script@rcm@roddf@ig@roddf_s3@ig4_boxofficecollect";
		case 3:
			return "script@shows@magic_lantern@ig1_ticket_collector@action";
		default:
			break;
	}
	return "[THEATER_TT_GET_ANIM_SCENE_NAME] - FAIL -- 0";
}

bool func_180()
{
	if (func_152() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

char* func_181(bool bParam0)
{
	if (bParam0 && func_253(144, 1))
	{
		return "pl_Conv_TicketTeller_John";
	}
	return "pl_Conv_TicketTeller_Arthur";
}

bool func_182(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return true;
	}
	if (!uParam0->f_1 && !ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam3)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		uParam0->f_1 = 1;
	}
	return false;
}

char* func_183()
{
	return "pl_Convo_LetterPickup";
}

char* func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_45L";
		case 1:
			return "pl_Enter_45R";
		case 2:
			return "pl_Enter_F_NoWalk";
		case 3:
			return "pl_Enter_F_Walk";
		default:
			break;
	}
	return "[THEATER_TT_GET_ODDF_COLLECT_PLAYLIST] -- FAIL -- 1";
}

void func_185(var uParam0)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	int iVar12;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar12 = iVar0;
		Var1 = { func_254(iVar12) };
		uParam0->f_59[iVar12] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var1.f_10, Var1, Var1.f_3, Var1.f_6, Var1.f_9);
		iVar0++;
	}
}

void func_186(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);
	if (!func_180())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_255(uParam1, "b_playerArthur", 1, "IG2");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

void func_187(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "s_m_m_sdticketseller_01", uParam0->f_134, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "P_CS_LETTER03X", iParam2->f_53[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_53[1], 0);
	}
	if (!func_180())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "ARTHUR", Global_35, 0);
		func_255(uParam1, "b_playerArthur", 1, "IG3");
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "JOHN", Global_35, 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_188(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
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
		if (func_121(iVar0, 2))
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
		func_122(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, bParam8, iParam9, bParam10, iParam11, 1065353216 /* Float: 1f */, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_189(var uParam0, var uParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_134) || ENTITY::IS_ENTITY_DEAD(uParam0->f_134))
	{
		return;
	}
	if (!func_180())
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_cs_letter03x", iParam2->f_53[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2->f_53[1]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "p_moneyStack01x", iParam2->f_53[1], 0);
	}
	ANIMSCENE::START_ANIM_SCENE(*uParam1);
}

int func_190(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!func_256(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_257(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_258(iParam0, bParam2);
	iVar2 = 0;
	if (func_259(iParam0, 0, 0) == 0)
	{
		if (func_260(iParam0))
		{
			iVar5 = func_261(iParam0);
			iVar6 = func_262(iVar5);
			iVar7 = func_263(iVar6) + 1;
			func_264(iVar5);
			if (func_265(38))
			{
				func_266(483, 0);
			}
			else
			{
				func_266(482, 0);
			}
			if (iVar7 == func_267(iVar6))
			{
				func_190(func_268(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_269() && func_270(4))
				{
					if (func_269() && (func_271(38) || func_265(38)))
					{
						func_273(38, func_268(iVar6), 0, 0, func_272(), 0, -1, 0);
						func_274(2);
					}
					else
					{
						func_273(38, func_268(iVar6), 0, 0, func_272(), 0, -1, 0);
						func_274(1);
					}
				}
			}
			else if (func_269() && func_270(4))
			{
				if (func_269() && (func_271(38) || func_265(38)))
				{
					func_273(38, 0, 0, 0, func_272(), 0, -1, 0);
					func_274(2);
				}
				else
				{
					func_273(38, 0, 0, 0, func_272(), 0, -1, 0);
					func_274(1);
				}
			}
			if (func_269() && func_270(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_269() && (func_271(38) || func_265(38)))
					{
						func_275(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_275(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_276(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_137(iParam0, 866047851) && !func_137(iParam0, -1979000645)) && !func_137(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_277(iParam0, 8388608) && !func_60(28))
	{
		func_278(28);
	}
	if (!bVar3)
	{
		if (func_137(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_279(iParam0) == -1447088266)
			{
				iVar1 = func_281(func_280(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_152() == -1)
					{
						func_282(iVar1);
					}
					if (func_283(0) && func_284(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_285(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_152() == -1)
					{
						func_282(iParam0);
					}
					if (func_283(0) && func_284(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_285(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_276(iParam0) == joaat("WEAPON"))
		{
			if (!func_286(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_276(iParam0) == joaat("AMMO") && func_287(iParam0))
		{
			if (!func_288(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_137(iParam0, 866047851))
		{
			func_289(iParam0);
		}
		else if (func_137(iParam0, 2000026003))
		{
			func_290(iParam0);
		}
		else if (func_137(iParam0, -103750053))
		{
			func_292(func_291(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_292(func_293(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_137(iParam0, -121341956) && !func_137(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_102(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_266(498, 0);
				}
			}
			if (func_137(iParam0, -2017733358) || func_137(iParam0, -1369131378))
			{
				func_294(iParam0);
			}
		}
		else if (func_137(iParam0, -136654233))
		{
			if (func_137(iParam0, -1021472396))
			{
			}
		}
		else if (func_137(iParam0, -1466706512) && func_137(iParam0, 1147021565))
		{
			func_266(484, 0);
		}
		else if (func_137(iParam0, 1147021565) && func_137(iParam0, -524514947))
		{
		}
		else if (func_137(iParam0, 554195525))
		{
		}
		else if (func_137(iParam0, 589988438))
		{
			if (func_295())
			{
				func_296(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_137(iParam0, 787083290) && func_137(iParam0, 949916894))
		{
			func_297(iParam0);
		}
		else if (func_137(iParam0, -1718133314))
		{
			func_298(iParam0);
		}
		else if (func_137(iParam0, -1738650224))
		{
			func_299(iParam0);
		}
		else if (func_137(iParam0, -1112814642) && func_137(iParam0, 949916894))
		{
			func_300(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_137(iParam0, 1841149704))
		{
			func_301();
		}
		else if (func_137(iParam0, 606799272))
		{
			func_302(iParam0, iParam1);
			func_303(iParam0);
		}
		else if (func_137(iParam0, -1112814642) && func_137(iParam0, -1697809989))
		{
			func_304(iParam0, 0, 0, 0);
		}
		else if (func_137(iParam0, -2017733358) || func_137(iParam0, -1369131378))
		{
			func_294(iParam0);
		}
		else if (func_137(iParam0, -1921346699))
		{
			if (func_152() != -1)
			{
				return 0;
			}
			func_305(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_137(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_222(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_190(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_222(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_190(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_222(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_190(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_222(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_190(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_222(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_190(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_222(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_190(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_137(iParam0, -839724752) && func_277(iParam0, 4))
		{
			if (!func_265(42))
			{
				func_306(iParam0);
			}
		}
		else if (func_137(iParam0, 1399091007))
		{
			func_307(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_137(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_190(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_278(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_308(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_309(&iVar9, 0))
				{
					func_284(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_152() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_308(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_266(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_310();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_311();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_312();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_313();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_314();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_315(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_316(499813453, 0);
				func_317(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_315(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_316(499813453, 0);
				func_317(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_315(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_316(499813453, 0);
				func_317(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_315(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_316(666607663, 0);
				func_318(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_315(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_316(666607663, 0);
				func_318(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_315(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_316(666607663, 0);
				func_318(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_315(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_316(-220219788, 0);
				func_319(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_315(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_316(-220219788, 0);
				func_319(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_315(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_316(-220219788, 0);
				func_319(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_315(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_316(218622660, 0);
				func_320(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_315(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_316(218622660, 0);
				func_320(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_315(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_316(390004462, 0);
				func_321(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_315(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_316(390004462, 0);
				func_321(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_315(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_316(390004462, 0);
				func_321(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_315(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_316(6410548, 0);
				func_322(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_315(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_316(6410548, 0);
				func_322(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_315(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_316(6410548, 0);
				func_322(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_315(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_316(6410548, 0);
				func_322(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_324(242, func_323(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_324(240, func_323(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_324(241, func_323(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_325(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_266(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_266(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_266(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_190(func_326(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_190(func_327(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_60(1))
				{
					func_266(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_266(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_152() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_266(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_328(&iVar10);
		if (!func_329(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_283(0))
		{
			return 1;
		}
		if (func_276(iParam0) == joaat("CLOTHING"))
		{
			func_330(iParam0);
		}
		if (func_137(iParam0, -1979000645))
		{
			func_331(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_283(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_190(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_332(iVar2, 0);
		}
	}
	Var35 = { func_333(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_334(iParam0);
	if (fParam6 > 0f)
	{
		if (func_137(iParam0, -839724752))
		{
			func_335(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_336(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_191(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_337(iParam0, sParam4, iParam5);
	}
	func_338(iParam0, bParam1, fParam2, iParam3, iParam7);
}

char* func_192(bool bParam0)
{
	if (bParam0)
	{
		return "JOHN_PLAYER";
	}
	return "ARTHUR";
}

bool func_193(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = sParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_339(iParam0, &Var0);
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_195(float fParam0)
{
	if (func_221(1))
	{
		return true;
	}
	if (func_106(&uLocal_0) && !func_340(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 31:
			return "MAGIC_LANTERN_THE_BEAR";
		case 22:
		case 32:
			return "MAGIC_LANTERN_JOSIAH_BLACKWATER";
		case 23:
		case 33:
			return "MAGIC_LANTERN_WONDERS_OF_THE_AGE";
		case 24:
		case 34:
			return "MAGIC_LANTERN_SAVIORS_SAVAGES";
		case 25:
		case 35:
			return "MAGIC_LANTERN_GHOSTLY_SERENADE";
		case 26:
		case 36:
			return "MOVIE_DIRECT_CURRENT_DAMNATION";
		case 27:
		case 37:
			return "MOVIE_FARMERS_DAUGHTER";
		case 28:
		case 38:
			return "MOVIE_MODERN_MEDICINE";
		case 29:
		case 39:
			return "MOVIE_BEAUMONT_THE_BURLY";
		case 30:
		case 40:
			return "MOVIE_SKETCHING_FOR_SWEETHEART";
		default:
			break;
	}
	return "FAIL";
}

char* func_197(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return "JK_TICKET_TAKER";
		case 525:
			return "FH_TOWNDEALER";
		case 283:
			return "JS_TOWNDEALER";
		case 284:
			return "FH_TOWNDEALER";
		default:
			break;
	}
	return "JK_TICKET_TAKER";
}

bool func_198(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
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
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && bParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_35(bVar0, bParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_341(bVar0, 0)))
		{
			if (func_342(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_199(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;

	if (!Global_1935630.f_27 && !bParam4)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
	{
		fVar0 = func_35(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
		if (fVar0 < fParam3 && fVar0 > 0.5f)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					iVar2 = iParam0;
					if (iVar1 == iVar2)
					{
						return 0;
					}
				}
				iVar3 = func_341(PLAYER::PLAYER_PED_ID(), 0);
				if (func_250(iVar3) && !PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
				{
					return 0;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::WAS_PED_SKELETON_UPDATED(iParam0))
				{
					vVar4 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
				}
				else
				{
					vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
				}
				vVar7 = { func_343(0) };
				vVar10 = { func_344(vVar4 - CAM::GET_GAMEPLAY_CAM_COORD()) };
				fVar13 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar7.x, vVar7.y));
				fVar14 = MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.y, vVar10.z, vVar7.y, vVar7.z));
				if (fVar13 < fParam1)
				{
					if (fVar14 < fParam2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_200(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_345(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_346(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_347(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_348(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_349(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_350(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && func_76(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_347(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_351(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_352(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_353(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_354(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_354(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_347(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_355(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_356(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_357(uParam2, 4000))
				{
					if ((func_358(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_359(uParam2, bParam0)) && func_360(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_358(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_359(uParam2, bParam0)) && func_360(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_361(bParam0, Global_1935630.f_41))
							{
								func_362();
								*uParam3 = 2;
								func_347(bParam0, uParam2, *uParam3);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_361(bParam0, Global_1935630.f_41))
						{
							func_362();
							*uParam3 = 2;
							func_347(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_363(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_364() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_362();
						*uParam3 = 2;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_365())
					{
						if (func_361(bParam0, Global_1935630.f_42))
						{
							func_362();
							*uParam3 = 2;
							func_347(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_366(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_347(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_367(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_368(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_369(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_370(uParam2, 4000))
				{
					if (func_371(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_347(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_372(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_347(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_373(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_347(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	iParam0->f_5 = iParam0->f_4;
	iParam0->f_4 = iParam1;
}

void func_202(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_203(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

char* func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_AggroCower";
		case 2:
			return "PL_AggroRun";
		case 3:
			return "PL_CowerBase";
		case 1:
			return "PL_CowerGoAway";
		case 4:
			return "PL_BuyLt";
		case 5:
			return "PL_BuyRt";
		case 6:
			return "PL_Greet1";
		case 7:
			return "PL_Greet2";
		case 8:
			return "PL_HelpYou";
		case 15:
			return "PL_NoShow1";
		case 16:
			return "PL_NoShow2";
		case 9:
			return "PL_OpenCurtain";
		case 11:
			return "PL_ShowNegLt";
		case 12:
			return "PL_ShowNegRt";
		case 13:
			return "PL_ShowPosLt";
		case 14:
			return "PL_ShowPosRt";
		case 10:
			return "Pl_Base";
		default:
			break;
	}
	return "[THEATER_TT_GET_TICKET_COLLECTOR_PLAYLIST] -- FAIL -- 77";
}

void func_205(var uParam0)
{
	if (func_118(uParam0))
	{
		STREAMING::REQUEST_MODEL(func_178(4), false);
	}
	else if (uParam0->f_24 == 0)
	{
		STREAMING::REQUEST_MODEL(func_178(3), false);
	}
	else
	{
		STREAMING::REQUEST_MODEL(func_178(2), false);
	}
}

void func_206(var uParam0, var uParam1, int iParam2)
{
	struct<7> /*56*/ sVar0;

	switch (iParam2)
	{
		case 0:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				Var0 = { func_254(2) };
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				Var0 = { func_254(3) };
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(Var0, Var0.f_3, Var0.f_6, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 1:
		case 2:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.265f, -1363.339f, 48.15632f, 0f, 0f, 40.164f, 2.969626f, 2.725822f, 3.152676f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2685.704f, -1362.969f, 48.15632f, 0f, 0f, 40.164f, 4.125022f, 8.24628f, 3.152676f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 4:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-788.2858f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.572522f, 2.070467f, 2.851869f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-787.9954f, -1362.648f, 44.1069f, 0f, 0f, 0f, 2.967766f, 7.108891f, 2.851869f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
		case 3:
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
			{
				*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-353.9453f, 707.1058f, 117.0155f, 0f, 0f, -29.98282f, 3.680929f, 4.116389f, 2.594225f, "TICKET_TAKER_INTERACT_SMALL");
			}
			if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
			{
				*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-353.0224f, 707.7128f, 117.0762f, 0f, 0f, 0f, 3f, 3f, 1.726511f, "TICKET_TAKER_INTERACT_LARGE");
			}
			break;
	}
}

bool func_207(var uParam0)
{
	if (func_118(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(func_178(4)))
		{
			return true;
		}
	}
	else if (uParam0->f_24 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(func_178(3)))
		{
			return true;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(func_178(2)))
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0, vector3 vParam1, int iParam4)
{
	if (func_118(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[4]))
		{
			iParam0->f_53[4] = OBJECT::CREATE_OBJECT(func_178(4), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (iParam4 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[3]))
		{
			iParam0->f_53[3] = OBJECT::CREATE_OBJECT(func_178(3), vParam1, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_53[2]))
	{
		iParam0->f_53[2] = OBJECT::CREATE_OBJECT(func_178(2), vParam1, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_209(var uParam0, int iParam1)
{
	if (func_118(uParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[4], 0);
	}
	else if (iParam1 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[3], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_10[3 /*3*/], "COINS", uParam0->f_53[2], 0);
	}
}

Vector3 func_210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2542.176f, -1282.525f, 48.218f;
		case 1:
			return 2686.802f, -1362.095f, 47.215f;
		case 2:
			return 2686.802f, -1362.095f, 47.215f;
		case 4:
			return -789.7354f, -1362.636f, 42.82219f;
		case 3:
			return -355.1843f, 705.1395f, 115.9362f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 47.261f;
		case 1:
			return 0f, 0f, 129.887f;
		case 2:
			return 0f, 0f, 129.887f;
		case 4:
			return 0f, 0f, -90.358f;
		case 3:
			return 0f, 0f, -31.467f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_212(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	bool bVar0;

	bVar0 = func_221(1);
	switch (iParam1->f_6)
	{
		case 0:
			if (!func_106(&(iParam1->f_67)))
			{
				func_42(&(iParam1->f_67));
			}
			if ((((!func_120(func_109(uParam0->f_1)) && !func_54(iParam1->f_25, 2)) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && !bParam2)
			{
				func_201(iParam1, 6);
				func_42(&(iParam1->f_67));
				func_202(&(iParam1->f_3), 4);
				func_79(&(iParam1->f_25), 2);
			}
			if ((((((((!func_54(iParam1->f_25, 128) && !Global_1394141.f_1328) && !bVar0) && func_54(iParam1->f_25, 2)) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !bParam2) && func_107(&(iParam1->f_67)) > 15f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134)) && iParam1->f_31 <= 0)
			{
				func_42(&(iParam1->f_67));
				func_79(&(iParam1->f_25), 128);
				iParam1->f_28++;
				func_201(iParam1, 8);
				func_202(&(iParam1->f_3), 4);
			}
			if (((((((func_54(iParam1->f_25, 128) && !Global_1394141.f_1328) && !bVar0) && func_107(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_28))) && iParam1->f_27 <= 3) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134)) && iParam1->f_31 <= 0)
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_27++;
				iParam1->f_28++;
				func_42(&(iParam1->f_67));
			}
			if (func_54(iParam1->f_25, 4) && !Global_1394141.f_1328)
			{
				func_201(iParam1, func_375(func_109(uParam0->f_1)));
				func_55(&(iParam1->f_25), 4);
				func_79(&(iParam1->f_25), 1048576);
				func_203(&(iParam1->f_6), 1);
				func_42(&(iParam1->f_67));
				func_79(&(iParam1->f_25), 2);
				func_79(&(iParam1->f_25), 128);
				func_202(&(iParam1->f_3), 4);
			}
			if (((!func_54(iParam1->f_25, 4194304) && !bVar0) && !func_73(func_376(iParam1->f_24))) && func_20(Global_35, func_376(iParam1->f_24), 1) < func_377(iParam1->f_24))
			{
				func_193(uParam0->f_134, "UNAUTHORIZED_ADMISSION", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(iParam1->f_25), 4194304);
			}
			if (((!func_54(iParam1->f_25, 2097152) && !bVar0) && !func_73(func_378(iParam1->f_24))) && func_20(Global_35, func_378(iParam1->f_24), 1) < func_379(iParam1->f_24))
			{
				func_193(uParam0->f_134, "UNAUTHORIZED_AREA_BALCONY", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_79(&(iParam1->f_25), 2097152);
			}
			func_380(uParam0, iParam1);
			if (!func_110(func_109(uParam0->f_1)))
			{
				func_203(&(iParam1->f_6), 3);
			}
			break;
		case 1:
			if (!func_54(iParam1->f_25, 2048) && func_32(Global_35, Global_1394141.f_7[Global_40.f_9028[func_109(uParam0->f_1)] /*31*/].f_4, 1, 0))
			{
				func_79(&(iParam1->f_25), 2048);
			}
			if (!func_54(iParam1->f_25, 1024))
			{
				switch (func_109(uParam0->f_1))
				{
					case 3:
						if (ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(func_375(func_109(uParam0->f_1)))) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 0.5f)
						{
							func_193(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							func_79(&(iParam1->f_25), 1024);
						}
						break;
					case 0:
					case 1:
					case 2:
					case 4:
						if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam1->f_10[3 /*3*/]) > 0.4f)
						{
							func_193(uParam0->f_134, func_381(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
							func_79(&(iParam1->f_25), 1024);
						}
						break;
				}
			}
			if (!func_54(iParam1->f_25, 16) && func_109(uParam0->f_1) == 3)
			{
				if ((func_54(iParam1->f_25, 1048576) && ANIMSCENE::_0x1F0E401031E20146(iParam1->f_10[3 /*3*/], func_204(5))) && !bParam2)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, iParam1->f_10[3 /*3*/]))
					{
						func_175(1015669983);
						func_79(&(iParam1->f_25), 16);
					}
				}
			}
			if (!func_54(iParam1->f_25, 512) && func_54(iParam1->f_25, 2048))
			{
				if (((!Global_1394141.f_1329 && func_32(Global_35, iParam1->f_59[3], 1, 0)) && func_219(&(iParam1->f_67)) > 25f) && !bVar0)
				{
					func_79(&(iParam1->f_25), 512);
					func_201(iParam1, 12);
					func_202(&(iParam1->f_3), 4);
				}
			}
			if (!func_54(iParam1->f_25, 256) && func_54(iParam1->f_25, 2048))
			{
				if (((Global_1394141.f_1329 && func_32(Global_35, iParam1->f_59[3], 1, 0)) && func_219(&(iParam1->f_67)) > 25f) && !bVar0)
				{
					func_79(&(iParam1->f_25), 256);
					func_201(iParam1, 14);
					func_202(&(iParam1->f_3), 4);
				}
			}
			if (!Global_1394141.f_1328)
			{
				func_42(&(iParam1->f_67));
				func_203(&(iParam1->f_6), 2);
			}
			if (func_110(func_109(uParam0->f_1)) && !Global_1394141.f_1328)
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				func_202(&(iParam1->f_3), 4);
				func_42(&(iParam1->f_67));
				func_203(&(iParam1->f_6), 0);
			}
			break;
		case 2:
			if ((((!func_54(iParam1->f_25, 64) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && func_219(&(iParam1->f_67)) > 30f) && !func_110(func_109(uParam0->f_1)))
			{
				func_201(iParam1, 15);
				func_202(&(iParam1->f_3), 4);
				func_79(&(iParam1->f_25), 64);
			}
			if ((((func_54(iParam1->f_25, 64) && iParam1->f_29 < 3) && func_107(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_30))) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_134))
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_29++;
				iParam1->f_30++;
				func_42(&(iParam1->f_67));
			}
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				func_202(&(iParam1->f_3), 4);
				func_42(&(iParam1->f_67));
				func_203(&(iParam1->f_6), 0);
			}
			break;
		case 3:
			if (((!func_54(iParam1->f_25, 64) && func_32(Global_35, iParam1->f_59[3], 1, 0)) && !Global_1394141.f_1328) && !func_110(func_109(uParam0->f_1)))
			{
				func_201(iParam1, 15);
				func_202(&(iParam1->f_3), 4);
				func_79(&(iParam1->f_25), 64);
			}
			if (((func_54(iParam1->f_25, 64) && iParam1->f_29 < 3) && func_107(&(iParam1->f_67)) > (15f * IntToFloat(iParam1->f_30))) && func_32(Global_35, iParam1->f_59[3], 1, 0))
			{
				func_193(uParam0->f_134, func_374(func_109(uParam0->f_1)), 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				iParam1->f_29++;
				iParam1->f_30++;
				func_42(&(iParam1->f_67));
			}
			if (func_110(func_109(uParam0->f_1)))
			{
				func_382(iParam1);
				func_201(iParam1, 10);
				func_202(&(iParam1->f_3), 4);
				func_42(&(iParam1->f_67));
				func_203(&(iParam1->f_6), 0);
			}
			break;
	}
}

bool func_213(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return false;
	}
	return true;
}

void func_214(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1, true);
}

char* func_215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "GENERIC_FRIGHTENED_HIGH";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "LAW_THREAT";
				default:
					break;
			}
			break;
		case 4:
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 6:
		case 7:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_383(&uVar2))
			{
				return "WELCOME_MASK";
			}
			switch (iParam1)
			{
				case 0:
					return "WELCOME";
				case 1:
					return "WELCOME_MALE";
				case 2:
					return "WELCOME_FEMALE";
				default:
					break;
			}
			break;
		case 8:
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				iVar1 = ENTITY::GET_ENTITY_TYPE(iVar0);
				if (iVar1 == 1)
				{
					return "WELCOME_GET_THAT_OUT_OF_HERE";
				}
			}
			if (func_383(&uVar2))
			{
				return "WELCOME_MASK";
			}
			iVar3 = func_384(Global_35, 0, 1, 0);
			if (iVar3 != joaat("WEAPON_UNARMED"))
			{
				return "PUT_WEAPON_AWAY";
			}
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_PURCHASE";
				default:
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "WELCOME_NO_SHOW";
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "HANGING_AROUND_NO_SHOW";
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "ENJOY_THE_SHOW";
				default:
					break;
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
					return "FAREWELL_DURING_SHOW";
				default:
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return "FAREWELL_AFTER_SHOW";
				case 1:
					return "FAREWELL_AFTER_SHOW_MALE";
				case 2:
					return "FAREWELL_AFTER_SHOW_FEMALE";
				default:
					break;
			}
			break;
	}
	return "WELCOME";
}

void func_216(int iParam0)
{
	switch (iParam0->f_24)
	{
		case 4:
			if (iParam0->f_50)
			{
				iParam0->f_50 = 0;
				func_385(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 1:
			if (iParam0->f_49)
			{
				iParam0->f_49 = 0;
				func_385(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 2:
			if (iParam0->f_50)
			{
				iParam0->f_50 = 0;
				func_385(2037803338 /* GXTEntry: "Movie Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 0:
			if (iParam0->f_48)
			{
				iParam0->f_48 = 0;
				func_385(-1110862888 /* GXTEntry: "Theatre Ticket" */, 1, 0, -142743235, 0);
			}
			break;
		case 3:
			if (iParam0->f_49)
			{
				iParam0->f_49 = 0;
				func_385(1242466573 /* GXTEntry: "Magic Lantern Ticket" */, 1, 0, -142743235, 0);
			}
			break;
	}
}

void func_217(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_386(iParam0);
	if (bParam3)
	{
		func_387(iParam0, sParam1, iParam2);
	}
}

void func_218(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	var uVar6[1];
	struct<10> /*80*/ sVar8;

	uVar6[0] = uParam0->f_134;
	iVar0 = func_389(&uVar2, &uVar6, 3, Global_36, 50f, 0, 0, 0, func_388(uParam0->f_139), 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && !ENTITY::IS_ENTITY_DEAD(uVar2[iVar1])) && !LAW::_0x40851BCC33ACD9AB(uVar2[iVar1]))
		{
			Var8 = Global_35;
			Var8.f_3 = { Global_36 };
			Var8.f_6 = func_390();
			Var8.f_9 = 1;
			Var8.f_2 = joaat("CRIME_THREATEN");
			Var8.f_1 = uVar2[iVar1];
			Var8.f_8 = 1;
			Var8.f_7 = 1000;
			LAW::_0x018F30D762E62DF8(uVar2[iVar1], &Var8);
			func_391(uVar2[iVar1], Global_36, 2, 1, 1);
			TASK::TASK_FLEE_PED(uVar2[iVar1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, false);
		}
		iVar1++;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_134, true);
}

float func_219(var uParam0)
{
	if (!func_106(uParam0))
	{
		return 0f;
	}
	if (func_172(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_173() - uParam0->f_1);
}

void func_220(var uParam0, int iParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[3 /*3*/] = -1;
	iParam1->f_10[3 /*3*/].f_1 = 0;
	iParam1->f_5 = -1;
	iParam1->f_4 = -1;
	func_83(uParam0, 0);
	func_382(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_53[2]))
	{
		OBJECT::DELETE_OBJECT(&(iParam1->f_53[2]));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[0 /*3*/]);
	}
	iParam1->f_10[0 /*3*/] = -1;
	iParam1->f_10[0 /*3*/].f_1 = 0;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[1 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[1 /*3*/]);
	}
	iParam1->f_10[1 /*3*/] = -1;
	iParam1->f_10[1 /*3*/].f_1 = 0;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1->f_10[2 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iParam1->f_10[2 /*3*/]);
	}
	iParam1->f_10[2 /*3*/] = -1;
	iParam1->f_10[2 /*3*/].f_1 = 0;
}

bool func_221(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_222(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_141(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_276(iParam0);
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
		if (!func_392(iParam0, 1))
		{
			return false;
		}
	}
	return func_259(iParam0, 0, bParam2) >= iParam1;
}

void func_223(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_121(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_224(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_225(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

void func_226(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_228(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_229(int iParam0, bool bParam1, bool bParam2)
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

bool func_230(int iParam0)
{
	if (func_393(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_231(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_230(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_232(int iParam0, bool bParam1)
{
	if (func_230(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_233(int iParam0, bool bParam1)
{
	if (func_230(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_234(int iParam0, bool bParam1)
{
	if (func_230(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_235()
{
	return true;
}

int func_236(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_394(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_237(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> /*16*/ sVar7;
	struct<2> /*16*/ sVar19;
	struct<2> /*16*/ sVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		Var21[iVar0 /*2*/].f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (Var21[iVar0 /*2*/] == Var19)
							{
								Var21[iVar0 /*2*/].f_1 = (Var21[iVar0 /*2*/].f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0 /*2*/].f_1 != 1f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat((uParam2[iVar0 /*2*/])->f_1) * (Var21[iVar0 /*2*/].f_1 / 1f)));
		}
		iVar0++;
	}
}

bool func_238(bool bParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(bParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_239(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_240(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request_name");
	if (!func_238(bParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_241(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

bool func_243(int iParam0, int iParam1)
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

Vector3 func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2529.018f, -1271.789f, 48.19606f;
		case 1:
		case 2:
			return 2682.637f, -1365.043f, 46.54007f;
		case 4:
			return -793.7158f, -1362.175f, 42.76554f;
		case 3:
			return -352.6599f, 708.3228f, 115.8174f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_245(int iParam0)
{
	switch (iParam0)
	{
		case 283:
			return 2546.542f, -1300.307f, 49.53876f;
		case 284:
			return 2697.939f, -1352.872f, 49.41832f;
		case 33:
			return -351.5715f, 700.468f, 118.3245f;
		case 525:
			return -777.8935f, -1362.579f, 45.98574f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_246(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_247(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_248(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || !PED::IS_PED_HUMAN(bParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_249(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_250(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

void func_251(int iParam0)
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

int func_252(int iParam0, int iParam1)
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

bool func_253(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

struct<11> /*88*/ func_254(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			Var0 = { 2537.884f, -1278.321f, 48.21795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4f, 4f, 5f };
			Var0.f_9 = "TICKET_TAKER_VAN_FRONT_ENTRANCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 1:
			Var0 = { 2540.43f, -1280.87f, 48.01795f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 2f, 2f, 4f };
			Var0.f_9 = "TICKET_TAKER_VAN_TICKET_FENCE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
		case 2:
			Var0 = { 2540.47f, -1280.896f, 49.50146f };
			Var0.f_3 = { 0f, 0f, -135.6275f };
			Var0.f_6 = { 2.411322f, 2.714174f, 3.024515f };
			Var0.f_9 = "THEATER_TT_INTERACT_SMALL_ZONE";
			Var0.f_10 = joaat("VOLBOX");
			break;
		case 3:
			Var0 = { 2538.789f, -1279.76f, 49.71677f };
			Var0.f_3 = { 0f, 0f, 11.90726f };
			Var0.f_6 = { 3.5f, 3.5f, 1.642595f };
			Var0.f_9 = "TICKET_TT_INTERACT_LARGE_ZONE";
			Var0.f_10 = joaat("VOLCYLINDER");
			break;
	}
	return Var0;
}

void func_255(var uParam0, char* sParam1, bool bParam2, char* sParam3)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(*uParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, sParam1, bParam2, false);
	}
}

bool func_256(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_152() == -1)
	{
		if (func_395(iParam0) && func_396(iParam0))
		{
			func_397(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_257(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_398(iParam0, iParam1);
	Var0 = { func_399(iParam0, 0, 1) };
	iVar5 = func_400(iParam0, &Var0, 0, 0);
	iVar6 = func_401(iParam0, 0);
	if ((iVar5 > 1 && !func_402()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_137(iParam0, -2051813666))
		{
			func_266(583, 1);
		}
		else
		{
			func_266(582, 0);
		}
	}
	if (func_403(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_258(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_139(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_259(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_404(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_405(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_406(bParam2), iParam0, 0);
	return iVar2;
}

bool func_260(int iParam0)
{
	if (func_152() != -1)
	{
		return false;
	}
	return func_261(iParam0) != 0;
}

int func_261(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_407())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_408(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_262(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_407())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_262(iVar0))
		{
			if (func_222(func_408(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_264(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_409(48);
	func_410(0, -1);
}

bool func_265(int iParam0)
{
	if (func_152() != -1)
	{
		return false;
	}
	return func_102(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_266(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_413(iVar0, iVar1);
}

int func_267(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_268(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_269()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_270(int iParam0)
{
	if (func_152() != -1)
	{
		return false;
	}
	return func_102(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_271(int iParam0)
{
	if (func_152() != -1)
	{
		return false;
	}
	if (!func_63(iParam0))
	{
		return false;
	}
	return func_58(Global_1347702[iParam0 /*49*/].f_15);
}

int func_272()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_222(func_414(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_273(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_269() && (func_271(38) || func_265(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_269() && (func_271(39) || func_265(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_415(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_269() && (func_271(41) || func_265(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_269() && (func_271(49) || func_265(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_415(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_416(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_417(iParam0, iVar13, iVar14))
	{
	}
	if (func_418(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_419(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_420(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_421(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_422(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_274(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_275(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_269() && (func_271(38) || func_265(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_269() && (func_271(39) || func_265(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_269() && (func_271(49) || func_265(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_269() && (func_271(38) || func_265(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_425(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_424(func_268(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_269() && (func_271(39) || func_265(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_269() && (func_271(49) || func_265(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_423(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_276(int iParam0)
{
	vector3 vVar0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_277(int iParam0, int iParam1)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

void func_278(int iParam0)
{
	if (!func_142(iParam0))
	{
		return;
	}
	func_426(iParam0);
	func_427(iParam0);
}

int func_279(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_280(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_141(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_428(iVar0) || func_429(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_281(int iParam0, bool bParam1)
{
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_282(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_249(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_283(bool bParam0)
{
	if (func_152() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_406(bParam0));
}

bool func_284(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_399(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_430((398 + iVar28), 1);
			if (func_431(iParam0, &Var0, iVar5, 0))
			{
				if (func_432(iParam0, &Var6, iVar5))
				{
					Var29 = { func_433(iParam0, Var0, iVar5, 0) };
					func_434(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_283(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_285(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_435(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_285(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_287(iParam0))
	{
		return false;
	}
	if (!func_283(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_286(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_281(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_152() == -1)
		{
			func_282(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_436(iVar0);
			}
		}
		if (!func_403(iParam0, &uVar1, 1, 0, 0))
		{
			func_397(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_437(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_284(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_284(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_284(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_180())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_438(iVar0))
				{
					func_284(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_284(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_384(Global_35, 2, 0, 1);
				if ((((func_249(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_60(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_249(iVar7) && func_60(24))
				{
					if (!func_284(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_284(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_284(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_266(480, 1);
	}
	return true;
}

bool func_287(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_288(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_287(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_249(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_222(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_324(func_439(iParam0), func_323(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_152() == -1)
		{
			if (func_102(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_266(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_283(0))
	{
		if (func_285(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_329(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_289(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_440()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_441(Global_35, iParam0, &uVar0))
		{
			func_308(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_314();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_314();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_314();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_312();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_310();
			break;
	}
}

void func_290(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_310();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_311();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_312();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_313();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_314();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_442();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_443();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> /*16*/ func_291(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_292(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_293(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_294(int iParam0)
{
	bool bVar0;

	bVar0 = func_137(iParam0, -2017733358);
	if (func_444() < 3)
	{
		if (bVar0)
		{
			if (func_446(func_445(iParam0), iParam0))
			{
				func_324(79, func_323(func_445(iParam0)), 1);
			}
			else
			{
				func_324(78, func_323(func_445(iParam0)), 1);
			}
		}
		else
		{
			func_324(80, func_323(func_447(iParam0)), 1);
		}
	}
}

bool func_295()
{
	if (((((func_448(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_448(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_448(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_448(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_448(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_448(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_296(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_449(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_337(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_338(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_297(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_275(51, 0, 0, 0, 0, -1, 0);
			func_450(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_275(51, 0, 0, 0, 0, -1, 0);
			func_450(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_273(39, 0, 0, 0, 0, 0, 1, 0);
			func_275(39, 0, 0, 0, 0, -1, 0);
			func_451(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_273(41, 0, 0, 0, 0, 0, 1, 0);
			func_275(41, 0, 0, 0, 0, -1, 0);
			func_452(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_273(49, 0, 0, 0, 0, 0, 1, 0);
			func_275(49, 0, 0, 0, 0, -1, 0);
			func_453(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_273(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_454(1), 0, -1, 0);
			func_455(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_273(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_454(2), 0, -1, 0);
			func_455(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_273(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_454(4), 0, -1, 0);
			func_455(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_273(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_454(8), 0, -1, 0);
			func_455(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_273(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_454(16), 0, -1, 0);
			func_455(16);
			break;
	}
}

void func_298(int iParam0)
{
	if (func_456() == 1)
	{
		if (func_265(39))
		{
			func_266(342, 0);
		}
		else
		{
			func_266(343, 0);
			func_451(1);
		}
	}
	if (func_456() >= 30)
	{
		func_266(344, 0);
	}
	func_273(39, 0, 0, 0, 0, 0, -1, 0);
	func_275(39, 0, 0, func_456(), 30, 1, 0);
}

void func_299(int iParam0)
{
	if (func_457() == 1)
	{
		if (func_265(49))
		{
			func_266(409, 0);
		}
		else
		{
			func_266(410, 0);
			func_453(1);
		}
	}
	if (func_457() >= 10)
	{
		func_266(411, 0);
	}
	func_273(49, 0, 0, 0, 0, 0, -1, 0);
	func_275(49, 0, 0, func_457(), 10, 1, 0);
}

void func_300(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_266(437, 0);
			func_266(440, 0);
			func_458(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_275(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_450(1);
			func_459(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_458(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_275(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_450(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_458(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_275(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_450(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_458(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_275(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_450(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_266(438, 0);
			func_458(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_273(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_275(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_450(32768);
			break;
		default:
			func_266(439, 0);
			break;
	}
}

void func_301()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_302(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_152() == -1)
	{
		if (!func_265(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_266(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_266(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_266(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_266(400, 0);
			}
		}
		else if (func_137(iParam0, 412399755))
		{
			func_460(joaat("EXOTIC_STAGE_01"));
			if (func_461() == 0)
			{
				func_410(0, 10);
				iVar1 = func_462(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_265(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_266(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_266(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_266(401, 0);
			}
		}
		else if (func_137(iParam0, 709057512))
		{
			func_460(joaat("EXOTIC_STAGE_02"));
			if (func_461() == 1)
			{
				func_410(0, 10);
				iVar1 = func_462(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_265(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_266(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_266(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_266(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_266(398, 0);
			}
		}
		else if (func_137(iParam0, -1478961327))
		{
			func_460(joaat("EXOTIC_STAGE_03"));
			if (func_461() == 2)
			{
				func_410(0, 10);
				iVar1 = func_462(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_465(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_466(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_409(48);
					}
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_265(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_266(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_266(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_266(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_266(406, 0);
			}
		}
		else if (func_137(iParam0, -1238404098))
		{
			func_460(joaat("EXOTIC_STAGE_04"));
			if (func_461() == 3)
			{
				func_410(0, 10);
				iVar1 = func_462(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_265(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_266(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_266(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_266(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_266(403, 0);
			}
		}
		else if (func_137(iParam0, 1160548794))
		{
			func_460(joaat("EXOTIC_STAGE_05"));
			if (func_461() == 4)
			{
				func_410(0, 10);
				iVar1 = func_462(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_463(iParam0) < func_464(iParam0))
					{
						func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_275(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_303(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_465(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_466(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_409(48);
		}
	}
}

void func_304(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_222(func_467(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_468(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_469(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_305(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_152() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_296(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_296(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_296(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_296(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_296(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_296(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_296(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_296(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_296(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_296(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_296(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_296(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_296(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_470())
			{
				func_296(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_296(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_296(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_296(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_296(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_296(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_296(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_296(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_296(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_296(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_306(int iParam0)
{
	if (func_265(41))
	{
		func_266(363, 0);
	}
	else
	{
		func_266(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_01"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_02"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_03"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_04"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_05"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_06"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_07"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_08"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_09"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_10"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_11"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_12"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_13"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_410(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_471(joaat("LEGENDARY_FISH_14"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_473(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_307(int iParam0, int iParam1)
{
	var uVar0;

	func_474(iParam0, iParam1, &uVar0);
}

int func_308(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_399(iParam1, 1, 0) };
		iParam3 = func_475(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_477(iParam1, iParam2, func_476(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_478(1, (func_152() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_476(iParam3, 1) /*11*/])
			{
				func_479(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_480(32768) && iParam1 != Global_1946054.f_57[func_476(iParam3, 1) /*11*/])
			{
				func_481();
				func_479(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_479(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_482(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_479(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_483(0);
			func_484(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_479(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_384(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_384(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_485("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_486(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_487(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_310()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_311()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_312()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_313()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_314()
{
	func_488();
	func_489();
	func_490();
}

void func_315(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_316(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_423(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_317(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_318(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_319(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_320(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_321(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_322(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_323(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_491(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_325(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_411(iParam0, &iVar0, &iVar1);
	if (!func_412(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_491(iParam0, 1024))
	{
		return;
	}
	func_413(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_407())
	{
		return func_327();
	}
	iVar4 = (func_407() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_407())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_492(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_408(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_327()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_407());
	return func_408(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_328(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_399(iParam0, 0, 1) };
	Var5 = { func_433(iParam0, Var0, Var0.f_4, 0) };
	return func_493(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_152() != -1)
	{
		return;
	}
	switch (func_279(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_494(81053684, 0) <= 0)
			{
				func_479(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_479(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_495(iParam0);
			if (func_496(iVar0))
			{
				func_497(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_479(30, iParam0, 0, 0, 0);
			}
			if (func_498() == -2125499975 || func_498() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_479(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_498() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_479(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_499(-525676072, 0))
			{
				if (func_500(-525676072, &iVar1))
				{
					func_479(33, iVar1, 0, 0, 0);
				}
			}
			func_479(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_501(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_308(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_278(24);
		if (func_309(&iVar2, 0))
		{
			func_284(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_331(int iParam0)
{
	if (func_137(iParam0, 943695443))
	{
		func_502(0, iParam0);
	}
	else if (func_137(iParam0, -2096528786))
	{
		func_502(1, iParam0);
	}
	else if (func_137(iParam0, -1094167013))
	{
		func_502(2, iParam0);
	}
	else if (func_137(iParam0, 1936654645))
	{
		func_502(3, iParam0);
	}
	else if (func_137(iParam0, 1306489306))
	{
		func_502(4, iParam0);
	}
	else if (func_137(iParam0, 435762317))
	{
		func_502(5, iParam0);
	}
	else if (func_137(iParam0, 1259363210))
	{
		func_502(6, iParam0);
	}
	else if (func_137(iParam0, 881398259))
	{
		func_502(7, iParam0);
	}
	else if (func_137(iParam0, -541549214))
	{
		func_502(8, iParam0);
	}
	else if (func_137(iParam0, 130796156))
	{
		func_502(-1, iParam0);
	}
}

int func_332(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	Var4.f_1 = 10;
	func_503(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_504(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> /*16*/ func_333(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_141(iParam0, 0))
	{
		return Var0;
	}
	if (func_137(iParam0, -305066475))
	{
		if (func_152() == -1)
		{
			if (func_137(iParam0, -537818634))
			{
				return func_505(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_505(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_137(iParam0, -537818634))
	{
		return func_505(joaat("MEDICINE_ITEMS"));
	}
	if (func_137(iParam0, 2084895747))
	{
		return func_505(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_334(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_152() == -1)
			{
				if (func_102(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_266(109, 1);
				}
			}
			break;
	}
}

void func_335(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_507(func_506(0));
	func_509(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_508(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_336(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> /*16*/ sVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_141(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_510())
	{
		func_511(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_512(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_512(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_277(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_276(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_513(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_514(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_323(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_137(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_323(iParam0));
	}
	func_509(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_337(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_338(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_515())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_509(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_516(iVar0);
			func_517(iVar0, 0, 0);
		}
		func_509(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_292(func_505(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_339(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_340(var uParam0, float fParam1)
{
	if (func_518(uParam0, fParam1))
	{
		func_108(uParam0);
		return true;
	}
	return false;
}

var func_341(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_342(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_519(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_343(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_344((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_344(vector3 vParam0)
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

void func_345(var uParam0, bool bParam1, int iParam2)
{
	func_520(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = func_521(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_167(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_522(1))
						{
							func_167(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_522(1) || *uParam0 & 8192 != 0))
				{
					func_166(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_523(uParam0))
			{
				uParam0->f_15 = func_364();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_364() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_524(uParam0);
}

bool func_346(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
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
			iVar1 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar0, 0, 0);
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
			if (!func_525(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_526(bParam0, iVar2) <= func_527(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_347(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_528(iParam2, 1, 1, 1, 0))
	{
		func_167(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_529(uParam1, 1);
	func_530();
}

bool func_348(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_198(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_531(uParam1);
			if (func_532(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_533(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_529(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_529(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_349(bool bParam0, bool bParam1, var uParam2)
{
	float fVar0;
	float fVar1;

	if (bParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_534(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_531(uParam2);
		if (func_532(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_533(uParam2)
				{
					func_529(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_350(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == bParam0)
		{
			return false;
		}
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_525(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_533(uParam1)
		{
			fVar3 = func_531(uParam1);
			if (uParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, bVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_351(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_364();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_352(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_535(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(bParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(bParam1, fVar0);
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
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), bParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_360(uParam2, bParam1))
			{
				func_529(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_353(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_536(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_360(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_529(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_354(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_537(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_529(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_529(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_538(bParam1, vVar0, vVar4))
					{
						func_529(uParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_529(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_538(bParam1, vVar0, vVar7))
					{
						func_529(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_355(bool bParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_525(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_539(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_540(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_10 = bParam0;
						return true;
					}
				}
			}
			if (func_541(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_542(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_543(uParam1, bParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_356(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*bParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*bParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*bParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*bParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*bParam0, 0);
			return true;
	}
	return false;
}

bool func_357(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_364();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_358(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(bParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(bParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar0, 1, 1))
			{
				return 1;
			}
			bVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(bVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(bVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(bVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, PED::GET_MOUNT(bVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(bParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_544(bVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(bParam0) || PED::_0x947E43F544B6AB34(bParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, bParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (func_545(bVar0, bParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == bParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (PED::IS_PED_BEING_JACKED(bParam0))
		{
			if (PED::GET_PEDS_JACKER(bParam0) == bVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_359(var uParam0, bool bParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(bParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(bParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_360(var uParam0, bool bParam1)
{
	if (func_546(uParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(bParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(bParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(bParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(bParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(bParam1))
	{
		return true;
	}
	return false;
}

bool func_361(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_35(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_362()
{
}

bool func_363(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, false) };
		if (func_547(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_364();
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
					bVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(bVar7))
					{
						if (func_20(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_364();
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

int func_364()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_365()
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
	if ((func_364() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_366(var uParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam1))
	{
		return false;
	}
	fVar0 = func_527(uParam0);
	if (uParam0->f_12 > func_548(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_549(bParam1);
	iVar1 = func_550(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_367(bool bParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_551(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_368(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_552(bParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(bParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(bParam0, 0, 0);
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
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (bVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(bVar5))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(bParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(bParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(bParam0, 0);
				return false;
			}
			bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(bParam0, bVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, bVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!func_553(uParam1, bParam0))
					{
						if (func_20(bVar4, Global_36, 1) < 7f)
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

bool func_369(bool bParam0, var uParam1)
{
	if (!func_554(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_370(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_364();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_371(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_372(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_364();
	}
	else if (func_364() - uParam1->f_4) > func_555(uParam1)
	{
		return func_556(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_373(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIgnoreDamageChecking"))
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

char* func_374(int iParam0)
{
	int iVar0;

	if (func_110(iParam0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
		if (iVar0 < 5)
		{
			return "HANGING_AROUND_NO_PURCHASE";
		}
	}
	else
	{
		return "HANGING_AROUND_NO_SHOW";
	}
	return "TAKE_YOUR_TIME";
}

int func_375(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 5;
		case 4:
			return 4;
		case 3:
			return 5;
	}
	return 5;
}

Vector3 func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2538.441f, -1287.238f, 48.21795f;
		case 3:
			return -351.5473f, 703.4365f, 116.6887f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3f;
		case 3:
			return 1.3f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_378(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2545.818f, -1279.9f, 50.04126f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_379(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3f;
		default:
			break;
	}
	return 0f;
}

void func_380(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;

	fVar0 = func_35(Global_35, uParam0->f_134, 1, 1);
	bVar1 = PED::IS_PED_JUMPING(Global_35);
	if (bVar1 && fVar0 < 10f)
	{
		if (!func_106(&(iParam1->f_42)))
		{
			iParam1->f_31++;
			func_42(&(iParam1->f_42));
		}
		else if (func_107(&(iParam1->f_42)) > 4f)
		{
			func_108(&(iParam1->f_42));
		}
	}
	if (iParam1->f_31 > 0 && fVar0 > 14f)
	{
		iParam1->f_31 = 0;
	}
	switch (iParam1->f_23)
	{
		case 0:
			if (iParam1->f_31 > 1 && !func_221(1))
			{
				func_193(uParam0->f_134, "MISBEHAVING_LOW", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(iParam1->f_45));
				func_557(&(iParam1->f_23), 1);
			}
			break;
		case 1:
			if (func_107(&(iParam1->f_45)) > 3f && !func_221(1))
			{
				func_557(&(iParam1->f_23), 2);
			}
			break;
		case 2:
			if (iParam1->f_31 > 3 && !func_221(1))
			{
				func_193(uParam0->f_134, "MISBEHAVING_MED", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(iParam1->f_45));
				func_557(&(iParam1->f_23), 3);
			}
			break;
		case 3:
			if (func_107(&(iParam1->f_45)) > 3f && !func_221(1))
			{
				func_557(&(iParam1->f_23), 4);
			}
			break;
		case 4:
			if (iParam1->f_31 > 5 && !func_221(1))
			{
				func_193(uParam0->f_134, "MISBEHAVING_HIGH", 291934926, Global_35, 1, func_197(uParam0->f_1), 0, 1);
				func_42(&(iParam1->f_45));
				func_557(&(iParam1->f_23), 5);
			}
			break;
		case 5:
			if (func_107(&(iParam1->f_45)) > 3f && !func_221(1))
			{
				func_557(&(iParam1->f_23), 6);
			}
			break;
		case 6:
			break;
	}
}

char* func_381(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "DIRECTIONS_VALENTINE_MAGIC_LANTERN";
		case 4:
			return "DIRECTIONS_BLACKWATER_IMPERIAL";
		case 0:
			return "DIRECTIONS_SAINT_DENIS_RALEUR";
		case 1:
		case 2:
			return "DIRECTIONS_SAINT_DENIS_FONTANA";
		default:
			break;
	}
	return "DIRECTIONS_SAINT_DENIS_RALEUR";
}

void func_382(int iParam0)
{
	iParam0->f_27 = 0;
	iParam0->f_28 = 1;
	iParam0->f_29 = 0;
	iParam0->f_30 = 1;
	func_55(&(iParam0->f_25), 1048576);
	func_55(&(iParam0->f_25), 2);
	func_55(&(iParam0->f_25), 32);
	func_55(&(iParam0->f_25), 128);
	func_55(&(iParam0->f_25), 256);
	func_55(&(iParam0->f_25), 512);
	func_55(&(iParam0->f_25), 16);
	func_55(&(iParam0->f_25), 1024);
	func_55(&(iParam0->f_25), 64);
	func_55(&(iParam0->f_25), 2048);
	func_55(&(iParam0->f_25), 16384);
	func_55(&(iParam0->f_25), 8192);
}

bool func_383(var uParam0)
{
	if (-1829635046 == func_558(81053684))
	{
		if (func_559(uParam0))
		{
			return true;
		}
	}
	else if (func_560(-525676072, uParam0))
	{
		if (func_559(uParam0))
		{
			return true;
		}
	}
	return false;
}

int func_384(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_385(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_404(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_336(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_222(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_333(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_259(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_259(iParam0, 0, 0) - iParam1) < 0)
		{
			func_385(iParam0, func_259(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_276(iParam0) == joaat("WEAPON"))
	{
		if (!func_561(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_562(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_283(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_336(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_563(iParam0, iParam1);
	return 1;
}

void func_386(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_126(1) < iParam0)
	{
		iParam0 = func_126(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_505(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_387(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_388(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("NBX_CIVILIANS");
		case 76:
			return joaat("VAL_CIVILIANS");
		case 38:
			return joaat("BLA_UPPERCLASS");
		default:
			break;
	}
	return -1;
}

int func_389(var uParam0, var uParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	bool bVar0;
	int iVar1;

	if (bParam13 <= 0f)
	{
		bVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam6);
	}
	else
	{
		bVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, bParam6, bParam6, bParam13);
	}
	iVar1 = func_564(uParam0, uParam1, iParam2, bVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	func_565(bVar0);
	return iVar1;
}

var func_390()
{
	return Global_1934266.f_26;
}

void func_391(bool bParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!func_566(bParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return;
	}
	if (iParam5 && PED::_0xF9331B3A314EB49D(bParam0))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bParam0);
		return;
	}
	if (func_73(vParam1))
	{
	}
	switch (iParam4)
	{
		case 3:
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(bParam0, vParam1, iParam6);
			break;
		case 5:
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(bParam0, vParam1, iParam6, false);
			break;
		case 6:
			PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bParam0, vParam1, iParam6, false);
			break;
		case 4:
			PED::_SET_PED_SHOULD_PLAY_DIRECTED_SCENARIO_EXIT(bParam0, vParam1);
			break;
		case 2:
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(bParam0, vParam1, iParam6);
			break;
		case 1:
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bParam0);
			break;
		case 7:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(bParam0);
			break;
		default:
			PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(bParam0);
			break;
	}
}

bool func_392(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_404(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_485("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_486(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_249(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_487(iVar1);
				return true;
			}
			iVar3++;
		}
		func_487(iVar1);
	}
	return false;
}

bool func_393(int iParam0)
{
	return iParam0 != 0;
}

int func_394(int iParam0)
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

bool func_395(int iParam0)
{
	return func_276(iParam0) == joaat("WEAPON");
}

bool func_396(int iParam0)
{
	var uVar0;

	if (func_152() != -1)
	{
		return false;
	}
	if (func_277(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_403(iParam0, &uVar0, 1, 0, 0);
	}
	return func_222(iParam0, 1, 0);
}

void func_397(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_276(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_281(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_429(iVar0))
	{
		if (func_152() == -1)
		{
			func_282(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_259(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_336(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_398(int iParam0, int iParam1)
{
	int iVar0;

	if (func_137(iParam0, 58855631))
	{
		func_567(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> /*40*/ func_399(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_568(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_276(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_433(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_569(bParam1) };
			if (bParam2 && func_570(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_431(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_431(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_432(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_571(bParam1) };
			switch (func_279(iParam0))
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
			if (func_572(iParam0, -1823706425))
			{
				Var0 = { func_433(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_572(iParam0, -1483207246))
			{
				Var0 = { func_433(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_573(Var0, &Var27, bParam1, 0))
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

int func_400(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	if (!func_283(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_574(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_406(bParam3), iParam0);
}

int func_401(int iParam0, bool bParam1)
{
	if (func_287(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_406(bParam1), iParam0, 0);
}

bool func_402()
{
	if (func_152() != -1)
	{
		return false;
	}
	if (!func_269())
	{
		return false;
	}
	if (!func_102(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_102(Global_1835011[2 /*74*/].f_1, 1) && func_102(Global_1347702[120 /*49*/].f_15, 1)) && !func_102(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_102(Global_1835011[37 /*74*/].f_1, 1) && !func_102(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_102(Global_1835011[57 /*74*/].f_1, 1) && !func_102(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_102(Global_1835011[26 /*74*/].f_1, 1) && !func_102(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_102(Global_1835011[62 /*74*/].f_1, 1) && func_102(Global_1835011[63 /*74*/].f_1, 1)) && !func_102(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_102(Global_1835011[75 /*74*/].f_1, 1) && !func_102(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_102(Global_1835011[76 /*74*/].f_1, 1) && !func_102(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_102(Global_1835011[40 /*74*/].f_1, 1) && func_102(Global_1835011[41 /*74*/].f_1, 1)) && !func_102(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_102(Global_1835011[62 /*74*/].f_1, 1) && func_102(Global_1835011[63 /*74*/].f_1, 1)) && !func_102(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_102(Global_1835011[65 /*74*/].f_1, 1) && func_102(Global_1835011[66 /*74*/].f_1, 1)) && !func_102(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_403(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_575(&iParam0);
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (!func_283(0))
	{
		bParam3 = true;
	}
	if (func_395(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_569(0) };
			Var4.f_9 = -1591664384;
			if (!func_431(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_432(iParam0, &Var4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_570(iParam0, 1))
			{
				if (!func_431(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_432(iParam0, &Var4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_576(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_400(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_574(iParam0))
	{
		iVar28 = func_577(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_406(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_404(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_276(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_137(iParam0, 1399091007))
	{
		func_474(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_405(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_578(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_579(&Var0, func_569(0));
	}
	if (!func_580(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_487(iVar18);
	return iVar19;
}

int func_406(bool bParam0)
{
	if (func_152() == -1)
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

int func_407()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_408(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_409(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_152() != -1)
	{
		return;
	}
	iVar0 = func_581(iParam0);
	fVar1 = func_582(iParam0);
	if ((Global_1347477.f_117 || !func_60(31)) || !func_583(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_584(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477.f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_585(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_509(MISC::VAR_STRING(6, func_586(iParam0), fVar1), "itemtype_textures", func_587(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_410(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_588(&Global_0, 8);
	}
	if (!func_269() || func_152() != -1)
	{
		return;
	}
	func_588(&Global_0, 1);
}

void func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_589(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_590(iParam0))
	{
		return false;
	}
	if (func_591(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_491(iParam0, 1)) || func_592(32768))
	{
		if (!func_491(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_593())
	{
		return false;
	}
	return true;
}

void func_413(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_415(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_594(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_416(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_272() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_595(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_596(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_456() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_597(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_456(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_598(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_457() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_599(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_457(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_415(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_417(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_418(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_419(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_420(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_600(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_222(iVar2, 1, 0) || func_602(func_601(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_424(func_600(iVar0))), func_424(func_600(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_456() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_597() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_603(iVar0)), func_603(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_467(iParam3, func_604(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_463(iVar2) - iParam7) >= func_415(iParam3, func_605(iVar0));
				}
				else
				{
					bVar1 = func_463(iVar2) >= func_415(iParam3, func_605(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_463(iVar2) + iParam7) >= func_415(iParam3, func_605(iVar0));
			}
			else
			{
				bVar1 = func_463(iVar2) >= func_415(iParam3, func_605(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_606(iVar2)), func_606(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_607(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_608(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_608(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_457() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_599() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_609(iVar0)), func_609(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_467(iParam3, func_604(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_463(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_610(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_610(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_611(iVar2)), func_611(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_421(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_598() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_422(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_65(func_612(0)) && ((func_613(0) == 1 || func_613(0) == 8) || func_613(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_423(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_424(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

var func_425(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_426(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_427(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_614(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_615(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_615(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_615(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_616(1);
			break;
		case 34:
			func_617(1);
			break;
		case 35:
			func_618(1);
			break;
		case 36:
			break;
		case 37:
			func_619(0);
			break;
		case 38:
			func_620(0);
			break;
		case 39:
			func_621(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_269()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_266(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_269()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_266(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_269()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_266(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_269()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_266(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_152() == -1)
			{
				if (!func_501(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_622(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_180())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_222(iVar0, 1, 0))
					{
						func_329(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_308(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_152() == -1)
			{
				if (!func_222(1013902307, 1, 0))
				{
					func_329(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_152() == -1)
			{
				if (!func_222(1013902307, 1, 0))
				{
					func_329(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_222(142640135, 1, 0))
				{
					func_329(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_152() == -1)
			{
				if (!func_222(786809402, 1, 0))
				{
					func_329(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_152() == -1)
			{
				if (!func_222(786809402, 1, 0))
				{
					func_329(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_222(-518019409, 1, 0))
				{
					func_329(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_623();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_428(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_429(int iParam0)
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

int func_430(int iParam0, int iParam1)
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

bool func_431(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_577(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_432(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_624(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_433(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_141(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_406(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_434(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_625(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_573(*uParam1, &Var0, bParam6, 0))
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
	if (!func_283(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_406(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_435(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_626(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_436(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_627();
	func_628(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_437(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_250(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_438(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_439(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_60(50))
			{
				if (!func_60(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_60(51))
			{
				if (!func_60(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_440()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_441(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_141(iParam1, 0))
	{
		return false;
	}
	if (func_276(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_152() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_279(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_629(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_137(iParam1, 866047851))
	{
		iVar5 = func_476(iVar4, 1);
		if (func_630(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_279(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_137(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case -1505978566:
			if (func_560(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_631(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_631(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_279(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_137(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_632(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_442()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_443()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_444()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_222(func_633(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_446(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_222(iVar0, 1, 0) && func_222(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_447(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_448(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_634(iParam0);
	if (iVar0 != -15)
	{
		func_628(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_635(iVar0, 1);
	}
	return false;
}

int func_449(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_222(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = Var1.f_1[iVar24];
			if (func_141(iVar25, 0) && func_137(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_450(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_451(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_452(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_453(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_463(iVar9);
	iVar2 = func_463(iVar10);
	iVar3 = func_463(iVar11);
	iVar5 = func_464(iVar9);
	iVar6 = func_464(iVar10);
	iVar7 = func_464(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_463(iVar12);
		iVar8 = func_464(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_455(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_456()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_636(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_457()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_458(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar0) && func_610(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if ((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_610(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_610(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_610(iVar0))
		{
			*sParam2++;
		}
		if (func_610(iVar1))
		{
			*sParam2++;
		}
		if (func_610(iVar2))
		{
			*sParam2++;
		}
		if (func_610(iVar3))
		{
			*sParam2++;
		}
		if (((func_610(iVar0) && func_610(iVar1)) && func_610(iVar2)) && func_610(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_459(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_175(1497516462);
			func_176(2016141805);
			func_176(1010885152);
			func_176(-502324015);
			break;
		case 2016141805:
			func_176(1497516462);
			func_175(2016141805);
			func_176(1010885152);
			func_176(-502324015);
			break;
		case 1010885152:
			func_176(1497516462);
			func_176(2016141805);
			func_175(1010885152);
			func_176(-502324015);
			break;
		case -502324015:
			func_176(1497516462);
			func_176(2016141805);
			func_176(1010885152);
			func_175(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_176(-538889627);
			func_176(-538880323);
			func_176(-1056767524);
			func_175(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_637();
			func_175(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_638();
			func_175(iParam0);
			break;
		case 2019386373:
			func_176(-664252410);
			func_176(2109952320);
			func_175(2019386373);
			break;
		case -664252410:
			func_176(2019386373);
			func_176(2109952320);
			func_175(-664252410);
			break;
		case 2109952320:
			func_176(2019386373);
			func_176(-664252410);
			func_175(2109952320);
			break;
		case -1674179981:
			func_176(-1835851517);
			func_176(-1838352012);
			func_175(-1674179981);
			break;
		case -1835851517:
			func_176(-1674179981);
			func_176(-1838352012);
			func_175(-1835851517);
			break;
		case -1838352012:
			func_176(-1674179981);
			func_176(-1835851517);
			func_175(-1838352012);
			break;
		case -1717960576:
			func_176(210001842);
			func_175(-1717960576);
			break;
		case 210001842:
			func_176(-1717960576);
			func_175(210001842);
			break;
		case -150493654:
			func_176(-1271608261);
			func_176(1846061697);
			func_176(-1145519186);
			func_175(-150493654);
			break;
		case -1271608261:
			func_176(-150493654);
			func_176(1846061697);
			func_176(-1145519186);
			func_175(-1271608261);
			break;
		case 1846061697:
			func_176(-150493654);
			func_176(-1271608261);
			func_176(-1145519186);
			func_175(1846061697);
			break;
		case -1145519186:
			func_176(-150493654);
			func_176(-1271608261);
			func_176(1846061697);
			func_175(-1145519186);
			break;
		case 1766284049:
			func_176(280705402);
			func_176(1926308480);
			func_175(1766284049);
			break;
		case 280705402:
			func_176(1766284049);
			func_176(1926308480);
			func_175(280705402);
			break;
		case 1926308480:
			func_176(1766284049);
			func_176(280705402);
			func_175(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_176(439465264);
				func_175(1609506757);
			}
			else
			{
				func_176(1609506757);
				func_176(439465264);
			}
			break;
		case 439465264:
			if (func_174(1609506757))
			{
				if (bParam1)
				{
					func_175(439465264);
				}
				else
				{
					func_176(439465264);
				}
			}
			break;
		case 1822001510:
			func_176(-1612662716);
			func_175(1822001510);
			break;
		case -1612662716:
			func_176(1822001510);
			func_175(-1612662716);
			break;
		case 1306158345:
			func_176(1952610440);
			func_176(-223469678);
			func_176(-404698347);
			func_176(1517904467);
			func_175(1306158345);
			break;
		case 1952610440:
			func_176(1306158345);
			func_176(-223469678);
			func_176(-404698347);
			func_176(1517904467);
			func_175(1952610440);
			break;
		case -223469678:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-404698347);
			func_176(1517904467);
			func_175(-223469678);
			break;
		case -404698347:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-223469678);
			func_176(1517904467);
			func_175(-404698347);
			break;
		case 1517904467:
			func_176(1306158345);
			func_176(1952610440);
			func_176(-223469678);
			func_176(-404698347);
			func_175(1517904467);
			break;
		case 1376646519:
			func_176(931649776);
			func_176(-434590080);
			func_176(1743048395);
			func_176(449774763);
			func_175(1376646519);
			break;
		case 931649776:
			func_176(1376646519);
			func_176(-434590080);
			func_176(1743048395);
			func_176(449774763);
			func_175(931649776);
			break;
		case -434590080:
			func_176(1376646519);
			func_176(931649776);
			func_176(1743048395);
			func_176(449774763);
			func_175(-434590080);
			break;
		case 1743048395:
			func_176(1376646519);
			func_176(931649776);
			func_176(-434590080);
			func_176(449774763);
			func_175(1743048395);
			break;
		case 449774763:
			func_176(1376646519);
			func_176(931649776);
			func_176(-434590080);
			func_176(1743048395);
			func_175(449774763);
			break;
		case -1414537028:
			func_176(38162571);
			func_176(1350391819);
			func_176(54073871);
			func_175(-1414537028);
			break;
		case 38162571:
			func_176(-1414537028);
			func_176(1350391819);
			func_176(54073871);
			func_175(38162571);
			break;
		case 1350391819:
			func_176(-1414537028);
			func_176(38162571);
			func_176(54073871);
			func_175(1350391819);
			break;
		case 54073871:
			func_176(-1414537028);
			func_176(38162571);
			func_176(1350391819);
			func_175(54073871);
			break;
		case 198200492:
			func_175(198200492);
			func_176(-1124061431);
			func_176(52706132);
			func_176(-259123672);
			break;
		case -1124061431:
			func_176(198200492);
			func_175(-1124061431);
			func_176(52706132);
			func_176(-259123672);
			break;
		case 52706132:
			func_176(198200492);
			func_176(-1124061431);
			func_175(52706132);
			func_176(-259123672);
			break;
		case -259123672:
			func_176(198200492);
			func_176(-1124061431);
			func_176(52706132);
			func_175(-259123672);
			break;
		case -919512195:
			func_175(-919512195);
			func_176(-1925798111);
			func_176(420709909);
			func_176(1703426636);
			break;
		case -1925798111:
			func_175(-1925798111);
			func_176(-919512195);
			func_176(420709909);
			func_176(1703426636);
			break;
		case 420709909:
			func_175(420709909);
			func_176(-919512195);
			func_176(-1925798111);
			func_176(1703426636);
			break;
		case 1703426636:
			func_175(1703426636);
			func_176(-919512195);
			func_176(-1925798111);
			func_176(420709909);
			break;
		case -1223121209:
			func_175(-1223121209);
			func_176(630808005);
			break;
		case 630808005:
			func_175(630808005);
			func_176(-1223121209);
			break;
		case 1453909576:
			func_175(1453909576);
			func_176(1643531967);
			break;
		case 1643531967:
			func_175(1643531967);
			func_176(1453909576);
			break;
		case 0:
			func_175(0);
			func_176(473295046);
			func_176(-1738165526);
			break;
		case 473295046:
			func_175(473295046);
			func_176(0);
			func_176(-1738165526);
			break;
		case -1738165526:
			func_175(-1738165526);
			func_176(0);
			func_176(473295046);
			break;
		case 932909855:
			func_175(932909855);
			func_176(2051822093);
			break;
		case 2051822093:
			func_175(2051822093);
			func_176(932909855);
			break;
		case 405586984:
			func_175(405586984);
			func_176(1509509592);
			func_176(-959357075);
			func_176(-1311865656);
			break;
		case 1509509592:
			func_175(1509509592);
			func_176(405586984);
			func_176(-959357075);
			func_176(-1311865656);
			break;
		case -959357075:
			func_175(-959357075);
			func_176(1509509592);
			func_176(405586984);
			func_176(-1311865656);
			break;
		case -1311865656:
			func_175(-1311865656);
			func_176(1509509592);
			func_176(-959357075);
			func_176(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_175(-524145696);
			}
			else
			{
				func_176(-524145696);
			}
			func_176(1626481264);
			func_176(282809459);
			break;
		case 282809459:
			func_175(282809459);
			func_176(1626481264);
			func_176(-524145696);
			break;
		case 1626481264:
			func_175(1626481264);
			func_176(-524145696);
			func_176(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_175(885203519);
			}
			else
			{
				func_176(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_175(-1080627546);
			}
			else
			{
				func_176(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_174(iParam0))
				{
					func_175(iParam0);
				}
			}
			else if (func_174(iParam0))
			{
				func_176(iParam0);
			}
			break;
	}
}

void func_460(int iParam0)
{
	if (!func_639(iParam0))
	{
		func_641(func_640(iParam0));
	}
}

int func_461()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_639(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_462(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_463(iVar9);
	iVar2 = func_463(iVar10);
	iVar3 = func_463(iVar11);
	iVar5 = func_464(iVar9);
	iVar6 = func_464(iVar10);
	iVar7 = func_464(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_463(iVar12);
		iVar8 = func_464(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_463(int iParam0)
{
	int iVar0;

	if (func_222(iParam0, 1, 0))
	{
		iVar0 = func_259(iParam0, 0, 0);
	}
	return iVar0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_465(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_466(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_467(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_594(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_468(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_467(iParam1, 5) || iParam0 == func_467(iParam1, 6)) || iParam0 == func_467(iParam1, 7)) || iParam0 == func_467(iParam1, 8)) || iParam0 == func_467(iParam1, 9))
	{
		func_458(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_273(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_275(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_469(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_467(iParam1, 5) || iParam0 == func_467(iParam1, 6)) || iParam0 == func_467(iParam1, 7)) || iParam0 == func_467(iParam1, 8)) || iParam0 == func_467(iParam1, 9))
	{
		if (func_458(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_273(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_275(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_273(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_275(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_470()
{
	if (func_58(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_471(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_472(int iParam0)
{
	if (!func_642(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_473(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_474(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_475(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_643(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_476(int iParam0, int iParam1)
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

bool func_477(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_644();
	if (iParam2 == 39)
	{
		Var0 = { func_399(iParam0, 1, 0) };
		iParam2 = func_476(func_475(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_137(iParam0, 866047851) && func_630(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_480(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_645(func_643(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_646(iParam2);
	func_647(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_648(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_648(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_649(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_650(iParam0, iParam2, iParam1, func_152() != -1);
	if (bParam4)
	{
		func_651(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_651(&(Global_1946054.f_1378), 1, 0);
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
				func_652(func_643(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_478(bool bParam0, bool bParam1, bool bParam2)
{
	func_653(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_479(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_654(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_655(Var0);
}

bool func_480(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_481()
{
	func_656(&(Global_1946054.f_2776));
	func_657(32768);
	func_652(1108822547, 8, 6);
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_476(iParam0, 1);
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

void func_483(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_658(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_659(Var0);
}

void func_484(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_659(Var0);
}

bool func_485(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_406(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_486(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_487(int iParam0)
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

float func_488()
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

	if (func_660())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_661(2);
	}
	if (Global_1347477.f_119)
	{
		return func_661(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_662();
	fVar2 = func_663();
	fVar3 = func_664();
	fVar4 = func_665();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_666()));
	fVar7 = (func_661(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_667(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_668(3, fVar9, fVar9 > 100f);
	return func_669(fVar7, -100f, 100f);
}

float func_489()
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

	if (func_660())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_661(1);
	}
	if (Global_1347477.f_119)
	{
		return func_661(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_662();
	fVar2 = func_663();
	fVar3 = func_664();
	fVar4 = func_665();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_666()));
	fVar7 = (func_661(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_667(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_668(2, fVar9, fVar9 > 100f);
	return func_669(fVar7, -100f, 100f);
}

float func_490()
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

	if (func_660())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_661(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_670())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_671())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_661(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_662();
	fVar2 = func_663();
	fVar3 = func_664();
	fVar4 = func_665();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_666()));
	fVar7 = (func_661(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_667(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_668(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_661(0);
	}
	return func_669(fVar7, -100f, 100f);
}

bool func_491(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_492(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_493(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_141(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_403(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_283(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_406(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_494(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
		case 81053684:
			return Global_1946054.f_2657.f_23;
		case -525676072:
			return Global_1946054.f_2657.f_22;
		case -1719060085:
			return Global_1946054.f_2657.f_24;
		case -413129408:
			return Global_1946054.f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946054.f_2657.f_20;
			}
			else
			{
				return func_672();
			}
			break;
	}
	return 0;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case -1826731591: /* GXTEntry: "Brawler\'s Outfit" */
			return 24;
		case 2119049229:
			return 25;
		case 1352942778: /* GXTEntry: "The Rebel" */
			return 26;
		case 1964379549: /* GXTEntry: "The Innocent" */
			return 27;
		case 1201189539: /* GXTEntry: "The Pursuer" */
			return 28;
		case 1351927599: /* GXTEntry: "The Grizzlies Outlaw" */
			return 21;
		case 2032023096: /* GXTEntry: "The Nuevo Paraiso" */
			return 22;
		case 1784889667:
			return 13;
		case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
			return 8;
		case 1383300684: /* GXTEntry: "Saved Custom Outfit One" */
			return 1;
		case 2051441678: /* GXTEntry: "Saved Custom Outfit Two" */
			return 2;
		case 162509669: /* GXTEntry: "Saved Custom Outfit Three" */
			return 3;
		case 635948769: /* GXTEntry: "Saved Custom Outfit Four" */
			return 4;
		case 274995506: /* GXTEntry: "Saved Custom Outfit Five" */
			return 5;
		case 1902428294: /* GXTEntry: "The Wittemore" */
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332: /* GXTEntry: "Island Outfit" */
			return 11;
		case 1788874135: /* GXTEntry: "Island Outfit Shackles" */
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555: /* GXTEntry: "The Homesteader" */
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021: /* GXTEntry: "The Winter Cowboy" */
			return 70;
		case 890706995: /* GXTEntry: "The Cowhand" */
			return 93;
		case 1156438275: /* GXTEntry: "The Rancher" */
			return 90;
		case -1611873049: /* GXTEntry: "The Rancher" */
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024: /* GXTEntry: "The Cowboy" */
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653: /* GXTEntry: "The Homesteader" */
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_496(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_497(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_496(iParam0))
	{
		return;
	}
	if (func_673(iParam0))
	{
		return;
	}
	if (!func_674(iParam0))
	{
		func_675(iParam0, 1, 0);
	}
	iVar0 = func_676(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_677(iParam0, 512))
		{
			func_479(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_678() && !bParam1) && !func_19(0, 0, 1))
	{
		func_119(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_679(iParam0, 6);
	if (bParam2)
	{
		if (!func_19(0, 0, 1))
		{
			func_410(1, 4);
		}
	}
}

int func_498()
{
	return Global_1946054.f_1;
}

bool func_499(int iParam0, bool bParam1)
{
	return func_494(iParam0, 0) < func_680(iParam0, bParam1);
}

bool func_500(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_279(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_501(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_476(iParam0, 1) /*3*/] != Global_1946054.f_57[func_476(iParam0, 1) /*11*/];
}

void func_502(int iParam0, int iParam1)
{
	if (func_137(iParam1, 130796156))
	{
		func_681(iParam1, 0);
	}
	else if (func_137(iParam1, 930141731))
	{
		func_681(iParam1, 1);
		func_682(iParam0);
	}
}

void func_503(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_504(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> /*112*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_683(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_684(uParam2, iParam0, Var1);
	return 1;
}

struct<2> /*16*/ func_505(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_506(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_507(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_508(int iParam0)
{
	var uVar0;

	if (!func_685(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_509(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_686(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_510()
{
	return !Global_1911774;
}

void func_511(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_512(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_513(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_514(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_515()
{
	if (func_440())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_516(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_687((Global_40.f_4283.f_325 + iParam0));
}

void func_517(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_515())
	{
		func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_509(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_518(var uParam0, float fParam1)
{
	if (!func_106(uParam0))
	{
		return false;
	}
	if (func_107(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_519(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_520(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_688();
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
			func_689(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_521(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_522(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_690(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_523(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_152() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_691(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_691(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_550(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_524(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_692(uParam0);
	}
}

bool func_525(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(bParam2))
	{
		iVar1 = func_550(bParam2);
	}
	else
	{
		iVar1 = func_549(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_550(bParam0);
	}
	else
	{
		iVar0 = func_549(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_693(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(bParam2);
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

float func_526(bool bParam0, bool bParam1)
{
	return func_35(bParam0, bParam1, 1, 1);
}

float func_527(var uParam0)
{
	return uParam0->f_26;
}

bool func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_529(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_167(uParam0, 134217728);
	}
	else
	{
		func_166(uParam0, 134217728);
	}
}

void func_530()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_531(var uParam0)
{
	return uParam0->f_17;
}

bool func_532(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_693(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_533(var uParam0)
{
	return uParam0->f_18;
}

bool func_534(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	bVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
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
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(bVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(bVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_341(bVar0, 0)))
		{
			if (func_519(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_535(var uParam0)
{
	return uParam0->f_23;
}

int func_536(var uParam0)
{
	return uParam0->f_21;
}

int func_537(var uParam0)
{
	int iVar0;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_538(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_694(bParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(bParam0, vParam4, 17))
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

int func_539(bool bParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 9, false))
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
	if (func_695(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_540(int iParam0)
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

bool func_541(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_696(bParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_542(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_696(bParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(bParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_543(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_696(bParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(bParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(bParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_544(bool bParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(bParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(bParam0);
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

bool func_545(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_248(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(bParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(bParam0) == bParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_546(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_547(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_20(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_548(var uParam0)
{
	return uParam0->f_24;
}

int func_549(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(bParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_550(bool bParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(bParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(bParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_551(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(bParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_544(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(bParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, bParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(bParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_35(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), bParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(bParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_35(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, bParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(bParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_552(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_690(1, &bVar0, &bVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bVar0 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
				{
					if (!bParam2 || !func_553(uParam1, bVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bVar1 != bParam0)
		{
			if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam0, Global_35, 17))
			{
				if (!bParam2 || !func_553(uParam1, bVar1))
				{
					if (func_20(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_553(var uParam0, bool bParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(bParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(bParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(bParam1);
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

bool func_554(int iParam0)
{
	if (func_180())
	{
		return false;
	}
	return func_102(Global_1347702[58 /*49*/].f_15, 1);
}

int func_555(var uParam0)
{
	return uParam0->f_20;
}

int func_556(bool bParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(bParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(bParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

void func_557(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_558(int iParam0)
{
	int iVar0;

	iVar0 = func_476(func_697(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_559(var uParam0)
{
	if (func_560(81053684, uParam0))
	{
		return true;
	}
	if (func_560(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_560(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_476(func_697(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_279(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_561(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	struct<10> /*80*/ sVar20;
	struct<4> /*32*/ sVar34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_578(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_579(&Var0, func_569(0));
	}
	if (!func_580(&Var0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	Var20.f_9 = -1591664384;
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_486(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_434(iParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_487(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_562(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_399(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_698(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_433(iParam0, Var0, Var0.f_4, bParam4) };
	return func_434(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_563(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_137(iParam0, 606799272))
		{
			func_699(iParam0, iParam1);
		}
		if (func_137(iParam0, -1112814642) && func_137(iParam0, -1697809989))
		{
			func_304(iParam0, iParam1, 1, 0);
		}
	}
}

int func_564(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x886171A12F400B89(bParam3, iVar0, 1);
	if (iVar6 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
			bVar2 = iVar1;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar2) && iVar4 < *uParam0) && iVar4 < iParam2)
			{
				if (func_700(bVar2, bParam4, bParam6, bParam8, bParam9, bParam10) && !DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreThisPed"))
				{
					if (!func_701(bVar2, uParam1))
					{
						bVar3 = false;
						if (iParam7 != -1)
						{
							iVar7 = 0;
							iVar7 = 0;
							while (iVar7 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar2, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar7)))
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
								if (!ENTITY::IS_ENTITY_DEAD(bVar2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(bVar2, bParam5);
								}
							}
							(*uParam0)[iVar4] = bVar2;
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

void func_565(bool bParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_DELETE_VOLUME(bParam0);
	}
}

bool func_566(bool bParam0, int iParam1)
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
	if (func_54(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_54(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_54(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_54(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_54(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_54(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_54(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_54(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_567(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

struct<4> /*32*/ func_568(bool bParam0)
{
	return func_433(joaat("CHARACTER"), func_702(), -1591664384, bParam0);
}

struct<4> /*32*/ func_569(bool bParam0)
{
	int iVar0;

	iVar0 = func_406(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_433(923904168, func_568(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_433(923904168, func_568(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_433(923904168, func_568(bParam0), -740156546, 0);
}

bool func_570(int iParam0, bool bParam1)
{
	if (func_279(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_60(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_571(bool bParam0)
{
	int iVar0;

	iVar0 = func_406(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_433(271701509, func_568(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_433(271701509, func_568(bParam0), 12999093, 0);
}

bool func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_279(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_573(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_406(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_574(int iParam0)
{
	if (func_703(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_575(int iParam0)
{
	if (!func_141(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_576(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_141(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_399(iParam0, 0, 1) };
	iVar5 = joaat("SLOTID_WEAPON_0");
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_430((398 + iVar29), 1);
		if (func_431(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_432(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_577(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_141(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_433(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_406(bParam6), &Var0, 0);
	return uVar4;
}

struct<18> /*144*/ func_578(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_579(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_580(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_406(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_581(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_582(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_704(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_704(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_704(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_583(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_60(18);
		case 2:
			return func_60(20);
		case 1:
			return func_60(19);
		default:
			break;
	}
	return true;
}

int func_584(int iParam0)
{
	return func_705(Global_40.f_11095.f_11[iParam0]);
}

void func_585(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_152() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_60(31))
	{
		return;
	}
	iVar0 = func_584(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_584(iParam0);
	if (func_706(iParam0) && func_707(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_708(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_709(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_266(func_710(iParam0), 0);
					}
					func_711(iParam0, iVar2, iVar3);
					func_712(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_586(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

void func_588(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_589(int iParam0, int iParam1)
{
	if (func_152() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_590(int iParam0)
{
	if (func_152() != -1)
	{
		if (func_491(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_491(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_591(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_491(iParam0, 65536) && !func_491(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_491(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_491(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_592(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_593()
{
	return Global_1905944.f_5694;
}

bool func_594(int iParam0, var uParam1)
{
	if (!func_713(iParam0))
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

int func_595()
{
	return func_714(Global_40.f_12019);
}

int func_596()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_414(iVar1);
		if (func_222(iVar2, 1, 0) || func_602(func_601(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_597()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_715(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_598()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_607(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_599()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_602(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_606(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_607(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_609(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_610(int iParam0)
{
	if (func_716(iParam0) && func_222(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_717(iParam0) && func_718(iParam0))
	{
		return true;
	}
	return false;
}

char* func_611(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_323(iParam0));
}

int func_612(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_613(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_614(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_615(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
		if (iVar0 == Global_1954819.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
}

void func_616(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_617(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_618(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_619(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_HIDE_HUD_COMPONENT(iVar0);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(iVar0);
	}
}

void func_620(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_621(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_622(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_476(iParam0, 1) /*3*/];
}

void func_623()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_719();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_282(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_329(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_282(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_329(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_624(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_406(0);
	*uParam1 = { func_433(iParam0, func_569(0), iParam3, 0) };
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

bool func_625(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_626(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_627()
{
	return Global_1899515;
}

void func_628(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_720(*iParam0);
	iVar1 = func_721(*iParam0);
	iVar2 = func_722(*iParam0);
	iVar3 = func_723(*iParam0);
	iVar4 = func_724(*iParam0);
	iVar5 = func_725(*iParam0);
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
	iVar6 = func_726(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_726(iVar1, iVar0);
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
	func_727(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_629(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_399(iParam0, 1, 0) };
	return func_475(Var0.f_4);
}

int func_630(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

int func_631(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_476(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_480(524288))
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

bool func_632(int iParam0)
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

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_634(int iParam0)
{
	return func_728(iParam0, -1);
}

bool func_635(int iParam0, bool bParam1)
{
	return func_729(func_627(), iParam0, bParam1);
}

bool func_636(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_637()
{
	func_176(-939420910);
	func_176(-1187950766);
	func_176(356365161);
	func_176(753127042);
	func_176(-2038424081);
	func_176(1884271742);
	func_176(459290420);
}

void func_638()
{
	func_176(704802028);
	func_176(588987611);
	func_176(2008888900);
	func_176(1649996811);
	func_176(227918160);
	func_176(168171957);
	func_176(1193080109);
	func_176(-491981251);
	func_176(-639037538);
	func_176(-618620429);
}

bool func_639(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_640(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_641(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_642(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_643(int iParam0, int iParam1)
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

void func_644()
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

void func_645(int iParam0)
{
	func_652(iParam0, 8, 6);
}

void func_646(int iParam0)
{
	func_730(&(Global_1946054.f_2589), iParam0);
}

void func_647(int iParam0, int iParam1)
{
	func_731(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_648(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_649(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_279(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_732(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_647(iVar1, iVar3);
		}
	}
	if (func_501(-1586649372) && func_732(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_647(iVar1, iVar3);
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
						func_647(iVar1, iVar3);
					}
				}
			}
			func_733(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_733(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_647(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_733(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_647(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_647(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_733(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_733(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_647(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_733(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_647(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_647(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_279(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_647(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_632(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_279(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_647(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_137(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_647(iVar1, iVar3);
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
						func_647(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_632(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_137(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_647(iVar1, iVar3);
					}
				}
			}
			switch (func_279(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_279(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_647(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_279(uParam0->f_1[iVar1 /*3*/]) || func_137(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_647(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_650(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_734(0);
	if (iParam2 != 0 && func_735(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_736(iParam0, func_643(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_651(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_152() != -1;
	iVar7 = func_734(0);
	if (func_480(32768))
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
			iVar5 = func_643(iVar0, 1);
			if (func_737(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_737(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_631(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_738(uParam0);
				if (iVar3 > 0)
				{
					if (!func_480(524288))
					{
						func_654(524288);
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
							iVar5 = func_643(iVar0, 1);
							if (func_737(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_737(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_631(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_647(iVar0, iParam2);
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
					func_657(524288);
				}
			}
		}
	}
}

void func_652(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_653(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_739(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_152() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_740(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_676(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_676(Global_40.f_7729);
				Global_1946054.f_1378 = func_676(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_741(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_742(0, 1);
	}
}

void func_654(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_655(struct<4> /*32*/ sParam0)
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
			if (func_743(Param0))
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
			func_744(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_654(8);
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
			if (func_743(Param0))
			{
				return;
			}
			func_744(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_654(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_484(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_656(var uParam0)
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

void func_657(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_658(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_659(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_743(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_743(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_744(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_654(8);
}

bool func_660()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_661(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_662()
{
	float fVar0;
	int iVar1;

	fVar0 = func_745(13);
	iVar1 = func_746(fVar0);
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

float func_663()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_664()
{
	if (func_440())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_665()
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

float func_666()
{
	return Global_1954815.f_3;
}

void func_667(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_747(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_668(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_747(iParam0, 2, 0, 0);
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

float func_669(float fParam0, float fParam1, float fParam2)
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

bool func_670()
{
	return func_745(12) <= -99f;
}

bool func_671()
{
	return func_745(12) >= 99f;
}

int func_672()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_279(iVar1) == -999503751)
		{
			if (func_748() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_673(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	if (func_677(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_674(int iParam0)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	if (func_677(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_496(iParam0))
	{
		return;
	}
	if (!func_674(iParam0))
	{
		func_679(iParam0, 2);
		if (bParam2)
		{
			if (!func_19(0, 0, 1))
			{
				func_410(1, 4);
			}
		}
		if ((!func_678() && !bParam1) && !func_19(0, 0, 1))
		{
			func_119(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_749(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_676(int iParam0)
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

bool func_677(int iParam0, int iParam1)
{
	if (!func_496(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_678()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_679(int iParam0, int iParam1)
{
	if (!func_496(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_680(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946054.f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946054.f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946054.f_2657.f_26;
			break;
		case -413129408:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

void func_681(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_750(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_278(50);
			}
			else
			{
				func_278(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_278(51);
			}
			else
			{
				func_278(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_751(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_310();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_310();
			}
			break;
		case 3:
			func_278(24);
			if (bParam1)
			{
				if (!func_751(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_310();
				}
			}
			break;
	}
}

void func_682(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_752(0))
			{
				iVar0++;
			}
			if (func_752(2))
			{
				iVar0++;
			}
			if (func_752(4))
			{
				iVar0++;
			}
			if (!func_753(16))
			{
				if (iVar0 == 1)
				{
					func_754();
					func_266(456, 1);
					func_755(16);
				}
			}
			if (!func_753(32))
			{
				if (iVar0 >= 3)
				{
					func_754();
					func_266(456, 1);
					func_755(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_752(1))
			{
				iVar0++;
			}
			if (func_752(3))
			{
				iVar0++;
			}
			if (func_752(7))
			{
				iVar0++;
			}
			if (!func_753(1))
			{
				if (iVar0 == 1)
				{
					func_756();
					func_266(457, 1);
					func_755(1);
				}
			}
			if (!func_753(2))
			{
				if (iVar0 >= 3)
				{
					func_756();
					func_266(457, 1);
					func_755(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_752(5))
			{
				iVar0++;
			}
			if (func_752(6))
			{
				iVar0++;
			}
			if (func_752(8))
			{
				iVar0++;
			}
			if (!func_753(4))
			{
				if (iVar0 == 1)
				{
					func_757();
					func_266(455, 1);
					func_755(4);
				}
			}
			if (!func_753(8))
			{
				if (iVar0 >= 3)
				{
					func_757();
					func_266(455, 1);
					func_755(8);
				}
			}
			break;
	}
}

void func_683(var uParam0)
{
	func_503(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_503(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_503(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_684(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_758(uParam0))
	{
		return;
	}
	if (Global_1223851 < 20)
	{
		Global_1223851++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223851.f_1[iVar0 /*21*/] = { Global_1223851.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1223851.f_1[(Global_1223851 - 1) /*21*/] = { Var1 };
}

bool func_685(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_686(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_687(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_505(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

bool func_688()
{
	if (func_759())
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

void func_689(var uParam0, var uParam1)
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

bool func_690(bool bParam0, int iParam1, int iParam2)
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

int func_691(var uParam0)
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
	if (uParam0->f_6 == 3)
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

void func_692(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_166(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_167(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_693(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_694(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_695(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(bParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_696(bool bParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(bParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bParam0);
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
		iVar0 = PED::_0xC22AA08A8ADB87D4(bParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

int func_697(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_475(iVar0);
}

bool func_698(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_625(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_283(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_406(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_699(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_152() == -1)
	{
		if (func_265(43))
		{
			if (func_137(iParam0, 412399755))
			{
				func_460(joaat("EXOTIC_STAGE_01"));
				if (func_461() == 0)
				{
					func_410(0, 10);
					iVar0 = func_760(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_463(iParam0) < func_464(iParam0))
						{
							func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_265(44))
		{
			if (func_137(iParam0, 709057512))
			{
				func_460(joaat("EXOTIC_STAGE_02"));
				if (func_461() == 1)
				{
					func_410(0, 10);
					iVar0 = func_760(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_463(iParam0) < func_464(iParam0))
						{
							func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_265(45))
		{
			if (func_137(iParam0, -1478961327))
			{
				func_460(joaat("EXOTIC_STAGE_03"));
				if (func_461() == 2)
				{
					func_410(0, 10);
					iVar0 = func_760(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_463(iParam0) < func_464(iParam0))
						{
							func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_265(46))
		{
			if (func_137(iParam0, -1238404098))
			{
				func_460(joaat("EXOTIC_STAGE_04"));
				if (func_461() == 3)
				{
					func_410(0, 10);
					iVar0 = func_760(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_463(iParam0) < func_464(iParam0))
						{
							func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_265(47))
		{
			if (func_137(iParam0, 1160548794))
			{
				func_460(joaat("EXOTIC_STAGE_05"));
				if (func_461() == 4)
				{
					func_410(0, 10);
					iVar0 = func_760(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_463(iParam0) < func_464(iParam0))
						{
							func_273(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_700(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_761(bParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_762(bParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_701(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (bParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> /*32*/ func_702()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_703(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_704(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_581(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_705(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_763(iVar6) - func_763(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_705(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_708(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_705(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_763(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_763(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_709(int iParam0)
{
	int iVar0;

	if (func_764(iParam0, &iVar0))
	{
		return func_763(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_765())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_765())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_765())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_711(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> /*48*/ sVar10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_766(iParam0));
	sVar4 = func_768(func_767(iVar3, iParam2));
	sVar6 = func_769(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_770(iParam0));
	iVar8 = func_771(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_772(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_423(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_773(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_712(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_713(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_714(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_715(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
		default:
			break;
	}
	return false;
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_718(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_774(&iVar0, 0, iVar95, &Var1) && !func_774(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_775(iVar0, &Var1);
			if (func_141(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_719()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_776(Global_35, &iVar0);
	Var30 = { func_568(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_777(0);
	func_778(7);
	func_779(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_498() == 1160113249)
	{
		func_779(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_779(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_780(Global_35, &iVar0);
}

int func_720(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_781(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_721(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_722(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_723(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_724(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_725(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_726(int iParam0, int iParam1)
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

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_782(iParam0, iParam6);
	func_783(iParam0, iParam5);
	func_784(iParam0, iParam4);
	func_785(iParam0, iParam3);
	func_786(iParam0, iParam2);
	func_787(iParam0, iParam1);
}

int func_728(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_406(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_782(&uVar6, iVar0);
	func_783(&uVar6, iVar1);
	func_784(&uVar6, iVar2);
	func_785(&uVar6, iVar3);
	func_786(&uVar6, iVar4);
	func_787(&uVar6, iVar5);
	return uVar6;
}

bool func_729(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_788(iParam1) || !func_788(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_730(var uParam0, int iParam1)
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
			if ((func_789(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_789(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_790(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_731(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_791(uParam0, 1))
	{
		func_792(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_732(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_733(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_647(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_647(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_647(iVar2, iVar0);
		}
	}
}

int func_734(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_498();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_735(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_736(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_737(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_476(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_738(var uParam0)
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

void func_739(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_152() == -1)
	{
		func_793(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_794(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_740(int iParam0, int iParam1)
{
	if (func_152() == -1)
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

void func_741(int iParam0, bool bParam1, int iParam2)
{
	func_795(&(Global_1946054.f_1378), iParam0);
	func_796(2, iParam0, 6);
	if (bParam1)
	{
		func_742(0, 1);
	}
}

void func_742(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_797(0);
	}
	if (bParam0)
	{
		func_654(8);
		func_654(512);
	}
	else
	{
		func_654(8);
		func_654(16);
	}
}

bool func_743(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_744(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_745(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_746(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_747(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_512(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_512(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_748()
{
	return Global_1946054.f_1497;
}

char* func_749(int iParam0)
{
	int iVar0;

	iVar0 = func_676(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_611(iVar0);
}

int func_750(int iParam0)
{
	int iVar0;

	if (func_798(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_799(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_800(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_801(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_751(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_222(func_802(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_752(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_222(func_803(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_753(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_754()
{
	int iVar0;

	if (func_152() != -1)
	{
		return;
	}
	func_329(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_584(1);
	func_711(1, iVar0, 0);
}

void func_755(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_756()
{
	int iVar0;

	if (func_152() != -1)
	{
		return;
	}
	func_329(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_584(2);
	func_711(2, iVar0, 0);
}

void func_757()
{
	int iVar0;

	if (func_152() != -1)
	{
		return;
	}
	func_329(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_584(0);
	func_711(0, iVar0, 0);
}

bool func_758(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_759()
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

int func_760(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_463(iVar9);
	iVar2 = func_463(iVar10);
	iVar3 = func_463(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_463(iVar12);
	}
	iVar5 = func_464(iVar9);
	iVar6 = func_464(iVar10);
	iVar7 = func_464(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_464(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

bool func_761(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_804(), 1))
	{
		return true;
	}
	return false;
}

int func_762(bool bParam0, bool bParam1)
{
	return func_805(bParam0, Global_1894899.f_2, bParam1);
}

int func_763(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_764(int iParam0, int iParam1)
{
	return false;
}

bool func_765()
{
	return false;
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_406(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_406(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_406(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> /*32*/ func_767(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_768(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_769(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_770(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
			break;
	}
	return 0;
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_774(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_806(iParam1) && !func_807(iParam1))
	{
		bVar0 = func_808(iParam1);
	}
	else
	{
		return false;
	}
	func_809(uParam3);
	iVar5 = func_810(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var1, bVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

void func_775(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_811(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_812(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_776(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_249(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_777(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_141(iVar1, 0))
		{
			func_813(iVar1, 0, bParam0);
		}
		Global_1946054.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
}

void func_778(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_152() == -1)
	{
		func_814(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar2 = Global_1946054.f_2657[iVar0];
		if (func_279(iVar2) != -999503751)
		{
			func_815(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_816(iVar2, 0))
		{
			func_817(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_779(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_818(iParam0))
	{
		return;
	}
	iVar0 = func_279(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_819(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_820(0))
	{
		func_821(iParam0, 1);
		if (func_498() == 1160113249)
		{
			func_821(func_820(-2125499975), 0);
		}
		else
		{
			func_821(func_820(1160113249), 0);
		}
	}
	func_822();
	if (func_823(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_406(0), iParam0, 0);
	}
	func_817(iParam0, bParam3);
	if (bParam2)
	{
		func_742(0, 0);
	}
}

void func_780(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (func_429((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_781(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_782(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_783(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_784(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_721(*iParam0);
	iVar1 = func_720(*iParam0);
	if (iParam1 < 1 || iParam1 > func_726(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_785(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_787(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_788(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_725(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_724(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_723(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_720(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_721(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_722(iParam0);
	if (iVar5 < 1 || iVar5 > func_726(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_789(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_790(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_791(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_792(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_793(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_794(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_795(var uParam0, int iParam1)
{
	int iVar0;

	if (func_152() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_793(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_794(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_796(int iParam0, int iParam1, int iParam2)
{
	if (func_152() == -1)
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

void func_797(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_798(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (func_137(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_799(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (func_137(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_800(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (func_137(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_801(int iParam0)
{
	if (!func_141(iParam0, 0))
	{
		return false;
	}
	if (func_137(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_802(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_824(iParam0);
		case 1:
			return func_825(iParam0);
		case 2:
			return func_826(iParam0);
		case 3:
			return func_827(iParam0);
	}
	return 0;
}

int func_803(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_828(iParam0);
		case 1:
			return func_829(iParam0);
		case 2:
			return func_830(iParam0);
		case 3:
			return func_831(iParam0);
		case 4:
			return func_832(iParam0);
		case 5:
			return func_833(iParam0);
		case 6:
			return func_834(iParam0);
		case 7:
			return func_835(iParam0);
		case 8:
			return func_836(iParam0);
	}
	return 0;
}

int func_804()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_805(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_837(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_838(bParam0, uVar0, iVar1, bParam2);
}

bool func_806(int iParam0)
{
	iParam0 = func_839(iParam0);
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

bool func_807(int iParam0)
{
	int iVar0;

	iParam0 = func_839(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_806(iParam0))
	{
		return false;
	}
	iVar0 = func_808(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_808(int iParam0)
{
	iParam0 = func_839(iParam0);
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

void func_809(var uParam0)
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

int func_810(int iParam0)
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

void func_811(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(bParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(bParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(bParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_812(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, bParam1, iParam2);
	return uVar2;
}

void func_813(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_279(iParam0))
	{
		case -2061583405:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_840(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_822();
	}
	if (bParam1)
	{
		func_742(0, 0);
	}
}

void func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2.f_14 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2 = { func_578(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_580(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
		func_487(iVar0);
	}
}

void func_815(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_841(iParam2, *uParam0);
	func_842(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_816(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_399(iParam0, 0, 0) };
	Var5 = { func_433(iParam0, Var0, Var0.f_4, 0) };
	if (func_577(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_406(0), &Var5, iParam1);
	return true;
}

void func_817(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_399(iParam0, 0, 0) };
	Var5 = { func_433(iParam0, Var0, Var0.f_4, 0) };
	if (func_577(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_406(0), &Var5, bParam1);
}

bool func_818(int iParam0)
{
	if (func_152() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_819(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_843(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_816(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_279(iParam0) != -999503751)
	{
		func_815(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_820(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_498();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_821(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_399(iParam0, 0, 0) };
	Var5 = { func_433(iParam0, Var0, Var0.f_4, 0) };
	if (func_577(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_406(0), &Var5);
	return 1;
}

void func_822()
{
	int iVar0;

	if (func_152() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946054.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946054.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
}

bool func_823(int iParam0)
{
	return func_845(func_844(iParam0));
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_829(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_833(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

bool func_837(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_152() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
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
			*uParam1 = 69;
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
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
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
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
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
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
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
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_838(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(bParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_68(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_21(iVar2)))
		{
			if (func_21(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

int func_839(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_840(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_843(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_279(iParam0) != -999503751)
		{
			func_846(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19 = (Global_1946054.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_279(iParam0) != -999503751)
	{
		func_846(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_816(iParam0, 1);
	return 1;
}

void func_841(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_842(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_847(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_476(func_629(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_848(uParam0);
	}
}

bool func_843(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_844(int iParam0)
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

bool func_845(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_846(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_849(iParam1);
	func_850(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_851(&(uParam0->f_26), iVar1);
		if (func_852(uParam0->f_26, &iVar0))
		{
			func_853(iVar0, iVar1);
		}
	}
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_854(&(uParam0->f_3));
}

void func_848(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_855(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_849(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_850(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_851(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_847(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_852(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_853(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_854(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_855(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_856(func_498());
	if (*uParam0)
	{
		func_854(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_152() != -1, iParam2);
	*uParam0 = 1;
}

int func_856(int iParam0)
{
	if (func_152() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			case -449205311:
				return 0;
			case 1160113249:
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

