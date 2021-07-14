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
	struct<204> /*1632*/ sLocal_9 = { 0, 0, 4, 6, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0 } ;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_9 = 4;
		func_1(&Local_9);
	}
	while (true)
	{
		switch (Local_9)
		{
			case 0:
				if (func_2(Global_35))
				{
					func_3(&Local_9);
					if (func_4(&(Local_9.f_117)))
					{
						if (func_6(func_5(), 0) < 500f)
						{
							func_7(&Local_9, 1);
						}
					}
				}
				break;
			case 1:
				PED::_RESERVE_AMBIENT_PEDS(4);
				if (PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
				{
					func_8(&Local_9);
					func_9(&Local_9);
					func_7(&Local_9, 2);
				}
				break;
			case 2:
				if (func_10(&Local_9))
				{
					if (func_11(&Local_9))
					{
						func_7(&Local_9, 3);
					}
				}
				break;
			case 3:
				if (func_12())
				{
					func_7(&Local_9, 4);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_9.f_170, true, 0))
				{
					func_13(0);
				}
				break;
			case 4:
				func_1(&Local_9);
				break;
		}
		if (func_14(&Local_9))
		{
			func_1(&Local_9);
		}
		func_15(&Local_9);
		BUILTIN::WAIT(0);
	}
}

void func_1(int iParam0)
{
	func_16(0);
	func_17(iParam0);
	HUD::_TEXT_BLOCK_DELETE("RHMR0");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_18(iParam0->f_116);
	func_19(iParam0);
	func_9(iParam0);
	func_20(-1304772442, 1, 1);
	func_20(-1924401463, 1, 1);
	func_21(&(iParam0->f_167), &(iParam0->f_199));
	func_21(&(iParam0->f_169), &(iParam0->f_200));
	func_22(16);
	func_22(32);
	func_22(8);
	func_22(4);
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_201))
	{
		INTERIOR::UNPIN_INTERIOR(iParam0->f_201);
	}
	if (!func_23(iParam0->f_109))
	{
		func_24(iParam0->f_109, 1);
	}
	func_25(iParam0->f_168);
	func_25(iParam0->f_170);
	iParam0->f_120 = 0;
	iParam0->f_119 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		if (PED::GET_SEAT_PED_IS_USING(iParam0) == -1)
		{
			return true;
		}
	}
	return false;
}

void func_3(int iParam0)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_26(iParam0);
	func_27(iParam0);
	iParam0->f_118 = func_4(&(iParam0->f_117));
	if (!iParam0->f_118)
	{
		return;
	}
	func_28(iParam0);
}

bool func_4(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (func_29(iVar0))
	{
		func_31(uParam0, func_30(iVar0));
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(*uParam0, "wagonFenceValue") && DECORATOR::DECOR_GET_INT(*uParam0, "wagonFenceValue") != 0)
	{
		return true;
	}
	return false;
}

Vector3 func_5()
{
	return 1410.669f, 271.409f, 89.4489f;
}

float func_6(vector3 vParam0, int iParam3)
{
	return func_32(Global_35, vParam0, iParam3);
}

void func_7(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_8(int iParam0)
{
	func_33(iParam0);
	HUD::TEXT_BLOCK_REQUEST("RHMR0");
	STREAMING::REQUEST_MODEL(joaat("A_M_M_HTLROUGHTRAVELLERS_01"), false);
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x886171A12F400B89(iParam0->f_167, iVar0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
			iVar4 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				func_34(&iVar4, 0);
			}
		}
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_10(int iParam0)
{
	if (!func_35(iParam0))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("RHMR0"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_HTLROUGHTRAVELLERS_01")))
	{
		return false;
	}
	return true;
}

bool func_11(int iParam0)
{
	return true;
}

bool func_12()
{
	int iVar0;
	int iVar1;
	var uVar2;

	func_36();
	switch (Local_9.f_1)
	{
		case 0:
			func_20(-1304772442, 1, 1);
			func_20(-1924401463, 1, 1);
			func_37(&Local_9, 1);
			break;
		case 1:
			if (func_38(&Local_9))
			{
				if (func_39(&Local_9))
				{
					func_24(Local_9.f_109, 0);
					func_40(1);
					func_41(&Local_9);
					func_42(&(Local_9.f_2));
					func_37(&Local_9, 2);
				}
			}
			break;
		case 2:
			func_43(&(Local_9.f_116), Local_9.f_2);
			if (func_44(&Local_9))
			{
				func_45(&(Local_9.f_116), Local_9.f_4, &(Local_9.f_3));
				func_37(&Local_9, 3);
			}
			break;
		case 3:
			switch (Local_9.f_2)
			{
				case 4:
					func_46(Local_9.f_131, Local_9.f_132, 0f, 2, 1073741824 /* Float: 2f */);
					TASK::TASK_STAND_STILL(Local_9.f_131, -1);
					func_37(&Local_9, 4);
					break;
				case 5:
					if (func_6(Local_9.f_122, 1) < 65f)
					{
						func_47();
						func_37(&Local_9, 4);
					}
					break;
				default:
					func_37(&Local_9, 4);
					break;
			}
			break;
		case 4:
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_9.f_170, true, 0) && func_48(&(Local_9.f_116), Local_9.f_2)) && PED::IS_PED_READY_TO_RENDER(Local_9.f_131))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_9.f_131, false, true);
				PED::SET_PED_CAN_RAGDOLL(Local_9.f_131, false);
				func_49(Local_9.f_131, 1);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(Local_9.f_131, true);
				func_16(32);
				ANIMSCENE::START_ANIM_SCENE(Local_9.f_116);
				func_50();
				func_37(&Local_9, 5);
			}
			break;
		case 5:
			IK::_0x66F9EB44342BB4C5(Local_9.f_131, &(Local_9.f_142));
			func_51(&Local_9);
			func_52(&Local_9);
			if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && func_32(Local_9.f_117, 1411.256f, 266.9222f, 88.60828f, 1) < 12f)
			{
				func_53(&uLocal_216);
				func_37(&Local_9, 7);
			}
			break;
		case 7:
			if (func_32(Local_9.f_117, Local_9.f_128, 1) < 6f)
			{
				func_54(Global_35, Local_9.f_128, &uLocal_216, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 12f, 1, 0, 1, 1, 1);
			}
			if (func_55() && func_32(Local_9.f_117, Local_9.f_128, 1) < func_56(Local_9.f_121))
			{
				func_57(&uLocal_216);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (func_58())
				{
					func_18(Local_9.f_116);
					func_59(0);
					func_37(&Local_9, 8);
				}
			}
			break;
		case 11:
			if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && func_32(Local_9.f_117, Local_9.f_125, 1) < 12f)
			{
				func_24(Local_9.f_109, 0);
				func_37(&Local_9, 12);
			}
			break;
		case 12:
			if (func_38(&Local_9))
			{
				if (func_39(&Local_9))
				{
					func_40(0);
					func_41(&Local_9);
					Local_9.f_3 = func_60(Local_9.f_4);
					func_37(&Local_9, 13);
				}
			}
			break;
		case 13:
			func_43(&(Local_9.f_116), Local_9.f_3);
			if (func_44(&Local_9))
			{
				func_53(&uLocal_216);
				func_37(&Local_9, 14);
			}
			break;
		case 14:
			if (func_55() && func_32(Local_9.f_117, Local_9.f_128, 1) < func_56(Local_9.f_121))
			{
				func_57(&uLocal_216);
				func_61();
				func_18(Local_9.f_116);
				func_59(0);
				func_37(&Local_9, 8);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -828834893, true) == 8 && !PED::IS_PED_IN_VEHICLE(Global_35, Local_9.f_117, false))
			{
				func_43(&(Local_9.f_116), Local_9.f_3);
				if (func_44(&Local_9))
				{
					func_37(&Local_9, 9);
				}
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_9.f_116))
			{
				func_62(-308659358, 1);
				func_62(-66987983, 1);
				func_63(-308659358, -0.5f, 1);
				func_63(-66987983, 0.5f, 1);
			}
			if (func_64(Global_35, -828834893) && !CAM::DOES_CAM_EXIST(Local_9.f_203))
			{
				func_65(&(Local_9.f_203), 1411.1f, 280f, 90.8f, -2f, -1f, 171.5f, 38f, 0);
				func_66(&Local_9);
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_9.f_116) && !func_64(Global_35, -828834893))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_9.f_131, 1411.328f, 268.0174f, 88.5583f, 15.5f, true, false, true);
				TASK::TASK_STAND_STILL(Local_9.f_131, -1);
				if ((((func_67(ENTITY::GET_ENTITY_MODEL(Local_9.f_117)) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("CART06")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("CART04")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("BUGGY03")) || ENTITY::GET_ENTITY_MODEL(Local_9.f_117) == joaat("WAGON05X"))
				{
					func_46(Local_9.f_117, Local_9.f_128, 15.5f, 1, 1073741824 /* Float: 2f */);
				}
				else
				{
					func_46(Local_9.f_117, Local_9.f_128, 15.5f, 2, 1073741824 /* Float: 2f */);
				}
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Local_9.f_117, false);
				func_16(4);
				ENTITY::FREEZE_ENTITY_POSITION(Local_9.f_117, true);
				PHYSICS::_0xEAF529446488EB18(Local_9.f_117);
				PHYSICS::_0x5E981C764DF33117(Local_9.f_117, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				iVar0 = 134348801;
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 500, iVar0);
			}
			break;
		case 9:
			if (func_48(&(Local_9.f_116), Local_9.f_3))
			{
				iVar1 = 256;
				func_68(&iVar1, 0, 2, 0, 0, 0, 0);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_9.f_116);
				func_37(&Local_9, 10);
			}
			break;
		case 10:
			func_69(&Local_9);
			func_70(&Local_9);
			if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_9.f_116, false))
			{
				if (CAM::DOES_CAM_EXIST(Local_9.f_203))
				{
					func_71(&(Local_9.f_203));
				}
				PHYSICS::_0x5E981C764DF33117(Local_9.f_117, 0);
				if (!ENTITY::_IS_ENTITY_FROZEN(Local_9.f_117))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_9.f_117, true);
				}
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(Local_9.f_116))
			{
				func_72(1411.551f, 264.1102f, 90f, 15f, 1, 0, 0, 0, 0);
				func_73(Local_9.f_131);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_9.f_131, false);
				ENTITY::_SET_ENTITY_DECALS_DISABLED(Local_9.f_131, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_9.f_131, false, true);
				PED::_0xE0B61ED8BB37712F(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Local_9.f_117))
				{
					func_74(&(Local_9.f_117));
				}
			}
			if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(Local_9.f_116, false))
			{
				func_75(&uVar2, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
				PED::SET_PED_CAN_RAGDOLL(Local_9.f_131, true);
				func_76(-308659358, 1);
				func_76(-66987983, 1);
				func_77();
				func_37(&Local_9, 16);
			}
			break;
		case 16:
			func_78(Local_9.f_131, "FAREWELL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			func_79(&Local_9);
			return true;
	}
	return false;
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		func_80(4);
	}
	func_80(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

bool func_14(int iParam0)
{
	bool bVar0;

	bVar0 = func_6(iParam0->f_122, 1) < 65f;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
	{
		func_27(iParam0);
	}
	if (iParam0->f_120 && !iParam0->f_118)
	{
		return true;
	}
	if (iParam0->f_120 && iParam0->f_118)
	{
		if (!func_81(4))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_117) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_117, true, false))
			{
				if (!func_82(125))
				{
					func_83(125, 0);
				}
				return true;
			}
		}
	}
	if (!func_81(32) && iParam0->f_119)
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_TAXI(Global_35))
	{
		return true;
	}
	if ((func_84(1, 0, 1) && bVar0) && !func_81(32))
	{
		if (!func_82(124))
		{
			func_83(124, 0);
		}
		return true;
	}
	if (!func_85(Global_35, iParam0->f_117, 0) && !bVar0)
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_131) && iParam0->f_1 > 1)
	{
		return true;
	}
	if (func_81(8) && func_86(iParam0->f_131, iParam0->f_171, 1))
	{
		if (!func_82(123))
		{
			func_83(123, 0);
		}
		func_16(2);
		return true;
	}
	if (func_81(16) && func_87() != iParam0->f_107)
	{
		return true;
	}
	if (func_88(92) || func_89(92))
	{
		return true;
	}
	if (func_90(Global_1347702[113 /*49*/].f_15) == 1)
	{
		if (iParam0->f_121 == joaat("OILWAGON01X") || iParam0->f_121 == joaat("OILWAGON02X"))
		{
			return true;
		}
	}
	if (func_91(iParam0))
	{
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	if (!func_2(Global_35) && iParam0->f_120)
	{
		iParam0->f_119 = 1;
	}
	else if (func_2(Global_35) && !iParam0->f_120)
	{
		iParam0->f_120 = 1;
		if (iParam0->f_119)
		{
			iParam0->f_119 = 0;
		}
	}
	if (func_92(iParam0))
	{
		iParam0->f_117 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iParam0->f_121 = ENTITY::GET_ENTITY_MODEL(iParam0->f_117);
		iParam0->f_118 = func_4(&(iParam0->f_117));
	}
}

