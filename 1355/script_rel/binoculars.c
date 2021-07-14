#region Local Var
	struct<19> Local_0 = { 0, 0, 2514129, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 0 } ;
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
#endregion

void __EntryFunction__()
{
	Local_0.f_3 = "mech_inventory@binoculars";
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		Local_0.f_8 = PED::IS_PED_ON_MOUNT(Global_35);
	}
	func_1();
	if (func_2(472))
	{
		func_3(472);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&Local_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_5(&Local_0))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_0);
		}
		if (func_8(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			func_9(&(Local_0.f_13), &(Local_0.f_14), &(Local_0.f_15), &(Local_0.f_16));
			if (Local_0.f_15 != 0 || Local_0.f_16 != 0)
			{
				func_10(&(Local_0.f_18));
			}
		}
		if (func_6() > 0 && func_8(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			func_11(&Local_0, 8);
		}
		if (func_12(Local_0.f_4[0]) && func_13(Local_0.f_4[0], 1))
		{
			func_11(&Local_0, 6);
		}
		func_14(&Local_0);
		switch (func_6())
		{
			case 0:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 1);
				break;
			case 1:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 2);
				break;
			case 2:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				if (func_8(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
				{
				}
				else
				{
					func_17(1);
					func_18(473, 0);
					func_19(&Local_0);
					Local_0.f_4[0] = func_20("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_11(&Local_0, 4);
				}
				break;
			case 4:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSONFOOT"));
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				if (func_21())
				{
					func_22("enter", "Binoculars_Sounds");
					func_11(&Local_0, 5);
				}
				break;
			case 5:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSINUSE"));
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				if (CAM::_0xDC62CD70658E7A02())
				{
					func_22("zoom_in", "Binoculars_Sounds");
				}
				if (CAM::_0x796085220ADCC847())
				{
					func_22("zoom_out", "Binoculars_Sounds");
				}
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
					func_17(1);
					func_23(&(Local_0.f_4[2]), 1, 1);
					Local_0.f_4[2] = func_24("IB_ZOOM", joaat("INPUT_SNIPER_ZOOM"), 16, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					func_25(Local_0.f_4[2], 11, 1, 1);
					func_25(Local_0.f_4[2], 17, 1, 1);
					func_26(Local_0.f_4[2], joaat("INPUT_SNIPER_ZOOM"));
				}
				if (func_27())
				{
					func_17(1);
					func_23(&(Local_0.f_4[2]), 1, 1);
					func_22("exit", "Binoculars_Sounds");
					func_11(&Local_0, 4);
				}
				break;
			case 6:
				if (func_15(&Local_0))
				{
					func_19(&Local_0);
					func_16(&Local_0);
				}
				func_11(&Local_0, 7);
				break;
			case 7:
				if (func_15(&Local_0))
				{
					func_16(&Local_0);
				}
				func_11(&Local_0, 8);
				if (func_28(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				break;
			case 8:
				if (func_15(&Local_0))
				{
					func_17(1);
					func_16(&Local_0);
				}
				func_4(&Local_0);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1911668 = 0;
}

bool func_2(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_3(int iParam0)
{
	if (!func_2(iParam0))
	{
		return;
	}
	func_17(1);
}

void func_4(int* iParam0)
{
	if (func_2(474))
	{
		func_3(474);
	}
	if (func_2(473))
	{
		func_3(473);
	}
	func_19(iParam0);
	func_1();
	Global_1911669 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (func_29(iParam0, 64))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
	MAP::DISPLAY_RADAR(true);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
		CAM::DESTROY_CAM(iParam0->f_1, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
	func_17(1);
	HUD::_TEXT_BLOCK_DELETE("BINO");
}

bool func_5(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_30())
	{
		func_31(iParam0, 8);
		func_31(iParam0, 16);
		func_31(iParam0, 64);
	}
	if (func_29(iParam0, 8) || func_29(iParam0, 16))
	{
		return false;
	}
	if (!func_32(joaat("WEAPON_KIT_BINOCULARS"), 1, 0) && func_8(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
	{
		return false;
	}
	if (func_33())
	{
		return false;
	}
	if (Global_1357517)
	{
		return false;
	}
	return true;
}

int func_6()
{
	return Global_1911669;
}

void func_7(int* iParam0)
{
	if (func_34(1))
	{
		if (!func_29(iParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
				func_31(iParam0, 16);
			}
			else
			{
				func_11(iParam0, 6);
			}
		}
		func_35(1);
	}
	if (func_34(2))
	{
		if (!func_29(iParam0, 8))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
			}
		}
		func_35(2);
	}
	if (func_34(4))
	{
		if (func_12(iParam0->f_4[0]))
		{
			func_36(iParam0->f_4[0], 0, 1);
		}
		func_35(4);
	}
	else if (func_12(iParam0->f_4[0]) && func_37(iParam0->f_4[0], 1))
	{
		func_36(iParam0->f_4[0], 1, 1);
	}
	if (func_34(8))
	{
		if (!func_29(iParam0, 32))
		{
			func_31(iParam0, 32);
		}
		func_35(8);
	}
	if (func_34(16))
	{
		if (func_29(iParam0, 32))
		{
			func_38(iParam0, 32);
		}
		func_35(16);
	}
}

int func_8(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_9(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f));
}

void func_10(var uParam0)
{
	func_39(uParam0, 0f);
}

void func_11(int* iParam0, int iParam1)
{
	Global_1911669 = iParam1;
	func_40(iParam0);
}

bool func_12(int iParam0)
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

bool func_13(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_41(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945938[iVar0 /*18*/].f_3);
}

void func_14(int iParam0)
{
	if (func_8(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1) && CAM::IS_CAM_ACTIVE(iParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
}

bool func_15(int iParam0)
{
	return iParam0->f_10;
}

void func_16(int iParam0)
{
	iParam0->f_10 = 0;
}

void func_17(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_42(iParam0, &iVar0, &iVar1);
	if (!func_43(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_44(iVar0, iVar1);
}

void func_19(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (func_12(iParam0->f_4[iVar0]))
		{
			func_23(&(iParam0->f_4[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

int func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
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
		if (func_45(iVar0, 2))
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
		func_46(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216 /* Float: 1f */, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_21()
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (func_8(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 2048, false);
		}
		return true;
	}
	return false;
}

void func_22(char* sParam0, char* sParam1)
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

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_12(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_41(*uParam0);
	if (Global_1945938[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_47(iVar0);
	*uParam0 = 0;
}

int func_24(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_45(iVar0, 2))
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
		func_46(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_26(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ALLOWED_ACTION(Global_1945938[iVar0 /*18*/].f_3, iParam1);
}

bool func_27()
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
		return true;
	}
	return false;
}

int func_28(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_29(int* iParam0, int iParam1)
{
	return (iParam0->f_12 && iParam1) != 0;
}

bool func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_DAMAGE"):
			case joaat("EVENT_ENTITY_DAMAGED"):
				if (func_48(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return true;
	}
	return false;
}

void func_31(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 || iParam1);
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_49(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_50(iParam0);
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
		if (!func_51(iParam0, 1))
		{
			return false;
		}
	}
	return func_52(iParam0, 0, bParam2) >= iParam1;
}

bool func_33()
{
	return Global_1935689.f_1;
}

bool func_34(int iParam0)
{
	return (Global_1911668 && iParam0) != 0;
}

void func_35(int iParam0)
{
	Global_1911668 = (Global_1911668 - (Global_1911668 && iParam0));
}

void func_36(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_12(iParam0))
	{
		return;
	}
	iVar0 = func_41(iParam0);
	if (bParam1)
	{
		func_53(iParam0, 4);
		func_54(iVar0, 1);
		func_55(iVar0, 1);
	}
	else
	{
		func_56(iParam0, 4);
		func_55(iVar0, 0);
	}
}

bool func_37(int iParam0, bool bParam1)
{
	if (bParam1 && !func_12(iParam0))
	{
		return true;
	}
	return func_45(iParam0, 4);
}

void func_38(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 - (iParam0->f_12 && iParam1));
}

void func_39(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_57() - fParam1);
	func_58(uParam0, 1);
	func_59(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_40(int* iParam0)
{
	iParam0->f_10 = 1;
}

int func_41(int iParam0)
{
	return iParam0;
}

void func_42(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_43(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_60(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	if (func_62(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_63(iParam0, 1)) || func_64(32768))
	{
		if (!func_63(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_65())
	{
		return false;
	}
	return true;
}

void func_44(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_45(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945938[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_46(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_54(iParam0, 1);
	func_55(iParam0, 1);
	func_56(iParam0, 128);
}

void func_47(int iParam0)
{
	if (!func_66(iParam0))
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

bool func_48(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return false;
		}
		if (!PED::IS_PED_A_PLAYER(iVar9))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10) || iVar10 == Global_35)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (Var0.f_4 <= 1f)
		{
			return false;
		}
		iVar11 = WEAPON::GET_WEAPONTYPE_GROUP(Var0.f_2);
		if (iVar11 != joaat("GROUP_MELEE") && iVar11 != joaat("GROUP_UNARMED"))
		{
			return false;
		}
	}
	return false;
}

bool func_49(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_50(int iParam0)
{
	vector3 vVar0;

	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_51(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_49(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_67(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_68("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_69(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_70(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_71(iVar1);
				return true;
			}
			iVar3++;
		}
		func_71(iVar1);
	}
	return false;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_67(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_72(iParam0, 0);
	}
	uVar2 = INVENTORY::_0xE787F05DFC977BDE(func_73(bParam2), iParam0, 0);
	return uVar2;
}

void func_53(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 - (Global_1945938[iParam0 /*18*/].f_1 && iParam1));
}

void func_54(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		if (Global_1945938[iParam0 /*18*/].f_5 == 5 && !func_45(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945938[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_55(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945938[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_56(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945938[iParam0 /*18*/].f_1 = (Global_1945938[iParam0 /*18*/].f_1 || iParam1);
}

float func_57()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_58(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_59(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_60(int iParam0, int iParam1)
{
	if (func_74() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_61(int iParam0)
{
	if (func_74() != -1)
	{
		if (func_63(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_63(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_63(iParam0, 65536) && !func_63(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_63(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_63(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_63(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_64(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_65()
{
	return Global_1905944.f_5694;
}

bool func_66(int iParam0)
{
	return func_45(iParam0, 2);
}

int func_67(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_49(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_50(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_75(iParam0, 1399091007))
	{
		func_76(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_68(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_73(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_69(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_70(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_71(int iParam0)
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

int func_72(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_77(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_79(&Var0, func_78(0));
	}
	if (!func_80(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_71(iVar14);
	return iVar15;
}

int func_73(bool bParam0)
{
	if (func_74() == -1)
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

int func_74()
{
	return Global_1572887.f_12;
}

bool func_75(int iParam0, int iParam1)
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

void func_76(int iParam0, var uParam1, var uParam2)
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

struct<14> func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_78(bool bParam0)
{
	int iVar0;

	iVar0 = func_73(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_82(923904168, func_81(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_82(923904168, func_81(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_82(923904168, func_81(bParam0), -740156546, 0);
}

void func_79(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_80(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_73(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_81(bool bParam0)
{
	return func_82(joaat("CHARACTER"), func_83(), -1591664384, bParam0);
}

struct<4> func_82(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_49(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_73(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_83()
{
	struct<4> Var0;

	return Var0;
}

