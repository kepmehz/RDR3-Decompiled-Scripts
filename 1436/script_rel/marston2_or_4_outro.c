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
	var uLocal_14[1] = { 0 };
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	struct<4> /*32*/ sLocal_19 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_19);
	}
	func_2(&Local_19, &uScriptParam_0);
	while (!func_3(&Local_19))
	{
		func_4(&Local_19);
		switch (func_5(Local_19))
		{
			case 0:
				if (func_6(&Local_19))
				{
					func_7(&Local_19, 1);
				}
				break;
			case 1:
				if (func_8(&Local_19))
				{
					func_7(&Local_19, 2);
				}
				break;
			case 2:
				if (func_9(&Local_19))
				{
					func_7(&Local_19, 3);
				}
				break;
			case 3:
				func_1(&Local_19);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(Global_1935630, 16384))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(Global_1935630, 32768))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	if (iLocal_18 != -1 && !func_21(Global_35))
	{
		return false;
	}
	if (func_22(5))
	{
		if (!func_23(uParam0))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SACKCORN01X")))
		{
			return false;
		}
	}
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_24(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_25())
	{
		iVar0 = 0;
	}
	if (!func_26(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_27(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_28(&(Global_1359489.f_40), 1);
}

int func_11(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2);
	}
	if (func_22(5))
	{
		STREAMING::LOAD_SCENE_STOP();
	}
	func_30(func_29(65), 0);
	func_30(func_29(66), 0);
	return 1;
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_31(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_27(iParam0, 56, 1);
		func_28(&(Global_1359489.f_40), 1);
	}
	func_32(iParam0, 0);
	func_33(iParam0, 4, 0);
	func_34(iParam0);
	func_35(iParam0);
	func_36(iParam0, 37, 1);
	bVar0 = func_37(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_38(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_39(iParam0, 64, 1))
	{
		func_36(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_36(iParam0, 33, 1);
		func_36(iParam0, 34, 1);
		func_40(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_41(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_27(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_27(iParam0, 35, 1);
			if (bParam8)
			{
				func_27(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_42(iParam0, 0);
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
		func_36(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_27(iParam0, 33, 1);
		func_41(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_28(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_43(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_27(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_44(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_39(iParam0, 45, 1))
	{
		func_36(iParam0, 45, 1);
	}
	func_45(iParam0, 16, 1);
	func_36(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_37(func_46(iParam0), 0))
		{
			func_47(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 - (uParam0->f_3 && iParam1));
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 = (uParam0->f_3 || iParam1);
}

void func_19(var uParam0)
{
	if (func_48(65))
	{
		func_49(0, 1);
	}
	else if (func_48(66))
	{
		func_49(1, 1);
	}
	else if (Global_1898437 == func_29(65))
	{
		func_49(0, 1);
	}
	else if (Global_1898437 == func_29(66))
	{
		func_49(1, 1);
	}
	if (func_22(0) && func_50(66))
	{
		func_49(4, 1);
	}
	else if (func_22(1) && func_50(65))
	{
		func_49(4, 1);
	}
	else if (func_22(0))
	{
		func_49(3, 1);
	}
	else if (func_22(1))
	{
		func_49(2, 1);
	}
	if (func_22(4))
	{
		func_51(&Global_1935630, 1048576);
	}
	if (func_22(2) || func_22(3))
	{
		func_49(5, 1);
	}
	if (func_22(3))
	{
		iLocal_18 = 81;
	}
	else if (func_22(2))
	{
		iLocal_18 = 81;
	}
	else if (func_22(4))
	{
		iLocal_18 = 85;
	}
	if (iLocal_18 != -1)
	{
		func_52(Global_35, iLocal_18);
	}
	if (func_22(5))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_SACKCORN01X"), false);
	}
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_21(int iParam0)
{
	return func_53(iParam0, &(Global_1946054.f_1949));
}

bool func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_14[iVar0] && iVar2) == iVar2;
}

bool func_23(var uParam0)
{
	if (!func_22(5))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = ANIMSCENE::_CREATE_ANIM_SCENE("cutscene@mar24_ptl", 0, "MAR24_PTL", false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_2, true) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_2, "MAR24_PTL") && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "MAR24_PTL"))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "MAR24_PTL");
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2, "MAR24_PTL"))
	{
		return false;
	}
	return true;
}

int func_24(var uParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	func_54(Global_35);
	if (func_22(5))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -2515.059f, 424.7469f, 146.8438f, 90f, false, false, true);
		STREAMING::LOAD_SCENE_START_SPHERE(-2515.059f, 424.7469f, 146.8438f, 20f, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(Global_35, func_55(67), true, false, true, true);
	}
	func_56(Global_35);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (iVar0 != 10)
		{
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_35, iVar0, "ALL");
		}
		iVar0++;
	}
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	if (func_22(5))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
		{
			iLocal_17 = OBJECT::CREATE_OBJECT(joaat("P_CS_SACKCORN01X"), -2517.9f, 424.8f, 147.9f, true, true, false, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_17, -2517.9f, 424.8f, 147.9f, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_17, 0f, 0f, 0f, 2, true);
			}
		}
	}
	if (func_22(2))
	{
		CLOCK::SET_CLOCK_TIME(13, 0, 0);
	}
	else if (func_22(3))
	{
		CLOCK::SET_CLOCK_TIME(18, 0, 0);
	}
	else if (func_22(4))
	{
		CLOCK::SET_CLOCK_TIME(11, 0, 0);
	}
	if (iLocal_18 != -1)
	{
		func_57(Global_35, 1, 0);
	}
	func_58(1, 7);
	func_59(1);
	func_60(joaat("PHR_RANCH_HAND1"));
	func_60(joaat("PHR_RANCH_HAND2"));
	func_60(joaat("PHR_RANCH_HAND3"));
	func_60(joaat("PHR_RANCH_HAND4"));
	func_60(joaat("PHR_RANCH_HAND5"));
	func_61(0);
	return 1;
}

bool func_25()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_26(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_22(4))
	{
		func_62(67, 1, 1);
	}
	else if (func_22(2))
	{
		func_62(65, 1, 1);
	}
	else if (func_22(3))
	{
		func_62(66, 1, 1);
	}
	switch (iLocal_16)
	{
		case 0:
			if (func_22(5))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2, "P_CS_SACKCORN01X", iLocal_17, 0);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_2, "MAR24_PTL", true);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_2);
				func_63(1);
			}
			else
			{
				func_63(3);
			}
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_63(2);
			}
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_2, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::DISPLAY_HUD(true);
				func_63(3);
			}
			break;
		case 3:
			if (func_22(4))
			{
				iVar0 = func_64(67);
				iVar1 = func_65(iVar0);
				if (func_66(iVar0))
				{
					if (func_67(iVar1, 128))
					{
						if (func_67(iVar1, 512))
						{
							func_68(iVar1, 512);
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						if (func_69())
						{
							func_63(4);
						}
					}
				}
			}
			else if (func_22(2))
			{
				iVar0 = func_64(65);
				if (func_66(iVar0))
				{
					iVar1 = func_65(iVar0);
					func_68(iVar1, 512);
					func_63(4);
				}
			}
			else if (func_22(3))
			{
				iVar0 = func_64(66);
				if (func_66(iVar0))
				{
					iVar1 = func_65(iVar0);
					func_68(iVar1, 512);
					func_63(4);
				}
			}
			break;
		case 4:
			break;
	}
	return iLocal_16 == 4;
}

