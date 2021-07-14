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
	struct<27> /*216*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void main()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (true)
	{
		switch (Local_14)
		{
			case 0:
				if (func_2(&Local_14))
				{
				}
				Local_14.f_4 = Global_40.f_9.f_1;
				Local_14.f_5 = { Global_40.f_9.f_2 };
				Local_14.f_8 = Global_40.f_9.f_5;
				PROPSET::_REQUEST_PROP_SET(Local_14.f_4);
				func_3(&(Local_14.f_12), Local_14.f_5, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
				func_4(&Local_14, 1);
				break;
			case 1:
				if (func_5(&(Local_14.f_12)))
				{
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 2);
				}
				break;
			case 2:
				if (func_2(&Local_14))
				{
				}
				if (PROPSET::_HAS_PROP_SET_LOADED(Local_14.f_4) || Local_14.f_26 + 5000 < MISC::GET_GAME_TIMER())
				{
					func_6(&(Local_14.f_10), Local_14.f_5, 4.5f);
					func_7(&(Local_14.f_11), Local_14.f_5, 4.5f, 0, 0);
					Local_14.f_2 = PROPSET::_CREATE_PROP_SET(Local_14.f_4, Local_14.f_5, 1, Local_14.f_8, 1200f, false, true);
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 3);
				}
				break;
			case 3:
				if (func_2(&Local_14))
				{
				}
				Local_14.f_3 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_14.f_5, Global_40.f_9.f_6, 100f, 1, false);
				if (TASK::DOES_SCENARIO_POINT_EXIST(Local_14.f_3))
				{
					TASK::TASK_USE_SCENARIO_POINT(Global_35, Local_14.f_3, 0, 0, false, true, 0, false, -1f, false);
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 4);
				}
				else if (5000 + Local_14.f_26) < MISC::GET_GAME_TIMER()
				{
					Local_14.f_26 = MISC::GET_GAME_TIMER();
					func_4(&Local_14, 4);
				}
				break;
			case 4:
				if (func_2(&Local_14))
				{
				}
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || (5000 + Local_14.f_26) < MISC::GET_GAME_TIMER())
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					func_8(1024);
					func_9();
					AUDIO::PLAY_SOUND_FRONTEND("TITLE_SCREEN_EXIT", "DEATH_FAIL_RESPAWN_SOUNDS", true, 0);
					CAM::DO_SCREEN_FADE_IN(500);
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					HUD::_UIPROMPT_FILTER_CLEAR();
					func_10(0);
					func_11();
					func_4(&Local_14, 5);
				}
				break;
			case 5:
				if (func_2(&Local_14))
				{
				}
				func_1();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	func_12(&Global_1935630, 131072);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	if (iParam0->f_1)
	{
		iParam0->f_1 = 0;
		return true;
	}
	return false;
}

void func_3(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	struct<16> /*128*/ sVar0;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_5 = bParam6;
	uParam0->f_6 = iParam9;
	uParam0->f_7 = iParam10;
	uParam0->f_8 = iParam12;
	if (func_13() != -1)
	{
		func_14(!bParam5);
		func_15(!bParam6);
		func_16(vParam1, fParam4, 1);
		Var0.f_12 = 255;
		Var0.f_13 = 255;
		Var0.f_3 = 51;
		func_18(Var0, func_17(0, 15), 0, 0);
		return;
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
		func_19(1);
		iVar16 = func_20(vParam1, 1);
		if (bParam8)
		{
			if ((func_21(iVar16) == 1 || func_21(iVar16) == 2) || iVar16 == func_22(Global_40.f_4283))
			{
				func_10(0);
			}
		}
		if (!bParam7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
		}
		if (bParam11)
		{
			iVar17 = ITEMSET::CREATE_ITEMSET(true);
			bVar18 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar17);
			iVar19 = 0;
			iVar19 = 0;
			while (iVar19 < ITEMSET::GET_ITEMSET_SIZE(iVar17))
			{
				iVar20 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar19, iVar17);
				iVar21 = MISC::_GET_ENTITY_FROM_ITEM(iVar20);
				if (ENTITY::DOES_ENTITY_EXIST(iVar21))
				{
					PED::DETACH_CARRIABLE_ENTITY(iVar21, false, true);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar21))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar21, true, true);
					}
					ENTITY::DELETE_ENTITY(&iVar21);
					bVar18 = true;
				}
				iVar19++;
			}
			if (bVar18 && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
			}
			ITEMSET::DESTROY_ITEMSET(iVar17);
		}
		PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), vParam1, fParam4, true, true, false, false);
	}
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
	iParam0->f_1 = 1;
}

