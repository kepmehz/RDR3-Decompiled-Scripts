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
	struct<408> /*3264*/ sLocal_14 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> /*64*/ sLocal_422 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_430 = 0;
	bool bLocal_431 = false;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = false;
	int iLocal_445 = 0;
#endregion

void main()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_430 = joaat("COACH2");
	bLocal_431 = joaat("S_M_M_COACHTAXIDRIVER_01");
	iLocal_440 = joaat("WORLD_HUMAN_STAND_WAITING");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	while (!func_2(&iVar0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(iVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	if (iParam0 == 1 || iParam0 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_16))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 2f, 1, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
				}
			}
			else
			{
				func_3(&(Local_14.f_16));
			}
		}
	}
	else
	{
		Global_1430231.f_3 = func_4();
		if (func_5(Local_14.f_16, 0) && !PED::IS_PED_IN_COMBAT(Local_14.f_16, 0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
		}
		else
		{
			func_6(&(Global_1430231.f_3), 0, 0, 1, 0, 0, 0, 0);
		}
	}
	if (bLocal_438)
	{
		func_7(1);
		bLocal_438 = false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
	{
		MAP::SET_RADAR_ZOOM(Global_1430231.f_9);
		MAP::REMOVE_BLIP(&(Global_1430231.f_9));
	}
	Global_1430231.f_4 = 0;
	Global_1430231.f_5 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
	{
		if (iParam0 == 1 || iParam0 == 2)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_15))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(Local_14.f_15));
			}
		}
		else
		{
			if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				VEHICLE::_0xC399CC89FBA05DA0(Local_14.f_15, 1);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
		}
	}
	ENTITY::_0x20FAEE47427A4497();
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(5);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_430);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bLocal_431);
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		func_8(&Local_422);
		func_9(&Local_14);
	}
	if (bLocal_439)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		bLocal_439 = false;
	}
	CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
	if (Local_14.f_39)
	{
		func_9(&Local_14);
	}
	if (Local_14.f_46 && ENTITY::DOES_ENTITY_EXIST(func_10(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_10(7), false);
	}
	if (Local_14.f_47 && ENTITY::DOES_ENTITY_EXIST(func_10(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_10(1), false);
	}
	if (bLocal_434)
	{
		func_11(&(Local_14.f_60));
	}
}

bool func_2(int iParam0)
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;

	if ((func_12(1, 0) || func_12(8, 0)) || func_13(0, 0, 1))
	{
		*iParam0 = 2;
		return true;
	}
	if ((!func_15(func_14()) && Local_14 < 17) && !Local_14.f_45)
	{
		*iParam0 = 7;
		return true;
	}
	if (Local_14 > 3)
	{
		*iParam0 = func_16();
		if (*iParam0 != 0)
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) && func_5(Local_14.f_16, 0))
	{
		PED::SET_PED_RESET_FLAG(Local_14.f_16, 49, true);
	}
	func_17(&(Local_14.f_60));
	switch (Local_14)
	{
		case 0:
			if (func_18() > 0 && (!func_19() || func_14() != 38))
			{
				bLocal_432 = false;
				Local_14.f_393 = func_4();
				Local_14 = 1;
			}
			break;
		case 1:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			else if (Local_14.f_45)
			{
				func_20();
				Local_14 = 2;
			}
			else
			{
				Global_1430231.f_6 = 1;
				if (!func_21(20, 0) && !func_23(func_22(func_14())))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
					}
					fVar2 = func_24(Global_35, func_22(func_14()), 1);
					if (((fVar2 < 15625f && fVar2 > 900f) && fVar1 <= 8f) || bLocal_432)
					{
						func_20();
						Local_14 = 2;
					}
					else
					{
						if (fVar2 >= 15625f)
						{
						}
						if (fVar2 <= 900f)
						{
						}
						if (fVar1 > 8f)
						{
						}
					}
				}
				else if (!func_25(func_14()))
				{
					*iParam0 = 7;
					return true;
				}
			}
			break;
		case 2:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			if (func_26())
			{
				Local_14 = 3;
			}
			break;
		case 3:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			iVar3 = func_14();
			func_27();
			if (!func_19() || iVar3 != 38)
			{
				if (func_28())
				{
					Local_14.f_57 = 6f;
					Local_14.f_58 = 6f;
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 17, true);
					}
					if (!bLocal_432)
					{
						if (!func_29(Local_14.f_16, -1098463898))
						{
							TASK::TASK_START_SCENARIO_AT_POSITION(Local_14.f_16, iLocal_440, Local_14.f_27, Local_14.f_30, 0, false, true, 0, -1f, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
						{
							if (!func_30(Local_14.f_19, ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), 1056964608 /* Float: 0.5f */, 1))
							{
								func_31(Local_14.f_15, Local_14.f_19, Local_14.f_22, 2, 1073741824 /* Float: 2f */);
							}
						}
						func_32(&Local_14);
						VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
					{
						VEHICLE::SET_PED_OWNS_VEHICLE(Local_14.f_16, Local_14.f_15);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 168, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 216, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 14, false);
						PED::_0x24C82EF607105FAA(Local_14.f_16, joaat("TIMID"));
					}
					Local_14.f_13 = func_33(func_14());
					if (ENTITY::DOES_ENTITY_EXIST(func_34(Local_14.f_15, 2)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(func_34(Local_14.f_15, 2), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_34(Local_14.f_15, 3)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(func_34(Local_14.f_15, 3), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_34(Local_14.f_15, 0)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(func_34(Local_14.f_15, 0), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_34(Local_14.f_15, 1)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(func_34(Local_14.f_15, 1), 17, true);
					}
					bLocal_432 = false;
					if (iVar3 != -1)
					{
						Local_14.f_399 = MISC::GET_GAME_TIMER();
						if (!MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
						{
							Global_1430231.f_9 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_SHOP"), Local_14.f_15);
							MAP::SET_BLIP_SPRITE(Global_1430231.f_9, joaat("BLIP_AMBIENT_WARP"), true);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1430231.f_9, "STAGE_COACH_BLIP");
							MAP::SET_BLIP_FLASH_TIMER(Global_1430231.f_9, 50, -1);
						}
					}
					Local_14 = 4;
				}
			}
			break;
		case 4:
			if (STREAMING::_0x99F92061EFE908BA() || func_35(Global_1935630, 16384))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
			{
				Local_14 = 3;
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) || PED::IS_PED_DEAD_OR_DYING(Local_14.f_16, true))
			{
				Local_14 = 3;
				return false;
			}
			if (!func_36(&(Local_14.f_60), Local_14.f_15, Local_14.f_16))
			{
			}
			Local_14 = 5;
			break;
		case 5:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			if (!Local_14.f_45)
			{
				if (func_37(Global_35, Local_14.f_16, 20f, 1))
				{
					if (func_38(&Local_14))
					{
						*iParam0 = 4;
						return true;
					}
				}
				Local_14.f_400 = (MISC::GET_GAME_TIMER() - Local_14.f_399);
				if ((PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar4, false, false) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_16)) && !PED::IS_PED_IN_COMBAT(Global_35, Local_14.f_16))
				{
					if ((((((ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) == Local_14.f_16 && func_39(Global_35, Local_14.f_16, 1) < (6f * 6f)) && !PED::IS_PED_RAGDOLL(Local_14.f_16)) && !TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35)) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::_0x331550B212014B92(Global_35, 0))
					{
						func_40();
						func_41(&Local_14, &iVar4);
					}
				}
				else
				{
					if ((((!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && !LAW::_0x0EAF918F751F27BA(Local_14.f_16)) && !PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false)) && Local_14.f_398 >= 18000)
					{
						func_42();
					}
					else if (!PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						Local_14.f_398 = (MISC::GET_GAME_TIMER() - Local_14.f_397);
					}
					else
					{
						Local_14.f_397 = MISC::GET_GAME_TIMER();
					}
					if (!func_43(Local_14.f_406))
					{
						Local_14.f_406 = func_44("STAGE_COACH_INSTRUCTION", joaat("INPUT_INTERACT_LOCKON"), ENTITY::GET_ENTITY_COORDS(Local_14.f_16, true, false), 4f, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					bLocal_444 = false;
					func_45(&(Local_14.f_404), 1, 1);
					func_45(&(Local_14.f_405), 1, 1);
				}
				if (!func_46())
				{
					*iParam0 = 7;
					return true;
				}
				if (func_24(Global_35, func_22(func_14()), 1) > 15625f)
				{
					*iParam0 = 8;
					return true;
				}
			}
			else
			{
				VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_16, joaat("REL_PLAYER_ALLY"));
				PED::SET_PED_INTO_VEHICLE(Local_14.f_16, Local_14.f_15, -1);
				PED::SET_PED_INTO_VEHICLE(Global_35, Local_14.f_15, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_14.f_16, false, false);
				Local_14.f_397 = MISC::GET_GAME_TIMER();
				Local_14 = 12;
			}
			break;
		case 11:
			if (UIAPPS::IS_ANY_UIAPP_RUNNING() && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
			{
				func_8(&Local_422);
				func_9(&Local_14);
				bLocal_444 = false;
				Local_14 = 5;
				CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
				return false;
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (!Local_14.f_39)
				{
					func_47(&Local_14, func_14(), Global_1430231.f_5);
				}
				func_48();
				if (func_49(&Local_422, &Local_14))
				{
					AUDIO::STOP_PED_SPEAKING(Local_14.f_16, true);
					if (!bLocal_444 && !Global_1430231.f_5)
					{
						func_50(Local_14.f_16, "WHERE_YOU_HEADED", 1808677283, Global_35, 1, 0, 0, 1);
						bLocal_444 = true;
					}
					if (((!STREAMING::_0x99F92061EFE908BA() && !func_35(Global_1935630, 16384)) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_15)) && (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) && !PED::IS_PED_DEAD_OR_DYING(Local_14.f_16, true)))
					{
						if (!func_36(&(Local_14.f_60), Local_14.f_15, Local_14.f_16))
						{
						}
					}
					Local_14 = 10;
				}
			}
			break;
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (!CAM::_0xAA235E2F2C09E952("script@Cinematics@FastTravel@StageCoach_Intros") && !CAM::_0x595550376B7EA230("script@Cinematics@FastTravel@StageCoach_Intros"))
			{
				CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@FastTravel@StageCoach_Intros");
			}
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (func_51(&Local_422))
			{
				case 1:
					if (func_52())
					{
						func_8(&Local_422);
						func_9(&Local_14);
						bLocal_444 = false;
						Local_14 = 5;
						CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					}
					break;
				case 2:
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					if (func_53(Local_422.f_6))
					{
						Local_14.f_407 = Local_422.f_6;
						if (func_37(Global_35, func_10(7), func_54(7), 1) && !TASK::IS_PED_IN_WRITHE(func_10(7)))
						{
							Local_14.f_46 = 1;
						}
						if (func_37(Global_35, func_10(1), func_54(1), 1) && !TASK::IS_PED_IN_WRITHE(func_10(1)))
						{
							Local_14.f_47 = 1;
						}
						bLocal_439 = true;
						func_56(func_55(Local_422.f_6));
						func_9(&Local_14);
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
						{
							VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 1);
						}
						func_57(Local_422.f_7, 0, 0, 0, 1);
						func_8(&Local_422);
						if (!Global_1430231.f_5)
						{
							Local_14 = 7;
						}
						else
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(100);
							}
							Global_1430231.f_5 = 0;
							Local_14.f_45 = 1;
							Local_14 = 1;
						}
					}
					break;
				case 0:
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
					{
						func_50(Local_14.f_16, "SUIT_YOURSELF", 1808677283, 0, 1, 0, 0, 1);
					}
					func_8(&Local_422);
					func_9(&Local_14);
					bLocal_444 = false;
					if (!Global_1430231.f_5)
					{
						if (!Local_14.f_41)
						{
							Local_14 = 5;
						}
						else
						{
							Local_14 = 8;
						}
					}
					else
					{
						func_1(6);
					}
					CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					break;
				default:
					func_8(&Local_422);
					func_9(&Local_14);
					bLocal_444 = false;
					Local_14 = 5;
					CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					break;
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (func_58())
			{
				iLocal_441 = 0;
				Local_14 = 8;
			}
			break;
		case 8:
			func_59();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			AUDIO::STOP_PED_SPEAKING(Local_14.f_16, false);
			TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
			PLAYER::_0x3AD212429E095EFB(PLAYER::PLAYER_ID(), Local_14.f_15);
			TASK::TASK_ENTER_VEHICLE(Global_35, Local_14.f_15, 20000, -2, 1f, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(true);
			Local_14 = 9;
			break;
		case 9:
			func_59();
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, true);
			VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 0);
			bVar5 = PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 130, true);
			PLAYER::_0x3AD212429E095EFB(PLAYER::PLAYER_ID(), Local_14.f_15);
			if ((!bVar5 && !func_29(Local_14.f_16, -1794415470)) && !Global_1430231.f_5)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !Global_1430231.f_5)
				{
					TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 1f, 1, 0);
				}
			}
			if ((bVar5 && !Local_14.f_42) && !Global_1430231.f_5)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
				{
					if (((func_61(func_60()) > 15 || func_62(&uVar0)) || PED::_0x88A5564B19C15391(Global_35)) || Local_14.f_44)
					{
						func_50(Local_14.f_16, "BAD_FEELING_ACCEPT", 1808677283, Global_35, 1, 0, 0, 1);
					}
					Local_14.f_42 = 1;
				}
			}
			if (bVar5 && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_14.f_15, false);
				if (!bLocal_434)
				{
					Local_14.f_397 = MISC::GET_GAME_TIMER();
				}
				if (Local_14.f_45)
				{
					Local_14 = 12;
				}
				else
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
					func_50(Local_14.f_16, "GIDDY_UP", 1808677283, Global_35, 1, 0, 0, 1);
					func_63();
				}
			}
			break;
		case 12:
			func_59();
			func_56(func_55(iLocal_442));
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 130, false);
			if (((PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false) && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false)) && (MISC::GET_GAME_TIMER() - Local_14.f_397) > 500) || (MISC::GET_GAME_TIMER() - Local_14.f_397) > 20000)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_50(Local_14.f_16, "GIDDY_UP", 1808677283, Global_35, 1, 0, 0, 1);
				VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 0);
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
				func_63();
				Local_14.f_397 = MISC::GET_GAME_TIMER();
			}
			break;
		case 13:
			func_59();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID()))
			{
				LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
			}
			Local_14.f_41 = 1;
			if (PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				bLocal_439 = true;
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SHUFFLE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
			}
			if (!bLocal_434)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_16, true);
				if (Local_14.f_45)
				{
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						CAM::DO_SCREEN_FADE_IN(3000);
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_445) > 7000)
				{
					bLocal_434 = true;
					if (Local_14.f_407 == 69 || Local_14.f_407 == 126)
					{
						iVar6 = 2;
					}
					else
					{
						iVar6 = 1;
					}
					if (!func_64(&(Local_14.f_60), Global_35, iVar6))
					{
						bLocal_434 = false;
					}
					else
					{
						func_65(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), Local_14.f_50, &uVar7);
						func_66(&(Local_14.f_60), uVar7, 0);
					}
				}
			}
			else if (!func_67(&(Local_14.f_60)))
			{
				bLocal_434 = false;
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_68(Local_14.f_16), true);
				ENTITY::SET_ENTITY_INVINCIBLE(func_68(Local_14.f_15), true);
				if (Local_14.f_46 && ENTITY::DOES_ENTITY_EXIST(func_10(7)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_10(7), true);
				}
				if (Local_14.f_47 && ENTITY::DOES_ENTITY_EXIST(func_10(1)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_10(1), true);
				}
				if (func_69(21) && Local_14.f_407 == 105)
				{
					Global_1430231.f_10 = 1;
				}
				Local_14 = 17;
			}
			if ((!bLocal_435 && !bLocal_434) && !bLocal_437)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) <= 2000f)
				{
					bLocal_435 = true;
					func_50(Local_14.f_16, "COMMENT_ON_DISTANCE_FAR", 1808677283, Global_35, 1, 0, 0, 1);
				}
			}
			if (!bLocal_436 && !bLocal_434)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) <= 200f)
				{
					bLocal_436 = true;
					func_50(Local_14.f_16, "COMMENT_ON_DISTANCE_NEAR", 1808677283, Global_35, 1, 0, 0, 1);
				}
			}
			break;
		case 16:
			func_59();
			if (!func_29(Local_14.f_16, -1794415470))
			{
				TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 2f, 1, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
				func_63();
			}
			if (func_70(Local_14.f_16, 0) || func_39(Global_35, Local_14.f_16, 1) > 5625f)
			{
				Local_14 = 20;
			}
			break;
		case 17:
			func_59();
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (func_69(21) && Global_1430231.f_10)
			{
				STREAMING::_0x62D5F0588915B277();
				return false;
			}
			if (func_71(&(Local_14.f_60)))
			{
				if (Local_14.f_46)
				{
					func_31(func_10(7), func_72(iLocal_442, 0), func_73(iLocal_442), 2, 1073741824 /* Float: 2f */);
					ENTITY::SET_ENTITY_INVINCIBLE(func_10(7), false);
				}
				if (Local_14.f_47)
				{
					func_31(func_10(1), func_72(iLocal_442, 1), func_73(iLocal_442), 2, 1073741824 /* Float: 2f */);
					ENTITY::SET_ENTITY_INVINCIBLE(func_10(1), false);
				}
				if (PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
				{
					if (!func_29(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						func_50(Local_14.f_16, "ARRIVED_AT_DESTINATION", 1808677283, Global_35, 1, 0, 0, 1);
						if (Local_14.f_407 == 69 || Local_14.f_407 == 126)
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, Local_14.f_15, 17039360, 0);
						}
						else
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, Local_14.f_15, 16908288, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						bLocal_439 = false;
						if (func_74(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
						{
							WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
						}
					}
				}
				TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(func_68(Local_14.f_16), false);
				ENTITY::SET_ENTITY_INVINCIBLE(func_68(Local_14.f_15), false);
				CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
				func_75(100f);
				func_50(Local_14.f_16, "ARRIVED_AT_DESTINATION_FAST_TRAVEL", 1808677283, Global_35, 1, 0, 0, 1);
				iLocal_445 = MISC::GET_GAME_TIMER();
				Local_14 = 19;
			}
			break;
		case 19:
			func_59();
			Local_14.f_40 = 1;
			if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_16, joaat("REL_NO_RELATIONSHIP"));
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				bLocal_439 = false;
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (func_14() == 120)
					{
						VEHICLE::_0xC2E62678D602853C(Local_14.f_15, -3712.5f, -2618.5f, -13f, -3710f, -2615.5f, -13.5f);
					}
					func_77(func_14(), func_76(), -1, 0, -1, 0);
					func_50(Global_35, "RIDER_THANK_FOR_LIFT", 1808677283, Local_14.f_16, 1, 0, 0, 1);
					Local_14 = 20;
				}
			}
			break;
		case 20:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				func_50(Local_14.f_16, "TAXI_FRIENDLY_FAREWELL", 1808677283, Global_35, 1, 0, 0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_16, false);
			VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
			Local_14.f_46 = 0;
			Local_14.f_47 = 0;
			func_11(&(Local_14.f_60));
			bLocal_434 = false;
			bLocal_435 = false;
			bLocal_436 = false;
			bLocal_432 = true;
			bLocal_437 = false;
			Local_14.f_42 = 0;
			Local_14.f_41 = 0;
			Local_14.f_45 = 0;
			Global_1430231.f_4 = 0;
			Global_1430231.f_10 = 0;
			if (func_25(Local_14.f_407))
			{
				Local_14 = 3;
				func_18();
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && func_5(Global_35, 0))
	{
		func_78(PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false));
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_14.f_15, false, false)) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !PED::IS_PED_INJURED(Global_35)) && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, true))
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	return false;
}