void func_27(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_70(iParam0))
		{
			return;
		}
	}
	func_71(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1 || !func_72(uParam0))
	{
		func_73(uParam0);
	}
}

int func_29(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_30(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_75(iParam0, iParam1);
}

bool func_31(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_70(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_32(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_76(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_33(iParam0, 1, 0);
		}
	}
	func_33(iParam0, 16, bParam1);
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (!func_70(iParam0))
	{
		return;
	}
	func_77(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_34(int iParam0)
{
	func_33(iParam0, 8, 0);
}

void func_35(int iParam0)
{
	func_27(iParam0, 36, 1);
}

void func_36(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_70(iParam0))
		{
			return;
		}
	}
	func_71(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_37(bool bParam0, int iParam1)
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
	if (func_78(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_78(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_78(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_38(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_79(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_70(iParam0))
		{
			return false;
		}
	}
	func_71(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_40(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_80(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_81(iParam0);
		}
	}
	if (func_39(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 137, true);
	}
}

void func_41(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_36(iParam0, 50, 1);
		func_36(iParam0, 48, 1);
		func_36(iParam0, 49, 1);
		func_36(iParam0, 51, 1);
		func_36(iParam0, 52, 1);
		func_36(iParam0, 54, 1);
		func_36(iParam0, 55, 1);
	}
	else
	{
		func_27(iParam0, 50, 1);
		func_27(iParam0, 48, 1);
		func_27(iParam0, 49, 1);
		func_27(iParam0, 51, 1);
		if (bParam3)
		{
			func_27(iParam0, 54, 1);
		}
		else
		{
			func_36(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_27(iParam0, 52, 1);
			if (bParam3)
			{
				func_27(iParam0, 55, 1);
			}
		}
		else
		{
			func_36(iParam0, 52, 1);
			if (!bParam3)
			{
				func_36(iParam0, 55, 1);
			}
		}
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_80(iParam0), 204, false);
	}
}

void func_43(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_39(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_38(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_80(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_82(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_27(iParam0, 2, 1);
	}
	else
	{
		func_83(iParam0);
		func_27(iParam0, 1, 1);
	}
}

void func_45(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_46(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_47(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_70(iParam1))
	{
		return;
	}
	iVar0 = func_46(iParam1);
	if (func_84(iParam1))
	{
		if (!func_85(iParam1))
		{
			return;
		}
	}
	func_36(iParam1, 39, 1);
	func_86(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_86(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_86(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_27(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_87(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_48(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_88(Global_1835011[iParam0 /*74*/].f_1);
}

void func_49(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_14[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_14[iVar0] = (uLocal_14[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_14[iVar0] = (uLocal_14[iVar0] && iVar4);
	}
}

bool func_50(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_89(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52(int iParam0, int iParam1)
{
	return func_90(iParam0, iParam1, &(Global_1946054.f_1949), 1, 0, 0);
}

bool func_53(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(uParam1->f_135[iVar0 /*2*/]))
		{
			return false;
		}
		iVar0++;
	}
	return PED::IS_PED_READY_TO_RENDER(iParam0);
}

void func_54(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

Vector3 func_55(int iParam0)
{
	if (func_91(iParam0))
	{
		return func_92(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

void func_56(int iParam0)
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

int func_57(bool bParam0, bool bParam1, bool bParam2)
{
	return func_93(bParam0, &(Global_1946054.f_1949), bParam1, 0, 1, bParam2);
}

void func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < iParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_94(iVar0) >= iParam1)
			{
			}
			else
			{
				func_95(iVar0, iParam1 > 7);
			}
			iVar0++;
		}
		iVar1++;
	}
	func_96(10, 0, 0, 0, 0);
}

void func_59(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		func_97();
		iVar0++;
	}
	func_96(9, 0, 0, 0, 0);
}

void func_60(int iParam0)
{
	int iVar0;

	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(iParam0);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		PERSCHAR::_0xD4B614179BCD0654(iVar0);
	}
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_98(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || func_99(iVar1))
			{
				if (!bParam0 || (iVar0 != 7 && iVar0 != 9))
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar1);
				}
			}
		}
		iVar0++;
	}
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return 1;
	}
	if (func_101(32768))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		return 1;
	}
	iVar0 = func_65(func_64(iParam0));
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 1;
	}
	if (!func_66(func_64(iParam0)))
	{
		func_102(iParam0, 0, 0, -1);
	}
	if (func_103(iVar0))
	{
		if (!Global_1835011[iParam0 /*74*/].f_71)
		{
			if (bParam1)
			{
				func_104(iVar0, 256);
			}
			if (bParam2)
			{
				func_104(iVar0, 512);
			}
			Global_1835011[iParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}
	return 0;
}

void func_63(int iParam0)
{
	if (iLocal_16 != iParam0)
	{
		iLocal_16 = iParam0;
	}
}

int func_64(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_65(int iParam0)
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

bool func_66(int iParam0)
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
		iVar0 = func_105(iParam0);
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

bool func_67(int iParam0, int iParam1)
{
	return (func_103(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

void func_68(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

bool func_69()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_70(int iParam0)
{
	return iParam0 > -1;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_72(var uParam0)
{
	return func_106(*uParam0, 1);
}

void func_73(var uParam0)
{
	func_107(uParam0, 0f);
}

bool func_74(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_75(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

bool func_76(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_77(var uParam0, int iParam1, bool bParam2)
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

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79(int iParam0)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_108(iParam0);
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

int func_80(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_81(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_80(iParam0)))
		{
			func_109(iParam0, 67108864, 1);
			func_36(iParam0, 19, 1);
		}
	}
}

float func_82(int iParam0)
{
	if (!func_70(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_83(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_80(iParam0);
	iVar1 = func_38(iParam0, 0);
	func_110(iParam0, bVar0);
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

bool func_84(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_85(int iParam0)
{
	if (!func_70(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_86(int iParam0, int iParam1, bool bParam2)
{
	if (!func_70(iParam0))
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

int func_87(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_70(iParam0))
	{
		return 0;
	}
	bVar0 = func_46(iParam0);
	if (func_37(bVar0, 0))
	{
		if (func_37(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_84(iParam0)) || func_85(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_111(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_112(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_113(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_114(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(iParam0, 0));
					func_115(iParam0);
				}
			}
			else
			{
				if (func_31(iParam0, 32768, 1))
				{
					iVar2 = func_114(iParam0, 0);
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
		if (func_37(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_31(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_113(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_114(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_114(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_113(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_116(iParam0, 0);
	return 1;
}

bool func_88(int iParam0)
{
	int iVar0;

	iVar0 = func_117(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_89(int iParam0, bool bParam1)
{
	switch (func_117(iParam0))
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

bool func_90(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_118(iParam1);
	}
	if (iVar0 == -1 && !func_120(iVar1, func_119()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && func_121(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_122(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_123(uParam2);
		}
	}
	if (!func_121(uParam2, 1))
	{
		func_124(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_125(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		func_126(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return func_122(iParam0, uParam2);
}

bool func_91(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_127(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_92(int iParam0)
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

int func_93(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_53(bParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_128(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_129(Global_40.f_7729, 4096);
	func_130(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	func_131(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_132(uParam1->f_1);
	}
	func_133(&(Global_1946054.f_1497), iVar4, 0);
	func_134(iVar3, bParam0, bVar0, 1, bVar1, 0);
	func_135(bParam0);
	if (bParam2)
	{
		func_123(uParam1);
	}
	if (bParam3)
	{
		func_136();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_137(0);
		}
		else
		{
			func_137(2048);
		}
	}
	return 1;
}

int func_94(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_138(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_139(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_140(iVar0);
	func_141(iParam0, iVar0, 0);
	if (func_139(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_138(iParam0);
		}
		else
		{
			func_142(iParam0);
		}
	}
	func_143();
}

void func_96(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_144(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_145(Var0);
}

void func_97()
{
	int iVar0;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_146();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_147(iVar0, 0);
	if (func_148())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			func_146();
		}
		else
		{
			func_149();
		}
	}
	func_150();
}

int func_98(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_99(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_101(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_102(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_151(iParam0))
	{
		return 0;
	}
	if ((func_89(Global_1347702[59 /*49*/].f_15, 1) && !func_89(Global_1347702[61 /*49*/].f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return 0;
	}
	if (func_152(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !func_153(iParam0)) && !Global_43891)
		{
			func_155(iParam0, BUILTIN::VDIST2(func_154(iParam0), Global_36), -1, 1, 1);
			func_156(&(Global_1835011[iParam0 /*74*/]), 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_158(func_157(iParam0), func_64(iParam0), 0, Global_1835011[iParam0 /*74*/].f_21, iParam3))
		{
			return 0;
		}
		if (func_159(1) > 1)
		{
			if (Global_1835011[iParam0 /*74*/].f_73 <= 0)
			{
				Global_1835011[iParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - Global_1835011[iParam0 /*74*/].f_73) < 60000)
			{
				if (func_160(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && Global_1357549.f_1494 & 32768 != 0) && func_162(Global_35, func_161(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
					{
						Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, func_161(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_161(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_163(Global_1835011[iParam0 /*74*/].f_1);
	if (!func_103(iVar0))
	{
		return 0;
	}
	else if (Global_1835011[iParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[iParam0 /*74*/].f_73 = 0;
		func_164(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
		}
	}
	if (bParam1)
	{
		func_165(Global_1835011[iParam0 /*74*/].f_1);
	}
	else if (!Global_1879534)
	{
		func_166(4);
	}
	return 1;
}

bool func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_104(int iParam0, int iParam1)
{
	if (!func_103(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

int func_105(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_167(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_106(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_107(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_168() - fParam1);
	func_169(uParam0, 1);
	func_170(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_108(int iParam0)
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

void func_109(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_110(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_171(bParam1);
	}
}

float func_111(int iParam0, bool bParam1, bool bParam2)
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
	return func_172(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_112(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_173(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_46(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
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

int func_114(int iParam0, bool bParam1)
{
	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_174(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_115(int iParam0)
{
	int iVar0;

	if (!func_70(iParam0))
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

void func_116(int iParam0, int iParam1)
{
	if (!func_70(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

int func_117(int iParam0)
{
	if (!func_74(iParam0))
	{
		return -1;
	}
	return func_105(iParam0);
}

int func_118(int iParam0)
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

int func_119()
{
	return Global_1946054.f_1;
}

bool func_120(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_175(iParam1);
	func_176(&(Global_1946054.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964));
}

bool func_121(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_122(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!func_121(uParam1, 2))
	{
		iVar1 = PED::_GET_META_PED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (uParam1->f_1.f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, uParam1->f_1.f_1[iVar0 /*3*/], 0, false, 0);
				uParam1->f_135[uParam1->f_134 /*2*/].f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_126(uParam1, 2);
	}
	return func_53(iParam0, uParam1);
}

void func_123(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(uParam0->f_135[iVar0 /*2*/]))
		{
			PED::_0x13E7320C762F0477(uParam0->f_135[iVar0 /*2*/]);
		}
		uParam0->f_135[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1.f_1[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	func_177(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_124(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_125(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_178(uParam0, iParam3, iParam2) && !func_179(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_180(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/]))
		{
			func_181(1108822547);
		}
		else
		{
			func_182(1108822547);
		}
	}
	func_183(uParam0, 0, 0);
	func_184(iParam5);
	return true;
}

void func_126(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_127(var uParam0)
{
	if (func_185(&(uParam0->f_29), 62))
	{
		switch (func_186())
		{
			case 1:
				if (!func_185(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_185(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_185(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_185(&(uParam0->f_29), 32))
				{
					if (func_185(&(uParam0->f_29), 2))
					{
						if (func_188(func_187()) < 5)
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

int func_128(int iParam0)
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

void func_129(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_189(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

void func_130(int iParam0, int iParam1)
{
	if (!func_189(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_131(var uParam0)
{
	int iVar0;

	Global_1946054.f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_175(0);
	func_176(&(Global_1946054.f_964), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1946054.f_964), 2049745650))
	{
		return -1;
	}
	return func_190(iVar0);
}

void func_133(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_191(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_192(iVar0, 1);
			if (func_193(iVar0, iParam1))
			{
				vVar4 = { func_194(iVar0, -1) };
				if ((vVar4.x != Global_1946054.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_195(iVar7, 4))
				{
					func_196(iVar7, 4, 6);
				}
			}
			else
			{
				func_197(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946054.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_134(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_128(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_198() != -1)
	{
		return;
	}
	func_199();
	if (bParam5)
	{
		if (!func_125(&(Global_1946054.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_180(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
	{
		func_200();
	}
	func_201(iVar3, 1, 1, 1, 1, 1);
	func_96(31, 0, 0, 0, 0);
	func_137(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			func_96(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_96(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_202(&(Global_1946054.f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_135(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_136()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_180(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946054.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_203(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_204(1);
	STREAMING::REMOVE_ANIM_DICT(func_203());
}

void func_137(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_205(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_206(Var0);
}

void func_138(int iParam0)
{
	bool bVar0;

	bVar0 = func_139(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !func_139(iParam0))
	{
		func_207(490, 1);
		func_208(iParam0, 0);
	}
}

bool func_139(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_140(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_207(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && func_89(Global_1835011[4 /*74*/].f_1, 1))
	{
		func_207(493, 0);
	}
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_209(iParam0))
	{
		return;
	}
	if (!func_210(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_139(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_187();
		func_211(iParam0, &iVar0, &iVar1, bVar2);
		func_212(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_142(int iParam0)
{
	bool bVar0;

	bVar0 = func_139(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !func_139(iParam0))
	{
		func_207(490, 1);
		func_208(iParam0, 0);
	}
}

void func_143()
{
	int iVar0;

	iVar0 = func_187();
	func_212(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_94(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	if (func_94(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	if (func_94(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
}

void func_144(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_145(struct<4> /*32*/ sParam0)
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
			if (func_213(Param0))
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
			func_214(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_144(8);
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
			if (func_213(Param0))
			{
				return;
			}
			func_214(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_144(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_215(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_146()
{
	bool bVar0;

	bVar0 = func_148();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !func_148())
	{
		func_216(14);
	}
}

void func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_217(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_187();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_148());
		func_218(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_212(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

bool func_148()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_149()
{
	bool bVar0;

	bVar0 = func_148();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !func_148())
	{
		func_216(14);
	}
}

void func_150()
{
	int iVar0;

	if (func_219() >= 7)
	{
		iVar0 = func_187();
		func_212(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
}

bool func_151(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_220(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_152(int iParam0, bool bParam1, bool bParam2)
{
	if (func_221(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0)
{
	return func_222(iParam0);
}

Vector3 func_154(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_155(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_101(32768))
	{
		return 0;
	}
	iVar0 = func_198();
	if ((bParam4 && func_185(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !func_185(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (func_223())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!func_224(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_89(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_225()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_89(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_225()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_89(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (func_226(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_227(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (func_91(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_92(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_55(iParam0));
				}
			}
			else if (func_91(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, func_92(iParam0), func_228(iParam0), func_229(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(1673015813, func_230(iParam0), func_231(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_91(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_154(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_92(iParam0));
				bVar2 = true;
			}
		}
		else if (func_153(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(-1337945352, func_55(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_55(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_55(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_91(iParam0))
			{
				func_104(iParam2, 4194304);
			}
			else
			{
				func_68(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!func_185(&(Global_1835011[iParam0 /*74*/].f_29), 1024) && !func_153(iParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 580546400);
			func_232(&(Global_1835011[iParam0 /*74*/].f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_153(iParam0))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, -1986290853);
	}
	if (bParam3 || func_227(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	iVar4 = func_233(Global_40.f_4283);
	if (func_234(iVar4) && func_235(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = func_236(iVar4);
	}
	if (func_237(iParam0, bVar5, iVar4))
	{
		func_238(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_239(579))
	{
		func_240(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_185(&(Global_1835011[iParam0 /*74*/].f_29), 4096) && !func_185(&(Global_1835011[iParam0 /*74*/].f_29), 8192)) && IntToFloat(func_225()) >= 10f) && !Global_1935630.f_12) && !Global_16) && !func_241(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_226(iParam0, iVar0) || (fParam1 >= (func_242(iParam0) * func_242(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_243(&cVar7, 10000, 0, 0, 0, 1);
			func_232(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
		}
	}
	return 1;
}

void func_156(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_157(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_30;
}

bool func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_198() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_244(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_245(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_246(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_109(iVar0, 512, 1);
			}
			else
			{
				func_45(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_159(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case 987244216:
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
						if (func_247(Global_1347702[iVar1 /*49*/].f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
							if (func_100(iVar2) && !func_222(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_160(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	iVar0 = func_157(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_246(iVar1, &iVar0))
		{
			bVar2 = func_80(func_248(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else
			{
				if (bParam1 && func_39(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_39(iVar1, 47, 1))
				{
					return true;
				}
				if (!PED::_0x5102307CE88798EB(bVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(bVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(bVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

Vector3 func_161(int iParam0)
{
	return func_55(iParam0);
}

bool func_162(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_172(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_220(iParam0))
	{
		return -1;
	}
	if (func_198() != -1)
	{
		iVar2 = func_65(iParam0);
		if (iVar2 >= 0)
		{
			func_249(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_250(iVar1, 1);
			func_249(iParam0, 1);
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
		iVar2 = func_65(iParam0);
		if (iVar2 >= 0)
		{
			func_249(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_74(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_250(iVar0, 1);
					func_249(iParam0, 1);
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

void func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_157(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_246(iVar1, &iVar0))
		{
			bVar2 = func_80(func_248(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(bVar2))
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(bVar2);
			}
		}
		iVar1++;
	}
}

void func_165(int iParam0)
{
	func_251(iParam0);
}

void func_166(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_167(int iParam0)
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

float func_168()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_169(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_170(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_171(bool bParam0)
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

float func_172(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_70(iParam0))
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
	if (!func_70(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_174(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_70(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_112(iParam0, 1);
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

int func_175(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_119();
	}
	if (func_198() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_176(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_177(var uParam0)
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

bool func_178(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_252(iParam1) != iParam2)
	{
		return false;
	}
	if (func_253(2, iParam1))
	{
		func_254(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_179(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;

	Var4 = func_175(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946054.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_133(uParam0, func_190(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_255(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = iVar1;
				Global_1946054.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_256(iVar3) && func_257(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946054.f_2652)
						{
							func_258(uParam0, uParam0->f_1[Global_1946054.f_2612[iVar1] /*3*/], Global_1946054.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

bool func_180(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_181(int iParam0)
{
	func_196(iParam0, 8, 6);
}

void func_182(int iParam0)
{
	func_197(iParam0, 8, 6);
}

void func_183(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_198() != -1;
	iVar7 = func_259(0);
	if (func_180(32768))
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
			iVar5 = func_192(iVar0, 1);
			if (func_195(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_195(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_260(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_261(uParam0);
				if (iVar3 > 0)
				{
					if (!func_180(524288))
					{
						func_144(524288);
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
							iVar5 = func_192(iVar0, 1);
							if (func_195(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_195(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_260(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_262(iVar0, iParam2);
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
					func_204(524288);
				}
			}
		}
	}
}

void func_184(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_185(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_186()
{
	return Global_1899516;
}

int func_187()
{
	return Global_1899515;
}

int func_188(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_189(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_190(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_191(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_192(int iParam0, int iParam1)
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

bool func_193(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

Vector3 func_194(int iParam0, int iParam1)
{
	if (func_198() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_195(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_255(iParam0, 1) /*11*/].f_10 || iParam1);
}

int func_198()
{
	return Global_1572887.f_12;
}

void func_199()
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

void func_200()
{
	func_177(&(Global_1946054.f_2776));
	func_204(32768);
	func_196(1108822547, 8, 6);
}

void func_201(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_263()) || bParam5)
		{
			func_264();
		}
	}
	if (func_198() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_265(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_118(Global_40.f_7729);
				Global_1946054.f_1378 = func_118(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_266(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_267(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_268(0, 1);
	}
	func_184(0);
}

void func_202(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_198() != -1;
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
			func_144(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_269(bParam1, 29, bVar4, 1, 0);
			func_269(bParam1, 31, bVar4, 1, 0);
			func_269(bParam1, 30, bVar4, 1, 0);
			func_269(bParam1, 22, bVar4, 1, 0);
			func_269(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_180(32768) && func_195(1108822547, 8)) && func_193(10, iParam3))
	{
		func_270(bParam1, 0, 1);
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
			iVar3 = func_192(iVar1, 1);
			if (func_195(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_193(iVar1, iParam3))
				{
				}
				else if ((func_195(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_195(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_269(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_197(iVar3, 1, 6);
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
								func_269(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_195(iVar3, 1))
							{
								func_196(iVar3, 1, 6);
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

char* func_203()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_204(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_205(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_206(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_213(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_213(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_214(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_144(8);
}

void func_207(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_271(iParam0, &iVar0, &iVar1);
	if (!func_272(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_273(iVar0, iVar1);
}

void func_208(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
}

bool func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_210(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

void func_211(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_275(uParam1, uParam2, &uVar0, &uVar1, 0, func_274(iParam0));
	}
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_276(*iParam0);
	iVar1 = func_277(*iParam0);
	iVar2 = func_278(*iParam0);
	iVar3 = func_188(*iParam0);
	iVar4 = func_279(*iParam0);
	iVar5 = func_280(*iParam0);
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
	iVar6 = func_281(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_281(iVar1, iVar0);
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
	func_282(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_213(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_214(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_206(Var0);
}

void func_216(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

bool func_217(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

void func_218(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*uParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_275(uParam1, uParam2, &uVar0, &uVar1, 0, func_283());
	}
}

int func_219()
{
	return Global_40.f_7748.f_1;
}

bool func_220(int iParam0)
{
	return func_117(iParam0) == 0;
}

bool func_221(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_284(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_222(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_223()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_224(int iParam0)
{
	if (func_198() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_89(Global_1347702[21 /*49*/].f_15, 1);
		case 44:
			return func_89(Global_1347702[83 /*49*/].f_15, 1);
	}
	return true;
}

int func_225()
{
	return Global_1898438;
}

bool func_226(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_91(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

bool func_227(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

Vector3 func_228(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_230(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_231(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_232(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

bool func_234(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_235(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_236(int iParam0)
{
	if (!func_285(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_286(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_287(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_287(iParam0), false) <= func_288();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_288();
	}
	return func_289();
}

bool func_237(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

void func_238(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_74(iParam0))
	{
		return;
	}
	switch (func_290(iParam0))
	{
		case 1:
			iVar0 = func_291(iParam0);
			if (func_292(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_226(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_226(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
			{
				iVar2 = -1559907306;
			}
			else
			{
				iVar2 = 1673015813;
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!func_153(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (func_227(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_291(iParam0);
			if (func_293(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_294(iVar1))
				{
					case -1337945352:
						iVar2 = 588610391;
						break;
					case 2103462781:
						iVar2 = -1032930804;
						break;
					case -1485222547:
						iVar2 = 13700166;
						break;
					case 1673015813:
						iVar2 = -592708248;
						break;
					default:
						iVar2 = 588610391;
						break;
				}
			}
			else
			{
				iVar2 = func_294(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_295(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_198() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_240(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_271(iParam0, &iVar0, &iVar1);
	if (!func_272(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_296(iParam0, 1024))
	{
		return;
	}
	func_273(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_241(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

float func_242(int iParam0)
{
	return (func_231(iParam0) / 2f);
}

var func_243(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_244(int iParam0, bool bParam1, bool bParam2)
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
		if (func_297())
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
		iVar0 = func_291(Global_1898164.f_1[0 /*5*/]);
		if (func_298(iVar0) && func_247(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_74(Global_1898164.f_1[0 /*5*/]))
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

bool func_245(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_246(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0 /*60*/].f_59 != 0 && Global_40.f_4942[iVar0 /*60*/].f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_246(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_299(iParam0);
	return (*iParam1 && iVar0) != 0;
}

bool func_247(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_248(int iParam0)
{
	if (!func_100(iParam0))
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

void func_249(int iParam0, bool bParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_220(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_300(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_300(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_290(iParam0), func_291(iParam0), func_301(iParam0), func_300(iParam0), Global_36);
		}
	}
	func_302(iParam0, 1);
	bParam1 = bParam1;
}

void func_250(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_303(Global_1898330[iParam0]);
		func_304(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

void func_251(int iParam0)
{
	if (!func_74(iParam0))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	func_302(iParam0, 2);
}

int func_252(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_263();
	}
	if (func_198() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

bool func_253(int iParam0, int iParam1)
{
	if (func_198() == -1)
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

void func_254(var uParam0, int iParam1)
{
	int iVar0;

	if (func_198() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_255(int iParam0, int iParam1)
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

int func_256(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946054.f_964.f_2 = 0;
	if (func_198() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_176(&(Global_1946054.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946054.f_964), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_257(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

void func_258(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_305(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_193(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_262(iVar1, iVar3);
		}
	}
	if (func_306(-1586649372) && func_193(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_262(iVar1, iVar3);
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
						func_262(iVar1, iVar3);
					}
				}
			}
			func_307(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_307(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_262(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_307(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_262(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_262(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_307(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_307(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_262(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_307(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_262(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_262(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_305(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_262(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_308(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_305(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_262(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_309(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_262(iVar1, iVar3);
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
						func_262(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_308(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_309(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_262(iVar1, iVar3);
					}
				}
			}
			switch (func_305(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_305(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_262(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_305(uParam0->f_1[iVar1 /*3*/]) || func_309(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_262(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_259(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_119();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_255(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_180(524288))
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

int func_261(var uParam0)
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

void func_262(int iParam0, int iParam1)
{
	func_310(&(Global_1946054.f_2589), iParam0, iParam1);
}

int func_263()
{
	if (func_198() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_264()
{
	int iVar0;

	Global_1946054.f_1497 = Global_1946054.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_265(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_175(0);
	iVar1 = 0;
	func_176(&(Global_1946054.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946054.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_267(int iParam0, bool bParam1, int iParam2)
{
	func_311(&(Global_1946054.f_1378), iParam0);
	func_312(2, iParam0, 6);
	if (bParam1)
	{
		func_268(0, 1);
	}
}

void func_268(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_184(0);
	}
	if (bParam0)
	{
		func_144(8);
		func_144(512);
	}
	else
	{
		func_144(8);
		func_144(16);
	}
}

void func_269(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_192(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_313(iParam4);
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

void func_270(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_195(1108822547, 6))
	{
		if (bParam2)
		{
			func_269(bParam0, iVar0, func_198() != -1, 0, 0);
			func_197(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_196(1108822547, 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

void func_271(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_272(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_314(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_315(iParam0))
	{
		return false;
	}
	if (func_316(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_296(iParam0, 1)) || func_101(32768))
	{
		if (!func_296(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_317())
	{
		return false;
	}
	return true;
}

void func_273(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_274(int iParam0)
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

void func_275(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_318(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = func_319(BUILTIN::TO_FLOAT(*uParam1), fVar3);
	iVar2 = func_320(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
	*uParam1 = (*uParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*uParam1 = (*uParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*uParam1 = (*uParam1 * -1);
		*uParam0 = (*uParam0 * -1);
	}
}

int func_276(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_321(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_277(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_278(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_279(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_280(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_281(int iParam0, int iParam1)
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

void func_282(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_322(iParam0, iParam6);
	func_323(iParam0, iParam5);
	func_324(iParam0, iParam4);
	func_325(iParam0, iParam3);
	func_326(iParam0, iParam2);
	func_327(iParam0, iParam1);
}

int func_283()
{
	if (func_328(8))
	{
		return 8;
	}
	else if (func_328(4))
	{
		return 4;
	}
	else if (func_328(2))
	{
		return 2;
	}
	return 1;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)
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

bool func_285(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_286(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_287(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_288()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}
	return 25f;
}

bool func_289()
{
	return Global_1894899 & 2 != 0;
}

int func_290(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	return func_329(func_303(iParam0));
}

int func_291(int iParam0)
{
	if (!func_74(iParam0))
	{
		return -1;
	}
	return func_330(func_303(iParam0));
}

bool func_292(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_237(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_293(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_331(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_294(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_298(iParam0))
	{
		return iVar0;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		iVar0 = 1673015813;
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = 2103462781;
		}
		else
		{
			iVar0 = -1337945352;
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = 2103462781;
	}
	else
	{
		iVar0 = -1337945352;
	}
	return iVar0;
}

void func_295(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1986290853);
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 495758964);
				break;
		}
	}
}

bool func_296(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_297()
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

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_299(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_300(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_301(int iParam0)
{
	if (!func_74(iParam0))
	{
		return -1;
	}
	return func_332(func_303(iParam0));
}

void func_302(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	func_333(iParam0, iParam1);
}

int func_303(int iParam0)
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

void func_304(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_329(iParam0);
	*uParam1 = func_330(iParam0);
	*uParam2 = func_332(iParam0);
}

int func_305(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_334(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_306(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_255(iParam0, 1) /*3*/] != Global_1946054.f_57[func_255(iParam0, 1) /*11*/];
}

void func_307(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_262(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_262(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_262(iVar2, iVar0);
		}
	}
}

bool func_308(int iParam0)
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

bool func_309(int iParam0, int iParam1)
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

void func_310(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_335(uParam0, 1))
	{
		func_336(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_311(var uParam0, int iParam1)
{
	int iVar0;

	if (func_198() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_337(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_338(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (func_198() == -1)
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

int func_313(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0);
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

bool func_314(int iParam0, int iParam1)
{
	if (func_198() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_315(int iParam0)
{
	if (func_198() != -1)
	{
		if (func_296(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_296(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_296(iParam0, 65536) && !func_296(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_296(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_296(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_317()
{
	return Global_1905944.f_5694;
}

int func_318(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_319(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_320(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_322(int iParam0, int iParam1)
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

void func_323(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_324(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_277(*iParam0);
	iVar1 = func_276(*iParam0);
	if (iParam1 < 1 || iParam1 > func_281(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_325(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_326(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_327(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_328(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

int func_329(int iParam0)
{
	return iParam0 & 31;
}

int func_330(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_331(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

int func_332(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_333(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_339(iParam0);
	}
	else
	{
		func_340(iParam0, iParam1);
	}
	func_341();
}

bool func_334(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_335(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_336(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_337(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_338(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

int func_339(int iParam0)
{
	int iVar0;

	iVar0 = func_167(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_342(iVar0);
}

int func_340(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (Global_1058888.f_40431 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { Var0 };
		Global_1058888.f_40431++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[iVar2 /*2*/])
		{
			func_343(iVar2);
			Global_1058888.f_40431.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888.f_40431 < 31)
	{
		iVar2 = Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[iVar2 /*2*/] = { Var0 };
		Global_1058888.f_40431++;
		if (Global_1058888.f_40431 > 32)
		{
			Global_1058888.f_40431 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_341()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_342(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40431)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40431 < 32)
	{
		Global_1058888.f_40431.f_1[Global_1058888.f_40431 /*2*/] = { Var1 };
	}
	Global_1058888.f_40431 = (Global_1058888.f_40431 - 1);
	if (Global_1058888.f_40431 < 0)
	{
		Global_1058888.f_40431 = 0;
	}
	return 1;
}

int func_343(int iParam0)
{
	int iVar0;
	struct<2> /*16*/ sVar1;

	iVar0 = (Global_1058888.f_40431 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40431.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40431.f_1[iVar0 /*2*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { Var1 };
	Global_1058888.f_40431++;
	if (Global_1058888.f_40431 > 32)
	{
		Global_1058888.f_40431 = 32;
	}
	return 1;
}

