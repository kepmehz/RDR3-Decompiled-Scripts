#region Local Variables
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	struct<53> /*424*/ sLocal_15 = { 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main()
{
	struct<152> /*1216*/ sVar0;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
	Var0.f_5.f_2 = 12;
	Var0.f_5.f_64 = 24;
	Var0.f_5.f_89 = 24;
	Var0.f_150 = 1;
	Var0.f_151 = 1;
	Var0.f_147 = 1;
	Var0.f_127 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Var0.f_144 = 1;
		func_1(&Var0, &Global_1911866);
	}
	if (func_2())
	{
		TASK::TASK_STOP_LEADING_HORSE(Global_35);
	}
	Var0.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(Var0.f_134);
	Var0.f_142 = 0;
	if (MISC::GET_GAME_TIMER() >= Global_1911773 && MISC::GET_GAME_TIMER() >= Global_36632)
	{
		Var0.f_119.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		Var0.f_142 = 1;
	}
	Global_1911773 = 0;
	Global_36634 = 0;
	Global_36635 = 0;
	if (MISC::GET_GAME_TIMER() < Global_36615 || Var0.f_142)
	{
		Global_36634 = 1;
		Global_36635 = 1;
	}
	if (Global_1935689.f_9439 == 0 || MISC::GET_GAME_TIMER() <= Global_1935496.f_59.f_2 + 3000)
	{
		Global_36634 = 1;
	}
	while (func_3(&Var0, &Global_1911866))
	{
		Var0.f_130 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Var0.f_134) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Var0.f_134, true, false))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Var0.f_134, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Var0.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Var0.f_134, Global_35, -1);
					ANIMSCENE::START_ANIM_SCENE(Var0.f_134);
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Var0.f_134, false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(Var0.f_134, true);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		CAM::_0x8910C24B7E0046EC();
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
		{
			HUD::_0xC9CAEAEEC1256E54(382897689);
		}
		if (Var0.f_142)
		{
			func_4(&Var0, &Global_1911866);
		}
		else
		{
			func_5(&Var0, &Global_1911866);
		}
		func_6(&Var0, &Global_1911866);
		BUILTIN::WAIT(0);
	}
	func_1(&Var0, &Global_1911866);
}

void func_1(var uParam0, var uParam1)
{
	if (func_7() && !Global_1935689.f_9)
	{
		if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			SCRIPTS::TERMINATE_THIS_THREAD();
		}
		return;
	}
	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("TRANSLATION_OVERLAY"));
	}
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_10(uParam0, uParam1);
	func_11(uParam0);
	func_12(uParam0);
	if (uParam0->f_144)
	{
		func_13(uParam0, uParam1);
	}
	if (!uParam0->f_143)
	{
		if (!(uParam1[0 /*9*/])->f_1)
		{
			func_14(0);
		}
		else
		{
			Global_1911894[0 /*6*/].f_1 = 4;
		}
		func_14(2);
		func_14(1);
		func_15(uParam1);
	}
	else
	{
		func_16(uParam0, uParam1);
	}
	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_2()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_IS_PED_LEADING_HORSE(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_GET_LED_HORSE_FROM_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(iVar1))
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0, var uParam1)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return false;
	}
	if (func_17(uParam0, uParam1) && (MISC::GET_GAME_TIMER() >= Global_36615 || !func_18(Global_1911772)))
	{
		uParam0->f_144 = 1;
		return false;
	}
	return true;
}

int func_4(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, joaat("PRIMARYITEM"));
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				func_20(uParam0, uParam1[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, (*uParam1)[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				func_25((*uParam1)[0 /*9*/]);
				func_26(uParam0, uParam1, 1);
				func_23(uParam0, 6);
			}
			break;
		case 6:
			func_27(uParam0, uParam1[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				if (func_31((*uParam1)[0 /*9*/], -674618190))
				{
					func_23(uParam0, 7);
				}
				else
				{
					func_23(uParam0, 8);
				}
			}
			else if (func_32(Global_36622[3], 1))
			{
				func_33(uParam0, (*uParam1)[0 /*9*/]);
			}
			func_11(uParam0);
			break;
		case 8:
			if (func_34((*uParam1)[0 /*9*/]) && !uParam0->f_149)
			{
				func_35((*uParam1)[0 /*9*/], 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				uParam0->f_149 = 1;
			}
			func_23(uParam0, 9);
			break;
		case 7:
			uParam0->f_119.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_119.f_4);
			uParam0->f_119 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_119.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_119, 1f);
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_119.f_4))
			{
				uParam0->f_119.f_4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_119, uParam0->f_119.f_3, 1f, 1, false);
			}
			uParam0->f_119.f_5 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_119.f_4, "PrimaryItem");
			uParam0->f_119.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_119.f_5);
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_119.f_6, (uParam1[0 /*9*/])->f_3, 0, 0);
			func_23(uParam0, 9);
			break;
	}
	return 0;
}

int func_5(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		func_19(uParam0, uParam1);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				uParam0->f_127 = TASK::_0x05A0100EA714DB68(Global_35, joaat("PRIMARYITEM"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				(*uParam1)[0 /*9*/] = func_36(uParam0);
				func_37(uParam0, (*uParam1)[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, (*uParam1)[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_20(uParam0, uParam1[0 /*9*/]);
				func_38(uParam0, uParam1);
				if (Global_1911894[0 /*6*/].f_1 == 2)
				{
					func_39(uParam1[0 /*9*/], 0);
					func_40(uParam0, uParam1);
				}
				func_23(uParam0, 2);
			}
			break;
		case 2:
			if (func_39(uParam1[0 /*9*/], 0) && func_41(uParam0, uParam1))
			{
				func_23(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0, uParam1))
			{
				func_23(uParam0, 4);
			}
			break;
		case 4:
			if (func_24((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				func_26(uParam0, uParam1, 1);
				func_25((*uParam1)[0 /*9*/]);
				func_23(uParam0, 5);
			}
			break;
		case 5:
			func_27(uParam0, uParam1[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
			if (func_30((*uParam1)[0 /*9*/], uParam0->f_130))
			{
				func_23(uParam0, 9);
			}
			else if (func_42(Global_36622[2]) && func_43(Global_36622[2], 1))
			{
				func_23(uParam0, 9);
				uParam0->f_144 = 1;
				Global_1935689.f_9 = 1;
				Global_36633 = MISC::GET_GAME_TIMER() + 10000;
				func_44(1);
			}
			else if (func_32(Global_36622[3], 1))
			{
				func_33(uParam0, (*uParam1)[0 /*9*/]);
			}
			else if (!Global_36634 && func_45(uParam0))
			{
				uParam0->f_143 = 1;
				func_23(uParam0, 9);
			}
			func_11(uParam0);
			break;
	}
	return 0;
}

int func_6(var uParam0, var uParam1)
{
	int iVar0;

	Global_1935496.f_59.f_4 = MISC::GET_GAME_TIMER() + 5000;
	if (Global_36621 == 1)
	{
		iVar0 = TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35);
		if (iVar0 == func_46(Global_1911772))
		{
			Global_36621 = 2;
		}
	}
	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}
	return 0;
}

bool func_7()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

void func_8(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];

	switch ((*uParam1)[0 /*9*/])
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_2_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_3_NOTE"):
		case joaat("DOCUMENT_GUNSLINGER_5_NOTE"):
			if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_1_NOTE")
			{
				iVar0 = 84;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_2_NOTE")
			{
				iVar0 = 86;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_3_NOTE")
			{
				iVar0 = 87;
			}
			else if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_5_NOTE")
			{
				iVar0 = 88;
			}
			if (func_47(iVar0) && !func_48(iVar0))
			{
				func_49(iVar0, 1);
				if (func_50(0, 0, 1))
				{
					func_51(iVar0, 2);
				}
				else
				{
					func_52(iVar0);
				}
				if (!func_53(26, 32))
				{
					if ((((func_54(84, 0) || func_48(84)) && (func_54(86, 0) || func_48(86))) && (func_54(87, 0) || func_48(87))) && (func_54(88, 0) || func_48(88)))
					{
						MemCopy(&cVar1, {Global_1347702[26 /*49*/].f_1}, 3);
						StringConCat(&cVar1, "_obj2", 24);
						if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(26), func_56(26)))
						{
							cVar4 = func_57(0, &cVar1, 0, 0, -1, -1);
							func_58(26, &cVar1, cVar4, -1082130432 /* Float: -1f */);
							func_51(26, 32);
						}
					}
				}
			}
			break;
	}
}

int func_9(int iParam0)
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

void func_10(var uParam0, var uParam1)
{
	vector3 vVar0[24];
	char[] cVar3[8];

	switch ((*uParam1)[0 /*9*/])
	{
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE"):
			if (func_47(109) && !func_48(109))
			{
				func_49(109, 1);
				func_59(109);
				MemCopy(&cVar0, {Global_1347702[109 /*49*/].f_1}, 3);
				StringConCat(&cVar0, "_obj", 24);
				if (HUD::DOES_TEXT_LABEL_EXIST(&cVar0) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(109), func_56(109)))
				{
					cVar3 = func_57(0, &cVar0, 0, 0, -1, -1);
					func_58(109, &cVar0, cVar3, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2A"):
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2B"):
			if (func_47(110) && !func_48(110))
			{
				func_49(110, 1);
				func_60(109, 0);
			}
			break;
	}
}

void func_11(var uParam0)
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_63))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_64[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[iVar0]);
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_89[iVar0]))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_89[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_5.f_2)
	{
		uParam0->f_5.f_2[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
}

void func_13(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = (*uParam1)[0 /*9*/];
	if (*uParam0 == 0 && iVar0 == 0)
	{
		iVar0 = Global_1911772;
	}
	if (iVar0 != 0)
	{
		if (func_46(iVar0) != 0)
		{
			TASK::_0xB35370D5353995CB(Global_35, func_46(iVar0), 1048576000 /* Float: 0.25f */);
		}
		if (((uParam0->f_142 && func_34(iVar0)) && !func_61(iVar0, 1, 0)) && !uParam0->f_149)
		{
			func_35(iVar0, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			uParam0->f_149 = 1;
		}
	}
}

void func_14(int iParam0)
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
}

void func_15(var uParam0)
{
	if (!Global_1935689.f_9)
	{
		if (((func_31(Global_1911772, -1472964441) || func_31(Global_1911772, 1841149704)) || func_31(Global_1911772, 566155764)) || func_31(Global_1911772, -228153877))
		{
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 1;
			Global_1935496.f_59.f_1 = Global_1911772;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
		}
	}
	Global_1911772 = 0;
	Global_36632 = 0;
	Global_36621 = 2;
	Global_1911866[0 /*9*/].f_2 = 0;
	func_62(uParam0);
}

void func_16(var uParam0, var uParam1)
{
	if (uParam0->f_141)
	{
		func_8(uParam0, uParam1);
	}
	if (uParam0->f_136)
	{
		func_63(uParam1);
	}
	else
	{
		func_64(uParam1);
	}
	if (uParam0->f_145)
	{
		func_9(uParam0->f_1.f_1);
	}
	func_65(uParam1);
	(uParam1[0 /*9*/])->f_2 = 0;
	Global_1911772 = (*uParam1)[0 /*9*/];
	func_66((*uParam1)[0 /*9*/], 0, 1, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_36632 = MISC::GET_GAME_TIMER() + 3000;
}

bool func_17(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	if (!func_67(16))
	{
		return true;
	}
	if ((!uParam0->f_144 && *uParam0 > 4) && func_68((*uParam1)[0 /*9*/]))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case -904734609: /* GXTEntry: "Goodbye Letter from Mary" */
		case -595619260: /* GXTEntry: "Goodbye Letter from Mary" */
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case 1760651454: /* GXTEntry: "Goodbye Letter from Mary" */
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return true;
	}
	return false;
}

void func_19(var uParam0, var uParam1)
{
	if (!uParam0->f_148)
	{
		if (func_24((*uParam1)[0 /*9*/], uParam0->f_130))
		{
			func_26(uParam0, uParam1, 0);
			uParam0->f_148 = 1;
		}
	}
}

void func_20(var uParam0, var uParam1)
{
	struct<5> /*40*/ sVar0;

	*uParam1 = func_36(uParam0);
	uParam1->f_4 = func_69(*uParam1, -949239683);
	uParam1->f_1 = func_70(uParam1->f_4);
	if (uParam1->f_1)
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam1, &Var0))
		{
			uParam1->f_5.f_2 = Var0.f_4;
		}
	}
	func_37(uParam0, *uParam1);
}

void func_21(var uParam0, var uParam1)
{
	HUD::TEXT_BLOCK_REQUEST("NEWS");
	(uParam1[0 /*9*/])->f_5.f_3 = func_71((*uParam1)[0 /*9*/]);
	Local_15.f_50 = func_72((*uParam1)[0 /*9*/]);
	Local_15.f_51 = func_73(uParam0, (*uParam1)[0 /*9*/]);
	Local_15.f_52 = 0;
	if (Local_15.f_50 != -1)
	{
		if (Global_40.f_9479[Local_15.f_50 /*4*/].f_1 != -1)
		{
			func_74(Global_40.f_9479[Local_15.f_50 /*4*/].f_1, &(Local_15.f_2));
			Local_15.f_52++;
		}
		if (Global_40.f_9479[Local_15.f_50 /*4*/].f_2 != -1)
		{
			func_74(Global_40.f_9479[Local_15.f_50 /*4*/].f_2, &(Local_15.f_18));
			Local_15.f_52++;
		}
		func_75(Global_40.f_9479[Local_15.f_50 /*4*/].f_3, &(Local_15.f_34));
	}
}

void func_22(var uParam0, int iParam1)
{
	if (func_31(iParam1, -98816307))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);
	}
	if (func_31(iParam1, -1903335637))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);
	}
	if (uParam0->f_146)
	{
		if (func_31(iParam1, -98816307))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}
	func_76(uParam0);
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_24(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == -1424266966)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -487508500)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == -1791047090)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 760057945)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1043439814)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -2077441721)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 1972630951)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 2000759837)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 374699583)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -1340223099)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 416212934)
			{
				return true;
			}
			break;
		case -1239610997:
			if ((iParam1 == 1087288635 || iParam1 == 1761334567) || iParam1 == 504129763)
			{
				return true;
			}
			break;
		case 632545869:
			if ((iParam1 == -212251684 || iParam1 == -1401979141) || iParam1 == -1983586928)
			{
				return true;
			}
			break;
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"):
			func_77(Global_1392626[7 /*32*/].f_3, 1);
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_05"):
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"):
			func_49(129, 1);
			break;
		case joaat("DOCUMENT_LETTER_GAVIN_FRIEND"):
			if (!func_78(Global_40.f_11623[11 /*8*/].f_1, 4194304))
			{
				func_79(&(Global_40.f_11623[11 /*8*/].f_1), 4194304);
			}
			break;
	}
	func_80(iParam0);
	func_81(iParam0);
	func_82(iParam0);
}

int func_26(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!func_83((*uParam1)[2 /*9*/], 0))
			{
				Global_36627[1] = 0;
				if (func_42(Global_36622[1]))
				{
					func_84(Global_36622[1], 0, 1);
				}
			}
			else
			{
				Global_36627[1] = 1;
				if (func_42(Global_36622[1]))
				{
					func_84(Global_36622[1], 1, 1);
				}
			}
			if (!func_83((*uParam1)[1 /*9*/], 0))
			{
				Global_36627[0] = 0;
				if (func_42(Global_36622[0]))
				{
					func_84(Global_36622[0], 0, 1);
				}
			}
			else
			{
				Global_36627[0] = 1;
				if (func_42(Global_36622[0]))
				{
					func_84(Global_36622[0], 1, 1);
				}
			}
		}
		Global_36627[3] = func_85(uParam0, uParam1[0 /*9*/]);
		if (func_42(Global_36622[3]))
		{
			func_84(Global_36622[3], Global_36627[3], 1);
		}
		if (*uParam1)[0 /*9*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP")
		{
			Global_36636 = 1;
		}
		Global_36621 = 1;
	}
	if (uParam0->f_142)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}
	return 1;
}

void func_27(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_24(*uParam1, uParam0->f_130) && !func_86(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (func_87(Global_36622[0], 1))
			{
				uParam0->f_139 = 0;
			}
			else
			{
				uParam0->f_139 = 1;
			}
			if (func_87(Global_36622[1], 1))
			{
				uParam0->f_140 = 0;
			}
			else
			{
				uParam0->f_140 = 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_88(&(Global_36622[iVar0]), 0);
				iVar0++;
			}
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		func_89(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (((iVar1 == 0 && !uParam0->f_139) || (iVar1 == 1 && !uParam0->f_140)) || (iVar1 != 1 && iVar1 != 0))
			{
				func_88(&(Global_36622[iVar1]), 1);
			}
			iVar0++;
		}
		uParam0->f_138 = 0;
	}
}

void func_28(var uParam0, var uParam1)
{
	if (!uParam0->f_141 && func_90((*uParam1)[0 /*9*/], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		func_91((*uParam1)[0 /*9*/]);
	}
}

void func_29(var uParam0, var uParam1)
{
	func_92(uParam0, &Local_15, (*uParam1)[0 /*9*/]);
}