bool func_5(var uParam0)
{
	int iVar0;

	if (func_13() != -1)
	{
		return true;
	}
	if (uParam0->f_12 == 0)
	{
		uParam0->f_12 = MISC::GET_GAME_TIMER();
	}
	iVar0 = func_20(*uParam0, 1);
	if (func_23(iVar0))
	{
		if (Global_1888801[iVar0 /*35*/].f_12 != 0)
		{
			PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[iVar0 /*35*/].f_12);
		}
	}
	if (!PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::PLAYER_ID()))
	{
		if (uParam0->f_12 + 20000 < MISC::GET_GAME_TIMER())
		{
			PLAYER::STOP_PLAYER_TELEPORT();
		}
		return false;
	}
	if (uParam0->f_5)
	{
		func_24(1, 0);
		uParam0->f_5 = 0;
	}
	func_25();
	if (uParam0->f_10 == 0)
	{
		uParam0->f_10 = MISC::GET_GAME_TIMER();
	}
	if (uParam0->f_10 + 1000 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	switch (func_21(iVar0))
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 8:
		case 9:
			if (!func_26(iVar0) && uParam0->f_10 + 20000 + 1000 > MISC::GET_GAME_TIMER())
			{
				return false;
			}
			if (uParam0->f_11 == 0)
			{
				uParam0->f_11 = MISC::GET_GAME_TIMER();
			}
			if (uParam0->f_11 + 1000 > MISC::GET_GAME_TIMER())
			{
				return false;
			}
			break;
	}
	if (uParam0->f_8 && !uParam0->f_9)
	{
		TASK::_0x4161648394262FDF(Global_36, 60f);
		PED::INSTANTLY_FILL_PED_POPULATION();
		uParam0->f_9 = 1;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	if (uParam0->f_6)
	{
		if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_START(*uParam0, CAM::GET_GAMEPLAY_CAM_ROT(2), 500f, 4);
			return false;
		}
		if (!STREAMING::IS_LOAD_SCENE_LOADED() && uParam0->f_11 + 20000 + 1000 > MISC::GET_GAME_TIMER())
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), *uParam0) > 2500f)
				{
				}
			}
			return false;
		}
		STREAMING::LOAD_SCENE_STOP();
	}
	if (uParam0->f_7)
	{
		if (uParam0->f_13 == 0)
		{
			uParam0->f_13 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_13 + 20000 > MISC::GET_GAME_TIMER())
		{
			if (!func_27())
			{
				return false;
			}
		}
	}
	if (uParam0->f_8 && !PED::_0x0EE3F0D7FECCC54F())
	{
		return false;
	}
	Global_36 = { *uParam0 };
	if (uParam0->f_4)
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	return true;
}

