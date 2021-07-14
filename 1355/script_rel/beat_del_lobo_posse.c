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
	int iLocal_15 = 0;
	char* sLocal_16 = NULL;
	struct<193> Local_17 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_210 = 0;
	struct<32> Local_211[5];
	var uLocal_372[5] = { 0, 0, 0, 0, 0 };
	int iLocal_378[5] = { 0, 0, 0, 0, 0 };
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = -1;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 2;
	var uLocal_393 = 1;
	var uLocal_394 = 1;
	var uLocal_395 = 1;
	var uLocal_396 = 0;
	var uLocal_397 = 1;
	var uLocal_398 = 2;
	var uLocal_399 = 2;
	var uLocal_400 = 3;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 3;
	var uLocal_404 = 1;
	var uLocal_405 = 3;
	var uLocal_406 = 3;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<2> Local_409[1];
	var uLocal_412 = 1;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	struct<21> Local_421[5];
	struct<17> Local_527[3];
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588[5] = { 0, 0, 0, 0, 0 };
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	vector3 vLocal_617[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	float fLocal_653 = 0f;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	bool bLocal_666 = false;
	int iLocal_667 = 0;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	int iLocal_670 = 0;
	vector3 vLocal_671 = { 0f, 0f, 0f };
	vector3 vLocal_674 = { 0f, 0f, 0f };
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685[5] = { 0, 0, 0, 0, 0 };
	int iLocal_691[5] = { 0, 0, 0, 0, 0 };
	int iLocal_697 = 0;
	vector3 vLocal_698 = { 0f, 0f, 0f };
	int iLocal_701 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_598 = 1;
	iLocal_649 = -1;
	iLocal_652 = 1;
	bLocal_668 = true;
	Local_17.f_3 = func_1(&vScriptParam_0);
	Local_17.f_161 = func_2(vScriptParam_0.z, 2);
	func_3();
	func_4(&Local_17, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_669 = true;
	}
	while (true)
	{
		func_6(bLocal_669, 406, 0);
		if (bLocal_669)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_598)
			{
				case 1:
					if (func_7(&Local_17, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						STREAMING::REQUEST_COLLISION_AT_COORD(Local_17.f_51);
						func_8(&Local_17, &uLocal_678, &uLocal_677);
						func_9(&Local_17, 5);
						iLocal_598 = 0;
					}
					else if (Local_17.f_160)
					{
						func_5();
					}
					break;
				case 0:
					if (func_10())
					{
						iLocal_598 = 3;
					}
					break;
				case 3:
					if (func_11())
					{
						if (func_12())
						{
							iLocal_598 = 4;
						}
					}
					break;
				case 4:
					if (!func_13(&Local_17, &uLocal_372, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_5();
					}
					if (func_14())
					{
						func_5();
					}
					if (func_15(&Local_17, &uLocal_372, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_5();
					}
					func_16();
					break;
			}
			BUILTIN::WAIT(Local_17.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3()
{
}

void func_4(var uParam0, bool bParam1)
{
	func_17(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_18("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_5()
{
	int iVar0;

	func_19();
	Local_17.f_50 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_372[iVar0], true);
		}
		iVar0++;
	}
	func_20(&uLocal_679, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
	func_21(&Local_17, &uLocal_372, &iLocal_378, iLocal_14, uLocal_678, uLocal_677, 0, 1, 0, 1);
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 5f))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_701);
	}
	func_22(&(Local_421[0 /*21*/]), &Local_527);
	func_22(&(Local_421[1 /*21*/]), &Local_527);
	func_22(&(Local_421[2 /*21*/]), &Local_527);
	func_22(&(Local_421[3 /*21*/]), &Local_527);
	func_22(&(Local_421[4 /*21*/]), &Local_527);
	func_23(uLocal_372[0], 1, 1);
	func_23(uLocal_372[1], 1, 1);
	func_23(uLocal_372[2], 1, 1);
	func_23(uLocal_372[3], 1, 1);
	func_23(uLocal_372[4], 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_24(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_7(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_25(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_26(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_27(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_28(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_29(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 13;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 13;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 13;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 14;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 14;
			*uParam2 = 1;
			break;
		case 7:
			*uParam1 = 14;
			*uParam2 = 2;
			break;
		case 8:
			*uParam1 = 15;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 15;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 15;
			*uParam2 = 2;
			break;
		case 11:
			*uParam1 = 15;
			*uParam2 = 3;
			break;
		case 12:
			*uParam1 = 15;
			*uParam2 = 4;
			break;
		case 13:
			*uParam1 = 15;
			*uParam2 = 5;
			break;
		case 14:
			*uParam1 = 15;
			*uParam2 = 6;
			break;
		case 15:
			*uParam1 = 15;
			*uParam2 = 7;
			break;
		case 16:
			*uParam1 = 16;
			*uParam2 = 0;
			break;
		case 17:
			*uParam1 = 16;
			*uParam2 = 1;
			break;
		case 18:
			*uParam1 = 16;
			*uParam2 = 2;
			break;
		case 19:
			*uParam1 = 16;
			*uParam2 = 3;
			break;
		case 20:
			*uParam1 = 16;
			*uParam2 = 4;
			break;
	}
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

bool func_10()
{
	switch (iLocal_599)
	{
		case 0:
			if (func_30(&Local_17))
			{
				func_31();
				func_32();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				iLocal_599 = 1;
			}
			break;
		case 1:
			if (!func_38(&Local_211))
			{
				return false;
			}
			if (!func_39(&uLocal_412))
			{
				return false;
			}
			switch (Local_17.f_51.f_4)
			{
				case 8:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 18:
				case 19:
				case 20:
					if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_16))
					{
						return false;
					}
					break;
			}
			return true;
	}
	return false;
}

bool func_11()
{
	switch (iLocal_600)
	{
		case 0:
			if (func_40(Local_17.f_51, Local_17.f_51.f_3, &Local_211, &uLocal_372, 1, 0, -1, 1))
			{
				iLocal_600 = 1;
			}
			break;
		case 1:
			func_41();
			func_42();
			if (Local_17.f_51.f_4 == 16)
			{
				func_43(&uLocal_679, -2294.8f, -3037.2f, 0f, 8f, 0, 0);
			}
			iLocal_600 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_12()
{
	bool bVar0;

	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_594)
			{
				case 0:
					iLocal_697 = PED::CREATE_GROUP(0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
					iLocal_594 = 1;
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_372[0], sLocal_16, 0, 30218, -1, 0, 0, -1);
					switch (Local_17.f_51.f_4)
					{
						case 15:
						case 16:
						case 20:
							iLocal_691[1] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2309.443f, -3079.082f, -4.1759f, 51.59f, 0, 60000f, 1);
							iLocal_691[2] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2310.804f, -3079.311f, -4.2636f, 10.92f, 0, 60000f, 1);
							iLocal_691[3] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2307.301f, -3083.707f, -4.5794f, -42.94f, 0, 60000f, 1);
							break;
						case 14:
						case 18:
						case 19:
							iLocal_691[1] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2743.48f, -2364.23f, 44.11f, -99.83f, 0, 60000f, 1);
							iLocal_691[2] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2742.52f, -2363.83f, 44.11f, 177.09f, 0, 60000f, 1);
							iLocal_691[3] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("WORLD_HUMAN_SMOKE"), -2741.64f, -2364.27f, 44.11f, 147.28f, 0, 60000f, 1);
							break;
					}
					break;
				case 3:
					return true;
			}
			break;
		case 1:
			switch (iLocal_594)
			{
				case 0:
					func_44(&uLocal_639, 0);
					if (PATHFIND::_0xCA27A86CAA4E98ED(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &vLocal_698, 1, 1077936128 /* Float: 3f */, 0) && !func_45(vLocal_698))
					{
						bVar0 = true;
					}
					else if (func_46(&uLocal_639, 2f))
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						iLocal_697 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
						iLocal_594 = 1;
					}
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[4], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[4], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
					TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
					if (!func_45(vLocal_698))
					{
						TASK::TASK_MOVE_IN_TRAFFIC_TO_DESTINATION(0, vLocal_698, 5f, 1.75f, 8208, 0);
					}
					TASK::TASK_MOVE_IN_TRAFFIC(0, 1.75f, 8208, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
					TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
					break;
				case 3:
					return true;
			}
			break;
		case 2:
			switch (iLocal_594)
			{
				case 0:
					iLocal_697 = PED::CREATE_GROUP(0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
					iLocal_594 = 1;
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_372[0], sLocal_16, 0, 30218, -1, 0, 0, -1);
					break;
				case 3:
					return true;
			}
			break;
	}
	return false;
}

bool func_13(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_47(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_48(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_49(&(uParam0->f_5));
			}
			func_50(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_51(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_52(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_53(&(uParam0->f_121));
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
					func_54(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_55(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_27(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				func_56(uParam0, (*uParam1)[0]);
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

bool func_14()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_579)
			{
				case 0:
					func_57();
					break;
				case 1:
					func_58();
					break;
				case 2:
					func_59();
					break;
				case 3:
					func_60();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
		case 1:
			switch (iLocal_580)
			{
				case 0:
					func_61();
					break;
				case 1:
					func_62();
					break;
				case 2:
					func_63();
					break;
				case 3:
					func_64();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
		case 2:
			switch (iLocal_581)
			{
				case 0:
					func_65();
					break;
				case 1:
					func_66();
					break;
				case 2:
					func_67();
					break;
				case 3:
					func_68();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
	}
	return false;
}

bool func_15(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_69())
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
			else if (func_70(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_27(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_27(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_27(uParam0->f_3, 2) || iParam12 == 1)
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
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
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
				if (func_71(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_71(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
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

void func_16()
{
	switch (iLocal_14)
	{
		case 0:
			func_72();
			func_73();
			if (iLocal_579 != 3)
			{
				func_74();
			}
			break;
		case 1:
			func_75();
			func_73();
			if (iLocal_580 != 3)
			{
				func_74();
			}
			break;
		case 2:
			func_76();
			func_73();
			if (iLocal_581 != 3)
			{
				func_74();
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-4310.89f, -2428.42f, 9.08f, 5f);
			break;
	}
	func_77();
	func_78();
}

void func_17(var uParam0)
{
	func_79(uParam0, 0);
	func_80(uParam0, 0);
	func_81(uParam0, 1);
	func_82(uParam0, 1);
	func_83(uParam0, 0);
	func_84(uParam0, 1);
	func_85(uParam0, 1, 1, 1);
}

var func_18(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_86(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_87(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_86(sVar0, iParam1, 0, 0, 1, 1);
}

void func_19()
{
	if (Local_17.f_44 == 1)
	{
		if (func_88(Local_17.f_3, iLocal_14) == 0)
		{
			func_89(Local_17.f_3, iLocal_14, 1);
		}
		if (iLocal_14 == 1)
		{
			if (func_90(Local_17.f_3, 1) == 0)
			{
				func_91(Local_17.f_3, 1, 1);
				return;
			}
			if (func_90(Local_17.f_3, 1) == 1)
			{
				func_91(Local_17.f_3, 1, 2);
				return;
			}
			if (func_90(Local_17.f_3, 1) == 2)
			{
				func_91(Local_17.f_3, 1, 3);
				return;
			}
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	if (func_92(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_21(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_93(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_94(uParam0->f_3, 524288);
		}
	}
	if (func_95(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_95((*uParam1)[iVar0], 0, 0))
			{
				func_96((*uParam1)[iVar0], bVar3);
				if (func_97(uParam0, uParam1[iVar0]))
				{
					func_98(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_95((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_100((*uParam1)[iVar0], 1073741824 /* Float: 2f */, func_99(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_101(uParam0);
	}
	func_102(uParam0);
	if (!uParam0->f_186)
	{
		func_47(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_103(uParam0->f_3, uParam0->f_185);
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
		func_104(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_22(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_105(iParam0, uParam1, 1);
	func_106(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

bool func_24(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_107(iVar0))
	{
		return false;
	}
	if (func_108(iVar0, 1) || func_108(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_25(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_109(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_110(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_51(iParam0, 128))
			{
				if (!func_111(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_112(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_113(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_45(*uParam1))
				{
					return func_114(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_115(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_110(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_116(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_117(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_118(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
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
			if (func_51(iParam0, 128))
			{
				if (!func_119(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_114(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_112(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_116(uParam1))
					{
						return func_114(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
			if (func_120(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_110(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_114(uParam1, uParam3, uParam11, bParam2, 12, 1000);
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
		func_18("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_18("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_26(var uParam0, int iParam1)
{
	if (func_27(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_122(iParam1, func_121(uParam0), &(uParam0->f_172)))
		{
			if (func_95(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_27(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_28(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_124(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_27(uParam0->f_3, 1) && !func_27(uParam0->f_3, 32))
	{
		func_124(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_27(uParam0->f_3, 2) && !func_27(uParam0->f_3, 32))
	{
		func_124(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_125(uParam0->f_171, 1);
	}
	if (func_27(uParam0->f_3, 1))
	{
		func_124(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_126(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_29(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

bool func_30(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_127(uParam0->f_3);
	iVar1 = func_128(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_0xED9582B3DA8F02B4(iVar0);
	if (PED::_0x5C16855277819BBF() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_31()
{
	switch (Local_17.f_51.f_4)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 17:
			iLocal_14 = 1;
			break;
		case 8:
		case 11:
		case 12:
		case 13:
			iLocal_14 = 2;
			break;
		case 14:
		case 15:
		case 16:
		case 18:
		case 19:
		case 20:
			iLocal_14 = 0;
			break;
	}
}

void func_32()
{
	iLocal_15 = func_129(Local_17.f_3, 3, 0);
	switch (iLocal_15)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_33()
{
	switch (Local_17.f_51.f_4)
	{
		case 8:
			sLocal_16 = "redlp_location_shack1";
			break;
		case 11:
			sLocal_16 = "redlp_location_shack2";
			break;
		case 12:
			sLocal_16 = "redlp_location_shack3";
			break;
		case 13:
			sLocal_16 = "redlp_location_shack4";
			break;
		case 14:
			sLocal_16 = "redlp_location_rest2b";
			break;
		case 15:
			sLocal_16 = "redlp_location_rest1b";
			break;
		case 16:
			sLocal_16 = "redlp_location_rest1a";
			break;
		case 18:
			sLocal_16 = "redlp_location_rest2c";
			break;
		case 19:
			sLocal_16 = "redlp_location_rest2a";
			break;
		case 20:
			sLocal_16 = "redlp_location_rest1c";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_16);
	}
}

void func_34()
{
	int iVar0;

	Local_211[0 /*32*/].f_6 = { Local_17.f_51 };
	switch (Local_17.f_51.f_4)
	{
		case 2:
			Local_211[0 /*32*/].f_9 = 66.09f;
			break;
		case 4:
			Local_211[0 /*32*/].f_9 = -115f;
			break;
		case 0:
			Local_211[0 /*32*/].f_9 = 149f;
			break;
		case 1:
			Local_211[0 /*32*/].f_9 = 144.85f;
			break;
		case 3:
			Local_211[0 /*32*/].f_9 = 173f;
			break;
		case 5:
			Local_211[0 /*32*/].f_9 = -95.48f;
			break;
		case 6:
			Local_211[0 /*32*/].f_9 = -6.89f;
			break;
		case 7:
			Local_211[0 /*32*/].f_9 = -74.82f;
			break;
		case 10:
			Local_211[0 /*32*/].f_9 = -141f;
			break;
		case 11:
			Local_211[0 /*32*/].f_9 = -141f;
			break;
		case 13:
			Local_211[0 /*32*/].f_9 = 44.34f;
			break;
		case 8:
			Local_211[0 /*32*/].f_9 = 129.32f;
			break;
		case 9:
			Local_211[0 /*32*/].f_9 = -134.47f;
			break;
		case 12:
			Local_211[0 /*32*/].f_9 = 68.83f;
			break;
		case 14:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 15:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 16:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 17:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 18:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 19:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 20:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
	}
	func_130(&(Local_211[0 /*32*/].f_6), 1, 10, 0);
	Local_211[0 /*32*/].f_15 = { Local_211[0 /*32*/].f_6 };
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		Local_211[iVar0 /*32*/].f_9 = Local_211[0 /*32*/].f_9;
		switch (iVar0)
		{
			case 1:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, -2f, -2f, 0f) };
				break;
			case 2:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, 1.5f, -1.5f, 0f) };
				break;
			case 3:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, -3f, -5f, 0f) };
				break;
			case 4:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, 3f, -4f, 0f) };
				break;
		}
		func_130(&(Local_211[iVar0 /*32*/].f_6), 1, 10, 0);
		Local_211[iVar0 /*32*/].f_15 = { Local_211[iVar0 /*32*/].f_6 };
		Local_211[iVar0 /*32*/].f_18 = Local_211[iVar0 /*32*/].f_9;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar0++;
	}
}

void func_35()
{
	int iVar0;

	switch (iLocal_14)
	{
		case 0:
			StringCopy(&(Local_211[0 /*32*/].f_23), "1019_G_M_M_UniBanditos_01_HISPANIC_01", 64);
			Local_211[0 /*32*/].f_3 = 470765111;
			StringCopy(&(Local_211[1 /*32*/].f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			Local_211[1 /*32*/].f_3 = 708700820;
			StringCopy(&(Local_211[2 /*32*/].f_23), "0135_G_M_M_UniCriminals_01_HISPANIC_02", 64);
			Local_211[2 /*32*/].f_3 = 1275244069;
			StringCopy(&(Local_211[3 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
			Local_211[3 /*32*/].f_3 = 1513704082;
			break;
		case 1:
			switch (iLocal_15)
			{
				case 0:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1021_G_M_M_UniBanditos_01_HISPANIC_03", 64);
					Local_211[0 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[1 /*32*/].f_23), "1022_G_M_M_UniBanditos_01_HISPANIC_04", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
					Local_211[2 /*32*/].f_3 = 125607214;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1069_G_M_M_UniCriminals_01_HISPANIC_06", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1020_G_M_M_UniBanditos_01_HISPANIC_02", 64);
					Local_211[4 /*32*/].f_3 = -628473014;
					break;
				case 1:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1024_G_M_M_UniBanditos_01_WHITE_02", 64);
					Local_211[0 /*32*/].f_3 = 691921068;
					StringCopy(&(Local_211[1 /*32*/].f_23), "1069_G_M_M_UniCriminals_01_HISPANIC_06", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
					Local_211[2 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1020_G_M_M_UniBanditos_01_HISPANIC_02", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
					Local_211[4 /*32*/].f_3 = -628473014;
					break;
				case 2:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
					Local_211[0 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[1 /*32*/].f_23), "RBH_TARGET22", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
					Local_211[2 /*32*/].f_3 = 125607214;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1024_G_M_M_UniBanditos_01_WHITE_02", 64);
					Local_211[4 /*32*/].f_3 = -1855770375;
					break;
			}
			break;
		case 2:
			StringCopy(&(Local_211[0 /*32*/].f_23), "1019_G_M_M_UniBanditos_01_HISPANIC_01", 64);
			Local_211[0 /*32*/].f_3 = 125607214;
			StringCopy(&(Local_211[1 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
			Local_211[1 /*32*/].f_3 = 369572419;
			StringCopy(&(Local_211[2 /*32*/].f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			Local_211[2 /*32*/].f_3 = -1855770375;
			StringCopy(&(Local_211[3 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
			Local_211[3 /*32*/].f_3 = -1617539745;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Local_211[iVar0 /*32*/].f_3 != joaat("META_OUTFIT_DEFAULT"))
		{
			Local_211[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_211[iVar0 /*32*/].f_13 = 1;
			Local_211[iVar0 /*32*/].f_19 = 1;
			Local_211[iVar0 /*32*/].f_12 = func_131(5, iVar0, 0);
		}
		iVar0++;
	}
	func_132(&Local_211);
}

void func_36()
{
	Local_409[0 /*2*/] = "AMB_WORK@WORLD_HUMAN_LAWMAN_IDLES@MALE_B@BASE";
	Local_409[0 /*2*/].f_1 = "base";
	func_133(Local_409[0 /*2*/], &uLocal_412);
}

void func_37()
{
	func_135(&(Local_527[0 /*17*/]), "RE_INTER_POS", func_134(47), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_135(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_134(49), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_136(&(Local_527[0 /*17*/]), 1, 0);
	func_136(&(Local_527[1 /*17*/]), 1, 0);
}

bool func_38(var uParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_137(uParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_39(var uParam0)
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

bool func_40(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
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
		if (func_138() || !func_139(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_41()
{
	int iVar0;

	Local_17.f_178 = 1;
	func_140(uLocal_372[0], &Local_17, 0);
	func_140(uLocal_372[1], &Local_17, 0);
	func_140(uLocal_372[4], &Local_17, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_95(Local_211[iVar0 /*32*/].f_11, 0, 1))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_211[iVar0 /*32*/].f_11, true, joaat("PLAYER"));
		}
		if (func_95(uLocal_372[iVar0], 0, 1))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_372[iVar0], joaat("REL_PLAYER_DISLIKE"));
			PED::_0x89F5E7ADECCCB49C(uLocal_372[iVar0], "Default_Brave");
			PED::SET_PED_CONFIG_FLAG(uLocal_372[iVar0], 146, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_372[iVar0], 6, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_372[iVar0], true, true);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_372[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 0, true);
		}
		iVar0++;
	}
	switch (iLocal_14)
	{
		case 0:
			func_142(uLocal_372[0], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[1], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[2], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[3], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_144(uLocal_372[0], 300);
			func_144(uLocal_372[1], 200);
			func_144(uLocal_372[2], 200);
			func_144(uLocal_372[3], 100);
			func_145(uLocal_372[0], joaat("PROVISION_RING_SILVER"), 1, 0);
			func_145(uLocal_372[1], joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0);
			func_145(uLocal_372[2], joaat("CONSUMABLE_GIN"), 1, 0);
			func_145(uLocal_372[3], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
			break;
		case 1:
			func_142(uLocal_372[0], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[1], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[2], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[3], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[4], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_144(uLocal_372[0], 300);
			func_144(uLocal_372[1], 200);
			func_144(uLocal_372[2], 200);
			func_144(uLocal_372[3], 300);
			func_144(uLocal_372[4], 200);
			func_145(uLocal_372[0], joaat("CONSUMABLE_JERKY"), 2, 0);
			func_145(uLocal_372[1], joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0);
			func_145(uLocal_372[2], joaat("CONSUMABLE_MEDICINE"), 1, 0);
			func_145(uLocal_372[3], joaat("CONSUMABLE_RUM"), 1, 0);
			func_145(uLocal_372[4], joaat("CONSUMABLE_WHISKEY_USED"), 1, 0);
			break;
		case 2:
			func_142(uLocal_372[0], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[1], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[2], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_142(uLocal_372[3], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_144(uLocal_372[0], 200);
			func_144(uLocal_372[1], 100);
			func_144(uLocal_372[2], 100);
			func_144(uLocal_372[3], 100);
			func_145(uLocal_372[0], joaat("CONSUMABLE_KIDNEYBEANS_CAN"), 1, 0);
			func_145(uLocal_372[1], joaat("CONSUMABLE_BREAD_ROLL"), 1, 0);
			func_145(uLocal_372[2], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
			func_145(uLocal_372[3], joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"), 1, 0);
			break;
	}
	func_56(&Local_17, uLocal_372[0]);
}

void func_42()
{
	func_146(&(Local_17.f_5), 1);
	func_82(&(Local_17.f_5), 1);
	func_80(&(Local_17.f_5), 1);
	func_79(&(Local_17.f_5), 1);
	func_147(&(Local_17.f_5), 1);
	func_81(&(Local_17.f_5), 1);
	func_148(&(Local_17.f_5), 1);
	func_149(&(Local_17.f_5), 1);
	func_84(&(Local_17.f_5), 1);
}

void func_43(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_150(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1 || !func_151(uParam0))
	{
		func_152(uParam0);
	}
}

bool func_45(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_46(var uParam0, float fParam1)
{
	if (!func_151(uParam0))
	{
		return false;
	}
	if (func_153(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_47(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_154(uParam0) };
	iVar3 = func_103(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_48(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*uParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_49(var uParam0)
{
	func_81(uParam0, 1);
	func_155(uParam0, 20);
}

void func_50(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_51(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_52(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_123(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_156())
	{
		func_157(1);
	}
	func_158(iParam2, uParam0->f_43);
	func_159(iParam2, 0, 0, 0, 0);
	if (func_160(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_93(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_161(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_53(var uParam0)
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

void func_54(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_162())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_51(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_52(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_53(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_163(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_164(uParam0, bVar0);
		func_165(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_166(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_52(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_53(&(uParam0->f_121));
		}
	}
}

bool func_55(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_27(uParam2->f_3, 1))
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
			if (func_167())
			{
				fVar0 = 15f;
			}
		}
		if (func_168(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_169(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_168(uParam2, fVar1))
		{
			if (!func_170(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_171(uParam2->f_3, 2) && func_172(2))
		{
			return false;
		}
		if (func_27(iParam0, 4194304) || func_27(iParam0, 33554432))
		{
			if (func_173(1))
			{
				return false;
			}
		}
	}
	if (func_174(Global_35))
	{
		return false;
	}
	if (func_175(0, 1, 1) && !func_176(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_27(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_177(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_169(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_178())
		{
			return false;
		}
		iVar2 = func_180(func_179());
		if (func_181(iVar2))
		{
			if (func_182(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_183(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_184(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_56(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_185(uParam0->f_51))
	{
		func_186(uParam0->f_51, 0);
		fVar0 = func_187(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_188());
		bVar1 = func_99(!func_27(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_190(iVar2, func_189(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_57()
{
	func_191(1);
}

void func_58()
{
	func_192();
	func_193(20);
	func_194();
	if (func_195() && bLocal_666 == 0)
	{
		func_196();
	}
	if (func_197(Local_17.f_51, 1) <= 50f || func_198(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
	}
	switch (iLocal_584)
	{
		case 0:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_16, &iLocal_643);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_16, (iLocal_643 - 1), &vLocal_674);
			func_199();
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				func_200();
				func_201();
				if (func_202(-4f, 1, 0, 0))
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uLocal_372[1]);
				}
			}
			else if (bLocal_660 == 0 && !func_195())
			{
				func_203();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 50f, 50f, 5f, false, true, 0) && iLocal_665 == 0)
			{
				iLocal_665 = 1;
				func_204(uLocal_372[0], uLocal_372[1], func_134(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 15f, 15f, 2f, false, true, 0) && bLocal_660 == 0)
			{
				func_191(2);
			}
			break;
	}
}

void func_59()
{
	func_192();
	func_193(20);
	switch (iLocal_585)
	{
		case 0:
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			func_205();
			iLocal_585 = 1;
			func_136(&(Local_527[0 /*17*/]), 0, 0);
			func_206(&(Local_527[1 /*17*/]), 0);
			func_136(&(Local_527[1 /*17*/]), 1, 0);
			Local_527[1 /*17*/].f_13 = func_134(55);
			iLocal_582 = 4;
			iLocal_583 = 0;
			break;
		case 1:
			func_207();
			if (!func_208() && bLocal_660 == 0)
			{
				if ((PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[1]) && PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[2])) && PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[3]))
				{
					func_209();
				}
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			if (TASK::GET_SEQUENCE_PROGRESS(uLocal_372[0]) >= 4)
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_212();
				iLocal_585 = 2;
			}
			break;
		case 2:
			if (((PED::IS_PED_ON_MOUNT(uLocal_372[0]) && PED::IS_PED_ON_MOUNT(uLocal_372[1])) && PED::IS_PED_ON_MOUNT(uLocal_372[2])) && PED::IS_PED_ON_MOUNT(uLocal_372[3]))
			{
				TASK::TASK_MOVE_IN_TRAFFIC(uLocal_372[0], 2f, 8208, 0);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
				PED::SET_GROUP_FORMATION(iLocal_697, 0);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_697, 2f, -1f, -1f);
				iLocal_585 = 3;
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			break;
		case 3:
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			break;
	}
}

void func_60()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	func_213();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			func_22(&(Local_421[0 /*21*/]), &Local_527);
			func_22(&(Local_421[1 /*21*/]), &Local_527);
			func_22(&(Local_421[2 /*21*/]), &Local_527);
			func_22(&(Local_421[3 /*21*/]), &Local_527);
			func_215(&(uLocal_372[0]));
			func_215(&(uLocal_372[1]));
			func_215(&(uLocal_372[2]));
			func_215(&(uLocal_372[3]));
			Local_17.f_44 = 1;
			func_216();
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.9f;
				fVar2 = 1.2f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar4, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			PED::_0x712B2C2B2471B493(uLocal_372[0], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[1], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[2], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[3], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[4], joaat("DISABLED"));
			if (!func_217(Local_211[0 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[0 /*32*/].f_11, -1))
				{
					TASK::TASK_FLEE_PED(Local_211[0 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!func_217(Local_211[1 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[1 /*32*/].f_11, -1))
				{
					TASK::TASK_FLEE_PED(Local_211[1 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!func_217(Local_211[2 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[2 /*32*/].f_11, -1))
				{
					TASK::TASK_FLEE_PED(Local_211[2 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!func_217(Local_211[3 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[3 /*32*/].f_11, -1))
				{
					TASK::TASK_FLEE_PED(Local_211[3 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!func_217(Local_211[4 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[4 /*32*/].f_11, -1))
				{
					TASK::TASK_FLEE_PED(Local_211[4 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			iLocal_586 = 2;
			break;
		case 2:
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_191(5);
			}
			break;
	}
}

void func_61()
{
	func_219(1);
}

void func_62()
{
	func_220();
	func_193(30);
	func_194();
	switch (iLocal_584)
	{
		case 0:
			fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				switch (iLocal_15)
				{
					case 0:
						func_221();
						break;
					case 1:
						func_222();
						break;
					case 2:
						func_223();
						break;
				}
				func_201();
			}
			else
			{
				func_224();
			}
			if (bLocal_659)
			{
				func_225(30);
			}
			if (func_197(Local_17.f_51, 1) <= 50f || func_198(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 80f, 80f, 40f, false, true, 0))
			{
				func_219(2);
			}
			break;
	}
}

void func_63()
{
	func_220();
	func_193(20);
	if (bLocal_659)
	{
		func_225(30);
	}
	switch (iLocal_585)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_MOVE_IN_TRAFFIC(0, 2f, 8208, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], -2f, -2f, 0f, 2f, -1, 0.1f, 1, 1, 1, 1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 2f, -2f, 0f, 2f, -1, 0.1f, 1, 1, 1, 1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], -3f, -4f, 0f, 2f, -1, 0.1f, 1, 1, 1, 1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 3f, -4f, 0f, 2f, -1, 0.1f, 1, 1, 1, 1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[4], uLocal_685[4]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_585 = 3;
			break;
		case 3:
			break;
	}
}

void func_64()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	func_226();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			func_22(&(Local_421[0 /*21*/]), &Local_527);
			func_22(&(Local_421[1 /*21*/]), &Local_527);
			func_22(&(Local_421[2 /*21*/]), &Local_527);
			func_22(&(Local_421[3 /*21*/]), &Local_527);
			func_22(&(Local_421[4 /*21*/]), &Local_527);
			func_215(&(uLocal_372[0]));
			func_215(&(uLocal_372[1]));
			func_215(&(uLocal_372[2]));
			func_215(&(uLocal_372[3]));
			func_215(&(uLocal_372[4]));
			Local_17.f_44 = 1;
			func_216();
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[4]);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[4]))
			{
				iLocal_378[4] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[4]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.2f;
				fVar1 = 0.5f;
				fVar2 = 0.8f;
				fVar3 = 1.2f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
				fVar3 = 1.3f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar5);
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar5);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar5, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar5);
			func_227(uLocal_372[0], uLocal_685[0], 0f);
			func_227(uLocal_372[1], uLocal_685[1], fVar0);
			func_227(uLocal_372[2], uLocal_685[2], fVar1);
			func_227(uLocal_372[3], uLocal_685[3], fVar2);
			func_227(uLocal_372[4], uLocal_685[4], fVar3);
			iLocal_586 = 2;
			break;
		case 2:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[0], true))
			{
				if (!func_217(uLocal_372[0], 242628503))
				{
					func_227(uLocal_372[0], uLocal_685[0], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[1], true))
			{
				if (!func_217(uLocal_372[1], 242628503))
				{
					func_227(uLocal_372[1], uLocal_685[1], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[2], true))
			{
				if (!func_217(uLocal_372[2], 242628503))
				{
					func_227(uLocal_372[2], uLocal_685[2], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[3], true))
			{
				if (!func_217(uLocal_372[3], 242628503))
				{
					func_227(uLocal_372[3], uLocal_685[3], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[4], true))
			{
				if (!func_217(uLocal_372[4], 242628503))
				{
					func_227(uLocal_372[4], uLocal_685[4], 0f);
				}
			}
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_219(5);
			}
			break;
	}
}

void func_65()
{
	func_228(1);
}

void func_66()
{
	func_229();
	func_193(20);
	func_194();
	if (func_195())
	{
		func_230();
	}
	if (func_197(Local_17.f_51, 1) <= 50f || func_198(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
	}
	switch (iLocal_584)
	{
		case 0:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_16, &iLocal_643);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_16, (iLocal_643 - 1), &vLocal_674);
			fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				func_231();
				func_201();
				if (func_202(-4f, 1, 0, 0))
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uLocal_372[3]);
				}
			}
			else
			{
				if (bLocal_660 == 0 && !func_195())
				{
					func_232();
				}
				if (iLocal_667 == 1)
				{
					if (((func_233(uLocal_372[0], 1, 1) > 15f && func_233(uLocal_372[1], 1, 1) > 15f) && func_233(uLocal_372[2], 1, 1) > 15f) && func_233(uLocal_372[3], 1, 1) > 15f)
					{
						TASK::CLEAR_PED_TASKS(uLocal_372[2], true, false);
						TASK::CLEAR_PED_TASKS(uLocal_372[3], true, false);
						iLocal_667 = 0;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 100f, 100f, 60f, false, true, 0))
			{
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[1], -2f, -4f, 0f);
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[2], 1.5f, -8f, 0f);
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[3], -3f, -12f, 0f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 80f, 80f, 60f, false, true, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 2f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[1], 1.5f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[2], 1.5f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[3], 1f, 1, -1f, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 20f, 20f, 20f, false, true, 0) && bLocal_660 == 0)
			{
				func_228(2);
			}
			break;
	}
}

void func_67()
{
	func_229();
	func_193(20);
	switch (iLocal_585)
	{
		case 0:
			func_204(uLocal_372[0], uLocal_372[1], func_134(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			func_206(&(Local_527[1 /*17*/]), 0);
			func_136(&(Local_527[0 /*17*/]), 0, 0);
			func_136(&(Local_527[1 /*17*/]), 1, 0);
			Local_527[1 /*17*/].f_13 = func_134(55);
			iLocal_582 = 4;
			iLocal_583 = 0;
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_372[3], joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4368.33f, -2405.58f, 18.79f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("PROP_HUMAN_SEAT_CHAIR"), -4365.08f, -2417.43f, 19.85f, -73.97f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4368.91f, -2425.94f, 18.8f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_DRINKING_DRUNK"), -4368.03f, -2420.39f, 18.86f, -86.79f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4369.76f, -2423.44f, 18.82f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SMOKE"), -4366.67f, -2420.06f, 18.88f, 155.34f, -1, true, false, 0, -1f, false);
			TASK::TASK_MOUNT_ANIMAL(0, Local_211[2 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 2f, -2f, 0f, 2f, -1, 0.1f, 1, 1, 1, 1, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4363.36f, -2433.84f, 18.87f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SIT_DRINK"), -4368.68f, -2417.14f, 19.4f, 117.93f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_585 = 2;
			break;
		case 2:
			if (!func_208() && bLocal_660 == 0)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(uLocal_372[1]) >= 2 && TASK::GET_SEQUENCE_PROGRESS(uLocal_372[2]) >= 2)
				{
					func_234();
				}
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_235();
				func_236();
			}
			break;
		case 3:
			break;
	}
}

void func_68()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	func_237();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			func_22(&(Local_421[0 /*21*/]), &Local_527);
			func_22(&(Local_421[1 /*21*/]), &Local_527);
			func_22(&(Local_421[2 /*21*/]), &Local_527);
			func_22(&(Local_421[3 /*21*/]), &Local_527);
			func_215(&(uLocal_372[0]));
			func_215(&(uLocal_372[1]));
			func_215(&(uLocal_372[2]));
			func_215(&(uLocal_372[3]));
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			Local_17.f_44 = 1;
			func_216();
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.9f;
				fVar2 = 1.2f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar4, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			PED::_0x712B2C2B2471B493(uLocal_372[0], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[1], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[2], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[3], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[4], joaat("DISABLED"));
			iLocal_586 = 2;
			break;
		case 2:
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_228(5);
			}
			break;
	}
}

bool func_69()
{
	if (!func_238(Global_1395482.f_1))
	{
		return false;
	}
	return func_239(Global_1395482.f_1, 32);
}

bool func_70(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return false;
	}
	return (1 == func_240(iParam0) || 2 == func_240(iParam0));
}

float func_71(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(58), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 5:
					if (func_202(-4f, 1, uLocal_372[1], 1))
					{
						func_152(&uLocal_633);
						func_136(&(Local_527[0 /*17*/]), 0, 0);
						func_136(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[1 /*17*/].f_13 = func_134(53);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 1:
			if (func_244(&uLocal_633) >= 8f)
			{
				if (iLocal_583 == 0)
				{
					iLocal_582 = 5;
				}
			}
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(62), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_191(3);
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							func_136(&(Local_527[0 /*17*/]), 0, 0);
							func_136(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							func_136(&(Local_527[0 /*17*/]), 0, 0);
							func_136(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							func_136(&(Local_527[0 /*17*/]), 0, 0);
							func_136(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							func_136(&(Local_527[0 /*17*/]), 0, 0);
							func_136(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(61), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(63), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_191(3);
						iLocal_583 = 0;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 4:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(30);
					bLocal_666 = true;
					if (func_202(-4f, 1, 0, 0))
					{
						iLocal_583 = 5;
						bLocal_660 = true;
					}
					break;
				case 5:
					break;
			}
			break;
		case 6:
			func_206(&(Local_527[0 /*17*/]), 1);
			func_206(&(Local_527[1 /*17*/]), 1);
			func_206(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			func_136(&(Local_527[0 /*17*/]), 0, 0);
			func_136(&(Local_527[1 /*17*/]), 0, 0);
			func_136(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_73()
{
	if (func_233(uLocal_372[0], 1, 0) <= 90f)
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			iLocal_651++;
		}
	}
	if (iLocal_651 >= 3)
	{
		func_155(&(Local_17.f_5), 75);
		func_246(&(Local_17.f_5), 7f);
	}
}

void func_74()
{
	int iVar0;
	int iVar1;
	var uVar2[10];

	iVar0 = PED::GET_PED_NEARBY_PEDS(uLocal_372[0], &uVar2, -1, -1);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (((!ENTITY::IS_ENTITY_DEAD(uVar2[iVar1]) && PED::IS_PED_HUMAN(uVar2[iVar1])) && ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1])) && func_247(uVar2[iVar1]))
			{
				if (func_248(uVar2[iVar1]) && func_249(uVar2[iVar1]))
				{
					iLocal_661 = 1;
					if (uVar2[iVar1] == Global_35 && bLocal_662 == 1)
					{
						iLocal_661 = 0;
					}
					if (bLocal_662 == 0)
					{
						if (uVar2[iVar1] == Global_35)
						{
							Local_17.f_44 = 1;
							bLocal_662 = true;
						}
					}
				}
				else
				{
					iLocal_661 = 0;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iLocal_661 = 0;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar0 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar4 = func_242(&(uLocal_372[4]), &(Local_421[4 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(58), 0f, 1))
						{
							iLocal_664 = 1;
							iLocal_583 = 3;
						}
					}
					break;
				case 4:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_152(&uLocal_633);
						func_136(&(Local_527[0 /*17*/]), 1, 0);
						func_136(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(48);
						Local_527[1 /*17*/].f_13 = func_134(50);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_250();
						func_219(3);
						iLocal_583 = 5;
					}
					break;
			}
			break;
		case 1:
			if (func_244(&uLocal_633) >= 8f)
			{
				if (iLocal_583 == 0)
				{
					iLocal_582 = 5;
				}
			}
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(57), 0f, 1))
						{
							func_250();
							iLocal_664 = 1;
							bLocal_660 = true;
							func_219(3);
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(59), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_250();
						func_219(3);
						iLocal_583 = 5;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					break;
				case 5:
					bLocal_666 = true;
					iLocal_582 = 5;
					break;
			}
			break;
		case 6:
			func_206(&(Local_527[0 /*17*/]), 1);
			func_206(&(Local_527[1 /*17*/]), 1);
			func_206(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			func_136(&(Local_527[0 /*17*/]), 0, 0);
			func_136(&(Local_527[1 /*17*/]), 0, 0);
			func_136(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, func_241(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(58), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 5:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_152(&uLocal_633);
						func_136(&(Local_527[0 /*17*/]), 0, 0);
						func_136(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[1 /*17*/].f_13 = func_134(53);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(62), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					func_228(3);
					iLocal_583 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_663 = 1;
							func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(61), 0f, 1))
						{
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(63), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_228(3);
						iLocal_583 = 0;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 4:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(30);
					func_251();
					if (func_202(-4f, 1, 0, 0))
					{
						iLocal_583 = 5;
						bLocal_660 = true;
					}
					break;
				case 5:
					break;
			}
			break;
		case 6:
			func_206(&(Local_527[0 /*17*/]), 1);
			func_206(&(Local_527[1 /*17*/]), 1);
			func_206(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			func_136(&(Local_527[0 /*17*/]), 0, 0);
			func_136(&(Local_527[1 /*17*/]), 0, 0);
			func_136(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_77()
{
	if (iLocal_701 != 0)
	{
		iLocal_701 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), uLocal_372[0], 0f, 50f, 50f, 15f, -1f, 180f, false, false, -1, -1);
	}
}

void func_78()
{
}

void func_79(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 16384);
	}
	else
	{
		func_50(&(uParam0->f_1), 16384);
	}
}

void func_80(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 2048);
	}
	else
	{
		func_50(&(uParam0->f_1), 2048);
	}
}

void func_81(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 256);
	}
	else
	{
		func_50(&(uParam0->f_1), 256);
	}
}

void func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(iParam0, 16);
	}
	else
	{
		func_252(iParam0, 67108864);
		func_252(iParam0, 16);
	}
}

void func_83(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 128);
	}
	else
	{
		func_50(&(uParam0->f_1), 128);
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(iParam0, 256);
	}
	else
	{
		func_252(iParam0, 256);
	}
}

void func_85(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_50(iParam0, 268435456);
	}
	else
	{
		func_252(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_50(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_252(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_50(iParam0, 536870912);
	}
	else
	{
		func_252(iParam0, 536870912);
	}
}

var func_86(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
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

char* func_87(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_253(sParam1));
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_254(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_255(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_254(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_2;
	}
	return 0;
}

void func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_255(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_2 = iParam2;
}

bool func_92(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

char* func_93(int iParam0)
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

void func_94(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

bool func_95(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_256(iParam0, iParam1);
}

void func_96(int iParam0, bool bParam1)
{
	if (func_95(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_257(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_97(var uParam0, var uParam1)
{
	if (func_27(uParam0->f_3, 16777216))
	{
		if (func_258(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_98(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_99(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_100(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_95(iParam0, 0, 1)))
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
			fVar2 = func_99(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_259(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, iParam1, 0);
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

void func_101(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_260(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_261(uParam0);
	func_262(uParam0);
	func_263(uParam0);
	if (!func_264(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_186(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_265();
	}
	if (!func_266(uParam0->f_3) && !func_27(uParam0->f_3, 256))
	{
		func_267(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_268(uParam0->f_173);
	func_268(uParam0->f_172);
}

void func_102(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_103(int iParam0, int iParam1)
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
						return 1811628790;
						return 2016864128;
						Jump @5427; //curOff = 5153
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
						Jump @5427; //curOff = 5186
						return 1487351956;
						Jump @5427; //curOff = 5197
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
						Jump @5427; //curOff = 5272
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
						Jump @5427; //curOff = 5319
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
						Jump @5427; //curOff = 5366
						return -689015496;
						Jump @5427; //curOff = 5377
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

void func_104(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_269() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_105(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_270(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_271(iParam0, 0);
		}
	}
}

void func_106(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_272((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_270(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_107(int iParam0)
{
	if (((func_108(iParam0, 1) && func_108(iParam0, 2)) && func_108(iParam0, 8)) && func_108(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_108(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_109(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_123(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_273(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_274(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_110(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_27(iParam0, 32))
	{
		if (func_275(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_276(Global_35, &(uParam1->f_12)) };
				if (!func_45(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_277(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_187(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_188());
		if (func_278(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_190(iVar0, func_189(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_190(iVar0, func_189(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_27(iParam0, 1))
		{
			func_279(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_280(iParam0);
}

bool func_111(int iParam0, var uParam1)
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
			func_281(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_51(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_282(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_282(iParam0));
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

void func_112(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_283(iParam0))
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
			if (!func_27(iParam0, 1))
			{
				if (func_51(iParam0, 2))
				{
				}
			}
			func_284(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_285(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_285(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_70(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_113(bool bParam0, int iParam1, var uParam2, var uParam3)
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
	while (iVar0 < func_273(iParam1))
	{
		if (!func_286(iParam1, iVar0))
		{
			vVar4 = { func_109(iParam1, iVar0) };
			if (!func_45(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_118(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_287(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_45(vVar4))
	{
	}
	return vVar1;
}

int func_114(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_18("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_115(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_273(iParam0))
	{
		vVar1 = { func_109(iParam0, iVar0) };
		if (func_288(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_116(var uParam0)
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

int func_117(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_289(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_290(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_45(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_291(uParam0);
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
	return func_114(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_118(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_112(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_27(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_119(var uParam0, bool bParam1)
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

bool func_120(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_292(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_293(iParam0, uParam2))
	{
		return false;
	}
	if (!func_294(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_295(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_121(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_122(int iParam0, int iParam1, var uParam2)
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

bool func_123(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_124(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_125(int iParam0, int iParam1)
{
	if (func_296(iParam0))
	{
		return;
	}
	if (func_297(iParam0) == iParam1)
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

void func_126(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_252(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_127(int iParam0)
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

int func_128(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_298(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_299(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_299(), iVar3);
		if (func_300(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_301(iParam0) % iParam1);
	}
	return (func_302(iParam0) % iParam1);
}

bool func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_303(*uParam0, 0f, 0f, 0f))
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

int func_131(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = func_304(iParam0);
	if ((func_2(iParam2, 1) || iParam1 >= iVar1) || iParam1 < 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	else
	{
		iVar0 = iParam1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 5:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_TOBIANO");
					break;
				default:
					if (func_305())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY");
					}
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET");
					break;
				default:
					if (func_305())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO");
					}
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_AMERICANPAINT_OVERO");
					break;
				default:
					if (func_305())
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO");
					}
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_SHIRE_LIGHTGREY");
					break;
				default:
					if (func_305())
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_BAYROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MORGAN_PALOMINO");
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				default:
					if (func_305())
					{
						iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
					}
					else
					{
						iVar2 = joaat("A_C_HORSE_MUSTANG_WILDBAY");
					}
					break;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_02");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_03");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_MURFREEBROOD_MANGE_01");
					break;
			}
			break;
		case 10:
			switch (iVar0)
			{
				case 0:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
				case 1:
					iVar2 = joaat("A_C_HORSE_APPALOOSA_BLANKET");
					break;
				case 2:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY");
					break;
				case 3:
					iVar2 = joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY");
					break;
				case 4:
					iVar2 = joaat("A_C_HORSE_MUSTANG_GRULLODUN");
					break;
				default:
					iVar2 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
					break;
			}
			break;
		default:
			iVar2 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			break;
	}
	return iVar2;
}

void func_132(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_306(&((uParam0[iVar0 /*32*/])->f_1));
		func_306(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_133(char* sParam0, var uParam1)
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

char* func_134(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_DLP_V1_INITIAL_A";
				case 1:
					return "RE_DLP_V1_INITIAL_B";
				case 2:
					return "RE_DLP_V1_INITIAL_C";
				case 3:
					return "RE_DLP_V1_INITIAL_D";
				case 4:
					return "RE_DLP_V1_INITIAL_E";
				case 5:
					return "RE_DLP_V1_INITIAL_D";
				case 6:
					return "RE_DLP_V1_INITIAL_G";
				case 7:
					return "RE_DLP_V1_INITIAL_H";
				case 9:
					return "RE_DLP_V1_INITIAL_I";
				case 10:
					return "RE_DLP_V1_INITIAL_F";
				case 31:
					return "RE_DLP_V1_END_A";
				case 32:
					return "RE_DLP_V1_END_A";
				case 33:
					return "RE_DLP_V1_END_D";
				case 34:
					return "RE_DLP_V1_END_C";
				case 35:
					return "RE_DLP_V1_END_F";
				case 36:
					return "RE_DLP_V1_END_E";
				case 37:
					return "RE_DLP_V1_END_F";
				case 39:
					return "RE_DLP_V1_WARNING_B";
				case 40:
					return "RE_DLP_V1_WARNING_C";
				case 41:
					return "RE_DLP_V1_WARNING_D";
				case 42:
					return "RE_DLP_V1_WARNING_E";
				case 43:
					return "RE_DLP_V1_ATTACKED_A";
				case 44:
					return "RE_DLP_V1_ATTACKED_B";
				case 45:
					return "RE_DLP_V1_ATTACKED_C";
				case 46:
					return "RE_DLP_V1_ATTACKED_D";
				case 47:
					return "RE_DLP_V1_POS_PLAYER_A";
				case 48:
					return "RE_DLP_V1_POS_PLAYER_B";
				case 49:
					return "RE_DLP_V1_NEG_PLAYER_A";
				case 50:
					return "RE_DLP_V1_NEG_PLAYER_B";
				case 51:
					return "RE_DLP_V1_POS_PLAYER_C";
				case 52:
					return "RE_DLP_V1_POS_PLAYER_D";
				case 53:
					return "RE_DLP_V1_NEG_PLAYER_C";
				case 54:
					return "RE_DLP_V1_NEG_PLAYER_D";
				case 55:
					return "RE_DLP_V1_NEG_PLAYER_E";
				case 56:
					return "RE_DLP_V1_POS_PED_A";
				case 57:
					return "RE_DLP_V1_POS_PED_B";
				case 58:
					return "RE_DLP_V1_NEG_PED_A";
				case 59:
					return "RE_DLP_V1_NEG_PED_B";
				case 60:
					return "RE_DLP_V1_POS_PED_C";
				case 61:
					return "RE_DLP_V1_POS_PED_D";
				case 62:
					return "RE_DLP_V1_NEG_PED_C";
				case 63:
					return "RE_DLP_V1_NEG_PED_D";
				case 64:
					return "RE_DLP_V1_FOLLOWING_A";
				case 65:
					return "RE_DLP_V1_FOLLOWING_B";
				case 66:
					return "RE_DLP_V1_IN_THE_WAY_A";
				case 67:
					return "RE_DLP_V1_IN_THE_WAY_B";
				case 68:
					return "RE_DLP_V1_IN_THE_WAY_C";
				case 69:
					return "RE_DLP_V1_WARNING_DEFUSE";
				case 70:
					return "RE_DLP_V1_WARNING_ANTAGONIZE";
				case 71:
					return "SUPPORT_GENERAL";
				default:
					break;
			}
			break;
		case 1:
			switch (iLocal_15)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V2_INITIAL_A";
						case 1:
							return "RE_DLP_V2_INITIAL_B";
						case 2:
							return "RE_DLP_V2_INITIAL_C";
						case 3:
							return "RE_DLP_V2_INITIAL_D";
						case 4:
							return "RE_DLP_V2_INITIAL_E";
						case 5:
							return "RE_DLP_V2_INITIAL_F";
						case 6:
							return "RE_DLP_V2_INITIAL_G";
						case 7:
							return "RE_DLP_V2_INITIAL_H";
						case 9:
							return "RE_DLP_V2_INITIAL_I";
						case 10:
							return "RE_DLP_V2_INITIAL_J";
						case 11:
							return "RE_DLP_V2_INITIAL_J";
						case 12:
							return "RE_DLP_V2_INITIAL_L";
						case 13:
							return "RE_DLP_V2_INITIAL_N";
						case 14:
							return "RE_DLP_V2_INITIAL_N";
						case 15:
							return "RE_DLP_V2_INITIAL_L";
						case 16:
							return "RE_DLP_V2_INITIAL_P";
						case 18:
							return "RE_DLP_V2_INITIAL_P";
						case 19:
							return "RE_DLP_V2_INITIAL_R";
						case 20:
							return "RE_DLP_V2_INITIAL_O";
						case 21:
							return "RE_DLP_V2_INITIAL_S";
						case 22:
							return "RE_DLP_V2_INITIAL_Q";
						case 23:
							return "RE_DLP_V2_INITIAL_U";
						case 24:
							return "RE_DLP_V2_INITIAL_W";
						case 25:
							return "RE_DLP_V2_INITIAL_X";
						case 26:
							return "RE_DLP_V2_INITIAL_Z";
						case 27:
							return "RE_DLP_V2_INITIAL_Z";
						case 28:
							return "RE_DLP_V2_INITIAL_AA";
						case 29:
							return "RE_DLP_V2_INITIAL_ZB";
						case 38:
							return "RE_DLP_V2_WARNING_A";
						case 39:
							return "RE_DLP_V2_WARNING_B";
						case 40:
							return "RE_DLP_V2_WARNING_C";
						case 43:
							return "RE_DLP_V2_ATTACKED_A";
						case 44:
							return "RE_DLP_V2_ATTACKED_B";
						case 45:
							return "RE_DLP_V2_ATTACKED_A";
						case 46:
							return "RE_DLP_V2_ATTACKED_A";
						case 47:
							return "RE_DLP_V2_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V2_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V2_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V2_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V2_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V2_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V2_POS_PED_A";
						case 57:
							return "RE_DLP_V2_POS_PED_B";
						case 58:
							return "RE_DLP_V2_NEG_PED_A";
						case 59:
							return "RE_DLP_V2_NEG_PED_B";
						case 64:
							return "RE_DLP_V2_FOLLOWING_A";
						case 65:
							return "RE_DLP_V2_FOLLOWING_B";
						case 66:
							return "RE_DLP_V2_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V2_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V2_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V2_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V2_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V3_INITIAL_A";
						case 1:
							return "RE_DLP_V3_INITIAL_B";
						case 2:
							return "RE_DLP_V3_INITIAL_C";
						case 3:
							return "RE_DLP_V3_INITIAL_D";
						case 4:
							return "RE_DLP_V3_INITIAL_E";
						case 5:
							return "RE_DLP_V3_INITIAL_F";
						case 6:
							return "RE_DLP_V3_INITIAL_G";
						case 7:
							return "RE_DLP_V3_INITIAL_H";
						case 9:
							return "RE_DLP_V3_INITIAL_I";
						case 10:
							return "RE_DLP_V3_INITIAL_J";
						case 11:
							return "RE_DLP_V3_INITIAL_K";
						case 12:
							return "RE_DLP_V3_INITIAL_L";
						case 13:
							return "RE_DLP_V3_INITIAL_M";
						case 14:
							return "RE_DLP_V3_INITIAL_N";
						case 15:
							return "RE_DLP_V3_INITIAL_O";
						case 38:
							return "RE_DLP_V3_WARNING_A";
						case 39:
							return "RE_DLP_V3_WARNING_B";
						case 40:
							return "RE_DLP_V3_WARNING_C";
						case 43:
							return "RE_DLP_V3_ATTACKED_A";
						case 44:
							return "RE_DLP_V3_ATTACKED_B";
						case 45:
							return "RE_DLP_V3_ATTACKED_C";
						case 46:
							return "RE_DLP_V3_ATTACKED_D";
						case 47:
							return "RE_DLP_V3_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V3_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V3_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V3_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V3_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V3_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V3_POS_PED_A";
						case 57:
							return "RE_DLP_V3_POS_PED_B";
						case 58:
							return "RE_DLP_V3_NEG_PED_A";
						case 59:
							return "RE_DLP_V3_NEG_PED_B";
						case 64:
							return "RE_DLP_V3_FOLLOWING_A";
						case 65:
							return "RE_DLP_V3_FOLLOWING_B";
						case 66:
							return "RE_DLP_V3_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V3_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V3_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V3_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V3_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V4_INITIAL_A";
						case 1:
							return "RE_DLP_V4_INITIAL_B";
						case 2:
							return "RE_DLP_V4_INITIAL_C";
						case 3:
							return "RE_DLP_V4_INITIAL_D";
						case 4:
							return "RE_DLP_V4_INITIAL_E";
						case 5:
							return "RE_DLP_V4_INITIAL_F";
						case 6:
							return "RE_DLP_V4_INITIAL_G";
						case 7:
							return "RE_DLP_V4_INITIAL_H";
						case 8:
							return "RE_DLP_V4_INITIAL_H2";
						case 9:
							return "RE_DLP_V4_INITIAL_I";
						case 10:
							return "RE_DLP_V4_INITIAL_J";
						case 11:
							return "RE_DLP_V4_INITIAL_K";
						case 12:
							return "RE_DLP_V4_INITIAL_L";
						case 13:
							return "RE_DLP_V4_INITIAL_M";
						case 14:
							return "RE_DLP_V4_INITIAL_N";
						case 15:
							return "RE_DLP_V4_INITIAL_O";
						case 16:
							return "RE_DLP_V4_INITIAL_P";
						case 17:
							return "RE_DLP_V4_INITIAL_P2";
						case 18:
							return "RE_DLP_V4_INITIAL_Q";
						case 19:
							return "RE_DLP_V4_INITIAL_R";
						case 20:
							return "RE_DLP_V4_INITIAL_S";
						case 21:
							return "RE_DLP_V4_INITIAL_T";
						case 22:
							return "RE_DLP_V4_INITIAL_U";
						case 23:
							return "RE_DLP_V4_INITIAL_V";
						case 24:
							return "RE_DLP_V4_INITIAL_W";
						case 25:
							return "RE_DLP_V4_INITIAL_X";
						case 26:
							return "RE_DLP_V4_INITIAL_Y";
						case 27:
							return "RE_DLP_V4_INITIAL_Z";
						case 28:
							return "RE_DLP_V4_INITIAL_ZA";
						case 29:
							return "RE_DLP_V4_INITIAL_ZA";
						case 30:
							return "RE_DLP_V4_INITIAL_ZC";
						case 38:
							return "RE_DLP_V4_WARNING_A";
						case 39:
							return "RE_DLP_V4_WARNING_B";
						case 40:
							return "RE_DLP_V4_WARNING_C";
						case 43:
							return "RE_DLP_V4_ATTACKED_A";
						case 44:
							return "RE_DLP_V4_ATTACKED_B";
						case 45:
							return "RE_DLP_V4_ATTACKED_C";
						case 46:
							return "RE_DLP_V4_ATTACKED_D";
						case 47:
							return "RE_DLP_V4_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V4_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V4_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V4_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V4_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V4_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V4_POS_PED_A";
						case 57:
							return "RE_DLP_V4_POS_PED_B";
						case 58:
							return "RE_DLP_V4_NEG_PED_A";
						case 59:
							return "RE_DLP_V4_NEG_PED_B";
						case 64:
							return "RE_DLP_V4_FOLLOWING_A";
						case 65:
							return "RE_DLP_V4_FOLLOWING_B";
						case 66:
							return "RE_DLP_V4_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V4_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V4_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V4_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V4_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_DLP_V5_INITIAL_A";
				case 1:
					return "RE_DLP_V5_INITIAL_B";
				case 2:
					return "RE_DLP_V5_INITIAL_C";
				case 3:
					return "RE_DLP_V5_INITIAL_D";
				case 4:
					return "RE_DLP_V5_INITIAL_E";
				case 5:
					return "RE_DLP_V5_INITIAL_F";
				case 6:
					return "RE_DLP_V5_INITIAL_C";
				case 7:
					return "RE_DLP_V5_INITIAL_H";
				case 9:
					return "RE_DLP_V5_INITIAL_H";
				case 10:
					return "RE_DLP_V5_INITIAL_J";
				case 11:
					return "RE_DLP_V5_INITIAL_K";
				case 12:
					return "RE_DLP_V5_INITIAL_L";
				case 13:
					return "RE_DLP_V5_INITIAL_M";
				case 14:
					return "RE_DLP_V5_INITIAL_N";
				case 15:
					return "RE_DLP_V5_INITIAL_O";
				case 31:
					return "RE_DLP_V5_END_A";
				case 32:
					return "RE_DLP_V5_END_B";
				case 33:
					return "RE_DLP_V5_END_C";
				case 34:
					return "RE_DLP_V5_END_D";
				case 35:
					return "RE_DLP_V5_END_E";
				case 36:
					return "RE_DLP_V5_END_F";
				case 38:
					return "RE_DLP_V5_WARNING_A";
				case 39:
					return "RE_DLP_V5_WARNING_B";
				case 40:
					return "RE_DLP_V5_WARNING_C";
				case 41:
					return "RE_DLP_V5_WARNING_D";
				case 42:
					return "RE_DLP_V5_WARNING_E";
				case 43:
					return "RE_DLP_V5_ATTACKED_A";
				case 44:
					return "RE_DLP_V5_ATTACKED_B";
				case 45:
					return "RE_DLP_V5_ATTACKED_C";
				case 46:
					return "RE_DLP_V5_ATTACKED_D";
				case 47:
					return "RE_DLP_V5_POS_PLAYER_A";
				case 48:
					return "RE_DLP_V5_POS_PLAYER_B";
				case 49:
					return "RE_DLP_V5_NEG_PLAYER_A";
				case 50:
					return "RE_DLP_V5_NEG_PLAYER_B";
				case 51:
					return "RE_DLP_V5_POS_PLAYER_C";
				case 52:
					return "RE_DLP_V5_POS_PLAYER_D";
				case 53:
					return "RE_DLP_V5_NEG_PLAYER_C";
				case 54:
					return "RE_DLP_V5_NEG_PLAYER_D";
				case 55:
					return "RE_DLP_V5_NEG_PLAYER_E";
				case 56:
					return "RE_DLP_V5_POS_PED_A";
				case 57:
					return "RE_DLP_V5_POS_PED_B";
				case 58:
					return "RE_DLP_V5_NEG_PED_A";
				case 59:
					return "RE_DLP_V5_NEG_PED_B";
				case 60:
					return "RE_DLP_V5_POS_PED_C";
				case 61:
					return "RE_DLP_V5_POS_PED_D";
				case 62:
					return "RE_DLP_V5_NEG_PED_C";
				case 63:
					return "RE_DLP_V5_NEG_PED_D";
				case 64:
					return "RE_DLP_V5_FOLLOWING_A";
				case 65:
					return "RE_DLP_V5_FOLLOWING_B";
				case 66:
					return "RE_DLP_V5_IN_THE_WAY_A";
				case 67:
					return "RE_DLP_V5_IN_THE_WAY_B";
				case 68:
					return "RE_DLP_V5_IN_THE_WAY_C";
				case 69:
					return "RE_DLP_V5_WARNING_DEFUSE";
				case 70:
					return "RE_DLP_V5_WARNING_ANTAGONIZE";
				case 71:
					return "SUPPORT_GENERAL";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_135(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_272(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_307(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_308(iParam0->f_6, iParam0->f_5, 0);
			}
			func_309(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_245(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_136(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_310(iParam0, 13))
	{
		func_311(iParam0, 0);
	}
	else
	{
		func_312(iParam0, 0);
	}
	if (func_272(iParam0->f_6))
	{
		if (bParam2)
		{
			func_270(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_137(var uParam0)
{
	if (!func_313(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_313(uParam0->f_12))
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

bool func_138()
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

bool func_139(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_314(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_315(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_316(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_317(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_318(uParam0->f_11, 0);
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
					Var2 = { func_314(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_315(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_319(&(uParam0->f_22)));
					Var2 = { func_314(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_315(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_316(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_320(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_321(*uParam1, &(uParam0->f_23), 0);
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

int func_140(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_322(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((func_323(iParam0, 16777216) && func_323(iParam0, 33554432)) && func_323(iParam0, 268435456))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_PISTOL"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REVOLVER"), iParam1, iParam2, 0);
	iVar2 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
	iVar3 = 0;
	if (!func_323(iParam0, 33554432))
	{
		iVar3 = iVar1;
	}
	if (!func_323(iParam0, 16777216))
	{
		if (!func_324(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar0, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar0;
		}
	}
	if (!func_323(iParam0, 268435456) && func_325(iVar2))
	{
		if (!func_324(iVar3) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar3, 0))
		{
			iVar3 = iVar2;
		}
	}
	if (!func_324(iVar3))
	{
		return joaat("WEAPON_REVOLVER_CATTLEMAN");
	}
	return iVar3;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_326(iParam3, 1);
	bVar1 = func_326(iParam3, 2);
	bVar2 = !func_326(iParam3, 4);
	bVar3 = func_326(iParam3, 8);
	bVar4 = !func_326(iParam3, 16);
	bVar5 = func_326(iParam3, 32);
	bVar6 = func_326(iParam3, 64);
	return func_327(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (((func_323(iParam0, 8388608) && func_323(iParam0, 1048576)) && func_323(iParam0, 2097152)) && func_323(iParam0, 4194304))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar0 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_REPEATER"), iParam1, iParam2, 0);
	iVar1 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_RIFLE"), iParam1, iParam2, 0);
	iVar2 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SNIPER"), iParam1, iParam2, 0);
	iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
	while (func_328(iVar3))
	{
		iVar4++;
		if (iVar4 >= 10)
		{
			iVar3 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
			Jump @189; //curOff = 164
		}
		else
		{
			iVar3 = WEAPON::_0xF8204EF17410BF43(joaat("GROUP_SHOTGUN"), iParam1, iParam2, 0);
		}
	}
	if (!func_325(iVar3))
	{
		iVar3 = joaat("WEAPON_REPEATER_CARBINE");
	}
	iVar5 = 0;
	if (!func_323(iParam0, 8388608))
	{
		iVar5 = iVar0;
	}
	if (!func_323(iParam0, 1048576))
	{
		if (!func_324(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar1, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar1;
		}
	}
	if (!func_323(iParam0, 2097152))
	{
		if (!func_324(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar3, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar3;
		}
	}
	if (!func_323(iParam0, 4194304))
	{
		if (!func_324(iVar5) || WEAPON::_0xF2F585411E748B9C(iVar2, 0) > WEAPON::_0xF2F585411E748B9C(iVar5, 0))
		{
			iVar5 = iVar2;
		}
	}
	if (!func_324(iVar5))
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return iVar5;
}

bool func_144(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_329(iParam0);
		return func_330(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_329(iParam0);
		func_330(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

void func_146(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 8);
	}
	else
	{
		func_50(&(uParam0->f_1), 8);
	}
}

void func_147(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 4);
	}
	else
	{
		func_50(&(uParam0->f_1), 4);
	}
}

void func_148(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 2);
	}
	else
	{
		func_50(&(uParam0->f_1), 2);
	}
}

void func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_252(&(uParam0->f_1), 16);
	}
	else
	{
		func_50(&(uParam0->f_1), 16);
	}
}

void func_150(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_92(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, iParam4, iParam5, iParam6, iParam7);
		if (func_92(iParam0))
		{
		}
	}
}

bool func_151(var uParam0)
{
	return func_331(*uParam0, 1);
}

void func_152(var uParam0)
{
	func_332(uParam0, 0f);
}

float func_153(var uParam0)
{
	if (!func_151(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_333(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_334() - uParam0->f_1);
}

Vector3 func_154(var uParam0)
{
	return uParam0->f_51;
}

void func_155(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_156()
{
	return Global_1935436 == 2;
}

void func_157(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_158(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_27(iParam0, 2))
	{
		func_336(iParam0, func_335(iParam1));
	}
	else
	{
		func_338(iParam0, func_337());
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
	func_339(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_340(iParam0, 0);
	func_341(iParam0);
	func_342(1);
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
	if (!func_27(iParam0, 16))
	{
		func_159(iParam0, 0, 0, 0, 0);
	}
}

void func_159(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_343() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_123(iVar1) && !func_27(iVar1, iParam2)) && (!bParam3 || !func_176(iVar1))) && (!bParam4 || !func_344(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_345(iVar0);
			}
		}
		iVar0++;
	}
}

int func_160(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_161(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_278(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_27(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_346(2, -1, 0, 0, 0);
			}
			else
			{
				func_346(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_346(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_347(1, uParam0->f_177))
				{
					func_348(16, uParam0->f_177);
					func_349(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_350(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_346(8, -1, 0, 0, 0);
	}
}

int func_162()
{
	if (func_324(Global_1935630.f_44))
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
		else if (func_351())
		{
			return 1;
		}
	}
	return 0;
}

bool func_163(int iParam0, int iParam1, bool bParam2, int iParam3)
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

float func_164(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_27(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_27(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_27(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_27(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_27(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_27(uParam0->f_3, 1))
		{
		}
		else if (func_27(uParam0->f_3, 2))
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

int func_165(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
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
			else if (func_352(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_353(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_334() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_166(var uParam0, int iParam1, float fParam2)
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
	func_53(uParam0);
	return true;
}

bool func_167()
{
	return (Global_1894899 & 1 != 0 && func_179() != -1);
}

bool func_168(var uParam0, float fParam1)
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

int func_169(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_354(bParam1, bParam2, bParam3);
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

bool func_170(int iParam0)
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
	iVar0 = func_356(func_355());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_171(int iParam0, int iParam1)
{
	return (func_160(iParam0) && iParam1) != 0;
}

bool func_172(int iParam0)
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
	if (iParam0 & 1 == 1 && func_357(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_358(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_359(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_360(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_361(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_362(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_363(iVar3))
	{
		return true;
	}
	return false;
}

bool func_173(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_364(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
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

bool func_175(int iParam0, bool bParam1, bool bParam2)
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
		if (func_365())
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
		iVar0 = func_366(Global_1898164.f_1[0 /*5*/]);
		if (func_367(iVar0) && func_368(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_369(Global_1898164.f_1[0 /*5*/]))
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

bool func_176(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	if (func_370(64) && func_371(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_177(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_372(iVar0) || func_373(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_178()
{
	return Global_1894899 & 4 != 0;
}

int func_179()
{
	return Global_1894899.f_2;
}

int func_180(int iParam0)
{
	if (!func_374(iParam0))
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

bool func_181(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_182(vector3 vParam0, int iParam3)
{
	if (!func_181(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_183(vector3 vParam0)
{
	float fVar0;

	if (func_45(vParam0))
	{
		return false;
	}
	fVar0 = func_99(func_167(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_184(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
						func_152(uParam0);
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
		func_152(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_151(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_46(uParam0, fParam2))
		{
			return true;
		}
		if (func_151(uParam0))
		{
			func_375(uParam0);
		}
	}
	return false;
}

bool func_185(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_186(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_45(vParam0))
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
			if (func_288(vVar2, vParam0, 2f, 1))
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

float func_187(int iParam0)
{
	if (!func_123(iParam0))
	{
		return 0f;
	}
	if (!func_376(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_188()
{
	return "unnamed";
}

char* func_189(int iParam0)
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

int func_190(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_279(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_191(int iParam0)
{
	iLocal_579 = iParam0;
}

int func_192()
{
	if ((func_377(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		Local_17.f_46 = 1;
		func_191(3);
		return 1;
	}
	return 0;
}

void func_193(int iParam0)
{
	float fVar0;
	float fVar1;

	fVar1 = 1f;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 2f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 4f;
		}
	}
	if (!func_151(&uLocal_605) && ((((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[1], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[3], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)))
	{
		func_152(&uLocal_605);
		bLocal_659 = true;
	}
	if (func_244(&uLocal_605) >= fVar1)
	{
		if ((((((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[1], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[3], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) && bLocal_659 == 1) && func_380())
		{
			if (iLocal_654 == 0)
			{
			}
			iLocal_654 = 1;
			func_225(30);
		}
		else
		{
			if (iLocal_654 == 1)
			{
			}
			iLocal_654 = 0;
			bLocal_659 = false;
			func_375(&uLocal_605);
		}
	}
}

void func_194()
{
	switch (iLocal_597)
	{
		case 0:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.75f, 1, -1f, 0);
			}
			else
			{
				TASK::_0xBAAB791AA72C2821(uLocal_372[0], 1.75f);
			}
			if (func_233(uLocal_372[0], 1, 1) <= 50f)
			{
				iLocal_597 = 1;
			}
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 2.001f, 1, -1f, 0);
			}
			else
			{
				TASK::_0xBAAB791AA72C2821(uLocal_372[0], 2.001f);
			}
			break;
	}
}

bool func_195()
{
	switch (iLocal_587)
	{
		case 0:
			if (bLocal_666 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), vLocal_674, true) <= fLocal_653)
				{
					iLocal_587 = 1;
				}
			}
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 30f, 30f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), 30f, 30f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), 30f, 30f, 2f, false, true, 0))
			{
				if (!func_381() && func_380())
				{
					iLocal_587 = 2;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_196()
{
	func_225(70);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_372[0], 1.5f);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	switch (iLocal_644)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				bLocal_660 = true;
				iLocal_582 = 5;
				func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
				func_245(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				func_204(uLocal_372[1], Global_35, func_134(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], Global_35, func_134(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
				iLocal_664 = 1;
			}
			break;
		case 2:
			func_191(3);
			iLocal_644++;
			break;
	}
}

float func_197(vector3 vParam0, int iParam3)
{
	return func_382(Global_35, vParam0, iParam3);
}

bool func_198(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_164(uParam0, bVar1);
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
	if (uParam0->f_178 && func_162())
	{
		bVar1 = true;
		fVar3 = func_99(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_165(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_165(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_166(&(uParam0->f_121), iParam4, fParam1))
		{
			func_53(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_103(uParam0->f_3, uParam0->f_185), 0);
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
						func_52(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_53(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_103(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_199()
{
	fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
}

void func_200()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (func_233(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[1], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[0], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_201()
{
	if (iLocal_661 == 1)
	{
		if (func_244(&uLocal_611) >= 7f || !func_151(&uLocal_611))
		{
			func_152(&uLocal_611);
			func_384();
			switch (iLocal_14)
			{
				case 0:
				case 2:
					if (iLocal_670 == 0)
					{
						if (bLocal_662)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
							Local_17.f_44 = 1;
							func_206(&(Local_527[0 /*17*/]), 0);
							func_206(&(Local_527[1 /*17*/]), 0);
							func_136(&(Local_527[0 /*17*/]), 1, 0);
							func_136(&(Local_527[1 /*17*/]), 1, 0);
							func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
							func_245(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
							Local_527[0 /*17*/].f_13 = func_134(69);
							Local_527[1 /*17*/].f_13 = func_134(70);
							iLocal_582 = 3;
							iLocal_583 = 0;
							iLocal_670 = 1;
						}
					}
					break;
			}
		}
	}
}

bool func_202(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_385(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_386(fParam0))
	{
		return false;
	}
	return true;
}

void func_203()
{
	func_225(50);
	switch (iLocal_647)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				func_152(&uLocal_633);
				Local_17.f_44 = 1;
				func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				func_206(&(Local_527[0 /*17*/]), 0);
				func_206(&(Local_527[1 /*17*/]), 0);
				func_136(&(Local_527[0 /*17*/]), 1, 0);
				func_136(&(Local_527[1 /*17*/]), 1, 0);
				func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				func_245(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
				Local_527[0 /*17*/].f_13 = func_134(69);
				Local_527[1 /*17*/].f_13 = func_134(70);
				iLocal_582 = 3;
				iLocal_583 = 0;
				func_387(uLocal_372[0]);
				func_204(uLocal_372[3], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_647++;
			}
			break;
		case 1:
			if (!func_388(PLAYER::PLAYER_ID(), uLocal_372[3], &(Local_421[3 /*21*/])) || func_202(0f, 1, 0, 0))
			{
				if (func_202(-3f, 1, 0, 0))
				{
					func_152(&uLocal_633);
					func_387(uLocal_372[0]);
					TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(uLocal_372[3], Global_35, 1, -1082130432 /* Float: -1f */);
					func_204(uLocal_372[3], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (iLocal_663 == 0)
					{
						func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
						func_206(&(Local_527[0 /*17*/]), 0);
						func_206(&(Local_527[1 /*17*/]), 0);
						func_136(&(Local_527[0 /*17*/]), 1, 0);
						func_136(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(52);
						Local_527[1 /*17*/].f_13 = func_134(54);
						iLocal_582 = 3;
					}
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[3], 1) && func_202(-1f, 1, 0, 0))
			{
				func_191(3);
				iLocal_647++;
			}
			break;
	}
}

bool func_204(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_389(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_205()
{
	switch (Local_17.f_51.f_4)
	{
		case 15:
		case 16:
		case 20:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2320.43f, -3089.87f, -6.34f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_PEE"), -2321.85f, -3096.19f, -7.97f, -145f, 20000, true, false, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -2319.07f, -3093.44f, -7.21f, -27.89f, 30000, true, false, 0, -1f, false);
			TASK::TASK_PAUSE(0, 200);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2310.82f, -3084.48f, -4.9f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2312.19f, -3086.96f, -5.38f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2314.98f, -3084.3f, -5.1f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			break;
		case 14:
		case 18:
		case 19:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2754.68f, -2366.8f, 43.12f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_PEE"), -2752.66f, -2361.89f, 43.38f, 24.65f, 20000, true, false, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -2753.99f, -2364.96f, 43.13f, -112.44f, 30000, true, false, 0, -1f, false);
			TASK::TASK_PAUSE(0, 200);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2739.35f, -2360.13f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2737.8f, -2361.36f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2735.92f, -2362.86f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			break;
	}
}

void func_206(int* iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_310(iParam0, 4))
		{
			func_270(&(iParam0->f_6), 1, 1);
			func_311(iParam0, 4);
		}
	}
	else if (func_310(iParam0, 4))
	{
		func_312(iParam0, 4);
		func_311(iParam0, 14);
	}
}

void func_207()
{
	var uVar0[3];
	int iVar4;

	uVar0[0] = uLocal_372[1];
	uVar0[1] = uLocal_372[2];
	uVar0[2] = uLocal_372[3];
	iVar4 = 1;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (iLocal_652 < 4)
		{
			if (!PED::IS_PED_ON_MOUNT(uVar0[iVar4]))
			{
				if (!func_217(uVar0[iVar4], -76381094))
				{
					TASK::TASK_USE_SCENARIO_POINT(uVar0[iVar4], iLocal_691[iLocal_652], 0, 58000, true, false, 0, false, -1f, false);
					iLocal_652++;
				}
			}
		}
		iVar4++;
	}
}

bool func_208()
{
	int iVar0;
	vector3 vVar1;

	if (PED::GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_671 = { 0f, 0f, 0f };
	}
	else
	{
		vLocal_671 = { 2f, 2f, 2f };
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uLocal_372[iVar0], true, false) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, Global_36, true) <= 15f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[iVar0], Global_35, 17))
			{
				return true;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vVar1, vLocal_671, false, true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_209()
{
	switch (iLocal_646)
	{
		case 0:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				func_204(uLocal_372[2], uLocal_372[2], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				func_204(uLocal_372[1], uLocal_372[1], func_134(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				func_204(uLocal_372[2], uLocal_372[2], func_134(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
	}
}

void func_210()
{
	func_225(50);
	switch (iLocal_648)
	{
		case 0:
			if (func_202(-4f, 1, uLocal_372[0], 1) && func_202(0f, 1, Global_35, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				func_204(uLocal_372[0], Global_35, func_134(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_660 = true;
				iLocal_648++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], Global_35, func_134(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_648++;
			}
			break;
		case 2:
			if (func_202(-6f, 1, 0, 0))
			{
				iLocal_664 = 1;
				func_191(3);
				iLocal_648++;
			}
			break;
	}
}

void func_211()
{
	switch (iLocal_588[0])
	{
		case 0:
			func_22(&(Local_421[0 /*21*/]), &Local_527);
			func_215(&(uLocal_372[0]));
			func_152(&(vLocal_617[0 /*3*/]));
			func_142(uLocal_372[0], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[0] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[0 /*3*/])) >= 0.8f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[0], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 1000f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[0], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[0 /*3*/]));
				iLocal_588[0] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[0], false) || func_244(&(vLocal_617[0 /*3*/])) >= 1f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[0] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			iLocal_588[0] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[1])
	{
		case 0:
			func_22(&(Local_421[1 /*21*/]), &Local_527);
			func_215(&(uLocal_372[1]));
			func_152(&(vLocal_617[1 /*3*/]));
			func_142(uLocal_372[1], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[1] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[1 /*3*/])) >= 0.3f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[1], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 1500f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[1], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[1 /*3*/]));
				iLocal_588[1] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[1], false) || func_244(&(vLocal_617[1 /*3*/])) >= 1.5f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[1] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			iLocal_588[1] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[2])
	{
		case 0:
			func_22(&(Local_421[2 /*21*/]), &Local_527);
			func_215(&(uLocal_372[2]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			func_142(uLocal_372[2], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_152(&(vLocal_617[2 /*3*/]));
			iLocal_588[2] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[2 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[2], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 2000f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[2], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[2 /*3*/]));
				iLocal_588[2] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[2], false) || func_244(&(vLocal_617[2 /*3*/])) >= 2f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[2] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			iLocal_588[2] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[3])
	{
		case 0:
			func_22(&(Local_421[3 /*21*/]), &Local_527);
			func_215(&(uLocal_372[3]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[3], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			func_142(uLocal_372[3], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_152(&(vLocal_617[3 /*3*/]));
			iLocal_588[3] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[3 /*3*/])) >= 0f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[3], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 2500f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[3], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[3 /*3*/]));
				iLocal_588[3] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[3], false) || func_244(&(vLocal_617[3 /*3*/])) >= 2.5f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[3] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_588[3] = 4;
			break;
		case 4:
			break;
	}
}

void func_212()
{
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[0 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[1 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], 0.4f, 0.4f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[2 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], 0.8f, 0.8f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[3 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], 1.2f, 1.2f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
}

void func_213()
{
	int iVar0;

	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				func_391(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_214()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) < 2f)
		{
			return;
		}
	}
	else
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			iVar0 = 3;
			iVar1 = 4;
			break;
		case 1:
			iVar0 = 2;
			iVar1 = 4;
			break;
		case 2:
			iVar0 = 4;
			iVar1 = 2;
			break;
	}
	switch (iLocal_680)
	{
		case 0:
			if (func_202(0f, 1, uLocal_372[iVar0], 1))
			{
				func_204(uLocal_372[iVar0], Global_35, "CALLOUT_GET_FLEEING_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_680++;
				func_152(&uLocal_681);
				iLocal_684 = MISC::GET_RANDOM_INT_IN_RANGE(8, 15);
			}
			break;
		case 1:
			if (func_244(&uLocal_681) > IntToFloat(iLocal_684))
			{
				iLocal_680++;
			}
			break;
		case 2:
			if (func_202(0f, 1, uLocal_372[iVar1], 1))
			{
				func_204(uLocal_372[iVar1], Global_35, "CALLOUT_GET_FLEEING_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_680++;
			}
			break;
	}
}

void func_215(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_216()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
}

bool func_217(int iParam0, int iParam1)
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

bool func_218()
{
	if (((((PED::IS_PED_DEAD_OR_DYING(uLocal_372[0], true) || PED::IS_PED_HOGTIED(uLocal_372[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[1], true) || PED::IS_PED_HOGTIED(uLocal_372[1]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[2], true) || PED::IS_PED_HOGTIED(uLocal_372[2]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[3], true) || PED::IS_PED_HOGTIED(uLocal_372[3]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[4], true) || PED::IS_PED_HOGTIED(uLocal_372[4])))
	{
		return true;
	}
	return false;
}

void func_219(int iParam0)
{
	iLocal_580 = iParam0;
}

int func_220()
{
	if ((func_377(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		if (iLocal_601 != 8192)
		{
			Local_17.f_46 = 1;
			func_219(3);
			return 1;
		}
	}
	return 0;
}

void func_221()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (func_233(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if (func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_392(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 15:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 16:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 17:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[1], func_134(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 18:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[4], func_134(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 19:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[3], func_134(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 20:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[2], func_134(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 21:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[3], func_134(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 22:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[1], func_134(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 23:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 24:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[1], func_134(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 25:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 26:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 27:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_222()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (func_233(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_392(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_223()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (func_233(uLocal_372[0], 1, 1) <= 80f && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_392(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[0], 1);
				iLocal_645++;
			}
			break;
		case 1:
			if (func_202(0f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_392(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				iLocal_645++;
			}
			break;
		case 2:
			if (func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_392(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				iLocal_645++;
			}
			break;
		case 3:
			if (func_202(-3f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 4:
			if (func_202(-5f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 5:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 6:
			if (func_202(-2f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 7:
			if (func_202(-2f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 8:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 9:
			if (func_202(-3f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 10:
			if (func_202(-2f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 11:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 12:
			if (func_202(-5f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 13:
			if (func_202(-2f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 14:
			if (func_202(-3f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 15:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 16:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 17:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 18:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 19:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 20:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 21:
			if (func_202(-2f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 22:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 23:
			if (func_202(-5f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 24:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 25:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 26:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 27:
			if (func_202(-1f, 1, 0, 0) && func_202(0f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 28:
			if (func_202(-1f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 29:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[0], func_134(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 30:
			if (func_202(-1f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
	}
}

void func_224()
{
	func_225(60);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	PED::SET_PED_RESET_FLAG(uLocal_372[0], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[1], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[2], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[3], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[4], 27, true);
	switch (iLocal_647)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
			Local_17.f_44 = 1;
			bLocal_660 = true;
			func_206(&(Local_527[0 /*17*/]), 0);
			func_206(&(Local_527[1 /*17*/]), 0);
			switch (iLocal_15)
			{
				case 1:
					func_136(&(Local_527[0 /*17*/]), 0, 0);
					func_136(&(Local_527[1 /*17*/]), 0, 0);
					break;
				default:
					func_136(&(Local_527[0 /*17*/]), 1, 0);
					func_136(&(Local_527[1 /*17*/]), 1, 0);
					break;
			}
			func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
			func_245(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
			Local_527[0 /*17*/].f_13 = func_134(69);
			Local_527[1 /*17*/].f_13 = func_134(70);
			iLocal_582 = 3;
			iLocal_583 = 0;
			func_393();
			iLocal_647++;
			break;
		case 1:
			func_393();
			if (iLocal_583 == 0)
			{
				func_394(uLocal_372[1], 500);
				func_204(uLocal_372[1], Global_35, func_134(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_647++;
				func_152(&uLocal_636);
			}
			break;
		case 2:
			func_393();
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				if (func_244(&uLocal_636) > 2f)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
					{
						iLocal_378[0] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
					{
						iLocal_378[1] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
					{
						iLocal_378[2] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
					{
						iLocal_378[3] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[4]))
					{
						iLocal_378[4] = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[4]);
					}
					func_204(uLocal_372[1], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					func_152(&uLocal_614);
					switch (iLocal_15)
					{
						case 1:
							func_136(&(Local_527[0 /*17*/]), 1, 0);
							func_136(&(Local_527[1 /*17*/]), 1, 0);
							break;
					}
					iLocal_647++;
				}
			}
			else
			{
				func_152(&uLocal_636);
			}
			break;
		case 3:
			func_393();
			if (func_202(-4f, 1, Global_35, 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[0], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_152(&uLocal_614);
				iLocal_647++;
			}
			break;
		case 4:
			func_393();
			func_214();
			if ((((func_233(uLocal_372[1], 1, 1) <= 20f || func_233(uLocal_372[0], 1, 1) <= 20f) || func_233(uLocal_372[2], 1, 1) <= 20f) || func_233(uLocal_372[3], 1, 1) <= 20f) || func_233(uLocal_372[4], 1, 1) <= 20f)
			{
				if ((func_202(-4f, 1, Global_35, 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, uLocal_372[0], 1))
				{
					if (func_153(&uLocal_614) >= 7f || (bLocal_666 && func_153(&uLocal_614) >= 2f))
					{
						func_389(uLocal_372[3], Global_35, func_134(71), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 0, 1, 1744022339, 1, 1, 0, 0);
						iLocal_664 = 1;
						func_152(&uLocal_614);
						iLocal_647++;
					}
				}
				else
				{
					func_152(&uLocal_614);
				}
			}
			break;
		case 5:
			func_219(3);
			iLocal_647++;
			break;
	}
}

void func_225(int iParam0)
{
	func_390(uLocal_372[0], Global_35, &uLocal_384, -1, iParam0);
	func_390(uLocal_372[1], Global_35, &uLocal_384, -1, iParam0);
	func_390(uLocal_372[2], Global_35, &uLocal_384, -1, iParam0);
	func_390(uLocal_372[3], Global_35, &uLocal_384, -1, iParam0);
	func_390(uLocal_372[4], Global_35, &uLocal_384, -1, iParam0);
}

void func_226()
{
	int iVar0;

	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				func_391(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_227(int iParam0, int iParam1, float fParam2)
{
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	TASK::OPEN_SEQUENCE_TASK(&iParam1);
	if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
	}
	else
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
	}
	TASK::CLOSE_SEQUENCE_TASK(iParam1);
	TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iParam1, fParam2, fParam2);
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	PED::_0x712B2C2B2471B493(iParam0, joaat("DISABLED"));
}

void func_228(int iParam0)
{
	iLocal_581 = iParam0;
}

int func_229()
{
	if ((func_377(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		Local_17.f_46 = 1;
		func_228(3);
		return 1;
	}
	return 0;
}

void func_230()
{
	func_225(70);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_372[0], 1.5f);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	switch (iLocal_644)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				bLocal_660 = true;
				iLocal_582 = 5;
				func_245(&(Local_527[0 /*17*/]), "RE_INTER_POS");
				func_245(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				func_204(uLocal_372[1], Global_35, func_134(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], Global_35, func_134(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
				iLocal_664 = 1;
			}
			break;
		case 2:
			func_228(3);
			iLocal_644++;
			break;
	}
}

void func_231()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (func_233(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[1], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if (func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if (func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[2], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[0], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_232()
{
	func_225(50);
	switch (iLocal_647)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				func_204(uLocal_372[3], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_206(&(Local_527[0 /*17*/]), 0);
				func_206(&(Local_527[1 /*17*/]), 0);
				func_136(&(Local_527[0 /*17*/]), 1, 0);
				func_136(&(Local_527[1 /*17*/]), 1, 0);
				func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				func_245(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
				Local_527[0 /*17*/].f_13 = func_134(69);
				Local_527[1 /*17*/].f_13 = func_134(70);
				iLocal_582 = 3;
				iLocal_583 = 0;
				func_152(&uLocal_633);
				func_387(uLocal_372[0]);
				func_387(uLocal_372[1]);
				iLocal_647++;
			}
			break;
		case 1:
			if (!func_388(PLAYER::PLAYER_ID(), uLocal_372[3], &(Local_421[3 /*21*/])) || func_202(0f, 1, 0, 0))
			{
				if ((func_202(-4f, 1, uLocal_372[3], 1) && func_202(-4f, 1, Global_35, 1)) && func_202(-2f, 1, 0, 0))
				{
					func_387(uLocal_372[0]);
					func_387(uLocal_372[1]);
					TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_372[3], uLocal_372[0], Global_35, 0, -1, 1056964608 /* Float: 0.5f */, 2f, 0);
					TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_372[2], uLocal_372[0], Global_35, 0, -1, 1056964608 /* Float: 0.5f */, 2f, 0);
					iLocal_667 = 1;
					func_152(&uLocal_633);
					func_204(uLocal_372[3], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (iLocal_663 == 0)
					{
						func_245(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
						func_206(&(Local_527[0 /*17*/]), 0);
						func_206(&(Local_527[1 /*17*/]), 0);
						func_136(&(Local_527[0 /*17*/]), 1, 0);
						func_136(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(52);
						Local_527[1 /*17*/].f_13 = func_134(54);
						iLocal_582 = 3;
					}
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[3], 1) && func_202(-1f, 1, 0, 0))
			{
				func_228(3);
				iLocal_647++;
			}
			break;
	}
}

float func_233(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_395(Global_35, iParam0, bParam1, bParam2);
}

void func_234()
{
	if (bLocal_660)
	{
		return;
	}
	switch (iLocal_646)
	{
		case 0:
			if (func_202(0f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[2], uLocal_372[1], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (func_202(0f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[2], uLocal_372[1], func_134(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			if (func_202(0f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				func_204(uLocal_372[1], uLocal_372[2], func_134(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 5:
			if (func_202(0f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				func_204(uLocal_372[0], uLocal_372[1], func_134(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
	}
}

void func_235()
{
	switch (iLocal_648)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				func_204(uLocal_372[3], Global_35, func_134(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_660 = true;
				iLocal_648++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				func_204(uLocal_372[3], Global_35, func_134(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_664 = 1;
				iLocal_648++;
			}
			break;
		case 2:
			if (func_202(-6f, 1, 0, 0))
			{
				func_228(3);
				iLocal_648++;
			}
			break;
	}
}

void func_236()
{
	switch (iLocal_588[0])
	{
		case 0:
			func_22(&(Local_421[0 /*21*/]), &Local_527);
			func_215(&(uLocal_372[0]));
			func_152(&(vLocal_617[0 /*3*/]));
			func_142(uLocal_372[0], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[0] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[0 /*3*/])) >= 0f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[0], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 500f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[0], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[0 /*3*/]));
				iLocal_588[0] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[0], false) || func_244(&(vLocal_617[0 /*3*/])) >= 0.5f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[0] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			iLocal_588[0] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[1])
	{
		case 0:
			func_22(&(Local_421[1 /*21*/]), &Local_527);
			func_215(&(uLocal_372[1]));
			func_152(&(vLocal_617[1 /*3*/]));
			func_142(uLocal_372[1], func_143(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[1] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[1 /*3*/])) >= 0.3f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[1], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 1000f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[1], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[1 /*3*/]));
				iLocal_588[1] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[1], false) || func_244(&(vLocal_617[1 /*3*/])) >= 1f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[1] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			iLocal_588[1] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[2])
	{
		case 0:
			func_22(&(Local_421[2 /*21*/]), &Local_527);
			func_215(&(uLocal_372[2]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			func_142(uLocal_372[2], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_152(&(vLocal_617[2 /*3*/]));
			iLocal_588[2] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[2 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[2], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 1500f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[2], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[2 /*3*/]));
				iLocal_588[2] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[2], false) || func_244(&(vLocal_617[2 /*3*/])) >= 1.5f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[2] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			iLocal_588[2] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[3])
	{
		case 0:
			func_22(&(Local_421[3 /*21*/]), &Local_527);
			func_215(&(uLocal_372[3]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[3], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			func_142(uLocal_372[3], func_141(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			func_152(&(vLocal_617[3 /*3*/]));
			iLocal_588[3] = 1;
			break;
		case 1:
			if (func_244(&(vLocal_617[3 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[3], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 2000f, 1, 0, 0, 0);
				}
				func_390(uLocal_372[3], Global_35, &uLocal_384, -1, 30);
				func_152(&(vLocal_617[3 /*3*/]));
				iLocal_588[3] = 2;
			}
			break;
		case 2:
			if (!TASK::IS_PED_SCENARIO_REACT_LOOKING(uLocal_372[3], false) || func_244(&(vLocal_617[3 /*3*/])) >= 2f)
			{
				PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[3] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_588[3] = 4;
			break;
		case 4:
			break;
	}
}

void func_237()
{
	int iVar0;

	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				func_391(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_239(int iParam0, int iParam1)
{
	if (!func_238(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

int func_240(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

int func_241(int iParam0, int iParam1, int iParam2)
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

int func_242(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_396(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_397(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_398(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_399(558))
				{
					func_400(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_243(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!func_151(&uLocal_602))
	{
		func_152(&uLocal_602);
	}
	else if (func_244(&uLocal_602) > fParam3)
	{
		if (iParam4 == 0)
		{
			func_204(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			func_204(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		func_375(&uLocal_602);
		return true;
	}
	return false;
}

float func_244(var uParam0)
{
	if (!func_151(uParam0))
	{
		return 0f;
	}
	if (func_333(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_334() - uParam0->f_1);
}

void func_245(int* iParam0, char* sParam1)
{
	if (func_272(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_308(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_312(iParam0, 1);
}

void func_246(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

bool func_247(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if (((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3])
			{
				return true;
			}
			break;
		case 1:
			if ((((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3]) && iParam0 != uLocal_372[4])
			{
				return true;
			}
			break;
		case 2:
			if (((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_248(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if ((func_395(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || func_395(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
		case 1:
			if ((((func_395(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || func_395(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[3], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[4], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
		case 2:
			if (((func_395(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || func_395(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0)) || func_395(iParam0, uLocal_372[3], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if ((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f))
			{
				return 1;
			}
			break;
		case 1:
			if ((((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[3], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[4], iParam0, 80f))
			{
				return 1;
			}
			break;
		case 2:
			if (((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[3], iParam0, 80f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Local_211[3 /*32*/].f_11, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_HORSE_ACTION(0, 3, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[0 /*32*/].f_11, iVar0, 0.5f, 0.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_HORSE_ACTION(0, 5, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[1 /*32*/].f_11, iVar1, 1f, 1f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	TASK::TASK_HORSE_ACTION(0, 7, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar2);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[2 /*32*/].f_11, iVar2, 1.5f, 1.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar4);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[4 /*32*/].f_11, iVar4, 2.5f, 2.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
}

void func_251()
{
	if (!func_151(&uLocal_608))
	{
		func_152(&uLocal_608);
	}
	else if (func_244(&uLocal_608) >= 0f && func_244(&uLocal_608) <= 0.1f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		func_390(uLocal_372[0], Global_35, &uLocal_384, -1, 50);
	}
	else if (func_244(&uLocal_608) >= 0.3f && func_244(&uLocal_608) <= 0.4f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		func_390(uLocal_372[1], Global_35, &uLocal_384, -1, 50);
	}
	else if (func_244(&uLocal_608) >= 0.5f && func_244(&uLocal_608) <= 0.6f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		func_390(uLocal_372[2], Global_35, &uLocal_384, -1, 50);
	}
	else if (func_244(&uLocal_608) >= 0.8f && func_244(&uLocal_608) <= 0.9f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		func_390(uLocal_372[3], Global_35, &uLocal_384, -1, 50);
	}
	else if (func_244(&uLocal_608) >= 1.2f && func_244(&uLocal_608) <= 1.3f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[4], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		func_390(uLocal_372[4], Global_35, &uLocal_384, -1, 50);
	}
}

void func_252(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

char* func_253(char* sParam0)
{
	return sParam0;
}

int func_254(int iParam0, int iParam1)
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

int func_255(int iParam0, int iParam1)
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

bool func_256(int iParam0, int iParam1)
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
	if (func_403(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_403(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_403(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_403(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_403(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_403(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_403(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_403(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_257(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

int func_258(int iParam0)
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

void func_259(int* iParam0)
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

void func_260(int iParam0)
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

void func_261(var uParam0)
{
	if (func_272(uParam0->f_162))
	{
		func_270(&(uParam0->f_162), 1, 1);
	}
	if (func_272(uParam0->f_163))
	{
		func_270(&(uParam0->f_163), 1, 1);
	}
	if (func_272(uParam0->f_164))
	{
		func_270(&(uParam0->f_164), 1, 1);
	}
	if (func_272(uParam0->f_165))
	{
		func_270(&(uParam0->f_165), 1, 1);
	}
}

void func_262(var uParam0)
{
	if (uParam0->f_170)
	{
		func_404();
	}
}

void func_263(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_405(32);
		func_267(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_264(var uParam0)
{
	if (func_406(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_407(uParam0->f_3);
		func_161(uParam0, 0, 1);
		func_408(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_409(0, 0);
		return true;
	}
	return false;
}

void func_265()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_266(int iParam0)
{
	if (!func_123(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_267(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_240(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_269() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

void func_268(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

int func_269()
{
	return Global_1572887.f_12;
}

void func_270(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_272(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_410(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_411(iVar0);
	*uParam0 = 0;
}

void func_271(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_375(&(iParam0->f_18));
}

bool func_272(int iParam0)
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

int func_273(int iParam0)
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

int func_274(int iParam0)
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

bool func_275(int iParam0, int iParam1, var uParam2)
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

Vector3 func_276(int iParam0, var uParam1)
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
			if (!func_45(*(uParam1[iVar0 /*3*/])))
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

void func_277(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(-1702907713, *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_18("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_278(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_279(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_45(vParam0))
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
		if (func_185(vParam0))
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
	func_412(iVar0, bParam8);
	return iVar0;
}

void func_280(int iParam0)
{
	if (!func_123(iParam0))
	{
		return;
	}
	func_413(iParam0);
}

void func_281(var uParam0, vector3 vParam1)
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

int func_282(int iParam0)
{
	if (func_51(iParam0, 2))
	{
		return 200;
	}
	if (func_51(iParam0, 4))
	{
		return 70;
	}
	if (func_51(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_283(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_27(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_337() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_27(iParam0, 2);
		bVar1 = func_27(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_167())
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

void func_284(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_51(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_285(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
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
	if (func_51(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_51(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_286(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_274(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_287(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_45(vParam1))
	{
		return false;
	}
	if (func_292(iParam0, vParam1))
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
	if (func_70(iParam0))
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

bool func_288(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_289(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_99(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_295(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_414();
			iParam4->f_2 = func_382(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_295(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_414();
		iParam4->f_2 = func_382(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_290(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_414() - *uParam0) >= iParam1;
	}
	return false;
}

int func_291(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_45(uParam0->f_12[iVar0 /*3*/]))
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

bool func_292(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_27(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_415(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_27(iParam0, 33554432))
	{
		if (func_416(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_293(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_51(iParam0, 128))
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
	if (func_27(iParam0, 1) && !func_27(iParam0, 2))
	{
		if (func_27(iParam0, 4096) || func_27(iParam0, 2048))
		{
			if (func_417(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_294(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_418())
	{
		return false;
	}
	return true;
}

bool func_295(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_419(vVar0, vParam0) > func_419(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_296(int iParam0)
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

int func_297(int iParam0)
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

int func_298(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_420(&iVar1, -2147483648);
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

int func_299()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_300(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_269() != -1)
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

int func_301(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_302(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

bool func_303(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 4;
		case 5:
			return 4;
		case 1:
			return 4;
		case 10:
			return 5;
		default:
			break;
	}
	return 1;
}

bool func_305()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

void func_306(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_307(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_308(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

void func_309(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (bParam1)
	{
		func_421(iParam0, 4);
		func_422(iVar0, 1);
		func_423(iVar0, 1);
	}
	else
	{
		func_424(iParam0, 4);
		func_423(iVar0, 0);
	}
}

bool func_310(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_311(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_312(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_313(int iParam0)
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

Vector3 func_314(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_315(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_425((fParam0 + fParam1));
}

int func_316(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_426(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_427(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_428(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_428(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
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
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_429(iVar0))
		{
			func_321(iVar0, &(uParam1->f_23), 0);
		}
		if (func_429(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_430(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_431(&(uParam1->f_22)));
			func_433(iVar0, func_432(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_434(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_435(&(uParam1->f_22)))
		{
			func_436(iVar0, 1);
		}
		ENTITY::_0xA91E6CF94404E8C9(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_437(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_403(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_SOMETHING(iVar0, true);
		}
		if (!func_429(iVar0))
		{
			func_439(iVar0, !func_438(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_440(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_441(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_441(&(uParam1->f_22)));
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

bool func_317(int iParam0, int iParam1)
{
	if (func_442(iParam0) != -1)
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

void func_318(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_443(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

bool func_319(var uParam0)
{
	return func_403(*uParam0, 32);
}

int func_320(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_321(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_95(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

bool func_322(int iParam0, var uParam1)
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

bool func_323(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_324(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_325(int iParam0)
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

bool func_326(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_327(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_324(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_324(iVar4) && iVar4 != iVar0)
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
	if (func_269() == -1 && !func_325(iVar0))
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
				if (func_325(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_324(iVar0))
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
		func_444(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_445(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_446(iVar0))
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

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"):
		case joaat("WEAPON_SHOTGUN_SAWEDOFF"):
			return true;
		default:
			break;
	}
	return false;
}

int func_329(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_331(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_332(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_334() - fParam1);
	func_447(uParam0, 1);
	func_448(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_333(var uParam0)
{
	return func_331(*uParam0, 2);
}

float func_334()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_335(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_449(1);
	}
	else
	{
		iVar0 = func_450(iParam0);
	}
	return iVar0;
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_451(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_452(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_337()
{
	return Global_1897952.f_41;
}

void func_338(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_51(iParam0, 8192))
	{
		iVar0 = func_452(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_339(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_267(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_340(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_27(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_453(262144, iVar0, 0, 1);
		}
	}
	if (func_27(iParam0, 128))
	{
		func_453(128, iVar0, 0, 1);
	}
	else if (func_27(iParam0, 524288))
	{
		func_453(524288, iVar0, 0, 1);
	}
	else if (func_27(iParam0, 536870912))
	{
		func_453(536870912, iVar0, 0, 1);
	}
	else if (func_27(iParam0, 4194304))
	{
		func_453(4194304, iVar0, 0, 1);
	}
	else if (func_27(iParam0, 8388608))
	{
		func_453(8388608, iVar0, 0, 1);
	}
}

void func_341(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_342(bool bParam0)
{
	if (!bParam0 && func_454(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_343()
{
	return Global_1310750.f_16037;
}

bool func_344(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_345(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_123(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_455(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_346(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_456(&Global_1393447, 1);
	func_457();
	func_458();
	func_459((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_414() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_460();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_453(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_453(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_453(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_461(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_462(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_462((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

bool func_347(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

void func_348(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

void func_349(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

int func_350(int iParam0)
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

bool func_351()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_352(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_353(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_352(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_334() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_354(bool bParam0, bool bParam1, bool bParam2)
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

int func_355()
{
	return Global_1899515;
}

int func_356(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_357(int iParam0)
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

bool func_358(int iParam0)
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

bool func_359(int iParam0)
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

bool func_360(int iParam0)
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

bool func_361(int iParam0)
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

bool func_362(int iParam0)
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

bool func_363(int iParam0)
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

bool func_364(bool bParam0, int iParam1, int iParam2)
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

bool func_365()
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

int func_366(int iParam0)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	return func_464(func_463(iParam0));
}

bool func_367(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_368(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_369(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_370(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_371(int iParam0)
{
	return func_27(iParam0, Global_1310750.f_16072 | 64);
}

int func_372(int iParam0)
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

int func_373(int iParam0)
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

bool func_374(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_375(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_376(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

int func_377(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_465(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_391((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return 1;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return 0;
}

int func_378()
{
	if ((((func_466(Global_35, Local_211[0 /*32*/].f_11, 0) || func_466(Global_35, Local_211[1 /*32*/].f_11, 0)) || func_466(Global_35, Local_211[2 /*32*/].f_11, 0)) || func_466(Global_35, Local_211[3 /*32*/].f_11, 0)) || func_466(Global_35, Local_211[4 /*32*/].f_11, 0))
	{
		func_225(15);
		func_251();
		return 1;
	}
	return 0;
}

int func_379()
{
	if (((((ENTITY::DOES_ENTITY_EXIST(Local_211[0 /*32*/].f_11) && PED::IS_PED_LASSOED(Local_211[0 /*32*/].f_11)) || (ENTITY::DOES_ENTITY_EXIST(Local_211[1 /*32*/].f_11) && PED::IS_PED_LASSOED(Local_211[1 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[2 /*32*/].f_11) && PED::IS_PED_LASSOED(Local_211[2 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[3 /*32*/].f_11) && PED::IS_PED_LASSOED(Local_211[3 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[4 /*32*/].f_11) && PED::IS_PED_LASSOED(Local_211[4 /*32*/].f_11)))
	{
		func_225(15);
		func_251();
		return 1;
	}
	return 0;
}

bool func_380()
{
	if ((((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[1], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[2], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[3], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[4], Global_35, 17))
	{
		return true;
	}
	return false;
}

bool func_381()
{
	if (((((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[1], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[2], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[3], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[4], 80f)) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

float func_382(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_383()
{
	if (bLocal_668)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), true) >= 60f)
		{
			func_467(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
		}
		else
		{
			bLocal_668 = false;
		}
	}
}

void func_384()
{
	switch (iLocal_650)
	{
		case 0:
			func_468(0);
			func_204(uLocal_372[0], uLocal_372[0], func_134(66), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			func_467(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650++;
			break;
		case 1:
			func_468(0);
			func_204(uLocal_372[0], uLocal_372[0], func_134(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			func_467(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650++;
			break;
		case 2:
			func_468(0);
			func_204(uLocal_372[0], uLocal_372[0], func_134(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			func_467(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650 = 0;
			break;
	}
}

bool func_385(int iParam0, bool bParam1)
{
	if (func_95(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_386(float fParam0)
{
	if (func_469(1))
	{
		return true;
	}
	if (func_151(&uLocal_0) && !func_470(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_387(int iParam0)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::TASK_PLAY_ANIM(iParam0, Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, "RightArmOnly_Filter", false);
	}
}

bool func_388(int iParam0, var uParam1, var uParam2)
{
	if (func_471(uParam2))
	{
		return true;
	}
	if (func_472(iParam0, &uParam1))
	{
		return true;
	}
	return false;
}

int func_389(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> Var3;

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
		if (func_167())
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
				if (func_233(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_395(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_152(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_473(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_475(func_474(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_390(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (func_395(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2108, 51, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_476(iParam2, 1, iVar0);
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
			if (func_477(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_478(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_480(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_481(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_169(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_478(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_482(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_483(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_484(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_485(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_485(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_478(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_486(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_487(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_488(iParam2, 4000))
				{
					if ((func_489(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_490(iParam2, iParam0)) && func_491(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_489(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_490(iParam2, iParam0)) && func_491(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_492(iParam0, Global_1935630.f_41))
							{
								func_493();
								*iParam3 = 2;
								func_478(iParam0, iParam2, *iParam3);
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
						if (func_492(iParam0, Global_1935630.f_41))
						{
							func_493();
							*iParam3 = 2;
							func_478(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_494(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_414() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_493();
						*iParam3 = 2;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_495())
					{
						if (func_492(iParam0, Global_1935630.f_42))
						{
							func_493();
							*iParam3 = 2;
							func_478(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_496(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_478(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_497(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_498(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_499(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_500(iParam2, 4000))
				{
					if (func_501(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_478(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_502(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_478(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_503(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_478(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_393()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	func_504(uLocal_372[0], Global_35, 0);
	switch (iLocal_595)
	{
		case 0:
			fVar0 = 0f;
			fVar1 = 0.5f;
			fVar2 = 1f;
			fVar3 = 1.5f;
			fVar4 = 2f;
			break;
		case 1:
		case 3:
			fVar0 = 1f;
			fVar1 = 0.5f;
			fVar2 = 1.5f;
			fVar3 = 0f;
			fVar4 = 2f;
			break;
		case 2:
		case 4:
			fVar0 = 1f;
			fVar1 = 1.5f;
			fVar2 = 0.5f;
			fVar3 = 2f;
			fVar4 = 0f;
			break;
	}
	switch (iLocal_596)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) > 1f)
				{
					iLocal_596 = 2;
				}
				else if ((((func_233(uLocal_372[0], 1, 1) <= 15f || func_233(uLocal_372[1], 1, 1) <= 15f) || func_233(uLocal_372[2], 1, 1) <= 15f) || func_233(uLocal_372[3], 1, 1) <= 15f) || func_233(uLocal_372[4], 1, 1) <= 15f)
				{
					iLocal_596 = 1;
				}
				else
				{
					iLocal_596 = 2;
				}
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 1f)
			{
				iLocal_596 = 2;
			}
			else if ((((func_233(uLocal_372[0], 1, 1) <= 15f || func_233(uLocal_372[1], 1, 1) <= 15f) || func_233(uLocal_372[2], 1, 1) <= 15f) || func_233(uLocal_372[3], 1, 1) <= 15f) || func_233(uLocal_372[4], 1, 1) <= 15f)
			{
				iLocal_596 = 1;
			}
			else
			{
				iLocal_596 = 2;
			}
			break;
		case 1:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_CONFRONT(0, Global_35, 2);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[0], uLocal_685[0], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_CONFRONT(0, Global_35, 2);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar3, fVar3);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[4], uLocal_685[4], fVar4, fVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_596 = 3;
			break;
		case 3:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) > 1f)
				{
					iLocal_596 = 2;
				}
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 1f)
			{
				iLocal_596 = 2;
			}
			break;
		case 2:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, -1f, -1f, 8, 0, 0, 5f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[0], uLocal_685[0], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, -1f, -1f, 8, 0, 0, 5f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar3, fVar3);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[4], uLocal_685[4], fVar4, fVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_596 = 4;
			break;
		case 4:
			break;
	}
}

void func_394(int iParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, iParam1);
}

float func_395(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_396(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_397(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_396(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_99(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_152(&(iParam1->f_13));
		}
		if (func_505(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_506(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_397(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_215(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_507(*uParam0, 1, 1);
						}
					}
					else if (func_508(iParam1, 22))
					{
						func_507(*uParam0, 0, 1);
					}
				}
				if (func_509(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_510(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_511(iParam8);
					if (func_512(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_513(uParam3);
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
					func_514(iParam1, uParam3, fVar8);
					if (func_515(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_106(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_516(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_509(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_517(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_512(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_510(uParam0, func_509(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_511(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_106(uParam3, 0, 0, 1, 1);
					}
					func_518(iParam1, 1);
				}
				func_514(iParam1, uParam3, fVar8);
				if (func_516(uParam0, iParam1, fParam4, bVar6))
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
			func_22(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_398(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_519(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_204(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_269() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_400(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_520(iParam0, &iVar0, &iVar1);
	if (!func_521(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_522(iVar0, iVar1);
}

float func_401(int iParam0)
{
	float fVar0;
	float fVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iParam0));
		if (fVar0 == 0f)
		{
			fVar1 = 8f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 8f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 10f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 15f;
		}
		else
		{
			fVar1 = 18f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0);
		if (fVar0 == 0f)
		{
			fVar1 = 5f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 5f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 7f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 8.5f;
		}
		else
		{
			fVar1 = 10f;
		}
	}
	return fVar1;
}

int func_402(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

bool func_403(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_404()
{
	func_523(23);
}

void func_405(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

int func_406(var uParam0)
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

void func_407(int iParam0)
{
	int iVar0;

	iVar0 = func_524(iParam0);
	if (iVar0 != 0)
	{
		func_525(-1, 24, 0, iVar0);
	}
}

void func_408(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_527(func_526(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_27(iParam0, 2))
	{
		func_528(iParam0, func_335(iParam3));
	}
	if (func_27(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_337();
		}
		func_529(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_51(iParam0, 65536))
	{
		func_530(iParam0, iParam1);
		func_531(iParam0, func_109(iParam0, iParam1));
		func_405(128);
	}
	func_339(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_340(iParam0, 1);
	if (!bParam2)
	{
		func_405(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_532(524288);
	}
	if (func_533(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_533(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_409(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_534(&Global_0, 8);
	}
	if (!func_535() || func_269() != -1)
	{
		return;
	}
	func_534(&Global_0, 1);
}

int func_410(int iParam0)
{
	return iParam0;
}

void func_411(int iParam0)
{
	if (!func_536(iParam0))
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

int func_412(int iParam0, bool bParam1)
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

void func_413(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

int func_414()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_415(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_45(vParam0))
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

bool func_416(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_45(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_417(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_45(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_71(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_418()
{
	int iVar0;
	int iVar1;

	iVar0 = func_537(func_179());
	if (iVar0 == 8)
	{
		iVar1 = func_180(func_179());
		if (func_182(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_538(func_449(0)))
	{
		return false;
	}
	if (func_539())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_419(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_420(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_421(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_422(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_540(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_423(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_424(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

float func_425(float fParam0)
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

int func_426(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_541(&uParam1))
	{
		return 1;
	}
	if (!func_130(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_427(var uParam0)
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

int func_428(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_542(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_429(int iParam0)
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

bool func_430(var uParam0)
{
	return func_403(*uParam0, 4);
}

bool func_431(var uParam0)
{
	return func_403(*uParam0, 64);
}

bool func_432(var uParam0)
{
	return func_403(*uParam0, 8);
}

void func_433(int iParam0, bool bParam1, bool bParam2)
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

bool func_434(var uParam0)
{
	return func_403(*uParam0, 128);
}

bool func_435(var uParam0)
{
	return func_403(*uParam0, 2048);
}

void func_436(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_437(var uParam0)
{
	return func_403(*uParam0, 1024);
}

bool func_438(var uParam0)
{
	return func_403(*uParam0, 256);
}

void func_439(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_440(var uParam0)
{
	return func_403(*uParam0, 512);
}

bool func_441(var uParam0)
{
	return func_403(*uParam0, 4096);
}

int func_442(int iParam0)
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

int func_443(int iParam0)
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

int func_444(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_543(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_544((398 + iVar28), 1);
			if (func_545(iParam0, &Var0, iVar5, 0))
			{
				if (func_546(iParam0, &Var6, iVar5))
				{
					Var29 = { func_547(iParam0, Var0, iVar5, 0) };
					func_548(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_549(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_550(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_551(iParam0, iParam1);
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

void func_445(int iParam0, int iParam1, float fParam2)
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

bool func_446(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

void func_447(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_448(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_449(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_552(1, 0, 0);
	}
	else
	{
		iVar0 = func_179();
	}
	return func_450(iVar0);
}

int func_450(int iParam0)
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

int func_451(int iParam0)
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

int func_452(int iParam0, int iParam1)
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

void func_453(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_278(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_266(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_553(iVar0) < func_554(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_339(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_555(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_455(int iParam0)
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

void func_456(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_457()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_556(iVar0, 128))
		{
			func_557(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_458()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_556(iVar0, 128) && func_556(iVar0, 1))
		{
			func_557(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_459(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_460()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_27(iVar0, 16777216))
		{
			if (!func_558(iVar0))
			{
				func_559(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_461(int iParam0, int iParam1, int iParam2, int iParam3)
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
			func_267(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_267(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_267(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_267(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_267(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_267(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_267(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_462(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_334();
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

int func_463(int iParam0)
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

int func_464(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_465(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_466(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_467(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::TRIGGER_SONAR_BLIP(iParam0, vParam1);
}

void func_468(int iParam0)
{
	func_375(&uLocal_0);
	func_560(1, iParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_561();
}

bool func_469(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_470(var uParam0, float fParam1)
{
	if (func_46(uParam0, fParam1))
	{
		func_375(uParam0);
		return true;
	}
	return false;
}

bool func_471(var uParam0)
{
	return uParam0->f_2 == 2;
}

bool func_472(int iParam0, var uParam1)
{
	var uVar0;

	uVar0 = *uParam1;
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &uVar0, false, false))
	{
		return true;
	}
	return false;
}

bool func_473(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_474(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_562(iParam0, &Var0);
}

int func_475(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_476(int iParam0, bool bParam1, int iParam2)
{
	func_563(iParam2);
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
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
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
		iParam0->f_13 = func_564(0);
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
							func_50(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_173(1))
						{
							func_50(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_173(1) || *iParam0 & 8192 != 0))
				{
					func_252(iParam0, 33554432);
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
			if (func_565(iParam0))
			{
				iParam0->f_15 = func_414();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_414() - iParam0->f_15) > 500)
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
	func_566(iParam0);
}

bool func_477(int iParam0, int iParam1)
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
			if (!func_567(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_568(iParam0, iVar2) <= func_569(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_570(iParam2, 1, 1, 1, 0))
	{
		func_50(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_571(iParam1, 1);
	func_265();
}

bool func_479(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_572(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_573(iParam1);
			if (func_574(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_575(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_571(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_571(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_480(int iParam0, int iParam1, int iParam2)
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
	if (func_576(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_573(iParam2);
		if (func_574(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_575(iParam2)
				{
					func_571(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_481(int iParam0, int iParam1)
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
	if (func_567(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_575(iParam1)
		{
			fVar3 = func_573(iParam1);
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

bool func_482(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_414();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_483(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_577(iParam2);
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
			if (func_491(iParam2, iParam1))
			{
				func_571(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_484(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_578(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_491(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_571(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_485(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_579(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_571(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_571(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, 0, 0);
					if (func_580(iParam1, vVar0, vVar4))
					{
						func_571(iParam2, 1);
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
					func_571(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, 0, 0);
					if (func_580(iParam1, vVar0, vVar7))
					{
						func_571(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_486(int iParam0, int iParam1)
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
		if (!func_567(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_581(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_582(Global_1935630.f_34[iVar0]))
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
			if (func_583(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_584(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_585(iParam1, iParam0, fVar1, iVar0))
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

bool func_487(int iParam0, int iParam1)
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

bool func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_414();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_489(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_586(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_587(iVar0, iParam0))
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

int func_490(int iParam0, int iParam1)
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

bool func_491(int iParam0, int iParam1)
{
	if (func_588(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
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

bool func_492(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_395(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_493()
{
}

bool func_494(int iParam0, int iParam1)
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
		if (func_589(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_414();
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_382(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_414();
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

bool func_495()
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
	if ((func_414() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_496(int iParam0, int iParam1)
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
	fVar0 = func_569(iParam0);
	if (iParam0->f_12 > func_590(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_591(iParam1);
	iVar1 = func_592(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_497(int iParam0, int iParam1, int iParam2)
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
	return func_593(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_498(int iParam0, int iParam1)
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
		if (func_594(iParam0, iParam1, 1))
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
					if (!func_595(iParam1, iParam0))
					{
						if (func_382(iVar4, Global_36, 1) < 7f)
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

bool func_499(int iParam0, int iParam1)
{
	if (!func_596(0))
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

bool func_500(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_414();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_501(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_502(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_414();
	}
	else if (func_414() - iParam1->f_4) > func_597(iParam1)
	{
		return func_598(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_503(int iParam0, int iParam1)
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

void func_504(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = func_599(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_595 = 0;
		}
		else if (func_600(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_595 = 1;
		}
		else
		{
			iLocal_595 = 2;
		}
	}
	else if (func_600(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_595 = 3;
	}
	else
	{
		iLocal_595 = 4;
	}
	if (bParam2)
	{
	}
}

bool func_505(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_601(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_106(uParam2, 0, 0, 1, 0);
				func_50(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_602(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_252(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_506(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_2(iParam4, 32);
		func_105(iParam1, uParam2, 0);
		iVar5 = func_603(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_106(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_508(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_508(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
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
				iParam6 = func_604(uParam0);
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
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_605(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_606(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_508(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_507(*uParam0, 1, 1);
			}
			else
			{
				func_507(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_507(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_508(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_509(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_607(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_510(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_608(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_511(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_2(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_512(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_609(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_610(Global_35)) || func_611(Global_35)) || func_612(Global_35));
	fVar12 = -1f;
	if (func_151(&(iParam1->f_13)))
	{
		fVar12 = func_153(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_272((uParam4[iVar0 /*17*/])->f_6);
		func_613(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_614(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_615(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_106(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_616(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_105(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_617(iParam1, fParam6, iParam1->f_9))
					{
						func_152(&(iParam1->f_18));
						if (bVar6)
						{
							func_616(uParam4, 0, 0);
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
		func_618(iParam1, fParam2);
	}
	return bVar5;
}

void func_513(var uParam0)
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

void func_514(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_619(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_618(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_515(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_620(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_621(iParam1, 0);
				func_105(iParam1, uParam2, func_508(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_516(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_152(&(iParam1->f_18));
			return false;
		}
		else if (func_151(&(iParam1->f_18)))
		{
			func_375(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_151(&(iParam1->f_18)))
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
	return func_470(&(iParam1->f_18), fParam2);
	return true;
}

void func_517(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_613(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_518(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_519(int* iParam0)
{
	if (func_508(iParam0, 0))
	{
		if (func_622(iParam0))
		{
			func_518(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_520(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_521(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_623(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_624(iParam0))
	{
		return false;
	}
	if (func_625(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_626(iParam0, 1)) || func_627(32768))
	{
		if (!func_626(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_628())
	{
		return false;
	}
	return true;
}

void func_522(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_523(int iParam0)
{
	int iVar0;

	if (func_269() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_256(func_629(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_629(iVar0), func_299(), 1))
			{
				func_630(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_524(int iParam0)
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

void func_525(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (func_631() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_631();
					}
					func_632(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_252(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> func_526(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_527(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_528(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_451(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_452(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_529(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_51(iParam0, 8192))
	{
		iVar0 = func_452(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_530(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_274(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_531(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_27(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_45(vParam1))
	{
		return;
	}
	if (!func_123(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_45(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_288(vVar2, vParam1, 1f, 1))
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

void func_532(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_559(iVar0, iParam0);
		iVar0++;
	}
}

int func_533(int iParam0)
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

void func_534(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_535()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_536(int iParam0)
{
	return func_540(iParam0, 2);
}

int func_537(int iParam0)
{
	if (!func_374(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_538(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_539()
{
	return Global_1894899 & 2 != 0;
}

bool func_540(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_541(var uParam0)
{
	return func_403(*uParam0, 1);
}

void func_542(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_633(iParam1))
		{
			func_634(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_635(iParam0, 0, 1);
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
			func_636(iParam0, 0);
			bVar0 = true;
		}
		func_637(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<5> func_543(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_638(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_639(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_547(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_640(bParam1) };
			if (bParam2 && func_641(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_545(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_545(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_546(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_642(bParam1) };
			switch (func_643(iParam0))
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
			if (func_644(iParam0, -1823706425))
			{
				Var0 = { func_547(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_644(iParam0, -1483207246))
			{
				Var0 = { func_547(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_645(Var0, &Var27, bParam1, 0))
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

int func_544(int iParam0, int iParam1)
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
			return 802754820;
		case 251:
			return joaat("SLOTID_HORSE_MANE");
		case 252:
			return -1886147520;
		case 253:
			return -1142966831;
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
			return 1728382685 /* GXTEntry: "Right" */;
		case 399:
			return -649335959 /* GXTEntry: "Left" */;
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
			return 1386101789;
		case 581:
			return 1227915917;
		case 582:
			return -218846335;
		case 583:
			return -352578118;
		case 584:
			return 1426626782;
		case 585:
			return -714081520;
		case 586:
			return 74547781;
		case 587:
			return 1271463052;
		case 588:
			return 1983140194;
		case 589:
			return 677262775;
		case 590:
			return -832337898;
		case 591:
			return -319249747;
		case 592:
			return -16955722;
		case 593:
			return -1535425646;
		case 594:
			return -1063641743;
		case 595:
			return -1041133401;
		case 596:
			return 1380479304;
		case 597:
			return 600890828;
		case 598:
			return 733333190;
		case 599:
			return 1843035435;
		case 600:
			return -304127320;
		case 601:
			return 122470371;
		case 602:
			return 0;
		case 603:
			return -1591664384;
		case 604:
			return -673000374;
		case 605:
			return -1150938404;
		case 606:
			return -1756997214;
		case 607:
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

bool func_545(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_646(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_546(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_647(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_547(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_648(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_649(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_548(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_650(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_645(*uParam1, &Var0, bParam6, 0))
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
	if (!func_549(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_649(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_549(bool bParam0)
{
	if (func_269() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_649(bParam0));
}

int func_550(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_651(iParam0))
	{
		return 0;
	}
	if (!func_549(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_551(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_465(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_552(int iParam0, bool bParam1, bool bParam2)
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
				if (!bParam1 || func_652(iVar2))
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

int func_553(int iParam0)
{
	if (func_123(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_554(int iParam0)
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

int func_555(int iParam0, int iParam1)
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

bool func_556(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_557(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_558(int iParam0)
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

void func_559(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

void func_560(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_561()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

bool func_562(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_563(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_653();
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
			func_654(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_564(int iParam0)
{
	return Global_1109400.f_276[iParam0 /*3*/];
}

bool func_565(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_269() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_655(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1955569.f_992[3])
	{
		iVar0 = func_655(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_592(iVar0) == -1)
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

void func_566(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_656(iParam0);
	}
}

bool func_567(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_592(iParam2);
	}
	else
	{
		iVar1 = func_591(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_592(iParam0);
	}
	else
	{
		iVar0 = func_591(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
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

float func_568(int iParam0, int iParam1)
{
	return func_395(iParam0, iParam1, 1, 1);
}

float func_569(int iParam0)
{
	return iParam0->f_26;
}

bool func_570(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_571(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(iParam0, 134217728);
	}
	else
	{
		func_252(iParam0, 134217728);
	}
}

bool func_572(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_395(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_657(iVar0, 0)))
		{
			if (func_658(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_573(int iParam0)
{
	return iParam0->f_17;
}

bool func_574(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
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

int func_575(int iParam0)
{
	return iParam0->f_18;
}

bool func_576(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_657(iVar0, 0)))
		{
			if (func_659(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_577(int iParam0)
{
	return iParam0->f_23;
}

int func_578(int iParam0)
{
	return iParam0->f_21;
}

int func_579(int iParam0)
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

bool func_580(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_660(iParam0, vParam4, 0.5f))
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

int func_581(int iParam0)
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
	if (func_661(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_582(int iParam0)
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

bool func_583(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_174(iParam1))
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

bool func_584(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_174(iParam1))
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

bool func_585(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_174(iParam1))
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

bool func_586(int iParam0, int iParam1)
{
	if (!TASK::_0xEFC4303DDC6E60D3(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_0xED1F514AF4732258(iParam0);
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

bool func_587(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_662(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_588(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_589(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_382(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_590(int iParam0)
{
	return iParam0->f_24;
}

int func_591(int iParam0)
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

int func_592(int iParam0)
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

int func_593(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_586(Global_35, &iVar1))
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
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_395(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_395(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_594(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_364(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_595(iParam1, iVar0))
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
				if (!bParam2 || !func_595(iParam1, iVar1))
				{
					if (func_382(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_595(int iParam0, int iParam1)
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

int func_596(int iParam0)
{
	if (func_663())
	{
		return 0;
	}
	return func_664(Global_1347702[58 /*49*/].f_15, 1);
}

int func_597(int iParam0)
{
	return iParam0->f_20;
}

int func_598(int iParam0, int iParam1, bool bParam2, float fParam3)
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

float func_599(vector3 vParam0, vector3 vParam3)
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

bool func_600(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_601(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_665((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_602(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_619(uParam0[iVar0 /*17*/]))
		{
			func_311(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_603(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_666(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_272((uParam2[iVar0 /*17*/])->f_6))
		{
			func_311(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_604(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_258(*uParam0);
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

int func_605(var uParam0, int iParam1)
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

void func_606(int* iParam0, int* iParam1)
{
	if (!func_508(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_311(iParam1, 19);
			func_621(iParam0, 23);
			func_667(iParam1, 2);
		}
	}
}

bool func_607(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_668(16))
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
					func_669(16);
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

void func_608(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_666(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_609(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_610(int iParam0)
{
	return (func_670(iParam0, 4) || func_670(iParam0, 5));
}

int func_611(int iParam0)
{
	return func_670(iParam0, 7);
}

int func_612(int iParam0)
{
	return func_670(iParam0, 6);
}

void func_613(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_619(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_666(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_614(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_671(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_672(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_309(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_309(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_673(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_615(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_674(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_675(iParam1, 1))
	{
		func_676(iParam1, 1);
		return true;
	}
	return false;
}

void func_616(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_136(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_617(int* iParam0, float fParam1, bool bParam2)
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

void func_618(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_619(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_620(int iParam0)
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

void func_621(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_622(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_623(int iParam0, int iParam1)
{
	if (func_269() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_624(int iParam0)
{
	if (func_269() != -1)
	{
		if (func_626(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_626(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_625(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_626(iParam0, 65536) && !func_626(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_626(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_626(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_626(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_627(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_628()
{
	return Global_1905944.f_5694;
}

int func_629(int iParam0)
{
	if (!func_677(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_630(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_678(iParam0))
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

int func_631()
{
	return Global_1899515;
}

void func_632(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_679(*uParam0);
	iVar1 = func_680(*uParam0);
	iVar2 = func_681(*uParam0);
	iVar3 = func_356(*uParam0);
	iVar4 = func_682(*uParam0);
	iVar5 = func_683(*uParam0);
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
	iVar6 = func_684(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_684(iVar1, iVar0);
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
	func_685(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_633(int iParam0)
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

void func_634(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_686(iParam0, iParam1))
		{
			if (func_687(iParam0, iParam1))
			{
				if (func_688(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_689(iParam0);
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

void func_635(int iParam0, int iParam1, bool bParam2)
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

void func_636(int iParam0, bool bParam1)
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

void func_637(int iParam0, int iParam1)
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

struct<4> func_638(bool bParam0)
{
	return func_547(joaat("CHARACTER"), func_690(), -1591664384, bParam0);
}

int func_639(int iParam0)
{
	vector3 vVar0;

	if (!func_648(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_640(bool bParam0)
{
	int iVar0;

	iVar0 = func_649(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_547(923904168, func_638(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_547(923904168, func_638(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_547(923904168, func_638(bParam0), -740156546, 0);
}

bool func_641(int iParam0, bool bParam1)
{
	if (func_643(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_691(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_642(bool bParam0)
{
	int iVar0;

	iVar0 = func_649(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_547(271701509, func_638(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_547(271701509, func_638(bParam0), 12999093, 0);
}

int func_643(int iParam0)
{
	struct<2> Var0;

	if (!func_648(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_644(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_643(iParam0);
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

bool func_645(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_649(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_646(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_648(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_547(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_649(bParam6), &Var0, 0);
	return uVar4;
}

bool func_647(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_649(0);
	*uParam1 = { func_547(iParam0, func_640(0), iParam3, 0) };
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

bool func_648(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_649(bool bParam0)
{
	if (func_269() == -1)
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

bool func_650(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_651(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_652(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40615[iParam0 /*11*/] & 32 != 0;
}

bool func_653()
{
	if (func_692())
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
		return Global_1955569.f_992[2];
	}
	return false;
}

void func_654(var uParam0, var uParam1)
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

int func_655(int iParam0)
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

void func_656(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_252(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_50(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_657(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_658(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_659(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_659(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_660(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_661(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_662(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_663()
{
	if (func_269() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_664(int iParam0, bool bParam1)
{
	switch (func_693(iParam0))
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

int func_665(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_666(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_272(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_270(&(iParam1->f_6), 0, 1);
	}
	if (!func_272(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_619(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_694(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_272(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_673(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_695(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_696(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_307(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_695(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_309(iParam1->f_6, 0, 1);
				}
				else
				{
					func_309(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_667(int* iParam0, int iParam1)
{
	if (!func_310(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_311(iParam0, 14);
		}
	}
}

bool func_668(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_669(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_670(int iParam0, int iParam1)
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

bool func_671(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_672(int iParam0, bool bParam1)
{
	if (bParam1 && !func_272(iParam0))
	{
		return false;
	}
	return !func_540(iParam0, 4);
}

void func_673(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_272(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	func_695(iParam0, 18, 0, 1);
	func_695(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_674(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_272(iParam0))
	{
		return false;
	}
	iVar0 = func_410(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_675(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_272(iParam0))
	{
		return false;
	}
	iVar0 = func_410(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_676(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_677(int iParam0)
{
	return iParam0 > -1;
}

bool func_678(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_679(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_475(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_680(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_681(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_682(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_683(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_684(int iParam0, int iParam1)
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

void func_685(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_697(uParam0, iParam6);
	func_698(uParam0, iParam5);
	func_699(uParam0, iParam4);
	func_700(uParam0, iParam3);
	func_701(uParam0, iParam2);
	func_702(uParam0, iParam1);
}

bool func_686(int iParam0, int iParam1)
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

bool func_687(int iParam0, int iParam1)
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

bool func_688(int iParam0, int iParam1)
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
	if (!func_686(iParam0, iVar0))
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

void func_689(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> func_690()
{
	struct<4> Var0;

	return Var0;
}

bool func_691(int iParam0)
{
	if (!func_703(iParam0))
	{
		return false;
	}
	return func_704(iParam0);
}

bool func_692()
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

int func_693(int iParam0)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	return func_705(iParam0);
}

int func_694(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_540(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
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
				func_706(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_695(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_696(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_272(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_697(var uParam0, int iParam1)
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

void func_698(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_699(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_680(*uParam0);
	iVar1 = func_679(*uParam0);
	if (iParam1 < 1 || iParam1 > func_684(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_700(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_701(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_702(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_703(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_704(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_705(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_707(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

void func_706(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_422(iParam0, 1);
	func_423(iParam0, 1);
	func_424(iParam0, 128);
}

int func_707(int iParam0)
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