bool func_30(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_FRONT_OUTRO"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_31(int iParam0, int iParam1)
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

bool func_32(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_93(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_33(var uParam0, int iParam1)
{
	if (func_31(iParam1, -1227898937))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("NEWSPAPER")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_94(uParam0, iParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_94(uParam0, iParam1);
	}
}

bool func_34(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case joaat("DOCUMENT_RE_FROZEN_DEATH_MAP"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return false;
	}
	return true;
}

int func_35(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!func_95(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_96(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_97(iParam0, bParam2);
	iVar2 = 0;
	if (func_98(iParam0, 0, 0) == 0)
	{
		if (func_99(iParam0))
		{
			iVar5 = func_100(iParam0);
			iVar6 = func_101(iVar5);
			iVar7 = func_102(iVar6) + 1;
			func_103(iVar5);
			if (func_104(38))
			{
				func_105(483, 0);
			}
			else
			{
				func_105(482, 0);
			}
			if (iVar7 == func_106(iVar6))
			{
				func_35(func_107(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_108() && func_109(4))
				{
					if (func_108() && (func_110(38) || func_104(38)))
					{
						func_112(38, func_107(iVar6), 0, 0, func_111(), 0, -1, 0);
						func_113(2);
					}
					else
					{
						func_112(38, func_107(iVar6), 0, 0, func_111(), 0, -1, 0);
						func_113(1);
					}
				}
			}
			else if (func_108() && func_109(4))
			{
				if (func_108() && (func_110(38) || func_104(38)))
				{
					func_112(38, 0, 0, 0, func_111(), 0, -1, 0);
					func_113(2);
				}
				else
				{
					func_112(38, 0, 0, 0, func_111(), 0, -1, 0);
					func_113(1);
				}
			}
			if (func_108() && func_109(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_108() && (func_110(38) || func_104(38)))
					{
						func_114(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_114(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_115(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_31(iParam0, 866047851) && !func_31(iParam0, -1979000645)) && !func_31(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_116(iParam0, 8388608) && !func_117(28))
	{
		func_118(28);
	}
	if (!bVar3)
	{
		if (func_31(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_119(iParam0) == -1447088266)
			{
				iVar1 = func_121(func_120(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_122() == -1)
					{
						func_123(iVar1);
					}
					if (func_124(0) && func_125(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_126(iParam0, iVar0, iParam5);
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
					if (func_122() == -1)
					{
						func_123(iParam0);
					}
					if (func_124(0) && func_125(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_126(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_115(iParam0) == joaat("WEAPON"))
		{
			if (!func_127(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_115(iParam0) == joaat("AMMO") && func_128(iParam0))
		{
			if (!func_129(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_31(iParam0, 866047851))
		{
			func_130(iParam0);
		}
		else if (func_31(iParam0, 2000026003))
		{
			func_131(iParam0);
		}
		else if (func_31(iParam0, -103750053))
		{
			func_133(func_132(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_133(func_134(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_31(iParam0, -121341956) && !func_31(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_135(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_105(498, 0);
				}
			}
			if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
			{
				func_136(iParam0);
			}
		}
		else if (func_31(iParam0, -136654233))
		{
			if (func_31(iParam0, -1021472396))
			{
			}
		}
		else if (func_31(iParam0, -1466706512) && func_31(iParam0, 1147021565))
		{
			func_105(484, 0);
		}
		else if (func_31(iParam0, 1147021565) && func_31(iParam0, -524514947))
		{
		}
		else if (func_31(iParam0, 554195525))
		{
		}
		else if (func_31(iParam0, 589988438))
		{
			if (func_137())
			{
				func_138(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_31(iParam0, 787083290) && func_31(iParam0, 949916894))
		{
			func_139(iParam0);
		}
		else if (func_31(iParam0, -1718133314))
		{
			func_140(iParam0);
		}
		else if (func_31(iParam0, -1738650224))
		{
			func_141(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, 949916894))
		{
			func_142(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_31(iParam0, 1841149704))
		{
			func_143();
		}
		else if (func_31(iParam0, 606799272))
		{
			func_144(iParam0, iParam1);
			func_145(iParam0);
		}
		else if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_146(iParam0, 0, 0, 0);
		}
		else if (func_31(iParam0, -2017733358) || func_31(iParam0, -1369131378))
		{
			func_136(iParam0);
		}
		else if (func_31(iParam0, -1921346699))
		{
			if (func_122() != -1)
			{
				return 0;
			}
			func_147(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_31(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_61(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_35(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_61(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_35(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_61(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_35(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_61(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_35(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_61(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_35(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_61(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_35(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_31(iParam0, -839724752) && func_116(iParam0, 4))
		{
			if (!func_104(42))
			{
				func_148(iParam0);
			}
		}
		else if (func_31(iParam0, 1399091007))
		{
			func_149(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_31(iParam0, 1248798204))
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
				func_35(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
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
				func_118(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_151(&iVar9, 0))
				{
					func_125(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_122() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_150(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_105(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_152();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_153();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_154();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_155();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_156();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_157(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_158(499813453, 0);
				func_159(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_157(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_158(499813453, 0);
				func_159(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_157(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_158(499813453, 0);
				func_159(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_157(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_158(666607663, 0);
				func_160(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_157(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_158(666607663, 0);
				func_160(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_157(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_158(666607663, 0);
				func_160(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_157(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_158(-220219788, 0);
				func_161(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_157(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_158(-220219788, 0);
				func_161(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_157(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_158(-220219788, 0);
				func_161(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_157(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_158(218622660, 0);
				func_162(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_157(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_158(218622660, 0);
				func_162(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_157(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_158(390004462, 0);
				func_163(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_157(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_158(390004462, 0);
				func_163(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_157(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_158(390004462, 0);
				func_163(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_157(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_158(6410548, 0);
				func_164(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_157(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_158(6410548, 0);
				func_164(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_157(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_158(6410548, 0);
				func_164(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_157(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_158(6410548, 0);
				func_164(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_166(242, func_165(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_166(240, func_165(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_166(241, func_165(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_167(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_167(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_167(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_167(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_167(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_167(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_105(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_105(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_105(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_35(func_168(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_35(func_169(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_117(1))
				{
					func_105(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_105(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_122() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_105(496, 0);
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
		func_170(&iVar10);
		if (!func_171(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_124(0))
		{
			return 1;
		}
		if (func_115(iParam0) == joaat("CLOTHING"))
		{
			func_172(iParam0);
		}
		if (func_31(iParam0, -1979000645))
		{
			func_173(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_124(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_35(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_174(iVar2, 0);
		}
	}
	Var35 = { func_175(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_176(iParam0);
	if (fParam6 > 0f)
	{
		if (func_31(iParam0, -839724752))
		{
			func_177(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_178(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_36(var uParam0)
{
	int iVar0;

	if (uParam0->f_142)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_127, "letter_item"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_127, "letter_item");
		}
		else
		{
			iVar0 = TASK::_0x804425C4BBD00883(Global_35);
			if (!func_83(iVar0, 0))
			{
				iVar0 = 323269915;
			}
		}
		Global_1911772 = iVar0;
	}
	else
	{
		iVar0 = Global_1911772;
	}
	return iVar0;
}

void func_37(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_131 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(iParam1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_131)
	{
		uParam0->f_5.f_2[iVar0 /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(iParam1, iVar0);
		uParam0->f_5.f_2[iVar0 /*5*/].f_2 = uParam0->f_5.f_2[iVar0 /*5*/];
		uParam0->f_5.f_2[iVar0 /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2);
		iVar0++;
	}
}

void func_38(var uParam0, var uParam1)
{
	func_179(uParam0, (*uParam1)[0 /*9*/]);
	func_180(uParam0, uParam1);
	if ((*uParam1)[1 /*9*/] != 0)
	{
		func_181(1, (*uParam1)[1 /*9*/]);
	}
	else
	{
		func_14(1);
	}
	func_182(uParam0, uParam1);
	if ((*uParam1)[2 /*9*/] != 0)
	{
		func_181(2, (*uParam1)[2 /*9*/]);
	}
	else
	{
		func_14(2);
	}
	func_183(uParam1);
	func_184(uParam1);
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_1)
	{
		return 1;
	}
	else if (func_185(*uParam0, &iVar0, joaat("INVENTORY"), joaat("UI_ITEMVIEWER"), 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(iVar0))
		{
			TXD::REQUEST_STREAMED_TXD(iVar0, false);
			uParam0->f_3 = iVar0;
		}
	}
	return 1;
}

bool func_40(var uParam0, var uParam1)
{
	if (func_186(uParam0, uParam1[0 /*9*/]))
	{
		func_181(0, (*uParam1)[0 /*9*/]);
		func_187(uParam0, uParam1);
		return true;
	}
	return false;
}

int func_41(var uParam0, var uParam1)
{
	return 1;
}

bool func_42(int iParam0)
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

bool func_43(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_93(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

bool func_45(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	uParam0->f_136 = 0;
	if (func_32(Global_36622[1], 1))
	{
		iVar0 = 1;
		uParam0->f_136 = 1;
		func_88(&(Global_36622[1]), !uParam0->f_151);
		func_88(&(Global_36622[0]), 1);
	}
	if (func_32(Global_36622[0], 1))
	{
		iVar0 = 1;
		func_88(&(Global_36622[0]), !uParam0->f_150);
		func_88(&(Global_36622[1]), 1);
	}
	return iVar0;
}

int func_46(int iParam0)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			return 1918075176;
		case 10252101:
			return -838154919;
		case -1229959999:
			return 779637421;
		case -1050374492:
			return -13228069;
		case 1513351077:
			return -1855297853;
		case -1565009253:
			return -672448089;
		case 733893097:
			return 329918092;
		case -164980960:
			return 1096961806;
		case 1894156335:
			return 2067181640;
		case 871191033:
			return joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_OUTRO");
		case -1273369295:
			return 1434623772;
		case 82200319:
			return joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO");
		case -873135685:
			return 486187924;
		case 24248412:
			return -1079287506;
	}
	return 0;
}

bool func_47(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_48(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_135(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_188(Global_1347702[iParam0 /*49*/].f_12, 2097152))
		{
			if (func_135(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
		else if (func_188(Global_1347702[iParam0 /*49*/].f_12, 256))
		{
			if (!func_135(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_189(iParam0);
}

bool func_50(int iParam0, bool bParam1, bool bParam2)
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
		if (func_190())
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
		iVar0 = func_191(Global_1898164.f_1[0 /*5*/]);
		if (func_47(iVar0) && func_188(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_192(Global_1898164.f_1[0 /*5*/]))
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

void func_51(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_52(int iParam0)
{
	func_193();
	if (!func_47(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

bool func_53(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

bool func_54(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_122() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & 16384 == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_55(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

char* func_57(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_194(sParam1));
}

void func_58(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_56(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_56(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_59(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar10 = func_195(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_55(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_56(iParam0), Global_1347702[iParam0 /*49*/].f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), Global_1347702[iParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_56(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_56(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_56(iParam0)))
	{
		func_51(iParam0, 4);
	}
}

void func_60(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_53(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(iParam0), func_56(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_53(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(iParam0), func_56(iParam0), 1, "");
		}
		func_51(iParam0, 8);
	}
	else
	{
		if (func_53(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(iParam0), func_56(iParam0), 0, "");
		}
		func_196(iParam0, 8);
	}
}

bool func_61(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_83(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_115(iParam0);
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
		if (!func_197(iParam0, 1))
		{
			return false;
		}
	}
	return func_98(iParam0, 0, bParam2) >= iParam1;
}

void func_62(var uParam0)
{
	(*uParam0)[0 /*9*/] = 0;
	(uParam0[0 /*9*/])->f_1 = 0;
	(uParam0[0 /*9*/])->f_2 = 0;
	(uParam0[0 /*9*/])->f_3 = 0;
	(uParam0[0 /*9*/])->f_4 = 0;
	(uParam0[0 /*9*/])->f_5 = 0;
	(uParam0[0 /*9*/])->f_5.f_1 = 0;
	(uParam0[0 /*9*/])->f_5.f_2 = 0;
	(uParam0[0 /*9*/])->f_5.f_3 = 0;
	func_65(uParam0);
}

void func_63(var uParam0)
{
	(*uParam0)[0 /*9*/] = (*uParam0)[2 /*9*/];
	(uParam0[0 /*9*/])->f_1 = (uParam0[2 /*9*/])->f_1;
	(uParam0[0 /*9*/])->f_3 = (uParam0[2 /*9*/])->f_3;
	(uParam0[0 /*9*/])->f_4 = (uParam0[2 /*9*/])->f_4;
	(uParam0[0 /*9*/])->f_5 = (uParam0[2 /*9*/])->f_5;
	(uParam0[0 /*9*/])->f_5.f_1 = (uParam0[2 /*9*/])->f_5.f_1;
	(uParam0[0 /*9*/])->f_5.f_2 = (uParam0[2 /*9*/])->f_5.f_2;
	(uParam0[0 /*9*/])->f_5.f_3 = (uParam0[2 /*9*/])->f_5.f_3;
	(uParam0[0 /*9*/])->f_2 = 0;
}

void func_64(var uParam0)
{
	(*uParam0)[0 /*9*/] = (*uParam0)[1 /*9*/];
	(uParam0[0 /*9*/])->f_1 = (uParam0[1 /*9*/])->f_1;
	(uParam0[0 /*9*/])->f_3 = (uParam0[1 /*9*/])->f_3;
	(uParam0[0 /*9*/])->f_4 = (uParam0[1 /*9*/])->f_4;
	(uParam0[0 /*9*/])->f_5 = (uParam0[1 /*9*/])->f_5;
	(uParam0[0 /*9*/])->f_5.f_1 = (uParam0[1 /*9*/])->f_5.f_1;
	(uParam0[0 /*9*/])->f_5.f_2 = (uParam0[1 /*9*/])->f_5.f_2;
	(uParam0[0 /*9*/])->f_5.f_3 = (uParam0[1 /*9*/])->f_5.f_3;
	(uParam0[0 /*9*/])->f_2 = 0;
}

void func_65(var uParam0)
{
	(*uParam0)[2 /*9*/] = 0;
	(uParam0[2 /*9*/])->f_1 = 0;
	(uParam0[2 /*9*/])->f_2 = 0;
	(uParam0[2 /*9*/])->f_3 = 0;
	(uParam0[2 /*9*/])->f_4 = 0;
	(uParam0[2 /*9*/])->f_5 = 0;
	(uParam0[2 /*9*/])->f_5.f_1 = 0;
	(uParam0[2 /*9*/])->f_5.f_2 = 0;
	(uParam0[2 /*9*/])->f_5.f_3 = 0;
	(*uParam0)[1 /*9*/] = 0;
	(uParam0[1 /*9*/])->f_1 = 0;
	(uParam0[1 /*9*/])->f_2 = 0;
	(uParam0[1 /*9*/])->f_3 = 0;
	(uParam0[1 /*9*/])->f_4 = 0;
	(uParam0[1 /*9*/])->f_5 = 0;
	(uParam0[1 /*9*/])->f_5.f_1 = 0;
	(uParam0[1 /*9*/])->f_5.f_2 = 0;
	(uParam0[1 /*9*/])->f_5.f_3 = 0;
}

int func_66(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
				if (bParam2)
				{
					iVar0 = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_67(int iParam0)
{
	return func_198(iParam0);
}

bool func_68(int iParam0)
{
	return (func_31(iParam0, 566155764) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("MAP")));
}

int func_69(int iParam0, int iParam1)
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

bool func_70(int iParam0)
{
	if (iParam0 == 82200319)
	{
		return true;
	}
	return false;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			if (func_200(func_199(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_BL_01");
			}
			else
			{
				return -2100835330;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14"):
			return joaat("NEWSPAPERS/NEWSPAPER_BL_14");
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (func_200(func_199(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_NH_01");
			}
			else
			{
				return 1264044047;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14_NH"):
			return joaat("NEWSPAPERS/NEWSPAPER_NH_14");
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			if (func_200(func_199(3)) == 0)
			{
				return joaat("NEWSPAPERS/NEWSPAPER_SD_01");
			}
			else
			{
				return -2099454688;
			}
			break;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_02");
		case joaat("DOCUMENT_NEWSPAPER_ED_03_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_03");
		case joaat("DOCUMENT_NEWSPAPER_ED_04_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_04");
		case joaat("DOCUMENT_NEWSPAPER_ED_05_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_05");
		case joaat("DOCUMENT_NEWSPAPER_ED_06_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_06");
		case joaat("DOCUMENT_NEWSPAPER_ED_07_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_07");
		case joaat("DOCUMENT_NEWSPAPER_ED_08_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_08");
		case joaat("DOCUMENT_NEWSPAPER_ED_09_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_09");
		case joaat("DOCUMENT_NEWSPAPER_ED_10_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_10");
		case joaat("DOCUMENT_NEWSPAPER_ED_11_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_11");
		case joaat("DOCUMENT_NEWSPAPER_ED_12_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_12");
		case joaat("DOCUMENT_NEWSPAPER_ED_13_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_13");
		case joaat("DOCUMENT_NEWSPAPER_ED_14_SD"):
			return joaat("NEWSPAPERS/NEWSPAPER_SD_14");
	}
	return -1;
}

int func_72(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return -1;
	}
	if (!func_31(iParam0, -1227898937))
	{
		return -1;
	}
	if (func_31(iParam0, -958604072))
	{
		return 0;
	}
	else if (func_31(iParam0, -726894473))
	{
		return 1;
	}
	else if (func_31(iParam0, -1705966655))
	{
		return 2;
	}
	else if (func_31(iParam0, -1205780639))
	{
		return 3;
	}
	else if (func_31(iParam0, -825365342))
	{
		return 4;
	}
	else if (func_31(iParam0, -580548123))
	{
		return 5;
	}
	else if (func_31(iParam0, -1536419873))
	{
		return 6;
	}
	else if (func_31(iParam0, -1306610876))
	{
		return 7;
	}
	else if (func_31(iParam0, 149872887))
	{
		return 8;
	}
	else if (func_31(iParam0, 1252156801))
	{
		return 9;
	}
	else if (func_31(iParam0, -217500080))
	{
		return 10;
	}
	else if (func_31(iParam0, -515403059))
	{
		return 11;
	}
	else if (func_31(iParam0, 387251815))
	{
		return 12;
	}
	else if (func_31(iParam0, 90594058))
	{
		return 13;
	}
	return -1;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (uParam0->f_5.f_2[iVar1 /*5*/].f_2 == 0)
		{
		}
		else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2) == 0)
		{
		}
		else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, 1) == 0)
		{
			return iVar0;
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			(*uParam1)[1] = 1058023652;
			(*uParam1)[2] = 83386168;
			(*uParam1)[3] = 1470235786;
			(*uParam1)[5] = 138629420;
			(*uParam1)[6] = -35898274;
			break;
		case 1:
			(*uParam1)[1] = -1132942503;
			(*uParam1)[2] = -306257787;
			(*uParam1)[3] = -1082391552;
			(*uParam1)[5] = -1933252363;
			(*uParam1)[6] = 1921299573;
			break;
		case 2:
			(*uParam1)[1] = 1097896734;
			(*uParam1)[2] = -527730691;
			(*uParam1)[3] = -2020686331;
			(*uParam1)[5] = 1558140816;
			(*uParam1)[6] = 1203318084;
			break;
		case 3:
			(*uParam1)[1] = 635501564;
			(*uParam1)[2] = 1536271015;
			(*uParam1)[3] = -2031552171;
			(*uParam1)[5] = -549142654;
			(*uParam1)[6] = 266150010;
			break;
		case 4:
			(*uParam1)[1] = -486466236;
			(*uParam1)[2] = -857116358;
			(*uParam1)[3] = 1599477265;
			(*uParam1)[5] = 1213931689;
			(*uParam1)[6] = 2136444581;
			break;
		case 5:
			(*uParam1)[1] = -1316093079;
			(*uParam1)[2] = -1046072745;
			(*uParam1)[3] = -1270311012;
			(*uParam1)[5] = 1957525344;
			(*uParam1)[6] = 211363637;
			break;
		case 6:
			(*uParam1)[1] = 679234593;
			(*uParam1)[2] = 790141037;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -393040806;
			(*uParam1)[6] = 225637914;
			break;
		case 7:
			(*uParam1)[1] = 1284380168;
			(*uParam1)[2] = -651770051;
			(*uParam1)[3] = -2097735057;
			(*uParam1)[5] = 821662409;
			(*uParam1)[6] = 619608751;
			break;
		case 8:
			(*uParam1)[1] = -1742930715;
			(*uParam1)[2] = -1352987288;
			(*uParam1)[3] = -1113478667;
			(*uParam1)[5] = 676730061;
			(*uParam1)[6] = -2136718000;
			break;
		case 9:
			(*uParam1)[1] = 233145454;
			(*uParam1)[2] = -1030003209;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -2067943350;
			(*uParam1)[6] = -1761585969;
			break;
		case 10:
			(*uParam1)[1] = 440932517;
			(*uParam1)[2] = 802847004;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1968735607;
			(*uParam1)[6] = 2094456548;
			break;
		case 11:
			(*uParam1)[1] = -218858354;
			(*uParam1)[2] = -16526676;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -713790542;
			(*uParam1)[6] = -1009301384;
			break;
		case 12:
			(*uParam1)[1] = -1926688180;
			(*uParam1)[2] = -1798429678;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1095881944;
			(*uParam1)[6] = -1938110786;
			break;
		case 13:
			(*uParam1)[1] = -42574812;
			(*uParam1)[2] = 1232101727;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1109376882;
			(*uParam1)[6] = 1873683499;
			break;
		case 14:
			(*uParam1)[1] = 56995427;
			(*uParam1)[2] = -626969930;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1185101111;
			(*uParam1)[6] = 905319389;
			break;
		case 15:
			(*uParam1)[1] = 222587387;
			(*uParam1)[2] = 609189180;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1234411431;
			(*uParam1)[6] = -1465203498;
			break;
		case 16:
			(*uParam1)[1] = -215060262;
			(*uParam1)[2] = 344902766;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1697949471;
			(*uParam1)[6] = 449155650;
			break;
		case 17:
			(*uParam1)[1] = 565147534;
			(*uParam1)[2] = 1085644998;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1673893059;
			(*uParam1)[6] = 1762592015;
			break;
		case 18:
			(*uParam1)[1] = -1947344575;
			(*uParam1)[2] = 1183113484;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 215714142;
			(*uParam1)[6] = -14029317;
			break;
		case 19:
			(*uParam1)[1] = -187013772;
			(*uParam1)[2] = -1718077947;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -529147089;
			(*uParam1)[6] = 1971848557;
			break;
		case 20:
			(*uParam1)[1] = 404261010;
			(*uParam1)[2] = -293066142;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1536037743;
			(*uParam1)[6] = -1916012566;
			break;
		case 21:
			(*uParam1)[1] = -1369644388;
			(*uParam1)[2] = 885729844;
			(*uParam1)[3] = 445380022;
			(*uParam1)[5] = -757204467;
			(*uParam1)[6] = 206761206;
			break;
		case 22:
			(*uParam1)[1] = -518998776;
			(*uParam1)[2] = 437388956;
			(*uParam1)[3] = 1204871705;
			(*uParam1)[5] = -1805886990;
			(*uParam1)[6] = 330225817;
			break;
		case 23:
			(*uParam1)[1] = 694865154;
			(*uParam1)[2] = 992018002;
			(*uParam1)[3] = 89821894;
			(*uParam1)[5] = 2116883103;
			(*uParam1)[6] = -305630760;
			break;
		case 24:
			(*uParam1)[1] = -544747299;
			(*uParam1)[2] = 1149473811;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 762780430;
			(*uParam1)[6] = 1080508654;
			break;
		case 25:
			(*uParam1)[1] = -1351317536;
			(*uParam1)[2] = -1017472673;
			(*uParam1)[3] = -912546335;
			(*uParam1)[5] = -1902013391;
			(*uParam1)[6] = -1590183587;
			break;
		case 26:
			(*uParam1)[1] = 886055955;
			(*uParam1)[2] = 571895420;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 141091591;
			(*uParam1)[6] = -160252133;
			break;
		case 27:
			(*uParam1)[1] = -556285487;
			(*uParam1)[2] = 1614302152;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -419436105;
			(*uParam1)[6] = -1153592781;
			break;
		case 28:
			(*uParam1)[1] = 2037158384;
			(*uParam1)[2] = 585557722;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -656934440;
			(*uParam1)[6] = 1773837215;
			break;
		case 29:
			(*uParam1)[1] = -546026667;
			(*uParam1)[2] = 2043867312;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -2108845481;
			(*uParam1)[6] = -1131313442;
			break;
		case 30:
			(*uParam1)[1] = 998414367;
			(*uParam1)[2] = 2113575249;
			(*uParam1)[3] = -876464929;
			(*uParam1)[5] = -1369345218;
			(*uParam1)[6] = 1074337419;
			break;
		case 31:
			(*uParam1)[1] = -1513488517;
			(*uParam1)[2] = 757007611;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1953397901;
			(*uParam1)[6] = -1129290320;
			break;
		case 32:
			(*uParam1)[1] = -188888539;
			(*uParam1)[2] = 1163343855;
			(*uParam1)[3] = 316887816;
			(*uParam1)[5] = 1093667790;
			(*uParam1)[6] = -1053389863;
			break;
		case 33:
			(*uParam1)[1] = -532564011;
			(*uParam1)[2] = -733172977;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 907866416;
			(*uParam1)[6] = 333294770;
			break;
		default:
			break;
	}
}

void func_75(int iParam0, var uParam1)
{
	(*uParam1)[0] = 0;
	switch (iParam0)
	{
		case 0:
			(*uParam1)[1] = 1897544931;
			(*uParam1)[2] = 266041631;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1509550115;
			(*uParam1)[6] = 509767913;
			(*uParam1)[7] = 0;
			break;
		case 1:
			(*uParam1)[1] = 2015614314;
			(*uParam1)[2] = -882651535;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 197851966;
			(*uParam1)[6] = -521034356;
			(*uParam1)[7] = 0;
			break;
		case 2:
			(*uParam1)[1] = -1930969928;
			(*uParam1)[2] = -1309514843;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1876026974;
			(*uParam1)[6] = -1163727221;
			(*uParam1)[7] = 0;
			break;
		case 3:
			(*uParam1)[1] = -16828255;
			(*uParam1)[2] = -1765089170;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -949517903;
			(*uParam1)[6] = -1144296811;
			(*uParam1)[7] = 0;
			break;
		case 4:
			(*uParam1)[1] = -2077710768;
			(*uParam1)[2] = 1630201582;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 389673950;
			(*uParam1)[6] = -328163764;
			(*uParam1)[7] = 0;
			break;
		case 5:
			(*uParam1)[1] = -890348822;
			(*uParam1)[2] = 1191730756;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -244620647;
			(*uParam1)[6] = -671633198;
			(*uParam1)[7] = 0;
			break;
		case 6:
			(*uParam1)[1] = -1296064150;
			(*uParam1)[2] = 1840190058;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 2114150388;
			(*uParam1)[6] = 1313079414;
			(*uParam1)[7] = 0;
			break;
		case 7:
			(*uParam1)[1] = 504104914;
			(*uParam1)[2] = -670131942;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -39402208;
			(*uParam1)[6] = 200630717;
			(*uParam1)[7] = 0;
			break;
		case 8:
			(*uParam1)[1] = 772020613;
			(*uParam1)[2] = 2083596926;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1921439563;
			(*uParam1)[6] = -1454783280;
			(*uParam1)[7] = 0;
			break;
		case 9:
			(*uParam1)[1] = -706329904;
			(*uParam1)[2] = 810875384;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1942418467;
			(*uParam1)[6] = 1361948401;
			(*uParam1)[7] = 0;
			break;
		case 10:
			(*uParam1)[1] = 1996723693;
			(*uParam1)[2] = -2077382259;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -1609894991;
			(*uParam1)[6] = -1848617156;
			(*uParam1)[7] = 0;
			break;
		case 11:
			(*uParam1)[1] = -1118758269;
			(*uParam1)[2] = 1001361578;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 1188868442;
			(*uParam1)[6] = -85911196;
			(*uParam1)[7] = 0;
			break;
		case 12:
			(*uParam1)[1] = -1084988756;
			(*uParam1)[2] = 664353388;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = -925751739;
			(*uParam1)[6] = -1224834402;
			(*uParam1)[7] = 0;
			break;
		case 13:
			(*uParam1)[1] = 1300422639;
			(*uParam1)[2] = -1886721378;
			(*uParam1)[3] = 0;
			(*uParam1)[5] = 402394595;
			(*uParam1)[6] = 1280669333;
			(*uParam1)[7] = 0;
			break;
		case 14:
			(*uParam1)[1] = 1031073462;
			(*uParam1)[2] = -1765843222;
			(*uParam1)[3] = -612472729;
			(*uParam1)[5] = 84541090;
			(*uParam1)[6] = -723181991;
			(*uParam1)[7] = -542952491;
			break;
		default:
			break;
	}
}

void func_76(var uParam0)
{
	if (uParam0->f_131 > 0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	}
}

void func_77(int iParam0, int iParam1)
{
	if (!func_192(iParam0))
	{
		return;
	}
	func_201(iParam0, iParam1);
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_80(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_01"):
			Global_40.f_9146.f_94[4] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_02"):
			Global_40.f_9146.f_94[5] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_03"):
			Global_40.f_9146.f_94[6] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_04"):
			Global_40.f_9146.f_94[12] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_05"):
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"):
			Global_40.f_9146.f_94[13] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_07"):
			Global_40.f_9146.f_94[0] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_08"):
			Global_40.f_9146.f_94[1] = 1;
			break;
		case joaat("DOCUMENT_COACH_ROBBERY_NOTE_09"):
			Global_40.f_9146.f_94[2] = 1;
			break;
	}
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_31(iParam0, 1989861793))
	{
		iVar0 = func_69(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_202(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_203(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_204(iVar14, iVar1);
					if (iVar15 != iParam0 && func_83(iVar15, 0))
					{
						if (func_205(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_206(iVar1);
				if (bVar13)
				{
					func_207(iParam0);
				}
				else
				{
					func_105(306, 0);
				}
			}
		}
	}
}

void func_82(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (func_31(iParam0, 566155764))
	{
		func_208(iParam0);
		iVar0 = func_209(iParam0);
		if (iVar0 != -1)
		{
			vVar1 = { func_210(iVar0) };
			vVar4 = { func_211(iVar0) };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar1, vVar4.x);
		}
		UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("MAP"));
	}
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_84(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_42(iParam0))
	{
		return;
	}
	iVar0 = func_93(iParam0);
	if (bParam1)
	{
		func_212(iParam0, 4);
		func_213(iVar0, 1);
		func_214(iVar0, 1);
	}
	else
	{
		func_215(iParam0, 4);
		func_214(iVar0, 0);
	}
}

bool func_85(var uParam0, var uParam1)
{
	bool bVar0;

	if (func_24(*uParam1, uParam0->f_130))
	{
		bVar0 = !func_31(*uParam1, 1051234725);
	}
	if (func_86(*uParam1, uParam0->f_130))
	{
		bVar0 = func_31(*uParam1, 601161511);
	}
	return bVar0;
}

bool func_86(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 2110129666)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == -358392831)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 391077233)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 1010970643)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 382283982)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == -498826883)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == -1222090749)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 1641476577)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 690458252)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == -277062447)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIPPED_BASE"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == -180517239)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == -2082844535)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_87(int iParam0, bool bParam1)
{
	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	return !func_216(iParam0, 4);
}

void func_88(var uParam0, bool bParam1)
{
	if (func_42(*uParam0))
	{
		func_84(*uParam0, bParam1, 1);
	}
}

void func_89(var uParam0, var uParam1)
{
	func_88(&(Global_36622[3]), func_85(uParam0, uParam1));
}

bool func_90(int iParam0, int iParam1)
{
	switch (func_69(iParam0, -949239683))
	{
		case 1712126263:
			if (iParam1 == 699685523)
			{
				return true;
			}
			break;
		case 10252101:
			if (iParam1 == 687211918)
			{
				return true;
			}
			break;
		case -1229959999:
			if (iParam1 == 1942589213)
			{
				return true;
			}
			break;
		case -1050374492:
			if (iParam1 == 557096072)
			{
				return true;
			}
			break;
		case 1513351077:
			if (iParam1 == 676223146)
			{
				return true;
			}
			break;
		case -1565009253:
			if (iParam1 == 961781775)
			{
				return true;
			}
			break;
		case 733893097:
			if (iParam1 == 88279163)
			{
				return true;
			}
			break;
		case -164980960:
			if (iParam1 == 251586723)
			{
				return true;
			}
			break;
		case 1894156335:
			if (iParam1 == 554041952)
			{
				return true;
			}
			break;
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@PAPER_D2_H32_ROLLED_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -1273369295:
			if (iParam1 == 527714016)
			{
				return true;
			}
			break;
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_BACK"))
			{
				return true;
			}
			break;
		case -873135685:
			if (iParam1 == 1275147506)
			{
				return true;
			}
			break;
		case 24248412:
			if (iParam1 == 224513019)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_91(var uParam0)
{
}

void func_92(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
	{
		iVar0 = (uParam1->f_51 + uParam1->f_52) + 1;
		bVar1 = uParam0->f_135 < (iVar0 - 1);
		bVar2 = uParam0->f_135 > 0;
		if (bVar2)
		{
			if (!func_42(uParam1->f_1))
			{
				uParam1->f_1 = func_217("NEWS_PREV_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_PREV"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (func_218(uParam1->f_1, 1))
			{
				func_219(uParam0, iParam2);
				func_220(uParam0, uParam1, iParam2);
			}
		}
		else if (func_42(uParam1->f_1))
		{
			func_221(&(uParam1->f_1), 1, 1);
		}
		if (bVar1)
		{
			if (!func_42(*uParam1))
			{
				*uParam1 = func_217("NEWS_NEXT_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_NEXT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (func_218(*uParam1, 1))
			{
				func_222(uParam0, iParam2);
				func_220(uParam0, uParam1, iParam2);
			}
		}
		else if (func_42(*uParam1))
		{
			func_221(uParam1, 1, 1);
		}
	}
	else
	{
		if (func_42(uParam1->f_1))
		{
			func_221(&(uParam1->f_1), 1, 1);
		}
		if (func_42(*uParam1))
		{
			func_221(uParam1, 1, 1);
		}
	}
}

int func_93(int iParam0)
{
	return iParam0;
}

void func_94(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar0, "Generic");
	if (func_31(iParam1, 1104960349))
	{
		func_223(uParam0, iParam1);
	}
	else if (func_31(iParam1, 1989861793))
	{
		func_224(uParam0, iParam1);
	}
	else if (func_31(iParam1, -772152977))
	{
		func_225(uParam0, iParam1);
	}
	else if (func_31(iParam1, -2081717885))
	{
		func_226(uParam0, iParam1);
	}
	else if (func_69(iParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_227(uParam0, iParam1);
	}
	else if (func_31(iParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		func_228(uParam0, iParam1);
	}
	else
	{
		func_229(uParam0, iParam1);
	}
}

bool func_95(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_122() == -1)
	{
		if (func_230(iParam0) && func_231(iParam0))
		{
			func_232(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_96(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_233(iParam0, iParam1);
	Var0 = { func_234(iParam0, 0, 1) };
	iVar5 = func_235(iParam0, &Var0, 0, 0);
	iVar6 = func_236(iParam0, 0);
	if ((iVar5 > 1 && !func_237()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_31(iParam0, -2051813666))
		{
			func_105(583, 1);
		}
		else
		{
			func_105(582, 0);
		}
	}
	if (func_238(iParam0, &Var0, *iParam1, 0, 0))
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

void func_97(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_69(iParam0, -949239683))
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

int func_98(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_239(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_240(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_241(bParam2), iParam0, 0);
	return iVar2;
}

bool func_99(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	return func_100(iParam0) != 0;
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_242())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_243(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_101(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_102(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_242())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_101(iVar0))
		{
			if (func_61(func_243(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_103(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_244(48);
	func_245(0, -1);
}

bool func_104(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	return func_135(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_246(iParam0, &iVar0, &iVar1);
	if (!func_247(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_248(iVar0, iVar1);
}

int func_106(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_107(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_108()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_109(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	return func_135(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_110(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_249(Global_1347702[iParam0 /*49*/].f_15);
}

int func_111()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_61(func_250(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_108() && (func_110(38) || func_104(38)))
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
			if (func_108() && (func_110(39) || func_104(39)))
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
			iVar9 = func_251(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_108() && (func_110(41) || func_104(41)))
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
			if (func_108() && (func_110(49) || func_104(49)))
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
			iVar9 = func_251(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_252(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_253(iParam0, iVar13, iVar14))
	{
	}
	if (func_254(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_255(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_256(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_257(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_258(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_113(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_114(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_108() && (func_110(38) || func_104(38)))
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
			if (func_108() && (func_110(39) || func_104(39)))
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
			if (func_108() && (func_110(49) || func_104(49)))
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
		if (func_108() && (func_110(38) || func_104(38)))
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
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_261(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_260(func_107(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_108() && (func_110(39) || func_104(39)))
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
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_108() && (func_110(49) || func_104(49)))
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
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_259(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_115(int iParam0)
{
	vector3 vVar0;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_116(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_117(int iParam0)
{
	if (!func_262(iParam0))
	{
		return false;
	}
	return func_263(iParam0);
}

void func_118(int iParam0)
{
	if (!func_262(iParam0))
	{
		return;
	}
	func_264(iParam0);
	func_265(iParam0);
}

int func_119(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_120(int iParam0, bool bParam1)
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
	if (func_83(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_266(iVar0) || func_267(iVar0))
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

int func_121(int iParam0, bool bParam1)
{
	if (!func_83(iParam0, 0))
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

int func_122()
{
	return Global_1572887.f_12;
}

void func_123(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_268(iParam0))
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

bool func_124(bool bParam0)
{
	if (func_122() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_241(bParam0));
}

bool func_125(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_234(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_269((398 + iVar28), 1);
			if (func_270(iParam0, &Var0, iVar5, 0))
			{
				if (func_271(iParam0, &Var6, iVar5))
				{
					Var29 = { func_272(iParam0, Var0, iVar5, 0) };
					func_273(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_124(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_126(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_274(iParam0, iParam1);
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

bool func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	if (!func_124(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_127(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_121(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_122() == -1)
		{
			func_123(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_275(iVar0);
			}
		}
		if (!func_238(iParam0, &uVar1, 1, 0, 0))
		{
			func_232(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_276(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_125(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_125(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_125(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_277())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_278(iVar0))
				{
					func_125(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_125(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_279(Global_35, 2, 0, 1);
				if ((((func_268(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_117(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_268(iVar7) && func_117(24))
				{
					if (!func_125(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_125(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_125(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_105(480, 1);
	}
	return true;
}

bool func_128(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_128(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_268(iVar4))
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
	if (func_61(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_166(func_280(iParam0), func_165(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_122() == -1)
		{
			if (func_135(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_105(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_124(0))
	{
		if (func_126(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_171(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_130(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_281()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_282(Global_35, iParam0, &uVar0))
		{
			func_150(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_156();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_156();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_156();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_154();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_152();
			break;
	}
}

void func_131(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_152();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_153();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_154();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_155();
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
			func_156();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_283();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_284();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> /*16*/ func_132(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_133(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_134(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_135(int iParam0, bool bParam1)
{
	switch (func_285(iParam0))
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

void func_136(int iParam0)
{
	bool bVar0;

	bVar0 = func_31(iParam0, -2017733358);
	if (func_286() < 3)
	{
		if (bVar0)
		{
			if (func_288(func_287(iParam0), iParam0))
			{
				func_166(79, func_165(func_287(iParam0)), 1);
			}
			else
			{
				func_166(78, func_165(func_287(iParam0)), 1);
			}
		}
		else
		{
			func_166(80, func_165(func_289(iParam0)), 1);
		}
	}
}

bool func_137()
{
	if (((((func_290(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_290(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_290(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_290(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_290(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_290(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_291(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_292(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_293(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_139(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_294(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_294(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_112(39, 0, 0, 0, 0, 0, 1, 0);
			func_114(39, 0, 0, 0, 0, -1, 0);
			func_295(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_112(41, 0, 0, 0, 0, 0, 1, 0);
			func_114(41, 0, 0, 0, 0, -1, 0);
			func_296(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_112(49, 0, 0, 0, 0, 0, 1, 0);
			func_114(49, 0, 0, 0, 0, -1, 0);
			func_297(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_112(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_298(1), 0, -1, 0);
			func_299(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_112(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_298(2), 0, -1, 0);
			func_299(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_112(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_298(4), 0, -1, 0);
			func_299(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_112(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_298(8), 0, -1, 0);
			func_299(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_112(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_298(16), 0, -1, 0);
			func_299(16);
			break;
	}
}

void func_140(int iParam0)
{
	if (func_300() == 1)
	{
		if (func_104(39))
		{
			func_105(342, 0);
		}
		else
		{
			func_105(343, 0);
			func_295(1);
		}
	}
	if (func_300() >= 30)
	{
		func_105(344, 0);
	}
	func_112(39, 0, 0, 0, 0, 0, -1, 0);
	func_114(39, 0, 0, func_300(), 30, 1, 0);
}

void func_141(int iParam0)
{
	if (func_301() == 1)
	{
		if (func_104(49))
		{
			func_105(409, 0);
		}
		else
		{
			func_105(410, 0);
			func_297(1);
		}
	}
	if (func_301() >= 10)
	{
		func_105(411, 0);
	}
	func_112(49, 0, 0, 0, 0, 0, -1, 0);
	func_114(49, 0, 0, func_301(), 10, 1, 0);
}

void func_142(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_105(437, 0);
			func_105(440, 0);
			func_302(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_251(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_294(1);
			func_303(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_302(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_251(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_294(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_302(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_251(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_294(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_302(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_251(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_294(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_105(438, 0);
			func_302(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_112(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_114(51, 0, 0, sVar0, func_251(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_294(32768);
			break;
		default:
			func_105(439, 0);
			break;
	}
}

void func_143()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_122() == -1)
	{
		if (!func_104(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_105(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_105(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_105(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_105(400, 0);
			}
		}
		else if (func_31(iParam0, 412399755))
		{
			func_304(joaat("EXOTIC_STAGE_01"));
			if (func_305() == 0)
			{
				func_245(0, 10);
				iVar1 = func_306(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_104(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_105(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_105(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_105(401, 0);
			}
		}
		else if (func_31(iParam0, 709057512))
		{
			func_304(joaat("EXOTIC_STAGE_02"));
			if (func_305() == 1)
			{
				func_245(0, 10);
				iVar1 = func_306(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_104(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_105(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_105(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_105(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_105(398, 0);
			}
		}
		else if (func_31(iParam0, -1478961327))
		{
			func_304(joaat("EXOTIC_STAGE_03"));
			if (func_305() == 2)
			{
				func_245(0, 10);
				iVar1 = func_306(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_309(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_310(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_244(48);
					}
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_104(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_105(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_105(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_105(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_105(406, 0);
			}
		}
		else if (func_31(iParam0, -1238404098))
		{
			func_304(joaat("EXOTIC_STAGE_04"));
			if (func_305() == 3)
			{
				func_245(0, 10);
				iVar1 = func_306(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_104(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_105(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_105(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_105(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_105(403, 0);
			}
		}
		else if (func_31(iParam0, 1160548794))
		{
			func_304(joaat("EXOTIC_STAGE_05"));
			if (func_305() == 4)
			{
				func_245(0, 10);
				iVar1 = func_306(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_307(iParam0) < func_308(iParam0))
					{
						func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_114(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_145(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_309(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_310(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_244(48);
		}
	}
}

void func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_61(func_311(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_312(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_313(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_122() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_138(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_138(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_138(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_138(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_138(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_138(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_138(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_138(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_138(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_138(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_138(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_138(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_138(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_314())
			{
				func_138(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_138(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_138(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_138(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_138(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_138(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_138(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_138(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_138(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_148(int iParam0)
{
	if (func_104(41))
	{
		func_105(363, 0);
	}
	else
	{
		func_105(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_01"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_02"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_03"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_04"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_05"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_06"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_07"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_08"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_09"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_10"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_11"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_12"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_13"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_245(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_315(joaat("LEGENDARY_FISH_14"));
			func_316(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_317(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_149(int iParam0, int iParam1)
{
	var uVar0;

	func_318(iParam0, iParam1, &uVar0);
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_234(iParam1, 1, 0) };
		iParam3 = func_319(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_321(iParam1, iParam2, func_320(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_322(1, (func_122() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_320(iParam3, 1) /*11*/])
			{
				func_323(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_324(32768) && iParam1 != Global_1946054.f_57[func_320(iParam3, 1) /*11*/])
			{
				func_325();
				func_323(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_323(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_326(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_323(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_327(0);
			func_328(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_323(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_151(int iParam0, bool bParam1)
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
	iVar18 = func_279(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_279(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_329("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_330(&Var3, iVar2, iVar0, iVar1))
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
						func_9(iVar0);
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

void func_152()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_153()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_154()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_155()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_156()
{
	func_331();
	func_332();
	func_333();
}

void func_157(int iParam0, int iParam1, bool bParam2)
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

void func_158(int iParam0, bool bParam1)
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
	func_259(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_159(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_160(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_161(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_162(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_163(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_164(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_165(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_166(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_246(iParam0, &iVar0, &iVar1);
	if (!func_247(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_334(iParam0, 1024))
	{
		return;
	}
	func_248(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_167(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_246(iParam0, &iVar0, &iVar1);
	if (!func_247(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_334(iParam0, 1024))
	{
		return;
	}
	func_248(iVar0, iVar1);
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

int func_168()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_242())
	{
		return func_169();
	}
	iVar4 = (func_242() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_242())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_335(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_243(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_169()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_242());
	return func_243(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_170(int iParam0)
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

int func_171(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_234(iParam0, 0, 1) };
	Var5 = { func_272(iParam0, Var0, Var0.f_4, 0) };
	return func_336(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_122() != -1)
	{
		return;
	}
	switch (func_119(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_337(81053684, 0) <= 0)
			{
				func_323(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_323(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_338(iParam0);
			if (func_339(iVar0))
			{
				func_340(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_323(30, iParam0, 0, 0, 0);
			}
			if (func_341() == -2125499975 || func_341() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_323(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_341() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_323(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_342(-525676072, 0))
			{
				if (func_343(-525676072, &iVar1))
				{
					func_323(33, iVar1, 0, 0, 0);
				}
			}
			func_323(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_344(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_150(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_118(24);
		if (func_151(&iVar2, 0))
		{
			func_125(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_173(int iParam0)
{
	if (func_31(iParam0, 943695443))
	{
		func_345(0, iParam0);
	}
	else if (func_31(iParam0, -2096528786))
	{
		func_345(1, iParam0);
	}
	else if (func_31(iParam0, -1094167013))
	{
		func_345(2, iParam0);
	}
	else if (func_31(iParam0, 1936654645))
	{
		func_345(3, iParam0);
	}
	else if (func_31(iParam0, 1306489306))
	{
		func_345(4, iParam0);
	}
	else if (func_31(iParam0, 435762317))
	{
		func_345(5, iParam0);
	}
	else if (func_31(iParam0, 1259363210))
	{
		func_345(6, iParam0);
	}
	else if (func_31(iParam0, 881398259))
	{
		func_345(7, iParam0);
	}
	else if (func_31(iParam0, -541549214))
	{
		func_345(8, iParam0);
	}
	else if (func_31(iParam0, 130796156))
	{
		func_345(-1, iParam0);
	}
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	Var4.f_1 = 10;
	func_346(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_347(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> /*16*/ func_175(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_83(iParam0, 0))
	{
		return Var0;
	}
	if (func_31(iParam0, -305066475))
	{
		if (func_122() == -1)
		{
			if (func_31(iParam0, -537818634))
			{
				return func_348(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_348(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_31(iParam0, -537818634))
	{
		return func_348(joaat("MEDICINE_ITEMS"));
	}
	if (func_31(iParam0, 2084895747))
	{
		return func_348(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_176(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_122() == -1)
			{
				if (func_135(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_105(109, 1);
				}
			}
			break;
	}
}

void func_177(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_350(func_349(0));
	func_352(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_351(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_178(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_83(iParam0, 0))
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
	if (!func_353())
	{
		func_354(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_355(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_355(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_116(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_115(iParam0);
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
	else if (!func_356(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_357(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_165(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_31(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_165(iParam0));
	}
	func_352(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_179(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> /*80*/ sVar2;

	if (func_329("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), 1084182731, 0))
	{
		uParam0->f_145 = 1;
		iVar0 = 0;
		iVar1 = 0;
		if (uParam0->f_1 > 0)
		{
			Var2.f_9 = -1591664384;
			iVar0 = (uParam0->f_1 - 1);
			while (iVar0 >= 0)
			{
				if (!func_330(&Var2, iVar0, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (iParam1 == Var2.f_4)
					{
						uParam0->f_1.f_2 = iVar0;
						uParam0->f_1.f_3 = iVar1;
					}
					if (Global_1935689.f_9439 == 0)
					{
						if (func_358(&Var2, 0, 1))
						{
							iVar1++;
						}
						if (iVar1 >= 16)
						{
							return 1;
						}
					}
				}
				iVar0 = (iVar0 + -1);
			}
			return 1;
		}
	}
	return 0;
}

bool func_180(var uParam0, var uParam1)
{
	struct<10> /*80*/ sVar0;
	int iVar14;
	bool bVar15;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		(*uParam1)[2 /*9*/] = 0;
		return false;
	}
	if (Global_36634)
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	bVar15 = false;
	iVar14 = uParam0->f_1.f_2 + 1;
	while (iVar14 <= (uParam0->f_1 - 1))
	{
		if (func_330(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_359((*uParam1)[0 /*9*/], Var0.f_4))
			{
				if (!bVar15)
				{
					(*uParam1)[1 /*9*/] = Var0.f_4;
					bVar15 = true;
				}
				else
				{
					uParam0->f_150 = 0;
					return bVar15;
				}
			}
		}
		iVar14++;
	}
	if (!bVar15)
	{
		(*uParam1)[1 /*9*/] = 0;
	}
	return bVar15;
}

void func_181(int iParam0, int iParam1)
{
	if ((!func_31(iParam1, 747873593) && !func_31(iParam1, joaat("CI_TAG_FOLDER_LETTERS"))) && !func_31(iParam1, joaat("CI_TAG_FOLDER_NOTES")))
	{
		return;
	}
	if (iParam1 != Global_1911894[iParam0 /*6*/])
	{
		Global_1911894[iParam0 /*6*/].f_1 = 3;
		Global_1911894[iParam0 /*6*/] = iParam1;
		Global_1911894[iParam0 /*6*/].f_5 = 0;
	}
}

bool func_182(var uParam0, var uParam1)
{
	struct<10> /*80*/ sVar0;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	iVar15 = (16 - uParam0->f_1.f_3);
	if (Global_36634)
	{
		return false;
	}
	bVar17 = false;
	iVar14 = (uParam0->f_1.f_2 - 1);
	while (iVar14 >= 0)
	{
		if (Global_1935689.f_9439 == 0)
		{
			iVar16++;
			if (iVar16 >= iVar15)
			{
				return false;
			}
		}
		if (func_330(&Var0, iVar14, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_359((*uParam1)[0 /*9*/], Var0.f_4))
			{
				if (!bVar17)
				{
					(*uParam1)[2 /*9*/] = Var0.f_4;
					bVar17 = true;
				}
				else
				{
					uParam0->f_151 = 0;
					return bVar17;
				}
			}
		}
		iVar14 = (iVar14 + -1);
	}
	if (!bVar17)
	{
		(*uParam1)[2 /*9*/] = 0;
	}
	return bVar17;
}

void func_183(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_83((*uParam0)[iVar0 /*9*/], 0))
		{
			func_360(uParam0[iVar0 /*9*/]);
		}
		iVar0++;
	}
}

void func_184(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_83((*uParam0)[iVar0 /*9*/], 0))
		{
			(uParam0[iVar0 /*9*/])->f_4 = func_69((*uParam0)[iVar0 /*9*/], -949239683);
		}
		iVar0++;
	}
}

bool func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_186(var uParam0, var uParam1)
{
	if (uParam1->f_2)
	{
		return true;
	}
	if (uParam1->f_1)
	{
		return true;
	}
	else if (uParam1->f_3 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127) && TXD::HAS_STREAMED_TXD_LOADED(uParam1->f_3))
		{
			if (!uParam1->f_2)
			{
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_127, uParam1->f_3, 0, 0);
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam1->f_3);
			}
			uParam1->f_2 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

int func_187(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_72((*uParam1)[0 /*9*/]);
	if (func_361(iVar0))
	{
		func_363(iVar0, func_362((*uParam1)[0 /*9*/]));
		if (!func_364(iVar0, 2))
		{
			func_365(iVar0, 2);
		}
	}
	return 1;
}

bool func_188(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_189(int iParam0)
{
	int iVar0;

	if (func_48(iParam0))
	{
		return 0;
	}
	if (func_54(iParam0, 0))
	{
		func_366(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar0] == -1)
			{
				func_366(iParam0);
				Global_40.f_450[iVar0] = iParam0;
				Global_40.f_1094++;
				Global_1430257 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_190()
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

int func_191(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_368(func_367(iParam0));
}

bool func_192(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_193()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_369(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (func_47(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					func_370(iVar1, 0);
					func_372(iVar1, func_371(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

char* func_194(char* sParam0)
{
	return sParam0;
}

int func_195(int iParam0, bool bParam1)
{
	if (iParam0 == 22 || iParam0 == 23)
	{
		return joaat("BLIP_SCM_DORKINS");
	}
	else if (iParam0 == 26)
	{
		return joaat("BLIP_RC_CALLOWAY");
	}
	else if ((iParam0 == 30 || iParam0 == 33) || iParam0 == 36)
	{
		return joaat("BLIP_RC_CHAIN_GANG");
	}
	else if (iParam0 == 53 || iParam0 == 55)
	{
		return joaat("BLIP_RC_CRACKPOT");
	}
	else if (iParam0 == 58)
	{
		return joaat("BLIP_SHOP_DOCTOR");
	}
	else if (iParam0 == 60 || iParam0 == 61)
	{
		return joaat("BLIP_SCM_STRAUSS");
	}
	else if ((iParam0 == 71 || iParam0 == 74) || iParam0 == 75)
	{
		return joaat("BLIP_SCM_EVELYN");
	}
	else if (iParam0 == 77)
	{
		return joaat("BLIP_RC_ART");
	}
	else if (iParam0 == 82 || iParam0 == 83)
	{
		return joaat("BLIP_AMBIENT_GANG_LEADER");
	}
	else if (iParam0 == 89)
	{
		return joaat("BLIP_RC_KITTY");
	}
	else if (iParam0 == 101)
	{
		return joaat("BLIP_RC_ALBERT");
	}
	else if (iParam0 == 115)
	{
		return joaat("BLIP_SCM_EAGLE_FLIES");
	}
	else if ((iParam0 == 117 || iParam0 == 118) || iParam0 == 119)
	{
		return joaat("BLIP_RC_OH_BROTHER");
	}
	else if (iParam0 == 121)
	{
		if (bParam1 || func_135(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_OBEDIAH_HINTON");
		}
	}
	else if (iParam0 == 127)
	{
		return joaat("BLIP_RC_LIGHTNING");
	}
	else if (iParam0 == 136)
	{
		return joaat("BLIP_RC_SLAVE_CATCHER");
	}
	else if (iParam0 == 143)
	{
		return joaat("BLIP_RC_ODD_FELLOWS");
	}
	else if (iParam0 == 147)
	{
		if (bParam1 || func_135(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			return joaat("BLIP_RC_WAR_VETERAN");
		}
	}
	if (iParam0 == 151)
	{
		return joaat("BLIP_RC_HERBALIST");
	}
	return Global_1347702[iParam0 /*49*/].f_36;
}

void func_196(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

bool func_197(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_239(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_329("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_330(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_268(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_9(iVar1);
				return true;
			}
			iVar3++;
		}
		func_9(iVar1);
	}
	return false;
}

bool func_198(int iParam0)
{
	return func_373(Global_1935496.f_27, iParam0);
}

int func_199(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_200(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_374(iParam0);
}

void func_201(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

struct<10> /*80*/ func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> /*80*/ sVar0;

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

bool func_203(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12)
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*uParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_204(int iParam0, int iParam1)
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

bool func_205(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> /*296*/ sVar2;
	int iVar49;

	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_375(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && func_375(iParam0, Var2, 1))
				{
					if (func_376(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_376(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_105(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_50(0, 0, 1))
		{
			func_245(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_206(int iParam0)
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

void func_207(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			iVar0 = 307;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			iVar0 = 308;
			break;
		case joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"):
			iVar0 = 309;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case joaat("DOCUMENT_PAMPHLET_SUPER_MEAL"):
			iVar0 = 311;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			iVar0 = 313;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			iVar0 = 314;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"):
			iVar0 = 316;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"):
			iVar0 = 317;
			break;
		case joaat("DOCUMENT_PAMPHLET_COVER_SCENT"):
			iVar0 = 319;
			break;
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			iVar0 = 320;
			break;
		case joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"):
			iVar0 = 321;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"):
			iVar0 = 322;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			iVar0 = 323;
			break;
		case joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"):
			iVar0 = 324;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case joaat("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			iVar0 = 328;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"):
			iVar0 = 330;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			iVar0 = 331;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"):
			iVar0 = 332;
			break;
		case joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"):
			iVar0 = 333;
			break;
		case joaat("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			iVar0 = 334;
			break;
		case joaat("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_105(iVar0, 0);
	}
}

void func_208(int iParam0)
{
	struct<5> /*40*/ sVar0;
	var uVar5;

	Var0.f_3 = 1;
	Var0.f_4 = iParam0;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar5, PLAYER::PLAYER_ID());
	func_377(&Var0, uVar5);
}

int func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (Global_1165157.f_49[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_210(int iParam0)
{
	vector3 vVar0;
	struct<5> /*40*/ sVar3;

	if (func_378(&Var3, iParam0) && func_379(&Var3))
	{
		func_380(Var3, 924198834, &vVar0, 1);
	}
	return vVar0;
}

Vector3 func_211(int iParam0)
{
	vector3 vVar0;
	struct<5> /*40*/ sVar3;

	if (func_378(&Var3, iParam0) && func_379(&Var3))
	{
		func_380(Var3, 1334964216, &vVar0, 1);
	}
	return vVar0;
}

void func_212(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_213(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_216(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_214(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_215(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

bool func_216(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

int func_217(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_216(iVar0, 2))
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
		func_381(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, bParam4, iParam5, bParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_218(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_42(iParam0))
	{
		return false;
	}
	iVar0 = func_93(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_219(var uParam0, int iParam1)
{
	uParam0->f_135 = (uParam0->f_135 - 1);
	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (uParam0->f_135 == 1)
			{
				uParam0->f_135 = 0;
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	if (uParam0->f_135 < uParam1->f_51)
	{
		func_228(uParam0, iParam2);
	}
	else
	{
		iVar0 = (uParam0->f_135 - uParam1->f_51);
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_1 != -1)
		{
			if (iVar0 == 0)
			{
				func_382(&(uParam1->f_2));
				return;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_2 != -1)
		{
			if (iVar0 == 0)
			{
				func_382(&(uParam1->f_18));
				return;
			}
		}
		func_382(&(uParam1->f_34));
	}
}

void func_221(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_42(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_93(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_383(iVar0);
	*uParam0 = 0;
}

void func_222(var uParam0, int iParam1)
{
	uParam0->f_135++;
	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			if (uParam0->f_135 == 1)
			{
				uParam0->f_135 = 2;
			}
			break;
	}
}

void func_223(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_384(&(uParam0->f_5), 1, 2, 1, 0);
					break;
				case 1724675796:
					func_384(&(uParam0->f_5), 2, 1, 1, 0);
					break;
				case 276123595:
					func_384(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -139224928:
					func_384(&(uParam0->f_5), 4, 1, 1, 0);
					break;
				case -29447330:
					func_384(&(uParam0->f_5), 5, 2, 1, 0);
					break;
				case 159464507:
					func_384(&(uParam0->f_5), 6, 1, 1, 0);
					break;
				case 1175698187:
					func_384(&(uParam0->f_5), 7, 2, 0, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_224(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_384(&(uParam0->f_5), iVar2, 0, 1, 0);
					iVar2++;
					break;
				case -641080715:
					func_384(&(uParam0->f_5), iVar2, 2, 1, 0);
					iVar2++;
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_225(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 0, 1, 0);
					break;
				case -641080715:
					func_384(&(uParam0->f_5), 2, 3, 1, 0);
					break;
				case 276123595:
					func_384(&(uParam0->f_5), 3, 3, 1, 0);
					break;
				case -29447330:
					func_384(&(uParam0->f_5), 4, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
	uParam0->f_5 = iParam1;
	func_384(&(uParam0->f_5), 1, 1, 1, 0);
}

void func_226(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (iParam1)
			{
				case joaat("DOCUMENT_NOTE_STRAUSS_2"):
				case joaat("DOCUMENT_NOTE_STRAUSS_1"):
				case joaat("DOCUMENT_NOTE_STRAUSS_6"):
				case joaat("DOCUMENT_NOTE_STRAUSS_5"):
				case joaat("DOCUMENT_NOTE_STRAUSS_4"):
				case joaat("DOCUMENT_NOTE_STRAUSS_3"):
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							func_384(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_384(&(uParam0->f_5), iVar2, 6, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_384(&(uParam0->f_5), iVar2, 5, 0, func_31(iParam1, -1804424566));
							iVar2++;
							break;
						case 276123595:
							func_384(&(uParam0->f_5), iVar2, 5, 0, 0);
							iVar2++;
							break;
					}
					break;
				default:
					switch (uParam0->f_5.f_2[iVar1 /*5*/])
					{
						case 1410847083:
							func_384(&(uParam0->f_5), iVar2, 1, 1, 0);
							iVar2++;
							break;
						case 1724675796:
							func_384(&(uParam0->f_5), iVar2, 3, 1, 0);
							iVar2++;
							break;
						case -641080715:
							func_384(&(uParam0->f_5), iVar2, 2, 0, 0);
							iVar2++;
							break;
					}
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_227(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 1, 1, 0);
					break;
				case 1724675796:
					func_384(&(uParam0->f_5), 1, 0, 1, 0);
					break;
				case -139224928:
					func_384(&(uParam0->f_5), 2, 0, 1, 0);
					break;
				case -641080715:
					func_384(&(uParam0->f_5), 3, 0, 1, 0);
					break;
				case 276123595:
					func_384(&(uParam0->f_5), 4, 3, 1, 0);
					break;
				case -29447330:
					func_384(&(uParam0->f_5), 5, 3, 1, 0);
					break;
				case 1175698187:
					func_384(&(uParam0->f_5), 6, 3, 1, 0);
					break;
				case 852595847:
					func_384(&(uParam0->f_5), 7, 3, 1, 0);
					break;
				case 1488412754:
					func_384(&(uParam0->f_5), 8, 3, 1, 0);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (uParam0->f_135 < 0 || uParam0->f_135 >= 12)
	{
		return;
	}
	iVar0 = uParam0->f_135;
	if (iVar0 == 0)
	{
		switch (iParam1)
		{
			case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
				if (func_200(func_199(3)) == 0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				break;
		}
	}
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar3 = 0;
		if (iVar2 < uParam0->f_5.f_2[iVar0 /*5*/].f_1)
		{
			if (uParam0->f_5.f_2[iVar0 /*5*/].f_2 == 0)
			{
			}
			else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2) == 0)
			{
			}
			else
			{
				iVar3 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar0 /*5*/].f_2, iVar2);
				bVar4 = true;
				if (iVar3 == joaat("NONE") || iVar3 == 0)
				{
					bVar4 = false;
				}
				func_385(iVar2, iVar1, bVar4, iVar3);
			}
			iVar2++;
		}
	}
}

void func_229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_131)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_5.f_2[iVar1 /*5*/].f_1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(iParam1, uParam0->f_5.f_2[iVar1 /*5*/].f_2, iVar0);
			switch (uParam0->f_5.f_2[iVar1 /*5*/])
			{
				case 159464507:
				case 1410847083:
					func_386(iParam1, &(uParam0->f_5), &uVar2, 0);
					break;
				case -2016692014:
				case 1724675796:
					func_386(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -1720361947:
				case -139224928:
					func_386(iParam1, &(uParam0->f_5), &uVar2, 1);
					break;
				case -641080715:
				case -29447330:
				case 276123595:
					func_386(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_386(iParam1, &(uParam0->f_5), &uVar2, 2);
					break;
			}
			iVar0++;
		}
		iVar1++;
	}
}

bool func_230(int iParam0)
{
	return func_115(iParam0) == joaat("WEAPON");
}

bool func_231(int iParam0)
{
	var uVar0;

	if (func_122() != -1)
	{
		return false;
	}
	if (func_116(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_238(iParam0, &uVar0, 1, 0, 0);
	}
	return func_61(iParam0, 1, 0);
}

void func_232(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_115(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_121(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_267(iVar0))
	{
		if (func_122() == -1)
		{
			func_123(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_98(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_178(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_233(int iParam0, int iParam1)
{
	int iVar0;

	if (func_31(iParam0, 58855631))
	{
		func_387(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> /*40*/ func_234(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_388(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_115(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_272(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_389(bParam1) };
			if (bParam2 && func_390(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_270(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_270(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_271(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_391(bParam1) };
			switch (func_119(iParam0))
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
			if (func_392(iParam0, -1823706425))
			{
				Var0 = { func_272(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_392(iParam0, -1483207246))
			{
				Var0 = { func_272(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_393(Var0, &Var27, bParam1, 0))
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

int func_235(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	if (!func_124(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_394(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_241(bParam3), iParam0);
}

int func_236(int iParam0, bool bParam1)
{
	if (func_128(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_241(bParam1), iParam0, 0);
}

bool func_237()
{
	if (func_122() != -1)
	{
		return false;
	}
	if (!func_108())
	{
		return false;
	}
	if (!func_135(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_135(Global_1835011[2 /*74*/].f_1, 1) && func_135(Global_1347702[120 /*49*/].f_15, 1)) && !func_135(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_135(Global_1835011[37 /*74*/].f_1, 1) && !func_135(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_135(Global_1835011[57 /*74*/].f_1, 1) && !func_135(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_135(Global_1835011[26 /*74*/].f_1, 1) && !func_135(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_135(Global_1835011[62 /*74*/].f_1, 1) && func_135(Global_1835011[63 /*74*/].f_1, 1)) && !func_135(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_135(Global_1835011[75 /*74*/].f_1, 1) && !func_135(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_135(Global_1835011[76 /*74*/].f_1, 1) && !func_135(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_135(Global_1835011[40 /*74*/].f_1, 1) && func_135(Global_1835011[41 /*74*/].f_1, 1)) && !func_135(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_135(Global_1835011[62 /*74*/].f_1, 1) && func_135(Global_1835011[63 /*74*/].f_1, 1)) && !func_135(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_135(Global_1835011[65 /*74*/].f_1, 1) && func_135(Global_1835011[66 /*74*/].f_1, 1)) && !func_135(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_238(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_395(&iParam0);
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (!func_124(0))
	{
		bParam3 = true;
	}
	if (func_230(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_389(0) };
			Var4.f_9 = -1591664384;
			if (!func_270(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_271(iParam0, &Var4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_390(iParam0, 1))
			{
				if (!func_270(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_271(iParam0, &Var4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_396(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_235(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_394(iParam0))
	{
		iVar28 = func_397(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_241(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_31(iParam0, 1399091007))
	{
		func_318(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_240(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_398(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_399(&Var0, func_389(0));
	}
	if (!func_400(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_9(iVar18);
	return iVar19;
}

int func_241(bool bParam0)
{
	if (func_122() == -1)
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

int func_242()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_243(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_244(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_122() != -1)
	{
		return;
	}
	iVar0 = func_401(iParam0);
	fVar1 = func_402(iParam0);
	if ((Global_1347477.f_117 || !func_117(31)) || !func_403(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_404(iVar0) >= 7)
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
	func_405(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_352(MISC::VAR_STRING(6, func_406(iParam0), fVar1), "itemtype_textures", func_407(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_245(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_408(&Global_0, 8);
	}
	if (!func_108() || func_122() != -1)
	{
		return;
	}
	func_408(&Global_0, 1);
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_247(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_409(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_410(iParam0))
	{
		return false;
	}
	if (func_411(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_334(iParam0, 1)) || func_412(32768))
	{
		if (!func_334(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_413())
	{
		return false;
	}
	return true;
}

void func_248(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_249(int iParam0)
{
	int iVar0;

	iVar0 = func_285(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_250(int iParam0)
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

int func_251(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_414(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_252(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_111() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_415(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_416(), 12);
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
			else if (func_300() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_417(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_300(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_418(), 13);
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
			else if (func_301() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_419(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_301(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_251(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_253(int iParam0, int iParam1, int iParam2)
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

bool func_254(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_255(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_256(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_420(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_61(iVar2, 1, 0) || func_422(func_421(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_260(func_420(iVar0))), func_260(func_420(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_300() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_423(iVar0)), func_423(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_417() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_423(iVar0)), func_423(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_423(iVar0)), func_423(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_311(iParam3, func_424(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_307(iVar2) - iParam7) >= func_251(iParam3, func_425(iVar0));
				}
				else
				{
					bVar1 = func_307(iVar2) >= func_251(iParam3, func_425(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_307(iVar2) + iParam7) >= func_251(iParam3, func_425(iVar0));
			}
			else
			{
				bVar1 = func_307(iVar2) >= func_251(iParam3, func_425(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_426(iVar2)), func_426(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_427(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_428(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_428(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_301() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_429(iVar0)), func_429(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_419() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_429(iVar0)), func_429(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_429(iVar0)), func_429(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_311(iParam3, func_424(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_307(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_430(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_430(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_431(iVar2)), func_431(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_257(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_418() >= 13)
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

bool func_258(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_192(func_432(0)) && ((func_433(0) == 1 || func_433(0) == 8) || func_433(0) == 6))
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

var func_259(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_260(int iParam0)
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

var func_261(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_262(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_264(int iParam0)
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

void func_265(int iParam0)
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
			func_434(1);
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
			func_435(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_435(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_435(3);
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
			func_436(1);
			break;
		case 34:
			func_437(1);
			break;
		case 35:
			func_438(1);
			break;
		case 36:
			break;
		case 37:
			func_439(0);
			break;
		case 38:
			func_440(0);
			break;
		case 39:
			func_441(0);
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
			if ((!Global_1879534 && func_108()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_105(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_108()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_105(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_108()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_105(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_108()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_105(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_122() == -1)
			{
				if (!func_344(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_442(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_277())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_61(iVar0, 1, 0))
					{
						func_171(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_150(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_122() == -1)
			{
				if (!func_61(1013902307, 1, 0))
				{
					func_171(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_122() == -1)
			{
				if (!func_61(1013902307, 1, 0))
				{
					func_171(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_61(142640135, 1, 0))
				{
					func_171(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_122() == -1)
			{
				if (!func_61(786809402, 1, 0))
				{
					func_171(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_122() == -1)
			{
				if (!func_61(786809402, 1, 0))
				{
					func_171(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_61(-518019409, 1, 0))
				{
					func_171(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_443();
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

bool func_266(int iParam0)
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

bool func_267(int iParam0)
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

bool func_268(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_269(int iParam0, int iParam1)
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

bool func_270(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_397(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_271(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_444(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_272(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_83(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_241(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_273(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_445(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_393(*uParam1, &Var0, bParam6, 0))
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
	if (!func_124(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_241(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_446(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_275(int iParam0)
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
	iVar2 = func_447();
	func_448(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_449(iParam0))
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

bool func_277()
{
	if (func_122() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_278(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_279(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_280(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_117(50))
			{
				if (!func_117(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_117(51))
			{
				if (!func_117(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_281()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_282(int iParam0, int iParam1, var uParam2)
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

	if (!func_83(iParam1, 0))
	{
		return false;
	}
	if (func_115(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_122() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_119(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_450(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_31(iParam1, 866047851))
	{
		iVar5 = func_320(iVar4, 1);
		if (func_451(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_119(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_31(iParam1, -1638171711))
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
			if (func_452(1868067663, &uVar0))
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
				iVar10 = func_453(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_453(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_119(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_31(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_454(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_283()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_284()
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

int func_285(int iParam0)
{
	if (!func_192(iParam0))
	{
		return -1;
	}
	return func_455(iParam0);
}

int func_286()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_61(func_456(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_287(int iParam0)
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

bool func_288(int iParam0, int iParam1)
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
	if (func_61(iVar0, 1, 0) && func_61(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_289(int iParam0)
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

bool func_290(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_457(iParam0);
	if (iVar0 != -15)
	{
		func_448(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_458(iVar0, 1);
	}
	return false;
}

int func_291(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_61(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_83(iVar25, 0) && func_31(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_292(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_293(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_459())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_352(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_460(iVar0);
			func_461(iVar0, 0, 0);
		}
		func_352(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_133(func_348(joaat("CAREER_CASH")), iVar1);
	}
}

void func_294(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_295(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_296(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_297(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_298(int iParam0)
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
	iVar1 = func_307(iVar9);
	iVar2 = func_307(iVar10);
	iVar3 = func_307(iVar11);
	iVar5 = func_308(iVar9);
	iVar6 = func_308(iVar10);
	iVar7 = func_308(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_307(iVar12);
		iVar8 = func_308(iVar12);
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

void func_299(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_300()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_462(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_301()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_302(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_430(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_430(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_430(iVar0))
		{
			*sParam2++;
		}
		if (func_430(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_430(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_430(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_430(iVar0))
		{
			*sParam2++;
		}
		if (func_430(iVar1))
		{
			*sParam2++;
		}
		if (func_430(iVar0) && func_430(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_430(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_430(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_430(iVar0))
		{
			*sParam2++;
		}
		if (func_430(iVar1))
		{
			*sParam2++;
		}
		if (func_430(iVar2))
		{
			*sParam2++;
		}
		if ((func_430(iVar0) && func_430(iVar1)) && func_430(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_430(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_430(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_430(iVar0))
		{
			*sParam2++;
		}
		if (func_430(iVar1))
		{
			*sParam2++;
		}
		if (func_430(iVar2))
		{
			*sParam2++;
		}
		if (func_430(iVar3))
		{
			*sParam2++;
		}
		if (((func_430(iVar0) && func_430(iVar1)) && func_430(iVar2)) && func_430(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_463(1497516462);
			func_464(2016141805);
			func_464(1010885152);
			func_464(-502324015);
			break;
		case 2016141805:
			func_464(1497516462);
			func_463(2016141805);
			func_464(1010885152);
			func_464(-502324015);
			break;
		case 1010885152:
			func_464(1497516462);
			func_464(2016141805);
			func_463(1010885152);
			func_464(-502324015);
			break;
		case -502324015:
			func_464(1497516462);
			func_464(2016141805);
			func_464(1010885152);
			func_463(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_464(-538889627);
			func_464(-538880323);
			func_464(-1056767524);
			func_463(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_465();
			func_463(iParam0);
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
			func_466();
			func_463(iParam0);
			break;
		case 2019386373:
			func_464(-664252410);
			func_464(2109952320);
			func_463(2019386373);
			break;
		case -664252410:
			func_464(2019386373);
			func_464(2109952320);
			func_463(-664252410);
			break;
		case 2109952320:
			func_464(2019386373);
			func_464(-664252410);
			func_463(2109952320);
			break;
		case -1674179981:
			func_464(-1835851517);
			func_464(-1838352012);
			func_463(-1674179981);
			break;
		case -1835851517:
			func_464(-1674179981);
			func_464(-1838352012);
			func_463(-1835851517);
			break;
		case -1838352012:
			func_464(-1674179981);
			func_464(-1835851517);
			func_463(-1838352012);
			break;
		case -1717960576:
			func_464(210001842);
			func_463(-1717960576);
			break;
		case 210001842:
			func_464(-1717960576);
			func_463(210001842);
			break;
		case -150493654:
			func_464(-1271608261);
			func_464(1846061697);
			func_464(-1145519186);
			func_463(-150493654);
			break;
		case -1271608261:
			func_464(-150493654);
			func_464(1846061697);
			func_464(-1145519186);
			func_463(-1271608261);
			break;
		case 1846061697:
			func_464(-150493654);
			func_464(-1271608261);
			func_464(-1145519186);
			func_463(1846061697);
			break;
		case -1145519186:
			func_464(-150493654);
			func_464(-1271608261);
			func_464(1846061697);
			func_463(-1145519186);
			break;
		case 1766284049:
			func_464(280705402);
			func_464(1926308480);
			func_463(1766284049);
			break;
		case 280705402:
			func_464(1766284049);
			func_464(1926308480);
			func_463(280705402);
			break;
		case 1926308480:
			func_464(1766284049);
			func_464(280705402);
			func_463(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_464(439465264);
				func_463(1609506757);
			}
			else
			{
				func_464(1609506757);
				func_464(439465264);
			}
			break;
		case 439465264:
			if (func_467(1609506757))
			{
				if (bParam1)
				{
					func_463(439465264);
				}
				else
				{
					func_464(439465264);
				}
			}
			break;
		case 1822001510:
			func_464(-1612662716);
			func_463(1822001510);
			Jump @2851; //curOff = 1312
			func_464(1822001510);
			func_463(-1612662716);
			Jump @2851; //curOff = 1333
			func_464(1952610440);
			func_464(-223469678);
			func_464(-404698347);
			func_464(1517904467);
			func_463(1306158345);
			Jump @2851; //curOff = 1381
			func_464(1306158345);
			func_464(-223469678);
			func_464(-404698347);
			func_464(1517904467);
			func_463(1952610440);
			Jump @2851; //curOff = 1429
			func_464(1306158345);
			func_464(1952610440);
			func_464(-404698347);
			func_464(1517904467);
			func_463(-223469678);
			Jump @2851; //curOff = 1477
			func_464(1306158345);
			func_464(1952610440);
			func_464(-223469678);
			func_464(1517904467);
			func_463(-404698347);
			Jump @2851; //curOff = 1525
			func_464(1306158345);
			func_464(1952610440);
			func_464(-223469678);
			func_464(-404698347);
			func_463(1517904467);
			Jump @2851; //curOff = 1573
			func_464(931649776);
			func_464(-434590080);
			func_464(1743048395);
			func_464(449774763);
			func_463(1376646519);
			Jump @2851; //curOff = 1621
			func_464(1376646519);
			func_464(-434590080);
			func_464(1743048395);
			func_464(449774763);
			func_463(931649776);
			Jump @2851; //curOff = 1669
			func_464(1376646519);
			func_464(931649776);
			func_464(1743048395);
			func_464(449774763);
			func_463(-434590080);
			Jump @2851; //curOff = 1717
			func_464(1376646519);
			func_464(931649776);
			func_464(-434590080);
			func_464(449774763);
			func_463(1743048395);
			Jump @2851; //curOff = 1765
			func_464(1376646519);
			func_464(931649776);
			func_464(-434590080);
			func_464(1743048395);
			func_463(449774763);
			Jump @2851; //curOff = 1813
			func_464(38162571);
			func_464(1350391819);
			func_464(54073871);
			func_463(-1414537028);
			Jump @2851; //curOff = 1852
			func_464(-1414537028);
			func_464(1350391819);
			func_464(54073871);
			func_463(38162571);
			Jump @2851; //curOff = 1891
			func_464(-1414537028);
			func_464(38162571);
			func_464(54073871);
			func_463(1350391819);
			Jump @2851; //curOff = 1930
			func_464(-1414537028);
			func_464(38162571);
			func_464(1350391819);
			func_463(54073871);
			Jump @2851; //curOff = 1969
			func_463(198200492);
			func_464(-1124061431);
			func_464(52706132);
			func_464(-259123672);
			Jump @2851; //curOff = 2008
			func_464(198200492);
			func_463(-1124061431);
			func_464(52706132);
			func_464(-259123672);
			Jump @2851; //curOff = 2047
			func_464(198200492);
			func_464(-1124061431);
			func_463(52706132);
			func_464(-259123672);
			Jump @2851; //curOff = 2086
			func_464(198200492);
			func_464(-1124061431);
			func_464(52706132);
			func_463(-259123672);
			Jump @2851; //curOff = 2125
			func_463(-919512195);
			func_464(-1925798111);
			func_464(420709909);
			func_464(1703426636);
			Jump @2851; //curOff = 2164
			func_463(-1925798111);
			func_464(-919512195);
			func_464(420709909);
			func_464(1703426636);
			Jump @2851; //curOff = 2203
			func_463(420709909);
			func_464(-919512195);
			func_464(-1925798111);
			func_464(1703426636);
			Jump @2851; //curOff = 2242
			func_463(1703426636);
			func_464(-919512195);
			func_464(-1925798111);
			func_464(420709909);
			Jump @2851; //curOff = 2281
			func_463(-1223121209);
			func_464(630808005);
			Jump @2851; //curOff = 2302
			func_463(630808005);
			func_464(-1223121209);
			Jump @2851; //curOff = 2323
			func_463(1453909576);
			func_464(1643531967);
			Jump @2851; //curOff = 2344
			func_463(1643531967);
			func_464(1453909576);
			Jump @2851; //curOff = 2365
			func_463(0);
			func_464(473295046);
			func_464(-1738165526);
			Jump @2851; //curOff = 2391
			func_463(473295046);
			func_464(0);
			func_464(-1738165526);
			Jump @2851; //curOff = 2417
			func_463(-1738165526);
			func_464(0);
			func_464(473295046);
			Jump @2851; //curOff = 2443
			func_463(932909855);
			func_464(2051822093);
			Jump @2851; //curOff = 2464
			func_463(2051822093);
			func_464(932909855);
			Jump @2851; //curOff = 2485
			func_463(405586984);
			func_464(1509509592);
			func_464(-959357075);
			func_464(-1311865656);
			Jump @2851; //curOff = 2524
			func_463(1509509592);
			func_464(405586984);
			func_464(-959357075);
			func_464(-1311865656);
			Jump @2851; //curOff = 2563
			func_463(-959357075);
			func_464(1509509592);
			func_464(405586984);
			func_464(-1311865656);
			Jump @2851; //curOff = 2602
			func_463(-1311865656);
			func_464(1509509592);
			func_464(-959357075);
			func_464(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				func_463(-524145696);
			}
			else
			{
				func_464(-524145696);
			}
			func_464(1626481264);
			func_464(282809459);
			Jump @2851; //curOff = 2688
			func_463(282809459);
			func_464(1626481264);
			func_464(-524145696);
			Jump @2851; //curOff = 2718
			func_463(1626481264);
			func_464(-524145696);
			func_464(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				func_463(885203519);
			}
			else
			{
				func_464(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				func_463(-1080627546);
			}
			else
			{
				func_464(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!func_467(iParam0))
				{
					func_463(iParam0);
				}
			}
			else if (func_467(iParam0))
			{
				func_464(iParam0);
			}
		}

void func_304(int iParam0)
{
	if (!func_468(iParam0))
	{
		func_470(func_469(iParam0));
	}
}

int func_305()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_468(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_306(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_307(iVar9);
	iVar2 = func_307(iVar10);
	iVar3 = func_307(iVar11);
	iVar5 = func_308(iVar9);
	iVar6 = func_308(iVar10);
	iVar7 = func_308(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_307(iVar12);
		iVar8 = func_308(iVar12);
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

int func_307(int iParam0)
{
	int iVar0;

	if (func_61(iParam0, 1, 0))
	{
		iVar0 = func_98(iParam0, 0, 0);
	}
	return iVar0;
}

int func_308(int iParam0)
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

int func_309(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_310(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_311(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_414(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_312(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_311(iParam1, 5) || iParam0 == func_311(iParam1, 6)) || iParam0 == func_311(iParam1, 7)) || iParam0 == func_311(iParam1, 8)) || iParam0 == func_311(iParam1, 9))
	{
		func_302(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_112(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_114(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_313(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_311(iParam1, 5) || iParam0 == func_311(iParam1, 6)) || iParam0 == func_311(iParam1, 7)) || iParam0 == func_311(iParam1, 8)) || iParam0 == func_311(iParam1, 9))
	{
		if (func_302(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_112(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_114(51, 0, 0, iVar0, func_251(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_112(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_114(51, 0, 0, iVar0, func_251(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_314()
{
	if (func_249(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_315(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_316(int iParam0)
{
	if (!func_471(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_317(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_318(int iParam0, int iParam1, var uParam2)
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

int func_319(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_472(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_320(int iParam0, int iParam1)
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

bool func_321(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_473();
	if (iParam2 == 39)
	{
		Var0 = { func_234(iParam0, 1, 0) };
		iParam2 = func_320(func_319(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_31(iParam0, 866047851) && func_451(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_324(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_474(func_472(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_475(iParam2);
	func_476(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_477(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_477(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_478(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_479(iParam0, iParam2, iParam1, func_122() != -1);
	if (bParam4)
	{
		func_480(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_480(&(Global_1946054.f_1378), 1, 0);
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
				func_481(func_472(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_322(bool bParam0, bool bParam1, bool bParam2)
{
	func_482(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_323(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_483(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_484(Var0);
}

bool func_324(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_325()
{
	func_485(&(Global_1946054.f_2776));
	func_486(32768);
	func_481(1108822547, 8, 6);
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_320(iParam0, 1);
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

void func_327(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_487(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_488(Var0);
}

void func_328(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_488(Var0);
}

bool func_329(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_241(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_330(var uParam0, int iParam1, int iParam2, int iParam3)
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

float func_331()
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

	if (func_489())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_490(2);
	}
	if (Global_1347477.f_119)
	{
		return func_490(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_491();
	fVar2 = func_492();
	fVar3 = func_493();
	fVar4 = func_494();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_495()));
	fVar7 = (func_490(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_496(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_497(3, fVar9, fVar9 > 100f);
	return func_498(fVar7, -100f, 100f);
}

float func_332()
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

	if (func_489())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_490(1);
	}
	if (Global_1347477.f_119)
	{
		return func_490(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_491();
	fVar2 = func_492();
	fVar3 = func_493();
	fVar4 = func_494();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_495()));
	fVar7 = (func_490(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_496(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_497(2, fVar9, fVar9 > 100f);
	return func_498(fVar7, -100f, 100f);
}

float func_333()
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

	if (func_489())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_490(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_499())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_500())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_490(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_491();
	fVar2 = func_492();
	fVar3 = func_493();
	fVar4 = func_494();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_495()));
	fVar7 = (func_490(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_496(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_497(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_490(0);
	}
	return func_498(fVar7, -100f, 100f);
}

bool func_334(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_335(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_336(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_83(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_238(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_124(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_241(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_337(int iParam0, bool bParam1)
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
				return func_501();
			}
			break;
	}
	return 0;
}

int func_338(int iParam0)
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

bool func_339(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_340(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_339(iParam0))
	{
		return;
	}
	if (func_502(iParam0))
	{
		return;
	}
	if (!func_503(iParam0))
	{
		func_504(iParam0, 1, 0);
	}
	iVar0 = func_505(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_506(iParam0, 512))
		{
			func_323(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_507() && !bParam1) && !func_50(0, 0, 1))
	{
		func_508(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_509(iParam0, 6);
	if (bParam2)
	{
		if (!func_50(0, 0, 1))
		{
			func_245(1, 4);
		}
	}
}

int func_341()
{
	return Global_1946054.f_1;
}

bool func_342(int iParam0, bool bParam1)
{
	return func_337(iParam0, 0) < func_510(iParam0, bParam1);
}

bool func_343(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_119(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_344(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_320(iParam0, 1) /*3*/] != Global_1946054.f_57[func_320(iParam0, 1) /*11*/];
}

void func_345(int iParam0, int iParam1)
{
	if (func_31(iParam1, 130796156))
	{
		func_511(iParam1, 0);
	}
	else if (func_31(iParam1, 930141731))
	{
		func_511(iParam1, 1);
		func_512(iParam0);
	}
}

void func_346(var uParam0, int iParam1)
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

int func_347(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_513(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_514(uParam2, iParam0, Var1);
	return 1;
}

struct<2> /*16*/ func_348(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_349(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_350(int iParam0)
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

int func_351(int iParam0)
{
	var uVar0;

	if (!func_185(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_352(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_515(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_353()
{
	return !Global_1911774;
}

void func_354(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_355(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_356(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_357(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_358(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_516(uParam0->f_9))
		{
			return false;
		}
	}
	if (!func_517(uParam0->f_4))
	{
		return false;
	}
	if (!func_518(uParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_519(uParam0->f_4))
	{
		return false;
	}
	if (func_520(0))
	{
		if (!func_83(uParam0->f_4, 0) || uParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if (Global_1935689.f_9440 == 0 && !func_521())
	{
		func_522(uParam0->f_4);
	}
	return true;
}

bool func_359(int iParam0, int iParam1)
{
	switch (func_69(iParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1935689.f_9439 != 1061777683 || func_69(iParam0, 1224357681) == func_69(iParam1, 1224357681))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_360(var uParam0)
{
	struct<5> /*40*/ sVar0;

	if (func_70(uParam0->f_4))
	{
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &Var0))
		{
			uParam0->f_5.f_2 = Var0.f_4;
		}
	}
}

bool func_361(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_02"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_03"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_04"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_05"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_06"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_07"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_08"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_09"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_10"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_11"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_12"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_13"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_14"):
			return 0;
		case joaat("DOCUMENT_NEWSPAPER_ED_01_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_03_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_04_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_05_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_06_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_07_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_08_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_09_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_10_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_11_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_12_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_13_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_14_NH"):
			return 1;
		case joaat("DOCUMENT_NEWSPAPER_ED_01_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_02_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_03_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_04_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_05_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_06_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_07_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_08_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_09_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_10_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_11_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_12_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_13_SD"):
			return 2;
		case joaat("DOCUMENT_NEWSPAPER_ED_14_SD"):
			return 2;
	}
	return 0;
}

void func_363(int iParam0, int iParam1)
{
	char* sVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	char cVar21[64];

	if (func_361(iParam0))
	{
		sVar0 = func_523(iParam1);
		StringCopy(&cVar1, "", 64);
		StringCopy(&cVar9, "", 64);
		iVar17 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
		uVar18 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar17, "DynamicArticle_01");
		uVar19 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar17, "DynamicArticle_02");
		uVar20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar17, "FishingArticle");
		if (func_524(Global_40.f_9479[iParam0 /*4*/].f_1))
		{
			StringConCat(&cVar1, sVar0, 64);
			StringConCat(&cVar1, func_525(Global_40.f_9479[iParam0 /*4*/].f_1), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar18, "Texture", &cVar1);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar18, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar18, "Visible", 0);
		}
		if (func_524(Global_40.f_9479[iParam0 /*4*/].f_2))
		{
			StringConCat(&cVar9, sVar0, 64);
			StringConCat(&cVar9, func_525(Global_40.f_9479[iParam0 /*4*/].f_2), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar19, "Texture", &cVar9);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar19, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar19, "Visible", 0);
		}
		StringCopy(&cVar21, "", 64);
		if (Global_40.f_9479[iParam0 /*4*/].f_3 != -1)
		{
			StringConCat(&cVar21, sVar0, 64);
			StringConCat(&cVar21, func_526(Global_40.f_9479[iParam0 /*4*/].f_3), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uVar20, "Texture", &cVar21);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar20, "Visible", 1);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar20, "Visible", 0);
		}
	}
}

bool func_364(int iParam0, int iParam1)
{
	if (!func_361(iParam0))
	{
		return false;
	}
	return Global_40.f_9479[iParam0 /*4*/] == iParam1;
}

void func_365(int iParam0, int iParam1)
{
	if (!func_361(iParam0))
	{
		return;
	}
	Global_40.f_9479[iParam0 /*4*/] = iParam1;
}

void func_366(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_527(Global_1347702[iParam0 /*49*/].f_29[iVar1]))
			{
				func_529(&iVar0, func_528(Global_1347702[iParam0 /*49*/].f_29[iVar1]));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_530(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
		else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
		{
			if (func_532(iVar0, Global_1347702[iParam0 /*49*/].f_15, 1, Global_1347702[iParam0 /*49*/].f_27, func_531()))
			{
				func_530(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			}
		}
		else
		{
			func_530(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
	}
}

int func_367(int iParam0)
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

int func_368(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_369(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_370(int iParam0, bool bParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		func_533(&(Global_1347702[iParam0 /*49*/].f_14));
		func_534(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		func_535(iParam0);
		if ((!func_536(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			func_534(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			func_537(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			func_538(iParam0, 16384);
			func_539(iParam0, 1, func_371(iParam0));
		}
	}
}

Vector3 func_371(int iParam0)
{
	vector3 vVar0;

	if (!func_47(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_540(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_372(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_47(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && func_50(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (func_412(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_541(iParam0);
	if (!bParam5 && func_542(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_543(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_544(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	func_545(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_122() == -1)
	{
		func_546(iParam0);
		iVar0 = func_547(Global_40.f_4283);
		if (func_548(iVar0) && func_549(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_550(iVar0);
		}
		if (func_551(iParam0, bVar1, iVar0))
		{
			func_552(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		func_530(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_542(iParam0) || func_188(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_188(Global_1347702[iParam0 /*49*/].f_12, 512)) || func_553(Global_1347702[iParam0 /*49*/].f_13, 2048))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 580546400);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32768 == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -211388321);
		}
		else
		{
			func_530(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_554(iParam0))
		{
			if (iParam0 == 97)
			{
				func_105(185, 0);
			}
			else
			{
				func_105(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_508(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_51(iParam0, 2);
	}
}

bool func_373(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_374(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_375(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_122() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_555(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_376(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_122() != -1)
	{
		return false;
	}
	if (func_555(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_377(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 25;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 5, 7, &uParam1);
	func_556(*uParam0);
}

bool func_378(var uParam0, int iParam1)
{
	*uParam0 = Global_1165157.f_155;
	uParam0->f_2 = 1335336942;
	uParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0);
}

bool func_379(var uParam0)
{
	uParam0->f_2 = 1037679264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0);
}

int func_380(vector3 vParam0, int iParam3, var uParam4, int iParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_381(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_213(iParam0, 1);
	func_214(iParam0, 1);
	func_215(iParam0, 128);
}

void func_382(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
	iVar1 = 0;
	while (iVar1 < 15)
	{
		bVar2 = true;
		if ((*uParam0)[iVar1] == joaat("NONE") || (*uParam0)[iVar1] == 0)
		{
			bVar2 = false;
		}
		func_385(iVar1, iVar0, bVar2, (*uParam0)[iVar1]);
		iVar1++;
	}
}

void func_383(int iParam0)
{
	if (!func_557(iParam0))
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

void func_384(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	vector3 vVar0[24];

	if (iParam1 >= 24)
	{
		return;
	}
	StringCopy(&cVar0, "textField", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	if (bParam4)
	{
		StringConCat(&cVar0, "Strike", 24);
	}
	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", iParam2);
	StringCopy(&cVar0, "divider", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_89[iParam1], "isVisible", iParam3);
}

void func_385(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;

	uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, func_558(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "style", func_559(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar0, "isVisible", bParam2);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", iParam3);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar0, "text", 0);
	}
}

void func_386(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_560(iParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", iParam3);
		*uParam2++;
	}
}

int func_387(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_83(iParam0, 0))
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

struct<4> /*32*/ func_388(bool bParam0)
{
	return func_272(joaat("CHARACTER"), func_561(), -1591664384, bParam0);
}

struct<4> /*32*/ func_389(bool bParam0)
{
	int iVar0;

	iVar0 = func_241(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_272(923904168, func_388(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_272(923904168, func_388(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_272(923904168, func_388(bParam0), -740156546, 0);
}

bool func_390(int iParam0, bool bParam1)
{
	if (func_119(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_117(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_391(bool bParam0)
{
	int iVar0;

	iVar0 = func_241(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_272(271701509, func_388(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_272(271701509, func_388(bParam0), 12999093, 0);
}

bool func_392(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_119(iParam0);
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

bool func_393(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_241(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_394(int iParam0)
{
	if (func_562(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_395(int iParam0)
{
	if (!func_83(*iParam0, 0))
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

bool func_396(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_83(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_234(iParam0, 0, 1) };
	iVar5 = joaat("SLOTID_WEAPON_0");
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_269((398 + iVar29), 1);
		if (func_270(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_271(iParam0, &Var6, iVar5);
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

int func_397(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_272(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_241(bParam6), &Var0, 0);
	return uVar4;
}

struct<18> /*144*/ func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_399(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_400(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_241(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_401(int iParam0)
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

float func_402(int iParam0)
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
			return func_563(iParam0);
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
			return func_563(iParam0);
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
			return func_563(iParam0);
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

bool func_403(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_117(18);
		case 2:
			return func_117(20);
		case 1:
			return func_117(19);
		default:
			break;
	}
	return true;
}

int func_404(int iParam0)
{
	return func_564(Global_40.f_11095.f_11[iParam0]);
}

void func_405(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_122() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_117(31))
	{
		return;
	}
	iVar0 = func_404(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_404(iParam0);
	if (func_565(iParam0) && func_566(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_567(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_568(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_105(func_569(iParam0), 0);
					}
					func_570(iParam0, iVar2, iVar3);
					func_571(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_406(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_407(int iParam0)
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

void func_408(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_409(int iParam0, int iParam1)
{
	if (func_122() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_410(int iParam0)
{
	if (func_122() != -1)
	{
		if (func_334(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_334(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_411(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_334(iParam0, 65536) && !func_334(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_334(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_334(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_412(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_413()
{
	return Global_1905944.f_5694;
}

bool func_414(int iParam0, var uParam1)
{
	if (!func_572(iParam0))
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

int func_415()
{
	return func_573(Global_40.f_12019);
}

int func_416()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_250(iVar1);
		if (func_61(iVar2, 1, 0) || func_422(func_421(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_417()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_574(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_418()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_427(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_419()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_420(int iParam0)
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

int func_421(int iParam0)
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

bool func_422(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_423(int iParam0)
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

int func_424(int iParam0)
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

int func_425(int iParam0)
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

char* func_426(int iParam0)
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

bool func_427(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_428(int iParam0)
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

char* func_429(int iParam0)
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

bool func_430(int iParam0)
{
	if (func_575(iParam0) && func_61(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_576(iParam0) && func_577(iParam0))
	{
		return true;
	}
	return false;
}

char* func_431(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_165(iParam0));
}

int func_432(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_433(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_434(bool bParam0)
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

void func_435(int iParam0)
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

void func_436(bool bParam0)
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

void func_437(bool bParam0)
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

void func_438(bool bParam0)
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

void func_439(bool bParam0)
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

void func_440(bool bParam0)
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

void func_441(bool bParam0)
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

int func_442(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_320(iParam0, 1) /*3*/];
}

void func_443()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_578();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_123(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_171(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_123(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_171(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_444(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_241(0);
	*uParam1 = { func_272(iParam0, func_389(0), iParam3, 0) };
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

bool func_445(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_446(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_447()
{
	return Global_1899515;
}

void func_448(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_579(*iParam0);
	iVar1 = func_580(*iParam0);
	iVar2 = func_581(*iParam0);
	iVar3 = func_582(*iParam0);
	iVar4 = func_583(*iParam0);
	iVar5 = func_584(*iParam0);
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
	iVar6 = func_585(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_585(iVar1, iVar0);
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
	func_586(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_449(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_450(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_234(iParam0, 1, 0) };
	return func_319(Var0.f_4);
}

int func_451(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_452(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_320(func_587(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_119(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_453(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_320(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_324(524288))
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

bool func_454(int iParam0)
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

int func_455(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_588(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_456(int iParam0)
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

int func_457(int iParam0)
{
	return func_589(iParam0, -1);
}

bool func_458(int iParam0, bool bParam1)
{
	return func_590(func_447(), iParam0, bParam1);
}

bool func_459()
{
	if (func_281())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_460(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_591((Global_40.f_4283.f_325 + iParam0));
}

void func_461(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_459())
	{
		func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_462(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_592(iParam0, 1);
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

void func_464(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_592(iParam0, 1);
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

void func_465()
{
	func_464(-939420910);
	func_464(-1187950766);
	func_464(356365161);
	func_464(753127042);
	func_464(-2038424081);
	func_464(1884271742);
	func_464(459290420);
}

void func_466()
{
	func_464(704802028);
	func_464(588987611);
	func_464(2008888900);
	func_464(1649996811);
	func_464(227918160);
	func_464(168171957);
	func_464(1193080109);
	func_464(-491981251);
	func_464(-639037538);
	func_464(-618620429);
}

bool func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_592(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_468(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_469(int iParam0)
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

void func_470(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_471(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_472(int iParam0, int iParam1)
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

void func_473()
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

void func_474(int iParam0)
{
	func_481(iParam0, 8, 6);
}

void func_475(int iParam0)
{
	func_593(&(Global_1946054.f_2589), iParam0);
}

void func_476(int iParam0, int iParam1)
{
	func_594(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_477(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_478(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_119(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_595(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_476(iVar1, iVar3);
		}
	}
	if (func_344(-1586649372) && func_595(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_476(iVar1, iVar3);
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
						func_476(iVar1, iVar3);
					}
				}
			}
			func_596(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_596(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_476(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_596(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_476(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_476(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_596(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_596(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_476(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_596(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_476(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_476(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_119(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_476(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_454(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_119(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_476(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_31(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_476(iVar1, iVar3);
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
						func_476(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_454(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_31(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_476(iVar1, iVar3);
					}
				}
			}
			switch (func_119(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_119(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_476(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_119(uParam0->f_1[iVar1 /*3*/]) || func_31(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_476(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_479(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_597(0);
	if (iParam2 != 0 && func_598(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_599(iParam0, func_472(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_480(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_122() != -1;
	iVar7 = func_597(0);
	if (func_324(32768))
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
			iVar5 = func_472(iVar0, 1);
			if (func_600(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_600(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_453(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_601(uParam0);
				if (iVar3 > 0)
				{
					if (!func_324(524288))
					{
						func_483(524288);
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
							iVar5 = func_472(iVar0, 1);
							if (func_600(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_600(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_453(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_476(iVar0, iParam2);
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
					func_486(524288);
				}
			}
		}
	}
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_482(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_602(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_122() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_603(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_505(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_505(Global_40.f_7729);
				Global_1946054.f_1378 = func_505(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_604(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_605(0, 1);
	}
}

void func_483(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_484(struct<4> /*32*/ sParam0)
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
			if (func_606(Param0))
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
			func_607(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_483(8);
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
			if (func_606(Param0))
			{
				return;
			}
			func_607(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_483(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_328(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_485(var uParam0)
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

void func_486(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_487(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_488(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_606(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_606(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_607(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_483(8);
}

bool func_489()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_490(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_491()
{
	float fVar0;
	int iVar1;

	fVar0 = func_608(13);
	iVar1 = func_609(fVar0);
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

float func_492()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_493()
{
	if (func_281())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_494()
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

float func_495()
{
	return Global_1954815.f_3;
}

void func_496(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_610(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_497(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_610(iParam0, 2, 0, 0);
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

float func_498(float fParam0, float fParam1, float fParam2)
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

bool func_499()
{
	return func_608(12) <= -99f;
}

bool func_500()
{
	return func_608(12) >= 99f;
}

int func_501()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_119(iVar1) == -999503751)
		{
			if (func_611() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_502(int iParam0)
{
	if (!func_339(iParam0))
	{
		return false;
	}
	if (func_506(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_503(int iParam0)
{
	if (!func_339(iParam0))
	{
		return false;
	}
	if (func_506(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_504(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_339(iParam0))
	{
		return;
	}
	if (!func_503(iParam0))
	{
		func_509(iParam0, 2);
		if (bParam2)
		{
			if (!func_50(0, 0, 1))
			{
				func_245(1, 4);
			}
		}
		if ((!func_507() && !bParam1) && !func_50(0, 0, 1))
		{
			func_508(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_612(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_505(int iParam0)
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

bool func_506(int iParam0, int iParam1)
{
	if (!func_339(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_507()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

var func_508(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_509(int iParam0, int iParam1)
{
	if (!func_339(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_510(int iParam0, bool bParam1)
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

void func_511(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_613(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_118(50);
			}
			else
			{
				func_118(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_118(51);
			}
			else
			{
				func_118(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_614(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_152();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_152();
			}
			break;
		case 3:
			func_118(24);
			if (bParam1)
			{
				if (!func_614(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_152();
				}
			}
			break;
	}
}

void func_512(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_615(0))
			{
				iVar0++;
			}
			if (func_615(2))
			{
				iVar0++;
			}
			if (func_615(4))
			{
				iVar0++;
			}
			if (!func_616(16))
			{
				if (iVar0 == 1)
				{
					func_617();
					func_105(456, 1);
					func_618(16);
				}
			}
			if (!func_616(32))
			{
				if (iVar0 >= 3)
				{
					func_617();
					func_105(456, 1);
					func_618(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_615(1))
			{
				iVar0++;
			}
			if (func_615(3))
			{
				iVar0++;
			}
			if (func_615(7))
			{
				iVar0++;
			}
			if (!func_616(1))
			{
				if (iVar0 == 1)
				{
					func_619();
					func_105(457, 1);
					func_618(1);
				}
			}
			if (!func_616(2))
			{
				if (iVar0 >= 3)
				{
					func_619();
					func_105(457, 1);
					func_618(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_615(5))
			{
				iVar0++;
			}
			if (func_615(6))
			{
				iVar0++;
			}
			if (func_615(8))
			{
				iVar0++;
			}
			if (!func_616(4))
			{
				if (iVar0 == 1)
				{
					func_620();
					func_105(455, 1);
					func_618(4);
				}
			}
			if (!func_616(8))
			{
				if (iVar0 >= 3)
				{
					func_620();
					func_105(455, 1);
					func_618(8);
				}
			}
			break;
	}
}

void func_513(var uParam0)
{
	func_346(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_346(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_346(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_514(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_621(uParam0))
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

void func_515(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_516(int iParam0)
{
	switch (iParam0)
	{
		case -1162387149:
		case 1084182731:
			return true;
	}
	return false;
}

bool func_517(int iParam0)
{
	int iVar0;

	iVar0 = func_115(iParam0);
	if ((iVar0 == joaat("WEAPON") && iParam0 != joaat("WEAPON_KIT_BINOCULARS")) && iParam0 != joaat("WEAPON_KIT_CAMERA"))
	{
		return false;
	}
	if (iVar0 == joaat("MONEY") && iParam0 != joaat("MONEY_LOANSHARK_GWEN_DEBT"))
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_119(iParam0))
			{
				case -525676072:
					if (iParam0 == joaat("KIT_MASK_GREY_CLOTH"))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				default:
					return false;
			}
			break;
	}
	if (func_119(iParam0) == -829303394)
	{
		return false;
	}
	return true;
}

bool func_518(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (((iParam1 == 0 || iParam1 == -2074770370) || bParam2) || func_520(0))
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_83(iParam0, 0) || iParam0 == joaat("CUSTOM_SATCHEL")) || iParam0 == joaat("KIT_WARDROBE"))
		{
			return false;
		}
	}
	if (!bVar0 && func_622(iParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -283002878:
		case 0:
			if (!func_520(0))
			{
				if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
				{
					return true;
				}
				if ((((((((((func_518(iParam0, -1559802791, 1) || func_518(iParam0, -1268291907, 1)) || func_518(iParam0, -96974025, 1)) || func_518(iParam0, -1666604090, 1)) || func_518(iParam0, 1561961676, 1)) || func_518(iParam0, -156634416, 1)) || func_518(iParam0, 1061777683, 1)) || func_518(iParam0, -2074770370, 1)) || func_518(iParam0, -693134279, 1)) || func_518(iParam0, -182626652, 1)) || func_623(iParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_31(iParam0, 1422457563);
		case -1268291907:
			return func_31(iParam0, 1360707454);
		case -96974025:
			return func_31(iParam0, 1009210113);
		case -1666604090:
			return func_31(iParam0, -193035453);
		case 1561961676:
			return func_31(iParam0, -111938901);
		case -156634416:
			return func_31(iParam0, -928967997);
		case 1061777683:
			return func_31(iParam0, 747873593);
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
			{
				return func_624(iParam0, iParam1);
			}
			else if (func_69(iParam0, -949239683) == -1337515701 && iParam0 != joaat("KIT_PLAYER_POCKETWATCH"))
			{
				return true;
			}
			else
			{
				return func_31(iParam0, -111938901);
			}
			break;
		case -693134279:
			return func_116(iParam0, 8388608);
		case -182626652:
			if (func_625(iParam0, Global_1914319.f_16855.f_1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_519(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_520(0) && Global_1914319.f_16855 == 2)
	{
		if (!func_626(iParam0))
		{
			return false;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}
	if (func_122() == 0)
	{
		if (func_31(iParam0, -805003139))
		{
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
			{
				return false;
			}
		}
	}
	if (func_115(iParam0) == joaat("UPGRADE") && !(func_31(iParam0, -1540973036) || func_31(iParam0, 1192444843)))
	{
		return false;
	}
	return true;
}

bool func_520(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_521()
{
	return Global_1935689.f_10;
}

void func_522(var uParam0)
{
	Global_1935689.f_9440 = uParam0;
}

char* func_523(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BL_";
		case 1:
			return "NH_";
		case 2:
			return "SD_";
	}
	return "";
}

bool func_524(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 34);
}

char* func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "D_CACR01";
		case 1:
			return "D_CACR02";
		case 2:
			return "D_CACR03";
		case 3:
			return "D_CACR04";
		case 4:
			return "D_STAGE4";
		case 5:
			return "D_CRN1";
		case 6:
			return "D_DST5";
		case 7:
			return "D_MUD5_1";
		case 8:
			return "D_MUD5_2";
		case 9:
			return "D_BNTYSNK";
		case 10:
			return "D_PRNBG";
		case 11:
			return "D_RBRAN";
		case 12:
			return "D_RBT05";
		case 13:
			return "D_RBT15";
		case 14:
			return "D_RBT18A";
		case 15:
			return "D_RBT18B";
		case 17:
			return "D_RBT23A";
		case 16:
			return "D_RBT23B";
		case 19:
			return "D_RBT23C";
		case 18:
			return "D_RBT23D";
		case 21:
			return "D_RCAL13";
		case 20:
			return "D_RCDIN2";
		case 22:
			return "D_RCLDN1";
		case 23:
			return "D_RFMA3";
		case 24:
			return "D_RFMA4";
		case 25:
			return "D_RHNTN6";
		case 26:
			return "D_RKTTY5";
		case 27:
			return "D_RMASN5";
		case 28:
			return "D_RMAYR3A";
		case 29:
			return "D_RMAYR3B";
		case 30:
			return "D_RNATV1";
		case 31:
			return "D_RRTL7";
		case 32:
			return "D_RSKLR";
		case 33:
			return "D_UTP2";
	}
	return "";
}

char* func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_BLUEGILL";
		case 1:
			return "FISHING_BULLHEAD_CATFISH";
		case 2:
			return "FISHING_CHAIN_PICKEREL";
		case 3:
			return "FISHING_CHANNEL_CATFISH";
		case 4:
			return "FISHING_LAKE_STURGEON";
		case 5:
			return "FISHING_LARGEMOUTH_BASS";
		case 6:
			return "FISHING_LONGNOSE_GAR";
		case 7:
			return "FISHING_MUSKIE";
		case 8:
			return "FISHING_NORTHERN_PIKE";
		case 9:
			return "FISHING_PERCH";
		case 10:
			return "FISHING_REDFIN_PICKEREL";
		case 11:
			return "FISHING_ROCK_BASS";
		case 12:
			return "FISHING_SOCKEYE_SALMON";
		case 13:
			return "FISHING_STEELHEAD_TROUT";
		case 14:
			return "FISHING_STRANGE_DISAPPEARANCE";
	}
	return "";
}

bool func_527(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_528(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_529(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_530(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_531()
{
	return Global_40.f_4283.f_1;
}

bool func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_122() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_50(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_627(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_628(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_629(iVar0, 512, 1);
			}
			else
			{
				func_630(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

void func_533(var uParam0)
{
	*uParam0 = 0;
}

void func_534(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_535(int iParam0)
{
	if (func_631(179) || func_631(180))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			if (Global_1347702[iParam0 /*49*/].f_37 == Global_1905944.f_5698)
			{
				func_632(1);
			}
		}
	}
	if (func_633(179))
	{
		func_634(179);
	}
	if (func_633(180))
	{
		func_634(180);
	}
}

bool func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_635(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (LAW::_0x0BB6DE7D23C60626(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

void func_537(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_538(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	func_636(&(Global_1347702[iParam0 /*49*/].f_14), iParam1);
	func_636(&(Global_1347702[iParam0 /*49*/].f_14), 2);
	func_637(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
	func_534(&(Global_1347702[iParam0 /*49*/].f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_47(Global_40.f_450[iVar0]))
			{
				if (Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_539(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & 4096 != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_535(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_372(iParam0, func_543(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_372(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_372(iParam0, vParam2, 0, 0);
	}
	MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	func_530(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

bool func_540(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_200(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return true;
		}
	}
	return false;
}

int func_541(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_47(iParam0))
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

bool func_542(int iParam0)
{
	if (func_122() != -1)
	{
		return false;
	}
	if (!func_47(iParam0))
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		return true;
	}
	return false;
}

Vector3 func_543(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1794.04f, -1314.792f, 43.0923f;
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
		case 33:
			return 905.92f, -421.19f, 88.23f;
		case 36:
			return -2476.07f, 832.13f, 141.25f;
		case 38:
			return -329.32f, -366.6f, 87f;
		case 39:
			return 97.4f, -212.47f, 111.6f;
		case 43:
			return 2586.494f, -1009.154f, 43.24f;
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
		case 51:
			return -1709.38f, -335.07f, 176.95f;
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
		case 65:
			return -2095.11f, 656.32f, 119.87f;
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
		case 78:
			return 2734.359f, -1207.682f, 48.6752f;
		case 80:
			return 2740.808f, -1312.805f, 46.648f;
		case 81:
			return 2503.755f, -1164.531f, 48.1928f;
		case 84:
			return -73.18f, -392.3f, 70.84f;
		case 88:
			return 2480.53f, -399.62f, 41.42f;
		case 89:
			return 1576.261f, -251.85f, 79.21f;
		case 91:
			return 1496.348f, -1083.286f, 54.1105f;
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
		case 94:
			return 1414.4f, 248.2f, 88.85f;
		case 101:
			return -1378.656f, -735.3399f, 90.8243f;
		case 102:
			return -1666.59f, 610.82f, 124.03f;
		case 103:
			return 1356.44f, 533.95f, 86.12f;
		case 104:
			return 2407f, -585.32f, 40.66f;
		case 105:
			return -219.25f, 212.93f, 94.15f;
		case 116:
			return 211.99f, 512.98f, 126.54f;
		case 117:
			return -329.2f, 797.9f, 116.89f;
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
		case 119:
			return -1043.989f, 434.5095f, 53.6802f;
		case 121:
			return 2520.88f, 421.94f, 65.91f;
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
		case 133:
			return 2688.427f, -1121.766f, 49.6782f;
		case 135:
			return -576.08f, 524.9f, 97.86f;
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
		case 143:
			return 2954.45f, 523.05f, 44.47f;
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
		case 151:
			return 556.271f, 172.08f, 133.3435f;
		case 152:
			return 556.271f, 172.08f, 133.3435f;
		case 146:
			return -585.6761f, -347.216f, 81.28532f;
		default:
			break;
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_544(int iParam0)
{
	switch (func_122())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 || iParam0);
			break;
	}
}

void func_545(int iParam0)
{
	if (!func_542(iParam0))
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
				}
				func_530(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
			}
			func_534(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

void func_546(int iParam0)
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

int func_547(int iParam0)
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

bool func_548(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_549(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_550(int iParam0)
{
	if (!func_638(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_639(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_640(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_640(iParam0), false) <= func_641();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_641();
	}
	return func_642();
}

bool func_551(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_552(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_192(iParam0))
	{
		return;
	}
	switch (func_643(iParam0))
	{
		case 1:
			iVar0 = func_191(iParam0);
			if (func_644(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_645(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_645(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
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
				if (!func_646(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (func_647(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_191(iParam0);
			if (func_648(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_541(iVar1))
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
				iVar2 = func_541(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_546(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_553(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_554(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_555(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_83(iParam0, 0))
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

void func_556(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

bool func_557(int iParam0)
{
	return func_216(iParam0, 2);
}

char* func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ArticleHeading";
		case 1:
			return "ArticleSubHeading1";
		case 2:
			return "ArticleSubHeading2";
		case 3:
			return "ArticleSubHeading3";
		case 4:
			return "ArticleSubHeading4";
		case 5:
			return "ArticleBody1";
		case 6:
			return "ArticleBody2";
		case 7:
			return "ArticleBody3";
		case 8:
			return "ArticleBody4";
		case 9:
			return "ArticleBody5";
		case 10:
			return "ArticleBody6";
		case 11:
			return "ArticleBody7";
		case 12:
			return "ArticleBody8";
		case 13:
			return "ArticleBody9";
		case 14:
			return "ArticleBody10";
		default:
			break;
	}
	return "";
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 3;
		case 3:
			return 3;
		case 4:
			return 3;
		default:
			break;
	}
	return 4;
}

char* func_560(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
		case 1:
			return "textField1";
		case 2:
			return "textField2";
		case 3:
			return "textField3";
		case 4:
			return "textField4";
		case 5:
			return "textField5";
		case 6:
			return "textField6";
		case 7:
			return "textField7";
	}
	return "";
}

struct<4> /*32*/ func_561()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_562(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_563(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_401(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_564(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_649(iVar6) - func_649(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_564(float fParam0)
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

int func_565(int iParam0)
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

int func_566(int iParam0)
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

int func_567(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_564(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_649(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_649(iVar0 + 1));
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

int func_568(int iParam0)
{
	int iVar0;

	if (func_650(iParam0, &iVar0))
	{
		return func_649(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_651())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_651())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_651())
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

int func_569(int iParam0)
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

void func_570(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_652(iParam0));
	sVar4 = func_654(func_653(iVar3, iParam2));
	sVar6 = func_655(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_656(iParam0));
	iVar8 = func_657(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_658(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_259(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_659(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_571(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_572(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_573(int iParam0)
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

bool func_574(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_575(int iParam0)
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

int func_576(int iParam0)
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

int func_577(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_660(&iVar0, 0, iVar95, &Var1) && !func_660(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_661(iVar0, &Var1);
			if (func_83(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_578()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_662(Global_35, &iVar0);
	Var30 = { func_388(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_663(0);
	func_664(7);
	func_665(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_341() == 1160113249)
	{
		func_665(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_665(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_666(Global_35, &iVar0);
}

int func_579(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_667(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_580(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_581(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_582(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_583(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_584(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_585(int iParam0, int iParam1)
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

void func_586(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_668(iParam0, iParam6);
	func_669(iParam0, iParam5);
	func_670(iParam0, iParam4);
	func_671(iParam0, iParam3);
	func_672(iParam0, iParam2);
	func_673(iParam0, iParam1);
}

int func_587(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_319(iVar0);
}

int func_588(int iParam0)
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

int func_589(int iParam0, int iParam1)
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
		iParam1 = func_241(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_668(&uVar6, iVar0);
	func_669(&uVar6, iVar1);
	func_670(&uVar6, iVar2);
	func_671(&uVar6, iVar3);
	func_672(&uVar6, iVar4);
	func_673(&uVar6, iVar5);
	return uVar6;
}

bool func_590(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_674(iParam1) || !func_674(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_591(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_348(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_592(int iParam0, int iParam1)
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

void func_593(var uParam0, int iParam1)
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
			if ((func_675(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_675(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_676(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_594(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_677(uParam0, 1))
	{
		func_678(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_595(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_596(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_476(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_476(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_476(iVar2, iVar0);
		}
	}
}

int func_597(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_341();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_598(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_599(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_600(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_601(var uParam0)
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

void func_602(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_122() == -1)
	{
		func_679(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_680(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_603(int iParam0, int iParam1)
{
	if (func_122() == -1)
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

void func_604(int iParam0, bool bParam1, int iParam2)
{
	func_681(&(Global_1946054.f_1378), iParam0);
	func_682(2, iParam0, 6);
	if (bParam1)
	{
		func_605(0, 1);
	}
}

void func_605(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_683(0);
	}
	if (bParam0)
	{
		func_483(8);
		func_483(512);
	}
	else
	{
		func_483(8);
		func_483(16);
	}
}

bool func_606(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_607(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_608(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_609(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_610(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_355(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_355(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_611()
{
	return Global_1946054.f_1497;
}

char* func_612(int iParam0)
{
	int iVar0;

	iVar0 = func_505(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_431(iVar0);
}

int func_613(int iParam0)
{
	int iVar0;

	if (func_684(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_685(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_686(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_687(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_614(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_61(func_688(iVar0, iParam0), 1, 0))
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

bool func_615(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_61(func_689(iVar0, iParam0), 1, 0))
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

bool func_616(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_617()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_171(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_404(1);
	func_570(1, iVar0, 0);
}

void func_618(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_619()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_171(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_404(2);
	func_570(2, iVar0, 0);
}

void func_620()
{
	int iVar0;

	if (func_122() != -1)
	{
		return;
	}
	func_171(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_404(0);
	func_570(0, iVar0, 0);
}

bool func_621(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_622(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1935689.f_19.f_1)
	{
		if (func_690(iParam0, Global_1935689.f_19.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_623(int iParam0)
{
	if (func_31(iParam0, -839724752))
	{
		return func_31(iParam0, 1937586541);
	}
	return false;
}

int func_624(int iParam0, int iParam1)
{
	if (func_31(iParam0, 173360570))
	{
		return 0;
	}
	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
			{
				if ((func_31(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2074770370)
			{
				if ((((((((func_31(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL")) || func_31(iParam0, -839724752)) || func_31(iParam0, -136654233)) || func_31(iParam0, 554195525)) || func_31(iParam0, -1238310989)) || func_31(iParam0, 2127114599)) || func_31(iParam0, -1864584831)) || func_31(iParam0, 1068498601)) || func_31(iParam0, 1967571132))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_625(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_691(iParam0);
	}
	if (func_692(iParam0, iParam1))
	{
		return false;
	}
	return func_693(iParam0, iParam1);
}

bool func_626(int iParam0)
{
	int iVar0;

	if (iParam0 != 0)
	{
		if (func_116(iParam0, 8388608))
		{
			iVar0 = func_311(func_694(iParam0), 10);
			if (iVar0 != 0 && func_61(iVar0, 1, 0))
			{
				Global_1901328.f_94 = 1;
				return func_695(func_694(iParam0), iParam0);
			}
			else if (iParam0 == func_311(func_696(iParam0), 5))
			{
				if (!func_48(39))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == func_311(func_697(iParam0), 5))
			{
				if (!func_48(49))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (func_698(iParam0))
			{
				if (!func_48(41))
				{
					return false;
				}
				else
				{
					return func_700(func_699(iParam0), 5, 0);
				}
			}
			else if (func_701(iParam0))
			{
				if (func_61(joaat("DOCUMENT_RARE_ORCHID_ORDER_1"), 1, 0))
				{
					if (!func_48(48))
					{
						return false;
					}
					else
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			else if (func_702(iParam0))
			{
				if (!func_48(38))
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iParam0 == joaat("DOCUMENT_RARE_ORCHID_ORDER_1"))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_627(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_628(iVar0, &iParam0))
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

bool func_628(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_527(iParam0))
	{
		return false;
	}
	iVar0 = func_528(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_629(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

void func_630(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_527(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

bool func_631(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_632(int iParam0)
{
	func_703(1);
}

bool func_633(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_246(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_634(int iParam0)
{
	int iVar0;
	int iVar1;

	func_246(iParam0, &iVar0, &iVar1);
	func_704(iVar0, iVar1);
}

bool func_635(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_705(bParam1, bParam2, bParam3);
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

void func_636(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_637(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_638(int iParam0)
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

bool func_639(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_640(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_641()
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

bool func_642()
{
	return Global_1894899 & 2 != 0;
}

int func_643(int iParam0)
{
	if (!func_192(iParam0))
	{
		return 0;
	}
	return func_706(func_367(iParam0));
}

bool func_644(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_707(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_645(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_708(iParam0))
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

int func_646(int iParam0)
{
	return func_709(iParam0);
}

bool func_647(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_648(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_551(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_649(int iParam0)
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

bool func_650(int iParam0, int iParam1)
{
	return false;
}

bool func_651()
{
	return false;
}

int func_652(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_241(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_241(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_241(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> /*32*/ func_653(int iParam0, int iParam1)
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

char* func_654(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_655(int iParam0)
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

char* func_656(int iParam0)
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

int func_657(int iParam0)
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

int func_658(int iParam0)
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

int func_659(int iParam0)
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

bool func_660(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_710(iParam1) && !func_711(iParam1))
	{
		bVar0 = func_712(iParam1);
	}
	else
	{
		return false;
	}
	func_713(uParam3);
	iVar5 = func_714(iParam2);
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

void func_661(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_715(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_716(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_662(int iParam0, int* iParam1)
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
		if (func_268(iVar31))
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

void func_663(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_83(iVar1, 0))
		{
			func_717(iVar1, 0, bParam0);
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

void func_664(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_122() == -1)
	{
		func_718(352481484);
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
		if (func_119(iVar2) != -999503751)
		{
			func_719(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_720(iVar2, 0))
		{
			func_721(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_665(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_722(iParam0))
	{
		return;
	}
	iVar0 = func_119(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_723(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_724(0))
	{
		func_725(iParam0, 1);
		if (func_341() == 1160113249)
		{
			func_725(func_724(-2125499975), 0);
		}
		else
		{
			func_725(func_724(1160113249), 0);
		}
	}
	func_726();
	if (func_727(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_241(0), iParam0, 0);
	}
	func_721(iParam0, bParam3);
	if (bParam2)
	{
		func_605(0, 0);
	}
}

void func_666(int iParam0, int iParam1)
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
				if (func_267((*iParam1)[iVar0]))
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

int func_667(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_668(int iParam0, int iParam1)
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

void func_669(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_670(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_580(*iParam0);
	iVar1 = func_579(*iParam0);
	if (iParam1 < 1 || iParam1 > func_585(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_671(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_672(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_673(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_674(int iParam0)
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
	iVar0 = func_584(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_583(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_582(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_579(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_580(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_581(iParam0);
	if (iVar5 < 1 || iVar5 > func_585(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_675(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_676(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_677(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_678(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_679(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_680(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_681(var uParam0, int iParam1)
{
	int iVar0;

	if (func_122() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_679(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_680(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_682(int iParam0, int iParam1, int iParam2)
{
	if (func_122() == -1)
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

void func_683(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_684(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_685(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_686(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_687(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (func_31(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_688(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_728(iParam0);
		case 1:
			return func_729(iParam0);
		case 2:
			return func_730(iParam0);
		case 3:
			return func_731(iParam0);
	}
	return 0;
}

int func_689(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_732(iParam0);
		case 1:
			return func_733(iParam0);
		case 2:
			return func_734(iParam0);
		case 3:
			return func_735(iParam0);
		case 4:
			return func_736(iParam0);
		case 5:
			return func_737(iParam0);
		case 6:
			return func_738(iParam0);
		case 7:
			return func_739(iParam0);
		case 8:
			return func_740(iParam0);
	}
	return 0;
}

bool func_690(int iParam0, int iParam1)
{
	return iParam1 == func_69(iParam0, 1224357681);
}

int func_691(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_692(int iParam0, int iParam1)
{
	if (func_122() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_31(iParam0, 1490540191))
			{
				return true;
			}
		}
	}
	return false;
}

int func_693(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_741(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_414(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -815325344;
	Var0.f_3 = func_742(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		iVar6 = iParam0;
		Var0.f_2 = 549615901;
		Var0.f_3 = iVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			return joaat("TAXIDERMY_ORDER_01");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			return joaat("TAXIDERMY_ORDER_02");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			return joaat("TAXIDERMY_ORDER_03");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			return joaat("TAXIDERMY_ORDER_04");
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			return joaat("TAXIDERMY_ORDER_05");
		default:
			break;
	}
	return 0;
}

bool func_695(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_251(iParam0, 20);
	if (iVar0 == 5)
	{
		if ((((func_700(iParam0, 5, 0) && func_700(iParam0, 6, 0)) && func_700(iParam0, 7, 0)) && func_700(iParam0, 8, 0)) && func_700(iParam0, 9, 0))
		{
			return func_116(iParam1, 8388608);
		}
	}
	else if (iVar0 == 4)
	{
		if (((func_700(iParam0, 5, 0) && func_700(iParam0, 6, 0)) && func_700(iParam0, 7, 0)) && func_700(iParam0, 8, 0))
		{
			return func_116(iParam1, 8388608);
		}
	}
	else if (iVar0 == 3)
	{
		if ((func_700(iParam0, 5, 0) && func_700(iParam0, 6, 0)) && func_700(iParam0, 7, 0))
		{
			return func_116(iParam1, 8388608);
		}
	}
	else if (iVar0 == 2)
	{
		if (func_700(iParam0, 5, 0) && func_700(iParam0, 6, 0))
		{
			return func_116(iParam1, 8388608);
		}
	}
	return false;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			return joaat("BONE_00");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			return joaat("BONE_01");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			return joaat("BONE_02");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			return joaat("BONE_03");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			return joaat("BONE_04");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			return joaat("BONE_05");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			return joaat("BONE_06");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			return joaat("BONE_07");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			return joaat("BONE_08");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			return joaat("BONE_09");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			return joaat("BONE_10");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			return joaat("BONE_11");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			return joaat("BONE_12");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			return joaat("BONE_13");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			return joaat("BONE_14");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			return joaat("BONE_15");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			return joaat("BONE_16");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			return joaat("BONE_17");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			return joaat("BONE_18");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			return joaat("BONE_19");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			return joaat("BONE_20");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			return joaat("BONE_21");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			return joaat("BONE_22");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			return joaat("BONE_23");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			return joaat("BONE_24");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			return joaat("BONE_25");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			return joaat("BONE_26");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			return joaat("BONE_27");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			return joaat("BONE_28");
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			return joaat("BONE_29");
		default:
			break;
	}
	return 0;
}

int func_697(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			return joaat("ROCK_00_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			return joaat("ROCK_01_GRZ");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			return joaat("ROCK_02_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			return joaat("ROCK_03_CML");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			return joaat("ROCK_04_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			return joaat("ROCK_05_BGV");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			return joaat("ROCK_06_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			return joaat("ROCK_07_HRT");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			return joaat("ROCK_08_ROA");
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			return joaat("ROCK_09_ROA");
		default:
			break;
	}
	return 0;
}

bool func_698(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return true;
	}
	return false;
}

int func_699(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISH_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISH_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISH_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_13");
		default:
			break;
	}
	return 0;
}

int func_700(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_311(iParam0, iParam1);
	if ((((((((((((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT")) || iVar0 == joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_PERCH_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"))
	{
		if (func_61(iVar0, 1, 0))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_743(iVar0, 1, 0, -142743235, 0);
			}
			return 1;
		}
	}
	else if ((((((((((iVar0 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT")) || iVar0 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT")) || iVar0 == joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_MUSKIE_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY")) || iVar0 == joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"))
	{
		if (func_744(iVar0, bParam2))
		{
			return 1;
		}
	}
	return 0;
}

bool func_701(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return true;
	}
	return false;
}

bool func_702(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

void func_703(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_704(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_705(bool bParam0, bool bParam1, bool bParam2)
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

int func_706(int iParam0)
{
	return iParam0 & 31;
}

bool func_707(int iParam0, bool bParam1, int iParam2)
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

bool func_708(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_745(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}
	return 0;
}

bool func_710(int iParam0)
{
	iParam0 = func_746(iParam0);
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

bool func_711(int iParam0)
{
	int iVar0;

	iParam0 = func_746(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_710(iParam0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_712(int iParam0)
{
	iParam0 = func_746(iParam0);
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

void func_713(var uParam0)
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

int func_714(int iParam0)
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

void func_715(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
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

bool func_716(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_717(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_119(iParam0))
	{
		case -2061583405:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_747(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_726();
	}
	if (bParam1)
	{
		func_605(0, 0);
	}
}

void func_718(int iParam0)
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
	Var2 = { func_398(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_400(&Var2, &iVar0, &iVar1, 0))
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
		func_9(iVar0);
	}
}

void func_719(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_748(iParam2, *uParam0);
	func_749(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_720(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_234(iParam0, 0, 0) };
	Var5 = { func_272(iParam0, Var0, Var0.f_4, 0) };
	if (func_397(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_241(0), &Var5, iParam1);
	return true;
}

void func_721(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_234(iParam0, 0, 0) };
	Var5 = { func_272(iParam0, Var0, Var0.f_4, 0) };
	if (func_397(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_241(0), &Var5, bParam1);
}

bool func_722(int iParam0)
{
	if (func_122() == -1)
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

int func_723(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_750(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_720(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_119(iParam0) != -999503751)
	{
		func_719(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_724(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_341();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_725(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_234(iParam0, 0, 0) };
	Var5 = { func_272(iParam0, Var0, Var0.f_4, 0) };
	if (func_397(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_241(0), &Var5);
	return 1;
}

void func_726()
{
	int iVar0;

	if (func_122() == -1)
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

bool func_727(int iParam0)
{
	return func_752(func_751(iParam0));
}

int func_728(int iParam0)
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

int func_729(int iParam0)
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

int func_730(int iParam0)
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

int func_731(int iParam0)
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

int func_732(int iParam0)
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

int func_733(int iParam0)
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

int func_734(int iParam0)
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

int func_735(int iParam0)
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

int func_736(int iParam0)
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

int func_737(int iParam0)
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

int func_738(int iParam0)
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

int func_739(int iParam0)
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

int func_740(int iParam0)
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

int func_741(int iParam0)
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

int func_742(int iParam0)
{
	return func_753(iParam0);
}

int func_743(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_83(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_239(iParam0, 1);
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
			func_178(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_61(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_175(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_98(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_98(iParam0, 0, 0) - iParam1) < 0)
		{
			func_743(iParam0, func_98(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_115(iParam0) == joaat("WEAPON"))
	{
		if (!func_754(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_755(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_124(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_178(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_756(iParam0, iParam1);
	return 1;
}

bool func_744(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		iVar14 = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar14);
		if (ITEMSET::IS_ITEMSET_VALID(iVar14))
		{
			iVar15 = ITEMSET::GET_ITEMSET_SIZE(iVar14);
			iVar16 = 0;
			while (iVar16 < iVar15)
			{
				iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar16, iVar14));
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
				}
				else if (ENTITY::GET_IS_ANIMAL(iVar0) || ENTITY::_GET_IS_BIRD(iVar0))
				{
					iVar21 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					iVar1 = func_757(iVar21, &uVar2);
					iVar23 = func_758(iVar0);
					if (iVar23 == iParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&iVar0);
							func_178(iVar23, -1, 0, 0, 0);
							Global_1901328.f_94 = 0;
						}
						ITEMSET::DESTROY_ITEMSET(iVar14);
						return true;
					}
					iVar22 = 0;
					while (iVar22 < iVar1)
					{
						if (uVar2[iVar22] == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								func_178(uVar2[iVar22], -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return true;
						}
						iVar22++;
					}
				}
				else
				{
					iVar24 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					func_715(iVar24, &uVar18, &uVar19, &iVar17, &uVar20);
					if (func_716(&iVar13, iVar24, iVar17, uVar18))
					{
						if (iVar13 == iParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&iVar0);
								func_178(iVar13, -1, 0, 0, 0);
								Global_1901328.f_94 = 0;
							}
							ITEMSET::DESTROY_ITEMSET(iVar14);
							return true;
						}
					}
				}
				iVar16++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar14);
		}
		else
		{
			return false;
		}
	}
	return func_759(iParam0, bParam1);
}

bool func_745(var uParam0)
{
	if (func_760(&(uParam0->f_29), 62))
	{
		switch (func_761())
		{
			case 1:
				if (!func_760(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_760(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_760(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_760(&(uParam0->f_29), 32))
				{
					if (func_760(&(uParam0->f_29), 2))
					{
						if (func_582(func_447()) < 5)
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

int func_746(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_747(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_750(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_119(iParam0) != -999503751)
		{
			func_762(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19 = (Global_1946054.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_119(iParam0) != -999503751)
	{
		func_762(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_720(iParam0, 1);
	return 1;
}

void func_748(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_749(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_763(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_320(func_450(iParam1), 1);
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
		func_764(uParam0);
	}
}

bool func_750(int iParam0, int iParam1)
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

int func_751(int iParam0)
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

bool func_752(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 && iParam0) != 0;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return -732027686;
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

bool func_754(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_398(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_399(&Var0, func_389(0));
	}
	if (!func_400(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_330(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_273(iParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_9(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_755(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_83(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_234(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_765(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_272(iParam0, Var0, Var0.f_4, bParam4) };
	return func_273(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_756(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_31(iParam0, 606799272))
		{
			func_766(iParam0, iParam1);
		}
		if (func_31(iParam0, -1112814642) && func_31(iParam0, -1697809989))
		{
			func_146(iParam0, iParam1, 1, 0);
		}
	}
}

int func_757(int iParam0, var uParam1)
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
	func_715(iParam0, &uVar1, &uVar2, &uVar0, &uVar3);
	uVar4 = PED::_0x6B89FAA36FC909A3(uParam1, iParam0, uVar0, uVar1);
	return uVar4;
}

int func_758(int iParam0)
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
	func_715(iVar0, &uVar2, &uVar3, &iVar1, &uVar4);
	if (func_716(&uVar5, iVar0, iVar1, uVar2))
	{
	}
	return uVar5;
}

int func_759(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> /*144*/ sVar3;
	struct<10> /*80*/ sVar21;
	int iVar35;
	int iVar36;

	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	Var3.f_13 = -1;
	Var3.f_14 = -1;
	Var3.f_15 = -1;
	Var3.f_16 = -1;
	Var3.f_17 = -1;
	Var21.f_9 = -1591664384;
	Var3.f_1 = 1084182731;
	iVar35 = func_767(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar35) && func_768(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar35), &Var3, &iVar0, &iVar1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_330(&Var21, iVar2, iVar0, iVar1))
			{
				if (iParam0 == Var21.f_4)
				{
					if (bParam1)
					{
						iVar36 = 1;
						func_769(&iVar35, iParam0, &iVar36, 1, -142743235);
					}
					func_9(iVar0);
					return 1;
				}
			}
			iVar2++;
		}
		func_9(iVar0);
	}
	return 0;
}

bool func_760(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_761()
{
	return Global_1899516;
}

void func_762(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_770(iParam1);
	func_771(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_772(&(uParam0->f_26), iVar1);
		if (func_773(uParam0->f_26, &iVar0))
		{
			func_774(iVar0, iVar1);
		}
	}
}

void func_763(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_775(&(uParam0->f_3));
}

void func_764(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_776(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

bool func_765(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_445(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_124(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_241(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_766(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_122() == -1)
	{
		if (func_104(43))
		{
			if (func_31(iParam0, 412399755))
			{
				func_304(joaat("EXOTIC_STAGE_01"));
				if (func_305() == 0)
				{
					func_245(0, 10);
					iVar0 = func_777(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_307(iParam0) < func_308(iParam0))
						{
							func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_104(44))
		{
			if (func_31(iParam0, 709057512))
			{
				func_304(joaat("EXOTIC_STAGE_02"));
				if (func_305() == 1)
				{
					func_245(0, 10);
					iVar0 = func_777(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_307(iParam0) < func_308(iParam0))
						{
							func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_104(45))
		{
			if (func_31(iParam0, -1478961327))
			{
				func_304(joaat("EXOTIC_STAGE_03"));
				if (func_305() == 2)
				{
					func_245(0, 10);
					iVar0 = func_777(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_307(iParam0) < func_308(iParam0))
						{
							func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_104(46))
		{
			if (func_31(iParam0, -1238404098))
			{
				func_304(joaat("EXOTIC_STAGE_04"));
				if (func_305() == 3)
				{
					func_245(0, 10);
					iVar0 = func_777(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_307(iParam0) < func_308(iParam0))
						{
							func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_104(47))
		{
			if (func_31(iParam0, 1160548794))
			{
				func_304(joaat("EXOTIC_STAGE_05"));
				if (func_305() == 4)
				{
					func_245(0, 10);
					iVar0 = func_777(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_307(iParam0) < func_308(iParam0))
						{
							func_112(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_767(int iParam0)
{
	int iVar0;

	if (func_778(iParam0))
	{
		if (func_122() == -1)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = func_712(func_746(0));
			}
		}
		else
		{
			iVar0 = PED::_GET_LAST_MOUNT(func_779());
		}
	}
	else if (func_122() == -1)
	{
		iVar0 = func_712(0);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	return iVar0;
}

bool func_768(int iParam0, var uParam1, var uParam2, int* iParam3)
{
	*uParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, uParam1, iParam3);
	if (*uParam2 >= 0)
	{
		return true;
	}
	return false;
}

int func_769(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	iVar1 = func_780(iVar0, iParam1);
	if (func_781(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { func_175(iParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (func_782(iParam1))
		{
			func_783(*iParam0, iParam1, *iParam2);
		}
		else
		{
			func_783(*iParam0, iParam1, *iParam2);
			func_784(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - func_780(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_770(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_771(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_772(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_763(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_773(int iParam0, int iParam1)
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

void func_774(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_775(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_776(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_785(func_341());
	if (*uParam0)
	{
		func_775(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_122() != -1, iParam2);
	*uParam0 = 1;
}

int func_777(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_307(iVar9);
	iVar2 = func_307(iVar10);
	iVar3 = func_307(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_307(iVar12);
	}
	iVar5 = func_308(iVar9);
	iVar6 = func_308(iVar10);
	iVar7 = func_308(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_308(iVar12);
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

bool func_778(int iParam0)
{
	int iVar0;

	if (func_122() == -1)
	{
		if ((Global_1914319.f_17370 || iParam0) || Global_1914319.f_16855 == 2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (iVar0 != func_712(7))
			{
				return true;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (iVar0 != func_712(7))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = PED::_GET_LAST_MOUNT(func_779());
		if (iVar0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
	}
	return false;
}

int func_779()
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_780(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_83(iParam1, 0))
	{
		return 0;
	}
	Var0 = { func_786(iParam0, iParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(iParam0, &Var0, 0);
	return uVar4;
}

int func_781(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	if (func_787(iParam0))
	{
		iVar1 = func_788(iParam0);
		if (func_83(iParam1, 0))
		{
			if (func_782(iParam1))
			{
				func_789(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_790(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_782(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_791(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_792(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_783(int iParam0, int iParam1, int iParam2)
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

int func_784(int iParam0, int iParam1, int iParam2, bool bParam3)
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
					func_715(iVar9, &iVar6, &uVar7, &iVar5, &uVar8);
					func_716(&iVar0, iVar9, iVar5, iVar6);
					if (!func_83(iVar0, 0))
					{
						iVar0 = func_793(iVar2);
					}
				}
				else
				{
					iVar0 = func_793(iVar2);
				}
				if (iVar0 == iParam1)
				{
					PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
					if (bParam3)
					{
						func_794(iVar2);
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

int func_785(int iParam0)
{
	if (func_122() == -1)
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

struct<4> /*32*/ func_786(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_795(iParam0) };
	return func_796(iParam0, iParam1, Var0, Var0.f_4);
}

bool func_787(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_788(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_788(int iParam0)
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

void func_789(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_746(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_797(iParam1);
	iVar1 = func_798(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = (Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] - iParam2);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_799(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_790(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> /*16*/ sVar3;

	if (!func_83(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!func_800(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { func_175(iParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_780(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((func_780(iParam0, iParam1) - iParam2) < 0)
		{
			func_790(iParam0, iParam1, func_98(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_801(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_124(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_178(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

bool func_791(int iParam0)
{
	if (!func_83(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x4AEF1FB5B9011D75(iParam0);
}

int func_792(int iParam0, int iParam1)
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

int func_793(int iParam0)
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
			iVar0 = func_802(iVar1);
		}
	}
	return iVar0;
}

void func_794(int iParam0)
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
	if (func_803(ENTITY::GET_ENTITY_MODEL(iVar0), iVar2))
	{
		iVar1 = joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else
	{
		func_757(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), &uVar3);
		iVar15 = 0;
		while (iVar15 < 10)
		{
			if (!func_83(uVar3[iVar15], 0))
			{
			}
			else if (!func_804(uVar3[iVar15]))
			{
			}
			else
			{
				iVar14 = func_805(uVar3[iVar15], iVar2);
				if (func_806(iVar14, iVar1))
				{
					iVar1 = iVar14;
				}
			}
			iVar15++;
		}
	}
	func_807(&iVar1);
	if (func_806(iVar1, Global_1357549.f_1492))
	{
		Global_1357549.f_1492 = iVar1;
	}
}

struct<5> /*40*/ func_795(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_796(iParam0, joaat("CHARACTER"), func_561(), -1591664384) };
	Var0.f_4 = 1084182731;
	return Var0;
}

struct<4> /*32*/ func_796(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_83(iParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, iParam1, iParam6, &Var0);
	return Var0;
}

int func_797(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_798(int iParam0, int iParam1)
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

int func_799(int iParam0, int iParam1, int iParam2)
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

bool func_800(int iParam0, int iParam1, int iParam2)
{
	if (!func_83(iParam1, 0))
	{
		return false;
	}
	return func_780(iParam0, iParam1) >= iParam2;
}

int func_801(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_83(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_795(iParam0) };
	Var5 = { func_796(iParam0, iParam1, Var0, Var0.f_4) };
	return func_808(iParam0, iParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_802(int iParam0)
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
	func_715(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_716(&iVar4, iParam0, iVar0, iVar1);
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

bool func_803(int iParam0, int iParam1)
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

bool func_804(int iParam0)
{
	if ((func_31(iParam0, -839724752) || func_31(iParam0, joaat("CI_TAG_ITEM_MEAT_ANIMAL"))) || func_31(iParam0, 1286414894))
	{
		return true;
	}
	return false;
}

int func_805(int iParam0, int iParam1)
{
	if (!func_83(iParam0, 0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (!func_804(iParam0))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_BASE");
	}
	if (func_809(iParam0, iParam1))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL");
	}
	else if (func_31(iParam0, -1690954218))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_31(iParam0, 1149630095))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH");
	}
	else if (func_31(iParam0, 194498509))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_MED");
	}
	else if (func_31(iParam0, 43251425))
	{
		return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
	}
	return joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_LOW");
}

bool func_806(int iParam0, int iParam1)
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

void func_807(int iParam0)
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

int func_808(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> /*96*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_445(iParam1))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_810(iParam0, *uParam2, &Var0, 0))
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

bool func_809(int iParam0, int iParam1)
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

bool func_810(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
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