void func_6(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_28(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

void func_7(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_28(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_8(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_9()
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}
}

void func_10(bool bParam0)
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
		iVar1 = func_29(Global_35, iVar0, 0, 1);
		if (WEAPON::IS_WEAPON_VALID(iVar1))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar1) || func_30(iVar1))
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

void func_11()
{
	func_12(&Global_1935630, 4096);
	func_31();
	func_32(0, 0);
	func_33();
	func_34(0f, 0f, 0f);
	Global_40.f_9.f_15 = -1;
	func_35(0);
	Global_1310720.f_1 = { 0f, 0f, 0f };
	Global_40.f_9.f_10 = -1;
	Global_40.f_9.f_12 = 0;
	Global_40.f_9.f_13 = 0f;
	Global_1310720.f_4 = 0;
	Global_1310720.f_6 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_8 = 1;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_36(0);
	func_37(0);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_38(1);
	func_39(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DEATH_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DYING_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DYING_SCENE");
	}
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_13()
{
	return Global_1572887.f_12;
}

void func_14(bool bParam0)
{
	if (!bParam0)
	{
		func_40(17);
	}
	else
	{
		func_41(17);
	}
}

void func_15(bool bParam0)
{
	if (!bParam0)
	{
		func_40(23);
	}
	else
	{
		func_41(23);
	}
}

void func_16(vector3 vParam0, float fParam3, bool bParam4)
{
	if (func_42(vParam0, fParam3))
	{
		func_43(1, bParam4);
	}
}

var func_17(int iParam0, int iParam1)
{
	return func_44(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, joaat("VOLCYLINDER"), iParam0, iParam1);
}

void func_18(struct<16> /*128*/ sParam0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> /*144*/ sVar0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_45(&(Global_1058888.f_43130), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

void func_19(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

int func_20(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_46();
	if (func_23(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_47(vParam0, iParam3);
}

int func_21(int iParam0)
{
	if (!func_23(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

int func_22(int iParam0)
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

bool func_23(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_24(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_48())
	{
		if (func_49(255))
		{
			if (!func_50(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_23(Global_1894899.f_2) && func_26(Global_1894899.f_2))
		{
			func_51(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_52(16);
			}
		}
		else if (func_23(Global_1894899.f_2) && !func_53(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		func_54(16);
		func_55();
		if (bVar0)
		{
			func_54(1);
		}
	}
}

void func_25()
{
	func_54(8);
}

bool func_26(int iParam0)
{
	if (!func_23(iParam0))
	{
		return false;
	}
	return func_53(iParam0, 8);
}

bool func_27()
{
	if (Global_1879534.f_1 || Global_1879534)
	{
		return false;
	}
	if (Global_1935630.f_2 != Global_40.f_39 || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39)
	{
		return false;
	}
	if (Global_40.f_7729 != Global_1905941)
	{
		return false;
	}
	return true;
}

void func_28(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_56(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_56(uParam0))
		{
		}
	}
}

int func_29(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_30(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

void func_31()
{
	int iVar0;
	bool bVar1;
	struct<12> /*96*/ sVar2;
	int iVar19;
	struct<11> /*88*/ sVar20;
	int iVar37;

	iVar0 = func_57();
	bVar1 = (!func_58(Global_1935630, 4194304) || Global_1935630.f_17 > 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bVar1)
		{
			Global_1935630.f_13 = (LAW::ARE_WITNESSES_ACTIVE(iVar0) || LAW::_0xF0FBFB9AB15F7734(iVar0, 0, 0));
			Global_1935630.f_15 = LAW::_0x148E7AC8141C9E64(iVar0);
			Global_1935630.f_14 = LAW::_0x9945A3E2528A02E8(iVar0);
			Global_1935630.f_16 = LAW::_0xF46108C50A22B029();
			Global_1935630.f_17 = LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(iVar0);
			Global_1935630.f_26 = LAW::_0x9D5C9A5A3321B128(iVar0);
			Global_1935630.f_21 = LAW::_0xDAEFDFDB2AEECE37(LAW::_GET_HUD_PLAYER_CRIME_TYPE(iVar0), 0);
			Global_1935630.f_18 = LAW::IS_LAW_INCIDENT_ACTIVE(iVar0);
			if (Global_1935630.f_18)
			{
				LAW::_0x9C5BD8C562565CE6(&Var2);
				Global_1935630.f_19 = Var2.f_10;
				Global_1935630.f_23 = Var2.f_11 == 6;
			}
			Global_1935630.f_20 = -1;
			iVar19 = 0;
			while (iVar19 < 24)
			{
				if (LAW::GET_PLAYER_REGISTERED_CRIME(iVar0, iVar19, &Var20))
				{
					if (Var20.f_10)
					{
						iVar37 = LAW::_0xDAEFDFDB2AEECE37(Var20, 0);
						if (iVar37 > Global_1935630.f_20)
						{
							Global_1935630.f_20 = iVar37;
						}
					}
				}
				iVar19++;
			}
		}
		else
		{
			func_59();
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		Global_1935630.f_41 = Global_1935630.f_40;
	}
	Global_1935630.f_22 = PLAYER::IS_PLAYER_BEING_ARRESTED(iVar0, true);
	Global_1935630.f_12 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (!Global_1935630.f_12)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &(Global_1935630.f_44), false, 0, false);
		Global_1935630.f_40 = PED::GET_MOUNT(Global_35);
		if (Global_1572887.f_12 == -1 && Global_1935630 & 262144 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (Global_1572887.f_12 != -1)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		else if (Global_1935630 & 65536 != 0)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 154, true);
		}
		if (Global_1572887.f_12 == -1)
		{
			if (!func_60(9))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 135, true);
			}
			if (!func_60(14))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 144, true);
			}
			if (!func_60(36))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
				HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			}
			else if ((CAM::IS_SCREEN_FADED_OUT() && func_61()) && !func_62(0, 0, 1))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SELECT_RADAR_MODE")))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
			}
			if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44) && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			}
		}
	}
	else
	{
		if (func_13() == -1 && CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
		{
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		}
		Global_1935630.f_44 = 0;
		Global_1935630.f_40 = 0;
	}
}

void func_32(int iParam0, bool bParam1)
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

void func_33()
{
	if (func_13() != -1)
	{
		return;
	}
	func_63();
}

void func_34(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

void func_35(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

void func_36(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

void func_37(int iParam0)
{
	Global_1310720.f_10 = iParam0;
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_12(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_64(&Global_1935630, 4194304);
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

int func_39(bool bParam0)
{
	if (!bParam0 && func_65(373691918))
	{
		LAW::_0xE9AC8466ABE484BB(false, 0);
		LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), true, 0);
		return 0;
	}
	LAW::_0xE9AC8466ABE484BB(bParam0, 0);
	return 1;
}

int func_40(int iParam0)
{
	if (func_66(&(Global_1109000.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_41(int iParam0)
{
	if (func_67(&(Global_1109000.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_42(vector3 vParam0, float fParam3)
{
	if (func_68(vParam0))
	{
		return false;
	}
	if (func_69(255) == 4)
	{
		return false;
	}
	if (func_50(4, 255))
	{
	}
	func_41(4);
	func_70(&(Global_1109000.f_409));
	Global_1109000.f_409.f_6 = { vParam0 };
	Global_1109000.f_409 = fParam3;
	Global_1109000.f_409.f_5 = 1;
	Global_1109000.f_22.f_16 = 0;
	Global_1109000.f_22.f_17 = 0;
	func_71(Global_1109000.f_409, 42);
	return true;
}

void func_43(bool bParam0, bool bParam1)
{
	if (func_69(255) == 4)
	{
		return;
	}
	if (func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_40(0);
	}
	else
	{
		if (bParam1)
		{
			func_72(0, 0, 0, 1);
		}
		func_41(0);
		func_73(&(Global_1109000.f_379));
		Global_1109000.f_379 = 0f;
		Global_1109000.f_379.f_5 = 1;
		Global_1109000.f_379.f_16 = 0;
		Global_1109000.f_379.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109000.f_379.f_17.f_9 = joaat("VOLSPHERE");
		func_74(&(Global_1109000.f_418));
		Global_1109000.f_418.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_418 = Global_1109000.f_379;
		Global_1109000.f_418.f_5 = 1;
		if (bParam1)
		{
			Global_1109000.f_22.f_16 = 0;
			Global_1109000.f_22.f_17 = 0;
		}
	}
	func_75(Global_1109000.f_379, 42);
	func_76(Global_1109000.f_418, 42);
}

var func_44(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_77() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1224589.f_5;
	iVar6 = Global_1224589.f_9;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_78());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_78());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_78());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_79(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (Global_1224589.f_16[iVar2])
		{
			iVar10 = Global_1224589.f_115[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_80(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1224589.f_49[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_69(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_81(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

int func_45(var uParam0, struct<18> /*144*/ sParam1)
{
	if (!func_82(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*18*/] = { Param1 };
	*uParam0++;
	return 1;
}

int func_46()
{
	return Global_1894899.f_2;
}

int func_47(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_83(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_48()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_49(int iParam0)
{
	return func_50(23, iParam0);
}

bool func_50(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_84(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_85())
	{
		return func_84(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_84(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

void func_51(int iParam0, int iParam1)
{
	if (!func_23(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_52(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_53(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

void func_54(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_55()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_53(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (func_13() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_53(iVar1, 2))
			{
				if (func_13() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				func_86(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_56(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_57()
{
	if (Global_1572887.f_12 != -1)
	{
		Global_35 = Global_1224589.f_3;
		Global_36 = { Global_1224589.f_11 };
		return Global_1224589.f_5;
	}
	Global_35 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
	return PLAYER::PLAYER_ID();
}

bool func_58(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_59()
{
	Global_1935630.f_13 = 0;
	Global_1935630.f_14 = 0;
	Global_1935630.f_26 = 0;
	Global_1935630.f_15 = 0;
	Global_1935630.f_16 = 0;
	Global_1935630.f_17 = 0;
	Global_1935630.f_18 = 0;
	Global_1935630.f_19 = -1;
	Global_1935630.f_20 = -1;
	Global_1935630.f_21 = -1;
	Global_1935630.f_23 = 0;
}

bool func_60(int iParam0)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	return func_88(iParam0);
}

bool func_61()
{
	if (func_13() != -1)
	{
		return false;
	}
	if (!func_89())
	{
		return false;
	}
	if (!func_90(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_90(Global_1835011[2 /*74*/].f_1, 1) && func_90(Global_1347702[120 /*49*/].f_15, 1)) && !func_90(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_90(Global_1835011[37 /*74*/].f_1, 1) && !func_90(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_90(Global_1835011[57 /*74*/].f_1, 1) && !func_90(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_90(Global_1835011[26 /*74*/].f_1, 1) && !func_90(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_90(Global_1835011[62 /*74*/].f_1, 1) && func_90(Global_1835011[63 /*74*/].f_1, 1)) && !func_90(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_90(Global_1835011[75 /*74*/].f_1, 1) && !func_90(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_90(Global_1835011[76 /*74*/].f_1, 1) && !func_90(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_90(Global_1835011[40 /*74*/].f_1, 1) && func_90(Global_1835011[41 /*74*/].f_1, 1)) && !func_90(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_90(Global_1835011[62 /*74*/].f_1, 1) && func_90(Global_1835011[63 /*74*/].f_1, 1)) && !func_90(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_90(Global_1835011[65 /*74*/].f_1, 1) && func_90(Global_1835011[66 /*74*/].f_1, 1)) && !func_90(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, bool bParam1, bool bParam2)
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
		if (func_91())
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
		iVar0 = func_92(Global_1898164.f_1[0 /*5*/]);
		if (func_93(iVar0) && func_94(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_95(Global_1898164.f_1[0 /*5*/]))
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

void func_63()
{
	PLAYER::_0x95EE1DEE1DCD9070(PLAYER::PLAYER_ID(), 1);
	if (func_60(47))
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 1);
	}
	else
	{
		PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::PLAYER_ID(), 0);
	}
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_96(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_66(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

bool func_67(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_69(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109000.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (Global_1224589.f_16[iParam0])
	{
		return Global_1108108[iParam0 /*27*/].f_1;
	}
	return 25;
}

void func_70(var uParam0)
{
	struct<9> /*72*/ sVar0;

	*uParam0 = { Var0 };
}

void func_71(struct<6> /*48*/ sParam0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_72(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_97(iParam0);
	if (!func_98(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_99(128) && !func_100(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_101() == 4)
	{
		func_40(17);
	}
	func_102(512);
}

void func_73(var uParam0)
{
	struct<30> /*240*/ sVar0;

	*uParam0 = { Var0 };
}

void func_74(var uParam0)
{
	struct<9> /*72*/ sVar0;

	*uParam0 = { Var0 };
}

void func_75(struct<29> /*232*/ sParam0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_76(struct<6> /*48*/ sParam0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_77()
{
	return Global_1051081.f_11;
}

char* func_78()
{
	return "unnamed";
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_80(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return func_50(32, iParam0);
}

bool func_81(int iParam0)
{
	if (func_103(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, iParam0) != 1)
		{
			func_104(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1224589.f_5, iParam0) == 1;
}

bool func_82(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_83(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_105(vParam0, 0f, 0f, 0, 2);
	return func_105(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

bool func_84(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_85()
{
	return Global_1109000.f_245;
}

void func_86(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] = (Global_1058888.f_40545[iParam0 /*11*/] - (Global_1058888.f_40545[iParam0 /*11*/] && iParam1));
}

bool func_87(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_89()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_90(int iParam0, bool bParam1)
{
	switch (func_106(iParam0))
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

bool func_91()
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

int func_92(int iParam0)
{
	if (!func_95(iParam0))
	{
		return -1;
	}
	return func_108(func_107(iParam0));
}

bool func_93(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_94(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_95(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_96(int iParam0, int iParam1)
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

void func_97(int iParam0)
{
	Global_1109000.f_22.f_10 = iParam0;
}

bool func_98(int iParam0)
{
	return (Global_1109000.f_22.f_6 && iParam0) != 0;
}

bool func_99(int iParam0)
{
	return (Global_1109000.f_22.f_8 && iParam0) != 0;
}

bool func_100(int iParam0)
{
	return (Global_1109000.f_4[Global_1109504[iParam0 /*2*/]] && Global_1109504[iParam0 /*2*/].f_1) == Global_1109504[iParam0 /*2*/].f_1;
}

int func_101()
{
	if (Global_1109000 <= 5)
	{
		return Global_1109000;
	}
	if (Global_1109000 <= 21)
	{
		return 4;
	}
	if (Global_1109000 <= 24)
	{
		return 3;
	}
	return 25;
}

void func_102(int iParam0)
{
	Global_1109000.f_22.f_8 = (Global_1109000.f_22.f_8 || iParam0);
}

bool func_103(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888.f_49041), iParam0))
	{
		return true;
	}
	return false;
}

void func_104(int iParam0)
{
	int iVar0;

	if (func_109() != 0 || func_13() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1224589.f_16[iVar0])
	{
		func_110(iParam0);
		return;
	}
	if (Global_1058888.f_42287.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_111(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888.f_42287.f_1[iVar0 /*5*/] = 1;
}

int func_105(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_106(int iParam0)
{
	if (!func_95(iParam0))
	{
		return -1;
	}
	return func_112(iParam0);
}

int func_107(int iParam0)
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

int func_108(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_109()
{
	return Global_1572887.f_13;
}

void func_110(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_13 != 0 || Global_1572887.f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (Global_1058888.f_42287.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_111(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888.f_42287.f_1[iVar0 /*5*/] = 0;
}

void func_111(int iParam0)
{
	if (Global_1058888.f_42287.f_1[iParam0 /*5*/].f_1 != 0)
	{
		Global_1058888.f_42287.f_1[iParam0 /*5*/].f_2 = 0;
		Global_1058888.f_42287.f_1[iParam0 /*5*/].f_1 = 0;
	}
}

int func_112(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_113(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_113(int iParam0)
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