void func_16(int iParam0)
{
	Global_1415412 = (Global_1415412 || iParam0);
}

void func_17(int iParam0)
{
}

void func_18(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

void func_19(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		func_93(iParam0->f_131);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_131, false);
	}
	if (func_94(iParam0->f_108, 1))
	{
		func_95(iParam0->f_108, 0, 1, 0, 0);
	}
	func_22(8);
}

void func_20(int iParam0, int iParam1, bool bParam2)
{
	func_96(iParam0, 0, 0);
	if (func_97(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_21(var uParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x74C2B3DC0B294102(*uParam0);
		POPULATION::_0xA1CFB35069D23C23(*uParam0);
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if (PED::_0x91A5F9CBEBB9D936(*uParam1))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam1, false);
	}
}

void func_22(int iParam0)
{
	Global_1415412 = (Global_1415412 - (Global_1415412 && iParam0));
}

bool func_23(int iParam0)
{
	return !func_98(iParam0, 1);
}

void func_24(int iParam0, bool bParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_100(iParam0, 1);
	}
	else
	{
		func_101(iParam0, 1);
	}
	func_103(func_102(iParam0), bParam1);
}

void func_25(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_26(int iParam0)
{
}

void func_27(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return;
		}
		iParam0->f_117 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iParam0->f_120 = 1;
	}
	if (iParam0->f_121 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_117))
		{
			return;
		}
		iParam0->f_121 = ENTITY::GET_ENTITY_MODEL(iParam0->f_117);
	}
}

void func_28(int iParam0)
{
	iParam0->f_107 = 69;
	iParam0->f_108 = 598;
	iParam0->f_109 = 18;
	iParam0->f_4 = func_104(&(iParam0->f_117));
	iParam0->f_122 = { func_5() };
	iParam0->f_125 = { 1411.256f, 266.9222f, 88.60828f };
	iParam0->f_128 = { 1410.307f, 271.3035f, 89.7135f };
	iParam0->f_132 = { 1412.491f, 270.6684f, 88.53571f };
	iParam0->f_135 = 15.42f;
	iParam0->f_136 = "PROP_HUMAN_SEAT_BENCH";
	iParam0->f_137 = { 1407.855f, 267.3564f, 88.99222f };
	iParam0->f_140 = "SCRIPT_PROC@ROBBERIES@HOMESTEAD@LONNIES_SHACK@DECEPTION";
	iParam0->f_141 = "DECEPTION_WAVE_SEAN";
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_170))
	{
		iParam0->f_170 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1413.266f, 252.548f, 90.005f, 0f, 0f, 0f, 25f, 25f, 4f, "Wagon Fence - Trigger Zone");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		func_105(&(iParam0->f_167), &(iParam0->f_199), 1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 11f, 5f, 1, 10208, 1, 2, "SHOWF_VOL_BARN");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_168))
	{
		iParam0->f_168 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1407.474f, 273.397f, 90f, 0f, 0f, 16f, 14f, 14f, 5f);
		VOLUME::_0x5B23DFF8E0948BB2(iParam0->f_168, 0);
		VOLUME::_0xBE551C2CC421185D(iParam0->f_168, 1);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_169))
	{
		func_105(&(iParam0->f_169), &(iParam0->f_200), 1410.87f, 261.8175f, 90.61948f, 0f, 0f, 15.5f, 20f, 12f, 5f, 1, 10208, 1, 2, "SHOWF_VOL_ENTRANCE");
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_167))
	{
		func_106(iParam0->f_167, 0);
	}
	iParam0->f_201 = INTERIOR::GET_INTERIOR_AT_COORDS(iParam0->f_122);
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_201))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0->f_201);
	}
	func_107(&(iParam0->f_5), Global_35, "ARTHUR", 0);
}

