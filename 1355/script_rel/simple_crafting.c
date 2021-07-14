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
	bool bLocal_15 = false;
	struct<35> Local_16 = { 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 1;
	var uLocal_53 = -1;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 1;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if ((func_1(0, 0, 1) && !func_2()) || func_3(0))
	{
		Global_1911914.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = ScriptParam_0.f_3;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_14 = 3;
	}
	while (true)
	{
		if (func_4())
		{
			iLocal_14 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HITCH_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_ANIMAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
		switch (iLocal_14)
		{
			case 0:
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				Local_16.f_33 = 1;
				Local_16.f_34 = 1;
				func_5(&Local_16, 2);
				iLocal_14 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && !func_6(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (func_6(Global_35))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							bLocal_15 = true;
							iLocal_14 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_FOOT(Global_35))
						{
							if (bVar0)
							{
								iLocal_14 = 3;
							}
							else if (!func_7(Global_35, 993674639))
							{
								bVar1 = true;
								if (func_8(0) || func_8(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_0xD65FDC686A031C83(Global_35, joaat("DYNAMIC_KNEEL_QUICK_ENTER"), 2f);
								}
								TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_35, joaat("WORLD_PLAYER_DYNAMIC_KNEEL"), 0, true, joaat("WORLD_PLAYER_DYNAMIC_KNEEL_ARTHUR"), -1f, false);
							}
						}
					}
				}
				else
				{
					bLocal_15 = true;
					iLocal_14 = 2;
				}
				break;
			case 2:
				func_9(&Local_16, 0);
				if (func_10(&Local_16) == 0)
				{
					iLocal_14 = 3;
				}
				else if (func_10(&Local_16) != 12)
				{
				}
				else if (((!bLocal_15 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && !func_6(Global_35))
				{
					iLocal_14 = 1;
				}
				else
				{
					bLocal_15 = true;
				}
				break;
			case 3:
				func_11(&Local_16, 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_12())
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
		iVar0 = func_13(Global_1898164.f_1[0 /*5*/]);
		if (func_14(iVar0) && func_15(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_16(Global_1898164.f_1[0 /*5*/]))
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

bool func_2()
{
	return Global_1911914.f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_4()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	if (func_3(0))
	{
		return true;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return true;
	}
	if (func_17())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_18())
		{
			return true;
		}
	}
	if (func_19())
	{
		return true;
	}
	if (bLocal_15)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_6(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
		{
			return true;
		}
	}
	return false;
}

void func_5(var uParam0, int iParam1)
{
	if (uParam0->f_8 != iParam1)
	{
		uParam0->f_8 = iParam1;
		func_20(uParam0);
	}
}

bool func_6(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_7(int iParam0, int iParam1)
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

int func_8(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, iParam0, false))
	{
		if (func_21(iVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0) || func_22(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_9(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = (*uParam0)[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		func_11(uParam0, 0);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if ((func_23() != -1 && func_24()) || func_25())
	{
		if (func_26((*uParam0)[0], 0))
		{
			func_27(uParam0);
			func_20(uParam0);
		}
		return;
	}
	if (uParam0->f_58)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (func_10(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_28(uParam0))
			{
				func_29(uParam0);
				func_30(uParam0);
				func_31(uParam0);
			}
			if (func_32(uParam0))
			{
				func_5(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_23() == 0 && CAM::_0x251241CAEC707106())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
				if (func_33())
				{
					func_34(0);
				}
			}
			if (((uParam0->f_34 || func_35((*uParam0)[0], 1)) || func_36(8192)) || uParam0->f_35)
			{
				func_37(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_38(uParam0))
			{
				uParam0->f_62 = 1;
				if (func_36(4096))
				{
					uParam0->f_52 = 0;
				}
				else if (func_36(8192))
				{
					uParam0->f_52 = 4;
				}
				func_5(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_39(uParam0))
			{
				func_5(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_40(uParam0))
			{
				func_5(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 0))
			{
				if (func_43(uParam0, 0))
				{
					func_5(uParam0, 8);
				}
				else if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_62)
			{
				func_5(uParam0, 4);
				return;
			}
			if (func_44(uParam0))
			{
				func_43(uParam0, 1);
				func_5(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("CRAFTING")))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(joaat("CRAFTING")))
				{
					Global_1911914.f_1580 = 0;
					func_5(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_58)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_28(uParam0))
			{
				func_41(uParam0);
				func_31(uParam0);
				return;
			}
			if (func_42(uParam0, 1))
			{
				func_5(uParam0, 10);
			}
			break;
		case 10:
			func_45(0);
			if (func_23() == 0 && CAM::_0x43AB9D5A7D415478())
			{
				func_27(uParam0);
				return;
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_46(uParam0, 1);
				(*uParam0)[2] = func_47("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (func_48(32))
				{
					func_49((*uParam0)[2], 0, 1);
				}
				else
				{
					func_49((*uParam0)[2], 1, 1);
				}
				(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (func_21(uParam0->f_75, 0))
				{
					uParam0->f_77 = uParam0->f_75;
					uParam0->f_78 = uParam0->f_76;
					func_50(uParam0, &(uParam0->f_74));
				}
				else
				{
					uParam0->f_77 = 0;
				}
				if (func_51(uParam0->f_75))
				{
					func_52((*uParam0)[1], "CAMP_REC_COOK", 1);
				}
				else if (func_53(uParam0->f_75, -1636519629) == -701492487)
				{
					func_52((*uParam0)[1], "CAMP_REC_BREW", 1);
				}
				else
				{
					func_52((*uParam0)[1], "CAMP_REC_MAKE", 1);
				}
				(*uParam0)[3] = func_47(func_54(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				(*uParam0)[5] = func_55("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				func_56((*uParam0)[5], joaat("INPUT_GAME_MENU_LEFT"));
				func_56((*uParam0)[5], joaat("INPUT_GAME_MENU_RIGHT"));
				if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
				{
					iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
				}
				if (iVar2 > 1 && func_21(uParam0->f_77, 0))
				{
					func_49((*uParam0)[5], 1, 1);
				}
				else
				{
					func_49((*uParam0)[5], 0, 1);
				}
				(*uParam0)[6] = func_47("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				if (!uParam0->f_82)
				{
					func_52((*uParam0)[6], "INFO", 1);
				}
				else
				{
					func_52((*uParam0)[6], "INGREDIENTS", 1);
				}
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_40) == 0)
				{
					func_57(uParam0);
					func_49((*uParam0)[6], 0, 1);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
				}
				func_58(uParam0, uParam0->f_77, uParam0->f_78);
				func_31(uParam0);
			}
			if (Global_1911914.f_1580)
			{
				Global_1911914.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49((*uParam0)[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_59((*uParam0)[2], 1))
			{
				if (uParam0->f_34)
				{
					func_5(uParam0, 16);
				}
				else
				{
					func_60(uParam0, 0);
					func_61("Exit", "SSCRFT_Sounds");
					if (uParam0->f_35)
					{
						uParam0->f_35 = 0;
						func_5(uParam0, 1);
					}
					else
					{
						func_5(uParam0, 3);
					}
				}
			}
			else if (func_35((*uParam0)[1], 1))
			{
				func_62(uParam0);
			}
			else if (func_35((*uParam0)[3], 1))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				uParam0->f_57 = !uParam0->f_57;
				func_57(uParam0);
				uParam0->f_77 = 0;
				uParam0->f_78 = 0;
				func_58(uParam0, 0, 0);
				func_49((*uParam0)[5], 0, 1);
				func_5(uParam0, 9);
			}
			else if (func_63((*uParam0)[5], 0, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Left", "SSCRFT_Sounds");
					func_64(uParam0, 0);
				}
			}
			else if (func_63((*uParam0)[5], 1, 1))
			{
				if (uParam0->f_79)
				{
					func_61("Nav_Right", "SSCRFT_Sounds");
					func_64(uParam0, 1);
				}
			}
			else if (func_35((*uParam0)[6], 1))
			{
				func_65(uParam0, 1);
			}
			else
			{
				iVar3 = -813979060;
				while (UIEVENTS::EVENTS_UI_IS_PENDING(iVar3))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iVar3, &iVar4))
					{
						if (iVar4 == 703281244 || iVar4 == -722926211)
						{
							func_66(uParam0);
						}
						else if (iVar4 == -1740156697)
						{
							func_67(uParam0, &iVar4);
						}
						else if (iVar4 == -1203660660)
						{
							if (func_26((*uParam0)[1], 0))
							{
								func_62(uParam0);
							}
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar3);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			iVar8 = PED::_0xC22AA08A8ADB87D4(Global_35);
			iVar9 = func_53(uParam0->f_77, -1636519629);
			if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_FIRE_CRAFT_CUP"))
			{
				if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1")))
				{
					PED::_0xD65FDC686A031C83(Global_35, joaat("KNEELFIRECRAFTCUP_TRANS_KNEEL1"), 6f);
					PED::_0x6D07B371E9439019(Global_35);
				}
				return;
			}
			if (iVar9 != -715814988)
			{
				if (iVar8 == joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNIFE1_TRANS_KNEEL1")))
					{
						PED::_0xD65FDC686A031C83(Global_35, joaat("KNIFE1_TRANS_KNEEL1"), 6f);
						PED::_0x6D07B371E9439019(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				if (((((((((iVar9 == 414472632 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_63, true, false)) || (iVar9 == -1136843638 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_66, true, false))) || (uParam0->f_88 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_88))) || (iVar9 == -732326901 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_68, true, false))) || (iVar9 == 786205940 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_67, true, false))) || (iVar9 == -1141771998 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_69, true, false))) || (iVar9 == 364689687 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_70, true, false))) || (iVar9 == -842117252 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_71, true, false))) || (iVar9 == -1610298873 && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_72, true, false)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_65, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_64)
				{
					func_68(uParam0);
					uParam0->f_64 = 0;
				}
				if (iVar8 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					if (uParam0->f_31)
					{
						if (!PED::_0x68821369A2CEADD5(Global_35, joaat("KNEEL1_TRANS_KNIFE1")))
						{
							PED::_0xD65FDC686A031C83(Global_35, joaat("KNEEL1_TRANS_KNIFE1"), 2f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						return;
					}
				}
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
				func_69(uParam0, 0, &uVar0);
				func_68(uParam0);
				if (func_70((*uParam0)[1]))
				{
					func_71(uParam0[1], 1, 1);
				}
				if (func_72(iVar9))
				{
					uParam0->f_53 = 250;
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_58(uParam0, uParam0->f_77, uParam0->f_78);
					func_73((*uParam0)[1], -1067771379, 0, 1);
					func_74((*uParam0)[1], 10, 1, 1);
					func_74((*uParam0)[1], 11, 1, 1);
					func_49((*uParam0)[1], 0, 1);
				}
				else
				{
					(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_73((*uParam0)[1], -1067771379, 0, 1);
					func_75((*uParam0)[1], 1, 1);
					func_74((*uParam0)[1], 10, 1, 1);
					func_74((*uParam0)[1], 11, 1, 1);
					func_49((*uParam0)[1], 0, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_72(iVar9))
			{
				if (!uParam0->f_36)
				{
					if (func_26((*uParam0)[1], 0))
					{
						if (func_76((*uParam0)[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_36 = 1;
							func_49((*uParam0)[1], 0, 1);
							func_49((*uParam0)[4], 0, 1);
						}
					}
				}
				if ((((((iVar9 == -1136843638 || iVar9 == -732326901) || iVar9 == 786205940) || iVar9 == -1141771998) || iVar9 == 364689687) || iVar9 == -842117252) || iVar9 == -1610298873)
				{
					if (uParam0->f_88 != 0)
					{
						if ((uParam0->f_88 == joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_88 != joaat("S_CFT_ARROW_SMALLGAME") && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_86));
							}
							if (func_77(uParam0->f_77, -1588156645) && iVar9 != -842117252)
							{
								uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(func_78(uParam0->f_77, 0), 1, Global_36, true, 1f);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
								if (iVar9 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
								}
							}
							else
							{
								uParam0->f_86 = OBJECT::CREATE_OBJECT(uParam0->f_88, Global_36, true, true, false, false, false);
								ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
							}
							if (iVar9 == 786205940)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -1141771998 || iVar9 == -1610298873)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else if (iVar9 == -842117252)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
							else
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
						if (iVar9 == -732326901 || iVar9 == 364689687)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
						}
						else if (iVar9 == -1141771998)
						{
							uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1f);
						}
						else if (iVar9 == -842117252)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("P_MOLOTOVEMPTY01X"), Global_36, true, true, false, false, true);
						}
						else if (iVar9 == -1610298873)
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), Global_36, true, true, false, false, true);
							if (iVar9 == -1610298873)
							{
								ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_79(uParam0, iVar9), "DYNAMITE", uParam0->f_86, 0);
							}
						}
						else
						{
							uParam0->f_86 = OBJECT::CREATE_OBJECT(joaat("S_CFT_ARROW"), Global_36, true, true, false, false, false);
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
						if (iVar9 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar9 == -1141771998 || iVar9 == -1610298873) || iVar9 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_86, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_87))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, true);
						}
					}
				}
				else if (iVar9 == 414472632 || iVar9 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (!func_80(0))
					{
						if (uParam0->f_21 == -1)
						{
							uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
							if (uParam0->f_21 == -1)
							{
								func_82(uParam0, iVar9, 0);
							}
							return;
						}
						else if (func_83(uParam0->f_21))
						{
							return;
						}
						uParam0->f_21 = -1;
					}
					else
					{
						func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
						func_86(uParam0->f_77, 1, 0, 1, 0);
						if (uParam0->f_31)
						{
							func_87();
						}
					}
					if (iVar9 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_86));
						}
					}
					uParam0->f_20++;
					uParam0->f_38++;
					if ((!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0)) || uParam0->f_20 >= uParam0->f_37)
					{
						func_82(uParam0, iVar9, 0);
						return;
					}
				}
				if (!uParam0->f_36)
				{
					if (!(func_26((*uParam0)[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SAFETOBREAKOUT")))
						{
							func_82(uParam0, iVar9, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_20 < (uParam0->f_37 - 1))
				{
					func_49((*uParam0)[1], 1, 1);
					func_49((*uParam0)[4], 1, 1);
					uParam0->f_36 = 0;
				}
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_79(uParam0, iVar9), "player"))
				{
					func_82(uParam0, iVar9, 0);
				}
			}
			else if (func_90(&(uParam0->f_89), (IntToFloat(uParam0->f_53) / 1000f)))
			{
				if (!func_80(0))
				{
					if (uParam0->f_21 == -1)
					{
						uParam0->f_21 = func_81(uParam0->f_77, uParam0->f_78);
						if (uParam0->f_21 == -1)
						{
							func_82(uParam0, iVar9, 0);
						}
						return;
					}
					else if (func_83(uParam0->f_21))
					{
						return;
					}
					uParam0->f_21 = -1;
				}
				else
				{
					func_85(uParam0->f_77, uParam0->f_78, 1, func_84(), 0);
					func_86(uParam0->f_77, 1, 1, 1, 0);
					if (uParam0->f_31)
					{
						func_87();
					}
				}
				uParam0->f_37 = -1;
				uParam0->f_38 = 0;
				func_91(131072);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				uParam0->f_55 = 0;
				bVar10 = true;
				if (!func_88(uParam0->f_77, uParam0->f_78, 0, func_84(), 0, 0) || func_89(uParam0->f_77, 1, 0))
				{
					bVar10 = false;
				}
				func_82(uParam0, iVar9, bVar10);
			}
			break;
		case 0:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_27(uParam0);
				func_31(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			if (!func_48(128))
			{
				if (!func_26((*uParam0)[2], 0))
				{
					func_49((*uParam0)[2], 1, 1);
					func_75((*uParam0)[2], 0, 1);
				}
				if (!func_26((*uParam0)[4], 0))
				{
					func_49((*uParam0)[4], 1, 1);
					func_75((*uParam0)[4], 1, 1);
				}
			}
			if (func_59((*uParam0)[2], 1))
			{
				func_27(uParam0);
				func_92(&(uParam0->f_89));
				func_5(uParam0, 14);
				return;
			}
			else if (func_93((*uParam0)[4], 1))
			{
				func_27(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
				iVar11 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar11 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar12 = func_79(uParam0, iVar9);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar12, "player", Global_35);
				func_60(uParam0, 0);
				func_61("Exit", "SSCRFT_Sounds");
				if (uParam0->f_31)
				{
					func_5(uParam0, 1);
				}
				else
				{
					func_5(uParam0, 0);
				}
				return;
			}
			else if (func_35((*uParam0)[1], 1))
			{
				func_49((*uParam0)[4], 0, 1);
				func_49((*uParam0)[2], 0, 1);
				func_49((*uParam0)[1], 0, 1);
				iVar9 = func_53(uParam0->f_77, -1636519629);
				iVar13 = func_79(uParam0, iVar9);
				if (iVar13 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar13, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar13);
				}
				func_92(&(uParam0->f_89));
				uParam0->f_36 = 0;
				func_5(uParam0, 12);
				return;
			}
			if (func_94((*uParam0)[4], 1))
			{
				if (!func_95(&(uParam0->f_89)))
				{
					func_96(&(uParam0->f_89));
				}
				else if (func_90(&(uParam0->f_89), 0.1f))
				{
					func_52((*uParam0)[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_95(&(uParam0->f_89)))
				{
					func_92(&(uParam0->f_89));
				}
				func_52((*uParam0)[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::VAR_STRING(0, uParam0->f_77), 1, 0, 0, 0);
			func_45(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_87));
				}
			}
			iVar9 = func_53(uParam0->f_77, -1636519629);
			iVar14 = func_79(uParam0, iVar9);
			if ((iVar14 == 0 || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar14) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar14, false))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_85));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_86));
				}
				iVar15 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar15 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar14, "player", Global_35);
				func_5(uParam0, 15);
			}
			break;
		case 1:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				if (func_70((*uParam0)[0]))
				{
					func_49((*uParam0)[0], 0, 1);
				}
				func_31(uParam0);
			}
			break;
		case 16:
			if (func_33())
			{
				func_34(0);
			}
			if (func_28(uParam0))
			{
				func_31(uParam0);
			}
			func_60(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
			Global_1911914.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_10(var uParam0)
{
	return uParam0->f_8;
}

void func_11(var uParam0, bool bParam1)
{
	func_27(uParam0);
	func_60(uParam0, 0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_39);
	if (func_33())
	{
		func_34(0);
	}
	if (bParam1)
	{
		func_97(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_17));
	}
	if (uParam0->f_22)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_69);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_70);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_71);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_72);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1911914.f_1576 = 0;
	if (func_23() == -1)
	{
		func_5(uParam0, 16);
	}
	else
	{
		if (uParam0->f_8 == 11)
		{
			if (uParam0->f_21 == -1)
			{
				func_81(uParam0->f_77, uParam0->f_78);
				func_98(uParam0->f_77, uParam0->f_20);
			}
		}
		uParam0->f_21 = -1;
		func_5(uParam0, 0);
	}
}

bool func_12()
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

int func_13(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_100(func_99(iParam0));
}

