#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	struct<34> Local_5 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	struct<8> Local_39 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_47 = 2;
	var uLocal_48 = 1;
	var uLocal_49 = 1;
	var uLocal_50 = 1;
	var uLocal_51 = 0;
	var uLocal_52 = 1;
	var uLocal_53 = 2;
	var uLocal_54 = 2;
	var uLocal_55 = 3;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 3;
	var uLocal_59 = 1;
	var uLocal_60 = 3;
	var uLocal_61 = 3;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_2 = vScriptParam_0.x;
	uLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return true;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_5))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_5))
	{
		iLocal_0 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_5.f_25)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_5.f_25)))
		{
			if (func_12())
			{
				func_13(0);
			}
		}
		return;
	}
	switch (func_14())
	{
		case 0:
			if (func_15())
			{
				Local_5.f_30 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Local_5);
				StringCopy(&(Local_5.f_25), "doc_treasure_map", 32);
				StringCopy(&(Local_5.f_1), "MAP", 32);
				Local_5.f_6 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Local_5, false);
				Local_5.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_5.f_6, &(Local_5.f_1));
				if (ENTITY::DOES_ENTITY_EXIST(Local_5.f_5))
				{
				}
				iVar0 = ENTITY::GET_ENTITY_MODEL(Local_5.f_5);
				switch (iVar0)
				{
					case joaat("S_MAPROLLED01X"):
						Local_5.f_15.f_2 = joaat("DOCUMENT_SERIAL_KILLER_CLUE1");
						break;
					case joaat("S_MAPROLLED02X"):
						Local_5.f_15.f_2 = joaat("DOCUMENT_SERIAL_KILLER_CLUE2");
						break;
					case joaat("S_MAPROLLED03X"):
						Local_5.f_15.f_2 = joaat("DOCUMENT_SERIAL_KILLER_CLUE3");
						break;
					default:
						break;
				}
				Local_5.f_15.f_1 = Local_5.f_6;
				Local_5.f_15 = Local_5.f_5;
				Local_5.f_15.f_3 = 1;
				Local_5.f_29 = 1024;
				func_16();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_5.f_25));
				func_18();
				func_13(1);
				func_16();
			}
			func_17(2);
			break;
		case 2:
			if (func_15())
			{
				func_16();
			}
			if ((SCRIPTS::HAS_SCRIPT_LOADED(&(Local_5.f_25)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_5, 0)) && func_19())
			{
				Local_5.f_31 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_5.f_25), &(Local_5.f_15), 10, Local_5.f_29);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_5.f_25));
				func_17(3);
				fVar1 = 0f;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_5, "script_re@murder_campfire@knife_note", "enter", 1))
				{
					fVar1 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_5, "script_re@murder_campfire@knife_note", "enter");
				}
				iLocal_64 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_5.f_6, "Knife");
				iLocal_65 = TASK::_GET_SCENARIO_POINT_ENTITY(Local_5.f_6, "Head");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_64))
				{
					if (TASK::_0x6EF4E31B4D5D2DA0(Local_5.f_6, "Knife"))
					{
						if (ENTITY::PLAY_ENTITY_ANIM(iLocal_64, "enter_knife", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
						{
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_5.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_65, "enter_head", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
				else if (func_20() == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_5.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_65, "enter_head", "script_re@murder_campfire@head_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "inInspectionMode"))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UP_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_DOWN_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_RIGHT_ONLY"), true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_65, true, false) };
					Local_39 = { vVar2 };
					Local_39.f_7 = 0;
					IK::_0x66F9EB44342BB4C5(Global_35, &Local_39);
				}
			}
			if (func_15())
			{
				func_16();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
			{
				if (func_20() == 1 || func_20() == 9)
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_65, "script_re@murder_campfire@head_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_65, "script_re@murder_campfire@head_note", "enter_head") > 0.49f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_65, "script_re@murder_campfire@knife_note", "enter_head", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_65, "script_re@murder_campfire@head_note", "enter_head") > 0.9f))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_65, "script_re@murder_campfire@head_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_65, "enter_head", "script_re@murder_campfire@head_note", -1000f);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_65, "script_re@murder_campfire@knife_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_65, "enter_head", "script_re@murder_campfire@knife_note", -1000f);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_65, false);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_65);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_65);
					}
				}
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_5) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_TREASURE_MAP")) == 0)
			{
				iLocal_0 = 0;
			}
			break;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_21(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_22(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_23(&iVar0);
	}
}

bool func_12()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_13(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_14()
{
	return Local_5.f_33;
}

bool func_15()
{
	return Local_5.f_32;
}

void func_16()
{
	Local_5.f_32 = 0;
}

void func_17(int iParam0)
{
	Local_5.f_33 = iParam0;
	func_24();
}

void func_18()
{
	if (Local_5.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_TREE_NOTE"))
	{
		StringCopy(&(Local_5.f_7), "script_re@murder_campfire@knife_note", 64);
	}
	else if (Local_5.f_30 == joaat("PROP_PLAYER_RE_MURDER_CAMP_ROCK_NOTE"))
	{
		StringCopy(&(Local_5.f_7), "script_re@murder_campfire@head_note", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_5.f_7)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(Local_5.f_7));
	}
}

bool func_19()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_5.f_7)))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(&(Local_5.f_7)))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

int func_20()
{
	return Global_1897952.f_41;
}

void func_21(int iParam0)
{
	Local_5 = iParam0->f_1;
}

void func_22(int iParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_TREASURE_MAP")) == 0)
	{
		iLocal_0 = 0;
	}
}

void func_23(int iParam0)
{
}

void func_24()
{
	Local_5.f_32 = 1;
}