bool func_29(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("WAGON03X"):
		case joaat("BUGGY03"):
		case joaat("COACH5"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("STAGECOACH006X"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("OILWAGON01X"):
		case joaat("STAGECOACH005X"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("STAGECOACH003X"):
		case joaat("CART08"):
		case joaat("WAGON02X"):
		case joaat("COACH3"):
		case joaat("CART07"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CART06"):
		case joaat("CART05"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("STAGECOACH002X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return true;
		default:
			break;
	}
	return false;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("BUGGY03"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("CART08"):
		case joaat("CART07"):
		case joaat("CART06"):
		case joaat("CART05"):
			return 1;
		case joaat("COACH5"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("COACH3"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
			return 2;
		case joaat("WAGON03X"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("STAGECOACH006X"):
		case joaat("STAGECOACH005X"):
		case joaat("STAGECOACH003X"):
		case joaat("WAGON02X"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("STAGECOACH002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return 3;
		case joaat("OILWAGON01X"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_31(var uParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		DECORATOR::DECOR_SET_INT(*uParam0, "wagonFenceValue", iParam1);
	}
}

float func_32(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

void func_33(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_140))
	{
		STREAMING::REQUEST_ANIM_DICT(iParam0->f_140);
	}
}

void func_34(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_74(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

bool func_35(int iParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_140))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(iParam0->f_140))
	{
		return false;
	}
	return true;
}

void func_36()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_81(32))
	{
		if (func_108(Global_35, 1411.256f, 266.9222f, 88.60828f, 0.75f) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			func_109(Global_35, Local_9.f_125, 0, 50f, 35f, 25f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0) && VEHICLE::IS_DRAFT_VEHICLE(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 6)
				{
					bVar1 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar2);
					if (!ENTITY::IS_ENTITY_DEAD(bVar1))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar1, 1.75f);
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar0, PED::_0x46BF2A810679D6E6(bVar1, 2.5f));
					}
					iVar2++;
				}
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 3f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		}
	}
}

void func_37(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_38(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0->f_108);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		PERSCHAR::_0x6759BEE6762E140B(iVar0);
	}
	if (!func_111(iParam0->f_108, 1, 0, 0, 0, 0))
	{
		return false;
	}
	else
	{
		iParam0->f_131 = func_112(iParam0->f_108);
		func_16(8);
	}
	return true;
}

bool func_39(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		return true;
	}
	return false;
}

void func_40(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_131))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_9.f_131, true);
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_9.f_131);
	WEAPON::_HOLSTER_PED_WEAPONS(Local_9.f_131, false, false, false, true);
	func_49(Local_9.f_131, 0);
	func_113(&(Local_9.f_171));
	if (bParam0)
	{
		func_46(Local_9.f_131, Local_9.f_132, Local_9.f_135, 2, 1073741824 /* Float: 2f */);
	}
}

void func_41(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
	{
		return;
	}
	func_107(&(iParam0->f_5), iParam0->f_131, "EMR_Son1", 0);
}

void func_42(var uParam0)
{
	*uParam0 = 4;
}

void func_43(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_114(), 0, func_115(iParam1), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
}

bool func_44(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_116) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_116, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "player", Global_35, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_131))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "male", iParam0->f_131, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_117))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_116, "stagecoach", iParam0->f_117, 0);
		}
		return true;
	}
	return false;
}

void func_45(var uParam0, int iParam1, var uParam2)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		*uParam2 = func_60(iParam1);
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, func_115(*uParam2));
	}
}