bool func_14(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_16(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_17()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_18()
{
	int iVar0;

	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	iVar0 = func_101(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return true;
	}
	return false;
}

bool func_19()
{
	int iVar0;
	int iVar1;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != joaat("WORLD_PLAYER_DYNAMIC_KNEEL") && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3")) && iVar1 != joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4"))
		{
			return true;
		}
	}
	return false;
}

void func_20(var uParam0)
{
	uParam0->f_18 = 1;
}

bool func_21(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_22(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_23()
{
	return Global_1572887.f_12;
}

bool func_24()
{
	return Global_1898068;
}

bool func_25()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

bool func_26(int iParam0, bool bParam1)
{
	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	return !func_102(iParam0, 4);
}

void func_27(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_28(var uParam0)
{
	return uParam0->f_18;
}

void func_29(var uParam0)
{
	StringCopy(&(uParam0->f_17), "CAMP", 8);
}

void func_30(var uParam0)
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_17)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_17));
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_RIFLE"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_REPEATER"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_45MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_9MM"), false);
	STREAMING::REQUEST_MODEL(joaat("S_AMMO_SHOTGUN"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_ARROW"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_TOMAHAWK01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE05"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_RAG01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV01"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CFT_MOLOTOV02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MOLOTOVEMPTY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	func_103(uParam0);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_31)
	{
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDFISHFILET01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_WHITEFLESHYMEAT01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDBIRDBREAST01XB"), false);
		STREAMING::REQUEST_MODEL(joaat("P_REDEFLESHYMEAT01XB"), false);
	}
}

void func_31(var uParam0)
{
	uParam0->f_18 = 0;
}

bool func_32(var uParam0)
{
	if (func_104(&(uParam0->f_17)))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_17)))
		{
			return false;
		}
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_66)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_67)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_68)))
	{
		return false;
	}
	if (!func_105(uParam0, &(uParam0->f_69)))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_RIFLE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_REPEATER")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_45MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_9MM")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_ARROW")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_TOMAHAWK01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_AMMO_SHOTGUN")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MOLOTOVEMPTY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CFT_MOLOTOV02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return false;
	}
	if (uParam0->f_31)
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDFISHFILET01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_WHITEFLESHYMEAT01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDBIRDBREAST01XB")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_REDEFLESHYMEAT01XB")))
		{
			return false;
		}
	}
	return true;
}

bool func_33()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1911914.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

bool func_35(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_36(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

void func_37(var uParam0)
{
	func_34(1);
	func_5(uParam0, 4);
}

bool func_38(var uParam0)
{
	if (uParam0->f_54 == 0)
	{
		Global_1911914.f_1576 = 0;
		uParam0->f_55 = 0;
		func_107(uParam0, 600942249);
		uParam0->f_54++;
		return false;
	}
	else if (uParam0->f_54 == 1)
	{
		func_107(uParam0, -257768755);
		uParam0->f_54++;
		return false;
	}
	else
	{
		func_107(uParam0, -214678071);
		uParam0->f_54 = 0;
	}
	uParam0->f_55 = 0;
	return true;
}

bool func_39(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "filter", func_108(uParam0->f_52));
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterCount", 5 + 1);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "filterIndex", uParam0->f_52);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "tipText", "");
	uParam0->f_51 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_39, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_39, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_39, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_39, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_109(&(uParam0->f_41[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_46[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_39, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_46[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_46[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if (func_21(Global_1911914[iVar0 /*9*/].f_6, 0))
		{
			func_110(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 30)
			{
				uParam0->f_55 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (uParam0->f_60 == 0)
	{
		uParam0->f_57 = 0;
	}
	uParam0->f_56 = 0;
	return true;
}

void func_41(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_40))
	{
		uParam0->f_40 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_39, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40);
	}
	uParam0->f_76 = 600942249;
	uParam0->f_75 = 0;
	uParam0->f_74 = 0;
}

bool func_42(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		if ((uParam0->f_57 && Global_1911914[iVar0 /*9*/].f_2) || !uParam0->f_57)
		{
			if (Global_1911914.f_1585 != 0)
			{
				bVar3 = func_77(Global_1911914[iVar0 /*9*/].f_6, Global_1911914.f_1585);
				if (uParam0->f_81 == bVar3)
				{
				}
				else
				{
					func_110(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_55 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_55 = 0;
				if (!uParam0->f_81 && Global_1911914.f_1585 != 0)
				{
					uParam0->f_81 = 1;
					return false;
				}
				uParam0->f_56 = 0;
				uParam0->f_81 = 0;
				return true;
			}
		}
	}
}

bool func_43(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_58 = 1;
	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("CRAFTING")))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1014850361))
		{
			func_111(1);
			func_112(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("CRAFTING"));
		if (iVar0 == 0)
		{
			func_112(8);
			func_111(1);
			func_113(0, -100);
			func_113(2, -100);
			func_113(1, -100);
			return true;
		}
	}
	return false;
}

bool func_44(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_84();
	iVar0 = uParam0->f_55;
	while (iVar0 <= (Global_1911914.f_1576 - 1))
	{
		func_114(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_55 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_61 = 0;
	uParam0->f_55 = 0;
	return true;
}

void func_45(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = func_115(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_46(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9))
	{
		iVar0 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(uParam0->f_9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

int func_47(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_102(iVar0, 2))
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
		func_116(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	return (Global_1392040.f_1 && iParam0) != 0;
}

void func_49(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (bParam1)
	{
		func_117(iParam0, 4);
		func_118(iVar0, 1);
		func_119(iVar0, 1);
	}
	else
	{
		func_120(iParam0, 4);
		func_119(iVar0, 0);
	}
}

void func_50(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	iVar2 = iVar0;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (func_21(iVar2, 0) && func_121(iVar2, uParam0->f_52))
	{
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		uParam0->f_77 = iVar2;
		uParam0->f_78 = iVar1;
		func_71(uParam0[1], 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1911914)
			{
				iVar6 = Global_1911914[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_79 = 1;
			func_49((*uParam0)[5], 1, 1);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
			uParam0->f_79 = 0;
			func_49((*uParam0)[5], 0, 1);
		}
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f));
		uParam0->f_80 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_73 = *uParam1;
		(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
		func_74((*uParam0)[1], 11, 1, 1);
		if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(iVar2));
			func_65(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			if (Global_1911914.f_1579 || !func_124(uParam0->f_77, uParam0->f_78, 1))
			{
				func_126(uParam0);
			}
		}
	}
}

bool func_51(int iParam0)
{
	if (func_127(iParam0) == joaat("CONSUMABLE") && INVENTORY::_0x245D07651B1D183B(iParam0, 16777216))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, sParam1);
}

int func_53(int iParam0, int iParam1)
{
	struct<2> Var0[20];
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

char* func_54(var uParam0)
{
	if (uParam0->f_57)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_55(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_102(iVar0, 2))
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
		func_116(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_57(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_51);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_41[iVar0], "inUse", false);
		iVar0++;
	}
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "variantVisible", false);
}

void func_58(var uParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_21(iParam1, 0))
	{
		if (func_70((*uParam0)[1]))
		{
			func_49((*uParam0)[1], 0, 1);
		}
		return;
	}
	bVar2 = func_84();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1911914.f_1579 && func_124(iParam1, iParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_128(iParam1, iParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0, 1))
	{
		bVar3 = false;
	}
	else if (func_23() == -1)
	{
		if (func_36(4096))
		{
			if (func_53(iParam1, 1697966752) != 337650881)
			{
				bVar3 = false;
			}
		}
		else if (func_36(8192))
		{
			if (iParam1 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
			{
				bVar3 = false;
			}
		}
	}
	if (bVar3)
	{
		if (((func_89(iParam1, 1, 0) || ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iParam1, -1636519629) == -701492487)) || (!uParam0->f_31 && ((uParam0->f_80 || iParam2 == -214678071) || iParam2 == joaat("COST_CRAFTING_GRILL")))) || (!uParam0->f_32 && iParam2 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar3 = false;
		}
		else if (uParam0->f_37 == -1)
		{
			iVar6 = func_129(iParam1, 0, 0);
			iVar7 = func_130(iParam1, 0);
			iVar8 = func_131(iParam1, iParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_37 = func_132(iVar7, iVar8);
		}
	}
	if (func_70((*uParam0)[1]))
	{
		if (func_51(iParam1))
		{
			func_52((*uParam0)[1], "CAMP_REC_COOK", 1);
		}
		else if (func_53(iParam1, -1636519629) == -701492487)
		{
			func_52((*uParam0)[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_52((*uParam0)[1], "CAMP_REC_MAKE", 1);
		}
		func_49((*uParam0)[1], bVar3, 1);
	}
	func_133(iParam1, iParam2, uParam0, iVar5, bVar4);
	if (func_70((*uParam0)[6]))
	{
		func_49((*uParam0)[6], !bVar4, 1);
	}
}

bool func_59(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_60(var uParam0, bool bParam1)
{
	func_111(0);
	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(joaat("CRAFTING"), 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("CRAFTING"));
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("CRAFTING"));
	}
	uParam0->f_58 = 0;
	func_91(8);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

void func_61(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xCE5D0FFE83939AF1(iVar0, sParam0, sParam1, 1);
		Global_1956588[Global_1956588.f_25] = iVar0;
		Global_1956588.f_25 = (Global_1956588.f_25 + 1 % 24);
	}
}

void func_62(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_53(uParam0->f_77, -1636519629) == -701492487)
	{
		func_60(uParam0, 0);
	}
	else
	{
		func_60(uParam0, 1);
	}
	func_71(uParam0[1], 1, 1);
	func_71(uParam0[5], 1, 1);
	func_71(uParam0[6], 1, 1);
	func_71(uParam0[3], 1, 1);
	uParam0->f_36 = 1;
	if (!uParam0->f_80 && !func_51(uParam0->f_77))
	{
		func_112(131072);
		iVar0 = func_53(uParam0->f_77, -1636519629);
		iVar1 = func_79(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_36 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_88 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					uParam0->f_88 = joaat("S_CFT_MOLOTOV01");
				}
				else if (func_77(uParam0->f_77, -1588156645))
				{
					uParam0->f_88 = func_134(func_78(uParam0->f_77, 0));
				}
				else if (func_77(uParam0->f_77, 457423347))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_DYNAMITE");
				}
				else if (func_77(uParam0->f_77, -1846429632))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_FIRE");
				}
				else if (func_77(uParam0->f_77, -1067199465))
				{
					uParam0->f_88 = joaat("S_CFT_ARROW_SMALLGAME");
				}
				else
				{
					uParam0->f_88 = func_134(uParam0->f_77);
				}
			}
			if (uParam0->f_88 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_88, false);
			}
		}
		func_52((*uParam0)[2], "CAMP_REC_BACK", 1);
		func_73((*uParam0)[2], -1067771379, 0, 1);
		func_49((*uParam0)[2], 0, 1);
		func_75((*uParam0)[2], 0, 1);
		(*uParam0)[4] = func_47("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_135(uParam0[4], "INPUT_PCRAFT_EXIT");
		func_73((*uParam0)[4], -1067771379, 0, 1);
		func_49((*uParam0)[4], 0, 1);
		func_74((*uParam0)[4], 19, 1, 1);
		func_74((*uParam0)[4], 20, 1, 1);
		func_74((*uParam0)[4], 13, 1, 1);
		func_74((*uParam0)[2], 13, 1, 1);
		if (func_70((*uParam0)[2]))
		{
			func_73((*uParam0)[2], -1067771379, 0, 1);
		}
		func_5(uParam0, 12);
	}
	else
	{
		func_5(uParam0, 11);
	}
}

bool func_63(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UIPROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

void func_64(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_73))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_78 == -214678071 || uParam0->f_78 == joaat("COST_CRAFTING_GRILL"))
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_136(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
				if (func_137(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_78 = -214678071;
						uParam0->f_77 = func_138(0, iVar3);
						bVar2 = true;
					}
					func_139(iVar3);
				}
			}
			else
			{
				Var5 = { func_136(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, func_53(uParam0->f_77, 1697966752), 0) };
				if (func_137(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (iVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (iVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							iVar17 = func_138(iVar16, iVar3);
							if (func_77(iVar17, iVar15))
							{
								uParam0->f_78 = joaat("COST_CRAFTING_GRILL");
								uParam0->f_77 = iVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_139(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_77);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while (((Var19.f_2 != joaat("COST_TYPE_CRAFT") || Var19 == -489628648) || (!Global_1911914.f_1579 && func_124(uParam0->f_77, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_77, iVar0, &Var19))
				{
				}
			}
			uParam0->f_78 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eCost", uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "eOutputItem", uParam0->f_77);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1911914)
		{
			iVar68 = Global_1911914[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_73, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_39, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "variantText", MISC::VAR_STRING(0, uParam0->f_77));
		uParam0->f_37 = -1;
		uParam0->f_20 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "RPGDescription", func_125(uParam0->f_77));
		func_114(uParam0, -1, func_84(), uParam0->f_73, 0, bVar2, 0);
		func_58(uParam0, uParam0->f_77, uParam0->f_78);
	}
}

void func_65(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_82 = !uParam0->f_82;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", uParam0->f_82);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", !uParam0->f_82);
	if (!uParam0->f_82)
	{
		func_52((*uParam0)[6], "INFO", 1);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_140(uParam0);
	}
	else
	{
		func_52((*uParam0)[6], "INGREDIENTS", 1);
		func_126(uParam0);
	}
	if (uParam0->f_78 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_73, "iNumCostVariants") <= 1 && uParam0->f_82)
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_131(uParam0->f_77, uParam0->f_78, func_84(), 0);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_66(var uParam0)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_141(uParam0);
	func_57(uParam0);
	func_140(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowIngredients", false);
	uParam0->f_77 = 0;
	uParam0->f_78 = 0;
	func_58(uParam0, 0, 0);
	func_5(uParam0, 9);
}

void func_67(var uParam0, int iParam1)
{
	func_57(uParam0);
	func_140(uParam0);
	func_50(uParam0, &(iParam1->f_3));
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_53(uParam0->f_77, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar1 = func_142(uParam0->f_77);
			if (iVar1 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "arrow", uParam0->f_86, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_66, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
		{
			iVar2 = func_142(uParam0->f_77);
			if (iVar2 != 0)
			{
				uParam0->f_85 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, true, false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_85, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_85, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_85, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_143(uParam0->f_77), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "bullet", uParam0->f_85, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_68, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_69, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_69);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_53 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
		{
			uParam0->f_86 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_THROWING_KNIVES"), 1, Global_36, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_86, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_86, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
		{
			uParam0->f_87 = OBJECT::CREATE_OBJECT(joaat("P_CS_RAG01X"), Global_36, true, true, false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_87, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_87, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "RAG", uParam0->f_87, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_70, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_70);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_70, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_69, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_71, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_71);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_71, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_53 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_72, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_72);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_72, "pl_craft", true);
	}
	else
	{
		uParam0->f_53 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_122(uParam0->f_77), func_123(uParam0->f_77)) * 1000f));
		func_96(&(uParam0->f_89));
		TASK::TASK_PLAY_ANIM(Global_35, func_122(uParam0->f_77), func_123(uParam0->f_77), 8f, -8f, -1, 67108880, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_69(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_70((*uParam0)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_70((*uParam2)[iVar1]))
				{
					if ((*uParam0)[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_49((*uParam0)[iVar0], bParam1, 1);
		}
		iVar0++;
	}
}

bool func_70(int iParam0)
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

void func_71(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_70(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_106(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_144(iVar0);
	*uParam0 = 0;
}

bool func_72(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

void func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_75(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	func_118(iVar0, bParam1);
}

bool func_76(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_77(int iParam0, int iParam1)
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

int func_78(int iParam0, bool bParam1)
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
	if (func_21(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_145(iVar0) || func_146(iVar0))
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

int func_79(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_65;
		case -732326901:
			return uParam0->f_68;
		case -1136843638:
			return uParam0->f_66;
		case 786205940:
			return uParam0->f_67;
		case -1141771998:
			return uParam0->f_69;
		case 364689687:
			return uParam0->f_70;
		case 414472632:
			return uParam0->f_63;
		case -842117252:
			return uParam0->f_71;
		case -1610298873:
			return uParam0->f_72;
		default:
			break;
	}
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_147(bParam0));
}

int func_81(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<17> Var5;
	int iVar22;
	struct<7> Var23;
	struct<2> Var30;

	if (!func_21(iParam0, 0))
	{
		return -1;
	}
	if (!func_88(iParam0, iParam1, 0, 0, 0, 1))
	{
		return -1;
	}
	Var0 = { func_148(iParam0, 1, 0) };
	if (func_149(iParam0, &Var0, 1, 0, 1))
	{
		return -1;
	}
	Var5 = { func_150(iParam0, Var0, Var0.f_4, 1) };
	Var5.f_13 = iParam1;
	Var5.f_12 = 1248274121;
	iVar22 = func_151(2113164098, &Var5, 1);
	if (iVar22 == -1)
	{
		return -1;
	}
	Var23.f_1 = 1;
	func_152(iVar22, Var23);
	Var30 = { func_153(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var30, 1);
	return iVar22;
}

void func_82(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_55 = 0;
	func_112(262144);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	iVar0 = func_79(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!func_48(128))
	{
		func_49((*uParam0)[2], 1, 1);
		func_49((*uParam0)[4], 1, 1);
	}
	func_75((*uParam0)[2], 0, 1);
	func_75((*uParam0)[4], 1, 1);
	func_154((*uParam0)[1], 1);
	func_71(uParam0[1], 1, 1);
	(*uParam0)[1] = func_47("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_53, uParam0->f_53 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_74((*uParam0)[1], 11, 1, 1);
	func_74((*uParam0)[1], 19, 1, 1);
	func_73((*uParam0)[1], -1067771379, 0, 1);
	func_49((*uParam0)[1], bParam2, 1);
	func_5(uParam0, 13);
}

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_155(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_84()
{
	int iVar0;
	int iVar1;

	iVar0 = func_156(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_157(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_85(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(iParam0, iParam1, 0, 1);
	return func_158(iParam0, iParam1, bParam2, bParam3, iParam4);
}

void func_86(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	struct<2> Var1;
	vector3 vVar3;
	int iVar10;

	if (!func_21(iParam0, 0))
	{
		return;
	}
	func_160(func_159(joaat("ITEMS_CRAFTED")), iParam1);
	if (bParam3 && iParam0 != joaat("CONSUMABLE_COFFEE"))
	{
		if (func_23() == -1)
		{
			if (func_77(iParam0, -1588156645))
			{
				iVar0 = func_161(func_78(iParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar0))
				{
					func_162(iVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_127(iParam0) == joaat("HORSE_EQUIPMENT"))
			{
				if (func_163(iParam0, 0))
				{
					func_164(iParam0, 1, 0, 1, 0);
				}
			}
			else
			{
				func_165(iParam0, iParam1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		else
		{
			func_166(iParam0, iParam4, iParam1);
		}
	}
	Var1 = { func_153(iParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var1, iParam1);
	if (func_121(iParam0, 0))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")) };
	}
	else if (func_121(iParam0, 2))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")) };
	}
	else if (func_121(iParam0, 5))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")) };
	}
	else if (func_121(iParam0, 1))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")) };
	}
	else if (func_121(iParam0, 3))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")) };
	}
	else if (func_121(iParam0, 4))
	{
		Var1 = { func_167(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")) };
	}
	STATS::_STAT_ID_INCREMENT_INT(&Var1, 1);
	if (func_23() == 0)
	{
		Global_1051039 = iParam0;
		return;
	}
	if (bParam2)
	{
		if (func_121(iParam0, 0))
		{
			func_168(40);
		}
		else
		{
			func_168(39);
		}
	}
	iVar10 = 0;
	if ((ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar3) && vVar3.z == joaat("CLOTHING")) && func_169(Global_35, iParam0, &iVar10))
	{
		func_170(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	}
}

void func_87()
{
	if (func_171())
	{
		func_172(1);
	}
}

bool func_88(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_128(iParam0, iParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, iParam4, bParam5);
}

bool func_89(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_148(iParam0, 0, 0) };
	return func_149(iParam0, &Var0, iParam1, 0, bParam2);
}

bool func_90(var uParam0, float fParam1)
{
	if (!func_95(uParam0))
	{
		return false;
	}
	if (func_173(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_91(int iParam0)
{
	if (func_36(iParam0))
	{
		Global_1392040 = (Global_1392040 - (Global_1392040 && iParam0));
	}
}

void func_92(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_93(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_94(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return false;
	}
	iVar0 = func_106(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945938[iVar0 /*18*/].f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1945938[iVar0 /*18*/].f_3);
}

bool func_95(var uParam0)
{
	return func_174(*uParam0, 1);
}

void func_96(var uParam0)
{
	func_175(uParam0, 0f);
}

void func_97(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_69, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_70, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_71, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_72, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_85))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_85));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_86))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_86));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_87))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_87));
	}
}

void func_98(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_176(11, 1, 0);
		iVar0++;
	}
	if (func_121(iParam0, 0))
	{
		func_177(40);
	}
	else
	{
		func_177(39);
	}
}

int func_99(int iParam0)
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

int func_100(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_101(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_178(iVar0))
		{
			fVar3 = func_179(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_103(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_63))
	{
		uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_65))
	{
		uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_66))
	{
		uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_67))
	{
		uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_68))
	{
		uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_69))
	{
		uParam0->f_69 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_69);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_70))
	{
		uParam0->f_70 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_70);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_71))
	{
		uParam0->f_71 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_71);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_72))
	{
		uParam0->f_72 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_72);
	}
}

