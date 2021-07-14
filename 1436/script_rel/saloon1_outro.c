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
	int iLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	float fLocal_13 = 0f;
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	bool bLocal_16 = false;
	int iLocal_17 = 0;
	struct<4> /*32*/ sLocal_18 = { 0, 0, 0, 0 } ;
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
		func_1(&Local_18);
	}
	func_2(&Local_18, &uScriptParam_0);
	while (!func_3(&Local_18))
	{
		func_4(&Local_18);
		switch (func_5(Local_18))
		{
			case 0:
				if (func_6(&Local_18))
				{
					func_7(&Local_18, 1);
				}
				break;
			case 1:
				if (func_8(&Local_18))
				{
					func_7(&Local_18, 2);
				}
				break;
			case 2:
				if (func_9(&Local_18))
				{
					func_7(&Local_18, 3);
				}
				break;
			case 3:
				func_1(&Local_18);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_18);
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
	if (bLocal_14)
	{
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_22())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
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
			func_24(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_25(&(Global_1359489.f_40), 1);
}

int func_11(var uParam0)
{
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, false);
		PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0f, -1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", false, -1);
	}
	else
	{
		func_26(iLocal_15);
		func_27(&iLocal_17, bLocal_16, 0);
		func_28(bLocal_16);
	}
	func_29();
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
	return func_30(iParam0, 16, 1);
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
		func_24(iParam0, 56, 1);
		func_25(&(Global_1359489.f_40), 1);
	}
	func_31(iParam0, 0);
	func_32(iParam0, 4, 0);
	func_33(iParam0);
	func_34(iParam0);
	func_35(iParam0, 37, 1);
	bVar0 = func_36(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_37(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (func_38(iParam0, 64, 1))
	{
		func_35(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_35(iParam0, 33, 1);
		func_35(iParam0, 34, 1);
		func_39(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_40(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_24(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_24(iParam0, 35, 1);
			if (bParam8)
			{
				func_24(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_41(iParam0, 0);
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
		func_35(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_24(iParam0, 33, 1);
		func_40(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_25(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_42(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_24(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_43(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_38(iParam0, 45, 1))
	{
		func_35(iParam0, 45, 1);
	}
	func_44(iParam0, 16, 1);
	func_35(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_36(func_45(iParam0), 0))
		{
			func_46(0, iParam0, bParam3, 0, bParam2);
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
	if (func_47(Global_1835011[9 /*74*/].f_1) == 1)
	{
		bLocal_14 = true;
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
		{
			iLocal_15 = uParam0->f_2;
			ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(iLocal_15);
		}
	}
	if (bLocal_14)
	{
		bLocal_16 = VOLUME::_CREATE_VOLUME_BOX(-277.092f, 800.382f, 119.1905f, 0f, 0f, 9.954012f, 4.771447f, 2.07305f, 1.824199f);
		iLocal_17 = func_48(bLocal_16, 0, 0, 0);
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_21(var uParam0)
{
	if (!bLocal_14)
	{
		AUDIO::SET_PED_IS_DRUNK(Global_35, true);
		PED::_0x406CCF555B04FAD3(Global_35, 1, 0.75f);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "IsDrunk", true, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", 0.75f, -1);
		fLocal_13 = 0.75f;
		func_49(&uLocal_10);
	}
	if (bLocal_14)
	{
		CAM::_0x8370D34BD2E60B73();
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	return 1;
}

bool func_22()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_23(var uParam0)
{
	float fVar0;
	float fVar1;

	if (!bLocal_14)
	{
		if ((!PED::_IS_PED_DRUNK(Global_35) || PED::_0x6FB76442469ABD68(Global_35) != fLocal_13) || PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "Drunkness") != fLocal_13)
		{
			AUDIO::SET_PED_IS_DRUNK(Global_35, true);
			PED::_0x406CCF555B04FAD3(Global_35, 1, fLocal_13);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
		}
		switch (iLocal_9)
		{
			case 0:
				if (func_50(&uLocal_10) >= 3f)
				{
					func_49(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 1:
				fVar0 = func_50(&uLocal_10);
				fVar1 = (1f - ((4f - fVar0) / 4f));
				fLocal_13 = (0.75f - (0.75f * fVar1));
				fLocal_13 = func_51(fLocal_13, 0f, 0.75f);
				PED::_0x406CCF555B04FAD3(Global_35, 1, fLocal_13);
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Drunkness", fLocal_13, -1);
				if (fLocal_13 <= 0f)
				{
					return true;
				}
				break;
		}
	}
	else
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_15))
		{
			return true;
		}
		switch (iLocal_9)
		{
			case 0:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_15, false) && func_52(iLocal_15, "pl_getup"))
				{
					iLocal_9++;
				}
				break;
			case 1:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (func_53() || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_15, "s_getup", true))
				{
					if (!ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(iLocal_15, "s_getup", true))
					{
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iLocal_15, "pl_getup", true);
					}
					iLocal_9++;
				}
				break;
			case 2:
				CAM::_0x8370D34BD2E60B73();
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(iLocal_15, "ARTHUR"))
				{
					func_49(&uLocal_10);
					iLocal_9++;
				}
				break;
			case 3:
				if (func_50(&uLocal_10) >= 3f)
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_24(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1 || !func_56(uParam0))
	{
		func_49(uParam0);
	}
}

void func_26(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_27(int iParam0, bool bParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(bParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(bParam1);
	POPULATION::_0x74C2B3DC0B294102(bParam1);
	if (PED::_0x91A5F9CBEBB9D936(*iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*iParam0, bParam2);
	}
}

void func_28(bool bParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_DELETE_VOLUME(bParam0);
	}
}

void func_29()
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

bool func_30(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_31(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_57(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_32(iParam0, 1, 0);
		}
	}
	func_32(iParam0, 16, bParam1);
}

void func_32(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	func_58(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_33(int iParam0)
{
	func_32(iParam0, 8, 0);
}

void func_34(int iParam0)
{
	func_24(iParam0, 36, 1);
}

void func_35(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_36(bool bParam0, int iParam1)
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
	if (func_59(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_59(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_59(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

int func_37(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_60(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return false;
		}
	}
	func_55(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_61(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179, true);
			func_62(iParam0);
		}
	}
	if (func_38(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_61(iParam0), 137, true);
	}
}

void func_40(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_35(iParam0, 50, 1);
		func_35(iParam0, 48, 1);
		func_35(iParam0, 49, 1);
		func_35(iParam0, 51, 1);
		func_35(iParam0, 52, 1);
		func_35(iParam0, 54, 1);
		func_35(iParam0, 55, 1);
	}
	else
	{
		func_24(iParam0, 50, 1);
		func_24(iParam0, 48, 1);
		func_24(iParam0, 49, 1);
		func_24(iParam0, 51, 1);
		if (bParam3)
		{
			func_24(iParam0, 54, 1);
		}
		else
		{
			func_35(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_24(iParam0, 52, 1);
			if (bParam3)
			{
				func_24(iParam0, 55, 1);
			}
		}
		else
		{
			func_35(iParam0, 52, 1);
			if (!bParam3)
			{
				func_35(iParam0, 55, 1);
			}
		}
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_61(iParam0), 204, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_61(iParam0), 204, false);
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_38(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_37(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_61(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_63(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_24(iParam0, 2, 1);
	}
	else
	{
		func_64(iParam0);
		func_24(iParam0, 1, 1);
	}
}

void func_44(int iParam0, int iParam1, bool bParam2)
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

int func_45(int iParam0)
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

void func_46(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_54(iParam1))
	{
		return;
	}
	iVar0 = func_45(iParam1);
	if (func_65(iParam1))
	{
		if (!func_66(iParam1))
		{
			return;
		}
	}
	func_35(iParam1, 39, 1);
	func_67(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_67(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_67(iParam1, 512, 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_24(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_68(iParam1, 0, 1, 1, 1);
		}
	}
}

int func_47(int iParam0)
{
	if (!func_69(iParam0))
	{
		return -1;
	}
	return func_70(iParam0);
}

int func_48(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return iVar0;
	}
	func_71(bParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(bParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_0x4C39C95AE5DB1329(bParam0, bParam2, 15);
	return iVar0;
}

void func_49(var uParam0)
{
	func_72(uParam0, 0f);
}

float func_50(var uParam0)
{
	if (!func_56(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_73(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_74() - uParam0->f_1);
}

float func_51(float fParam0, float fParam1, float fParam2)
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

bool func_52(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	return false;
}

bool func_53()
{
	if ((((((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UD"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_LEFT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_RIGHT_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_UP_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MOVE_DOWN_ONLY"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_MELEE_ATTACK")))
	{
		return true;
	}
	return false;
}

bool func_54(int iParam0)
{
	return iParam0 > -1;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_56(var uParam0)
{
	return func_75(*uParam0, 1);
}

bool func_57(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_58(var uParam0, int iParam1, bool bParam2)
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

bool func_59(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_60(int iParam0)
{
	int iVar0;

	if (!func_54(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_76(iParam0);
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

int func_61(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_62(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_61(iParam0)))
		{
			func_77(iParam0, 67108864, 1);
			func_35(iParam0, 19, 1);
		}
	}
}

float func_63(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_64(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_61(iParam0);
	iVar1 = func_37(iParam0, 0);
	func_78(iParam0, bVar0);
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

bool func_65(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_66(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
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

int func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_54(iParam0))
	{
		return 0;
	}
	bVar0 = func_45(iParam0);
	if (func_36(bVar0, 0))
	{
		if (func_36(PED::_GET_RIDER_OF_MOUNT(bVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_65(iParam0)) || func_66(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(bVar0) && func_79(PLAYER::PLAYER_PED_ID(), bVar0, 1) < 10000f))
			{
				iVar1 = func_80(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
					}
					func_81(iParam0);
					PERSCHAR::_0x7B204F88F6C3D287(func_82(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_82(iParam0, 0));
					func_83(iParam0);
				}
			}
			else
			{
				if (func_30(iParam0, 32768, 1))
				{
					iVar2 = func_82(iParam0, 0);
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
		if (func_36(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_30(iParam0, 32768, 1))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_81(iParam0);
				PERSCHAR::_0x7B204F88F6C3D287(func_82(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_82(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_81(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_84(iParam0, 0);
	return 1;
}

bool func_69(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_70(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_71(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(bParam0, iVar0);
}

void func_72(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_74() - fParam1);
	func_85(uParam0, 1);
	func_86(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_73(var uParam0)
{
	return func_75(*uParam0, 2);
}

float func_74()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_75(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_76(int iParam0)
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

void func_77(int iParam0, int iParam1, bool bParam2)
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

void func_78(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_87(bParam1);
	}
}

float func_79(int iParam0, bool bParam1, bool bParam2)
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
	return func_88(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false));
}

int func_80(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_89(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_45(iParam0);
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

int func_82(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_90(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_83(int iParam0)
{
	int iVar0;

	if (!func_54(iParam0))
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

void func_84(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

void func_85(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_87(bool bParam0)
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

float func_88(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_54(iParam0))
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
	if (!func_54(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_80(iParam0, 1);
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