void func_46(bool bParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (bParam0 == func_116(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_117(bParam0))
	{
		if (func_118(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_119(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(bVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_46(bVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_119(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_119(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_119(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_119(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_119(iParam5, 129))
	{
		if (func_119(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_119(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_119(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_119(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_117(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_119(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_119(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

int func_47()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_131))
	{
		return 0;
	}
	iVar0 = TASK::FIND_SCENARIO_OF_TYPE_HASH(Local_9.f_137, MISC::GET_HASH_KEY(Local_9.f_136), 0.5f, 1, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::TASK_USE_SCENARIO_POINT(Local_9.f_131, iVar0, 0, 0, false, true, 0, false, -1f, false);
		return 1;
	}
	return 0;
}

bool func_48(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_115(iParam1)))
	{
		return true;
	}
	return false;
}

void func_49(int iParam0, int iParam1)
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

void func_50()
{
	func_120(&(Local_9.f_142), Global_35, 1, -1, 1, 1, 2, 1, 0, 0, 0, 0);
}

void func_51(int iParam0)
{
	if (!func_121(iParam0, 1) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_116) > 0.558f)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 1)
		{
			func_78(Global_35, "GREET_SEAMUS", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
		}
		else
		{
			func_78(iParam0->f_131, "PARK_WAGON", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
		}
		func_122(iParam0, 1);
	}
}

void func_52(int iParam0)
{
	if (func_121(iParam0, 1))
	{
		if (!func_123(&(iParam0->f_204)))
		{
			func_124(&(iParam0->f_204), 0);
		}
		if (func_125(&(iParam0->f_204), 20f))
		{
			func_78(iParam0->f_131, "TAKE_YOUR_TIME", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CLEAR"), 0, 1, 0, 0, 1);
			func_57(&(iParam0->f_204));
		}
	}
}

void func_53(int iParam0)
{
	func_126(iParam0, 0f);
}

int func_54(bool bParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	func_109(bParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(bParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(bParam0, false);
	}
	bVar4 = func_32(bParam0, vParam1, 1);
	if (!func_123(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_124(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_57(iParam4);
	}
	if (func_123(iParam4))
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
		if (func_127(iParam4) >= fParam9)
		{
			if (bParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_128(bParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(bParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_128(bParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, 0);
					return 1;
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
	return 0;
}

bool func_55()
{
	int iVar0;

	if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_9.f_116) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_9.f_116, true, false)) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_9.f_116, func_115(Local_9.f_3)))
	{
		return false;
	}
	iVar0 = func_104(&(Local_9.f_117));
	if (iVar0 == Local_9.f_4)
	{
		return true;
	}
	else
	{
		Local_9.f_4 = iVar0;
		Local_9.f_3 = func_60(Local_9.f_4);
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_9.f_116, func_115(Local_9.f_3));
		return false;
	}
	return true;
}

float func_56(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("WAGON03X"):
		case joaat("BUGGY03"):
		case joaat("COACH5"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("STAGECOACH006X"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("OILWAGON01X"):
		case joaat("STAGECOACH005X"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("STAGECOACH003X"):
		case joaat("CART08"):
		case joaat("WAGON02X"):
		case joaat("COACH3"):
		case joaat("CART07"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CART06"):
		case joaat("CART05"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("STAGECOACH002X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return 3.15f;
		default:
			break;
	}
	return 2.25f;
}

void func_57(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_58()
{
	if (!func_123(&uLocal_219))
	{
		func_124(&uLocal_219, 0);
	}
	if (func_129(&uLocal_219) > 0.75f)
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_9.f_117) || ENTITY::GET_ENTITY_SPEED(Local_9.f_117) <= 2.5f)
		{
			func_57(&uLocal_219);
			return true;
		}
	}
	return false;
}

void func_59(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	bVar0 = func_130(7);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = ENTITY::_0x886171A12F400B89(Local_9.f_169, iVar1, 1);
	vVar4 = { 1404.513f, 258.6714f, 88.6714f };
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar7))
		{
			bVar8 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar7);
			if (bVar8 != bVar0 && func_117(bVar8))
			{
				bVar9 = false;
				if (!ENTITY::IS_ENTITY_DEAD(Local_9.f_117) && VEHICLE::IS_DRAFT_VEHICLE(Local_9.f_117))
				{
					iVar10 = 0;
					while (iVar10 < 6)
					{
						if (bVar8 == VEHICLE::_GET_PED_IN_DRAFT_HARNESS(Local_9.f_117, iVar10))
						{
							bVar9 = true;
						}
						else
						{
							iVar10++;
						}
					}
				}
				if (!bVar9)
				{
					func_46(bVar8, vVar4, 14.4941f, 2, 1073741824 /* Float: 2f */);
					vVar4.x = (vVar4.x + 1.5f);
				}
			}
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		if (func_117(bVar0))
		{
			iVar11 = func_131(bVar0);
			if (iVar11 != -1)
			{
				if (func_132(iVar11))
				{
					return;
				}
			}
			if (func_118(bVar0))
			{
				PHYSICS::_0x0348469DAA17576C(bVar0);
			}
			func_133(1395.742f, 261.8848f, 88.4427f, 2.5f, 0);
			func_46(bVar0, 1395.742f, 261.8848f, 88.4427f, 14.4941f, 2, 1073741824 /* Float: 2f */);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar0, false, true);
				PHYSICS::_0x06AADE17334F7A40(bVar0, 1395.742f, 261.8848f, 88.4427f);
			}
		}
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 6;
		case 5:
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
	return 6;
}

void func_61()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_9.f_117))
	{
		return;
	}
	VEHICLE::BRING_VEHICLE_TO_HALT(Local_9.f_117, 0.75f, 2, true);
}

void func_62(int iParam0, int iParam1)
{
	func_134(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_63(int iParam0, float fParam1, bool bParam2)
{
	func_96(iParam0, 0, 0);
	if (func_97(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam2);
	}
}

bool func_64(int iParam0, int iParam1)
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

void func_65(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;

	iVar0 = 256;
	func_68(&iVar0, 0, 2, 0, 0, 0, 0);
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vParam1, vParam4, fParam7, true, 2);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (iParam8 != 0)
		{
			CAM::POINT_CAM_AT_ENTITY(*uParam0, iParam8, 0f, 0f, 0f, true);
		}
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_66(int iParam0)
{
	if (!func_121(iParam0, 2))
	{
		func_78(PLAYER::PLAYER_PED_ID(), "PRESENT_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
		func_122(iParam0, 2);
	}
}

bool func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OILWAGON02X"):
		case joaat("OILWAGON01X"):
			return true;
	}
	return false;
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_135(0, 0);
		func_136(-1);
	}
	func_137(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!func_138(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_138(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_138(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_138(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_138(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!func_138(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!func_138(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!func_138(*iParam0, 4) && !func_138(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_138(*iParam0, 2048))
	{
		func_139(0, 0);
	}
	if (func_138(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (func_138(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (func_138(*iParam0, 8192))
	{
		func_140();
	}
	if (!func_138(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!func_138(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!func_138(*iParam0, 1024))
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
		if (!func_138(*iParam0, 16))
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
						if (func_141() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_142(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_143(&vVar3, 50, 10, 0);
					}
					PED::DETACH_CARRIABLE_ENTITY(iVar7, false, true);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_144(2);
						func_145(-1);
						func_146(vVar3);
						func_148(func_147());
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
	if (!func_138(*iParam0, 4096))
	{
		func_149(Global_35);
	}
	if (!func_138(*iParam0, 1048576))
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, 1, 0);
	}
	if (!func_138(*iParam0, 2097152))
	{
		if (func_150() || PED::_IS_PED_DRUNK(Global_35))
		{
			func_151(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_69(int iParam0)
{
	int iVar0;

	if (!func_121(iParam0, 4) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_116) > 0.165f)
	{
		if (iParam0->f_4 == 5)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else if (iParam0->f_4 == 6)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK2", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else if (iParam0->f_4 == 7)
		{
			func_152(&(iParam0->f_5), "SHOWF_CRRD_BRK3", iParam0->f_131, Global_35, 0, 0, 1, 1);
		}
		else
		{
			iVar0 = (ENTITY::GET_ENTITY_HEALTH(iParam0->f_117) / 10);
			if (ENTITY::GET_ENTITY_HEALTH(iParam0->f_117) < (ENTITY::GET_ENTITY_MAX_HEALTH(iParam0->f_117, false) - iVar0))
			{
				func_78(iParam0->f_131, "COMMENT_ON_DAMAGED_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else if (func_67(iParam0->f_121))
			{
				func_78(iParam0->f_131, "COMMENT_ON_OIL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else if (func_153(iParam0->f_121))
			{
				func_78(iParam0->f_131, "COMMENT_ON_LUMBER_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
			}
			else
			{
				switch (iParam0->f_4)
				{
					case 0:
					case 1:
						func_78(iParam0->f_131, "COMMENT_ON_POOR_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 2:
						func_78(iParam0->f_131, "COMMENT_ON_AVERAGE_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 3:
						func_78(iParam0->f_131, "COMMENT_ON_QUALITY_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
					case 4:
						func_78(iParam0->f_131, "COMMENT_ON_EXCEPTIONAL_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
						break;
				}
			}
		}
		func_122(iParam0, 4);
	}
}

void func_70(int iParam0)
{
	float fVar0;

	fVar0 = 0.52f;
	if (iParam0->f_4 == 1)
	{
		fVar0 = 0.49f;
	}
	if ((!func_121(iParam0, 8) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0->f_131)) && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0->f_116) > fVar0)
	{
		func_78(iParam0->f_131, "BUY_WAGON", joaat("SPEECH_PARAMS_FORCE_NORMAL_CLEAR"), 0, 1, 0, 0, 1);
		func_122(iParam0, 8);
	}
}

void func_71(var uParam0)
{
	if (CAM::IS_CAM_RENDERING(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_72(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_73(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		func_46(bParam0, 1411.586f, 267.0799f, 88.5993f, 196.7626f, 2, 1073741824 /* Float: 2f */);
	}
}

void func_74(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;

	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_46(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

void func_75(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	func_154(2000);
	Global_16 = 0;
	func_155();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, func_156(*uParam0, 8));
	if (!func_156(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_156(*uParam0, 2) || func_156(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!func_156(*uParam0, 16))
	{
		func_157(1);
	}
	if (func_156(*uParam0, 32))
	{
		func_158(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_159(joaat("KIT_BANDANA"), 0);
	}
	func_160(&(Global_1946054.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_76(int iParam0, int iParam1)
{
	func_134(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_77()
{
	func_161(Local_9.f_4);
	func_163(func_162(joaat("STOLEN_WAGONS_SOLD")), 1);
}

bool func_78(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_164(iParam0, &Var0);
}

void func_79(int iParam0)
{
	iParam0->f_202 = 0;
}

void func_80(int iParam0)
{
	Global_1900383.f_316 = (Global_1900383.f_316 || iParam0);
}

bool func_81(int iParam0)
{
	return (Global_1415412 && iParam0) != 0;
}

bool func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_165(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_165(iParam0, &iVar0, &iVar1);
	if (!func_166(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_167(iVar0, iVar1);
}

bool func_84(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630.f_18)
	{
		if ((bParam2 || Global_1935630.f_19 > 0) || Global_1935630.f_17 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1935630.f_15 == 1370593166)
	{
		return false;
	}
	if (Global_1935630.f_20 > 0 || (bParam2 && Global_1935630.f_20 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1935630.f_13)
		{
			if (bParam2 || Global_1935630.f_21 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_85(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

bool func_86(bool bParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, bool bParam29)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	func_168(bParam0, 0, &uParam1, &uVar0, 0, 0);
	if (bParam29 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return true;
	}
	if (func_169(&uParam1) == bParam0)
	{
		return true;
	}
	return false;
}

int func_87()
{
	return Global_1894899.f_2;
}

int func_88(int iParam0)
{
	if (func_170() != -1)
	{
		return 0;
	}
	if (!func_171(iParam0))
	{
		return 0;
	}
	return func_172(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_89(int iParam0)
{
	if (func_170() != -1)
	{
		return false;
	}
	if (!func_171(iParam0))
	{
		return false;
	}
	return func_173(Global_1347702[iParam0 /*49*/].f_15);
}

int func_90(int iParam0)
{
	if (!func_174(iParam0))
	{
		return -1;
	}
	return func_175(iParam0);
}

bool func_91(int iParam0)
{
	return false;
}

bool func_92(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)))
	{
		if (iParam0->f_117 != PED::GET_VEHICLE_PED_IS_IN(Global_35, false))
		{
			return true;
		}
	}
	return false;
}

void func_93(int iParam0)
{
	if (func_176(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_94(int iParam0, bool bParam1)
{
	if (func_170() != -1)
	{
		return false;
	}
	if (!func_177(iParam0))
	{
		return false;
	}
	if (!func_178(iParam0) && bParam1)
	{
		return false;
	}
	return func_179(iParam0, 1);
}

void func_95(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_177(iParam0))
	{
		return;
	}
	if (!func_179(iParam0, 1))
	{
		return;
	}
	if (!func_179(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_178(iParam0)) && func_180(iParam0))
	{
		return;
	}
	func_181(iParam0, 1);
	func_182(iParam0);
	if (func_184(func_183(iParam0)))
	{
		iVar0 = func_110(iParam0);
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
		func_181(iParam0, 16);
	}
	if (func_179(iParam0, 128) && !bParam3)
	{
		func_185(iParam0, 0);
	}
}

int func_96(int iParam0, bool bParam1, bool bParam2)
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

bool func_97(int iParam0)
{
	if (func_186(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_98(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_100(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_101(int iParam0, int iParam1)
{
	if (!func_99(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

int func_102(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_103(int iParam0, bool bParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	if ((bParam1 && func_188(iParam0, 512)) || (!bParam1 && !func_188(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_189(iParam0, 512);
	}
	else
	{
		func_190(iParam0, 512);
	}
	if (func_191(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_104(var uParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(*uParam0, "wagonFenceValue"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(*uParam0, "wagonFenceValue");
			return iVar0;
		}
	}
	return 0;
}

void func_105(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
			{
				func_192(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_193(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam15))
		{
			func_194(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_195(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = PED::_0x4C39C95AE5DB1329(*uParam0, false, 15);
		}
	}
}

void func_106(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_107(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_196(uParam0, iParam1, sParam2))
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

bool func_108(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_109(bool bParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_197(vParam1, 0f, 0f, 0f))
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
	bVar3 = func_32(bParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(bVar0, 1.75f);
		}
		if ((func_198() && !ENTITY::IS_ENTITY_DEAD(iVar1)) && VEHICLE::IS_DRAFT_VEHICLE(iVar1))
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
			if (!ENTITY::IS_ENTITY_DEAD(bVar0) && !func_128(bParam0, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(bParam0, iParam12, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !func_128(bParam0, -828834893))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(bParam0, 0, iParam12);
			}
		}
	}
}

int func_110(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_111(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_177(iParam0))
	{
		return false;
	}
	if (!func_184(func_183(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_110(iParam0)))
	{
		func_199(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_200(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_201(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_142(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_110(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_110(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_110(iParam0), false);
	}
	if (!func_142(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_110(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

int func_112(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	if (func_184(func_183(iParam0)))
	{
		return func_202(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_203(iParam0), 0);
}

void func_113(var uParam0)
{
	func_204(uParam0, 0);
	func_205(uParam0, 0);
	func_206(uParam0, 1);
	func_207(uParam0, 1);
	func_208(uParam0, 0);
	func_209(uParam0, 1);
	func_210(uParam0, 1, 1, 1);
}

char* func_114()
{
	return "script@proc@shoprobberies@wagonfencer@wagonfencer";
}

char* func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "";
		case 2:
			return "PBL_OPENS_DOORS_INSIDE_SLOW";
		case 3:
			return "PBL_OPENS_DOORS_BENCH_SLOW";
		case 4:
			return "PBL_OPENS_DOORS_INSIDE_FAST";
		case 5:
			return "PBL_OPENS_DOORS_BENCH_FAST";
		case 6:
			return "PBL_PAYMENT_POOR";
		case 7:
			return "PBL_PAYMENT_MED";
		case 8:
			return "PBL_PAYMENT_MED";
		case 9:
			return "PBL_PAYMENT_MED";
		default:
			break;
	}
	return "INVALID_PLAY_LIST";
}

bool func_116(var uParam0)
{
	return uParam0;
}

bool func_117(bool bParam0)
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

bool func_118(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(bParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_119(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_120(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_121(int iParam0, int iParam1)
{
	return func_211(iParam0->f_202, iParam1);
}

void func_122(int iParam0, int iParam1)
{
	func_212(&(iParam0->f_202), iParam1);
}

bool func_123(int iParam0)
{
	return func_213(*iParam0, 1);
}

void func_124(int iParam0, bool bParam1)
{
	if (bParam1 || !func_123(iParam0))
	{
		func_53(iParam0);
	}
}

bool func_125(int iParam0, float fParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	if (func_127(iParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_126(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_214() - fParam1);
	func_215(iParam0, 1);
	func_216(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_127(int iParam0)
{
	if (!func_123(iParam0))
	{
		return iParam0->f_1;
	}
	if (func_217(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_214() - iParam0->f_1);
}

bool func_128(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

float func_129(int iParam0)
{
	if (!func_123(iParam0))
	{
		return 0f;
	}
	if (func_217(iParam0))
	{
		return iParam0->f_2;
	}
	return (func_214() - iParam0->f_1);
}

int func_130(int iParam0)
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

int func_131(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_132(int iParam0)
{
	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

void func_133(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_134(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_96(iParam0, 0, 0);
	if (func_97(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_219(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_220(iParam0, 1);
			}
			else
			{
				func_221(iParam0, 1);
			}
		}
		else
		{
			func_222(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_223())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_135(int iParam0, bool bParam1)
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

void func_136(int iParam0)
{
	int iVar0;

	if (func_170() != -1)
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

void func_137(bool bParam0)
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

bool func_138(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_139(bool bParam0, bool bParam1)
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
			if (func_224(iVar3) && WEAPON::IS_WEAPON_A_GUN(iVar3))
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
		func_225(1);
	}
}

void func_140()
{
	int iVar0;

	iVar0 = func_226(Global_35, 9, 1, 0);
	if (func_224(iVar0))
	{
		return;
	}
	iVar0 = func_226(Global_35, 7, 1, 0);
	if (func_224(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_226(Global_35, 0, 1, 0);
	if (func_224(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_226(Global_35, 1, 1, 0);
	if (func_224(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_226(Global_35, 18, 1, 0);
	if (func_224(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_227();
	if (func_224(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_228(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_229(6291456, 0);
	if (func_224(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_228(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_141()
{
	return Global_1900383.f_393;
}

bool func_142(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_197(*uParam0, 0f, 0f, 0f))
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

void func_144(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_145(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_146(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_147()
{
	return Global_1899515;
}

void func_148(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_149(int iParam0)
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

bool func_150()
{
	return (func_230() || func_231());
}

void func_151(bool bParam0)
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
	func_232(0f);
	Global_1935436.f_11 = 1;
	if (func_233())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_234();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

int func_152(var uParam0, char* sParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	bParam3 = bParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(bParam2) && (func_235(bParam2, bParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(bParam2, bParam3, 7000, 0, 51, 0);
			if (func_235(bParam2, bParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam3, bParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_53(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_236(sParam1))
			{
				return 1;
			}
		}
		else if (func_237(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_153(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOGWAGON"):
		case joaat("LOGWAGON2"):
			return true;
	}
	return false;
}

void func_154(int iParam0)
{
	func_238();
	Global_1911774.f_1 = MISC::GET_GAME_TIMER();
	Global_1911774.f_2 = iParam0;
}

void func_155()
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

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_157(bool bParam0)
{
	if (bParam0)
	{
		Global_1945188.f_865 = (Global_1945188.f_865 - Global_1945188.f_865 & 2);
	}
	else
	{
		Global_1945188.f_865 |= 2;
	}
	func_239(bParam0);
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_240(iParam1, 1, 0) };
		iParam3 = func_241(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_243(iParam1, iParam2, func_242(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_244(1, (func_170() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_242(iParam3, 1) /*11*/])
			{
				func_245(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_246(32768) && iParam1 != Global_1946054.f_57[func_242(iParam3, 1) /*11*/])
			{
				func_247();
				func_245(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_245(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_248(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_245(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_249(0);
			func_250(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_245(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_159(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_240(iParam0, 0, 0) };
	Var5 = { func_251(iParam0, Var0, Var0.f_4, 0) };
	if (func_252(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_253(0), &Var5, bParam1);
}

void func_160(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_170() != -1;
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
			func_254(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_255(bParam1, 29, bVar4, 1, 0);
			func_255(bParam1, 31, bVar4, 1, 0);
			func_255(bParam1, 30, bVar4, 1, 0);
			func_255(bParam1, 22, bVar4, 1, 0);
			func_255(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_246(32768) && func_256(1108822547, 8)) && func_257(10, iParam3))
	{
		func_258(bParam1, 0, 1);
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
			iVar3 = func_259(iVar1, 1);
			if (func_256(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_257(iVar1, iParam3))
				{
				}
				else if ((func_256(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_256(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_255(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_260(iVar3, 1, 6);
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
								func_255(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_256(iVar3, 1))
							{
								func_261(iVar3, 1, 6);
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

void func_161(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_262(joaat("REWARD_WAGON_CARGO_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 1:
			func_262(joaat("REWARD_WAGON_CARGO_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 5:
			func_262(joaat("REWARD_WAGON_CARGO_DAMAGED"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 2:
			func_262(joaat("REWARD_WAGON_CARGO_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 3:
			func_262(joaat("REWARD_WAGON_CARGO_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case 4:
			func_262(joaat("REWARD_WAGON_CARGO_HUGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

struct<2> /*16*/ func_162(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

void func_163(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_164(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_263(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_264(iParam0))
	{
		return false;
	}
	if (func_265(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_266(iParam0, 1)) || func_267(32768))
	{
		if (!func_266(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_268())
	{
		return false;
	}
	return true;
}

void func_167(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_168(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_269(uParam2, 1, iVar0);
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
			if (func_270(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_271(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_272(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
				else if (func_273(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_274(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && func_275(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_271(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_276(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_277(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_278(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_279(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			else if (func_279(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_271(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_280(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_281(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_282(uParam2, 4000))
				{
					if ((func_283(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_284(uParam2, bParam0)) && func_285(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_283(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_284(uParam2, bParam0)) && func_285(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_286(bParam0, Global_1935630.f_41))
							{
								func_287();
								*uParam3 = 2;
								func_271(bParam0, uParam2, *uParam3);
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
						if (func_286(bParam0, Global_1935630.f_41))
						{
							func_287();
							*uParam3 = 2;
							func_271(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_288(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_289() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_287();
						*uParam3 = 2;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_290())
					{
						if (func_286(bParam0, Global_1935630.f_42))
						{
							func_287();
							*uParam3 = 2;
							func_271(bParam0, uParam2, *uParam3);
							return 1;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_291(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_271(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_292(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_293(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_294(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_295(uParam2, 4000))
				{
					if (func_296(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_271(bParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_297(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_271(bParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_298(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_271(bParam0, uParam2, *uParam3);
				return 1;
			}
		}
	}
	return 0;
}

int func_169(var uParam0)
{
	return uParam0->f_10;
}

int func_170()
{
	return Global_1572887.f_12;
}

bool func_171(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_172(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_299(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_173(int iParam0)
{
	int iVar0;

	iVar0 = func_300(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_174(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_175(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_301(iParam0, iParam1);
}

bool func_177(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_178(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_179(int iParam0, int iParam1)
{
	if (func_170() != -1)
	{
		return false;
	}
	if (!func_177(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

bool func_180(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_181(int iParam0, int iParam1)
{
	if (func_170() != -1)
	{
		return;
	}
	if (!func_177(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_182(int iParam0)
{
	int iVar0;

	if (!func_177(iParam0))
	{
		return;
	}
	iVar0 = func_202(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_183(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_184(int iParam0)
{
	return iParam0 != 0;
}

int func_185(int iParam0, bool bParam1)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	if (func_183(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_110(iParam0)))
	{
		return 1;
	}
	if (func_179(iParam0, 1) && !bParam1)
	{
		func_302(iParam0, 128);
		return 1;
	}
	func_181(iParam0, 129);
	func_182(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_110(iParam0));
	func_303(iParam0, 0);
	return 1;
}

bool func_186(int iParam0)
{
	return iParam0 != 0;
}

bool func_187(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_188(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1) != 0;
}

void func_189(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

void func_190(int iParam0, int iParam1)
{
	if (!func_187(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

bool func_191(int iParam0)
{
	if (func_304())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_192(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_305());
	}
}

void func_193(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_194(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_305());
	}
}

void func_195(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_196(var uParam0, int iParam1, char* sParam2)
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

bool func_197(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_198()
{
	if (func_170() == -1 && func_306(0, 0, 1))
	{
		return (Global_1357549.f_1495 & 512 != 0 && Global_1357549.f_1494 & 2 != 0);
	}
	return false;
}

int func_199(int iParam0, bool bParam1)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	if (!func_179(iParam0, 2))
	{
		return 0;
	}
	if (func_179(iParam0, 32) && !bParam1)
	{
		func_303(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_183(iParam0)));
		if (func_170() == -1)
		{
			if (func_179(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_110(iParam0));
				func_181(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_110(iParam0));
		}
		return 0;
	}
	if (!func_307(iParam0) && func_170() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_110(iParam0)))
	{
		func_181(iParam0, 128);
		return 1;
	}
	func_303(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_183(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_110(iParam0));
	if (func_179(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_110(iParam0));
		func_181(iParam0, 2048);
	}
	return 1;
}

bool func_200(int iParam0, bool bParam1)
{
	if (func_170() != -1)
	{
		return false;
	}
	if (!func_177(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_110(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_202(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_110(iParam0));
}

bool func_201(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_110(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_110(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_110(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

int func_202(int iParam0)
{
	int iVar0;

	iVar0 = func_110(iParam0);
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

int func_203(int iParam0)
{
	if (!func_177(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

void func_204(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_308(&(uParam0->f_1), 16384);
	}
	else
	{
		func_212(&(uParam0->f_1), 16384);
	}
}

void func_205(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_308(&(uParam0->f_1), 2048);
	}
	else
	{
		func_212(&(uParam0->f_1), 2048);
	}
}

void func_206(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_308(&(uParam0->f_1), 256);
	}
	else
	{
		func_212(&(uParam0->f_1), 256);
	}
}

void func_207(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_212(uParam0, 16);
	}
	else
	{
		func_308(uParam0, 67108864);
		func_308(uParam0, 16);
	}
}

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_308(&(uParam0->f_1), 128);
	}
	else
	{
		func_212(&(uParam0->f_1), 128);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_212(uParam0, 256);
	}
	else
	{
		func_308(uParam0, 256);
	}
}

void func_210(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_212(uParam0, 268435456);
	}
	else
	{
		func_308(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_212(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_308(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_212(uParam0, 536870912);
	}
	else
	{
		func_308(uParam0, 536870912);
	}
}

bool func_211(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_213(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_214()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_215(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_216(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_217(int iParam0)
{
	return func_213(*iParam0, 2);
}

int func_218(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_219(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_97(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_220(int iParam0, bool bParam1)
{
	if (func_97(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_221(int iParam0, bool bParam1)
{
	if (func_97(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_222(int iParam0, bool bParam1)
{
	if (func_97(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_223()
{
	return true;
}

bool func_224(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

void func_225(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

int func_226(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_227()
{
	if (!func_224(Global_1935630.f_45))
	{
		return joaat("WEAPON_UNARMED");
	}
	return Global_1935630.f_45;
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_224(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_224(iVar4) && iVar4 != iVar0)
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
	if (func_170() == -1 && !func_309(iVar0))
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
				if (func_309(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_224(iVar0))
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
		func_310(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_311(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_312(iVar0))
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

int func_229(int iParam0, int iParam1)
{
	var uVar0;

	return func_313(&uVar0, iParam0, iParam1);
}

bool func_230()
{
	return Global_1935436 == 1;
}

bool func_231()
{
	return Global_1935436 == 2;
}

void func_232(float fParam0)
{
	func_314(10, fParam0);
}

bool func_233()
{
	if (func_170() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_234()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0f;
}

float func_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_236(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

bool func_237(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&cParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&cParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_315(cParam1, cParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&cParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&cParam1, iParam5);
		}
	}
	return bVar0;
}

void func_238()
{
	Global_1911774 = 1;
}

void func_239(bool bParam0)
{
	Global_1935496.f_18 = !bParam0;
}

struct<5> /*40*/ func_240(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_316(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_317(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_251(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_318(bParam1) };
			if (bParam2 && func_319(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_320(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_320(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_321(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_322(bParam1) };
			switch (func_323(iParam0))
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
			if (func_324(iParam0, -1823706425))
			{
				Var0 = { func_251(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_324(iParam0, -1483207246))
			{
				Var0 = { func_251(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_325(Var0, &Var27, bParam1, 0))
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

int func_241(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_259(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_242(int iParam0, int iParam1)
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

bool func_243(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_326();
	if (iParam2 == 39)
	{
		Var0 = { func_240(iParam0, 1, 0) };
		iParam2 = func_242(func_241(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_327(iParam0, 866047851) && func_328(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_246(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_329(func_259(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_330(iParam2);
	func_331(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_332(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_332(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_333(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_334(iParam0, iParam2, iParam1, func_170() != -1);
	if (bParam4)
	{
		func_335(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_335(&(Global_1946054.f_1378), 1, 0);
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
				func_261(func_259(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_244(bool bParam0, bool bParam1, bool bParam2)
{
	func_336(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_254(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_337(Var0);
}

bool func_246(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_247()
{
	func_338(&(Global_1946054.f_2776));
	func_339(32768);
	func_261(1108822547, 8, 6);
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_242(iParam0, 1);
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

void func_249(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_340(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_341(Var0);
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_341(Var0);
}

struct<4> /*32*/ func_251(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_342(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_253(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_252(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_342(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_251(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_253(bParam6), &Var0, 0);
	return uVar4;
}

int func_253(bool bParam0)
{
	if (func_170() == -1)
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

void func_254(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_255(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_259(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_343(iParam4);
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

bool func_256(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

bool func_257(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_258(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_256(1108822547, 6))
	{
		if (bParam2)
		{
			func_255(bParam0, iVar0, func_170() != -1, 0, 0);
			func_260(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_261(1108822547, 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

int func_259(int iParam0, int iParam1)
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

void func_260(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_242(iParam0, 1) /*11*/].f_10 && iParam1));
}

int func_262(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_344(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_345(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_346(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

bool func_263(int iParam0, int iParam1)
{
	if (func_170() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_264(int iParam0)
{
	if (func_170() != -1)
	{
		if (func_266(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_266(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_266(iParam0, 65536) && !func_266(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_266(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_266(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_266(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_267(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_268()
{
	return Global_1905944.f_5694;
}

void func_269(var uParam0, bool bParam1, int iParam2)
{
	func_347(iParam2);
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
		uParam0->f_13 = func_348(0);
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
							func_212(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_349(1))
						{
							func_212(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_349(1) || *uParam0 & 8192 != 0))
				{
					func_308(uParam0, 33554432);
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
			if (func_350(uParam0))
			{
				uParam0->f_15 = func_289();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_289() - uParam0->f_15) > 500)
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
	func_351(uParam0);
}

bool func_270(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

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
			bVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(bVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(bVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_33)
			{
				return false;
			}
			if (bVar2 == Global_1935630.f_32)
			{
				return false;
			}
			if (!func_352(bParam0, uParam1, bVar2))
			{
				return false;
			}
			if (func_353(bParam0, bVar2) <= func_354(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_271(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_355(iParam2, 1, 1, 1, 0))
	{
		func_212(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_356(uParam1, 1);
	func_357();
}

bool func_272(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_358(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_359(uParam1);
			if (func_360(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_361(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_356(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_356(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_273(bool bParam0, bool bParam1, var uParam2)
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
	if (func_362(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_359(uParam2);
		if (func_360(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_361(uParam2)
				{
					func_356(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_274(bool bParam0, var uParam1)
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
	if (func_352(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_361(uParam1)
		{
			fVar3 = func_359(uParam1);
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

bool func_275(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_84(bParam1, bParam2, bParam3);
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

bool func_276(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_289();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_277(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_363(uParam2);
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
			if (func_285(uParam2, bParam1))
			{
				func_356(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_278(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_364(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_285(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_356(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_279(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_365(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_356(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_356(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_366(bParam1, vVar0, vVar4))
					{
						func_356(uParam2, 1);
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
					func_356(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_366(bParam1, vVar0, vVar7))
					{
						func_356(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_280(bool bParam0, var uParam1)
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
		if (!func_352(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_367(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_368(Global_1935630.f_34[iVar0]))
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
			if (func_369(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_370(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_371(uParam1, bParam0, fVar1, iVar0))
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

bool func_281(bool bParam0, var uParam1)
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

bool func_282(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_289();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_283(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_372(bVar0, &iVar2))
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
	if (func_373(bVar0, bParam0))
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

int func_284(var uParam0, bool bParam1)
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

bool func_285(var uParam0, bool bParam1)
{
	if (func_374(uParam0))
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

bool func_286(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_235(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_287()
{
}

bool func_288(var uParam0, bool bParam1)
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
		if (func_375(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_289();
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
						if (func_32(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_289();
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

int func_289()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_290()
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
	if ((func_289() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_291(var uParam0, bool bParam1)
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
	fVar0 = func_354(uParam0);
	if (uParam0->f_12 > func_376(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_377(bParam1);
	iVar1 = func_378(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_292(bool bParam0, bool bParam1, var uParam2)
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
	return func_379(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_293(bool bParam0, var uParam1)
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
		if (func_380(bParam0, uParam1, 1))
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
					if (!func_381(uParam1, bParam0))
					{
						if (func_32(bVar4, Global_36, 1) < 7f)
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

bool func_294(bool bParam0, var uParam1)
{
	if (!func_382(0))
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

bool func_295(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_289();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_296(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_297(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_289();
	}
	else if (func_289() - uParam1->f_4) > func_383(uParam1)
	{
		return func_384(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_298(var uParam0, bool bParam1)
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

int func_299(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_385(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_300(int iParam0)
{
	if (!func_174(iParam0))
	{
		return -1;
	}
	return func_299(iParam0);
}

int func_301(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_119(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_119(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_302(int iParam0, int iParam1)
{
	if (func_170() != -1)
	{
		return;
	}
	if (!func_177(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_303(int iParam0, int iParam1)
{
	if (!func_177(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_304()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

char* func_305()
{
	return "unnamed";
}

bool func_306(int iParam0, bool bParam1, bool bParam2)
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
		if (func_386())
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
		iVar0 = func_387(Global_1898164.f_1[0 /*5*/]);
		if (func_171(iVar0) && func_388(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_174(Global_1898164.f_1[0 /*5*/]))
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

bool func_307(int iParam0)
{
	if (!func_177(iParam0))
	{
		return false;
	}
	if (!func_179(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_308(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_309(int iParam0)
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

int func_310(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_240(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_389((398 + iVar28), 1);
			if (func_320(iParam0, &Var0, iVar5, 0))
			{
				if (func_321(iParam0, &Var6, iVar5))
				{
					Var29 = { func_251(iParam0, Var0, iVar5, 0) };
					func_390(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_391(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_392(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_393(iParam0, iParam1);
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

void func_311(int iParam0, int iParam1, float fParam2)
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

bool func_312(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_313(var uParam0, int iParam1, int iParam2)
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
	bVar18 = func_394(iParam1, 128);
	if (func_395("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_396(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_224(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4) && !WEAPON::IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_394(iParam1, 512) && func_397(Var4.f_4, &uVar19, &Var23, joaat("SLOTID_WEAPON_0"))) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || func_398(Var4.f_4)) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_394(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || func_394(iParam1, 4))) && (!func_398(Var4.f_4) || func_394(iParam1, 8))) && (!WEAPON::IS_WEAPON_REPEATER(Var4.f_4) || !func_394(iParam1, 8388608))) && (!WEAPON::IS_WEAPON_RIFLE(Var4.f_4) || !func_394(iParam1, 1048576)))
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
		func_399(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!func_394(iParam1, 512) && !func_394(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_313(uParam0, iParam1, iParam2);
	}
	else if (func_394(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_314(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_400(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_401(1, bVar1, 1, sVar2);
		func_402(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_403(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_404();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_403(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_403(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_315(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&cParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

struct<4> /*32*/ func_316(bool bParam0)
{
	return func_251(joaat("CHARACTER"), func_405(), -1591664384, bParam0);
}

int func_317(int iParam0)
{
	vector3 vVar0;

	if (!func_342(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_318(bool bParam0)
{
	int iVar0;

	iVar0 = func_253(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_251(923904168, func_316(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_251(923904168, func_316(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_251(923904168, func_316(bParam0), -740156546, 0);
}

bool func_319(int iParam0, bool bParam1)
{
	if (func_323(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_406(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_320(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_252(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_321(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_397(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_322(bool bParam0)
{
	int iVar0;

	iVar0 = func_253(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_251(271701509, func_316(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_251(271701509, func_316(bParam0), 12999093, 0);
}

int func_323(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_342(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_324(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_323(iParam0);
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

bool func_325(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_253(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_326()
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

bool func_327(int iParam0, int iParam1)
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

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_329(int iParam0)
{
	func_261(iParam0, 8, 6);
}

void func_330(int iParam0)
{
	func_407(&(Global_1946054.f_2589), iParam0);
}

void func_331(int iParam0, int iParam1)
{
	func_408(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_332(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_333(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_323(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_257(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_331(iVar1, iVar3);
		}
	}
	if (func_409(-1586649372) && func_257(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_331(iVar1, iVar3);
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
						func_331(iVar1, iVar3);
					}
				}
			}
			func_410(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_410(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_331(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_410(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_331(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_331(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_410(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_410(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_331(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_410(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_331(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_331(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_323(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_331(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_411(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_323(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_331(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_327(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_331(iVar1, iVar3);
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
						func_331(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_411(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_327(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_331(iVar1, iVar3);
					}
				}
			}
			switch (func_323(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_323(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_331(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_323(uParam0->f_1[iVar1 /*3*/]) || func_327(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_331(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_334(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_412(0);
	if (iParam2 != 0 && func_413(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_414(iParam0, func_259(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_335(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_170() != -1;
	iVar7 = func_412(0);
	if (func_246(32768))
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
			iVar5 = func_259(iVar0, 1);
			if (func_256(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_256(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_415(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_416(uParam0);
				if (iVar3 > 0)
				{
					if (!func_246(524288))
					{
						func_254(524288);
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
							iVar5 = func_259(iVar0, 1);
							if (func_256(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_256(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_415(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_331(iVar0, iParam2);
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
					func_339(524288);
				}
			}
		}
	}
}

void func_336(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_417(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_170() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_418(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_419(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_419(Global_40.f_7729);
				Global_1946054.f_1378 = func_419(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_420(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_421(0, 1);
	}
}

void func_337(struct<4> /*32*/ sParam0)
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
			if (func_422(Param0))
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
			func_423(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_254(8);
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
			if (func_422(Param0))
			{
				return;
			}
			func_423(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_254(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_250(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_338(var uParam0)
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

void func_339(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_340(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_341(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_422(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_422(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_423(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_254(8);
}

bool func_342(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_343(int iParam0)
{
	int iVar0;

	iVar0 = func_323(iParam0);
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

int func_344(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_424(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_342(iVar25, 0) && func_327(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_345(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_425(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_346(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_426())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_425(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_427(iVar0);
			func_428(iVar0, 0, 0);
		}
		func_425(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_163(func_162(joaat("CAREER_CASH")), iVar1);
	}
}

void func_347(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_429();
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
			func_430(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_348(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_349(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_431(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_350(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_170() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_432(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_432(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_378(iVar0) == -1)
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

void func_351(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_433(uParam0);
	}
}

bool func_352(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_378(bParam2);
	}
	else
	{
		iVar1 = func_377(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_378(bParam0);
	}
	else
	{
		iVar0 = func_377(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_211(*uParam1, 8388608))
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

float func_353(bool bParam0, bool bParam1)
{
	return func_235(bParam0, bParam1, 1, 1);
}

float func_354(var uParam0)
{
	return uParam0->f_26;
}

bool func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_356(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_212(uParam0, 134217728);
	}
	else
	{
		func_308(uParam0, 134217728);
	}
}

void func_357()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_358(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_235(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_434(bVar0, 0)))
		{
			if (func_435(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_359(var uParam0)
{
	return uParam0->f_17;
}

bool func_360(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_211(*uParam0, 4194304))
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

int func_361(var uParam0)
{
	return uParam0->f_18;
}

bool func_362(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_434(bVar0, 0)))
		{
			if (func_436(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_363(var uParam0)
{
	return uParam0->f_23;
}

int func_364(var uParam0)
{
	return uParam0->f_21;
}

int func_365(var uParam0)
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

bool func_366(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_108(bParam0, vParam4, 0.5f))
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

int func_367(bool bParam0)
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
	if (func_437(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_368(int iParam0)
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

bool func_369(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_438(bParam1))
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

bool func_370(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_438(bParam1))
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

bool func_371(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_438(bParam1))
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

bool func_372(bool bParam0, int iParam1)
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

bool func_373(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_439(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_374(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_375(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_32(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_376(var uParam0)
{
	return uParam0->f_24;
}

int func_377(bool bParam0)
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

int func_378(bool bParam0)
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

int func_379(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_372(Global_35, &iVar1))
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
		fVar2 = func_235(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_235(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_380(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_431(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_381(uParam1, bVar0))
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
				if (!bParam2 || !func_381(uParam1, bVar1))
				{
					if (func_32(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_381(var uParam0, bool bParam1)
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

int func_382(int iParam0)
{
	if (func_440())
	{
		return 0;
	}
	return func_441(Global_1347702[58 /*49*/].f_15, 1);
}

int func_383(var uParam0)
{
	return uParam0->f_20;
}

int func_384(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

int func_385(int iParam0)
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

bool func_386()
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

int func_387(int iParam0)
{
	if (!func_174(iParam0))
	{
		return -1;
	}
	return func_443(func_442(iParam0));
}

bool func_388(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_389(int iParam0, int iParam1)
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

bool func_390(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_444(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_325(*uParam1, &Var0, bParam6, 0))
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
	if (!func_391(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_253(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_391(bool bParam0)
{
	if (func_170() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_253(bParam0));
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_445(iParam0))
	{
		return 0;
	}
	if (!func_391(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_446(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_394(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_395(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_253(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_396(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_397(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_253(0);
	*uParam1 = { func_251(iParam0, func_318(0), iParam3, 0) };
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

bool func_398(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_399(int iParam0)
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

char* func_400(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_401(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_402(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_447(0, 1, bParam0, bParam1);
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

int func_403(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

void func_404()
{
	func_448();
	func_449();
	func_450();
}

struct<4> /*32*/ func_405()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_406(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_452(iParam0);
}

void func_407(var uParam0, int iParam1)
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
			if ((func_453(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_453(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_454(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_408(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_455(uParam0, 1))
	{
		func_456(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_409(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_242(iParam0, 1) /*3*/] != Global_1946054.f_57[func_242(iParam0, 1) /*11*/];
}

void func_410(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_331(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_331(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_331(iVar2, iVar0);
		}
	}
}

bool func_411(int iParam0)
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

int func_412(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_457();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_413(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_414(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

int func_415(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_242(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_246(524288))
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

int func_416(var uParam0)
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

void func_417(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_170() == -1)
	{
		func_458(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_459(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_418(int iParam0, int iParam1)
{
	if (func_170() == -1)
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

int func_419(int iParam0)
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

void func_420(int iParam0, bool bParam1, int iParam2)
{
	func_460(&(Global_1946054.f_1378), iParam0);
	func_461(2, iParam0, 6);
	if (bParam1)
	{
		func_421(0, 1);
	}
}

void func_421(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_462(0);
	}
	if (bParam0)
	{
		func_254(8);
		func_254(512);
	}
	else
	{
		func_254(8);
		func_254(16);
	}
}

bool func_422(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_423(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

bool func_424(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_342(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_317(iParam0);
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
		if (!func_463(iParam0, 1))
		{
			return false;
		}
	}
	return func_464(iParam0, 0, bParam2) >= iParam1;
}

var func_425(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_465(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_426()
{
	if (func_466())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_427(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_467((Global_40.f_4283.f_325 + iParam0));
}

void func_428(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_426())
	{
		func_425(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_425(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_429()
{
	if (func_468())
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

void func_430(var uParam0, var uParam1)
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

bool func_431(bool bParam0, int iParam1, int iParam2)
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

int func_432(var uParam0)
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

void func_433(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_308(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_212(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_434(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_435(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_436(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_436(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_437(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_438(bool bParam0)
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

int func_439(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_440()
{
	if (func_170() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_441(int iParam0, bool bParam1)
{
	switch (func_300(iParam0))
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

int func_442(int iParam0)
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

int func_443(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_444(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_445(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_446(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

char* func_447(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_400(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_400(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

float func_448()
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

	if (func_469())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_470(2);
	}
	if (Global_1347477.f_119)
	{
		return func_470(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_471();
	fVar2 = func_472();
	fVar3 = func_473();
	fVar4 = func_474();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_475()));
	fVar7 = (func_470(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_476(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_477(3, fVar9, fVar9 > 100f);
	return func_478(fVar7, -100f, 100f);
}

float func_449()
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

	if (func_469())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_470(1);
	}
	if (Global_1347477.f_119)
	{
		return func_470(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_471();
	fVar2 = func_472();
	fVar3 = func_473();
	fVar4 = func_474();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_475()));
	fVar7 = (func_470(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_476(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_477(2, fVar9, fVar9 > 100f);
	return func_478(fVar7, -100f, 100f);
}

float func_450()
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

	if (func_469())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_470(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_479())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_480())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_470(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_471();
	fVar2 = func_472();
	fVar3 = func_473();
	fVar4 = func_474();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_475()));
	fVar7 = (func_470(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_476(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_477(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_470(0);
	}
	return func_478(fVar7, -100f, 100f);
}

bool func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_453(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_454(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_455(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_456(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_457()
{
	return Global_1946054.f_1;
}

void func_458(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_459(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_460(var uParam0, int iParam1)
{
	int iVar0;

	if (func_170() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_458(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_459(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_461(int iParam0, int iParam1, int iParam2)
{
	if (func_170() == -1)
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

void func_462(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_463(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_342(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_481(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_395("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_396(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_224(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_399(iVar1);
				return true;
			}
			iVar3++;
		}
		func_399(iVar1);
	}
	return false;
}

int func_464(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_342(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_317(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_481(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_482(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_253(bParam2), iParam0, 0);
	return iVar2;
}

void func_465(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_466()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_467(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_162(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

bool func_468()
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

bool func_469()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_470(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_471()
{
	float fVar0;
	int iVar1;

	fVar0 = func_483(13);
	iVar1 = func_484(fVar0);
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

float func_472()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_473()
{
	if (func_466())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_474()
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

float func_475()
{
	return Global_1954815.f_3;
}

void func_476(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_447(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_477(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_447(iParam0, 2, 0, 0);
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

float func_478(float fParam0, float fParam1, float fParam2)
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

bool func_479()
{
	return func_483(12) <= -99f;
}

bool func_480()
{
	return func_483(12) >= 99f;
}

int func_481(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_342(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_317(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_327(iParam0, 1399091007))
	{
		func_485(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_482(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_486(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_487(&Var0, func_318(0));
	}
	if (!func_488(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_399(iVar18);
	return iVar19;
}

float func_483(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_484(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_485(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_486(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_487(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_488(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_253(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