bool func_104(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_105(var uParam0, var uParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_103(uParam0);
		return false;
	}
	return true;
}

int func_106(int iParam0)
{
	return iParam0;
}

int func_107(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = { func_136(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1911914.f_1584, 0) };
	if (func_137(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			iVar13 = func_138(iVar12, iVar10);
			if (func_21(iVar13, 0))
			{
				if (uParam0->f_55 >= 175)
				{
				}
				else
				{
					if (Global_1911914.f_1584 == 0 && func_77(iVar13, 302810039))
					{
						if (!(Global_1911914.f_1585 != 0 && func_77(iVar13, Global_1911914.f_1585)))
						{
						}
						else if (func_77(iVar13, 266762988))
						{
						}
						else
						{
							func_180(uParam0, iVar13, iParam1);
							func_181(uParam0, iVar13, iParam1);
						}
						iVar12++;
						func_182(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_109(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_39, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_110(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = Global_1911914[iParam2 /*9*/].f_6;
	if (bParam4 || func_121(iVar0, uParam0->f_52))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_114(uParam0, -1, bParam3, Global_1911914[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, uParam0->f_56, -2047994727, Global_1911914[iParam2 /*9*/].f_1);
			}
			else
			{
				func_183(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam2 /*9*/].f_1);
			}
			func_183(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_56 == 0)
		{
			uParam0->f_75 = Global_1911914[iParam2 /*9*/].f_6;
			uParam0->f_76 = Global_1911914[iParam2 /*9*/].f_5;
			uParam0->f_74 = Global_1911914[iParam2 /*9*/].f_1;
		}
		uParam0->f_56++;
	}
}

void func_111(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

void func_112(int iParam0)
{
	if (!func_36(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

void func_113(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_114(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1911914[iParam1 /*9*/].f_1;
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	iVar3 = iVar1;
	iVar4 = iVar2;
	iVar5 = func_131(iVar3, iVar4, bParam2, 0);
	iVar6 = func_129(iVar3, 0, 0);
	iVar7 = func_130(iVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_132(iVar7, iVar5), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (func_36(4096))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && func_53(iVar3, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36(8192))
	{
		iVar9 = func_184(((iVar7 > 0 && iVar5 > 0) && iVar3 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar9 = func_184((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_185(iVar3))
	{
		if (func_186(iVar3, iVar4, uParam0, bParam2, &iVar11, &iVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				iVar3 = iVar11;
				iVar4 = iVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", iVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", iVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar4 == -214678071 || iVar4 == joaat("COST_CRAFTING_GRILL")) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar4 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar9 = 0;
	}
	if (!Global_1911914.f_1579 && func_124(iVar3, iVar4, 1))
	{
		iVar9 = 0;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (iVar9 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iVar3, -1636519629) == -701492487)
		{
			Global_1911914[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_57 && iVar9 == 0) && Global_1911914[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_40, iVar0);
		}
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_187(iVar3, &Var15, joaat("INVENTORY"), 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", iVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_31)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_115(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_116(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_118(iParam0, 1);
	func_119(iParam0, 1);
	func_120(iParam0, 128);
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_118(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_102(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_119(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_120(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

bool func_121(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(iParam0);
	switch (iParam1)
	{
		case 1:
			if ((func_77(iParam0, -537818634) || func_77(iParam0, -458578204)) && !func_77(iParam0, -1242251796))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == joaat("AMMO"))
			{
				if (func_77(iParam0, -1588156645))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == joaat("WEAPON"))
			{
				return true;
			}
			else if (iVar0 == joaat("AMMO"))
			{
				if (func_77(iParam0, -1588156645))
				{
					return true;
				}
			}
			break;
		case 0:
			if (func_51(iParam0) || func_53(iParam0, -1636519629) == -701492487)
			{
				return true;
			}
			break;
		case 4:
			if (func_77(iParam0, 127710288))
			{
				return true;
			}
			break;
		case 5:
			if (func_77(iParam0, -1242251796))
			{
				return true;
			}
			break;
	}
	return false;
}

char* func_122(var uParam0)
{
	return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
}

char* func_123(var uParam0)
{
	return "craft_trans_stow";
}

bool func_124(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_23() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_188(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_125(int iParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_126(var uParam0)
{
	if (func_77(uParam0->f_77, 1147021565) && !func_77(uParam0->f_77, 1919582297))
	{
		if (func_121(uParam0->f_77, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_77, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
	}
}

int func_127(int iParam0)
{
	vector3 vVar0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_128(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if ((!Global_1911914.f_1579 && func_124(iParam0, iParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_189(iParam0, 1, iParam1, &Var0, iParam4, bParam6, iParam7, bParam8))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

int func_129(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_190(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_191(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_147(bParam2), iParam0, 0);
	return iVar2;
}

int func_130(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_148(iParam0, 0, 0) };
	return func_192(iParam0, &Var0, 0, bParam1);
}

int func_131(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!func_193(iParam0, iParam1, &Var0, &iVar31, bParam3, 0))
	{
		return 0;
	}
	bVar33 = func_80(0);
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @256; //curOff = 64
		}
		else
		{
			iVar35 = func_129(Var0[iVar32 /*2*/], 0, 0);
			if (bVar33)
			{
				if (func_194(Var0[iVar32 /*2*/]) || func_195(Var0[iVar32 /*2*/]))
				{
					iVar35 = (iVar35 + func_196(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + func_197(7, Var0[iVar32 /*2*/], &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (func_198(7, Var0[iVar32 /*2*/]) + func_199(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar35 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_132(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_133(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	struct<2> Var36;
	int iVar39;
	bool bVar40;
	int iVar41;
	char* sVar42;
	char cVar43[16];
	int iVar45;
	int iVar46;
	int iVar47;
	var uVar48;
	int iVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_51);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_51, uParam2->f_46[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "inUse", false);
		iVar33++;
	}
	if (!bParam4 && func_193(iParam0, iParam1, &Var0, &iVar32, 1, 0))
	{
		bVar35 = func_84();
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				iVar31 = Var0[iVar33 /*2*/];
				if (func_21(iVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "visible", true);
					if (func_187(iVar31, &Var36, joaat("INVENTORY"), 0, 0, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[iVar33], "texture", Var36);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_41[iVar33], "textureDictionary", Var36.f_1);
					}
					iVar39 = func_129(iVar31, 0, 0);
					if (func_194(iVar31) || func_195(iVar31))
					{
						if (bVar35)
						{
							iVar41 = 0;
							iVar39 = (iVar39 + func_197(7, iVar31, &iVar41));
						}
						iVar39 = (iVar39 + func_196(iVar31, 0));
					}
					bVar40 = iVar39 >= Var0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[iVar33], "count", iVar39);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_41[iVar33], "enabled", func_184(bVar40, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_41[iVar33], "inUse", true);
					if (!bVar40)
					{
						bVar34 = false;
					}
					sVar42 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, Var0[iVar33 /*2*/]), Var0[iVar33 /*2*/].f_1);
					StringCopy(&cVar43, "Text", 16);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_46[iVar33], &cVar43, sVar42);
					StringCopy(&cVar43, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_46[iVar33], &cVar43, func_184(bVar40, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_51, -1, 309940639, uParam2->f_46[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == joaat("COST_CRAFTING_GRILL")))
		{
			bVar34 = false;
			if (func_51(iParam0))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else if (!uParam2->f_32 && uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
		{
			bVar34 = false;
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
		}
		else
		{
			iVar45 = func_129(iParam0, 0, 0);
			iVar46 = func_130(iParam0, 0);
			if ((iVar46 - iVar45) > 0 || iVar46 == -1)
			{
				iVar47 = func_53(iParam0, -1636519629);
				if (!uParam2->f_83 && iVar47 == -701492487)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_PERC"));
				}
				else if (iVar47 == -701492487 && uParam2->f_84 > 0)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_PERC_FULL"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam3, &uVar48))));
				}
				else
				{
					iVar49 = func_131(iParam0, uParam2->f_78, func_84(), 0);
					if (uParam2->f_78 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_73, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_39, "ShowRpgDescription"))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar49));
						}
					}
					else if (uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar49));
					}
					else if (iVar47 == -701492487)
					{
						if (iVar49 == 1)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", iVar49));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", iVar49));
						}
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", iVar49));
					}
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", iVar45, iVar46, MISC::VAR_STRING(0, iParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_31 && ((uParam2->f_80 || uParam2->f_78 == -214678071) || uParam2->f_78 == joaat("COST_CRAFTING_GRILL")))
	{
		bVar34 = false;
		if (func_51(iParam0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (!uParam2->f_32 && uParam2->f_78 == joaat("COST_CRAFTING_GRILL"))
	{
		bVar34 = false;
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_GRLL_CK"));
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_39, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

int func_134(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_135(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_70(*uParam0))
	{
		iVar0 = func_106(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, sParam1);
		}
	}
}

struct<10> func_136(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_137(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, int iParam1)
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

int func_139(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_0xCBB7B6EDFA933ADE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_140(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_39, "ShowRpgPlayer", false);
}

void func_141(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_39, "filterIndex");
	uParam0->f_52 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_39, "filter", func_108(uParam0->f_52));
}

int func_142(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return joaat("S_AMMO_9MM");
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return joaat("S_AMMO_45MM");
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return joaat("S_AMMO_RIFLE");
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return joaat("S_AMMO_REPEATER");
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return joaat("S_AMMO_SHOTGUN");
	}
	return 0;
}

Vector3 func_143(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

void func_144(int iParam0)
{
	if (!func_200(iParam0))
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

bool func_145(int iParam0)
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

bool func_146(int iParam0)
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

int func_147(bool bParam0)
{
	if (func_23() == -1)
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

struct<5> func_148(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_201(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_127(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_202(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_203(bParam1) };
			if (bParam2 && func_204(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_205(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_205(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_206(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_207(bParam1) };
			switch (func_208(iParam0))
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
			if (func_209(iParam0, -1823706425))
			{
				Var0 = { func_202(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_209(iParam0, -1483207246))
			{
				Var0 = { func_202(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_210(Var0, &Var27, bParam1, 0))
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

bool func_149(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_211(&iParam0);
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (func_212(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_203(0) };
			Var4.f_9 = -1591664384;
			if (!func_205(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_206(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_204(iParam0, 1))
			{
				if (!func_205(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_206(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_213(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_192(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_214(iParam0))
	{
		iVar28 = func_215(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_147(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

struct<17> func_150(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_202(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	return Var0;
}

int func_151(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_216(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_152(int iParam0, struct<7> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == 1 || Global_1224227.f_1[iVar0 /*9*/].f_1 == 5)
			{
				Global_1224227.f_1[iVar0 /*9*/].f_2 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

struct<2> func_153(int iParam0)
{
	return func_167(joaat("MADE"), iParam0);
}

void func_154(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_70(iParam0))
	{
		return;
	}
	iVar0 = func_106(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945938[iVar0 /*18*/].f_3);
}

int func_155(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			return Global_1224227.f_1[iVar0 /*9*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_156(int iParam0)
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

float func_157(int iParam0, int iParam1, bool bParam2)
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
	return func_219(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_158(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;

	if (!func_80(0))
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_189(iParam0, 1, iParam1, &iVar31, &uVar35, bParam3, iParam4, 1))
	{
		iVar33 = iVar31;
		return 0;
	}
	if (func_193(iParam0, iParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			iVar33 = Var0[iVar36 /*2*/];
			if (func_21(iVar33, 0))
			{
				if (iVar33 == joaat("CURRENCY_CASH"))
				{
					func_220(Var0[iVar36 /*2*/].f_1, 0, 0, bParam2, 1);
				}
				else if (bParam3)
				{
					if (func_194(iVar33) || func_195(iVar33))
					{
						if (!func_221(iVar33, Var0[iVar36 /*2*/].f_1, 0))
						{
							iVar37 = func_222(7, iVar33, Var0[iVar36 /*2*/].f_1);
						}
						func_223(iVar33, iVar37, 562618531, 0, 0);
						Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - iVar37);
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							if (!func_221(iVar33, Var0[iVar36 /*2*/].f_1, 0))
							{
								func_224(iVar33, Var0[iVar36 /*2*/].f_1);
							}
							if (func_221(iVar33, Var0[iVar36 /*2*/].f_1, 0))
							{
								func_225(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, -142743235, 0);
							}
						}
					}
					else
					{
						if (func_199(iVar33) > 0)
						{
							func_226(iVar33);
							Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - 1);
						}
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							if (func_198(7, iVar33) > 0)
							{
								func_227(7, iVar33, Var0[iVar36 /*2*/].f_1);
								Var0[iVar36 /*2*/].f_1 = (Var0[iVar36 /*2*/].f_1 - func_227(7, iVar33, Var0[iVar36 /*2*/].f_1));
							}
						}
						if (Var0[iVar36 /*2*/].f_1 > 0)
						{
							func_225(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, 562618531, 0);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (func_194(iVar33) || func_195(iVar33))
					{
						if (!func_221(iVar33, Var0[iVar36 /*2*/].f_1, 0))
						{
							func_224(iVar33, Var0[iVar36 /*2*/].f_1);
						}
					}
					func_225(iVar33, Var0[iVar36 /*2*/].f_1, bParam2, 562618531, 0);
				}
				else
				{
					func_228(iVar33, iParam4, Var0[iVar36 /*2*/].f_1, 562618531);
				}
				iVar38 = func_229(&iVar33);
				if (func_230(iVar38))
				{
					iVar39 = func_231(iVar38);
					func_160(func_167(joaat("USED_IN_RECIPE"), iVar39), Var0[iVar36 /*2*/].f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_159(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_160(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_161(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0))
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

void func_162(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_232(iParam0))
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

bool func_163(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_233(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_234() };
	Var10.f_4 = uVar9;
	if (func_235(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_236(iParam0, 1))
			{
			}
		}
		if (func_237(iParam0))
		{
			func_163(func_238(iParam0), 1);
		}
		func_239();
		return true;
	}
	return false;
}

void func_164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
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
	if (!func_21(iParam0, 0))
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
	if (!func_240())
	{
		func_241(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_242(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_242(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_243(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_127(iParam0);
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
	else if (!func_187(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_245(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_244(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_77(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_244(iParam0));
	}
	func_246(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_165(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_247(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_248(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_249(iParam0, bParam2);
	iVar2 = 0;
	if (func_129(iParam0, 0, 0) == 0)
	{
		if (func_250(iParam0))
		{
			iVar5 = func_251(iParam0);
			iVar6 = func_252(iVar5);
			iVar7 = func_253(iVar6) + 1;
			func_254(iVar5);
			if (func_255(38))
			{
				func_256(483, 0);
			}
			else
			{
				func_256(482, 0);
			}
			if (iVar7 == func_257(iVar6))
			{
				func_165(func_258(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_259() && func_260(4))
				{
					if (func_259() && (func_261(38) || func_255(38)))
					{
						func_263(38, func_258(iVar6), 0, 0, func_262(), 0, -1, 0);
						func_264(2);
					}
					else
					{
						func_263(38, func_258(iVar6), 0, 0, func_262(), 0, -1, 0);
						func_264(1);
					}
				}
			}
			else if (func_259() && func_260(4))
			{
				if (func_259() && (func_261(38) || func_255(38)))
				{
					func_263(38, 0, 0, 0, func_262(), 0, -1, 0);
					func_264(2);
				}
				else
				{
					func_263(38, 0, 0, 0, func_262(), 0, -1, 0);
					func_264(1);
				}
			}
			if (func_259() && func_260(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_259() && (func_261(38) || func_255(38)))
					{
						func_265(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_265(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_127(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_77(iParam0, 866047851) && !func_77(iParam0, -1979000645)) && !func_77(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_243(iParam0, 8388608) && !func_266(28))
	{
		func_267(28);
	}
	if (!bVar3)
	{
		if (func_77(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_208(iParam0) == -1447088266)
			{
				iVar1 = func_161(func_78(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_162(iVar1);
					}
					if (func_80(0) && func_268(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_269(iParam0, iVar0, iParam5);
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
					if (func_23() == -1)
					{
						func_162(iParam0);
					}
					if (func_80(0) && func_268(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_269(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_127(iParam0) == joaat("WEAPON"))
		{
			if (!func_270(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_127(iParam0) == joaat("AMMO") && func_271(iParam0))
		{
			if (!func_272(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_77(iParam0, 866047851))
		{
			func_273(iParam0);
		}
		else if (func_77(iParam0, 2000026003))
		{
			func_274(iParam0);
		}
		else if (func_77(iParam0, -103750053))
		{
			func_160(func_159(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_160(func_167(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_77(iParam0, -121341956) && !func_77(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_275(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_256(498, 0);
				}
			}
			if (func_77(iParam0, -2017733358) || func_77(iParam0, -1369131378))
			{
				func_276(iParam0);
			}
		}
		else if (func_77(iParam0, -136654233))
		{
			if (func_77(iParam0, -1021472396))
			{
			}
		}
		else if (func_77(iParam0, -1466706512) && func_77(iParam0, 1147021565))
		{
			func_256(484, 0);
		}
		else if (func_77(iParam0, 1147021565) && func_77(iParam0, -524514947))
		{
		}
		else if (func_77(iParam0, 554195525))
		{
		}
		else if (func_77(iParam0, 589988438))
		{
			if (func_277())
			{
				func_278(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_77(iParam0, 787083290) && func_77(iParam0, 949916894))
		{
			func_279(iParam0);
		}
		else if (func_77(iParam0, -1718133314))
		{
			func_280(iParam0);
		}
		else if (func_77(iParam0, -1738650224))
		{
			func_281(iParam0);
		}
		else if (func_77(iParam0, -1112814642) && func_77(iParam0, 949916894))
		{
			func_282(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_77(iParam0, 1841149704))
		{
			func_283();
		}
		else if (func_77(iParam0, 606799272))
		{
			func_284(iParam0, iParam1);
			func_285(iParam0);
		}
		else if (func_77(iParam0, -1112814642) && func_77(iParam0, -1697809989))
		{
			func_286(iParam0, 0, 0, 0);
		}
		else if (func_77(iParam0, -2017733358) || func_77(iParam0, -1369131378))
		{
			func_276(iParam0);
		}
		else if (func_77(iParam0, -1921346699))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_287(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_77(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_221(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_165(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_221(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_165(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_221(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_165(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_221(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_165(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_221(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_165(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_221(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_165(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_77(iParam0, -839724752) && func_243(iParam0, 4))
		{
			if (!func_255(42))
			{
				func_288(iParam0);
			}
		}
		else if (func_77(iParam0, 1399091007))
		{
			func_289(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_77(iParam0, 1248798204))
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
				func_165(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_267(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_170(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_290(&iVar9, 0))
				{
					func_268(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_23() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_170(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_256(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_291();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_292();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_293();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_294();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_295();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_297(499813453, 0);
				func_298(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_297(499813453, 0);
				func_298(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_296(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_297(499813453, 0);
				func_298(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_297(666607663, 0);
				func_299(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_297(666607663, 0);
				func_299(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_296(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_297(666607663, 0);
				func_299(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_297(-220219788, 0);
				func_300(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_297(-220219788, 0);
				func_300(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_296(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_297(-220219788, 0);
				func_300(4);
				Jump @4453; //curOff = 3664
				func_296(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_297(218622660, 0);
				func_301(1);
				Jump @4453; //curOff = 3697
				func_296(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_297(218622660, 0);
				func_301(2);
				Jump @4453; //curOff = 3730
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_297(390004462, 0);
				func_302(1);
				Jump @4453; //curOff = 3763
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_297(390004462, 0);
				func_302(2);
				Jump @4453; //curOff = 3796
				func_296(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_297(390004462, 0);
				func_302(4);
				Jump @4453; //curOff = 3829
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_297(6410548, 0);
				func_303(1);
				Jump @4453; //curOff = 3860
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_297(6410548, 0);
				func_303(2);
				Jump @4453; //curOff = 3891
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_297(6410548, 0);
				func_303(4);
				Jump @4453; //curOff = 3922
				func_296(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_297(6410548, 0);
				func_303(8);
				Jump @4453; //curOff = 3954
				func_304(242, func_244(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4453; //curOff = 3973
				func_304(240, func_244(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4453; //curOff = 3992
				func_304(241, func_244(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4453; //curOff = 4011
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4058
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4105
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4152
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4199
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4246
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_305(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4453; //curOff = 4293
				func_256(488, 0);
				Jump @4453; //curOff = 4304
				func_256(491, 0);
				Jump @4453; //curOff = 4315
				func_256(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_165(func_306(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_165(func_307(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4453; //curOff = 4388
				if (func_266(1))
				{
					func_256(487, 0);
				}
				Jump @4453; //curOff = 4407
				func_256(486, 0);
				Jump @4453; //curOff = 4418
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4453; //curOff = 4436
				func_256(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return 0;
				}
				iVar10 = iParam0;
				func_308(&iVar10);
				if (!func_309(iVar10, iVar0, iParam5))
				{
					return 0;
				}
				else if (!func_80(0))
				{
					return 1;
				}
				if (func_127(iParam0) == joaat("CLOTHING"))
				{
					func_310(iParam0);
				}
				if (func_77(iParam0, -1979000645))
				{
					func_311(iParam0);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_80(0))
				{
					Var11.f_1 = 10;
					Var11.f_12 = 10;
					MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
					iVar34 = 0;
					while (iVar34 < Var11)
					{
						func_165(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
						iVar34++;
					}
				}
				else
				{
					func_312(iVar2, 0);
				}
			}
			Var35 = { func_313(iParam0) };
			if (STATS::STAT_ID_IS_VALID(&Var35))
			{
				STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
			}
			func_314(iParam0);
			if (fParam6 > 0f)
			{
				if (func_77(iParam0, -839724752))
				{
					func_315(iParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == 1248274121;
				func_164(iParam0, iVar0, 0, bVar37, 0);
			}
			return 1;
		}

int func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<4> Var1;
	var uVar6;

	if (!func_316(iParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		if (func_317(iParam0) && func_318(iParam0))
		{
			iVar0 = 0;
			if (func_319(iParam0, 369710026, &iVar0))
			{
				iParam2 = iVar0;
			}
		}
	}
	Var1.f_4 = func_320(iParam1);
	Var1 = { func_201(0) };
	if (!func_235(iParam0, &uVar6, &Var1, iParam2, 752097756, 1))
	{
		return 0;
	}
	return 1;
}

struct<2> func_167(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_168(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_321(iParam0);
	fVar1 = func_322(iParam0);
	if ((Global_1347477.f_117 || !func_266(31)) || !func_323(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_324(iVar0) >= 7)
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
	func_325(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_246(MISC::VAR_STRING(6, func_326(iParam0), fVar1), "itemtype_textures", func_327(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_169(int iParam0, int iParam1, int iParam2)
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

	if (!func_21(iParam1, 0))
	{
		return false;
	}
	if (func_127(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_208(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_328(iParam1);
	if (iVar4 == -358215195)
	{
		*iParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_77(iParam1, 866047851))
	{
		iVar5 = func_329(iVar4, 1);
		if (func_330(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*iParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*iParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_208(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_77(iParam1, -1638171711))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*iParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*iParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (func_331(1868067663, &uVar0))
			{
				*iParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
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
				iVar10 = func_332(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_332(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*iParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_208(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_77(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_333(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*iParam2 = 2143522536;
						return false;
					}
				}
			}
			*iParam2 = 0;
			return true;
			default:
				break;
	}
}

int func_170(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_148(iParam1, 1, 0) };
		iParam3 = func_334(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_335(iParam1, iParam2, func_329(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_336(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_329(iParam3, 1) /*11*/])
			{
				func_337(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_338(32768) && iParam1 != Global_1946804.f_57[func_329(iParam3, 1) /*11*/])
			{
				func_339();
				func_337(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_337(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_340(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_337(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_341(0);
			func_342(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_337(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_171()
{
	return func_343(512);
}

void func_172(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (!func_344(471747275))
	{
		Global_40.f_4283.f_307.f_1 = (Global_40.f_4283.f_307.f_1 + iParam0);
		if (Global_40.f_4283.f_307.f_1 >= 3)
		{
			func_345(471747275);
		}
	}
}

float func_173(var uParam0)
{
	if (!func_95(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_346(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_347() - uParam0->f_1);
}

bool func_174(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_175(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_347() - fParam1);
	func_348(uParam0, 1);
	func_349(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_176(int iParam0, bool bParam1, int iParam2)
{
	if (func_350(255))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("FEATURE_XP")))
	{
		return 0;
	}
	if (!func_351(iParam0))
	{
		return 0;
	}
	if (!func_353(func_352(iParam0), !bParam1, iParam2, 0))
	{
		return 0;
	}
	return 1;
}

int func_177(int iParam0)
{
	if (func_354())
	{
		return 1;
	}
	if (!func_353(func_355(iParam0), 0, 255, 0))
	{
		return 0;
	}
	return 1;
}

bool func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

float func_179(int iParam0, vector3 vParam1)
{
	if (func_356(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

void func_180(var uParam0, int iParam1, int iParam2)
{
	Global_1911914[uParam0->f_55 /*9*/].f_5 = iParam2;
	Global_1911914[uParam0->f_55 /*9*/].f_6 = iParam1;
	Global_1911914[uParam0->f_55 /*9*/].f_7 = 1;
	Global_1911914[uParam0->f_55 /*9*/].f_8 = 0;
	Global_1911914.f_1576++;
	uParam0->f_55++;
	if (iParam2 == 600942249 || iParam2 == -257768755)
	{
		func_357(uParam0, iParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_358(uParam0, iParam1);
	}
}

void func_181(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_53(iParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_137(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_55 >= 175)
			{
			}
			else
			{
				iVar14 = func_138(iVar13, iVar0);
				if (func_21(iVar14, 0) && iVar14 != iParam1)
				{
					func_180(uParam0, iVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_139(iVar0);
	}
}

void func_182(int iParam0)
{
	func_139(*iParam0);
	*iParam0 = -1;
}

void func_183(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	bool bVar13;
	char[] cVar14[8];
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	iVar0 = Global_1911914[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, iVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1911914[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1911914[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_40, &cVar1);
	Global_1911914[iParam1 /*9*/].f_1 = iVar5;
	iVar6 = Global_1911914[iParam1 /*9*/].f_5;
	iVar7 = func_131(iVar0, iVar6, bParam3, 0);
	iVar8 = func_129(iVar0, 0, 0);
	iVar9 = func_130(iVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	if (func_187(iVar0, &Var10, joaat("INVENTORY"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var10);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var10.f_1);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", iVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", iVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1911914.f_1579 && func_124(iVar0, iVar6, 1))
	{
		bVar13 = true;
		Global_1911914[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1911914[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1911914[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", iVar6 == -257768755);
	StringIntConCat(&cVar14, func_132(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar14);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar16 = false;
	if (func_36(4096))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && func_53(iVar0, 1697966752) == 337650881), 1, 0);
	}
	else if (func_36(8192))
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && iVar0 == joaat("CONSUMABLE_POTENT_PREDATOR_BAIT")), 1, 0);
	}
	else
	{
		iVar15 = func_184(((iVar9 > 0 && iVar7 > 0) && !bVar13), 1, 0);
	}
	if (iVar15 == 0 && func_185(iVar0))
	{
		if (func_186(iVar0, iVar6, uParam0, bParam3, &iVar17, &iVar18, &iVar19))
		{
			iVar15 = 1;
			bVar16 = true;
			iVar0 = iVar17;
			iVar6 = iVar18;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", iVar17);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", iVar18);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar19);
		}
	}
	if (!uParam0->f_31)
	{
		if ((iVar6 == -214678071 || iVar6 == joaat("COST_CRAFTING_GRILL")) || iVar6 == -257768755)
		{
			iVar15 = 0;
		}
	}
	else if (!uParam0->f_32 && iVar6 == joaat("COST_CRAFTING_GRILL"))
	{
		iVar15 = 0;
	}
	if (iVar15 == 1)
	{
		if ((!uParam0->f_83 || uParam0->f_84 > 0) && func_53(iVar0, -1636519629) == -701492487)
		{
			iVar15 = 0;
			Global_1911914[iParam1 /*9*/].f_2 = 0;
		}
		else
		{
			uParam0->f_59++;
			if (func_121(iVar0, uParam0->f_52))
			{
				uParam0->f_60++;
			}
			Global_1911914[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1911914[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar16)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar13);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar15);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_40, -1, -2047994727, iVar5);
	}
}

int func_184(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_185(int iParam0)
{
	if (func_36(4096))
	{
		if (func_53(iParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (func_36(8192))
	{
		if (iParam0 != joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"))
		{
			return false;
		}
	}
	return true;
}

bool func_186(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!Global_1911914.f_1579 && func_124(iParam0, iParam1, 1))
	{
		return false;
	}
	if (iParam1 == -214678071 || iParam1 == joaat("COST_CRAFTING_GRILL"))
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_53(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		if (uParam2->f_32)
		{
			Var2 = { func_136(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar12, 0) };
			if (func_137(Var2, &iVar0, &iVar1, 0))
			{
				iVar13 = 0;
				while (iVar13 < iVar1)
				{
					iVar14 = func_138(iVar13, iVar0);
					if (iParam0 == iVar14)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
					{
					}
					else if (func_88(iVar14, joaat("COST_CRAFTING_GRILL"), 0, bParam3, 0, 0) && !func_89(iVar14, 1, 0))
					{
						func_139(iVar0);
						*iParam4 = iVar14;
						*iParam5 = joaat("COST_CRAFTING_GRILL");
						*iParam6 = iVar13;
						return true;
					}
					iVar13++;
				}
				func_139(iVar0);
			}
		}
		if (iParam1 == joaat("COST_CRAFTING_GRILL"))
		{
			Var2 = { func_136(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (func_137(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					iVar16 = func_138(iVar15, iVar0);
					if (iParam0 == iVar16)
					{
					}
					else if (!Global_1911914.f_1579 && func_124(iVar16, -214678071, 1))
					{
					}
					else if (func_88(iVar16, -214678071, 0, bParam3, 0, 0) && !func_89(iVar16, 1, 0))
					{
						func_139(iVar0);
						*iParam4 = iVar16;
						*iParam5 = -214678071;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_139(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == joaat("COST_TYPE_CRAFT"))
				{
					if (Var18 != -489628648 && (Global_1911914.f_1579 || !func_124(iParam0, Var18, 1)))
					{
						if (func_88(iParam0, Var18, 0, bParam3, 0, 0) && !func_89(iParam0, 1, 0))
						{
							*iParam4 = iParam0;
							*iParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_187(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

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

bool func_188(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		return false;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_189(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_193(iParam0, iParam2, &Var0, &iVar31, bParam7, 0))
	{
		return false;
	}
	if (func_23() == 0 && iParam6 != 0)
	{
		return false;
	}
	if (iParam6 != 0)
	{
		bParam5 = false;
	}
	bVar35 = func_80(0);
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == joaat("CURRENCY_CASH") && func_359(iVar32))
			{
				Jump @390; //curOff = 134
			}
			else if (Var0[iVar34 /*2*/] == joaat("CURRENCY_GOLD_BAR") && func_360(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = func_361(Var0[iVar34 /*2*/], iParam6);
				}
				else
				{
					iVar33 = func_129(Var0[iVar34 /*2*/], 0, 0);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_194(Var0[iVar34 /*2*/]) || func_195(Var0[iVar34 /*2*/]))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = func_197(7, Var0[iVar34 /*2*/], &iVar36);
						}
						iVar38 = func_196(Var0[iVar34 /*2*/], iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @374; //curOff = 330
							if (bParam5 && ((iVar33 + func_198(7, Var0[iVar34 /*2*/])) + func_199(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_127(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_77(iParam0, 1399091007))
	{
		func_362(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_191(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_363(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_364(&Var0, func_203(0));
	}
	if (!func_365(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_366(iVar14);
	return iVar15;
}

int func_192(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_214(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_147(bParam3), iParam0);
}

bool func_193(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_21(iParam0, 0))
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
		func_367(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_194(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")))
	{
		return true;
	}
	return func_195(iParam0);
}

bool func_195(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!func_194(iParam0) && !func_195(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_53(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_137(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_138(iVar15, iVar1);
			if (func_21(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_368(iVar14);
				if (iVar16 != 0)
				{
					if (iParam1 != 0)
					{
						iVar17 = func_361(iVar14, iParam1);
					}
					else
					{
						iVar17 = func_129(iVar14, 0, 0);
					}
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_370(iVar16, func_369(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_139(iVar1);
	}
	return iVar0;
}

int func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_372(iVar28))
		{
		}
		else
		{
			MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_198(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (iParam0 == ENTITY::_0x31FEF6A20F00B963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	return func_102(iParam0, 2);
}

struct<4> func_201(bool bParam0)
{
	return func_202(joaat("CHARACTER"), func_373(), -1591664384, bParam0);
}

struct<4> func_202(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_147(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_203(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_202(923904168, func_201(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_202(923904168, func_201(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_202(923904168, func_201(bParam0), -740156546, 0);
}

bool func_204(int iParam0, bool bParam1)
{
	if (func_208(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_266(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_205(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_215(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_206(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_374(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_207(bool bParam0)
{
	int iVar0;

	iVar0 = func_147(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_202(271701509, func_201(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_202(271701509, func_201(bParam0), 12999093, 0);
}

int func_208(int iParam0)
{
	struct<2> Var0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_209(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_208(iParam0);
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

bool func_210(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_147(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_211(int iParam0)
{
	if (!func_21(*iParam0, 0))
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

bool func_212(int iParam0)
{
	return func_127(iParam0) == joaat("WEAPON");
}

bool func_213(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_148(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_375((398 + iVar29), 1);
		if (func_205(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_206(iParam0, &Var6, iVar5);
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

bool func_214(int iParam0)
{
	if (func_376(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_215(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_202(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_147(bParam6), &Var0, 0);
	return uVar4;
}

bool func_216(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_217(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224227)
	{
		if (Global_1224227.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1224227.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1224227.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_377(iParam0, iParam1);
}

int func_218(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

float func_219(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_220(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_378(iParam0);
	if (bParam3)
	{
		func_379(iParam0, sParam1, iParam2);
	}
}

bool func_221(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_127(iParam0);
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
		if (!func_380(iParam0, 1))
		{
			return false;
		}
	}
	return func_129(iParam0, 0, bParam2) >= iParam1;
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_372(iVar28))
			{
			}
			else
			{
				MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == iParam1)
					{
						func_309(iParam1, 1, 752097756);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							iVar31 = func_381(iVar28);
							if (!func_21(iVar31, 0))
							{
								iVar31 = func_382(iVar28);
							}
							if (func_21(iVar31, 0))
							{
								func_383(iVar31, 1, 1, -142743235, 0);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

bool func_223(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_148(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_384(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_202(iParam0, Var0, Var0.f_4, bParam4) };
	return func_385(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_224(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_53(iParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_136(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (func_137(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					iVar13 = func_138(iVar14, iVar0);
					if (func_21(iVar13, 0) && iParam0 != iVar13)
					{
						iVar15 = func_129(iVar13, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_386(iVar13, iParam0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_139(iVar0);
		}
	}
}

bool func_225(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_190(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_164(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!func_221(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { func_313(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_129(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_129(iParam0, 0, 0) - iParam1) < 0)
		{
			func_225(iParam0, func_129(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (func_127(iParam0) == joaat("WEAPON"))
	{
		if (!func_387(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_223(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_164(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_388(iParam0, iParam1);
	return true;
}

void func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	var uVar19;

	if (!func_21(iParam0, 0))
	{
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_389(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == iParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else
			{
				func_390(iVar1, &uVar17, &uVar18, &iVar16, &uVar19);
				if (func_391(&iVar15, iVar1, iVar16, uVar17) && iVar15 == iParam0)
				{
					ENTITY::_DELETE_CARRIABLE(&iVar0);
				}
			}
		}
	}
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (!func_371(iParam0))
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = iParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iVar0, iVar3) != iVar1)
		{
		}
		else if (func_392(iParam1, iParam2, 1, -142743235))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_228(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_23() == 0)
	{
		return 0;
	}
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = func_320(iParam1);
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (!func_385(iParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_229(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 20;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 23;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 26;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 27;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 28;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 29;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 31;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 33;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 34;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 37;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 38;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 40;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 41;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 42;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 43;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 1;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 9;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 14;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 17;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 21;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 22;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 24;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 32;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 35;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 36;
	}
	return 0;
}

bool func_230(int iParam0)
{
	return !iParam0 <= 0;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("HERB_WILD_CARROTS");
		case 40:
			return joaat("HERB_WILD_FEVERFEW");
		case 41:
			return joaat("HERB_WILD_MINT");
		case 42:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
	}
	return 0;
}

bool func_232(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_233(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_208(iParam1);
		iVar5 = func_393(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_148(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_202(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_147(0);
			Var37 = { func_148(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_202(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_208(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
							{
								if (func_394(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

struct<4> func_234()
{
	struct<4> Var0;

	Var0 = { func_201(0) };
	return func_202(856287005, Var0, -218846335, 0);
}

bool func_235(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_149(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_147(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_236(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (!func_233(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_234() };
	Var14 = { func_202(iParam0, Var10, iVar9, 0) };
	if (func_395(Var14, iParam1))
	{
		if (func_396(iParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_236(iVar18, 0))
				{
				}
			}
		}
		else if (func_237(iParam0))
		{
			if (func_397(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_236(iVar19, 0))
				{
				}
			}
			if (func_397(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_236(iVar20, 0))
				{
				}
			}
			iVar21 = func_238(iParam0);
			if (func_21(iVar21, 0))
			{
				if (func_236(iVar21, 1))
				{
				}
			}
		}
		func_239();
		return true;
	}
	return false;
}

bool func_237(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144 /* GXTEntry: "Trapper Blanket" */;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688 /* GXTEntry: "Trapper Blanket" */;
	}
	return 0;
}

int func_239()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;

	Var0 = { func_148(856287005, 0, 0) };
	Var5 = { func_202(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_208(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_398(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_21(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_393(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_398(Var5, iVar11, 0);
			if (!func_21(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_237(iVar14) || func_396(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_237(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_237(iVar14) && func_399(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_400(iVar11, &Var16, 1))
									{
										if (!func_395(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_240()
{
	return !Global_1911774;
}

void func_241(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_242(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_243(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_244(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_245(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_246(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
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
	func_401(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_247(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_212(iParam0) && func_402(iParam0))
		{
			func_403(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_248(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_404(iParam0, iParam1);
	Var0 = { func_148(iParam0, 0, 1) };
	iVar5 = func_192(iParam0, &Var0, 0, 0);
	iVar6 = func_405(iParam0, 0);
	if ((iVar5 > 1 && !func_406()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_77(iParam0, -2051813666))
		{
			func_256(583, 1);
		}
		else
		{
			func_256(582, 0);
		}
	}
	if (func_149(iParam0, &Var0, *iParam1, 0, 0))
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

void func_249(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_53(iParam0, -949239683))
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

bool func_250(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_251(iParam0) != 0;
}

int func_251(int iParam0)
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

int func_252(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_407())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_252(iVar0))
		{
			if (func_221(func_408(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_254(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_168(48);
	func_409(0, -1);
}

bool func_255(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_275(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_256(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_412(iVar0, iVar1);
}

int func_257(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_258(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_259()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_260(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_275(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_261(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_14(iParam0))
	{
		return false;
	}
	return func_413(Global_1347702[iParam0 /*49*/].f_15);
}

int func_262()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_221(func_414(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_263(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_259() && (func_261(38) || func_255(38)))
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
			if (func_259() && (func_261(39) || func_255(39)))
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
			if (func_259() && (func_261(41) || func_255(41)))
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
			if (func_259() && (func_261(49) || func_255(49)))
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

void func_264(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_265(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_259() && (func_261(38) || func_255(38)))
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
			if (func_259() && (func_261(39) || func_255(39)))
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
			if (func_259() && (func_261(49) || func_255(49)))
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
		if (func_259() && (func_261(38) || func_255(38)))
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
			func_425(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_424(func_258(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
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
		if (func_259() && (func_261(39) || func_255(39)))
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
		if (func_259() && (func_261(49) || func_255(49)))
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

bool func_266(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	return func_427(iParam0);
}

void func_267(int iParam0)
{
	if (!func_426(iParam0))
	{
		return;
	}
	func_428(iParam0);
	func_429(iParam0);
}

bool func_268(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;

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
		Var0 = { func_148(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_375((398 + iVar28), 1);
			if (func_205(iParam0, &Var0, iVar5, 0))
			{
				if (func_206(iParam0, &Var6, iVar5))
				{
					Var29 = { func_202(iParam0, Var0, iVar5, 0) };
					func_385(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_80(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_269(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_430(iParam0, iParam1);
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

bool func_269(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_271(iParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_270(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_161(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_162(iVar0);
			if (iParam1 == 1248274121)
			{
				func_431(iVar0);
			}
		}
		if (!func_149(iParam0, &uVar1, 1, 0, 0))
		{
			func_403(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_432(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_268(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_268(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_268(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_433())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_434(iVar0))
				{
					func_268(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_268(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_435(Global_35, 2, 0, 1);
				if ((((func_232(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_266(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_232(iVar7) && func_266(24))
				{
					if (!func_268(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_268(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_268(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_256(480, 1);
	}
	return true;
}

bool func_271(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_271(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_232(iVar4))
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
	if (func_221(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_304(func_436(iParam0), func_244(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_275(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_256(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_269(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_309(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_273(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_437()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_169(Global_35, iParam0, &uVar0))
		{
			func_170(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_295();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_293();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_291();
			break;
	}
}

void func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_291();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_292();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_293();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_294();
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
			func_295();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_438();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_439();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

bool func_275(int iParam0, bool bParam1)
{
	switch (func_440(iParam0))
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

void func_276(int iParam0)
{
	bool bVar0;

	bVar0 = func_77(iParam0, -2017733358);
	if (func_441() < 3)
	{
		if (bVar0)
		{
			if (func_443(func_442(iParam0), iParam0))
			{
				func_304(79, func_244(func_442(iParam0)), 1);
			}
			else
			{
				func_304(78, func_244(func_442(iParam0)), 1);
			}
		}
		else
		{
			func_304(80, func_244(func_444(iParam0)), 1);
		}
	}
}

bool func_277()
{
	if (((((func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_445(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_445(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_278(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_446(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_447(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_448(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_279(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_265(51, 0, 0, 0, 0, -1, 0);
			func_449(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_263(39, 0, 0, 0, 0, 0, 1, 0);
			func_265(39, 0, 0, 0, 0, -1, 0);
			func_450(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_263(41, 0, 0, 0, 0, 0, 1, 0);
			func_265(41, 0, 0, 0, 0, -1, 0);
			func_451(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_263(49, 0, 0, 0, 0, 0, 1, 0);
			func_265(49, 0, 0, 0, 0, -1, 0);
			func_452(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_453(1), 0, -1, 0);
			func_454(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_453(2), 0, -1, 0);
			func_454(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_453(4), 0, -1, 0);
			func_454(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_453(8), 0, -1, 0);
			func_454(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_263(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_453(16), 0, -1, 0);
			func_454(16);
			break;
	}
}

void func_280(int iParam0)
{
	if (func_455() == 1)
	{
		if (func_255(39))
		{
			func_256(342, 0);
		}
		else
		{
			func_256(343, 0);
			func_450(1);
		}
	}
	if (func_455() >= 30)
	{
		func_256(344, 0);
	}
	func_263(39, 0, 0, 0, 0, 0, -1, 0);
	func_265(39, 0, 0, func_455(), 30, 1, 0);
}

void func_281(int iParam0)
{
	if (func_456() == 1)
	{
		if (func_255(49))
		{
			func_256(409, 0);
		}
		else
		{
			func_256(410, 0);
			func_452(1);
		}
	}
	if (func_456() >= 10)
	{
		func_256(411, 0);
	}
	func_263(49, 0, 0, 0, 0, 0, -1, 0);
	func_265(49, 0, 0, func_456(), 10, 1, 0);
}

void func_282(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_256(437, 0);
			func_256(440, 0);
			func_457(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_449(1);
			func_458(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_457(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_449(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_457(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_449(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_457(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_449(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_256(438, 0);
			func_457(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_263(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_265(51, 0, 0, sVar0, func_415(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_449(32768);
			break;
		default:
			func_256(439, 0);
			break;
	}
}

void func_283()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_284(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_255(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_256(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_256(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_256(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_256(400, 0);
			}
		}
		else if (func_77(iParam0, 412399755))
		{
			func_459(joaat("EXOTIC_STAGE_01"));
			if (func_460() == 0)
			{
				func_409(0, 10);
				iVar1 = func_461(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_255(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_256(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_256(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_256(401, 0);
			}
		}
		else if (func_77(iParam0, 709057512))
		{
			func_459(joaat("EXOTIC_STAGE_02"));
			if (func_460() == 1)
			{
				func_409(0, 10);
				iVar1 = func_461(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_255(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_256(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_256(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_256(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_256(398, 0);
			}
		}
		else if (func_77(iParam0, -1478961327))
		{
			func_459(joaat("EXOTIC_STAGE_03"));
			if (func_460() == 2)
			{
				func_409(0, 10);
				iVar1 = func_461(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_464(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_465(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_168(48);
					}
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_255(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_256(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_256(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_256(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_256(406, 0);
			}
		}
		else if (func_77(iParam0, -1238404098))
		{
			func_459(joaat("EXOTIC_STAGE_04"));
			if (func_460() == 3)
			{
				func_409(0, 10);
				iVar1 = func_461(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_255(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_256(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_256(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_256(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_256(403, 0);
			}
		}
		else if (func_77(iParam0, 1160548794))
		{
			func_459(joaat("EXOTIC_STAGE_05"));
			if (func_460() == 4)
			{
				func_409(0, 10);
				iVar1 = func_461(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_462(iParam0) < func_463(iParam0))
					{
						func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_265(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_285(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_464(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_465(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_168(48);
		}
	}
}

void func_286(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_221(func_466(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_467(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_468(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_287(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_278(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_278(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_278(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_278(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_278(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_278(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_278(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_278(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_278(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_278(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_278(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_278(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_278(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_469())
			{
				func_278(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_278(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_278(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_278(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_278(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_278(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_278(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_278(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_278(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_278(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_288(int iParam0)
{
	if (func_255(41))
	{
		func_256(363, 0);
	}
	else
	{
		func_256(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_01"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_02"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_03"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_04"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_05"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_06"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_07"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_08"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_09"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_10"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_11"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_12"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_13"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_409(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_470(joaat("LEGENDARY_FISH_14"));
			func_471(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_472(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_289(int iParam0, int iParam1)
{
	var uVar0;

	func_362(iParam0, iParam1, &uVar0);
}

bool func_290(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;

	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_435(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_473("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_474(&Var3, iVar2, iVar0, iVar1))
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
						func_366(iVar0);
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

void func_291()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_292()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_293()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_294()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_295()
{
	func_475();
	func_476();
	func_477();
}

void func_296(int iParam0, int iParam1, bool bParam2)
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

void func_297(int iParam0, bool bParam1)
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

void func_298(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_299(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_300(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_301(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_302(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_303(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_478(iParam0, 1024))
	{
		return;
	}
	func_412(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_305(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_410(iParam0, &iVar0, &iVar1);
	if (!func_411(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_478(iParam0, 1024))
	{
		return;
	}
	func_412(iVar0, iVar1);
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

int func_306()
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
		return func_307();
	}
	iVar4 = (func_407() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_407())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_479(iVar1))
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

int func_307()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_407());
	return func_408(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_308(int iParam0)
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

bool func_309(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_148(iParam0, 0, 1) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	return func_235(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_23() != -1)
	{
		return;
	}
	switch (func_208(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_480(81053684, 0) <= 0)
			{
				func_337(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_337(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_481(iParam0);
			if (func_482(iVar0))
			{
				func_483(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_337(30, iParam0, 0, 0, 0);
			}
			if (func_484() == -2125499975 || func_484() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_337(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_484() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_337(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_485(-525676072, 0))
			{
				if (func_486(-525676072, &iVar1))
				{
					func_337(33, iVar1, 0, 0, 0);
				}
			}
			func_337(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_170(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_267(24);
		if (func_290(&iVar2, 0))
		{
			func_268(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_311(int iParam0)
{
	if (func_77(iParam0, 943695443))
	{
		func_488(0, iParam0);
	}
	else if (func_77(iParam0, -2096528786))
	{
		func_488(1, iParam0);
	}
	else if (func_77(iParam0, -1094167013))
	{
		func_488(2, iParam0);
	}
	else if (func_77(iParam0, 1936654645))
	{
		func_488(3, iParam0);
	}
	else if (func_77(iParam0, 1306489306))
	{
		func_488(4, iParam0);
	}
	else if (func_77(iParam0, 435762317))
	{
		func_488(5, iParam0);
	}
	else if (func_77(iParam0, 1259363210))
	{
		func_488(6, iParam0);
	}
	else if (func_77(iParam0, 881398259))
	{
		func_488(7, iParam0);
	}
	else if (func_77(iParam0, -541549214))
	{
		func_488(8, iParam0);
	}
	else if (func_77(iParam0, 130796156))
	{
		func_488(-1, iParam0);
	}
}

int func_312(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_489(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_490(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_313(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_21(iParam0, 0))
	{
		return Var0;
	}
	if (func_77(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_77(iParam0, -537818634))
			{
				return func_491(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_491(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_77(iParam0, -537818634))
	{
		return func_491(joaat("MEDICINE_ITEMS"));
	}
	if (func_77(iParam0, 2084895747))
	{
		return func_491(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_314(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_23() == -1)
			{
				if (func_275(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_256(109, 1);
				}
			}
			break;
	}
}

void func_315(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_493(func_492(0));
	func_246(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_494(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_316(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_320(iParam1);
	if (!func_495(iParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_192(iParam0, &Var0, 1, 0);
	iVar6 = func_405(iParam0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (func_77(iParam0, 173360570))
	{
		return true;
	}
	return false;
}

bool func_318(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

bool func_319(int iParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14[15];
	int iVar45;
	int iVar46;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	*iParam2 = 0;
	Var0 = { func_136(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, 0, 0) };
	iVar11 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&Var0, &iVar10, 1);
	if (iVar11 != -1)
	{
		iVar12 = 0;
		while (iVar12 < iVar10)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar11, iVar12, &iVar13))
			{
				if (func_193(iVar13, iParam1, &Var14, &iVar45, 1, 0))
				{
					iVar46 = 0;
					while (iVar46 < iVar45)
					{
						if (iParam0 == Var14[iVar46 /*2*/])
						{
							*iParam2 = (*iParam2 + Var14[iVar46 /*2*/].f_1);
						}
						iVar46++;
					}
				}
			}
			iVar12++;
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar11);
	}
	return true;
}

int func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1084182731;
		case 1:
			return -1360128126;
		case 2:
			return 1426626782;
		case 3:
			return 1227915917;
		default:
			break;
	}
	return 1084182731;
}

int func_321(int iParam0)
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

float func_322(int iParam0)
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
			return func_496(iParam0);
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
			return func_496(iParam0);
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
			return func_496(iParam0);
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

bool func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_266(18);
		case 2:
			return func_266(20);
		case 1:
			return func_266(19);
		default:
			break;
	}
	return true;
}

int func_324(int iParam0)
{
	return func_497(Global_40.f_11095.f_11[iParam0]);
}

void func_325(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_266(31))
	{
		return;
	}
	iVar0 = func_324(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_324(iParam0);
	if (func_498(iParam0) && func_499(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_500(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_501(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_256(func_502(iParam0), 0);
					}
					func_503(iParam0, iVar2, iVar3);
					func_113(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_326(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_327(int iParam0)
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

int func_328(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_148(iParam0, 1, 0) };
	return func_334(Var0.f_4);
}

int func_329(int iParam0, int iParam1)
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

int func_330(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_331(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_329(func_504(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_208(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_332(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_329(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_338(524288))
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

bool func_333(int iParam0)
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

int func_334(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_505(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_506();
	if (iParam2 == 39)
	{
		Var0 = { func_148(iParam0, 1, 0) };
		iParam2 = func_329(func_334(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_77(iParam0, 866047851) && func_330(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_338(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_507(func_505(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_508(iParam2);
	func_509(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_510(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_510(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_511(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_512(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_513(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_513(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_514(func_505(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_336(bool bParam0, bool bParam1, bool bParam2)
{
	func_515(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_516(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_517(Var0);
}

bool func_338(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_339()
{
	func_518(&(Global_1946804.f_2776));
	func_519(32768);
	func_514(1108822547, 8, 6);
}

int func_340(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_329(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/] || Global_1946804.f_1378.f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_341(int iParam0)
{
	struct<4> Var0;

	if (func_520(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_521(Var0);
}

void func_342(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_521(Var0);
}

bool func_343(int iParam0)
{
	switch (func_23())
	{
		case -1:
			return (Global_1357549.f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_344(int iParam0)
{
	if (!func_522(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_523(iParam0, 1));
}

void func_345(int iParam0)
{
	if (!func_522(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_523(iParam0, 1));
}

bool func_346(var uParam0)
{
	return func_174(*uParam0, 2);
}

float func_347()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_350(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return func_524(32, iParam0);
}

bool func_351(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 183)
	{
		return true;
	}
	return false;
}

int func_352(int iParam0)
{
	if (!func_351(iParam0))
	{
		return 0;
	}
	return Global_1132155.f_12[iParam0 /*3*/].f_2;
}

int func_353(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_525(iParam0, &uVar0, bParam1, iParam2, iParam3);
}

bool func_354()
{
	return Global_1955569.f_866;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -84152915;
		case 2:
			return -1789085602;
		case 3:
			return -593725333;
		case 4:
			return 1619211297;
		case 5:
			return -1448204146;
		case 6:
			return -1918007793;
		case 7:
			return -2108757294;
		case 8:
			return -787840584;
		case 9:
			return -7905424;
		case 10:
			return -376205482;
		case 11:
			return -1753179328;
		case 12:
			return -1876855008;
		case 13:
			return 550082662;
		case 14:
			return -1964113;
		case 15:
			return 196458601;
		case 16:
			return 22941087;
		case 17:
			return 2017633379;
		case 24:
			return 253945992;
		case 25:
			return -1689046118;
		case 26:
			return -483357612;
		case 27:
			return -430722038;
		case 28:
			return 64082831;
		case 35:
			return -1498321291;
		case 36:
			return 1654907663;
		case 37:
			return 1059449568;
		case 38:
			return 2073287291;
		case 39:
			return 1110270789;
		case 40:
			return 417802449;
		case 41:
			return 2136672177;
		case 42:
			return -1930911028;
		case 43:
			return -739528491;
		case 55:
			return 2075984360;
		default:
			break;
	}
	return 0;
}

bool func_356(int iParam0)
{
	if (func_526(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

void func_357(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == joaat("COST_TYPE_CRAFT") && Var1 != -489628648) && (Global_1911914.f_1579 || !func_124(iParam1, Var1, 1)))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1911914[(uParam0->f_55 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_358(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	int iVar14;

	iVar2 = func_53(iParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_136(-1591664384, -1591664384, 0, 0, joaat("COST_CRAFTING_GRILL"), 0, -1, iVar2, 0) };
	if (func_137(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			iVar14 = func_138(iVar13, iVar0);
			if (func_21(iVar14, 0))
			{
				if (Global_1911914.f_1579 || !func_124(iVar14, joaat("COST_CRAFTING_GRILL"), 1))
				{
					Global_1911914[(uParam0->f_55 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_139(iVar0);
	}
}

bool func_359(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_527(1);
}

bool func_360(int iParam0)
{
	return false;
}

int func_361(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	var uVar9;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = func_320(iParam1);
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	uVar9 = INVENTORY::_0xC97E0D2302382211(func_147(0), &Var5, 0);
	return uVar9;
}

void func_362(int iParam0, int iParam1, var uParam2)
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

struct<14> func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;

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

void func_364(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_365(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_147(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_366(int iParam0)
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

void func_367(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	struct<2> Var21[15];

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

int func_368(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = joaat("A_C_FISHBLUEGIL_01_SM");
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = joaat("A_C_FISHBULLHEADCAT_01_SM");
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHCHAINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = joaat("A_C_FISHCHANNELCATFISH_01_LG");
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = joaat("A_C_FISHLAKESTURGEON_01_LG");
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = joaat("A_C_FISHLARGEMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = joaat("A_C_FISHLONGNOSEGAR_01_LG");
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = joaat("A_C_FISHMUSKIE_01_LG");
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = joaat("A_C_FISHNORTHERNPIKE_01_LG");
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = joaat("A_C_FISHPERCH_01_SM");
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = joaat("A_C_FISHREDFINPICKEREL_01_SM");
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = joaat("A_C_FISHSMALLMOUTHBASS_01_MS");
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = joaat("A_C_FISHSALMONSOCKEYE_01_MS");
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = joaat("A_C_FISHRAINBOWTROUT_01_MS");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = joaat("A_C_BAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = joaat("A_C_BLUEJAY_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = joaat("A_C_FROGBULL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = joaat("A_C_CARDINAL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = joaat("A_C_CEDARWAXWING_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CHIPMUNK_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = joaat("A_C_CRAB_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = joaat("A_C_CROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ORIOLE_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = joaat("A_C_CAROLINAPARAKEET_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = joaat("A_C_PIGEON");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = joaat("A_C_QUAIL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = joaat("A_C_RAT_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = joaat("A_C_ROBIN_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = joaat("A_C_SONGBIRD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = joaat("A_C_SPARROW_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = joaat("A_C_SQUIRREL_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = joaat("A_C_TOAD_01");
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = joaat("A_C_WOODPECKER_01");
			break;
	}
	return iVar0;
}

int func_369(int iParam0)
{
	if (func_77(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_77(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_77(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

int func_370(int iParam0, int iParam1, int iParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_21(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_371(int iParam0)
{
	iParam0 = func_218(iParam0);
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

bool func_372(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

struct<4> func_373()
{
	struct<4> Var0;

	return Var0;
}

bool func_374(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_147(0);
	*uParam1 = { func_202(iParam0, func_203(0), iParam3, 0) };
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

int func_375(int iParam0, int iParam1)
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

int func_376(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1224227 < 20)
	{
		Global_1224227++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224227.f_1[iVar0 /*9*/] = { Global_1224227.f_1[iVar0 + 1 /*9*/] };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Global_1224227.f_1[(Global_1224227 - 1) /*9*/] = { Var1 };
}

void func_378(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_527(1) < iParam0)
	{
		iParam0 = func_527(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_491(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_379(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_380(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_190(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_473("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_474(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_232(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_366(iVar1);
				return true;
			}
			iVar3++;
		}
		func_366(iVar1);
	}
	return false;
}

int func_381(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_390(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_391(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_382(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_528(iVar1);
		}
	}
	return iVar0;
}

int func_383(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!bParam4)
	{
		iParam1 = func_529(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = func_530(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_531(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_532(iParam0, iParam1, bParam2, iParam3);
}

bool func_384(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_533(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_80(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_147(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_385(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_533(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_210(*uParam1, &Var0, bParam6, 0))
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
	if (!func_80(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_147(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_386(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = 1;
	iVar2 = 0;
	iVar1 = func_369(iParam0);
	iVar2 = func_368(iParam0);
	if (iVar2 != 0)
	{
		func_225(iParam0, 1, 1, -142743235, 0);
		iVar0 = func_534(iVar2, iVar1, iParam0, iParam1);
	}
	return iVar0;
}

bool func_387(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_363(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_364(&Var0, func_203(0));
	}
	if (!func_365(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_474(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_385(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_366(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

void func_388(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_77(iParam0, 606799272))
		{
			func_535(iParam0, iParam1);
		}
		if (func_77(iParam0, -1112814642) && func_77(iParam0, -1697809989))
		{
			func_286(iParam0, iParam1, 1, 0);
		}
	}
}

int func_389(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_390(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

void func_390(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
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
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
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

bool func_391(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return uVar2;
}

bool func_392(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_201(0) };
	Var0.f_4 = 724026534;
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	return func_385(iParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_393(int iParam0)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_394(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_147(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_210(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_395(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_80(0))
	{
		return func_536(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_210(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_147(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_396(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
	}
	if (func_77(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_537(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_234() };
	*iParam1 = func_398(Var0, iParam0, 0);
	if (!func_21(*iParam1, 0))
	{
		return false;
	}
	return true;
}

int func_398(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_394(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_399(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_400(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_363(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_364(&Var2, func_234());
	if (func_365(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_474(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_21(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_399(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_366(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_366(iVar0);
	}
	return false;
}

void func_401(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_402(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return false;
	}
	if (func_243(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_149(iParam0, &uVar0, 1, 0, 0);
	}
	return func_221(iParam0, 1, 0);
}

void func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_127(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_161(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_146(iVar0))
	{
		if (func_23() == -1)
		{
			func_162(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_129(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_164(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_404(int iParam0, int iParam1)
{
	int iVar0;

	if (func_77(iParam0, 58855631))
	{
		func_538(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_405(int iParam0, bool bParam1)
{
	if (func_271(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_147(bParam1), iParam0, 0);
}

bool func_406()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_259())
	{
		return false;
	}
	if (!func_275(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[2 /*74*/].f_1, 1) && func_275(Global_1347702[120 /*49*/].f_15, 1)) && !func_275(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[37 /*74*/].f_1, 1) && !func_275(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[57 /*74*/].f_1, 1) && !func_275(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[26 /*74*/].f_1, 1) && !func_275(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[62 /*74*/].f_1, 1) && func_275(Global_1835011[63 /*74*/].f_1, 1)) && !func_275(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[75 /*74*/].f_1, 1) && !func_275(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_275(Global_1835011[76 /*74*/].f_1, 1) && !func_275(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[40 /*74*/].f_1, 1) && func_275(Global_1835011[41 /*74*/].f_1, 1)) && !func_275(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[62 /*74*/].f_1, 1) && func_275(Global_1835011[63 /*74*/].f_1, 1)) && !func_275(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_275(Global_1835011[65 /*74*/].f_1, 1) && func_275(Global_1835011[66 /*74*/].f_1, 1)) && !func_275(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

int func_407()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_408(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
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
		func_539(&Global_0, 8);
	}
	if (!func_259() || func_23() != -1)
	{
		return;
	}
	func_539(&Global_0, 1);
}

void func_410(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_411(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_540(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_541(iParam0))
	{
		return false;
	}
	if (func_542(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_478(iParam0, 1)) || func_543(32768))
	{
		if (!func_478(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_544())
	{
		return false;
	}
	return true;
}

void func_412(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_413(int iParam0)
{
	int iVar0;

	iVar0 = func_440(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
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
	struct<4> Var0;
	var uVar5;

	if (!func_545(17, &Var0))
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
			else if (func_262() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_546(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_547(), 12);
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
			else if (func_455() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_548(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_455(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_549(), 13);
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
			else if (func_456() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_550(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_456(), 10);
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
			iVar2 = func_551(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_221(iVar2, 1, 0) || func_553(func_552(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_424(func_551(iVar0))), func_424(func_551(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_455() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_548() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_554(iVar0)), func_554(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_466(iParam3, func_555(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_462(iVar2) - iParam7) >= func_415(iParam3, func_556(iVar0));
				}
				else
				{
					bVar1 = func_462(iVar2) >= func_415(iParam3, func_556(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_462(iVar2) + iParam7) >= func_415(iParam3, func_556(iVar0));
			}
			else
			{
				bVar1 = func_462(iVar2) >= func_415(iParam3, func_556(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_557(iVar2)), func_557(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_558(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_559(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_559(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_456() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_550() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_560(iVar0)), func_560(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_466(iParam3, func_555(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_462(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_561(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_561(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_562(iVar2)), func_562(iVar2), bVar1, true, false);
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
		if (func_549() >= 13)
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
	if (func_16(func_563(0)) && ((func_564(0) == 1 || func_564(0) == 8) || func_564(0) == 6))
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
	struct<5> Var0;
	struct<8> Var13;
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
	struct<4> Var0;
	struct<8> Var13;
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

bool func_426(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_427(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_428(int iParam0)
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

void func_429(int iParam0)
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
			func_565(1);
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
			func_566(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_566(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_566(3);
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
			func_567(1);
			break;
		case 34:
			func_568(1);
			break;
		case 35:
			func_569(1);
			break;
		case 36:
			break;
		case 37:
			func_570(0);
			break;
		case 38:
			func_571(0);
			break;
		case 39:
			func_572(0);
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
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_256(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_256(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_256(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_259()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_425("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_256(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_23() == -1)
			{
				if (!func_487(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_573(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_433())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_221(iVar0, 1, 0))
					{
						func_309(iVar0, 1, 752097756);
					}
					func_170(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_221(1013902307, 1, 0))
				{
					func_309(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_221(1013902307, 1, 0))
				{
					func_309(1013902307, 1, 752097756);
				}
				if (!func_221(142640135, 1, 0))
				{
					func_309(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_221(786809402, 1, 0))
				{
					func_309(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_221(786809402, 1, 0))
				{
					func_309(786809402, 1, 752097756);
				}
				if (!func_221(-518019409, 1, 0))
				{
					func_309(-518019409, 1, 752097756);
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
			func_574();
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

void func_430(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_132(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_431(int iParam0)
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
	iVar2 = func_575();
	func_576(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_22(iParam0))
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

bool func_433()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_434(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_436(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_266(50))
			{
				if (!func_266(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_266(51))
			{
				if (!func_266(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_437()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_438()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_439()
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

int func_440(int iParam0)
{
	if (!func_16(iParam0))
	{
		return -1;
	}
	return func_577(iParam0);
}

int func_441()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_221(func_578(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_442(int iParam0)
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

bool func_443(int iParam0, int iParam1)
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
	if (func_221(iVar0, 1, 0) && func_221(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_444(int iParam0)
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

bool func_445(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_579(iParam0);
	if (iVar0 != -15)
	{
		func_576(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_580(iVar0, 1);
	}
	return false;
}

int func_446(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_221(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_21(iVar25, 0) && func_77(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_447(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_448(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_581())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_246(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_582(iVar0);
			func_583(iVar0, 0, 0);
		}
		func_246(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_160(func_491(joaat("CAREER_CASH")), iVar1);
	}
}

void func_449(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_450(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_451(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_452(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_453(int iParam0)
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
	iVar1 = func_462(iVar9);
	iVar2 = func_462(iVar10);
	iVar3 = func_462(iVar11);
	iVar5 = func_463(iVar9);
	iVar6 = func_463(iVar10);
	iVar7 = func_463(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_462(iVar12);
		iVar8 = func_463(iVar12);
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

void func_454(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_455()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_584(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_456()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_457(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_561(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_561(iVar0))
		{
			*iParam2++;
		}
		if (func_561(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_561(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_561(iVar0))
		{
			*iParam2++;
		}
		if (func_561(iVar1))
		{
			*iParam2++;
		}
		if (func_561(iVar0) && func_561(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_561(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_561(iVar0))
		{
			*iParam2++;
		}
		if (func_561(iVar1))
		{
			*iParam2++;
		}
		if (func_561(iVar2))
		{
			*iParam2++;
		}
		if ((func_561(iVar0) && func_561(iVar1)) && func_561(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_561(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_561(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_561(iVar0))
		{
			*iParam2++;
		}
		if (func_561(iVar1))
		{
			*iParam2++;
		}
		if (func_561(iVar2))
		{
			*iParam2++;
		}
		if (func_561(iVar3))
		{
			*iParam2++;
		}
		if (((func_561(iVar0) && func_561(iVar1)) && func_561(iVar2)) && func_561(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_458(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_585(1497516462);
			func_586(2016141805);
			func_586(1010885152);
			func_586(-502324015);
			break;
		case 2016141805:
			func_586(1497516462);
			func_585(2016141805);
			func_586(1010885152);
			func_586(-502324015);
			break;
		case 1010885152:
			func_586(1497516462);
			func_586(2016141805);
			func_585(1010885152);
			func_586(-502324015);
			break;
		case -502324015:
			func_586(1497516462);
			func_586(2016141805);
			func_586(1010885152);
			func_585(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_586(-538889627);
			func_586(-538880323);
			func_586(-1056767524);
			func_585(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_587();
			func_585(iParam0);
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
			func_588();
			func_585(iParam0);
			break;
		case 2019386373:
			func_586(-664252410);
			func_586(2109952320);
			func_585(2019386373);
			break;
		case -664252410:
			func_586(2019386373);
			func_586(2109952320);
			func_585(-664252410);
			break;
		case 2109952320:
			func_586(2019386373);
			func_586(-664252410);
			func_585(2109952320);
			break;
		case -1674179981:
			func_586(-1835851517);
			func_586(-1838352012);
			func_585(-1674179981);
			break;
		case -1835851517:
			func_586(-1674179981);
			func_586(-1838352012);
			func_585(-1835851517);
			break;
		case -1838352012:
			func_586(-1674179981);
			func_586(-1835851517);
			func_585(-1838352012);
			break;
		case -1717960576:
			func_586(210001842);
			func_585(-1717960576);
			break;
		case 210001842:
			func_586(-1717960576);
			func_585(210001842);
			break;
		case -150493654:
			func_586(-1271608261);
			func_586(1846061697);
			func_586(-1145519186);
			func_585(-150493654);
			break;
		case -1271608261:
			func_586(-150493654);
			func_586(1846061697);
			func_586(-1145519186);
			func_585(-1271608261);
			break;
		case 1846061697:
			func_586(-150493654);
			func_586(-1271608261);
			func_586(-1145519186);
			func_585(1846061697);
			break;
		case -1145519186:
			func_586(-150493654);
			func_586(-1271608261);
			func_586(1846061697);
			func_585(-1145519186);
			break;
		case 1766284049:
			func_586(280705402);
			func_586(1926308480);
			func_585(1766284049);
			break;
		case 280705402:
			func_586(1766284049);
			func_586(1926308480);
			func_585(280705402);
			break;
		case 1926308480:
			func_586(1766284049);
			func_586(280705402);
			func_585(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_586(439465264);
				func_585(1609506757);
			}
			else
			{
				func_586(1609506757);
				func_586(439465264);
			}
			break;
		case 439465264:
			if (func_589(1609506757))
			{
				if (bParam1)
				{
					func_585(439465264);
				}
				else
				{
					func_586(439465264);
				}
			}
			break;
		case 1822001510:
			func_586(-1612662716);
			func_585(1822001510);
			break;
		case -1612662716:
			func_586(1822001510);
			func_585(-1612662716);
			break;
		case 1306158345:
			func_586(1952610440);
			func_586(-223469678);
			func_586(-404698347);
			func_586(1517904467);
			func_585(1306158345);
			break;
		case 1952610440:
			func_586(1306158345);
			func_586(-223469678);
			func_586(-404698347);
			func_586(1517904467);
			func_585(1952610440);
			break;
		case -223469678:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-404698347);
			func_586(1517904467);
			func_585(-223469678);
			break;
		case -404698347:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-223469678);
			func_586(1517904467);
			func_585(-404698347);
			break;
		case 1517904467:
			func_586(1306158345);
			func_586(1952610440);
			func_586(-223469678);
			func_586(-404698347);
			func_585(1517904467);
			break;
		case 1376646519:
			func_586(931649776);
			func_586(-434590080);
			func_586(1743048395);
			func_586(449774763);
			func_585(1376646519);
			break;
		case 931649776:
			func_586(1376646519);
			func_586(-434590080);
			func_586(1743048395);
			func_586(449774763);
			func_585(931649776);
			break;
		case -434590080:
			func_586(1376646519);
			func_586(931649776);
			func_586(1743048395);
			func_586(449774763);
			func_585(-434590080);
			break;
		case 1743048395:
			func_586(1376646519);
			func_586(931649776);
			func_586(-434590080);
			func_586(449774763);
			func_585(1743048395);
			break;
		case 449774763:
			func_586(1376646519);
			func_586(931649776);
			func_586(-434590080);
			func_586(1743048395);
			func_585(449774763);
			break;
		case -1414537028:
			func_586(38162571);
			func_586(1350391819);
			func_586(54073871);
			func_585(-1414537028);
			break;
		case 38162571:
			func_586(-1414537028);
			func_586(1350391819);
			func_586(54073871);
			func_585(38162571);
			break;
		case 1350391819:
			func_586(-1414537028);
			func_586(38162571);
			func_586(54073871);
			func_585(1350391819);
			break;
		case 54073871:
			func_586(-1414537028);
			func_586(38162571);
			func_586(1350391819);
			func_585(54073871);
			break;
		case 198200492:
			func_585(198200492);
			func_586(-1124061431);
			func_586(52706132);
			func_586(-259123672);
			break;
		case -1124061431:
			func_586(198200492);
			func_585(-1124061431);
			func_586(52706132);
			func_586(-259123672);
			break;
		case 52706132:
			func_586(198200492);
			func_586(-1124061431);
			func_585(52706132);
			func_586(-259123672);
			break;
		case -259123672:
			func_586(198200492);
			func_586(-1124061431);
			func_586(52706132);
			func_585(-259123672);
			break;
		case -919512195:
			func_585(-919512195);
			func_586(-1925798111);
			func_586(420709909);
			func_586(1703426636);
			break;
		case -1925798111:
			func_585(-1925798111);
			func_586(-919512195);
			func_586(420709909);
			func_586(1703426636);
			break;
		case 420709909:
			func_585(420709909);
			func_586(-919512195);
			func_586(-1925798111);
			func_586(1703426636);
			break;
		case 1703426636:
			func_585(1703426636);
			func_586(-919512195);
			func_586(-1925798111);
			func_586(420709909);
			break;
		case -1223121209:
			func_585(-1223121209);
			func_586(630808005);
			break;
		case 630808005:
			func_585(630808005);
			func_586(-1223121209);
			break;
		case 1453909576:
			func_585(1453909576);
			func_586(1643531967);
			break;
		case 1643531967:
			func_585(1643531967);
			func_586(1453909576);
			break;
		case 0:
			func_585(0);
			func_586(473295046);
			func_586(-1738165526);
			break;
		case 473295046:
			func_585(473295046);
			func_586(0);
			func_586(-1738165526);
			break;
		case -1738165526:
			func_585(-1738165526);
			func_586(0);
			func_586(473295046);
			break;
		case 932909855:
			func_585(932909855);
			func_586(2051822093);
			break;
		case 2051822093:
			func_585(2051822093);
			func_586(932909855);
			break;
		case 405586984:
			func_585(405586984);
			func_586(1509509592);
			func_586(-959357075);
			func_586(-1311865656);
			break;
		case 1509509592:
			func_585(1509509592);
			func_586(405586984);
			func_586(-959357075);
			func_586(-1311865656);
			break;
		case -959357075:
			func_585(-959357075);
			func_586(1509509592);
			func_586(405586984);
			func_586(-1311865656);
			break;
		case -1311865656:
			func_585(-1311865656);
			func_586(1509509592);
			func_586(-959357075);
			func_586(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_585(-524145696);
			}
			else
			{
				func_586(-524145696);
			}
			func_586(1626481264);
			func_586(282809459);
			break;
		case 282809459:
			func_585(282809459);
			func_586(1626481264);
			func_586(-524145696);
			break;
		case 1626481264:
			func_585(1626481264);
			func_586(-524145696);
			func_586(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_585(885203519);
			}
			else
			{
				func_586(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_585(-1080627546);
			}
			else
			{
				func_586(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_589(iParam0))
				{
					func_585(iParam0);
				}
			}
			else if (func_589(iParam0))
			{
				func_586(iParam0);
			}
			break;
	}
}

void func_459(int iParam0)
{
	if (!func_590(iParam0))
	{
		func_592(func_591(iParam0));
	}
}

int func_460()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_590(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_461(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_462(iVar9);
	iVar2 = func_462(iVar10);
	iVar3 = func_462(iVar11);
	iVar5 = func_463(iVar9);
	iVar6 = func_463(iVar10);
	iVar7 = func_463(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_462(iVar12);
		iVar8 = func_463(iVar12);
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

int func_462(int iParam0)
{
	int iVar0;

	if (func_221(iParam0, 1, 0))
	{
		iVar0 = func_129(iParam0, 0, 0);
	}
	return iVar0;
}

int func_463(int iParam0)
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

int func_464(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_465(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_466(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_545(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_467(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_466(iParam1, 5) || iParam0 == func_466(iParam1, 6)) || iParam0 == func_466(iParam1, 7)) || iParam0 == func_466(iParam1, 8)) || iParam0 == func_466(iParam1, 9))
	{
		func_457(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_263(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_265(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_468(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_466(iParam1, 5) || iParam0 == func_466(iParam1, 6)) || iParam0 == func_466(iParam1, 7)) || iParam0 == func_466(iParam1, 8)) || iParam0 == func_466(iParam1, 9))
	{
		if (func_457(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_263(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_265(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_263(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_265(51, 0, 0, iVar0, func_415(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_469()
{
	if (func_413(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_470(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_471(int iParam0)
{
	if (!func_593(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_472(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

bool func_473(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_147(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_474(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_475()
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

	if (func_594())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_595(2);
	}
	if (Global_1347477.f_119)
	{
		return func_595(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_600()));
	fVar7 = (func_595(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_601(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(3, fVar9, fVar9 > 100f);
	return func_603(fVar7, -100f, 100f);
}

float func_476()
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

	if (func_594())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_595(1);
	}
	if (Global_1347477.f_119)
	{
		return func_595(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_600()));
	fVar7 = (func_595(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_601(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(2, fVar9, fVar9 > 100f);
	return func_603(fVar7, -100f, 100f);
}

float func_477()
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

	if (func_594())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_595(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_604())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_605())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_595(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_596();
	fVar2 = func_597();
	fVar3 = func_598();
	fVar4 = func_599();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_600()));
	fVar7 = (func_595(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_601(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_602(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_595(0);
	}
	return func_603(fVar7, -100f, 100f);
}

bool func_478(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_479(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_480(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804.f_2657.f_21;
		case 81053684:
			return Global_1946804.f_2657.f_23;
		case -525676072:
			return Global_1946804.f_2657.f_22;
		case -1719060085:
			return Global_1946804.f_2657.f_24;
		case -413129408:
			return Global_1946804.f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804.f_2657.f_20;
			}
			else
			{
				return func_606();
			}
			break;
	}
	return 0;
}

int func_481(int iParam0)
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

bool func_482(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_483(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_482(iParam0))
	{
		return;
	}
	if (func_607(iParam0))
	{
		return;
	}
	if (!func_608(iParam0))
	{
		func_609(iParam0, 1, 0);
	}
	iVar0 = func_610(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_611(iParam0, 512))
		{
			func_337(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_612() && !bParam1) && !func_1(0, 0, 1))
	{
		func_613(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_614(iParam0, 6);
	if (bParam2)
	{
		if (!func_1(0, 0, 1))
		{
			func_409(1, 4);
		}
	}
}

int func_484()
{
	return Global_1946804.f_1;
}

bool func_485(int iParam0, bool bParam1)
{
	return func_480(iParam0, 0) < func_615(iParam0, bParam1);
}

bool func_486(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_208(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_487(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_329(iParam0, 1) /*3*/] != Global_1946804.f_57[func_329(iParam0, 1) /*11*/];
}

void func_488(int iParam0, int iParam1)
{
	if (func_77(iParam1, 130796156))
	{
		func_616(iParam1, 0);
	}
	else if (func_77(iParam1, 930141731))
	{
		func_616(iParam1, 1);
		func_617(iParam0);
	}
}

void func_489(var uParam0, int iParam1)
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

int func_490(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_618(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_619(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_491(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

int func_492(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_493(int iParam0)
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

int func_494(int iParam0)
{
	var uVar0;

	if (!func_620(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_495(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 != 0)
	{
		iVar3 = func_208(iParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_621(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

float func_496(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_321(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_497(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_622(iVar6) - func_622(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_497(float fParam0)
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

int func_498(int iParam0)
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

int func_499(int iParam0)
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

int func_500(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_497(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_622(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_622(iVar0 + 1));
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

int func_501(int iParam0)
{
	int iVar0;

	if (func_623(iParam0, &iVar0))
	{
		return func_622(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_624())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_624())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_624())
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

int func_502(int iParam0)
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

void func_503(int iParam0, int iParam1, int iParam2)
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
	struct<6> Var10;

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
	iVar3 = (iVar3 + func_625(iParam0));
	sVar4 = func_627(func_626(iVar3, iParam2));
	sVar6 = func_628(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_629(iParam0));
	iVar8 = func_630(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_631(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_423(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_632(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

int func_504(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_334(iVar0);
}

int func_505(int iParam0, int iParam1)
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

void func_506()
{
	int iVar0;

	Global_1946804.f_1378 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_507(int iParam0)
{
	func_514(iParam0, 8, 6);
}

void func_508(int iParam0)
{
	func_633(&(Global_1946804.f_2589), iParam0);
}

void func_509(int iParam0, int iParam1)
{
	func_634(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_510(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_511(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_208(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_635(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_509(iVar1, iVar3);
		}
	}
	if (func_487(-1586649372) && func_635(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_509(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
			}
			func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_636(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 525
				func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 656
				func_636(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1417; //curOff = 691
				func_636(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 788
				func_636(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1417; //curOff = 809
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_333(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
				}
				Jump @1417; //curOff = 1132
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_77(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 1230
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_333(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_77(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_509(iVar1, iVar3);
					}
				}
			}
			switch (func_208(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_208(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_208(uParam0->f_1[iVar1 /*3*/]) || func_77(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_509(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_512(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_637(0);
	if (iParam2 != 0 && func_638(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_639(iParam0, func_505(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_513(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_23() != -1;
	iVar7 = func_637(0);
	if (func_338(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946804.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_505(iVar0, 1);
			if (func_640(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_640(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_332(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_641(uParam0);
				if (iVar3 > 0)
				{
					if (!func_338(524288))
					{
						func_516(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946804.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_505(iVar0, 1);
							if (func_640(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_640(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_332(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_509(iVar0, iParam2);
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
					func_519(524288);
				}
			}
		}
	}
}

void func_514(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_329(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_329(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_329(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_515(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_642(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_643(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_610(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_610(Global_40.f_7729);
				Global_1946804.f_1378 = func_610(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_644(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_645(0, 1);
	}
}

void func_516(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_517(struct<4> Param0)
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
			if (Global_1946804.f_850 >= 25)
			{
				return;
			}
			if (func_646(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804.f_850)
				{
					iVar1 = ((Global_1946804.f_855 + iVar0) % 25);
					if ((Global_1946804.f_668[iVar1 /*4*/] == Param0 && Global_1946804.f_668[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1946804.f_668[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_647(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_516(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804.f_851 >= 25)
			{
				return;
			}
			if (func_646(Param0))
			{
				return;
			}
			func_647(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_516(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_342(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_518(var uParam0)
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

void func_519(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_520(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_521(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_646(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_646(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_647(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_516(8);
}

bool func_522(int iParam0)
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
		default:
			break;
	}
	return false;
}

int func_523(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
		case -1784068921:
			return 7;
		case -1642438278:
			return 2;
		case -1349086674:
			return 8;
		case 310186733:
			return 5;
		case 456315479:
			return 9;
		case 471747275:
			return 3;
		case 1166592425:
			return 4;
		case 1486898918:
			return 0;
		case 1500419820:
			return 1;
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

bool func_524(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_648(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_649())
	{
		return func_648(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_648(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

int func_525(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
	{
		return 1;
	}
	if (!NETWORK::_0x271F95E55C663B8B(&uVar0, uParam1))
	{
		return 0;
	}
	Var1.f_1 = 10;
	Var1.f_14 = 255;
	Var1.f_12 = bParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_650(uParam1, iParam0, Var1);
	return 1;
}

bool func_526(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

int func_527(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_528(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_390(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_391(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

int func_529(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	iParam1 = func_651(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = func_530(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_531(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_530(int iParam0)
{
	int iVar0;

	if (func_652(iParam0))
	{
		if (func_23() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_156(func_218(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_653());
		}
	}
	else if (func_23() == -1)
	{
		iVar0 = func_156(0);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

int func_531(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	iVar1 = func_654(iVar0, iParam1);
	if (func_655(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_313(iParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_656(iParam1))
		{
			func_657(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_657(*iParam0, iParam1, *iParam2);
			func_651(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_654(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_532(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_129(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_225(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!func_658(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			func_613("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_533(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_534(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, func_659(iParam2));
	iVar16 = 0;
	while (iVar16 < 15)
	{
		if ((func_21(uVar0[iVar16], 0) && !func_77(uVar0[iVar16], 1286414894)) && !uVar0[iVar16] == iParam2)
		{
			func_165(uVar0[iVar16], 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar0[iVar16])
				{
					iVar17++;
				}
			}
			else
			{
				iVar17++;
			}
		}
		iVar16++;
	}
	func_660(func_80(0), 1, 0);
	return iVar17;
}

void func_535(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_255(43))
		{
			if (func_77(iParam0, 412399755))
			{
				func_459(joaat("EXOTIC_STAGE_01"));
				if (func_460() == 0)
				{
					func_409(0, 10);
					iVar0 = func_661(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_462(iParam0) < func_463(iParam0))
						{
							func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_255(44))
		{
			if (func_77(iParam0, 709057512))
			{
				func_459(joaat("EXOTIC_STAGE_02"));
				if (func_460() == 1)
				{
					func_409(0, 10);
					iVar0 = func_661(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_462(iParam0) < func_463(iParam0))
						{
							func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(45))
		{
			if (func_77(iParam0, -1478961327))
			{
				func_459(joaat("EXOTIC_STAGE_03"));
				if (func_460() == 2)
				{
					func_409(0, 10);
					iVar0 = func_661(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_462(iParam0) < func_463(iParam0))
						{
							func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(46))
		{
			if (func_77(iParam0, -1238404098))
			{
				func_459(joaat("EXOTIC_STAGE_04"));
				if (func_460() == 3)
				{
					func_409(0, 10);
					iVar0 = func_661(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_462(iParam0) < func_463(iParam0))
						{
							func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_255(47))
		{
			if (func_77(iParam0, 1160548794))
			{
				func_459(joaat("EXOTIC_STAGE_05"));
				if (func_460() == 4)
				{
					func_409(0, 10);
					iVar0 = func_661(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_462(iParam0) < func_463(iParam0))
						{
							func_263(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_536(struct<4> Param0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> Var1;
	int iVar15;
	struct<29> Var16;
	struct<18> Var45;
	struct<17> Var63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_210(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_127(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_662(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_663(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_664(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_665(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_666(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_151(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_537(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_208(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_393(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

int func_538(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_21(iParam0, 0))
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

void func_539(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_540(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_541(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_478(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_478(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_542(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_478(iParam0, 65536) && !func_478(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_478(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_478(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_543(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_544()
{
	return Global_1905944.f_5694;
}

bool func_545(int iParam0, var uParam1)
{
	if (!func_667(iParam0))
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

int func_546()
{
	return func_668(Global_40.f_12019);
}

int func_547()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_414(iVar1);
		if (func_221(iVar2, 1, 0) || func_553(func_552(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_548()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_669(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_549()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_558(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_550()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_551(int iParam0)
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

int func_552(int iParam0)
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

bool func_553(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_554(int iParam0)
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

int func_555(int iParam0)
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

int func_556(int iParam0)
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

char* func_557(int iParam0)
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

bool func_558(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_559(int iParam0)
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

char* func_560(int iParam0)
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

bool func_561(int iParam0)
{
	if (func_670(iParam0) && func_221(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_671(iParam0) && func_672(iParam0))
	{
		return true;
	}
	return false;
}

char* func_562(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_244(iParam0));
}

int func_563(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_564(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_565(bool bParam0)
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

void func_566(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1955569.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1955569.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569.f_5.f_1, iParam0);
		if (iVar0 == Global_1955569.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_1, iParam0, "pause_info_panel_list", Global_1955569.f_5.f_2[iParam0 /*36*/]);
}

void func_567(bool bParam0)
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

void func_568(bool bParam0)
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

void func_569(bool bParam0)
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

void func_570(bool bParam0)
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

void func_571(bool bParam0)
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

void func_572(bool bParam0)
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

int func_573(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_329(iParam0, 1) /*3*/];
}

void func_574()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_673();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_162(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_309(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_162(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_309(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_575()
{
	return Global_1899515;
}

void func_576(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_674(*iParam0);
	iVar1 = func_675(*iParam0);
	iVar2 = func_676(*iParam0);
	iVar3 = func_677(*iParam0);
	iVar4 = func_678(*iParam0);
	iVar5 = func_679(*iParam0);
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
	iVar6 = func_680(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_680(iVar1, iVar0);
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
	func_681(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_577(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_682(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_578(int iParam0)
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

int func_579(int iParam0)
{
	return func_683(iParam0, -1);
}

bool func_580(int iParam0, bool bParam1)
{
	return func_684(func_575(), iParam0, bParam1);
}

bool func_581()
{
	if (func_437())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_582(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_685((Global_40.f_4283.f_325 + iParam0));
}

void func_583(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_581())
	{
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_246(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_584(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_686(iParam0, 1);
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
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_686(iParam0, 1);
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
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_587()
{
	func_586(-939420910);
	func_586(-1187950766);
	func_586(356365161);
	func_586(753127042);
	func_586(-2038424081);
	func_586(1884271742);
	func_586(459290420);
}

void func_588()
{
	func_586(704802028);
	func_586(588987611);
	func_586(2008888900);
	func_586(1649996811);
	func_586(227918160);
	func_586(168171957);
	func_586(1193080109);
	func_586(-491981251);
	func_586(-639037538);
	func_586(-618620429);
}

bool func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_686(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_590(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_591(int iParam0)
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

void func_592(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_593(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_594()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_595(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_596()
{
	float fVar0;
	int iVar1;

	fVar0 = func_687(13);
	iVar1 = func_688(fVar0);
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

float func_597()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_598()
{
	if (func_437())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_599()
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

float func_600()
{
	return Global_1955565.f_3;
}

void func_601(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_689(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_602(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_689(iParam0, 2, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[2], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}
}

float func_603(float fParam0, float fParam1, float fParam2)
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

bool func_604()
{
	return func_687(12) <= -99f;
}

bool func_605()
{
	return func_687(12) >= 99f;
}

int func_606()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_208(iVar1) == -999503751)
		{
			if (func_690() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_607(int iParam0)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	if (func_611(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_608(int iParam0)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	if (func_611(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_609(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_482(iParam0))
	{
		return;
	}
	if (!func_608(iParam0))
	{
		func_614(iParam0, 2);
		if (bParam2)
		{
			if (!func_1(0, 0, 1))
			{
				func_409(1, 4);
			}
		}
		if ((!func_612() && !bParam1) && !func_1(0, 0, 1))
		{
			func_613(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_691(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_610(int iParam0)
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

bool func_611(int iParam0, int iParam1)
{
	if (!func_482(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_612()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_613(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_614(int iParam0, int iParam1)
{
	if (!func_482(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_615(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804.f_2657.f_26.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1946804.f_2657.f_26.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1946804.f_2657.f_26;
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

void func_616(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_692(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_267(50);
			}
			else
			{
				func_267(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_267(51);
			}
			else
			{
				func_267(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_693(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_291();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_291();
			}
			break;
		case 3:
			func_267(24);
			if (bParam1)
			{
				if (!func_693(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_291();
				}
			}
			break;
	}
}

void func_617(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_694(0))
			{
				iVar0++;
			}
			if (func_694(2))
			{
				iVar0++;
			}
			if (func_694(4))
			{
				iVar0++;
			}
			if (!func_695(16))
			{
				if (iVar0 == 1)
				{
					func_696();
					func_256(456, 1);
					func_697(16);
				}
			}
			if (!func_695(32))
			{
				if (iVar0 >= 3)
				{
					func_696();
					func_256(456, 1);
					func_697(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_694(1))
			{
				iVar0++;
			}
			if (func_694(3))
			{
				iVar0++;
			}
			if (func_694(7))
			{
				iVar0++;
			}
			if (!func_695(1))
			{
				if (iVar0 == 1)
				{
					func_698();
					func_256(457, 1);
					func_697(1);
				}
			}
			if (!func_695(2))
			{
				if (iVar0 >= 3)
				{
					func_698();
					func_256(457, 1);
					func_697(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_694(5))
			{
				iVar0++;
			}
			if (func_694(6))
			{
				iVar0++;
			}
			if (func_694(8))
			{
				iVar0++;
			}
			if (!func_695(4))
			{
				if (iVar0 == 1)
				{
					func_699();
					func_256(455, 1);
					func_697(4);
				}
			}
			if (!func_695(8))
			{
				if (iVar0 >= 3)
				{
					func_699();
					func_256(455, 1);
					func_697(8);
				}
			}
			break;
	}
}

void func_618(var uParam0)
{
	func_489(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_489(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_489(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_619(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_700(uParam0))
	{
		return;
	}
	if (Global_1224866 < 20)
	{
		Global_1224866++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224866.f_1[iVar0 /*21*/] = { Global_1224866.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1224866.f_1[(Global_1224866 - 1) /*21*/] = { Var1 };
}

bool func_620(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

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

int func_621(int iParam0)
{
	int iVar0;

	if (!func_21(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_622(int iParam0)
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

bool func_623(int iParam0, int iParam1)
{
	return false;
}

bool func_624()
{
	return false;
}

int func_625(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_147(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_147(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_147(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_626(int iParam0, int iParam1)
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

char* func_627(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_628(int iParam0)
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

char* func_629(int iParam0)
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

int func_630(int iParam0)
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

int func_631(int iParam0)
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

int func_632(int iParam0)
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

void func_633(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;

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
			if ((func_701(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_701(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_702(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_634(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_703(uParam0, 1))
	{
		func_704(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_635(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_636(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
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
			func_509(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_509(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_509(iVar2, iVar0);
		}
	}
}

int func_637(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_484();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_638(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_639(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_640(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_329(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_641(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_642(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_705(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_706(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_643(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

void func_644(int iParam0, bool bParam1, int iParam2)
{
	func_707(&(Global_1946804.f_1378), iParam0);
	func_708(2, iParam0, 6);
	if (bParam1)
	{
		func_645(0, 1);
	}
}

void func_645(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_709(0);
	}
	if (bParam0)
	{
		func_516(8);
		func_516(512);
	}
	else
	{
		func_516(8);
		func_516(16);
	}
}

bool func_646(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_647(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

bool func_648(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_649()
{
	return Global_1109400.f_245;
}

void func_650(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_700(uParam0))
	{
		return;
	}
	if (Global_1224424 < 20)
	{
		Global_1224424++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1224424.f_1[iVar0 /*22*/] = { Global_1224424.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 10;
	Var1.f_7.f_14 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1224424.f_1[(Global_1224424 - 1) /*22*/] = { Var1 };
}

int func_651(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					func_390(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_391(&iVar0, iVar9, iVar5, iVar6);
					if (!func_21(iVar0, 0))
					{
						iVar0 = func_382(iVar2);
					}
				}
				else
				{
					iVar0 = func_382(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
					if (bParam3)
					{
						func_710(iVar2);
						ENTITY::_DELETE_CARRIABLE(&iVar2);
					}
					iParam2 = (iParam2 - 1);
				}
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam2;
}

bool func_652(int iParam0)
{
	int iVar0;

	if (func_23() == -1)
	{
		if ((Global_1914319.f_17370 || iParam0) || Global_1914319.f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_156(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(func_653());
		if (iVar0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

int func_653()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_654(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;

	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_711(iParam0, iParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_655(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	if (func_712(iParam0))
	{
		iVar1 = func_713(iParam0);
		if (func_21(iParam1, 0))
		{
			if (func_656(iParam1))
			{
				func_714(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_715(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_318(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_716(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_657(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar1 = iParam1;
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0) == iVar1)
		{
			PED::_0x627F7F3A0C4C51FF(iParam0, iVar1);
			iParam2 = (iParam2 - 1);
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

bool func_658(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_313(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var0))
	{
		STATS::_0xBD861AE8A5181ED7(&Var0, iParam1);
	}
	func_717(iParam0, iParam1);
	return func_392(iParam0, iParam1, bParam2, iParam3);
}

int func_659(int iParam0)
{
	if (func_77(iParam0, 1064293907))
	{
		return 2;
	}
	else if (func_77(iParam0, -1218707194))
	{
		return 1;
	}
	else if (func_77(iParam0, 1888974372))
	{
		return 0;
	}
	return 1;
}

void func_660(bool bParam0, bool bParam1, int iParam2)
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;
	if (bParam0)
	{
		Global_1935689.f_5 = 0;
	}
	if (bParam1 || (func_718() && iParam2 == 0))
	{
		func_719(1);
		func_720(1);
	}
}

int func_661(int iParam0, int iParam1, int iParam2)
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
			iVar1 = func_462(iVar9);
			iVar2 = func_462(iVar10);
			iVar3 = func_462(iVar11);
			if (iParam2 != 2)
			{
				iVar4 = func_462(iVar12);
			}
			iVar5 = func_463(iVar9);
			iVar6 = func_463(iVar10);
			iVar7 = func_463(iVar11);
			if (iParam2 != 2)
			{
				iVar8 = func_463(iVar12);
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

struct<29> func_662(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_147(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_666(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_663(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_721(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_664(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_147(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_666(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_665(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_722(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_217(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_217(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_217(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_666(var uParam0)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	return Var0;
}

bool func_667(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_668(int iParam0)
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

bool func_669(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_670(int iParam0)
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

int func_671(int iParam0)
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

int func_672(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_723(&iVar0, 0, iVar95, &Var1) && !func_723(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_724(iVar0, &Var1);
			if (func_21(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_673()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_725(Global_35, &iVar0);
	Var30 = { func_201(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_726(0);
	func_727(7);
	func_728(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_484() == 1160113249)
	{
		func_728(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_728(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_729(Global_35, &iVar0);
}

int func_674(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_184(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_675(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_676(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_677(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_678(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_679(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_680(int iParam0, int iParam1)
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

void func_681(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_730(iParam0, iParam6);
	func_731(iParam0, iParam5);
	func_732(iParam0, iParam4);
	func_733(iParam0, iParam3);
	func_734(iParam0, iParam2);
	func_735(iParam0, iParam1);
}

int func_682(int iParam0)
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

int func_683(int iParam0, int iParam1)
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
		iParam1 = func_147(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_730(&uVar6, iVar0);
	func_731(&uVar6, iVar1);
	func_732(&uVar6, iVar2);
	func_733(&uVar6, iVar3);
	func_734(&uVar6, iVar4);
	func_735(&uVar6, iVar5);
	return uVar6;
}

bool func_684(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_736(iParam1) || !func_736(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_685(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_491(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_686(int iParam0, int iParam1)
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

float func_687(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_688(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_689(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_242(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_242(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_690()
{
	return Global_1946804.f_1497;
}

char* func_691(int iParam0)
{
	int iVar0;

	iVar0 = func_610(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_562(iVar0);
}

int func_692(int iParam0)
{
	int iVar0;

	if (func_737(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_738(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_739(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_740(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_693(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_221(func_741(iVar0, iParam0), 1, 0))
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

bool func_694(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_221(func_742(iVar0, iParam0), 1, 0))
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

bool func_695(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_696()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_324(1);
	func_503(1, iVar0, 0);
}

void func_697(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_698()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_324(2);
	func_503(2, iVar0, 0);
}

void func_699()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_309(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_324(0);
	func_503(0, iVar0, 0);
}

bool func_700(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_701(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_702(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_703(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_704(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_705(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_706(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_707(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_705(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_706(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
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

void func_709(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

void func_710(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[10];
	int iVar14;
	int iVar15;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar2 = Global_40.f_4283;
	if (func_743(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		func_389(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_21(uVar3[iVar15], 0))
			{
			}
			else if (!func_744(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = func_745(uVar3[iVar15], iVar2);
				if (func_746(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_747(&iVar1);
	if (func_746(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

struct<4> func_711(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { func_748(iParam0) };
	return func_749(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_712(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_713(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_713(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_714(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_750(iParam1);
	iVar1 = func_751(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = (Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_752(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_715(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_753(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_313(iParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_654(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_654(iParam0, iParam1) - iParam2) < 0)
		{
			func_715(iParam0, iParam1, func_129(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_754(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_80(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_164(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_716(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_FUR");
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
		case 5:
			return joaat("PROVISION_BOAR_SKIN");
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 8:
			return joaat("PROVISION_BUCK_FUR");
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
		case 16:
			return joaat("PROVISION_COYOTE_FUR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
		case 20:
			return joaat("PROVISION_DEER_HIDE");
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 23:
			return joaat("PROVISION_FOX_FUR");
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
		case 27:
			return joaat("PROVISION_GOAT_HAIR");
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 30:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 33:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 34:
			return joaat("PROVISION_PANTHER_FUR");
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
		case 38:
			return joaat("PROVISION_PIG_SKIN");
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 41:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
		case 45:
			return joaat("PROVISION_RAM_HIDE");
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
		case 49:
			return joaat("PROVISION_SHEEP_WOOL");
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 52:
			return joaat("PROVISION_WOLF_FUR");
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
		case 56:
			return 0;
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

void func_717(int iParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = func_156(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_657(iVar0, iParam0, iParam1);
}

bool func_718()
{
	if ((Global_1935689.f_10195 != (Global_1935689.f_19.f_203 - 1) || func_755(func_530(0), Global_1935689.f_10190, 0) > 0) || Global_1935689.f_10195 == 15)
	{
		return true;
	}
	return false;
}

void func_719(int iParam0)
{
	Global_1935689.f_11 = iParam0;
}

void func_720(int iParam0)
{
	Global_1935689.f_10 = iParam0;
}

bool func_721(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_722(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_723(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_371(iParam1) && !func_756(iParam1))
	{
		iVar0 = func_156(iParam1);
	}
	else
	{
		return false;
	}
	func_757(uParam3);
	iVar5 = func_758(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var1, iVar0, iVar5, 0))
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

void func_724(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_390(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_391(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_725(int iParam0, int* iParam1)
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
		if (func_232(iVar31))
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

void func_726(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_21(iVar1, 0))
		{
			func_759(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_760(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (func_208(iVar2) != -999503751)
		{
			func_761(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_762(iVar2, 0))
		{
			func_763(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_728(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_764(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_765(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_766(0))
	{
		func_767(iParam0, 1);
		if (func_484() == 1160113249)
		{
			func_767(func_766(-2125499975), 0);
		}
		else
		{
			func_767(func_766(1160113249), 0);
		}
	}
	func_768();
	if (func_769(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_147(0), iParam0, 0);
	}
	func_763(iParam0, bParam3);
	if (bParam2)
	{
		func_645(0, 0);
	}
}

void func_729(int iParam0, int iParam1)
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
				if (func_146((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
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

void func_730(int iParam0, int iParam1)
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

void func_731(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_732(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_675(*iParam0);
	iVar1 = func_674(*iParam0);
	if (iParam1 < 1 || iParam1 > func_680(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_733(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_734(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_735(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_736(int iParam0)
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
	iVar0 = func_679(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_678(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_677(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_674(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_675(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_676(iParam0);
	if (iVar5 < 1 || iVar5 > func_680(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_737(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_738(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_739(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_740(int iParam0)
{
	if (!func_21(iParam0, 0))
	{
		return false;
	}
	if (func_77(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_741(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_770(iParam0);
		case 1:
			return func_771(iParam0);
		case 2:
			return func_772(iParam0);
		case 3:
			return func_773(iParam0);
	}
	return 0;
}

int func_742(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_774(iParam0);
		case 1:
			return func_775(iParam0);
		case 2:
			return func_776(iParam0);
		case 3:
			return func_777(iParam0);
		case 4:
			return func_778(iParam0);
		case 5:
			return func_779(iParam0);
		case 6:
			return func_780(iParam0);
		case 7:
			return func_781(iParam0);
		case 8:
			return func_782(iParam0);
	}
	return 0;
}

bool func_743(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("A_C_DUCK_01"):
				case joaat("A_C_RABBIT_01"):
				case joaat("A_C_PRONGHORN_01"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("A_C_BUCK_01"):
				case joaat("A_C_TURKEY_01"):
				case joaat("A_C_TURKEY_02"):
				case joaat("A_C_FISHRAINBOWTROUT_01_LG"):
				case joaat("A_C_FISHRAINBOWTROUT_01_MS"):
				case joaat("A_C_DEER_01"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("A_C_ALLIGATOR_01"):
				case joaat("A_C_ALLIGATOR_02"):
				case joaat("A_C_ALLIGATOR_03"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_MS"):
				case joaat("A_C_FISHLARGEMOUTHBASS_01_LG"):
				case joaat("A_C_CAROLINAPARAKEET_01"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("A_C_ELK_01"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_MS"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_LG"):
				case joaat("A_C_FISHSALMONSOCKEYE_01_ML"):
				case joaat("A_C_QUAIL_01"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

bool func_744(int iParam0)
{
	if ((func_77(iParam0, -839724752) || func_77(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || func_77(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_745(int iParam0, int iParam1)
{
	if (!func_21(iParam0, 0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (!func_744(iParam0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (func_783(iParam0, iParam1))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else if (func_77(iParam0, -1690954218))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_77(iParam0, 1149630095))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_77(iParam0, 194498509))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	}
	else if (func_77(iParam0, 43251425))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	}
	return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
}

bool func_746(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar0[0] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	iVar0[1] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
	iVar0[2] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	iVar0[3] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
	iVar0[4] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	iVar0[5] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
	iVar0[6] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	iVar0[7] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
	iVar0[8] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	iVar0[9] = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam0)
		{
			iVar11 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar11 == -1)
	{
		return false;
	}
	iVar13 = 0;
	while (iVar13 <= 9)
	{
		if (iVar0[iVar13] == iParam1)
		{
			iVar12 = iVar13;
		}
		else
		{
			iVar13++;
		}
	}
	if (iVar12 == -1)
	{
		return false;
	}
	return iVar11 > iVar12;
}

void func_747(int iParam0)
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*iParam0)
		{
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS");
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
				*iParam0 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS");
				break;
		}
	}
}

struct<5> func_748(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_749(iParam0, joaat("CHARACTER"), func_373(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> func_749(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_21(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_750(int iParam0)
{
	if (!func_656(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_751(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 0;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
		case joaat("PROVISION_DEER_HIDE"):
			return 20;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 30;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 49;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_BUCK_FUR"):
			return 8;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
		case joaat("PROVISION_RAM_HIDE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR"):
			return 34;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN"):
			return 38;
		case 0:
			return 56;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
		case joaat("PROVISION_FOX_FUR"):
			return 23;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 41;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
		case joaat("PROVISION_WOLF_FUR"):
			return 52;
		case joaat("PROVISION_COYOTE_FUR"):
			return 16;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
		case joaat("PROVISION_GOAT_HAIR"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 33;
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
		case joaat("PROVISION_BOAR_SKIN"):
			return 5;
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

int func_752(int iParam0, int iParam1, int iParam2)
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

bool func_753(int iParam0, int iParam1, int iParam2)
{
	if (!func_21(iParam1, 0))
	{
		return false;
	}
	return func_654(iParam0, iParam1) >= iParam2;
}

int func_754(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_21(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_748(iParam0) };
	Var5 = { func_749(iParam0, iParam1, Var0, Var0.f_4) };
	return func_784(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_755(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_785())
	{
		iVar0 = func_786(iParam1, 0);
	}
	else
	{
		iVar0 = func_129(iParam1, bParam2, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = (iVar0 + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), iParam1));
		}
	}
	if (iParam1 == Global_1935689.f_1224)
	{
		iVar0++;
	}
	return iVar0;
}

bool func_756(int iParam0)
{
	int iVar0;

	iParam0 = func_218(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_371(iParam0))
	{
		return false;
	}
	iVar0 = func_156(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_757(var uParam0)
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

int func_758(int iParam0)
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

void func_759(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_208(iParam0))
	{
		case -2061583405:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_787(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_768();
	}
	if (bParam1)
	{
		func_645(0, 0);
	}
}

void func_760(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;

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
	Var2 = { func_363(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_365(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804.f_2657.f_26.f_2 = 5;
					Global_1946804.f_2657.f_26.f_1 = 5;
					Global_1946804.f_2657.f_26 = 5;
					break;
			}
		}
		func_366(iVar0);
	}
}

void func_761(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_788(iParam2, *uParam0);
	func_789(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_762(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_215(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_147(0), &Var5, iParam1);
	return true;
}

void func_763(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_215(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_147(0), &Var5, bParam1);
}

bool func_764(int iParam0)
{
	if (func_23() == -1)
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

int func_765(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_790(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_762(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_208(iParam0) != -999503751)
	{
		func_761(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_766(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_484();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_767(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_148(iParam0, 0, 0) };
	Var5 = { func_202(iParam0, Var0, Var0.f_4, 0) };
	if (func_215(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_147(0), &Var5);
	return 1;
}

void func_768()
{
	int iVar0;

	if (func_23() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946804.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804.f_2657.f_20;
		Global_26796.f_21 = Global_1946804.f_2657.f_21;
		Global_26796.f_22 = Global_1946804.f_2657.f_22;
		Global_26796.f_23 = Global_1946804.f_2657.f_23;
		Global_26796.f_24 = Global_1946804.f_2657.f_24;
		Global_26796.f_19 = Global_1946804.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946804.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804.f_2657.f_19;
}

bool func_769(int iParam0)
{
	return func_792(func_791(iParam0));
}

int func_770(int iParam0)
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

int func_771(int iParam0)
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

int func_772(int iParam0)
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

int func_773(int iParam0)
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

int func_774(int iParam0)
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

int func_775(int iParam0)
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

int func_776(int iParam0)
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

int func_777(int iParam0)
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

int func_778(int iParam0)
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

int func_779(int iParam0)
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

int func_780(int iParam0)
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

int func_781(int iParam0)
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

int func_782(int iParam0)
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

bool func_783(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
				case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
					return true;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
				default:
					break;
			}
			break;
	}
	return false;
}

int func_784(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_533(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_793(iParam0, *uParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_785()
{
	if ((func_794(Global_1935689.f_10186, 1) || func_794(Global_1935689.f_10186, 2)) || func_794(Global_1935689.f_10186, 4))
	{
		return true;
	}
	return false;
}

int func_786(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_129(iParam0, bParam1, 0);
	if (func_794(Global_1935689.f_10186, 1))
	{
		iVar0 = func_156(func_218(0));
		iVar1 = (iVar1 + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), iParam0));
	}
	if (func_794(Global_1935689.f_10186, 2))
	{
		iVar0 = func_156(func_218(1));
		iVar1 = (iVar1 + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), iParam0));
	}
	if (func_794(Global_1935689.f_10186, 4))
	{
		iVar0 = func_156(func_218(6));
		iVar1 = (iVar1 + func_654(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), iParam0));
	}
	return iVar1;
}

int func_787(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_790(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_208(iParam0) != -999503751)
		{
			func_795(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_208(iParam0) != -999503751)
	{
		func_795(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_762(iParam0, 1);
	return 1;
}

void func_788(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_789(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_796(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_329(func_328(iParam1), 1);
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
		func_797(uParam0);
	}
}

bool func_790(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804.f_2657.f_19)
	{
		if (iParam0 == Global_1946804.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_791(int iParam0)
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

bool func_792(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_793(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_794(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_795(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_798(iParam1);
	func_799(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_800(&(uParam0->f_26), iVar1);
		if (func_801(uParam0->f_26, &iVar0))
		{
			func_802(iVar0, iVar1);
		}
	}
}

void func_796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_803(&(uParam0->f_3));
}

void func_797(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_804(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_798(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_799(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_800(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_796(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_801(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946804.f_2657.f_19)
	{
		if (Global_1946804.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_802(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_803(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_804(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_805(func_484());
	if (*uParam0)
	{
		func_803(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_23() != -1, iParam2);
	*uParam0 = 1;
}

int func_805(int iParam0)
{
	if (func_23() == -1)
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