void func_3(int* iParam0)
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
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

int func_4()
{
	return Global_1899515;
}

bool func_5(int iParam0, int iParam1)
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
	if (func_79(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_79(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_79(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_79(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_79(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_79(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_79(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_79(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_80(*iParam0);
	iVar1 = func_81(*iParam0);
	iVar2 = func_82(*iParam0);
	iVar3 = func_83(*iParam0);
	iVar4 = func_84(*iParam0);
	iVar5 = func_85(*iParam0);
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
	iVar6 = func_86(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_86(iVar1, iVar0);
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
	func_87(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_7(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_88(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_89(&Global_1935630, 4194304);
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

void func_8(var uParam0)
{
	func_90();
	UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("FAST_TRAVEL_MENU"));
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	MAP::DISPLAY_RADAR(true);
	func_91(0);
	uParam0->f_5 = 0;
}

void func_9(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	if (ENTITY::DOES_ENTITY_EXIST(func_10(7)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(7), true);
		PED::_0xC9151483CC06A414(func_10(7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_10(1)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(1), true);
		PED::_0xC9151483CC06A414(func_10(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_10(6)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(6), true);
		PED::_0xC9151483CC06A414(func_10(6));
	}
	if (CAM::IS_CAM_RENDERING(iParam0->f_18))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::IS_CAM_ACTIVE(iParam0->f_18))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_18, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_18))
	{
		CAM::DESTROY_CAM(iParam0->f_18, false);
	}
	iParam0->f_39 = 0;
}

bool func_10(int iParam0)
{
	iParam0 = func_92(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/];
}

void func_11(var uParam0)
{
	func_93(uParam0);
	uParam0->f_331 = 0;
}

int func_12(int iParam0, bool bParam1)
{
	if (func_94(iParam0))
	{
		return 1;
	}
	if (!bParam1)
	{
		if (func_95(5000))
		{
			return 1;
		}
	}
	switch (func_96(0))
	{
		case 0:
			return 0;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return 1;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return 1;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_13(int iParam0, bool bParam1, bool bParam2)
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
		if (func_97())
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
		iVar0 = func_98(Global_1898164.f_1[0 /*5*/]);
		if (func_99(iVar0) && func_100(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_101(Global_1898164.f_1[0 /*5*/]))
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

int func_14()
{
	return Global_1894899.f_2;
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 69:
		case 76:
		case 78:
		case 92:
		case 105:
		case 115:
		case 120:
		case 126:
			return true;
		default:
			break;
	}
	return false;
}

int func_16()
{
	if ((!func_5(Local_14.f_16, 0) && !Global_1430231.f_5) && !bLocal_433)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
		{
			VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
		}
		return 5;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
	{
		if (PED::IS_PED_FLEEING(Local_14.f_16) && !Global_1430231.f_5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
			{
				VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
			}
			return 4;
		}
		else if (PED::IS_PED_IN_COMBAT(Local_14.f_16, 0) && !Global_1430231.f_5)
		{
			return 4;
		}
		else if (PED::_0x331550B212014B92(Local_14.f_16, Global_35))
		{
			if (!LAW::_0x0EAF918F751F27BA(Local_14.f_16))
			{
				LAW::_0xF0B67BAD53C35BD9(Local_14.f_16, Global_35, Local_14.f_16, ENTITY::GET_ENTITY_COORDS(Local_14.f_16, true, false), joaat("CRIME_HASSLE"));
			}
			return 4;
		}
		else if (LAW::_0x0EAF918F751F27BA(Local_14.f_16))
		{
			return 4;
		}
	}
	if ((ENTITY::IS_ENTITY_DEAD(Local_14.f_15) && !bLocal_433) && !Global_1430231.f_5)
	{
		return 3;
	}
	return 0;
}

void func_17(var uParam0)
{
	if (uParam0->f_331 == 1)
	{
		func_102(uParam0);
	}
	switch (uParam0->f_332)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_103(uParam0, 3);
			break;
		case 3:
			if (func_104(uParam0))
			{
				func_103(uParam0, 4);
			}
			break;
		case 4:
			func_103(uParam0, 5);
			break;
		case 5:
			break;
	}
}

int func_18()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_14();
	if (func_105(105) && iVar1 != 105)
	{
		Local_14.f_1[0] = 0;
		iVar0++;
	}
	else
	{
		Local_14.f_1[0] = -1;
	}
	if (func_105(76) && iVar1 != 76)
	{
		Local_14.f_1[1] = 1;
		iVar0++;
	}
	else
	{
		Local_14.f_1[1] = -1;
	}
	if (func_105(69) && iVar1 != 69)
	{
		Local_14.f_1[2] = 4;
		iVar0++;
	}
	else
	{
		Local_14.f_1[2] = -1;
	}
	if (func_105(26) && iVar1 != 26)
	{
		Local_14.f_1[3] = 6;
		iVar0++;
	}
	else
	{
		Local_14.f_1[3] = -1;
	}
	if (func_105(5) && iVar1 != 5)
	{
		Local_14.f_1[4] = 3;
		iVar0++;
	}
	else
	{
		Local_14.f_1[4] = -1;
	}
	if ((func_105(38) && iVar1 != 38) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[5] = 5;
		iVar0++;
	}
	else
	{
		Local_14.f_1[5] = -1;
	}
	if (func_105(78) && iVar1 != 78)
	{
		Local_14.f_1[6] = 2;
		iVar0++;
	}
	else
	{
		Local_14.f_1[6] = -1;
	}
	if (func_105(92) && iVar1 != 92)
	{
		Local_14.f_1[7] = 7;
		iVar0++;
	}
	else
	{
		Local_14.f_1[7] = -1;
	}
	if ((func_105(120) && iVar1 != 120) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[8] = 8;
		iVar0++;
	}
	else
	{
		Local_14.f_1[8] = -1;
	}
	if ((func_105(126) && iVar1 != 126) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[9] = 9;
		iVar0++;
	}
	else
	{
		Local_14.f_1[9] = -1;
	}
	if ((func_105(115) && iVar1 != 115) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[10] = 10;
		iVar0++;
	}
	else
	{
		Local_14.f_1[10] = -1;
	}
	return iVar0;
}

bool func_19()
{
	if (func_106() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_20()
{
	PED::_RESERVE_AMBIENT_PEDS(5);
	STREAMING::REQUEST_MODEL(iLocal_430, false);
	STREAMING::REQUEST_MODEL(bLocal_431, false);
}

bool func_21(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (Global_1415419.f_9721[iVar0 /*8*/] == iParam0 || ((bParam1 && Global_1415419.f_19[iParam0 /*12*/].f_5 != 0) && Global_1415419.f_19[Global_1415419.f_9721[iVar0 /*8*/] /*12*/].f_5 == Global_1415419.f_19[iParam0 /*12*/].f_5))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.532f, -1296.313f, 74.69895f;
		case 76:
			return -179.2878f, 653.2728f, 112.671f;
		case 69:
			return 1521.499f, 421.2237f, 88.996f;
		case 78:
			return 2927.38f, 1292.17f, 43.3466f;
		case 26:
			return -1847.386f, -431.3473f, 158.5361f;
		case 5:
			return 2740.203f, -1409.765f, 45.1295f;
		case 38:
			return -853.2393f, -1335.256f, 42.35394f;
		case 120:
			return -3711.96f, -2638.115f, -14.5579f;
		case 126:
			return -2478.344f, -2441.168f, 59.0484f;
		case 115:
			return -5566.151f, -2948.546f, -1.71505f;
		case 92:
			return 2944.181f, 597.33f, 43.0326f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_23(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_24(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_107(vVar0, vParam1);
}

bool func_25(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			if (func_69(21))
			{
				return false;
			}
			return true;
		case 76:
			return true;
		case 69:
			return true;
		case 26:
			return true;
		case 5:
			return true;
		case 38:
			return true;
		case 120:
			return false;
		case 126:
			return false;
		case 115:
			return false;
		case 92:
			return false;
	}
	return false;
}

bool func_26()
{
	int iVar0;

	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_430))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(bLocal_431))
	{
		iVar0 = 0;
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_27()
{
	int iVar0;

	iVar0 = func_14();
	iLocal_443 = iVar0;
	Local_14.f_22 = func_108(iVar0);
	Local_14.f_19 = { func_22(iVar0) };
	Local_14.f_30 = func_109(iVar0);
	Local_14.f_27 = { func_110(iVar0) };
}

bool func_28()
{
	float fVar0;
	bool bVar1;
	vector3 vVar2;

	fVar0 = func_24(Global_35, func_22(func_14()), 1);
	if (bLocal_432)
	{
		return true;
	}
	if ((!CAM::IS_SPHERE_VISIBLE(Local_14.f_19, 2f) && fVar0 > 2500f) || CAM::IS_SCREEN_FADED_OUT())
	{
		bVar1 = func_10(7);
		if ((CAM::IS_SCREEN_FADED_OUT() && ENTITY::DOES_ENTITY_EXIST(bVar1)) && func_111(bVar1, Local_14.f_19, 1) < 6f)
		{
			vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_19, Local_14.f_22, 1f, -6f, 0f) };
			func_31(bVar1, vVar2, 0f, 2, 1073741824 /* Float: 2f */);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
		{
			func_112(Local_14.f_19, 5f, 1, 0, 0, 0, 0);
			Local_14.f_15 = VEHICLE::CREATE_VEHICLE(iLocal_430, Local_14.f_19, Local_14.f_22, true, true, false, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_14.f_15, true);
			return false;
		}
		if (!func_5(Local_14.f_16, 0))
		{
			Local_14.f_16 = func_113(bLocal_431, Local_14.f_27, Local_14.f_30, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 113, false);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 230, true);
			return false;
		}
	}
	else
	{
		if (fVar0 < 2500f)
		{
		}
		return false;
	}
	return true;
}

bool func_29(int iParam0, int iParam1)
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

bool func_30(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_31(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (bParam0 == func_68(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_114(bParam0))
	{
		if (func_115(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_79(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_31(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_31(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_79(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_79(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_79(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_79(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_79(iParam5, 129))
	{
		if (func_79(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_79(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_79(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_79(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_114(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_79(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_79(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_32(int iParam0)
{
	int iVar0;

	switch (iParam0->f_13)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			iVar0 = 3;
			break;
	}
	VEHICLE::_SET_VEHICLE_LIVERY(iParam0->f_15, iVar0);
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 105:
			return 1;
		case 26:
		case 38:
			return 0;
		case 69:
		case 76:
		case 78:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

bool func_35(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_36(var uParam0, var uParam1, var uParam2)
{
	if (!func_116(uParam0, 0, 0, -1, 1))
	{
		return false;
	}
	STREAMING::_0x05DD384F39DE1C8C(uParam1, uParam2);
	func_117(uParam0, 1);
	uParam0->f_331 = 1;
	func_103(uParam0, 1);
	return true;
}

bool func_37(int iParam0, bool bParam1, float fParam2, bool bParam3)
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

bool func_38(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (PED::IS_PED_IN_VEHICLE(Global_35, iParam0->f_15, false) && func_118(Global_35, iParam0->f_15) == -1)
	{
		if (!LAW::_0x0EAF918F751F27BA(iParam0->f_16))
		{
			LAW::_0xF0B67BAD53C35BD9(iParam0->f_16, Global_35, iParam0->f_16, iParam0->f_19, joaat("CRIME_THEFT_VEHICLE"));
			return true;
		}
	}
	bVar0 = func_34(iParam0->f_15, 2);
	bVar1 = func_34(iParam0->f_15, 3);
	bVar2 = func_34(iParam0->f_15, 0);
	bVar3 = func_34(iParam0->f_15, 1);
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar0, Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar1, Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar2, Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bVar3, Global_35, 1, 1))
	{
		LAW::_0xF0B67BAD53C35BD9(iParam0->f_16, Global_35, bVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_ASSAULT_ANIMAL"));
		return true;
	}
	return false;
}

float func_39(int iParam0, int iParam1, bool bParam2)
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
	return func_107(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_40()
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (!func_29(Local_14.f_16, -880529684))
	{
		TASK::TASK_LOOK_AT_COORD(Local_14.f_16, vVar0 + Vector(1f, 0f, 0f), 2500, 2, 51, 1);
	}
}

void func_41(int iParam0, int iParam1)
{
	func_119(iParam0, *iParam1);
	func_120(iParam0, 1);
	if (!Global_1911914.f_1582)
	{
		if (func_121(iParam0->f_404, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			AUDIO::STOP_PED_SPEAKING(iParam0->f_16, false);
			if ((((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (func_61(func_60()) > 15 && func_61(func_60()) <= 30)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2)) && !func_122(0, 0, 8, 0, 0, 0)) || func_123() >= 0.8f)
			{
				func_125(func_124(), 10000, 0, 0, 0, 1);
				func_50(iParam0->f_16, "BAD_FEELING_DECLINE", 1808677283, Global_35, 1, 0, 0, 1);
			}
			else if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2) || func_61(func_60()) > 15) || PED::IS_PED_CARRYING_SOMETHING(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(iParam0->f_15) && func_126(Global_35, iParam0->f_15, -1)))
			{
				func_125(func_124(), 10000, 0, 0, 0, 1);
				func_50(iParam0->f_16, "REFUSE_SERVICE", 1808677283, Global_35, 1, 0, 0, 1);
			}
			else
			{
				func_45(&(iParam0->f_404), 1, 1);
				if (func_43(iParam0->f_406))
				{
					func_45(&(iParam0->f_406), 1, 1);
				}
				func_50(Global_35, "PLAYER_ASK_FOR_RIDE", 1808677283, iParam0->f_16, 1, 0, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_16, joaat("REL_PLAYER_ALLY"));
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				*iParam0 = 11;
			}
		}
	}
}

void func_42()
{
	int iVar0;
	char* sVar1;
	int iVar2;

	if (func_39(Global_35, Local_14.f_16, 1) > 10000f)
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_35)
		{
			Local_14.f_35[iVar0] = 0;
			iVar0++;
		}
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_16))
	{
		if (func_127(Local_14.f_393, 1) && func_128())
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (func_39(Global_35, Local_14.f_16, 1) < 81f)
			{
				if (!Local_14.f_35[iVar2])
				{
					Local_14.f_35[iVar2] = 1;
					sVar1 = func_129(iVar2);
					if (MISC::ARE_STRINGS_EQUAL(sVar1, "CALL_OUT_MALE"))
					{
						func_40();
					}
					func_50(Local_14.f_16, sVar1, 1808677283, Global_35, 1, 0, 0, 1);
					Local_14.f_397 = MISC::GET_GAME_TIMER();
					func_130();
				}
			}
		}
		else
		{
			Local_14.f_397 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_43(int iParam0)
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

int func_44(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, int iParam14, bool bParam15, int iParam16)
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
	if (func_23(vParam2))
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
		if (func_131(iVar0, 2))
		{
			if (func_30(vParam2, Global_1945188[iVar0 /*18*/].f_6, 0.01f, 1) && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
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
		func_132(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, bParam13, iParam14, 1065353216 /* Float: 1f */, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

void func_45(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_43(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_133(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_134(iVar0);
	*uParam0 = 0;
}

bool func_46()
{
	if (func_14() == iLocal_443)
	{
		return true;
	}
	return false;
}

void func_47(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	if (ENTITY::DOES_ENTITY_EXIST(func_10(7)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(7), false);
		PED::_0xCAC43D060099EA72(func_10(7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_10(1)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(1), false);
		PED::_0xCAC43D060099EA72(func_10(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_10(6)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_10(6), false);
		PED::_0xCAC43D060099EA72(func_10(6));
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_18))
	{
		CAM::DESTROY_CAM(iParam0->f_18, false);
	}
	iParam0->f_18 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (bParam2)
	{
		CAM::SET_CAM_COORD(iParam0->f_18, func_135(iParam1));
		CAM::SET_CAM_ROT(iParam0->f_18, func_136(iParam1), 2);
	}
	else
	{
		CAM::SET_CAM_COORD(iParam0->f_18, func_137(iParam1));
		CAM::SET_CAM_ROT(iParam0->f_18, func_138(iParam1), 2);
	}
	if (!CAM::IS_CAM_ACTIVE(iParam0->f_18))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_18, true);
	}
	if (!CAM::IS_CAM_RENDERING(iParam0->f_18))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	iParam0->f_39 = 1;
}

void func_48()
{
	func_139();
	if (HUD::_DOES_TEXT_BLOCK_EXIST("STCH") && !HUD::TEXT_BLOCK_IS_LOADED("STCH"))
	{
		HUD::TEXT_BLOCK_REQUEST("STCH");
	}
}

bool func_49(var uParam0, int iParam1)
{
	if (!func_140())
	{
		return false;
	}
	if (!UIAPPS::CAN_LAUNCH_UIAPP_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("FAST_TRAVEL_MENU")) == 0)
	{
	}
	func_141(uParam0, iParam1);
	func_91(1);
	uParam0->f_5 = 1;
	return true;
}

bool func_50(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_142(iParam0, &Var0);
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;

	iVar0 = 1;
	MAP::DISPLAY_RADAR(false);
	func_143(0);
	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("FAST_TRAVEL_MENU")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("FAST_TRAVEL_MENU"), &Var3))
		{
			if (Var3.f_2 == -997855324)
			{
				iVar0 = 0;
			}
			else
			{
				switch (Var3)
				{
					case -1740156697:
						iVar1 = func_144(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var3.f_3, "itemName"));
						if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Var3.f_3, "enabled"))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_2, "description", func_145(func_55(iVar1)));
						}
						else if (func_146(iVar1))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_2, "description", "STAGE_COACH_LOCATION_LOCKDOWN");
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_2, "description", "STAGE_COACH_NOT_ENOUGH_MONEY");
						}
						break;
					case -1203660660:
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						iVar1 = func_144(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var3.f_3, "itemName"));
						iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, "price");
						uParam0->f_6 = iVar1;
						uParam0->f_7 = iVar2;
						iVar0 = 2;
						break;
					default:
						break;
				}
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("FAST_TRAVEL_MENU"));
	}
	return iVar0;
}

bool func_52()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_53(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

float func_54(int iParam0)
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

	iParam0 = func_92(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_147(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_148(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_148(iParam0) + 1;
	fVar6 = func_149(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_150(fVar3, fVar4, fVar11);
	return fVar12;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 0;
		case 76:
			return 1;
		case 69:
			return 4;
		case 78:
			return 2;
		case 26:
			return 6;
		case 5:
			return 3;
		case 38:
			return 5;
		case 92:
			return 7;
		case 120:
			return 8;
		case 126:
			return 9;
		case 115:
			return 10;
		default:
			break;
	}
	return -1;
}

void func_56(int iParam0)
{
	Local_14.f_50 = { func_151(iParam0) };
	Local_14.f_56 = func_152(iParam0);
	iLocal_442 = func_153(iParam0);
	if (!func_154(&(Local_14.f_60), iLocal_442))
	{
	}
}

void func_57(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_155(iParam0);
	if (bParam3)
	{
		func_156(iParam0, sParam1, iParam2);
	}
}

bool func_58()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	switch (iLocal_441)
	{
		case 0:
			if (!func_29(Global_35, -880529684))
			{
				TASK::TASK_LOOK_AT_COORD(Global_35, Local_14.f_27 + Vector(2f, 0f, 0f), 2500, 2, 51, 1);
			}
			func_50(Global_35, func_157(iLocal_442), 1808677283, Local_14.f_16, 1, 0, 0, 1);
			iLocal_441 = 2;
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (!Local_14.f_40)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) >= 2000f)
					{
						func_50(Local_14.f_16, "DESTINATION_FAR", 1808677283, Global_35, 1, 0, 0, 1);
					}
					else
					{
						bLocal_437 = true;
						func_50(Local_14.f_16, "DESTINATION_NEAR", 1808677283, Global_35, 1, 0, 0, 1);
					}
				}
				else
				{
					func_50(Local_14.f_16, "HAILED_AGAIN", 1808677283, Global_35, 1, 0, 0, 1);
				}
				iLocal_441 = 3;
			}
			break;
		case 3:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_59()
{
	Global_1905944.f_5695 = 1;
}

int func_60()
{
	return Global_1934266.f_4;
}

int func_61(int iParam0)
{
	if (!func_158(iParam0))
	{
		return 0;
	}
	return func_159(iParam0);
}

bool func_62(var uParam0)
{
	if (-1829635046 == func_160(81053684))
	{
		if (func_161(uParam0))
		{
			return true;
		}
	}
	else if (func_162(-525676072, uParam0))
	{
		if (func_161(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_63()
{
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
	{
		MAP::SET_RADAR_ZOOM(Global_1430231.f_9);
		MAP::REMOVE_BLIP(&(Global_1430231.f_9));
	}
	Global_1430231.f_4 = 1;
	iLocal_445 = MISC::GET_GAME_TIMER();
	CAM::SET_CINEMATIC_MODE_ACTIVE(true);
	Local_14 = 13;
}

bool func_64(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_331)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (iParam2 == -2)
	{
		iParam2 = 1;
	}
	STREAMING::_0x198B85CC3C7A4593(iParam1, iParam2);
	return true;
}

void func_65(vector3 vParam0, vector3 vParam3, var uParam6)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, true);
	iVar1 = func_163(BUILTIN::ROUND((fVar0 / 1300f)), 1, 24);
	iVar2 = (CLOCK::GET_CLOCK_HOURS() + iVar1);
	if (iVar2 >= 24)
	{
		iVar2 = (iVar2 - 24);
	}
	*uParam6 = iVar2;
}

int func_66(var uParam0, var uParam1, int iParam2)
{
	if (!uParam0->f_331)
	{
		return 0;
	}
	func_164(uParam0, uParam1, iParam2);
	return 1;
}

bool func_67(var uParam0)
{
	int iVar0;

	if (!uParam0->f_331)
	{
		return false;
	}
	iVar0 = func_165(uParam0);
	if (iVar0 != 6)
	{
		return false;
	}
	return true;
}

bool func_68(var uParam0)
{
	return uParam0;
}

bool func_69(int iParam0)
{
	int iVar0;

	if (!func_166(iParam0))
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

bool func_70(int iParam0, bool bParam1)
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

bool func_71(var uParam0)
{
	if (uParam0->f_332 == 5)
	{
		return true;
	}
	return false;
}

Vector3 func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 38:
			if (!bParam1)
			{
				return -858.4746f, -1345.088f, 42.5208f;
			}
			else
			{
				return -857.4746f, -1345.088f, 42.5208f;
			}
			break;
		case 26:
			if (!bParam1)
			{
				return -1837.177f, -426.5093f, 159.239f;
			}
			else
			{
				return -1836.177f, -426.5093f, 159.239f;
			}
			break;
		case 76:
			if (!bParam1)
			{
				return -188.6791f, 644.3501f, 112.4331f;
			}
			else
			{
				return -187.6791f, 644.3501f, 112.4331f;
			}
			break;
		case 69:
			if (!bParam1)
			{
				return 1524.589f, 404.6162f, 89.0229f;
			}
			else
			{
				return 1525.589f, 404.6162f, 89.0229f;
			}
			break;
		case 105:
			if (!bParam1)
			{
				return 1261.42f, -1303.208f, 75.0462f;
			}
			else
			{
				return 1262.42f, -1303.208f, 75.0462f;
			}
			break;
		case 5:
			if (!bParam1)
			{
				return 2732.242f, -1413.273f, 45.1349f;
			}
			else
			{
				return 2733.242f, -1413.273f, 45.1349f;
			}
			break;
		case 92:
			if (!bParam1)
			{
				return 2980.405f, 583.7278f, 43.3017f;
			}
			else
			{
				return 2981.405f, 583.7278f, 43.3017f;
			}
			break;
		case 78:
			if (!bParam1)
			{
				return 2918.512f, 1319.349f, 43.1745f;
			}
			else
			{
				return 2919.512f, 1319.349f, 43.1745f;
			}
			break;
		case 120:
			if (!bParam1)
			{
				return -3697.825f, -2646.591f, -14.3666f;
			}
			else
			{
				return -3698.825f, -2646.591f, -14.3666f;
			}
			break;
		case 126:
			if (!bParam1)
			{
				return -2475.658f, -2433.282f, 59.132f;
			}
			else
			{
				return -2476.658f, -2433.282f, 59.132f;
			}
			break;
		case 115:
			if (!bParam1)
			{
				return -5564.065f, -2957.373f, -1.5112f;
			}
			else
			{
				return -5565.065f, -2957.373f, -1.5112f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_73(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			return 290.1817f;
		case 26:
			return 134.5218f;
		case 76:
			return 314.8166f;
		case 69:
			return 129.5081f;
		case 105:
			return 42.7454f;
		case 5:
			return 110.1789f;
		case 92:
			return 86.0119f;
		case 78:
			return 165.0528f;
		case 120:
			return 88.1312f;
		case 126:
			return 270.7537f;
		case 115:
			return 342.4622f;
		default:
			break;
	}
	return 0f;
}

int func_74(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_75(float fParam0)
{
	if (func_167(1) < fParam0)
	{
		func_168(1, fParam0, 0);
	}
	if (func_167(2) < fParam0)
	{
		func_168(2, fParam0, 0);
	}
	if (func_167(0) < fParam0)
	{
		func_168(0, fParam0, 0);
	}
}

int func_76()
{
	return Global_1897952.f_41;
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_169())
	{
		return;
	}
	sVar1 = func_170(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_158(iParam4))
	{
		if (func_53(iParam0))
		{
			iParam4 = func_172(func_171(iParam0));
		}
		else
		{
			iParam4 = func_172(iParam1);
		}
	}
	if (func_158(iParam4))
	{
		iVar3 = func_159(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_174(func_173(iParam2));
	}
	else if ((func_175(iParam1, 2) || func_176(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_53(iParam0) && func_177(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_83(func_4());
		iVar5 = func_84(func_4());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_178(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_179(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_179(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_178(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_179(&cVar6, joaat("COLOR_PURE_WHITE")), func_179(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_180(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
	}
}

bool func_79(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_80(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_181(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_81(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_82(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_83(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_84(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_85(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_86(int iParam0, int iParam1)
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

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_182(iParam0, iParam6);
	func_183(iParam0, iParam5);
	func_184(iParam0, iParam4);
	func_185(iParam0, iParam3);
	func_186(iParam0, iParam2);
	func_187(iParam0, iParam1);
}

void func_88(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_90()
{
	func_188(34);
	func_188(35);
	func_188(36);
}

void func_91(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

int func_92(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_93(var uParam0)
{
	func_189(uParam0);
}

bool func_94(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_95(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_96(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_97()
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

int func_98(int iParam0)
{
	if (!func_101(iParam0))
	{
		return -1;
	}
	return func_191(func_190(iParam0));
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_100(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_101(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_102(var uParam0)
{
	if (STREAMING::_0x99F92061EFE908BA() || func_192(uParam0->f_318, 4))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
		if (func_193())
		{
			func_194(1);
		}
		if (uParam0->f_323 != 3 && !PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			if (func_5(uParam0->f_304.f_1, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_68(uParam0->f_304.f_1), true);
			}
		}
		AUDIO::_0x36559148B78853B3(0, false, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
		switch (uParam0->f_323)
		{
			case 0:
				uParam0->f_323 = 4;
				break;
			case 1:
				if (!func_192(uParam0->f_318, 4))
				{
					func_195(&(uParam0->f_318), 4);
				}
				uParam0->f_320 = (STREAMING::_0x2F4D53023F826FF0() - 1);
				if (STREAMING::_0xDABFE48BA0D457AA() > uParam0->f_300)
				{
					uParam0->f_301 = uParam0->f_300;
					uParam0->f_300 = STREAMING::_0xDABFE48BA0D457AA();
					uParam0->f_303 = uParam0->f_302;
					uParam0->f_302 = STREAMING::_0xE5B76E5B56CD77DD();
				}
				if (STREAMING::_0x5D5E2102B174B8D2() || STREAMING::_0x7B8C2B846C05E5AD())
				{
					if (func_192(uParam0->f_318, 8))
					{
						func_196(&(uParam0->f_318), 8);
					}
					uParam0->f_323 = 2;
				}
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					uParam0->f_323 = 3;
				}
				break;
			case 2:
				if (!func_197(uParam0))
				{
					STREAMING::_0x62D5F0588915B277();
				}
				else if (!STREAMING::_0x5D5E2102B174B8D2() && !STREAMING::_0x7B8C2B846C05E5AD())
				{
					func_112(uParam0->f_314, 2f, 1, 0, 0, 0, 0);
					uParam0->f_323 = 3;
				}
				break;
			case 3:
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					func_198(1);
					MAP::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					func_199();
					POPULATION::ENABLE_AMBIENT_ROAD_POPULATION();
					if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					}
					if (func_5(uParam0->f_304.f_1, 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(func_68(uParam0->f_304.f_1), false);
					}
					func_195(&(uParam0->f_318), 1);
					if (func_192(uParam0->f_318, 2048))
					{
						func_200(uParam0);
					}
					func_201(1);
					if (uParam0->f_324)
					{
						Call_Loc(uParam0->f_329);
					}
					func_195(&(uParam0->f_318), 32);
					func_195(&(uParam0->f_318), 64);
					if (func_192(uParam0->f_318, 4))
					{
						func_196(&(uParam0->f_318), 4);
					}
					func_202(0);
					uParam0->f_323 = 4;
				}
				break;
		}
		if (uParam0->f_324)
		{
			Call_Loc(uParam0->f_326);
		}
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_332 = iParam1;
}

bool func_104(var uParam0)
{
	return func_192(uParam0->f_318, 1);
}

bool func_105(int iParam0)
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

int func_106()
{
	return Global_1572887.f_12;
}

float func_107(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

float func_108(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 318.5363f;
		case 76:
			return 57.738f;
		case 69:
			return 100.6731f;
		case 78:
			return 152.5443f;
		case 26:
			return 69.952f;
		case 5:
			return 120.8282f;
		case 38:
			return 179.35f;
		case 120:
			return 346.4875f;
		case 126:
			return 120.5754f;
		case 115:
			return -171.37f;
		case 92:
			return 226.4227f;
		default:
			break;
	}
	return 0f;
}

float func_109(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 36.8812f;
		case 76:
			return 153.1632f;
		case 69:
			return 193.7838f;
		case 78:
			return 248.4695f;
		case 26:
			return 164.1503f;
		case 5:
			return 34.032f;
		case 38:
			return -96.3f;
		case 120:
			return -12.21f;
		case 126:
			return 44.57f;
		case 115:
			return 6.1754f;
		case 92:
			return 12.7544f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.369f, -1294.077f, 74.59763f;
		case 76:
			return -181.053f, 652.827f, 112.61f;
		case 69:
			return 1520.723f, 419.1999f, 88.97793f;
		case 78:
			return 2928.554f, 1290.363f, 43.6281f;
		case 26:
			return -1849.451f, -432.3141f, 158.4772f;
		case 5:
			return 2738.441f, -1408.518f, 45.19387f;
		case 38:
			return -851.8444f, -1338.266f, 42.4937f;
		case 120:
			return -3711.133f, -2625.833f, -14.65835f;
		case 126:
			return -2478.03f, -2444.9f, 59.345f;
		case 115:
			return -5568.203f, -2947.085f, -1.68425f;
		case 92:
			return 2946.014f, 599.033f, 43.488f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_111(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

void func_112(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_113(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_203(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_114(bool bParam0)
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

bool func_115(int iParam0)
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

bool func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_189(uParam0);
	uParam0->f_326 = 29771;
	uParam0->f_327 = 29779;
	uParam0->f_328 = 29787;
	uParam0->f_329 = 29795;
	func_208(uParam0, &iParam1);
	uParam0->f_304.f_2 = iParam2;
	uParam0->f_304.f_3 = iParam3;
	uParam0->f_304.f_4 = iParam4;
	uParam0->f_304.f_5 = 1f;
	uParam0->f_304.f_5.f_1 = 2000;
	uParam0->f_304.f_5.f_2 = 0f;
	uParam0->f_304.f_5.f_3 = 1;
	uParam0->f_304.f_5.f_4 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1f;
	func_196(&(uParam0->f_318), 128);
	uParam0->f_324 = func_209(uParam0);
	return uParam0->f_324;
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_195(&(uParam0->f_318), 2);
	}
	else
	{
		func_196(&(uParam0->f_318), 2);
	}
}

int func_118(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_119(int iParam0, int iParam1)
{
	if (!func_210(Global_35))
	{
		if (!func_43(iParam0->f_404))
		{
			iParam0->f_404 = func_211("STAGE_COACH", joaat("INPUT_INTERACT_LOCKON_Y"), iParam0->f_16, 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			func_212(iParam0->f_404, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0, 1);
		}
	}
}

void func_120(int iParam0, bool bParam1)
{
	if (func_43(iParam0->f_404))
	{
		func_213(iParam0->f_404, bParam1, 1);
	}
}

bool func_121(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_43(iParam0))
	{
		return false;
	}
	iVar0 = func_133(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	iVar0 = Global_40.f_9146.f_109;
	if (iVar0 == -15)
	{
		return true;
	}
	func_6(&iVar0, iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	if (func_127(iVar0, 1))
	{
		return true;
	}
	return false;
}

float func_123()
{
	return Global_1935436.f_9;
}

char* func_124()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return "STAGE_COACH_CARRYING";
	}
	if (func_123() >= 0.8f)
	{
		return "STAGE_COACH_DRUNK";
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return "STAGE_COACH_WANTED";
	}
	if (func_61(func_60()) > 15)
	{
		return "STAGE_COACH_BOUNTY";
	}
	if (!func_122(0, 0, 8, 0, 0, 0))
	{
		return "STAGE_COACH_ROBBED";
	}
	return "STAGE_COACH_WANTED";
}

var func_125(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_126(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_127(int iParam0, bool bParam1)
{
	return func_214(func_4(), iParam0, bParam1);
}

bool func_128()
{
	if (!func_122(0, 0, 8, 0, 0, 0))
	{
		return false;
	}
	if (UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	if (func_61(func_60()) > 15)
	{
		return false;
	}
	if (func_146(func_14()))
	{
		return false;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return false;
	}
	if (func_12(1, 0) || func_12(8, 0))
	{
		return false;
	}
	if (!func_215())
	{
		return false;
	}
	if (Global_1430231.f_2)
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return false;
	}
	if (PED::_0x331550B212014B92(Global_35, 0))
	{
		return false;
	}
	return true;
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CALL_OUT_MALE";
		case 1:
			return "CALL_OUT_NEUTRAL";
		case 2:
			return "CALL_OUT_GENERAL";
		default:
			break;
	}
	return "ALL_PLAYED";
}

void func_130()
{
	Local_14.f_393 = func_4();
	func_6(&(Local_14.f_393), 0, 20, 0, 0, 0, 0, 0);
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_132(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
	func_216(iParam0, 1);
	func_217(iParam0, 1);
	func_218(iParam0, 128);
}

int func_133(int iParam0)
{
	return iParam0;
}

void func_134(int iParam0)
{
	if (!func_219(iParam0))
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

Vector3 func_135(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1262.9f, -1302.3f, 76.7f;
		case 76:
			return -189.1f, 648f, 114f;
		case 69:
			return 1521.4f, 415.8f, 90.8f;
		case 78:
			return 2927f, 1296f, 45.2f;
		case 26:
			return -1850.6f, -434.7f, 160.2f;
		case 5:
			return 2742.3f, -1404.9f, 47.2f;
		case 38:
			return -859.2361f, -1343.471f, 44.0592f;
		case 120:
			return -3709.9f, -2637.7f, -13.2f;
		case 126:
			return -2476.8f, -2443f, 60.6f;
		case 115:
			return -5568.354f, -2946.089f, -0.2837f;
		case 92:
			return 2947f, 597f, 44.7f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_136(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return -6f, 0f, -41.6f;
		case 76:
			return -8.6f, 0f, -124.8f;
		case 69:
			return -2.3f, 0f, -175.9f;
		case 78:
			return -5.8f, 0f, -100.3f;
		case 26:
			return -9.9f, 0f, 177.4f;
		case 5:
			return -9.6f, 0f, -158.1f;
		case 38:
			return -6.1442f, 0f, 46.4805f;
		case 120:
			return -1.3f, 0f, -38.7f;
		case 126:
			return 5.2f, 0f, 157.7f;
		case 115:
			return 1.3264f, -1.6335f, 0.3277f;
		case 92:
			return 7.8f, 0f, 41.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_137(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.4f, -1293f, 76f;
		case 76:
			return -182.7f, 651.2f, 113.9f;
		case 69:
			return 1520.3f, 417.1f, 90.3f;
		case 78:
			return 2930.4f, 1289.2f, 44.9f;
		case 26:
			return -1851.5f, -434.2f, 159.6f;
		case 5:
			return 2745.78f, -1413.531f, 49.5649f;
		case 38:
			return -850.4026f, -1337.505f, 43.873f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return -2.4f, -0.1f, -141.3f;
		case 76:
			return -0.3f, 0f, -35.8f;
		case 69:
			return 1.1f, 0f, 4.9f;
		case 78:
			return 7.5f, 0f, 68.5f;
		case 26:
			return -1.1f, 0f, -36.7f;
		case 5:
			return -16.3768f, 0f, 74.143f;
		case 38:
			return -5.2f, 0f, 137.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_139()
{
	func_220(34);
	func_220(35);
	func_220(36);
}

bool func_140()
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("STCH"))
	{
		return false;
	}
	return true;
}

int func_141(var uParam0, int iParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_2))
	{
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "FastTravel");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "header", "STAGECOACH_HEADER");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subHeader", "STCH_FT_SUB");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "description", "STAGE_COACH");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subFooter", "");
	if (!func_221(uParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_142(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_143(bool bParam0)
{
	if (bParam0)
	{
		func_222(4);
	}
	func_222(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

int func_144(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 149)
	{
		if (Global_1888801[iVar0 /*35*/].f_30 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "STAGE_COACH_RHODES_TRAVEL";
		case 1:
			return "STAGE_COACH_VALENTINE_TRAVEL";
		case 4:
			return "STAGE_COACH_EMERALD_STATION_TRAVEL";
		case 2:
			return "STAGE_COACH_ANNESBURG_TRAVEL";
		case 6:
			return "STAGE_COACH_STRAWBERRY_TRAVEL";
		case 3:
			return "STAGE_COACH_SAINT_DENIS_TRAVEL";
		case 5:
			return "STAGE_COACH_BLACKWATER_TRAVEL";
		case 7:
			return "STAGE_COACH_VAN_HORN_TRAVEL";
		case 8:
			return "STAGE_COACH_ARMADILLO_TRAVEL";
		case 9:
			return "STAGE_COACH_MACFARLANE_TRAVEL";
		case 10:
			return "STAGE_COACH_TUMBLEWEED_TRAVEL";
		default:
			break;
	}
	return "REGION_INVALID";
}

bool func_146(int iParam0)
{
	if (!func_53(iParam0))
	{
		return false;
	}
	return func_177(iParam0, 33554432);
}

int func_147(int iParam0)
{
	iParam0 = func_92(iParam0);
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

int func_148(int iParam0)
{
	iParam0 = func_92(iParam0);
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

float func_149(int iParam0)
{
	iParam0 = func_92(iParam0);
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

float func_150(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

Vector3 func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1266.307f, -1296.911f, 74.7739f;
		case 1:
			return -179.2878f, 653.2728f, 112.671f;
		case 4:
			return 1521.499f, 421.2237f, 88.996f;
		case 2:
			return 2926.732f, 1290.527f, 43.4135f;
		case 6:
			return -1853.054f, -427.1276f, 158.9385f;
		case 3:
			return 2740.203f, -1409.765f, 45.1295f;
		case 5:
			return -862.3704f, -1333.5f, 42.234f;
		case 7:
			return 2937.992f, 591.9857f, 43.22659f;
		case 8:
			return -3633.064f, -2598.469f, -15.0825f;
		case 9:
			return -2347.273f, -2422.782f, 61.65891f;
		case 10:
			return -5566.151f, -2948.546f, -1.71505f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 232.0203f;
		case 1:
			return 286.9193f;
		case 4:
			return 283.7175f;
		case 2:
			return 356.0538f;
		case 6:
			return 75.8f;
		case 3:
			return 260.4557f;
		case 5:
			return 236.1239f;
		case 7:
			return -151.87f;
		case 8:
			return 141.6059f;
		case 9:
			return 76.08f;
		case 10:
			return -171.37f;
		default:
			break;
	}
	return 0f;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		case 1:
			return 76;
		case 4:
			return 69;
		case 2:
			return 78;
		case 6:
			return 26;
		case 3:
			return 5;
		case 5:
			return 38;
		case 7:
			return 92;
		case 8:
			return 120;
		case 9:
			return 126;
		case 10:
			return 115;
		default:
			break;
	}
	return -1;
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	struct<4> /*32*/ sVar9;

	if (!uParam0->f_331)
	{
		return false;
	}
	iVar0 = func_223(iParam1);
	fVar1 = func_224(iParam1);
	if (iVar0 == 0)
	{
		if (!func_225(uParam0, iParam1))
		{
			return false;
		}
		return false;
	}
	else
	{
		if (!func_226(&uVar2, iParam1))
		{
			return false;
		}
		if (!func_227(&uVar2, &Var9))
		{
			return false;
		}
		uParam0->f_317 = iParam1;
		uParam0->f_314 = { Var9 };
		uParam0->f_304 = Var9.f_3;
		STREAMING::_0x032A14D082A9B269(iVar0);
		STREAMING::_0xAFA87A7D41EE346A(fVar1);
		func_195(&(uParam0->f_318), 1024);
		func_196(&(uParam0->f_318), 2048);
	}
	func_103(uParam0, 2);
	return true;
}

void func_155(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_228(1) < iParam0)
	{
		iParam0 = func_228(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_229(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_156(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_230(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return "PLAYER_REQUEST_DESTINATION_ARMADILLO";
		case 78:
			return "PLAYER_REQUEST_DESTINATION_ANNESBURG";
		case 38:
			return "PLAYER_REQUEST_DESTINATION_BLACKWATER";
		case 69:
			return "PLAYER_REQUEST_DESTINATION_EMERALD_RANCH";
		case 105:
			return "PLAYER_REQUEST_DESTINATION_RHODES";
		case 5:
			return "PLAYER_REQUEST_DESTINATION_SAINT_DENIS";
		case 26:
			return "PLAYER_REQUEST_DESTINATION_STRAWBERRY";
		case 76:
			return "PLAYER_REQUEST_DESTINATION_VALENTINE";
		case 126:
			return "PLAYER_REQUEST_DESTINATION_MACFARLANES_RANCH";
		case 115:
			return "PLAYER_REQUEST_DESTINATION_TUMBLEWEED";
		case 92:
			return "PLAYER_REQUEST_DESTINATION_VAN_HORN";
		default:
			break;
	}
	return "REGION_INVALID";
}

bool func_158(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_159(int iParam0)
{
	if (!func_158(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_160(int iParam0)
{
	int iVar0;

	iVar0 = func_232(func_231(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_161(var uParam0)
{
	if (func_162(81053684, uParam0))
	{
		return true;
	}
	if (func_162(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_162(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_232(func_231(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_233(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_163(int iParam0, int iParam1, int iParam2)
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

void func_164(var uParam0, var uParam1, int iParam2)
{
	STREAMING::_0x07559B29950301FF(uParam1, iParam2);
}

int func_165(var uParam0)
{
	int iVar0;

	if (func_192(uParam0->f_318, 64))
	{
		return 0;
	}
	if (func_192(uParam0->f_318, 4) || STREAMING::_0x99F92061EFE908BA())
	{
		return 1;
	}
	if (uParam0->f_319 <= 0)
	{
		return 2;
	}
	if (Global_1935630.f_22)
	{
		return 3;
	}
	if (!func_192(uParam0->f_318, 2048) && !func_192(uParam0->f_318, 1024))
	{
		return 4;
	}
	if (uParam0->f_299 >= 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= uParam0->f_299)
		{
			STREAMING::_0xF11D7CB962FCD747(uParam0->f_288[iVar0]);
			iVar0++;
		}
	}
	else
	{
		if (func_192(uParam0->f_318, 2))
		{
			STREAMING::_0x6A6E79FBE8678C98();
		}
		STREAMING::_0xB9B9E47EDB9D63DB();
	}
	if (func_192(uParam0->f_318, 256) && uParam0->f_321 != 0)
	{
	}
	AUDIO::_0x36559148B78853B3(0, false, 0);
	func_198(0);
	MAP::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_234();
	func_235(1);
	func_236(-1, 0, 0, 0, 0);
	func_237();
	POPULATION::DISABLE_AMBIENT_ROAD_POPULATION(true);
	STREAMING::_0xCC61D8D6C19D9F14(3);
	TELEMETRY::_TELEMETRY_FAST_TRAVEL(func_238(func_14()), func_238(uParam0->f_317), uParam0->f_314);
	uParam0->f_323 = 1;
	return 6;
}

bool func_166(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

float func_167(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_168(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;

	if (func_106() != -1)
	{
		return;
	}
	if (!func_239(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_240(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_241(iParam0), iVar0);
	func_243(func_242(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_244(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_245(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_245(func_246(iParam0), 1);
	}
	sVar1 = func_247(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_169()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_248())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_13(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_170(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_249(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_251(func_250(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_252(iParam0) || func_239(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

int func_171(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_173(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_175(int iParam0, int iParam1)
{
	if (!func_253(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] && iParam1) != 0;
}

bool func_176(int iParam0, int iParam1)
{
	if (!func_158(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1) != 0;
}

bool func_177(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

float func_178(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_179(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_254(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_180(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> /*32*/ sVar0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

int func_181(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_182(int iParam0, int iParam1)
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

void func_183(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_81(*iParam0);
	iVar1 = func_80(*iParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_185(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_186(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_187(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_255(iParam0))
	{
		iVar3 = func_256(iParam0);
		iVar1 = func_257(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = func_258(iVar3, iVar2);
			iVar0 = iVar4;
			if (func_259(&(Global_1425247.f_3), iVar0, 2))
			{
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (func_259(&(Global_1425247.f_3), iVar0, 2))
		{
		}
	}
}

void func_189(var uParam0)
{
	int iVar0;

	uParam0->f_299 = -1;
	uParam0->f_300 = -1;
	uParam0->f_301 = -1;
	uParam0->f_302 = -1;
	uParam0->f_303 = -1;
	uParam0->f_319 = 5;
	uParam0->f_320 = -1;
	uParam0->f_321 = 0;
	uParam0->f_322 = 0;
	uParam0->f_323 = 0;
	STREAMING::_0x09FBF15D73EFC900();
	iVar0 = 0;
	while (iVar0 < 2049)
	{
		if (iVar0 != 1)
		{
			func_196(&(uParam0->f_318), iVar0);
		}
		iVar0++;
	}
}

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_192(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_193()
{
	return func_260();
}

void func_194(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_196(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_197(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (func_101(Global_1898330[iVar0]) && func_261(Global_1898330[iVar0]))
		{
			iVar1 = func_262(Global_1898330[iVar0]);
			if (iVar1 == 1 || iVar1 == 8)
			{
				if ((func_263(iVar0, 64) || func_263(iVar0, 16)) || func_263(iVar0, 32))
				{
					if (!func_192(uParam0->f_318, 8))
					{
						func_195(&(uParam0->f_318), 8);
					}
					return false;
				}
			}
		}
		iVar0++;
	}
	if (func_192(uParam0->f_318, 8))
	{
	}
	return true;
}

void func_198(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

void func_199()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 1);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_88(&Global_1935630, 16384);
}

int func_200(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_304.f_1))
		{
			if (func_115(uParam0->f_304.f_1))
			{
				PHYSICS::_0x0348469DAA17576C(uParam0->f_304.f_1);
			}
			func_31(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, true, false, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_304.f_1, 136, false);
			if (PED::IS_PED_RAGDOLL(uParam0->f_304.f_1))
			{
				PED::_0x221F4D9912B7FE86(uParam0->f_304.f_1, 1);
			}
			if (PED::CAN_PED_BE_MOUNTED(uParam0->f_304.f_1))
			{
				func_264(PLAYER::PLAYER_PED_ID(), uParam0->f_304.f_1, 0, -1, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
		{
			func_31(uParam0->f_304.f_2, uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
			iVar0 = PLAYER::PLAYER_PED_ID();
			func_265(&iVar0, &(uParam0->f_304.f_2), uParam0->f_304.f_3, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_304.f_2, false);
		}
		else
		{
			func_31(PLAYER::PLAYER_PED_ID(), uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
		}
	}
	else
	{
		return 0;
	}
	if (uParam0->f_304.f_4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), uParam0->f_304.f_5, uParam0->f_304.f_5.f_1, uParam0->f_304.f_5.f_2, uParam0->f_304.f_5.f_3, uParam0->f_304.f_5.f_4);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	return 1;
}

void func_201(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 - (Global_1310750.f_16035 && iParam0));
}

void func_202(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_266(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_267(1);
	}
}

void func_203(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_268(bParam1))
		{
			func_269(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_270(bParam0, 0, 1);
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
			func_271(bParam0, 0);
			bVar0 = true;
		}
		func_272(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_204()
{
}

void func_205(var uParam0, var uParam1)
{
}

void func_206(var uParam0, var uParam1)
{
}

void func_207()
{
}

int func_208(var uParam0, int iParam1)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(*iParam1) || ENTITY::IS_ENTITY_DEAD(*iParam1)) || PED::IS_PED_HUMAN(*iParam1))
	{
		return 0;
	}
	uParam0->f_304.f_1 = *iParam1;
	STREAMING::_0x2A6D1DAAB9EBB262(*iParam1);
	return 1;
}

int func_209(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1))
	{
		if (!PED::CAN_PED_BE_MOUNTED(uParam0->f_304.f_1))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
	{
		if (!ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_304.f_2))
		{
			return 0;
		}
		if (func_273(uParam0->f_304.f_2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_210(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

int func_211(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_131(iVar0, 2))
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
				func_132(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_212(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_133(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_213(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_43(iParam0))
	{
		return;
	}
	iVar0 = func_133(iParam0);
	if (bParam1)
	{
		func_274(iParam0, 4);
		func_216(iVar0, 1);
		func_217(iVar0, 1);
	}
	else
	{
		func_218(iParam0, 4);
		func_217(iVar0, 0);
	}
}

bool func_214(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_275(iParam1) || !func_275(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_215()
{
	int iVar0;

	iVar0 = func_14();
	if (ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		if ((((func_105(120) && iVar0 != 120) || (func_105(126) && iVar0 != 126)) || (func_105(115) && iVar0 != 115)) || (func_105(38) && iVar0 != 38))
		{
			return true;
		}
	}
	if (((((((func_105(105) && iVar0 != 105) || (func_105(76) && iVar0 != 76)) || (func_105(69) && iVar0 != 69)) || (func_105(26) && iVar0 != 26)) || (func_105(5) && iVar0 != 5)) || (func_105(78) && iVar0 != 78)) || (func_105(92) && iVar0 != 92))
	{
		return true;
	}
	return false;
}

void func_216(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_131(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_217(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_218(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

bool func_219(int iParam0)
{
	return func_131(iParam0, 2);
}

void func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (func_255(iParam0))
	{
		iVar3 = func_256(iParam0);
		iVar1 = func_257(iVar3);
		iVar2 = 0;
		while (iVar2 <= (iVar1 - 1))
		{
			iVar4 = func_258(iVar3, iVar2);
			iVar0 = iVar4;
			if (func_276(&(Global_1425247.f_3), iVar0, 2))
			{
				if (!bVar5 && (func_277(iVar4) == 3 || func_277(iVar4) == 4))
				{
					func_278(14);
					bVar5 = true;
				}
			}
			iVar2++;
		}
	}
	else
	{
		iVar0 = iParam0;
		if (func_276(&(Global_1425247.f_3), iVar0, 2))
		{
			if (func_277(iParam0) == 3 || func_277(iParam0) == 4)
			{
				func_278(14);
			}
		}
	}
}

bool func_221(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = func_228(1);
	bVar5 = true;
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "locationList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_4);
	iVar1 = 0;
	while (iVar1 < iParam1->f_1)
	{
		iVar3 = func_153(iParam1->f_1[iVar1]);
		iVar2 = func_279(func_14(), iVar3);
		if (func_53(iVar3) && iVar3 != func_14())
		{
			iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, func_280(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar4, "itemName", func_281(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "forSale", true);
			DATABINDING::_DATABINDING_ADD_DATA_INT(iVar4, "price", iVar2);
			if (iVar2 < iVar0 || iVar2 <= 0)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (func_146(iVar3))
			{
				bVar5 = false;
			}
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "enabled", bVar5);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_4, -1, "fast_travel_item", iVar4);
		}
		iVar1++;
	}
	return true;
}

void func_222(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@RHODES");
		case 76:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@VALENTINE");
		case 69:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@EMERALDRANCH");
		case 78:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@ANNESBURG");
		case 26:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@STRAWBERRY");
		case 5:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@SAINTDENIS");
		case 38:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@BLACKWATER");
		case 120:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@ARMADILLO");
		case 126:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@MACFARLANESRANCH");
		case 115:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@TUMBLEWEED");
		case 92:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@VANHORNTRADINGPOST");
		default:
			break;
	}
	return 0;
}

float func_224(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 318.5363f;
		case 76:
			return 57.738f;
		case 69:
			return 100.6731f;
		case 78:
			return 152.5443f;
		case 26:
			return 69.952f;
		case 5:
			return 118.7512f;
		case 38:
			return 179.35f;
		case 120:
			return 346.4875f;
		case 126:
			return 120.5754f;
		case 115:
			return -171.37f;
		case 92:
			return 226.4227f;
		default:
			break;
	}
	return 0f;
}

int func_225(var uParam0, int iParam1)
{
	var uVar0;
	struct<5> /*40*/ sVar7;

	if (!func_226(&uVar0, iParam1))
	{
		return 0;
	}
	if (!func_227(&uVar0, &Var7))
	{
		return 0;
	}
	uParam0->f_317 = iParam1;
	uParam0->f_314 = { Var7 };
	uParam0->f_304 = Var7.f_3;
	if (Var7.f_4 == 0)
	{
		return func_282(uParam0, Var7, Var7.f_3);
	}
	else
	{
		STREAMING::_0x032A14D082A9B269(Var7.f_4);
		func_195(&(uParam0->f_318), 1024);
		func_196(&(uParam0->f_318), 2048);
		return 1;
	}
	return 1;
}

bool func_226(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	func_283(uParam0);
	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_238(iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = 0;
	iVar1 = STREAMING::_0xD6E39DC5D46DF4AB(iVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_1 = iVar0;
	uParam0->f_2 = iVar1;
	return true;
}

bool func_227(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	float fVar6;
	float fVar7;

	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	if (uParam0->f_2 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		if (func_284(uParam0, iVar0, &Var1))
		{
			if (iVar0 == 0)
			{
				*uParam1 = { Var1 };
				uParam1->f_3 = Var1.f_3;
				uParam1->f_4 = Var1.f_4;
			}
			else if (!func_23(Var1))
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Var1);
				fVar7 = BUILTIN::VDIST2(Global_36, *uParam1);
				if (fVar6 * fVar6) < (fVar7 * fVar7)
				{
					*uParam1 = { Var1 };
					uParam1->f_3 = Var1.f_3;
					uParam1->f_4 = Var1.f_4;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_228(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

struct<2> /*16*/ func_229(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

var func_230(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> /*32*/ sVar0;
	struct<7> /*56*/ sVar13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = UIFEED::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_285(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_231(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_286(iVar0);
}

int func_232(int iParam0, int iParam1)
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

int func_233(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_234()
{
	LAW::_0xD6C0A8C7C0B2F82C(PLAYER::PLAYER_ID(), 0);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	func_89(&Global_1935630, 16384);
}

void func_235(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

void func_236(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_288() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_289(iVar1) && !func_290(iVar1, iParam2)) && (!bParam3 || !func_291(iVar1))) && (!bParam4 || !func_292(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_293(iVar0);
			}
		}
		iVar0++;
	}
}

void func_237()
{
	if (!func_289(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	func_294(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

bool func_239(int iParam0)
{
	if (!func_295(iParam0))
	{
		return false;
	}
	return func_296(iParam0);
}

int func_240(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_242(int iParam0)
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

void func_243(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_297(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_244(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

void func_245(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_298(iParam0, &iVar0, &iVar1);
	if (!func_299(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_300(iVar0, iVar1);
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_248()
{
	if (func_106() != 0)
	{
		return true;
	}
	return true;
}

char* func_249(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_250(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_301(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_252(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_253(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

char* func_254(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_255(int iParam0)
{
	int iVar0;

	iVar0 = func_256(iParam0);
	return (iVar0 != -1 && iVar0 != 0);
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		case 12:
			return 0;
		case 13:
			return 0;
		case 14:
			return 0;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 0;
		case 21:
			return 0;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 0;
		case 27:
			return 0;
		case 28:
			return 0;
		case 29:
			return 0;
		case 30:
			return 0;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 36:
			return 0;
		default:
			break;
	}
	return -1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		default:
			break;
	}
	return -1;
}

int func_258(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return func_302(iParam1);
		default:
			break;
	}
	return -1;
}

bool func_259(var uParam0, int iParam1, int iParam2)
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

bool func_260()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_261(int iParam0)
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
		iVar0 = func_303(iParam0);
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

int func_262(int iParam0)
{
	if (!func_101(iParam0))
	{
		return 0;
	}
	return func_304(func_190(iParam0));
}

bool func_263(int iParam0, int iParam1)
{
	return (func_305(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

int func_264(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

int func_265(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false, false))
	{
		return 0;
	}
	if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, iParam2) != *iParam0)
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam1, iParam2))
		{
			if (iParam3 && func_306(*uParam1))
			{
				iParam2 = func_307(*uParam1);
			}
			else
			{
				return 0;
			}
		}
		if (PED::IS_PED_ON_MOUNT(*iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(*iParam0, true, false);
		}
		PED::SET_PED_INTO_VEHICLE(*iParam0, *uParam1, iParam2);
	}
	return 1;
}

void func_266(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_267(1);
	}
}

void func_267(bool bParam0)
{
	if (bParam0)
	{
		func_195(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_196(&(Global_40.f_12019.f_42), 1);
	}
}

bool func_268(bool bParam0)
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

void func_269(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_308(bParam0, iParam1))
		{
			if (func_309(bParam0, iParam1))
			{
				if (func_310(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_311(bParam0);
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

void func_270(bool bParam0, int iParam1, bool bParam2)
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

void func_271(bool bParam0, bool bParam1)
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

void func_272(bool bParam0, int iParam1)
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

bool func_273(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_274(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

bool func_275(int iParam0)
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
	iVar0 = func_85(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_84(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_83(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_80(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_82(iParam0);
	if (iVar5 < 1 || iVar5 > func_86(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_276(var uParam0, int iParam1, int iParam2)
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

int func_277(int iParam0)
{
	return Global_1425247.f_12[iParam0];
}

void func_278(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(1, 1, 0);
	}
	func_125(func_312(iParam0), 10000, 0, 0, 0, 1);
}

int func_279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			switch (iParam1)
			{
				case 92:
					return 390;
				case 69:
					return 460;
				case 5:
					return 820;
				case 105:
					return 940;
				case 76:
					return 790;
				case 26:
					return 1450;
				case 38:
					return 1650;
				case 126:
					return 1720;
				case 120:
					return 1800;
				case 115:
					return 2110;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 78:
					return 390;
				case 69:
					return 380;
				case 5:
					return 420;
				case 105:
					return 570;
				case 76:
					return 820;
				case 26:
					return 1430;
				case 38:
					return 1630;
				case 126:
					return 1690;
				case 120:
					return 1710;
				case 115:
					return 1920;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 78:
					return 460;
				case 92:
					return 380;
				case 5:
					return 550;
				case 105:
					return 580;
				case 76:
					return 450;
				case 26:
					return 990;
				case 38:
					return 1010;
				case 126:
					return 1230;
				case 120:
					return 1480;
				case 115:
					return 1770;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 78:
					return 820;
				case 92:
					return 420;
				case 69:
					return 550;
				case 105:
					return 250;
				case 76:
					return 1040;
				case 26:
					return 1170;
				case 38:
					return 1280;
				case 126:
					return 1550;
				case 120:
					return 1710;
				case 115:
					return 1812;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 78:
					return 940;
				case 92:
					return 570;
				case 69:
					return 580;
				case 5:
					return 250;
				case 76:
					return 790;
				case 26:
					return 830;
				case 38:
					return 1010;
				case 126:
					return 1230;
				case 120:
					return 1480;
				case 115:
					return 1770;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 78:
					return 790;
				case 92:
					return 820;
				case 69:
					return 450;
				case 5:
					return 1040;
				case 105:
					return 790;
				case 26:
					return 520;
				case 38:
					return 850;
				case 126:
					return 1150;
				case 120:
					return 1390;
				case 115:
					return 1570;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 78:
					return 1450;
				case 92:
					return 1430;
				case 69:
					return 990;
				case 5:
					return 1170;
				case 105:
					return 830;
				case 76:
					return 520;
				case 38:
					return 380;
				case 126:
					return 720;
				case 120:
					return 980;
				case 115:
					return 1310;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 78:
					return 1650;
				case 92:
					return 1630;
				case 69:
					return 1010;
				case 5:
					return 1280;
				case 105:
					return 1010;
				case 76:
					return 850;
				case 26:
					return 380;
				case 126:
					return 490;
				case 120:
					return 710;
				case 115:
					return 1050;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 78:
					return 1720;
				case 92:
					return 1690;
				case 69:
					return 1230;
				case 5:
					return 1550;
				case 105:
					return 1230;
				case 76:
					return 1150;
				case 26:
					return 720;
				case 38:
					return 490;
				case 120:
					return 440;
				case 115:
					return 820;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 78:
					return 1800;
				case 92:
					return 1710;
				case 69:
					return 1480;
				case 5:
					return 1710;
				case 105:
					return 1480;
				case 76:
					return 1390;
				case 26:
					return 980;
				case 38:
					return 710;
				case 126:
					return 440;
				case 115:
					return 650;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 78:
					return 2110;
				case 92:
					return 1920;
				case 69:
					return 1770;
				case 5:
					return 1820;
				case 105:
					return 1770;
				case 76:
					return 1570;
				case 26:
					return 1310;
				case 38:
					return 1050;
				case 126:
					return 820;
				case 120:
					return 650;
				default:
					break;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

char* func_280(int iParam0)
{
	if (!func_53(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_313(Global_1888801[iParam0 /*35*/].f_22);
}

int func_281(int iParam0)
{
	if (!func_53(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_30;
}

int func_282(var uParam0, vector3 vParam1, var uParam4)
{
	uParam0->f_314 = { vParam1 };
	uParam0->f_304 = uParam4;
	STREAMING::_0xBE8DAA9D8D01DA6A(uParam0->f_314);
	func_195(&(uParam0->f_318), 2048);
	func_196(&(uParam0->f_318), 1024);
	return 1;
}

void func_283(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_2 = -1;
}

bool func_284(var uParam0, int iParam1, var uParam2)
{
	struct<5> /*40*/ sVar0;

	if (*uParam0 == -1)
	{
		return false;
	}
	if (iParam1 >= uParam0->f_2)
	{
		return false;
	}
	STREAMING::_0xD840C130D7AACFA5(uParam0->f_1, iParam1, &Var0);
	*uParam2 = { Var0 };
	uParam2->f_3 = Var0.f_3;
	uParam2->f_4 = Var0.f_4;
	return true;
}

void func_285(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_286(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_314(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_287(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_288()
{
	return Global_1310750.f_16037;
}

bool func_289(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_290(int iParam0, int iParam1)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_291(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	if (func_315(64) && func_316(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_292(int iParam0)
{
	if (!func_289(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_293(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_289(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_317(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_294(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_295(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char* func_297(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_318(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_318(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

void func_298(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_299(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_319(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_320(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_322(iParam0, 1)) || func_323(32768))
	{
		if (!func_322(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_324())
	{
		return false;
	}
	return true;
}

void func_300(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_301(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_325(iParam3, &vVar0, &Var3, &uVar6);
	if (func_326(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

int func_302(int iParam0)
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
	return -1;
}

int func_303(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_327(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_304(int iParam0)
{
	return iParam0 & 31;
}

bool func_305(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

int func_306(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
	{
		return -1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2))
	{
		return 2;
	}
	return -2;
}

bool func_308(bool bParam0, int iParam1)
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

bool func_309(bool bParam0, int iParam1)
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

bool func_310(bool bParam0, int iParam1)
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
	if (!func_308(bParam0, iVar0))
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

void func_311(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHEAT_FAIL_TO_FIND_CREATE_LOCATION";
		case 1:
			return "CHEAT_FAIL_TO_CREATE";
		case 3:
			return "CHEAT_ADDED_OUTFITS";
		case 2:
			return "CHEAT_FAILED_TO_ADD_OUTFITS";
		case 4:
			return "CHEAT_UNLOCKED_RECIPES";
		case 5:
			return "CHEAT_UNABLE_TO_ACTIVATE";
		case 6:
			return "CHEAT_UNABLE_TO_ACTIVATE_SHOP";
		case 8:
			return "CHEAT_UNABLE_TO_ACTIVATE_CAMP";
		case 9:
			return "CHEAT_UNABLE_TO_ACTIVATE_HOME";
		case 7:
			return "CHEAT_UNABLE_TO_ACTIVATE_GUAMA";
		case 10:
			return "CHEAT_WEAPON_ACTIVATE";
		case 11:
			return "CHEAT_INVALID_LOCATION";
		case 12:
			return "CHEAT_UNABLE_TO_ACTIVATE_DISABLED";
		case 13:
			return "CHEAT_UNABLE_TO_DEACTIVATE_DISABLED";
		case 14:
			return "CHEAT_DISABLED_WHILE_ACTIVE";
		default:
			break;
	}
	return "INVALID_CHEAT_HELP";
}

char* func_313(var uParam0)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_314(int iParam0, int iParam1)
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

bool func_315(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_316(int iParam0)
{
	return func_290(iParam0, Global_1310750.f_16072 | 64);
}

void func_317(int iParam0)
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

char* func_318(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_319(int iParam0, int iParam1)
{
	if (func_106() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_320(int iParam0)
{
	if (func_106() != -1)
	{
		if (func_322(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_322(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_322(iParam0, 65536) && !func_322(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_322(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_322(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_322(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_323(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_324()
{
	return Global_1905944.f_5694;
}

void func_325(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_326(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> /*16*/ sVar3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_327(int iParam0)
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

