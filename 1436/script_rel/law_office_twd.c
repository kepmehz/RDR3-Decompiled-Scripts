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
	bool bLocal_14 = false;
	struct<503> /*4024*/ sLocal_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0 } ;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
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
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_15.f_389 = ScriptParam_0.f_1;
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		Local_15 = 3;
		bVar0 = true;
	}
	while (true)
	{
		func_1(bVar0);
		if (bVar0)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (Local_15)
			{
				case 0:
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_2(&Local_15);
					func_3(&Local_15);
					func_4(&Local_15, 1);
					break;
				case 1:
					if (func_5(&Local_15))
					{
						if (func_6(&Local_15))
						{
							func_7();
							func_4(&Local_15, 2);
						}
					}
					break;
				case 2:
					if (func_8())
					{
						func_4(&Local_15, 3);
					}
					break;
				case 3:
					if (func_9(&(Local_15.f_3)))
					{
						if (!bVar0)
						{
							func_10(&Local_15, 0);
						}
					}
					else
					{
						func_11();
					}
					break;
			}
			if (!bVar0)
			{
				if (Local_15 > 0)
				{
					if (!func_12(Local_15.f_388, 64))
					{
						if (func_13(Local_15.f_387, Global_35))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_460)))
							{
								func_14(Global_35, Local_15.f_387, &(Local_15.f_460), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_15(&(Local_15.f_388), 64);
						}
					}
					if (func_16(&Local_15))
					{
						func_10(&Local_15, 0);
					}
				}
			}
			BUILTIN::WAIT(0);
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		if (!func_17(0) || CAM::IS_SCREEN_FADED_OUT())
		{
			func_10(&Local_15, 1);
		}
	}
}

void func_2(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1935630.f_12)
	{
		return;
	}
	func_18(iParam0);
	func_19(iParam0->f_2, &iVar0);
	iParam0->f_390 = { VOLUME::_GET_VOLUME_COORDS(iVar0) };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		iParam0->f_387 = func_20(Global_35);
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
		{
			iVar1 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				iParam0->f_387 = func_20(iVar1);
			}
		}
		PED::_RESERVE_AMBIENT_PEDS(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bDeadOrAlive") && DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bDeadOrAlive"))
	{
		func_15(&(iParam0->f_388), 8);
	}
	else
	{
		func_21(&(iParam0->f_388), 8);
	}
	if (!func_12(iParam0->f_388, 1))
	{
		if (func_22(iParam0->f_387, func_12(iParam0->f_388, 8)))
		{
			func_15(&(iParam0->f_388), 1);
		}
		else
		{
			func_21(&(iParam0->f_388), 1);
		}
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return;
	}
	func_23(iParam0);
	if (!func_24(iParam0->f_389, 8))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_387, false);
	}
	func_25(iParam0);
}

void func_3(int iParam0)
{
	func_26(iParam0);
	HUD::TEXT_BLOCK_REQUEST("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(iParam0->f_401));
	}
}

void func_4(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_5(int iParam0)
{
	if (!func_27(iParam0))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("BHCR"))
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)) && !HUD::TEXT_BLOCK_IS_LOADED(&(iParam0->f_401)))
	{
		return false;
	}
	return true;
}

bool func_6(int iParam0)
{
	return true;
}

void func_7()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_387))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15.f_387, joaat("REL_CRIMINALS"));
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_15.f_387, joaat("REL_CRIMINALS"));
		PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 6, true);
	}
}

bool func_8()
{
	func_28(&Local_15);
	func_29(&Local_15);
	switch (Local_15.f_1)
	{
		case 0:
			if (func_30(Local_15.f_387, 0, 0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(Local_15.f_387, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, true);
			}
			func_31(&Local_15, 1);
			break;
		case 1:
			func_32();
			func_34(func_33() == Local_15.f_2);
			if (func_35(&(Local_15.f_3), 1))
			{
				func_36(&(Local_15.f_3.f_329), 67108864);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, true);
				func_31(&Local_15, 2);
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 2:
			func_32();
			func_38();
			if (!func_24(Local_15.f_389, 32))
			{
				if (func_39(Local_15.f_3.f_329, 2048))
				{
					if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= 1)
					{
						func_40(Local_15.f_389, 32);
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_15.f_387) || !ENTITY::_0x88AD6CC10D8D35B2(Local_15.f_387))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_15.f_387, true, true);
						}
						PED::SET_PED_KEEP_TASK(Local_15.f_387, true);
						func_41(Local_15.f_387);
					}
				}
			}
			if (func_42(&(Local_15.f_3)))
			{
				if (!Local_15.f_501)
				{
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_15.f_387, false);
					Local_15.f_501 = 1;
				}
				func_11();
				if (!func_43(Global_35, Local_15.f_390, 35f, 1, 1))
				{
					return true;
				}
			}
			else if (func_24(Local_15.f_389, 256))
			{
				func_37();
				func_31(&Local_15, 3);
			}
			break;
		case 3:
			if (!func_24(Local_15.f_389, 256))
			{
				Global_1395482.f_115 = func_12(Local_15.f_388, 4);
				Global_1395482.f_114 = Local_15.f_498;
				func_4(&Local_15, 0);
				func_31(&Local_15, 0);
			}
			break;
	}
	return false;
}

bool func_9(var uParam0)
{
	float fVar0;

	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_44(uParam0->f_300, uParam0->f_65), Global_36, true);
	if (func_45(uParam0->f_69, 0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_69, 49, true);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	if (!func_39(uParam0->f_329, 8388608))
	{
		func_47(uParam0);
		func_48(uParam0);
		if (!func_39(uParam0->f_329, 256))
		{
			if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
			{
				func_50(uParam0);
			}
		}
		else if (func_39(uParam0->f_329, 512) && !func_39(uParam0->f_328, 32))
		{
			func_51(uParam0);
		}
		if (!func_39(uParam0->f_328, 2097152))
		{
			func_52(uParam0);
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
	{
		func_53(uParam0->f_67, 0);
	}
	if (fVar0 > 50f)
	{
		return true;
	}
	if (func_54(uParam0))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
	{
		if (!func_46(uParam0->f_306, Global_36))
		{
			func_55(uParam0->f_308);
			func_56(uParam0->f_308);
		}
	}
	return false;
}

void func_10(int iParam0, bool bParam1)
{
	func_57(iParam0);
	if (!func_24(iParam0->f_389, 4))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
		{
			func_41(iParam0->f_387);
			if (func_24(iParam0->f_389, 32))
			{
				TASK::TASK_CARRIABLE(iParam0->f_387, joaat("HOGTIED_PED"), 0, 0, 0);
				PED::SET_PED_KEEP_TASK(iParam0->f_387, true);
			}
			else if (bParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(iParam0->f_387, false, false);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_387, -1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_387));
			func_58(4);
		}
	}
	func_59(&(iParam0->f_3), 0);
	func_60(0);
	HUD::_TEXT_BLOCK_DELETE("BHCR");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_401)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(iParam0->f_401));
	}
	if (func_24(iParam0->f_389, 128))
	{
		func_41(iParam0->f_387);
		func_58(4);
	}
	if (func_61(iParam0))
	{
		func_62();
	}
	else
	{
		Global_1395482.f_115 = func_12(iParam0->f_388, 4);
		Global_1395482.f_116 = func_12(iParam0->f_388, 2);
		Global_1395482.f_114 = iParam0->f_498;
		Global_1395482.f_94 = iParam0->f_478;
		Global_1395482.f_72 = iParam0->f_456;
		Global_1395482.f_73 = iParam0->f_457;
		Global_1395482.f_74 = iParam0->f_458;
		Global_1395482.f_75 = iParam0->f_459;
		Global_1395482.f_117 = iParam0->f_500;
		Global_1395482.f_93 = iParam0->f_477;
	}
	func_63(iParam0);
	func_37();
	func_64(iParam0->f_389, 4);
	func_64(iParam0->f_389, 32);
	func_64(iParam0->f_389, 128);
	Global_1395482.f_1 = -1;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= 1)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(1);
	}
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
	{
		if (func_24(Local_15.f_389, 32))
		{
			if (VOLUME::DOES_VOLUME_EXIST(Local_15.f_3.f_306))
			{
				if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
				{
					if (!func_66(Local_15.f_387, 0))
					{
						if ((Local_15.f_397 > 1 && !ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_15.f_3.f_69, -1))
						{
							if (func_67(&(Local_15.f_393), 1f))
							{
								func_14(Local_15.f_3.f_69, Local_15.f_3.f_69, "CUT_THAT_OUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_68(&(Local_15.f_393));
								Local_15.f_397 = 0;
								Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
							}
						}
						else if (!func_69(&(Local_15.f_393)) || func_67(&(Local_15.f_393), Local_15.f_396))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 1:
									func_14(Local_15.f_387, Local_15.f_387, "GENERIC_CURSE_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
								case 2:
									func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									break;
							}
							func_68(&(Local_15.f_393));
							Local_15.f_397++;
							Local_15.f_396 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 13f);
						}
					}
				}
			}
		}
	}
}

bool func_12(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_13(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_14(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_70(bParam0, bParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_15(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_16(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_12)
	{
		func_58(4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0->f_387, "bIsCriminal") || DECORATOR::DECOR_GET_BOOL(iParam0->f_387, "bIsCriminal") == 0)
	{
		return true;
	}
	if (func_71(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		func_40(iParam0->f_389, 128);
		return true;
	}
	if (func_72(&(iParam0->f_3), 1120403456 /* Float: 100f */, 1125515264 /* Float: 150f */))
	{
		if (iParam0->f_3.f_64 == 5 || iParam0->f_3.f_64 == 6)
		{
			func_40(iParam0->f_389, 128);
		}
		return true;
	}
	if (!func_12(iParam0->f_388, 1))
	{
		return true;
	}
	if (!func_12(iParam0->f_388, 8) && ENTITY::IS_ENTITY_DEAD(iParam0->f_387))
	{
		func_58(4);
		return true;
	}
	if (func_73(iParam0))
	{
		func_58(4);
		return true;
	}
	iVar0 = func_74();
	if (func_75(iVar0) != iParam0->f_389)
	{
		func_40(iParam0->f_389, 4);
		return true;
	}
	if (func_76(iParam0))
	{
		return true;
	}
	return false;
}

bool func_17(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_77(iVar0))
	{
		return false;
	}
	if (func_78(iVar0, 1) || func_78(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_18(int iParam0)
{
	iParam0->f_2 = 115;
	StringCopy(&(iParam0->f_398), "TWD", 24);
	StringCopy(&(iParam0->f_401), "BHJTWAU", 24);
	Global_1395482.f_1 = 0;
}

void func_19(int iParam0, int iParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2504.735f, -1308.831f, 49.06328f, 0f, 0f, 0f, 22.43624f, 17.01578f, 3.468709f, "SD Sheriff Office");
			break;
		case 26:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -1810.522f, -349.3201f, 163.474f, 0f, 0f, -25.06604f, 7.327408f, 6.633123f, 6.036f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -1813.445f, -353.8168f, 163.474f, 0f, 0f, -25.06604f, 5.841297f, 4.267593f, 6.036f);
			break;
		case 76:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -272.9176f, 809.1227f, 119.4f, 0f, 0f, -80.06616f, 6.765059f, 4.518183f, 3f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -277.2155f, 807.0856f, 119.8f, 0f, 0f, -79.7f, 9.130634f, 5.028743f, 2.8f);
			break;
		case 78:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2906.428f, 1312.199f, 45.46901f, 0f, 0f, -21.08204f, 10.47463f, 7.642887f, 2.791512f, "Annesburg Sheriff Office");
			break;
		case 105:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, 1355.464f, -1302.104f, 77.52525f, 0f, 0f, -20.36115f, 3.923681f, 4.045318f, 2.635184f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, 1360.674f, -1301.562f, 77.52525f, 0f, 0f, -20.30303f, 5.747039f, 8.956645f, 2.635184f);
			break;
		case 38:
			*iParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater Sheriff Office");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -763.0246f, -1269.283f, 43.6176f, 0f, 0f, 0f, 12.03637f, 8.528987f, 5.107259f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*iParam1, -764.7173f, -1263.493f, 43.76242f, 0f, 0f, 0f, 7.664316f, 3.774002f, 5.107259f);
			break;
		case 115:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5529.529f, -2927.852f, -1.033f, 0f, 0f, 25f, 6.7f, 6.3f, 3f, "Tumbleweed Sheriff Office");
			break;
		default:
			break;
	}
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			return iVar1;
		}
	}
	return 0;
}

void func_21(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_22(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!bParam1 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!bParam1 && !PED::IS_PED_HOGTIED(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam0, "bIsCriminal"))
	{
		return true;
	}
	return false;
}

void func_23(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	bVar1 = false;
	bVar2 = false;
	bVar3 = func_12(iParam0->f_388, -2147483648);
	bVar4 = func_79(8);
	bVar5 = func_79(16);
	iParam0->f_3.f_358 = 0;
	iParam0->f_3.f_359 = func_80(iParam0->f_389);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_17)))
	{
		iParam0->f_3.f_325 = { Global_1395482.f_17 };
	}
	else
	{
		StringCopy(&(iParam0->f_3.f_325), "BNTY_NME_CRIM", 24);
	}
	if (!iParam0->f_3.f_359)
	{
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			func_36(&(iParam0->f_3.f_328), 16777216);
			func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_11)))
		{
			MemCopy(&(iParam0->f_3.f_332), {func_81(iParam0, &(Global_1395482.f_11))}, 4);
			func_82(&(iParam0->f_3.f_328), 16777216);
			func_82(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
		}
		if (bVar3 || MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			func_36(&(iParam0->f_3.f_328), 33554432);
			func_36(&(iParam0->f_3.f_328), -2147483648);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_14)))
		{
			MemCopy(&(iParam0->f_3.f_336), {func_81(iParam0, &(Global_1395482.f_14))}, 4);
			func_82(&(iParam0->f_3.f_328), 33554432);
			func_82(&(iParam0->f_3.f_328), -2147483648);
		}
	}
	else
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iParam0->f_3.f_360 = ((bVar4 || bVar3) || iParam0->f_3.f_359);
	if (bVar5)
	{
		func_36(&(iParam0->f_3.f_328), -2147483648);
		func_36(&(iParam0->f_3.f_328), 1073741824 /* Float: 2f */);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_20[iVar0 /*3*/])))
		{
			bVar1 = true;
			iParam0->f_404[iVar0 /*3*/] = { Global_1395482.f_20[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_36[iVar0 /*3*/])))
			{
				iParam0->f_420[iVar0 /*3*/] = { Global_1395482.f_36[iVar0 /*3*/] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_52[iVar0 /*3*/])))
		{
			bVar1 = true;
			bVar2 = true;
			iParam0->f_436[iVar0 /*3*/] = { Global_1395482.f_52[iVar0 /*3*/] };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_62[iVar0 /*3*/])))
			{
				iParam0->f_446[iVar0 /*3*/] = { Global_1395482.f_62[iVar0 /*3*/] };
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (bVar1)
	{
		func_40(iParam0->f_389, 8);
	}
	if (bVar2)
	{
		func_40(iParam0->f_389, 16);
	}
	if (Global_1395482.f_115)
	{
		func_15(&(iParam0->f_388), 4);
	}
	else
	{
		func_21(&(iParam0->f_388), 4);
	}
	if (Global_1395482.f_116)
	{
		func_15(&(iParam0->f_388), 2);
	}
	else
	{
		func_21(&(iParam0->f_388), 2);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_95[iVar0 /*6*/])))
		{
			MISC::_COPY_MEMORY(&(iParam0->f_479[iVar0 /*6*/]), &(Global_1395482.f_95[iVar0 /*6*/]), 6);
			if (!func_24(iParam0->f_389, 512))
			{
				func_40(iParam0->f_389, 512);
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_76)))
	{
		iParam0->f_460 = { Global_1395482.f_76 };
	}
	else
	{
		StringCopy(&(iParam0->f_460), "", 32);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1395482.f_80[iVar0 /*4*/])))
		{
			iParam0->f_464[iVar0 /*4*/] = { Global_1395482.f_80[iVar0 /*4*/] };
		}
		else
		{
			StringCopy(&(iParam0->f_464[iVar0 /*4*/]), "", 32);
		}
		iVar0++;
	}
	iParam0->f_498 = Global_1395482.f_114;
	iParam0->f_478 = Global_1395482.f_94;
	iParam0->f_456 = Global_1395482.f_72;
	iParam0->f_457 = Global_1395482.f_73;
	iParam0->f_458 = Global_1395482.f_74;
	iParam0->f_459 = Global_1395482.f_75;
	iParam0->f_500 = Global_1395482.f_117;
	iParam0->f_477 = Global_1395482.f_93;
	func_36(&(iParam0->f_3.f_328), 67108864);
	func_36(&(iParam0->f_3.f_328), 268435456);
	func_36(&(iParam0->f_3.f_328), 536870912);
	func_36(&(iParam0->f_3.f_328), 134217728);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_21(&(iParam0->f_388), -2147483648);
}

bool func_24(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;

	if (PED::GET_PED_CONFIG_FLAG(iParam0->f_387, 4, true))
	{
		iVar0 = func_84(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, -1);
		iVar1 = func_84(joaat("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
	}
	else
	{
		iVar0 = func_84(joaat("REWARD_BOUNTYHUNTING_SMALL"), 0, -1);
		iVar1 = func_84(joaat("REWARD_BEAT_MEDIUM"), 0, -1);
	}
	iParam0->f_3.f_67 = iParam0->f_387;
	func_85(&(iParam0->f_3.f_67));
	func_86(&(iParam0->f_3), &(iParam0->f_3.f_325), iParam0->f_2, iVar0, iVar1, 0);
	func_36(&(iParam0->f_3.f_329), 262144);
	func_36(&(iParam0->f_3.f_329), 524288);
	func_36(&(iParam0->f_3.f_329), 1048576);
	PED::SET_PED_CONFIG_FLAG(iParam0->f_387, 4, true);
	iParam0->f_3.f_299 = 1;
}

void func_26(int iParam0)
{
}

bool func_27(int iParam0)
{
	return true;
}

void func_28(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_3.f_306))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0->f_387, iParam0->f_3.f_306, false, 0))
	{
		if (!func_24(Global_1395482.f_1, 64))
		{
			func_40(Global_1395482.f_1, 64);
		}
	}
	else if (func_24(Global_1395482.f_1, 64))
	{
		func_64(Global_1395482.f_1, 64);
	}
}

void func_29(int iParam0)
{
	if (!func_24(iParam0->f_389, 256))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0->f_387) && !PED::IS_PED_HOGTIED(iParam0->f_387)) && !func_65(iParam0->f_387, iParam0->f_3.f_306, 1, 0))
		{
			func_59(&(iParam0->f_3), 1);
			func_40(iParam0->f_389, 256);
		}
	}
	else if (PED::IS_PED_HOGTIED(iParam0->f_387))
	{
		func_64(iParam0->f_389, 256);
	}
}

bool func_30(bool bParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_45(bParam0, iParam1);
}

void func_31(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

void func_32()
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_15.f_3.f_306))
	{
		if (func_65(Global_35, Local_15.f_3.f_306, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_3.f_69))
			{
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_3.f_69, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Local_15.f_387, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Local_15.f_387, 0, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
				}
			}
		}
	}
}

int func_33()
{
	return Global_1894899.f_2;
}

void func_34(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	bVar1 = func_24(Local_15.f_389, 8);
	if (bParam0)
	{
		if (!func_12(Local_15.f_388, 4))
		{
			if (func_24(Local_15.f_389, 16))
			{
				func_15(&(Local_15.f_388), 4);
				func_21(&(Local_15.f_388), 16);
				Local_15.f_498 = 0;
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		bVar0 = func_12(Local_15.f_388, 4);
	}
	if (!func_12(Local_15.f_388, 16))
	{
		if (!bVar1 || func_87(bVar0))
		{
			if (bVar0 || !bVar1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
				{
					AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_387, false);
					PED::SET_PED_CONFIG_FLAG(Local_15.f_387, 178, true);
				}
				func_88();
			}
			func_15(&(Local_15.f_388), 16);
			Local_15.f_502 = 0;
			return;
		}
		else
		{
			PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
		}
		func_89(bVar0);
	}
	else
	{
		switch (Local_15.f_502)
		{
			case 0:
				AUDIO::STOP_PED_SPEAKING(Local_15.f_387, false);
				if (func_12(Local_15.f_388, 32))
				{
					Local_15.f_502 = 4;
				}
				else if (func_90(0, 1, 0, 0))
				{
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						Local_15.f_502 = 1;
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_15.f_387))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_15.f_387))
					{
						if (func_91(0) == Local_15.f_387)
						{
							if (!func_92())
							{
								if (func_12(Local_15.f_388, 32))
								{
									Local_15.f_502 = 4;
								}
							}
							else
							{
								Local_15.f_502 = 2;
							}
						}
						else
						{
							Local_15.f_502 = 0;
						}
					}
				}
				break;
			case 2:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
				{
					if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						func_68(&(Local_15.f_393));
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f);
						Local_15.f_502 = 3;
					}
				}
				break;
			case 3:
				PED::SET_PED_RESET_FLAG(Local_15.f_387, 147, true);
				if (func_67(&(Local_15.f_393), Local_15.f_499))
				{
					Local_15.f_502 = 0;
				}
				break;
			case 4:
				break;
		}
	}
}

bool func_35(var uParam0, bool bParam1)
{
	func_93(uParam0);
	func_94(uParam0);
	if (func_95(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (uParam0->f_59)
	{
		case 0:
			Global_1392235.f_4 = 1;
			func_96(uParam0, 1);
			break;
		case 1:
			if (func_95(uParam0))
			{
				uParam0->f_308 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_97(uParam0->f_300), 0f, 0f, 0f, 20f, 20f, 20f, func_98());
				func_99(uParam0->f_308, "BountyHuntingRewardVolume", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
				if (uParam0->f_300 == 26)
				{
					uParam0->f_72 = PED::ADD_SCENARIO_BLOCKING_AREA(-1813.668f, -353.7011f, 160.4116f, -1811.668f, -351.7011f, 162.4116f, false, 15);
				}
				uParam0->f_309 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(func_100(uParam0->f_300), 0f, 0f, 0f, 4f, 4f, 4f, "Scenario Blocking");
				uParam0->f_73 = PED::_0x4C39C95AE5DB1329(uParam0->f_309, false, 15);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 1, false);
				if (!Global_1935630.f_12)
				{
					if (func_101())
					{
						func_102(uParam0, Global_35, "John");
					}
					else
					{
						func_102(uParam0, Global_35, "Arthur");
					}
				}
				func_103(uParam0, 1);
				func_104(uParam0);
				func_105(uParam0->f_300);
				func_106(uParam0->f_300);
				func_96(uParam0, 2);
			}
			break;
		case 2:
			if (func_107(uParam0))
			{
				func_108(uParam0);
				func_109(uParam0);
				func_96(uParam0, 3);
			}
			break;
		case 3:
			if (bParam1)
			{
				func_110(uParam0);
			}
			func_111(uParam0);
			func_112(uParam0);
			if (func_113(Global_36, func_97(uParam0->f_300), 20f, 1))
			{
				func_109(uParam0);
			}
			if (func_114(uParam0))
			{
				func_108(uParam0);
				func_96(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_36(int iParam0, int iParam1)
{
	func_115(iParam0, iParam1);
}

void func_37()
{
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void func_38()
{
	int iVar0;
	bool bVar1;

	if (!func_24(Local_15.f_389, 512))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_387))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -1260924842))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_15.f_387, -369774137))
			{
				if (!func_14(Local_15.f_387, Local_15.f_387, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					if (!func_14(Local_15.f_387, Local_15.f_387, "WHOA_ESCALATED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_INSULT_HIGH_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							if (!func_14(Local_15.f_387, Local_15.f_387, "GENERIC_ANGRY_SHOUT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
							}
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 381748758))
			{
				func_14(Global_35, Global_35, "TELLS_PED_TO_SHUT_UP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!MISC::IS_BIT_SET(Local_15.f_478, iVar0))
			{
				if (Local_15.f_479[iVar0 /*6*/].f_4 != 2)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_479[iVar0 /*6*/])))
					{
						bVar1 = func_116(&(Local_15.f_479[iVar0 /*6*/]));
						if (!ENTITY::IS_ENTITY_DEAD(bVar1))
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(bVar1, Local_15.f_479[iVar0 /*6*/].f_4))
							{
								func_14(bVar1, bVar1, &(Local_15.f_479[iVar0 /*6*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								MISC::SET_BIT(&(Local_15.f_478), iVar0);
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_39(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_40(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (!func_24(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] || iParam1);
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_117(&iVar0);
}

bool func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_110(uParam0);
	}
	if (func_46(uParam0->f_306, Global_36))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 328, true);
	}
	func_93(uParam0);
	func_111(uParam0);
	func_48(uParam0);
	func_94(uParam0);
	func_112(uParam0);
	if (func_95(uParam0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (uParam0->f_60 >= 4)
	{
		func_118(uParam0);
	}
	switch (uParam0->f_60)
	{
		case 0:
			break;
		case 1:
			if (func_119(uParam0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_67, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 253, true);
				func_120(uParam0, 2);
			}
			break;
		case 2:
			func_121(uParam0);
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			func_122(uParam0, 10);
			func_68(&(uParam0->f_364));
			uParam0->f_367 = 0;
			func_55(uParam0->f_306);
			if (TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
			{
				TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
			{
				func_123(uParam0);
			}
			if (func_124(uParam0->f_65) != 0)
			{
				COMPENDIUM::COMPENDIUM_GANG_BOUNTY_CAPTURED(func_124(uParam0->f_65));
			}
			func_120(uParam0, 3);
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
			{
				if (func_125(uParam0))
				{
					if (func_126(uParam0))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						func_68(&(uParam0->f_312));
						func_127(&(uParam0->f_318));
						uParam0->f_361 = 1;
						func_120(uParam0, 4);
					}
				}
				else if (!uParam0->f_367)
				{
					if (func_128(&(uParam0->f_364)) > 10f || !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 30f, 1, 1))
					{
						func_129(uParam0, 2048, 1);
						uParam0->f_367 = 1;
						func_127(&(uParam0->f_364));
					}
				}
			}
			break;
		case 4:
			if (func_130(&(uParam0->f_312)) > 2f || func_131(uParam0))
			{
				if (!func_39(uParam0->f_328, 128))
				{
					if (func_132(uParam0))
					{
						func_133(100, 1);
						func_68(&(uParam0->f_318));
						func_36(&(uParam0->f_328), 128);
					}
				}
				else if (!func_39(uParam0->f_329, 256))
				{
					if (!func_49(Global_35, -76381094) && !func_43(Global_35, func_44(uParam0->f_300, uParam0->f_65), 2f, 1, 1))
					{
						func_50(uParam0);
					}
				}
			}
			if (uParam0->f_63 != 11)
			{
				func_134(uParam0);
			}
			else
			{
				if (func_54(uParam0))
				{
					func_120(uParam0, 5);
				}
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
				{
					func_120(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
			{
				func_68(&(uParam0->f_318));
				func_120(uParam0, 6);
			}
			break;
		case 6:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!func_49(uParam0->f_69, 150319005))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
					}
				}
				func_122(uParam0, 12);
				func_135(uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_43(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_136(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

Vector3 func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			return 2907.757f, 1312.703f, 43.94054f;
		case 5:
			return 2508.101f, -1307.674f, 47.954f;
		case 105:
			return 1361.196f, -1304.287f, 76.761f;
		case 26:
			return -1808.399f, -348.088f, 163.655f;
		case 76:
			return -276.91f, 804.93f, 119.24f;
		case 38:
			if (iParam1 == 18)
			{
				return -762.74f, -1271.27f, 43.84f;
			}
			else
			{
				return -762.751f, -1266.627f, 43.051f;
			}
			break;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

bool func_45(bool bParam0, int iParam1)
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
	if (func_39(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_39(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_39(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_46(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_47(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	fVar3 = 15f;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false) };
			if ((((((func_137(uParam0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_69, true, false), 20f)) || MISC::IS_PROJECTILE_IN_AREA(vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3), true)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_69, 5000)) || PED::_0x09D7AFD3716DA8E1(uParam0->f_67, 5000)) || func_71(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
				{
					PED::SET_PED_SHOULD_PLAY_COMBAT_SCENARIO_EXIT(uParam0->f_69, Global_36, 3);
				}
				TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
				TASK::TASK_COMBAT_PED(uParam0->f_69, Global_35, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
				if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
				{
					func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
				}
				if (!func_71(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					}
				}
				func_143(0, 0);
				func_36(&(uParam0->f_329), 8388608);
			}
		}
		else
		{
			func_36(&(uParam0->f_329), 8388608);
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_48(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!func_144(1))
	{
		if (func_45(uParam0->f_67, 0))
		{
			if (!func_39(uParam0->f_328, 1) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_340)))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 5;
					}
					else
					{
						iVar0 = 4;
					}
					if ((ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_340, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 1);
						}
					}
				}
			}
			if (!func_39(uParam0->f_328, 2) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_343)))
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1))
				{
					if (uParam0->f_300 == 105)
					{
						iVar0 = 11;
					}
					else
					{
						iVar0 = 8;
					}
					if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[1 /*14*/].f_1, false) || (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[1 /*14*/].f_1, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[1 /*14*/].f_1) > IntToFloat(iVar0)))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_343, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 2);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 64) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_349))) && uParam0->f_60 > 1)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_305, true, 0) && !func_146(uParam0->f_67))
				{
					if (func_130(&(uParam0->f_315)) > 3f)
					{
						if (func_145(&(uParam0->f_103), uParam0->f_349, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 64);
						}
					}
				}
			}
			if ((!func_39(uParam0->f_328, 8) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_352))) && uParam0->f_60 > 1)
			{
				if (uParam0->f_300 == 26)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_67, true, false) };
					if (Global_36.f_2 > (vVar1.z + 1f))
					{
						if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
						{
							func_36(&(uParam0->f_328), 8);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 0, 0))
				{
					if (func_145(&(uParam0->f_103), uParam0->f_352, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 8);
					}
				}
			}
		}
		if (!func_39(uParam0->f_328, 4) && func_39(uParam0->f_329, 256))
		{
			if (func_45(uParam0->f_67, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_346)))
			{
				if (func_145(&(uParam0->f_103), uParam0->f_346, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
			else
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355)))
				{
					MemCopy(&(uParam0->f_355), {func_148(uParam0->f_300)}, 3);
				}
				if (func_145(&(uParam0->f_103), uParam0->f_355, 0, -1, 0, 0))
				{
					func_36(&(uParam0->f_328), 4);
				}
			}
		}
	}
	else
	{
		func_68(&(uParam0->f_315));
	}
}

bool func_49(int iParam0, int iParam1)
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

void func_50(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];
	vector3 vVar15[24];
	vector3 vVar18[24];

	if (!func_39(uParam0->f_329, 4) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0))
	{
		func_36(&(uParam0->f_329), 4);
	}
	if (func_45(uParam0->f_69, 0))
	{
		if (!uParam0->f_358)
		{
			if (!func_39(uParam0->f_328, 16) && !func_144(1))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, true, 0) || func_147(uParam0->f_300, 1, 0))
				{
					vVar0 = { func_149(uParam0->f_300) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
					{
						func_36(&(uParam0->f_328), 16);
					}
					else if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
					{
						func_36(&(uParam0->f_328), 16);
					}
				}
			}
		}
		if (func_65(Global_35, uParam0->f_306, 1, 0) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
		{
			if (func_39(uParam0->f_329, 4) && !func_39(uParam0->f_328, 512))
			{
				if (func_130(&(uParam0->f_318)) >= 2f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 134217728))
					{
						StringCopy(&cVar3, "JAIL_LEFT_MONEY_BEHIND_POST", 32);
						if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar7, "JFRT", 24);
						MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar7, &cVar10, 24);
						if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 512);
						}
					}
				}
			}
			else if (!func_39(uParam0->f_328, 256))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (uParam0->f_358 || func_39(uParam0->f_328, 536870912))
					{
						StringCopy(&cVar11, "JAIL_LEAVE_MONEY_BEHIND", 32);
						if (func_151(uParam0->f_69, &cVar11, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar15, "JRPY", 24);
						MemCopy(&cVar18, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar15, &cVar18, 24);
						if (uParam0->f_300 == 38)
						{
							func_36(&(uParam0->f_328), 256);
						}
						else if (func_145(&(uParam0->f_201), cVar15, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							func_36(&(uParam0->f_328), 256);
						}
					}
				}
			}
		}
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	vector3 vVar6[24];
	vector3 vVar9[24];

	if ((!func_69(&(uParam0->f_318)) || func_144(1)) || TASK::DOES_SCENARIO_POINT_EXIST(TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35)))
	{
		func_68(&(uParam0->f_318));
	}
	if ((func_45(uParam0->f_69, 0) && func_65(Global_35, uParam0->f_306, 1, 0)) && func_150(uParam0->f_69, Global_35, 0, 15f, 0))
	{
		if (func_130(&(uParam0->f_318)) >= 0.75f)
		{
			iVar1 = func_153(uParam0->f_300);
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				iVar5 = func_154(uParam0->f_300, iVar0);
				if (!func_155(iVar5))
				{
					if (!func_156(Global_1347702[iVar5 /*49*/].f_12, 256) || func_101())
					{
						iVar2++;
					}
					else
					{
						bVar4 = true;
					}
				}
				else
				{
					iVar3++;
				}
				iVar0++;
			}
			if ((iVar2 == 0 && bVar4) || (iVar2 > 0 && iVar3 >= 2))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				return;
			}
			StringCopy(&cVar6, "JMRE", 24);
			if (iVar2 > 0)
			{
				StringCopy(&cVar6, "JMRE", 24);
			}
			else
			{
				StringCopy(&cVar6, "JFIN", 24);
			}
			MemCopy(&cVar9, {func_152(uParam0->f_300)}, 1);
			StringConCat(&cVar6, &cVar9, 24);
			if (func_145(&(uParam0->f_201), cVar6, 0, -1, 0, 0))
			{
				func_68(&(uParam0->f_318));
				func_36(&(uParam0->f_328), 32);
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0))
				{
					TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, 5000f, 1, 0, 0, 0);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, 5000, 0, 51, 0);
				}
			}
		}
	}
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_301 != 0)
	{
		func_36(&(uParam0->f_328), 2097152);
		return;
	}
	if (uParam0->f_300 == 38)
	{
		if ((func_130(&(uParam0->f_318)) > 5f && func_39(uParam0->f_328, 32)) && func_157(Global_35, -762.929f, -1265.749f, 43.051f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -762.929f, -1265.749f, 43.051f, 1f, 20000, 0.25f, 0, 16.36f);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(0, joaat("WORLD_HUMAN_STARE_STOIC"), -1, true, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else if (uParam0->f_300 == 76)
	{
		if (func_39(uParam0->f_328, 32) && func_157(Global_35, -276.282f, 807.353f, 118.379f, 0) > 1f)
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LOOK_AT_ENTITY(0, uParam0->f_67, -1, 0, 51, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_LEAN_POST_LEFT"), -276.282f, 807.353f, 118.379f, -60.915f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_69, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			func_36(&(uParam0->f_328), 2097152);
		}
	}
	else
	{
		func_36(&(uParam0->f_328), 2097152);
	}
}

void func_53(int iParam0, bool bParam1)
{
	func_158(iParam0, bParam1);
}

bool func_54(var uParam0)
{
	if (!func_39(uParam0->f_329, 256))
	{
		if (func_159(1) > uParam0->f_304)
		{
			func_117(&(uParam0->f_66));
			func_36(&(uParam0->f_329), 256);
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
			{
				func_55(uParam0->f_308);
				func_56(uParam0->f_308);
			}
			if (func_45(uParam0->f_69, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, false);
			}
			if (func_160())
			{
				func_161(1, 0, 0);
			}
			return true;
		}
	}
	return false;
}

void func_55(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_162(vVar0, 0);
}

void func_56(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_57(int iParam0)
{
}

void func_58(int iParam0)
{
	Global_1395482.f_10 = (Global_1395482.f_10 - (Global_1395482.f_10 && iParam0));
}

void func_59(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_109(uParam0);
	}
	Global_1392235.f_4 = 0;
	func_117(&(uParam0->f_66));
	func_117(&(uParam0->f_68));
	func_53(uParam0->f_67, 0);
	func_163();
	func_103(uParam0, 0);
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_67) && func_164(uParam0->f_67)) && ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4) == 0)
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
	}
	if (uParam0->f_27 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_27);
	}
	if (uParam0->f_28 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_28);
	}
	if (uParam0->f_29 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_29);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
	if (TASK::IS_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", false);
	}
	func_165(uParam0);
	func_166(&(uParam0->f_67), 1, 0, 1);
	func_167(uParam0, 1, 0);
	func_166(&(uParam0->f_69), 1, 1, 1);
	if (func_139(func_138(uParam0->f_300), 0) && (func_140(func_138(uParam0->f_300)) || !func_141(func_138(uParam0->f_300))))
	{
		func_142(func_138(uParam0->f_300), 0, 1, 0, 0);
	}
	func_168(0);
	func_55(uParam0->f_306);
	func_56(uParam0->f_306);
	func_56(uParam0->f_307);
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_308))
	{
		func_55(uParam0->f_308);
		func_56(uParam0->f_308);
	}
	func_56(uParam0->f_305);
	func_56(uParam0->f_310);
	func_56(uParam0->f_311);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
	{
		STREAMING::_0x4EDDD9E9CA5AF985(joaat("SC_BOUNTY_HUNTER_SHERIFF"));
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_371);
	}
	if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_71))
	{
		INTERIOR::UNPIN_INTERIOR(uParam0->f_71);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_72))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_72, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_73))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_73, false);
	}
}

void func_60(int iParam0)
{
	func_161(1, iParam0, 0);
}

bool func_61(int iParam0)
{
	if (!func_79(4))
	{
		if (!func_24(iParam0->f_389, 4))
		{
			return true;
		}
	}
	return false;
}

void func_62()
{
	StringCopy(&(Global_1395482.f_11), "", 24);
	StringCopy(&(Global_1395482.f_14), "", 24);
	StringCopy(&(Global_1395482.f_17), "", 24);
	StringCopy(&(Global_1395482.f_76), "", 32);
	func_88();
	func_169();
	func_170();
	Global_1395482.f_115 = 0;
	Global_1395482.f_116 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_94 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	Global_1395482.f_117 = 0;
	Global_1395482.f_93 = 0;
	func_37();
	func_58(4);
}

void func_63(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 7, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 4, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 14, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 4, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 1, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 2, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 3, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0->f_387, 16, true);
	}
}

void func_64(int iParam0, int iParam1)
{
	if (!func_83(iParam0))
	{
		return;
	}
	if (func_24(iParam0, iParam1))
	{
		Global_1395482.f_2[iParam0] = (Global_1395482.f_2[iParam0] - (Global_1395482.f_2[iParam0] && iParam1));
	}
}

bool func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_66(bool bParam0, bool bParam1)
{
	if (func_30(bParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(bParam0)));
	}
	return false;
}

bool func_67(var uParam0, float fParam1)
{
	if (!func_69(uParam0))
	{
		return false;
	}
	if (func_130(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	func_171(uParam0, 0f);
}

bool func_69(var uParam0)
{
	return func_172(*uParam0, 1);
}

int func_70(bool bParam0, bool bParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
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
		if (func_173())
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
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_174(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_175(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_68(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_176(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = bParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_177(func_151(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_71(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_178(bParam1, bParam2, bParam3);
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

bool func_72(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		if (func_39(uParam0->f_329, 4194304))
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
		return false;
	}
	if (uParam0->f_61 <= 0)
	{
		if (func_146(uParam0->f_67))
		{
			if (Global_40.f_9074.f_4 <= 0)
			{
				uParam0->f_64 = 0;
				func_117(&(uParam0->f_68));
				return true;
			}
			if (!func_69(&(uParam0->f_321)))
			{
				if (func_179(uParam0->f_67))
				{
					func_68(&(uParam0->f_321));
				}
			}
			else if ((!func_179(uParam0->f_67) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 5)
			{
				func_127(&(uParam0->f_321));
			}
			else if (func_130(&(uParam0->f_321)) > 5f)
			{
				uParam0->f_64 = 4;
				func_117(&(uParam0->f_68));
				return true;
			}
		}
		else if (!func_69(&(uParam0->f_321)))
		{
			if (func_179(uParam0->f_67))
			{
				func_68(&(uParam0->f_321));
			}
		}
		else if ((!func_179(uParam0->f_67) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) == 5)
		{
			func_127(&(uParam0->f_321));
		}
		else if (func_130(&(uParam0->f_321)) > 5f)
		{
			uParam0->f_64 = 4;
			func_117(&(uParam0->f_68));
			return true;
		}
	}
	fVar0 = func_175(Global_35, uParam0->f_67, 1, 1);
	if (uParam0->f_63 != 10)
	{
		if (fVar0 > fParam2)
		{
			if (func_146(uParam0->f_67))
			{
				uParam0->f_64 = 2;
			}
			else if (!PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				uParam0->f_64 = 3;
			}
			else
			{
				uParam0->f_64 = 1;
			}
			return true;
		}
		else if (fVar0 > fParam1)
		{
			if (!func_39(uParam0->f_329, 16))
			{
				func_129(uParam0, 256, 1);
				func_36(&(uParam0->f_329), 16);
			}
		}
		else if (fVar0 < (fParam1 - 25f))
		{
			if (func_39(uParam0->f_329, 16))
			{
				func_82(&(uParam0->f_329), 16);
				if (func_146(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
				{
					func_129(uParam0, 16, 0);
				}
				else
				{
					func_129(uParam0, 4, 0);
				}
			}
		}
	}
	if (func_180(PLAYER::PLAYER_ID(), 1, 1, 1))
	{
		uParam0->f_64 = 5;
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
	{
		if (func_45(uParam0->f_69, 0))
		{
			if (func_137(uParam0))
			{
				if ((uParam0->f_102 == 4 || uParam0->f_102 == 256) || uParam0->f_102 == 8192)
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THREATEN_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 5;
				}
				else
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_ASSAULT_LAW"), 0, 0, 0, 0, 0, 0, 0);
					uParam0->f_64 = 6;
				}
				return true;
			}
		}
		else
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_MURDER_LAW"), 0, 0, 0, 0, 0, 0, 0);
			uParam0->f_64 = 6;
			return true;
		}
	}
	if (uParam0->f_63 == 7 || uParam0->f_63 == 8)
	{
		fVar1 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar1 > 50f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar1 > 35f)
		{
			if (!func_39(uParam0->f_329, 131072))
			{
				func_36(&(uParam0->f_329), 131072);
				func_129(uParam0, 512, 1);
			}
		}
		else if (fVar1 < 30f)
		{
			if (func_39(uParam0->f_329, 131072))
			{
				func_82(&(uParam0->f_329), 131072);
				func_129(uParam0, 1024, 0);
			}
		}
	}
	if (uParam0->f_63 == 10)
	{
		fVar2 = func_157(Global_35, func_97(uParam0->f_300), 1);
		if (fVar2 > 75f)
		{
			uParam0->f_64 = 7;
			return true;
		}
		else if (fVar2 > 55f)
		{
			if (!func_39(uParam0->f_329, 33554432))
			{
				func_36(&(uParam0->f_329), 33554432);
				func_129(uParam0, 4096, 1);
			}
		}
		else if (fVar2 < 50f)
		{
			if (func_39(uParam0->f_329, 33554432))
			{
				func_82(&(uParam0->f_329), 33554432);
				func_129(uParam0, 2048, 0);
			}
		}
	}
	return false;
}

bool func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_387))
	{
		return true;
	}
	iVar0 = func_20(Global_35);
	if (iVar0 == iParam0->f_387)
	{
		return false;
	}
	iVar1 = PED::_GET_LAST_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		iVar0 = func_20(iVar1);
		if (iVar0 == iParam0->f_387)
		{
			return false;
		}
	}
	if (func_174(iParam0->f_387, 1, 1) < 50f)
	{
		return false;
	}
	return true;
}

int func_74()
{
	return Global_1897952.f_41;
}

int func_75(int iParam0)
{
	int iVar0;

	if (!func_181(iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	switch (iParam0)
	{
		case 8:
			return -1;
		case 3:
		case 5:
		case 9:
			iVar0 = 3;
			break;
		case 6:
		case 10:
			iVar0 = 4;
			break;
		case 1:
		case 7:
			iVar0 = 2;
			break;
		case 0:
		case 2:
			iVar0 = 6;
			break;
		case 4:
		case 12:
			iVar0 = 1;
			break;
		case 11:
			iVar0 = 5;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 0;
			break;
	}
	if (func_182(iVar0))
	{
		iVar0 = func_183(iVar0);
	}
	return iVar0;
}

bool func_76(int iParam0)
{
	return false;
}

bool func_77(int iParam0)
{
	if (((func_78(iParam0, 1) && func_78(iParam0, 2)) && func_78(iParam0, 8)) && func_78(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_79(int iParam0)
{
	return (Global_1395482.f_10 && iParam0) != 0;
}

bool func_80(int iParam0)
{
	if (func_83(iParam0))
	{
		return MISC::IS_BIT_SET(Global_1395482.f_117, iParam0);
	}
	return false;
}

Vector3 func_81(int iParam0, char* sParam1)
{
	vector3 vVar0;

	vVar0 = { iParam0->f_398 };
	StringConCat(&vVar0, "_", 24);
	StringConCat(&vVar0, sParam1, 24);
	return vVar0;
}

void func_82(int iParam0, int iParam1)
{
	func_184(iParam0, iParam1);
}

bool func_83(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_84(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_185(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_186(iVar25, 0) && func_187(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_85(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 186, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 278, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 21, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 314, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 466, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 326, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(*uParam0, 16, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 24, false);
	PED::_0x2E5B5D1F1453E08E(*uParam0, 1);
	MISC::_0x7FA58CED69405F9A(*uParam0, 3);
	HUD::_UIPROMPT_SET_FAVOURED_PED_FOR_CONFLICT_RESOLUTION(*uParam0);
	func_188(*uParam0, 0);
}

void func_86(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringCopy(&(uParam0->f_325), "BNTY_NME_GU", 24);
	}
	else
	{
		StringCopy(&(uParam0->f_325), sParam1, 24);
	}
	uParam0->f_300 = uParam2;
	Global_40.f_9074.f_3 = iParam3;
	Global_40.f_9074.f_4 = iParam4;
	uParam0->f_303 = iParam3;
	uParam0->f_302 = iParam4;
	uParam0->f_65 = -1;
	func_82(&(uParam0->f_329), 512);
	func_189(uParam0, bParam5);
}

bool func_87(bool bParam0)
{
	if (bParam0)
	{
		if (Local_15.f_458 >= 3)
		{
			if (Local_15.f_459 >= 3)
			{
				return true;
			}
		}
	}
	if (Local_15.f_456 >= 5)
	{
		if (Local_15.f_457 >= 5)
		{
			return true;
		}
	}
	return false;
}

void func_88()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&(Global_1395482.f_20[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_36[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_52[iVar0 /*3*/]), "", 24);
		StringCopy(&(Global_1395482.f_62[iVar0 /*3*/]), "", 24);
		iVar0++;
	}
	Global_1395482.f_115 = 0;
	Global_1395482.f_114 = 0;
	Global_1395482.f_72 = 0;
	Global_1395482.f_73 = 0;
	Global_1395482.f_74 = 0;
	Global_1395482.f_75 = 0;
	func_64(Global_1395482.f_1, 8);
	func_64(Global_1395482.f_1, 16);
}

void func_89(bool bParam0)
{
	if (!PED::IS_PED_DEAD_OR_DYING(Local_15.f_387, true))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_15.f_387))
			{
				if (!func_69(&(Local_15.f_393)))
				{
					func_68(&(Local_15.f_393));
					if (Local_15.f_498 == 0)
					{
						Local_15.f_499 = 1f;
					}
					else if (bParam0)
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					}
					else
					{
						Local_15.f_499 = MISC::GET_RANDOM_FLOAT_IN_RANGE(7.5f, 18.5f);
					}
				}
				else if (func_190())
				{
					if (func_12(Local_15.f_388, 2))
					{
						if (func_67(&(Local_15.f_393), 2f))
						{
							func_191(bParam0);
						}
					}
					else if (func_67(&(Local_15.f_393), Local_15.f_499))
					{
						func_192(bParam0);
					}
				}
			}
		}
	}
}

bool func_90(float fParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(bParam2))
	{
		if (!func_66(bParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_193(fParam0))
	{
		return false;
	}
	return true;
}

int func_91(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return 0;
	}
	iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_194(Global_35))
		{
			iVar1 = func_195(Global_35);
		}
		else if (func_196(Global_35))
		{
			iVar1 = func_197(Global_35);
		}
		else if (func_198(Global_35))
		{
			iVar1 = func_199(Global_35);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_200(0))
		{
			iVar2 = func_201(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar2);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_200(1))
		{
			iVar3 = func_201(1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar3);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar4 = PED::_GET_LAST_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar4);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return iVar0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return iVar0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_HUMAN(iVar0))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (!(DECORATOR::DECOR_EXIST_ON(iVar0, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iVar0, "bIsCriminal")))
		{
			return 0;
		}
	}
	return iVar0;
}

bool func_92()
{
	if (func_12(Local_15.f_388, 32))
	{
		return false;
	}
	if (Local_15.f_477 < 0 || Local_15.f_477 >= 3)
	{
		func_15(&(Local_15.f_388), 32);
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_15.f_464[Local_15.f_477 /*4*/])))
	{
		func_14(Global_35, Local_15.f_387, &(Local_15.f_464[Local_15.f_477 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
	Local_15.f_477++;
	return true;
}

void func_93(var uParam0)
{
	bool bVar0;

	func_202(uParam0);
	switch (uParam0->f_63)
	{
		case 0:
			func_203(uParam0);
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			else
			{
				bVar0 = PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true);
				if (bVar0)
				{
					func_122(uParam0, 1);
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67) || PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_67) && !PED::IS_PED_HOGTIED(uParam0->f_67))
			{
				func_122(uParam0, 0);
			}
			ENTITY::_0xC3ABCFBC7D74AFA5(uParam0->f_67, 19, 1);
			if (func_204(uParam0->f_67, 0))
			{
				if (func_114(uParam0))
				{
					func_122(uParam0, 4);
				}
				else if (func_205(uParam0->f_67))
				{
					if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
					{
						func_122(uParam0, 5);
					}
					else
					{
						func_122(uParam0, 6);
					}
				}
				else
				{
					func_122(uParam0, 3);
				}
			}
			break;
		case 3:
			func_206(uParam0);
			if (!func_204(uParam0->f_67, 0))
			{
				func_122(uParam0, 2);
			}
			else if (func_114(uParam0))
			{
				func_122(uParam0, 4);
			}
			else if (func_205(uParam0->f_67))
			{
				if (!func_113(Global_36, func_97(uParam0->f_300), 30f, 1))
				{
					func_122(uParam0, 5);
				}
				else
				{
					func_109(uParam0);
					func_122(uParam0, 6);
				}
			}
			break;
		case 5:
			if (!func_205(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 6:
			if (func_164(uParam0->f_67))
			{
				func_122(uParam0, 3);
			}
			break;
		case 4:
			if (uParam0->f_62 >= 5)
			{
				if (!func_146(uParam0->f_67))
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 7);
				}
				else
				{
					func_68(&(uParam0->f_364));
					func_122(uParam0, 8);
				}
			}
			break;
		case 7:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			if (!func_146(uParam0->f_67))
			{
				func_207(uParam0);
				if (!func_204(uParam0->f_67, 1))
				{
					func_122(uParam0, 2);
				}
				else if (func_157(Global_35, func_208(uParam0), 0) < 1f && func_209(Global_35, func_208(uParam0)) < 3f)
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 1);
					func_122(uParam0, 12);
				}
			}
			else
			{
				func_68(&(uParam0->f_364));
				func_122(uParam0, 8);
			}
			break;
		case 8:
			if (!func_39(uParam0->f_329, 2) && !func_144(1))
			{
				if (uParam0->f_62 == 6 || uParam0->f_62 == 7)
				{
					func_129(uParam0, 1024, 1);
					func_36(&(uParam0->f_329), 2);
				}
			}
			func_207(uParam0);
			if (func_210(uParam0))
			{
				if (func_211(uParam0))
				{
					func_53(uParam0->f_67, 0);
					func_120(uParam0, 2);
					func_122(uParam0, 12);
				}
			}
			else if (!func_204(uParam0->f_67, 1))
			{
				if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uParam0->f_67) != 6)
				{
					if (func_43(Global_35, func_100(uParam0->f_300), 6.5f, 1, 1))
					{
						ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
						func_53(uParam0->f_67, 0);
						func_120(uParam0, 2);
						func_122(uParam0, 12);
					}
					else
					{
						func_122(uParam0, 9);
					}
				}
			}
			break;
		case 9:
			if (func_204(uParam0->f_67, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					func_122(uParam0, 8);
				}
				else
				{
					func_122(uParam0, 7);
				}
			}
			break;
		case 12:
			break;
	}
}

void func_94(var uParam0)
{
	if (!func_39(uParam0->f_329, 16777216))
	{
		if (!func_146(uParam0->f_67))
		{
			if (PED::_0x913D04A5176F84C9(uParam0->f_67))
			{
				if (!TASK::GET_IS_CARRIABLE_ENTITY(uParam0->f_67))
				{
					if (ENTITY::_GET_ENTITY_CARRY_CONFIG(uParam0->f_67) != joaat("HOGTIED_PED"))
					{
						TASK::TASK_CARRIABLE(uParam0->f_67, joaat("HOGTIED_PED"), 0, 0, 9);
						func_36(&(uParam0->f_329), 16777216);
					}
				}
			}
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(uParam0->f_67, 11, true) == 1)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 11, false);
	}
}

bool func_95(var uParam0)
{
	if (!Global_1935630.f_12)
	{
		if (func_212(uParam0->f_300) && func_213(uParam0->f_300))
		{
			return true;
		}
	}
	return false;
}

void func_96(var uParam0, int iParam1)
{
	uParam0->f_59 = iParam1;
}

Vector3 func_97(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2910.89f, 1310.44f, 44.38f;
		case 5:
			return 2506.39f, -1308.93f, 47.95f;
		case 105:
			return 1359.44f, -1304.92f, 76.76f;
		case 26:
			return -1808.58f, -350.06f, 163.65f;
		case 76:
			return -275.78f, 804.02f, 118.37f;
		case 38:
			return -757.78f, -1269.13f, 43.14f;
		case 115:
			return -5528.903f, -2929.261f, -2.2833f;
	}
	return 0f, 0f, 0f;
}

char* func_98()
{
	return "unnamed";
}

int func_99(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_214(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

Vector3 func_100(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2908.76f, 1304.58f, 43.91f;
		case 5:
			return 2483.26f, -1303.78f, 48.88f;
		case 105:
			return 1362.846f, -1294.084f, 75.7035f;
		case 26:
			return -1808.76f, -342.45f, 163.81f;
		case 76:
			return -277.76f, 816.93f, 118.15f;
		case 38:
			return -768.61f, -1277.13f, 42.56f;
		case 115:
			return -5533.509f, -2932.444f, -2.8992f;
	}
	return 0f, 0f, 0f;
}

bool func_101()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_102(var uParam0, int iParam1, char* sParam2)
{
	func_216(&(uParam0->f_103), iParam1, sParam2, 1);
}

void func_103(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (uParam0->f_300)
	{
		case 76:
			iVar0 = 4;
			break;
		case 26:
			iVar0 = 473;
			break;
		case 105:
			iVar0 = 71;
			break;
		case 5:
			break;
		case 38:
			iVar0 = 510;
			break;
		case 115:
			iVar0 = 349;
			break;
	}
	if (iVar0 != -1)
	{
		if (bParam1)
		{
			func_217(iVar0);
			func_36(&(uParam0->f_329), 16384);
		}
		else if (func_39(uParam0->f_329, 16384))
		{
			func_218(iVar0);
		}
	}
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_219(uParam0->f_300);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_220(uParam0->f_300, iVar1);
		iVar1++;
	}
	func_99(uParam0->f_306, "volSheriffOffice", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	func_168(1);
}

void func_105(int iParam0)
{
	if (iParam0 == 105)
	{
		func_221(349074475, 1);
		func_221(1614494720, 1);
	}
	else if (iParam0 == 26)
	{
	}
	else if (iParam0 == 76)
	{
		func_221(1988748538, 1);
	}
	else if (iParam0 == 5)
	{
	}
	else if (iParam0 == 38)
	{
	}
	else if (iParam0 == 115)
	{
	}
}

void func_106(int iParam0)
{
	if (iParam0 == 26)
	{
		func_221(1821044729, 1);
	}
	else if (iParam0 == 76)
	{
		func_222(joaat("DOOR_VAL_JAIL_CELL_01"), 0, 1f, 0, 1, 0, 0, 0);
	}
}

bool func_107(var uParam0)
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	STREAMING::REQUEST_MODEL(uParam0->f_14, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_14))
	{
		iVar0 = 0;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_19, false);
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		iVar0 = 0;
	}
	if (uParam0->f_5 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_5, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_7, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_7))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_11, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_11))
		{
			iVar0 = 0;
		}
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::REQUEST_MODEL(uParam0->f_9, false);
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
		{
			iVar0 = 0;
		}
	}
	switch (uParam0->f_300)
	{
		case 76:
			sVar1 = "BHJVAAU";
			break;
		case 26:
			sVar1 = "BHJSTAU";
			break;
		case 105:
			sVar1 = "BHJROAU";
			break;
		case 5:
			sVar1 = "BHJSDAU";
			break;
		case 38:
			sVar1 = "BHJBWAU";
			break;
		case 115:
			sVar1 = "BHJTWAU";
			break;
		case 78:
			sVar1 = "";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar1);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_108(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 8;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = func_223(uParam0->f_300, iVar2);
		if (func_224(iVar0) && func_225(iVar0))
		{
			func_221(iVar0, 1);
		}
		iVar2++;
	}
}

void func_109(var uParam0)
{
	if (uParam0->f_375 > 0 && STREAMING::HAS_ANIM_DICT_LOADED("script_proc@bounty@riding_punch"))
	{
		STREAMING::REMOVE_ANIM_DICT("script_proc@bounty@riding_punch");
	}
	if (func_226(uParam0->f_375.f_1))
	{
		func_227(&(uParam0->f_375.f_1), 1, 1);
	}
	if (func_69(&(uParam0->f_375.f_3)))
	{
		func_127(&(uParam0->f_375.f_3));
	}
	if (uParam0->f_375 != 0)
	{
		uParam0->f_375 = 0;
	}
}

void func_110(var uParam0)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar4;
	struct<4> /*32*/ sVar8;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && uParam0->f_62 != 0)
	{
		func_228(uParam0, 0);
	}
	if ((uParam0->f_301 == 2 && TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371)) && PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_69, 0, 1);
	}
	switch (uParam0->f_62)
	{
		case 0:
			if (func_229(uParam0))
			{
				func_228(uParam0, 1);
			}
			break;
		case 1:
			if (uParam0->f_25)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
				{
					if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
						{
							func_230(uParam0);
						}
						else
						{
							if (uParam0->f_301 == 0)
							{
								Var4 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Sheriff", uParam0->f_30[0 /*14*/].f_9) };
								uParam0->f_371 = func_232(joaat("SC_BOUNTY_HUNTER_SHERIFF"), Var4, Var4.f_3, 0, 0, 0);
							}
							else
							{
								uParam0->f_371 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_4, joaat("SC_BOUNTY_HUNTER_SHERIFF"), 0.0086562f, 0.0409636f, 0.5f, 179.9999f, 0, 0, 1);
							}
							STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_BOUNTY_HUNTER_SHERIFF"), 15, 0, 0);
							TASK::_0xE69FDA40AAC3EFC0(uParam0->f_371, 0);
						}
					}
					else
					{
						if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
						{
							Var0 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Chair", uParam0->f_30[0 /*14*/].f_9) };
							func_233(uParam0->f_4, Var0, 2, 1073741824 /* Float: 2f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
							{
								Var8 = { func_231(uParam0->f_30[0 /*14*/].f_1, "Book", uParam0->f_30[0 /*14*/].f_9) };
								func_233(uParam0->f_10, Var8, 0, 1073741824 /* Float: 2f */);
							}
						}
						func_123(uParam0);
						func_228(uParam0, 2);
					}
				}
			}
			break;
		case 2:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_371))
			{
				func_228(uParam0, 1);
			}
			if (func_114(uParam0) && func_69(&(uParam0->f_372)))
			{
				if (func_130(&(uParam0->f_372)) > 1f)
				{
					func_234(uParam0);
					func_68(&(uParam0->f_372));
					func_228(uParam0, 3);
				}
			}
			else
			{
				func_68(&(uParam0->f_372));
			}
			break;
		case 3:
			if (func_114(uParam0))
			{
				if (func_130(&(uParam0->f_372)) > 1f || func_235(uParam0))
				{
					if (uParam0->f_360)
					{
						func_228(uParam0, 4);
					}
					else
					{
						func_228(uParam0, 5);
					}
				}
			}
			break;
		case 4:
			if (func_114(uParam0))
			{
				if (func_236(uParam0))
				{
					func_228(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_114(uParam0))
			{
				if (func_237(uParam0))
				{
					func_68(&(uParam0->f_372));
					func_228(uParam0, 6);
				}
			}
			break;
		case 6:
			if (func_130(&(uParam0->f_372)) > 1f)
			{
				if (uParam0->f_361 && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[0 /*14*/].f_1, false))
				{
					if (TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
					{
						if (uParam0->f_301 == 0)
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
							TASK::TASK_START_SCENARIO_IN_PLACE_HASH(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
							TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
						}
						else
						{
							TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
						}
					}
					func_228(uParam0, 7);
				}
			}
			break;
	}
}

void func_111(var uParam0)
{
	bool bVar0;

	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_306, false, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (uParam0->f_61 > 0)
	{
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
		}
	}
	else if (func_164(uParam0->f_67))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (func_238(uParam0, bVar0))
		{
			if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, true);
			}
		}
		else if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 4, false);
		}
		if (uParam0->f_63 == 8)
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_67, 14))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 14, false);
			}
		}
	}
}

int func_112(var uParam0)
{
	if (uParam0->f_25)
	{
		return 1;
	}
	if (func_239(uParam0))
	{
		uParam0->f_25 = 1;
	}
	return 0;
}

bool func_113(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_136(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_114(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_307))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_307, false, 0))
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_67, uParam0->f_306, false, 0))
	{
		return true;
	}
	return false;
}

void func_115(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_116(var uParam0)
{
	switch (uParam0->f_5)
	{
		case 0:
			return Global_35;
		case 1:
			return Local_15.f_387;
		default:
			break;
	}
	return 0;
}

void func_117(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_118(var uParam0)
{
	if (uParam0->f_301 == 0)
	{
		if (((ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false) && !func_49(uParam0->f_69, 993674639)) && !func_49(uParam0->f_69, -1098463898)) && !func_49(uParam0->f_69, -76381094))
		{
			if (uParam0->f_300 == 105)
			{
				if (func_157(Global_35, 1360.928f, -1305.943f, 76.761f, 0) > 1.5f)
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1360.928f, -1305.943f, 76.761f, -15.235f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_69, joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), 1357.958f, -1304.813f, 76.761f, -20.879f, -1, true, false, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_D", -1f, false);
				}
			}
			else
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(uParam0->f_69, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -1, true, 0, -1f, false);
			}
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
		}
	}
	else if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_69, uParam0->f_371))
	{
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_30[0 /*14*/].f_1, "Sheriff") || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_30[0 /*14*/].f_1, "Sheriff"))
		{
			func_123(uParam0);
		}
	}
}

bool func_119(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (uParam0->f_25)
			{
				func_240(Global_35, 0);
				func_117(&(uParam0->f_66));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9, 1069379748 /* Float: 1.48f */, false, 256, 20000, -1082130432 /* Float: -1f */);
				func_242(uParam0, 2);
				func_242(uParam0, 1);
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_243(uParam0->f_300);
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 0 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 2, false);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1);
				func_242(uParam0, 2);
			}
			break;
		case 2:
			if (!uParam0->f_362)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
				{
					TASK::_0x541E5B41DCA45828(uParam0->f_69, 1, 0);
					TASK::TASK_CLEAR_LOOK_AT(uParam0->f_69);
					uParam0->f_362 = 1;
				}
			}
			PED::SET_PED_RESET_FLAG(Global_35, 108, true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300)))
			{
				func_244(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			return true;
	}
	return false;
}

void func_120(var uParam0, int iParam1)
{
	uParam0->f_60 = iParam1;
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_65;
	if (iVar0 != -1)
	{
		if (func_146(uParam0->f_67))
		{
			func_245(iVar0, 1);
		}
		else
		{
			func_246(iVar0, 1);
		}
	}
	LAW::_0x73BAD7B2F2DB50DE(PLAYER::PLAYER_ID(), func_247(uParam0->f_300, 1, 1));
	if (!func_146(uParam0->f_67))
	{
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 1, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 2, false);
		PED::SET_PED_KEEP_TASK(uParam0->f_67, true);
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_67);
		func_249(iVar1, uParam0->f_300, func_248(uParam0->f_300));
		func_250(iVar1, uParam0->f_300, uParam0->f_299);
		if (!func_251(&(uParam0->f_67)))
		{
			func_252(iVar1, uParam0->f_300);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 4, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_67, 6, false);
		func_36(&(uParam0->f_329), 2048);
	}
}

void func_122(var uParam0, int iParam1)
{
	if (uParam0->f_63 != iParam1)
	{
		uParam0->f_63 = iParam1;
		func_82(&(uParam0->f_329), 2);
		switch (iParam1)
		{
			case 0:
				if (func_45(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 4, 1);
				break;
			case 1:
				if (func_45(uParam0->f_67, 0))
				{
					AUDIO::STOP_PED_SPEAKING(uParam0->f_67, false);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 8, 1);
				break;
			case 2:
				if (func_45(uParam0->f_67, 0))
				{
					if (!func_39(uParam0->f_329, 67108864))
					{
						AUDIO::STOP_PED_SPEAKING(uParam0->f_67, true);
					}
				}
				if (!func_253(Global_35))
				{
					func_109(uParam0);
				}
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				MISC::_0x7FA58CED69405F9A(uParam0->f_67, 3);
				func_129(uParam0, 16, 1);
				break;
			case 3:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 3);
				func_129(uParam0, 32, 1);
				break;
			case 5:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_255(uParam0);
				func_129(uParam0, 64, 0);
				break;
			case 6:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 128, 0);
				break;
			case 4:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				break;
			case 7:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 7);
				func_129(uParam0, 1024, 0);
				break;
			case 8:
				func_117(&(uParam0->f_68));
				func_254(uParam0, 8);
				func_129(uParam0, 1024, 0);
				break;
			case 9:
				func_117(&(uParam0->f_66));
				func_203(uParam0);
				func_129(uParam0, 16, 1);
				break;
			case 10:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 2048, 1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
				{
					uParam0->f_66 = func_256(408396114, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, true, false), 1);
				}
				else
				{
					uParam0->f_66 = func_256(408396114, func_44(uParam0->f_300, uParam0->f_65), 1);
				}
				break;
			case 11:
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_129(uParam0, 8192, 1);
				uParam0->f_66 = func_257(408396114, uParam0->f_8, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_RWRD");
				break;
			case 12:
				UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
				func_117(&(uParam0->f_68));
				func_117(&(uParam0->f_66));
				func_37();
				break;
		}
	}
}

void func_123(var uParam0)
{
	switch (uParam0->f_301)
	{
		case 1:
		case default:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", -1, false, true, 0, false, -1f, false);
			break;
		case 0:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_STANDING_DESK", -1, false, true, 0, false, -1f, false);
			break;
		case 2:
			TASK::TASK_USE_SCENARIO_POINT(uParam0->f_69, uParam0->f_371, "SCRIPT_COMMON_SHERIFF_SIT_WRITING", -1, false, true, 0, false, -1f, false);
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_12));
	}
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 19:
		case 20:
			return joaat("GANG_BANDITOS");
		case 17:
		case 18:
			return joaat("GANG_SAVAGES");
		case 12:
		case 154:
			return joaat("GANG_EXCONFED");
		case 153:
			return joaat("GANG_RANCHERS");
	}
	return 0;
}

bool func_125(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_310))
	{
		vVar0 = { uParam0->f_1 };
		uParam0->f_310 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0.x, vVar0.y, (vVar0.z + 1f), 0f, 0f, 0f, 4.5f, 4.5f, 2.2f, "BH_RewardLineTriggerFar");
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_311))
	{
		vVar3 = { uParam0->f_1 };
		uParam0->f_311 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar3.x, vVar3.y, (vVar3.z + 1f), 0f, 0f, 0f, 3f, 3f, 2.2f, "BH_RewardLineTriggerClose");
	}
	if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_306, Global_36))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_310, Global_36) && ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_69))
		{
			return true;
		}
		else if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_311, Global_36))
		{
			return true;
		}
	}
	return false;
}

bool func_126(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	vector3 vVar5[24];
	vector3 vVar8;

	if (AUDIO::_0x54B187F111D9C6F8(uParam0->f_69, 0))
	{
		return false;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		iVar0 = func_258(uParam0->f_6, Global_35, 1060437492 /* Float: 0.707f */);
		iVar1 = func_258(uParam0->f_6, Global_35, 1f);
		StringCopy(&cVar5, "PB", 24);
		switch (uParam0->f_301)
		{
			case 1:
			case default:
				StringCopy(&cVar2, "_RELAX", 24);
				break;
			case 0:
				StringCopy(&cVar2, "_STAND", 24);
				break;
			case 2:
				StringCopy(&cVar2, "_WRITE", 24);
				break;
		}
		StringConCat(&cVar5, &cVar2, 24);
		switch (uParam0->f_300)
		{
			case 76:
				StringConCat(&cVar5, "_FL", 24);
				break;
			case 26:
			case 38:
			case 78:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FR", 24);
				}
				else
				{
					StringConCat(&cVar5, "_R", 24);
				}
				break;
			case 105:
				StringConCat(&cVar5, "_R", 24);
				break;
			case 5:
				if (iVar1 == 2)
				{
					StringConCat(&cVar5, "_R", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
			case 115:
				if (iVar0 == 0)
				{
					StringConCat(&cVar5, "_FL", 24);
				}
				else
				{
					StringConCat(&cVar5, "_L", 24);
				}
				break;
		}
		if (uParam0->f_301 == 0)
		{
			StringConCat(&cVar5, "_LOOK", 24);
		}
		else
		{
			StringConCat(&cVar5, &cVar2, 24);
		}
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_30[0 /*14*/].f_1, &cVar5);
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_30[0 /*14*/].f_1, &cVar5))
		{
			if (uParam0->f_301 == 2 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
			{
				uParam0->f_12 = PED::_0x4D0D2E3D8BC000EB(uParam0->f_69, "p_pen01x", 1);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "PEN", uParam0->f_12, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				vVar8 = { func_231(uParam0->f_30[0 /*14*/].f_1, "MONEY", &cVar5) };
				uParam0->f_8 = OBJECT::CREATE_OBJECT(uParam0->f_9, vVar8, true, true, false, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[0 /*14*/].f_1, "MONEY", uParam0->f_8, 0);
				OBJECT::_0xDFA1237F5228263F(uParam0->f_8, Global_35);
			}
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_30[0 /*14*/].f_1);
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_30[0 /*14*/].f_1, &cVar5, true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_30[0 /*14*/].f_1, "BASE_BOOL", true, false);
			return true;
		}
	}
	return false;
}

void func_127(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_128(var uParam0)
{
	if (!func_69(uParam0))
	{
		return 0f;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

void func_129(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	if (bParam2)
	{
		if (func_39(uParam0->f_330, iParam1))
		{
			bParam2 = false;
		}
	}
	switch (iParam1)
	{
		case 2:
			if (func_261(uParam0->f_65))
			{
				sVar0 = "BNTY_O_FLCTA";
			}
			else if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_LCTEA";
			}
			else
			{
				sVar0 = "BNTY_O_LCTED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 4:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (Global_40.f_9074.f_4 == 0)
			{
				sVar0 = "BNTY_O_CTREA";
			}
			else
			{
				sVar0 = "BNTY_O_CTRED";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 8:
			sVar0 = "BNTY_O_HOGA";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 16:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 64:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			sVar0 = "BNTY_O_MOUNT";
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 128:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_PICKA";
			}
			else
			{
				sVar0 = "BNTY_O_PICKD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 32:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_RTA";
			}
			else
			{
				sVar0 = "BNTY_O_RTD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), func_264(uParam0->f_300));
			if (bParam2)
			{
				func_265(sVar0, uParam0);
			}
			break;
		case 256:
			if (func_39(uParam0->f_329, 1048576))
			{
				return;
			}
			if (func_45(uParam0->f_67, 2) && ((PED::IS_PED_FLEEING(uParam0->f_67) || PED::IS_PED_ON_MOUNT(uParam0->f_67)) || PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_67, false)))
			{
				sVar0 = "BNTY_W_DIST_E";
			}
			else
			{
				sVar0 = "BNTY_W_DIST_R";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 512:
			sVar0 = "BNTY_W_RJL";
			func_262(uParam0, bParam2, sVar0, func_264(uParam0->f_300), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, func_264(uParam0->f_300)), 7500, 0, 0, 0, 1);
			}
			break;
		case 1024:
			if (!func_146(uParam0->f_67))
			{
				sVar0 = "BNTY_O_JLA";
			}
			else if (func_210(uParam0))
			{
				sVar0 = "BNTY_O_JLW";
			}
			else
			{
				sVar0 = "BNTY_O_JLD";
			}
			func_262(uParam0, bParam2, sVar0, &(uParam0->f_325), 0);
			if (bParam2)
			{
				func_263(MISC::VAR_STRING(10, sVar0, &(uParam0->f_325)), 7500, 0, 0, 0, 1);
			}
			break;
		case 2048:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_O_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_O_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4096:
			if (func_266(uParam0))
			{
				sVar0 = "BNTY_R_CHIEF";
			}
			else
			{
				sVar0 = "BNTY_R_SHRF";
			}
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 8192:
			sVar0 = "BNTY_O_RWRD";
			func_262(uParam0, bParam2, sVar0, 0, 0);
			if (bParam2)
			{
				func_267(sVar0, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
	}
	if (bParam2)
	{
		func_36(&(uParam0->f_330), iParam1);
	}
}

float func_130(var uParam0)
{
	if (!func_69(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_259(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_260() - uParam0->f_1);
}

bool func_131(var uParam0)
{
	return false;
}

bool func_132(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];
	vector3 vVar7[24];
	vector3 vVar10[24];

	if (uParam0->f_65 == 14)
	{
		return true;
	}
	vVar0 = { func_268(uParam0, uParam0->f_383) };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
	{
		if (!func_144(1))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_383++;
				vVar0 = { func_268(uParam0, uParam0->f_383) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
				{
					return true;
				}
			}
		}
	}
	else if (uParam0->f_358 || func_39(uParam0->f_328, 268435456))
	{
		if (func_146(uParam0->f_67))
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_DEAD", 32);
		}
		else
		{
			StringCopy(&cVar3, "BOUNTY_TURN_IN_ALIVE", 32);
		}
		if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
		{
			return true;
		}
	}
	else
	{
		StringCopy(&cVar7, "JPAY", 24);
		MemCopy(&cVar10, {func_152(uParam0->f_300)}, 1);
		StringConCat(&cVar7, &cVar10, 24);
		if (func_145(&(uParam0->f_201), cVar7, 0, -1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_133(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_215() != -1)
	{
		return;
	}
	if (func_269(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_270())
	{
		iVar1 = 0;
	}
	func_271(iParam0, iVar1);
}

int func_134(var uParam0)
{
	if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_30[0 /*14*/].f_1, false)) || func_272(uParam0))
	{
		if (func_146(uParam0->f_67))
		{
			Global_1392235 = 0;
		}
		else
		{
			Global_1392235 = 1;
		}
		TASK::SET_SCENARIO_GROUP_ENABLED("RANSACK_BH_REWARD", true);
		func_273();
		uParam0->f_304 = func_159(1);
		func_122(uParam0, 11);
		return 1;
	}
	return 0;
}

void func_135(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_274(0, uParam0->f_300, 2, 0);
	func_275(iVar0);
	if (func_101())
	{
		iVar1 = func_276(iVar0);
		func_277(iVar0, iVar1 + 1);
	}
	else
	{
		iVar1 = func_278(iVar0);
		func_279(iVar0, iVar1 + 1);
	}
	func_281(iVar0, func_280());
	Global_1392235.f_4 = 0;
	if (func_39(uParam0->f_329, 512))
	{
		if (func_185(func_282(uParam0->f_65), 1, 0))
		{
			func_283(func_282(uParam0->f_65), 1, 0, -142743235, 0);
		}
	}
}

float func_136(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_137(var uParam0)
{
	if (func_284(uParam0->f_69, 0, &(uParam0->f_74), &(uParam0->f_102), 0, 0))
	{
		if (uParam0->f_102 == 2)
		{
			return true;
		}
		else if (uParam0->f_102 == 4)
		{
			return true;
		}
		else if (uParam0->f_102 == 8)
		{
			return true;
		}
		else if (uParam0->f_102 == 8192)
		{
			if (func_285(uParam0->f_69, &(uParam0->f_74), 1))
			{
				return true;
			}
		}
		else if (uParam0->f_102 == 64)
		{
			return true;
		}
		else if (uParam0->f_102 == 256)
		{
			if (func_65(Global_35, uParam0->f_306, 1, 0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_138(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_139(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	if (!func_140(iParam0) && bParam1)
	{
		return false;
	}
	return func_287(iParam0, 1);
}

bool func_140(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_141(int iParam0)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_142(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_286(iParam0))
	{
		return;
	}
	if (!func_287(iParam0, 1))
	{
		return;
	}
	if (!func_287(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_140(iParam0)) && func_141(iParam0))
	{
		return;
	}
	func_288(iParam0, 1);
	func_289(iParam0);
	if (func_291(func_290(iParam0)))
	{
		iVar0 = func_292(iParam0);
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
		func_288(iParam0, 16);
	}
	if (func_287(iParam0, 128) && !bParam3)
	{
		func_293(iParam0, 0);
	}
}

void func_143(int iParam0, int iParam1)
{
	func_161(1, iParam0, iParam1);
}

bool func_144(int iParam0)
{
	return AUDIO::_0xFE5C6177064BD390(iParam0);
}

bool func_145(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_294(cParam1, cParam0);
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

bool func_146(bool bParam0)
{
	if (func_45(bParam0, 0))
	{
		return false;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
	{
		return false;
	}
	return true;
}

bool func_147(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;

	fVar0 = 0f;
	if (bParam2)
	{
		fVar0 = 4f;
	}
	switch (iParam0)
	{
		case 76:
			if (func_157(Global_35, -275.43f, 802.52f, 118.41f, 0) < (1f + fVar0) || func_157(Global_35, -276.39f, 812.02f, 118.42f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 78:
			if (func_157(Global_35, 2911.362f, 1310.298f, 43.94069f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 26:
			if (!bParam1 && func_157(Global_35, -1806.44f, -350.96f, 163.65f, 0) < (1f + fVar0))
			{
				return true;
			}
			if (func_157(Global_35, -1812.81f, -345.61f, 163.66f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 105:
			if (func_157(Global_35, 1359.11f, -1305.88f, 76.77f, 0) < (1f + fVar0) || func_157(Global_35, 1358.8f, -1298.06f, 76.78f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 5:
			if ((((((func_157(Global_35, 2511.1f, -1311.37f, 47.95f, 0) < (1.5f + fVar0) || func_157(Global_35, 2507.45f, -1317.49f, 47.62f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2496.77f, -1317.49f, 47.81f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.1f, -1311.09f, 47.94f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2493.22f, -1306.48f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2511.18f, -1306.25f, 47.95f, 0) < (1.5f + fVar0)) || func_157(Global_35, 2516.28f, -1308.78f, 47.96f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
		case 38:
			if (func_157(Global_35, -756.9f, -1269.2f, 43.03f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			else if (func_157(Global_35, -769.19f, -1269.29f, 42.98f, 0) < (1f + fVar0))
			{
				return true;
			}
			break;
		case 115:
			if (!bParam1 && func_157(Global_35, -5527.72f, -2930.482f, -2.2717f, 0) < (1.5f + fVar0))
			{
				return true;
			}
			break;
	}
	return false;
}

struct<4> /*32*/ func_148(int iParam0)
{
	char cVar0[32];
	char cVar4[32];

	StringCopy(&cVar0, "JPAY", 32);
	MemCopy(&cVar4, {func_152(iParam0)}, 1);
	StringConCat(&cVar0, &cVar4, 32);
	if (func_101())
	{
		StringConCat(&cVar0, "J", 32);
	}
	else
	{
		StringConCat(&cVar0, "A", 32);
	}
	return cVar0;
}

Vector3 func_149(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 76:
			StringCopy(&cVar0, "JRPY_VA_NOT", 24);
			break;
		case 38:
			StringCopy(&cVar0, "JRPY_BW", 24);
			break;
		case 26:
			StringCopy(&cVar0, "JRPY_ST_A", 24);
			break;
		case 78:
			StringCopy(&cVar0, "", 24);
			break;
		case 105:
			StringCopy(&cVar0, "JRPYE_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "", 24);
			break;
		case 115:
			StringCopy(&cVar0, "BHJTW_PAY_LEALY", 24);
			break;
	}
	return cVar0;
}

bool func_150(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_295(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_296(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

bool func_151(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = bParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_297(bParam0, &Var0);
}

Vector3 func_152(int iParam0)
{
	vector3 vVar0[24];

	switch (iParam0)
	{
		case 26:
			StringCopy(&cVar0, "_ST", 24);
			break;
		case 76:
			StringCopy(&cVar0, "_VA", 24);
			break;
		case 105:
			StringCopy(&cVar0, "_RO", 24);
			break;
		case 5:
			StringCopy(&cVar0, "_SD", 24);
			break;
		case 38:
			StringCopy(&cVar0, "_BW", 24);
			break;
		case 115:
			StringCopy(&cVar0, "_TW", 24);
			break;
		case 78:
			StringCopy(&cVar0, "_AN", 24);
			break;
		default:
			StringCopy(&cVar0, "_ST", 24);
			break;
	}
	return cVar0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

bool func_155(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return func_299(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_156(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_157(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

void func_158(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

int func_159(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_160()
{
	return func_300(1);
}

void func_161(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_162(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_301(vParam0))
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
			if (func_302(vVar2, vParam0, 2f, 1))
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

void func_163()
{
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_MONEYCLIP")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_MONEYCLIP"));
	}
}

bool func_164(int iParam0)
{
	if ((ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 5 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 4) || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 9)
	{
		if (PED::_GET_CARRIER_AS_HUMAN(iParam0) == Global_35)
		{
			return true;
		}
	}
	return false;
}

void func_165(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
	if (uParam0->f_7 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
	}
	if (uParam0->f_9 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9);
	}
	if (uParam0->f_11 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_11);
	}
}

void func_166(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_167(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_303(func_44(uParam0->f_300, uParam0->f_65), 3f, 2);
	}
	if (uParam0->f_300 == 26 || uParam0->f_300 == 105)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
	}
	else if (uParam0->f_300 == 38 || uParam0->f_300 == 76)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_WORKBENCHDESK01X_RIGHT", bParam1);
	}
	else if (uParam0->f_300 == 5)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK08X_R", bParam1);
	}
	else if (uParam0->f_300 == 115)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_DESK07X", bParam1);
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_P_CABINET13X", bParam1);
	}
}

void func_168(int iParam0)
{
	Global_1396116.f_139 = iParam0;
}

void func_169()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_95[iVar0 /*6*/]), "", 32);
		Global_1395482.f_95[iVar0 /*6*/].f_4 = 2;
		iVar0++;
	}
	Global_1395482.f_94 = 0;
	func_64(Global_1395482.f_1, 512);
}

void func_170()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&(Global_1395482.f_80[iVar0 /*4*/]), "", 32);
		iVar0++;
	}
	Global_1395482.f_93 = 0;
}

void func_171(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_260() - fParam1);
	func_304(uParam0, 1);
	func_305(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_172(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_173()
{
	return (Global_1894899 & 1 != 0 && func_33() != -1);
}

float func_174(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1f;
	}
	return func_175(Global_35, bParam0, bParam1, bParam2);
}

float func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_176(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_177(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
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

bool func_179(int iParam0)
{
	var uVar0;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 3 && !ENTITY::_0x383F64263F946E45(&uVar0, iParam0, 4, Global_35, 0, 1))
	{
		if (!FIRE::IS_ENTITY_ON_FIRE(iParam0) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_180(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_71(iParam0, bParam1, bParam2, bParam3))
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

bool func_181(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(iParam0))
	{
		return false;
	}
	if (func_24(iParam0, 2))
	{
		if (iParam0 == 2 && func_306(12))
		{
			func_64(iParam0, 2);
		}
		else
		{
			return true;
		}
		if (iParam0 == 5)
		{
			if (!func_307())
			{
				func_64(iParam0, 2);
			}
			else
			{
				return true;
			}
		}
	}
	else if (iParam0 == 5)
	{
		if (func_307())
		{
			func_40(iParam0, 2);
			return true;
		}
	}
	iVar0 = func_308(iParam0);
	if (func_212(iVar0))
	{
		if (func_309(iVar0))
		{
			return true;
		}
	}
	iVar1 = func_310(iParam0);
	if (func_181(iVar1))
	{
		iVar2 = func_311(iVar1);
		if (func_312(iVar2))
		{
			if (func_313(iVar2))
			{
				return true;
			}
			if (func_313(iVar2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_83(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	iVar1 = iParam0;
	while (iVar0 < 6 || iVar1 > 0)
	{
		if (iVar0 < 6)
		{
			iVar0++;
		}
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - 1);
		}
		if (!func_182(iVar0))
		{
			iVar2 = iVar0;
		}
		else if (!func_182(iVar1))
		{
			iVar2 = iVar1;
		}
	else
	{
		}
	}
	if (iVar2 == iParam0)
	{
		iVar2 = -1;
	}
	return iVar2;
}

void func_184(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_185(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_314(iParam0);
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
		if (!func_315(iParam0, 1))
		{
			return false;
		}
	}
	return func_316(iParam0, 0, bParam2) >= iParam1;
}

bool func_186(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_317(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

void func_189(var uParam0, bool bParam1)
{
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	func_19(uParam0->f_300, &(uParam0->f_306));
	func_318(uParam0->f_300, &(uParam0->f_307));
	func_319(uParam0->f_300, &(uParam0->f_305));
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_306, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(uParam0->f_306, 0, 0, 0, -1, -1, 2);
	func_320(uParam0, bParam1);
}

bool func_190()
{
	if ((((!AUDIO::_0xA2CAC9DEF0195E6F(0) && !func_321()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_SCREEN_FADING_IN()) && !func_322())
	{
		return true;
	}
	return false;
}

void func_191(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_456 < 5)
		{
			if (func_323(&(Local_15.f_420), &Global_35, &(Local_15.f_387), Local_15.f_456))
			{
				Local_15.f_498++;
				Local_15.f_456++;
			}
			else
			{
				Local_15.f_456 = 5;
			}
		}
		else
		{
			func_92();
		}
	}
	else if (Local_15.f_458 < 3)
	{
		if (func_323(&(Local_15.f_446), &Global_35, &(Local_15.f_387), Local_15.f_458))
		{
			Local_15.f_498++;
			Local_15.f_458++;
		}
		else
		{
			Local_15.f_458 = 3;
		}
	}
	else
	{
		func_92();
	}
	func_127(&(Local_15.f_393));
	func_21(&(Local_15.f_388), 2);
}

void func_192(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_15.f_457 < 5)
		{
			if (func_323(&(Local_15.f_404), &(Local_15.f_387), &Global_35, Local_15.f_457))
			{
				Local_15.f_498++;
				Local_15.f_457++;
			}
			else
			{
				Local_15.f_457 = 5;
			}
		}
	}
	else if (Local_15.f_459 < 3)
	{
		if (func_323(&(Local_15.f_436), &(Local_15.f_387), &Global_35, Local_15.f_459))
		{
			Local_15.f_498++;
			Local_15.f_459++;
		}
		else
		{
			Local_15.f_459 = 3;
		}
	}
	func_68(&(Local_15.f_393));
	func_15(&(Local_15.f_388), 2);
}

bool func_193(float fParam0)
{
	if (func_300(1))
	{
		return true;
	}
	if (func_69(&uLocal_0) && !func_324(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_194(int iParam0)
{
	return func_325(iParam0, 6);
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = func_326(iParam0, 6);
	return iVar0;
}

int func_196(int iParam0)
{
	return func_325(iParam0, 7);
}

int func_197(int iParam0)
{
	int iVar0;

	iVar0 = func_326(iParam0, 7);
	return iVar0;
}

bool func_198(int iParam0)
{
	return (func_325(iParam0, 4) || func_325(iParam0, 5));
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_326(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_326(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

bool func_200(int iParam0)
{
	iParam0 = func_327(iParam0);
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

int func_201(int iParam0)
{
	iParam0 = func_327(iParam0);
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

void func_202(var uParam0)
{
	if (!func_39(uParam0->f_329, 4194304) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		func_36(&(uParam0->f_329), 4194304);
	}
	if (!func_39(uParam0->f_329, 8) && func_146(uParam0->f_67))
	{
		func_82(&(uParam0->f_329), 2);
		func_36(&(uParam0->f_329), 8);
	}
}

void func_203(var uParam0)
{
	int iVar0;

	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	if (!func_45(uParam0->f_67, 0) || PED::IS_PED_HOGTIED(uParam0->f_67))
	{
		iVar0 = 455691738;
	}
	else
	{
		iVar0 = 953018525;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_68))
	{
		MAP::_0xBD62D98799A3DAF0(uParam0->f_68, iVar0);
	}
	else
	{
		uParam0->f_68 = MAP::BLIP_ADD_FOR_ENTITY(iVar0, uParam0->f_67);
	}
	MAP::_0x97F6F158CC5B5CA2(uParam0->f_67, uParam0->f_68);
	MAP::BLIP_ADD_MODIFIER(uParam0->f_68, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_68, &(uParam0->f_325));
}

bool func_204(int iParam0, int iParam1)
{
	if (func_328(iParam0, iParam1) || func_164(iParam0))
	{
		return true;
	}
	return false;
}

bool func_205(int iParam0)
{
	int iVar0;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7)
	{
		iVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (func_329(Global_35, iVar0, 0))
		{
			func_330(7);
			func_331();
			return false;
		}
	}
	else
	{
		return false;
	}
	if (func_332(iParam0))
	{
		func_330(7);
		func_331();
		return false;
	}
	return true;
}

void func_206(var uParam0)
{
	if (!func_39(uParam0->f_329, 128))
	{
		if (func_328(uParam0->f_67, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_363))
			{
				AUDIO::TRIGGER_MUSIC_EVENT(uParam0->f_363);
			}
			func_36(&(uParam0->f_329), 128);
		}
	}
}

void func_207(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	char cVar4[32];
	vector3 vVar8[24];
	vector3 vVar11[24];

	if (!func_69(&(uParam0->f_318)))
	{
		func_171(&(uParam0->f_318), 5f);
		uParam0->f_324 = 0;
	}
	else if (func_130(&(uParam0->f_318)) >= 7f && func_144(1))
	{
		func_171(&(uParam0->f_318), 7f);
	}
	if (func_146(uParam0->f_67))
	{
		vVar1 = { func_100(uParam0->f_300) };
	}
	else
	{
		vVar1 = { func_333(uParam0->f_300) };
	}
	if (uParam0->f_300 == 5)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	if (uParam0->f_324 < iVar0)
	{
		if (!PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vVar1, 45f) || PED::IS_PED_STOPPED(Global_35))
		{
			if ((func_45(uParam0->f_69, 0) && func_150(uParam0->f_69, Global_35, 0, 12f, 0)) && func_65(Global_35, uParam0->f_306, 1, 0))
			{
				if (func_130(&(uParam0->f_318)) >= 15f)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_69, 0) && !TASK::IS_PED_SCENARIO_REACT_LOOKING(uParam0->f_69, true))
					{
						TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
					}
					if (uParam0->f_358 || func_39(uParam0->f_328, 67108864))
					{
						StringCopy(&cVar4, "BOUNTY_THROW_IN_CELL_AGAIN", 32);
						if (func_151(uParam0->f_69, &cVar4, 291934926, Global_35, 1, 0, 0, 1))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
					else if (!func_144(1))
					{
						StringCopy(&cVar8, "JR", 24);
						if (func_146(uParam0->f_67))
						{
							StringConCat(&cVar8, "DE", 24);
						}
						else
						{
							StringConCat(&cVar8, "AL", 24);
						}
						MemCopy(&cVar11, {func_152(uParam0->f_300)}, 1);
						StringConCat(&cVar8, &cVar11, 24);
						StringIntConCat(&cVar8, uParam0->f_324, 24);
						if (func_145(&(uParam0->f_201), cVar8, 0, -1, 0, 0))
						{
							func_68(&(uParam0->f_318));
							uParam0->f_324++;
							if (uParam0->f_324 == 1)
							{
								func_129(uParam0, 1024, 1);
							}
						}
					}
				}
			}
		}
		else if (func_130(&(uParam0->f_318)) > 8f)
		{
			func_171(&(uParam0->f_318), 8f);
		}
	}
}

Vector3 func_208(var uParam0)
{
	vector3 vVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[1 /*14*/].f_1) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_30[1 /*14*/].f_1, true, false))
	{
		vVar0 = { func_231(uParam0->f_30[1 /*14*/].f_1, func_241(uParam0->f_300), uParam0->f_30[1 /*14*/].f_9) };
		return vVar0;
	}
	if (uParam0->f_300 == 115)
	{
		return -5530.09f, -2925.662f, -2.3609f;
	}
	return func_333(uParam0->f_300);
}

float func_209(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	return (vVar0.z - vParam1.z);
}

bool func_210(var uParam0)
{
	if (uParam0->f_300 == 5)
	{
		return true;
	}
	return false;
}

bool func_211(var uParam0)
{
	switch (uParam0->f_61)
	{
		case 0:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_331))
			{
				uParam0->f_331 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@bountyhunting@lemoyneraider@bodydrop", 0, "PBL_DROPOFF", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "LINDSEY", uParam0->f_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_331);
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_331, true, false))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) < 3f && func_164(uParam0->f_67))
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748 /* Float: 1.48f */, false, 0, 20000, -1082130432 /* Float: -1f */);
					func_242(uParam0, 3);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!func_49(Global_35, 1369124074))
			{
				if (func_157(Global_35, func_100(uParam0->f_300), 0) > 2f)
				{
					TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_331, "player", "PBL_DROPOFF", 1069379748 /* Float: 1.48f */, true, 0, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_331);
					func_242(uParam0, 4);
				}
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_331, false) || func_334(uParam0))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_67, 7, false);
				func_242(uParam0, 5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_212(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_213(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 8);
}

int func_214(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_301(vParam0))
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
		if (func_336(vParam0))
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
	func_337(iVar0, bParam8);
	return iVar0;
}

int func_215()
{
	return Global_1572887.f_12;
}

void func_216(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_338(uParam0, iParam1, sParam2))
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

int func_217(int iParam0)
{
	bool bVar0;

	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_292(iParam0))))
		{
			return 1;
		}
	}
	bVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_292(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_292(iParam0));
	return 1;
}

int func_218(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_291(func_290(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_292(iParam0));
	return 1;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 2;
		case 26:
			return 2;
		case 105:
			return 1;
		case 78:
			return 2;
		case 5:
			return 2;
		case 38:
			return 2;
		case 115:
			return 6;
	}
	return 0;
}

void func_220(int iParam0, int iParam1)
{
	func_217(func_339(iParam0, iParam1));
}

void func_221(int iParam0, int iParam1)
{
	func_222(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_222(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_342(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_343(iParam0, 1);
			}
			else
			{
				func_344(iParam0, 1);
			}
		}
		else
		{
			func_345(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_346())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_223(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 == 0)
			{
				return 1674105116;
			}
			else if (iParam1 == 1)
			{
				return 1979938193;
			}
			else if (iParam1 == 2)
			{
				return 1879655431;
			}
			else if (iParam1 == 3)
			{
				return -1170253702;
			}
			else if (iParam1 == 4)
			{
				return -864682777;
			}
			else if (iParam1 == 5)
			{
				return -693431983;
			}
			else if (iParam1 == 6)
			{
				return 417663242;
			}
			else if (iParam1 == 7)
			{
				return 1611175760;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 1614494720;
			}
			else if (iParam1 == 1)
			{
				return 349074475;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 1514359658;
			}
			else if (iParam1 == 1)
			{
				return 1821044729;
			}
			break;
		case 76:
			if (iParam1 == 0)
			{
				return 395506985;
			}
			else if (iParam1 == 1)
			{
				return joaat("DOOR_VAL_JAIL_CELL_01");
			}
			else if (iParam1 == 2)
			{
				return 1988748538;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return -1484165375;
			}
			else if (iParam1 == 1)
			{
				return -473782212;
			}
			else if (iParam1 == 2)
			{
				return -884246706;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return joaat("DOOR_TUM_02_JAIL_FRONT");
			}
			break;
		case 78:
			if (iParam1 == 0)
			{
				return -2082598623;
			}
			break;
	}
	return 0;
}

bool func_224(int iParam0)
{
	return iParam0 != 0;
}

bool func_225(int iParam0)
{
	func_340(iParam0, 0, 0);
	if (func_341(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

bool func_226(int iParam0)
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

void func_227(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_226(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_347(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_348(iVar0);
	*uParam0 = 0;
}

void func_228(var uParam0, int iParam1)
{
	uParam0->f_62 = iParam1;
}

bool func_229(var uParam0)
{
	uParam0->f_69 = func_349(func_138(uParam0->f_300), 1, 0, 0, 1, 1);
	if (func_45(uParam0->f_69, 0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_69) || !ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_69))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_69, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_69, true);
		PED::_0xBD75500141E4725C(uParam0->f_69, joaat("LAW_SHERIFF"));
		func_350(&(uParam0->f_74), 1);
		func_351(&(uParam0->f_74), 1);
		func_352(&(uParam0->f_74), 1);
		func_353(&(uParam0->f_74), 1);
		func_354(&(uParam0->f_74), 1);
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_69))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_69, false, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_69, true, false);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_69, 146, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_69, func_355(uParam0->f_300), true, false, true, true);
		WEAPON::_HOLSTER_PED_WEAPONS(uParam0->f_69, true, false, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_69, 1, 0, 0, 0);
		func_102(uParam0, uParam0->f_69, func_356(uParam0->f_300));
		func_216(&(uParam0->f_201), uParam0->f_69, func_356(uParam0->f_300), 1);
		func_357(uParam0, uParam0->f_69);
		if (!Global_1935630.f_12)
		{
			if (func_101())
			{
				func_216(&(uParam0->f_201), Global_35, "John", 1);
			}
			else
			{
				func_216(&(uParam0->f_201), Global_35, "Arthur", 1);
			}
		}
		return true;
	}
	return false;
}

void func_230(var uParam0)
{
	if (uParam0->f_27 == 0)
	{
		uParam0->f_27 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_5, uParam0->f_1, 7);
	}
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_27))
	{
		uParam0->f_4 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_27));
	}
}

struct<4> /*32*/ func_231(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar4;

	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

int func_232(int iParam0, vector3 vParam1, float fParam4, float fParam5, int iParam6, int iParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, fParam5, iParam6, iParam7);
}

void func_233(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, float fParam6)
{
	func_358(bParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_234(var uParam0)
{
	func_167(uParam0, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_69))
	{
		func_359(uParam0);
	}
}

bool func_235(var uParam0)
{
	if ((((((uParam0->f_65 == 11 || uParam0->f_65 == 16) || uParam0->f_65 == 154) || uParam0->f_65 == 13) || uParam0->f_65 == 15) || uParam0->f_65 == 20) || uParam0->f_65 == 19)
	{
		return true;
	}
	return false;
}

bool func_236(var uParam0)
{
	vector3 vVar0[24];
	int iVar3;

	if (func_360(uParam0))
	{
		if (!func_101())
		{
			if (func_151(Global_35, "GREET_SHERIFF", 291934926, uParam0->f_69, 1, 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 3) + 3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
		else
		{
			iVar3 = 0;
			StringCopy(&cVar0, "HOGTIES_MALE", 24);
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 7))
			{
				case 0:
					iVar3 = 2;
					break;
				case 1:
					iVar3 = 3;
					break;
				case 2:
					iVar3 = 4;
					break;
				case 3:
					iVar3 = 7;
					break;
				case 4:
					iVar3 = 8;
					break;
				case 5:
					iVar3 = 13;
					break;
				case 6:
					iVar3 = 15;
					break;
			}
			if (func_151(Global_35, &cVar0, 291934926, uParam0->f_69, 1, 0, iVar3, 1))
			{
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		if (uParam0->f_382 == 0)
		{
			if (!func_146(uParam0->f_67))
			{
				MemCopy(&cVar0, {uParam0->f_332}, 3);
			}
			else
			{
				MemCopy(&cVar0, {uParam0->f_336}, 3);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
		{
			if (func_145(&(uParam0->f_103), cVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_237(var uParam0)
{
	vector3 vVar0;
	char cVar3[32];

	if (func_361(uParam0))
	{
		if (!func_66(Global_35, 0))
		{
			StringCopy(&cVar3, func_362(uParam0->f_300, PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true)), 32);
			if (func_151(uParam0->f_69, &cVar3, 291934926, Global_35, 1, 0, 0, 1))
			{
				return true;
			}
		}
	}
	else if (!func_39(uParam0->f_329, 512))
	{
		if (!func_144(1))
		{
			if (uParam0->f_382 == 0)
			{
				if (!func_146(uParam0->f_67))
				{
					MemCopy(&vVar0, {uParam0->f_332}, 3);
				}
				else
				{
					MemCopy(&vVar0, {uParam0->f_336}, 3);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
			{
				if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
				{
					uParam0->f_382++;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else if (!func_144(1))
	{
		vVar0 = { func_363(uParam0, uParam0->f_382) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			if (func_145(&(uParam0->f_103), vVar0, 0, -1, 0, 0))
			{
				uParam0->f_382++;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_238(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = 0;
	}
	else if (uParam0->f_63 == 8)
	{
		if (func_157(uParam0->f_67, func_100(uParam0->f_300), 1) > 5f || func_210(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (func_157(uParam0->f_67, func_97(uParam0->f_300), 1) < 10f)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_239(var uParam0)
{
	if (!func_113(Global_36, func_97(uParam0->f_300), 150f, 1) || !func_95(uParam0))
	{
		return false;
	}
	if (!uParam0->f_70)
	{
		uParam0->f_71 = INTERIOR::GET_INTERIOR_AT_COORDS(func_97(uParam0->f_300));
		INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_71);
		uParam0->f_70 = 1;
	}
	if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_71))
	{
		return false;
	}
	if (uParam0->f_30[*uParam0 /*14*/])
	{
		return true;
	}
	func_364(uParam0);
	func_365(uParam0);
	if (uParam0->f_60 != 1)
	{
		if (func_366(uParam0, *uParam0) || func_367(uParam0, *uParam0))
		{
			return false;
		}
	}
	if (func_368(uParam0, *uParam0))
	{
		*uParam0++;
		if (*uParam0 >= 2)
		{
			if (!uParam0->f_23)
			{
				uParam0->f_23 = 1;
			}
			return true;
		}
	}
	return false;
}

void func_240(int iParam0, int iParam1)
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

char* func_241(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Player";
		case 105:
			return "plr";
		case 78:
			return "Player";
		case 26:
			return "Player";
		case 5:
			return "Player";
		case 38:
			return "Player";
		case 115:
			return "Player";
	}
	return "";
}

void func_242(var uParam0, int iParam1)
{
	uParam0->f_61 = iParam1;
}

void func_243(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			if (!bLocal_14)
			{
				if (CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING() > 90f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				}
				bLocal_14 = true;
			}
			CAM::_CLAMP_GAMEPLAY_CAM_YAW(-45f, 90f);
			break;
	}
}

void func_244(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_215() != -1)
	{
		return;
	}
	if ((Global_36616 && func_317(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_369(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_370(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_371(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_370(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_245(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	func_36(&iVar0, iParam1);
	func_279(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

void func_246(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	func_82(&iVar0, iParam1);
	func_279(Global_1347702[iParam0 /*49*/].f_15, iVar0);
}

int func_247(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_309(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_309(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
		case 61:
			return joaat("LAW_REGION_MANICATO");
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
		case 65:
			return joaat("LAW_REGION_CORNWALL");
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 32:
			return joaat("LAW_REGION_SISIKA");
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 56:
			return joaat("LAW_REGION_WAPITI");
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_299(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_299(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_372(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_373())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_374(iParam0);
		if (iVar0 != -1)
		{
			return func_375(iVar0, bParam1);
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (iParam0 == 76)
	{
		return 0;
	}
	else if (iParam0 == 38)
	{
		return 0;
	}
	return -1;
}

void func_249(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_219(iParam1);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == -1 && iVar3 == -1)
		{
			iVar3 = iVar0;
		}
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
			{
				return;
			}
			if (iParam2 == iVar2)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
			iVar2++;
		}
		if (iVar2 >= iVar1)
		{
			func_377(iParam0, iParam1);
			return;
		}
		iVar0++;
	}
	if (iVar3 < 0)
	{
		return;
	}
	func_376(iVar3, iParam0, iParam1, 0);
}

void func_250(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			Global_40.f_9829[iVar0 /*4*/].f_3 = uParam2;
		}
		iVar0++;
	}
}

bool func_251(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_378(*uParam0, joaat("HATS"), 0))
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1 && Global_40.f_9829[iVar0 /*4*/].f_1 == iParam0)
		{
			func_379(iVar0, 128);
		}
		iVar0++;
	}
}

bool func_253(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_254(var uParam0, int iParam1)
{
	func_117(&(uParam0->f_66));
	if (iParam1 == 3)
	{
		if (!func_39(uParam0->f_329, 524288))
		{
			uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_97(uParam0->f_300));
			MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 825788762);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_JAIL");
		}
	}
	else if (iParam1 == 7)
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_208(uParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_CELL");
	}
	else if (iParam1 == 8)
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_COORDS(408396114, func_100(uParam0->f_300));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_66, "BNTY_B_DUMP");
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 231194138);
	func_330(7);
	func_331();
	if (!func_39(uParam0->f_329, 1))
	{
		func_36(&(uParam0->f_329), 1);
		uParam0->f_368 = { Global_36 };
	}
}

void func_255(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_39(uParam0->f_329, 262144))
	{
		return;
	}
	iVar0 = PED::_GET_CARRIER_AS_MOUNT(uParam0->f_67);
	iVar1 = func_201(7);
	if (iVar1 == iVar0)
	{
		func_380(7);
		func_331();
	}
	else
	{
		uParam0->f_66 = MAP::BLIP_ADD_FOR_ENTITY(408396114, iVar0);
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_66, 231194138);
}

int func_256(int iParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = MAP::BLIP_ADD_FOR_COORDS(iParam0, vParam1);
	if (bParam4)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

int func_257(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam0, iParam1);
	if (bParam2)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

int func_258(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_381(iParam0, vVar0, fParam2);
}

bool func_259(var uParam0)
{
	return func_172(*uParam0, 2);
}

float func_260()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_261(int iParam0)
{
	if (iParam0 == 14)
	{
		return true;
	}
	return false;
}

void func_262(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4)
{
	char* sVar0;

	if (bParam1)
	{
		if (func_69(&(uParam0->f_364)))
		{
			func_127(&(uParam0->f_364));
		}
	}
	else
	{
		func_68(&(uParam0->f_364));
	}
	uParam0->f_367 = bParam1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_382(sParam2, sParam3, sParam4);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(4, sParam2, sParam3, sParam4, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_385(sParam2, sParam3);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(3, sParam2, sParam3, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
	else
	{
		func_386(sParam2);
		if (func_298(uParam0->f_65))
		{
			sVar0 = func_383(0, sParam2, 0, 0, -1, -1);
			func_384(uParam0->f_65, sParam2, sVar0, -1082130432 /* Float: -1f */);
		}
	}
}

var func_263(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return "ANN";
		case 5:
			return "NBX";
		case 105:
			return "RHO";
		case 26:
			return "STR";
		case 76:
			return "VAL";
		case 38:
			return "BLK";
		case 115:
			return "TBL";
	}
	return "";
}

void func_265(char* sParam0, var uParam1)
{
	func_263(MISC::VAR_STRING(42, sParam0, &(uParam1->f_325), func_264(uParam1->f_300)), 7500, 0, 0, 0, 1);
}

bool func_266(var uParam0)
{
	if (uParam0->f_300 == 5 || uParam0->f_300 == 38)
	{
		return true;
	}
	return false;
}

var func_267(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_263(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_383(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_263(sVar0, iParam1, 0, 0, 1, 1);
}

Vector3 func_268(var uParam0, int iParam1)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 154:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT12_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT12_RWD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BRA_REWARD", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BRA_REWARD_", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_REWARD_A", 24);
				cVar0 = { func_387(cVar0) };
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_REWARD_A", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_PUTCAGEJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_REWARD_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_REWARD_A", 24);
				}
			}
			break;
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_PAY_S1", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J1", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A1", 24);
				}
			}
			else if (iParam1 == 2)
			{
				StringCopy(&cVar0, "BDUL_PAY_S2", 24);
			}
			else if (iParam1 == 3)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BDUL_PAY_J2", 24);
				}
				else
				{
					StringCopy(&cVar0, "BDUL_PAY_A2", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_RWD", 24);
			}
			else if (iParam1 == 1)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_RWD_A", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "NBX_SDS_TKRWD_A", 24);
				}
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_RWD_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_RWD_ALVE", 24);
				}
			}
			break;
	}
	return cVar0;
}

bool func_269(var uParam0)
{
	if (-1829635046 == func_388(81053684))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	else if (func_390(-525676072, uParam0))
	{
		if (func_389(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_270()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	char* sVar9;
	int iVar10;

	if (func_215() != -1)
	{
		return;
	}
	iVar0 = func_391();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = MISC::ABSI(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = BUILTIN::TO_FLOAT(iVar0);
	fVar7 = BUILTIN::TO_FLOAT(Global_1347398);
	fVar8 = BUILTIN::TO_FLOAT(iVar3);
	iVar4 = func_392(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_392(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_393())
		{
			func_394(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_395())
		{
			func_394(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_396())
		{
			func_394(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_397())
	{
		func_394(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_399(func_398(joaat("FAME")), iVar1);
	iVar10 = func_391();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

bool func_272(var uParam0)
{
	float fVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[0 /*14*/].f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_30[0 /*14*/].f_1, false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_30[0 /*14*/].f_1, "PB_REWARD_R"))
		{
			fVar0 = 6.8f;
		}
		else
		{
			fVar0 = 5.7f;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_30[0 /*14*/].f_1) > fVar0)
		{
			return true;
		}
	}
	return false;
}

void func_273()
{
	struct<6> /*48*/ sVar0;

	MISC::_0x49F3241C28EBBFBC(0);
	Var0 = joaat("CURRENCY_CASH");
	Var0.f_3 = 6;
	if (Global_1392235)
	{
		Var0.f_4 = Global_40.f_9074.f_3;
		Var0.f_5 = Global_40.f_9074.f_3;
	}
	else
	{
		Var0.f_4 = Global_40.f_9074.f_4;
		Var0.f_5 = Global_40.f_9074.f_4;
	}
	Var0.f_1 = 1f;
	MISC::_0x183672FE838A661B(&Var0);
	MISC::_0x38C0C9CAE1544500(joaat("REWARD_MONEYCLIP"));
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_400())
	{
		iVar2 = func_400();
	}
	iVar5 = func_401(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_402(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_402(iVar6) == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_428[iVar0 /*2*/] == 0)
			{
				return func_403(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_275(int iParam0)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_406(iParam0, (func_405(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

int func_276(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_407(iParam0);
}

void func_277(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_408(iParam0, iParam1);
}

int func_278(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_409(iParam0);
}

void func_279(int iParam0, int iParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_410(iParam0, iParam1);
}

var func_280()
{
	return Global_1899515;
}

void func_281(int iParam0, var uParam1)
{
	if (!func_404(iParam0))
	{
		return;
	}
	func_411(iParam0, uParam1);
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return joaat("DOCUMENT_POSTER_SB_DUEL");
		case 13:
			return -120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */;
		case 12:
			return -1129500286 /* GXTEntry: "Bounty Poster - Lindsey Wofford" */;
		case 14:
			return -1490222567 /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */;
		case 17:
			return joaat("DOCUMENT_POSTER_SKINNER_BROS");
		case 18:
			return joaat("DOCUMENT_POSTER_SKINNER_SEARCH");
		case 15:
			return joaat("DOCUMENT_POSTER_SHACK_ESCAPE");
		case 16:
			return joaat("DOCUMENT_POSTER_SD_SALOON");
		case 19:
			return joaat("DOCUMENT_POSTER_BANDITO_SHACK");
		case 20:
			return joaat("DOCUMENT_POSTER_BANDITO_MINE");
		case 155:
			return 1472661824 /* GXTEntry: "Bounty Poster - Herman Zizendorf" */;
		case 153:
			return -1980065901 /* GXTEntry: "Bounty Poster - Bart Cavanaugh" */;
		case 154:
			return 1385735108 /* GXTEntry: "Bounty Poster - Camille de Millemont" */;
		default:
			break;
	}
	return joaat("DOCUMENT_TEST_BOUNTY_POSTER");
}

int func_283(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_412(iParam0, 1);
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
			func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_185(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_414(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_316(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_316(iParam0, 0, 0) - iParam1) < 0)
		{
			func_283(iParam0, func_316(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_314(iParam0) == joaat("WEAPON"))
	{
		if (!func_415(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_416(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_417(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_413(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_418(iParam0, iParam1);
	return 1;
}

bool func_284(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_419(uParam2, 1, iVar0);
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
			if (func_420(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_421(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_422(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_423(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_424(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_71(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_421(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_425(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_426(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_427(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_428(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_428(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_421(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_429(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_430(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_431(uParam2, 4000))
				{
					if ((func_432(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_433(uParam2, bParam0)) && func_434(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_432(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_433(uParam2, bParam0)) && func_434(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_435(bParam0, Global_1935630.f_41))
							{
								func_436();
								*uParam3 = 2;
								func_421(bParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (func_435(bParam0, Global_1935630.f_41))
						{
							func_436();
							*uParam3 = 2;
							func_421(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_437(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_438() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_436();
						*uParam3 = 2;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_439())
					{
						if (func_435(bParam0, Global_1935630.f_42))
						{
							func_436();
							*uParam3 = 2;
							func_421(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_440(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_421(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_441(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_442(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_443(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_444(uParam2, 4000))
				{
					if (func_445(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_421(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_446(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_421(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_447(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_421(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_285(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_448(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_449(uParam1, bVar0))
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
				if (!bParam2 || !func_449(uParam1, bVar1))
				{
					if (func_157(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_286(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_287(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

void func_288(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

void func_289(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0))
	{
		return;
	}
	iVar0 = func_450(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_290(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_291(int iParam0)
{
	return iParam0 != 0;
}

int func_292(int iParam0)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_293(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return 0;
	}
	if (!func_287(iParam0, 2))
	{
		return 0;
	}
	if (func_290(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return 1;
	}
	if (func_287(iParam0, 1) && !bParam1)
	{
		func_451(iParam0, 128);
		return 1;
	}
	func_288(iParam0, 129);
	func_289(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_292(iParam0));
	func_452(iParam0, 0);
	return 1;
}

void func_294(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

bool func_295(int iParam0, int iParam1, float fParam2)
{
	return func_453(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_296(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_297(bool bParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(bParam0, uParam1);
}

bool func_298(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_299(int iParam0, bool bParam1)
{
	switch (func_454(iParam0))
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

bool func_300(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

bool func_301(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_302(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_303(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 512;
	if (iParam4 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_304(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_306(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_299(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_307()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_306(16) && !func_306(21))
	{
		return true;
	}
	return false;
}

int func_308(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 76;
		case 2:
			return 26;
		case 5:
			return 105;
		case 4:
			return 78;
		case 6:
			return 5;
		case 1:
			return 38;
		case 0:
			return 115;
		default:
			break;
	}
	return -1;
}

bool func_309(int iParam0)
{
	if (!func_212(iParam0))
	{
		return false;
	}
	return func_335(iParam0, 33554432);
}

int func_310(int iParam0)
{
	if (!func_83(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 3:
			return 9;
		case 2:
			return 1;
		case 6:
			return 0;
		case 4:
			return 10;
		case 1:
			return 4;
		case 5:
			return 11;
		case 0:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_311(int iParam0)
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

bool func_312(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

bool func_313(int iParam0)
{
	if (!func_312(iParam0))
	{
		return false;
	}
	if (func_455(iParam0) >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(5))
	{
		return true;
	}
	return false;
}

int func_314(int iParam0)
{
	vector3 vVar0;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_412(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_456("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_457(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_458(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_459(iVar1);
				return true;
			}
			iVar3++;
		}
		func_459(iVar1);
	}
	return false;
}

int func_316(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_412(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_460(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_461(bParam2), iParam0, 0);
	return iVar2;
}

int func_317(int iParam0)
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

void func_318(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SD Dialogue Volume");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2506.862f, -1308.892f, 48.50731f, 0f, 0f, 0f, 8f, 16.5f, 3f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam1, 2499.045f, -1308.865f, 48.91688f, 0f, 0f, 0f, 10f, 2f, 3f);
			break;
		default:
			break;
	}
}

void func_319(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.332f, -1306.672f, 49.06244f, 0f, 0f, 0f, 5.38237f, 5.870902f, 2.389851f, "Near Cell");
			break;
		case 26:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.066f, -353.3387f, 161.438f, 0f, 0f, -20.6699f, 5.9382f, 3.494741f, 2.127687f, "Near Cell");
			break;
		case 76:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-273.4034f, 808.0645f, 119.503f, 0f, 0f, -78.66611f, 2.868701f, 5.577141f, 2.388725f, "Near Cell");
			break;
		case 105:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.195f, -1302.73f, 77.57108f, 0f, 0f, -18.89946f, 3.524552f, 3.867561f, 1.788079f, "Near Cell");
			break;
		case 38:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-763.9052f, -1264.156f, 43.82976f, 0f, 0f, 0f, 3.441595f, 4.293221f, 2.234505f, "Near Cell");
			break;
		case 115:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5534.542f, -2948.278f, -0.368f, 0f, 0f, 15f, 9f, 4.7f, 3f, "Near Cell");
			break;
		case 78:
			*uParam1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2903.745f, 1311.18f, 45.13168f, 0f, 0f, -19.81251f, 1.647195f, 1.766237f, 2.464334f, "Near Cell");
			break;
		default:
			break;
	}
}

void func_320(var uParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	char* sVar9;

	func_462(uParam0);
	switch (uParam0->f_300)
	{
		case 76:
			vVar0 = { -272.0415f, 808.1991f, 118.3685f };
			vVar3 = { 0f, 0f, -170.5f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_WORKBENCHDESK01X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -273.2888f, 808.1285f, 119.3935f };
			uParam0->f_1 = { -277.49f, 804.13f, 118.38f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitrelax_val";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@stand_val";
					sVar8 = "PB_STAND_FL_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@valentine@sitwriting_val";
					sVar8 = "PB_WRITE_FL_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_val";
			sVar9 = "PB_DROPOFF";
			break;
		case 105:
			vVar0 = { 1357.334f, -1302.453f, 76.75331f };
			vVar3 = { 0f, 0f, 70.00005f };
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 1357.897f, -1301.337f, 77.77831f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_1 = { 1361.26f, -1303.45f, 77.26f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitrelax_rhodes";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@stand_rhodes";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@rhodes@sitwriting_rhodes";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_rhodes";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 78:
			vVar0 = { 2902.943f, 1310.878f, 43.9443f };
			vVar3 = { 0f, 0f, 69.26f };
			uParam0->f_14 = joaat("ANN_JAIL_CELL_DOOR_01");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2903.49f, 1312.001f, 44.978f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_BW_DESK01X");
			uParam0->f_1 = { 2907.75f, 1313.686f, 44.56693f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitrelax_Ann";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@stand_Ann";
					sVar8 = "PB_BASE";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@annesburg@sitwriting_Ann";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_ans";
			if (bParam1)
			{
				sVar9 = "PB_DROPOFF_Floor";
			}
			else
			{
				sVar9 = "PB_DROPOFF";
			}
			break;
		case 26:
			vVar0 = { -1811.985f, -351.8662f, 160.4395f };
			vVar3 = { 0f, 0f, -25.00003f };
			uParam0->f_1 = { -1807.28f, -347.87f, 163.65f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -1810.923f, -352.5239f, 161.4644f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitrelax_strawberry";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@stand_strawberry";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@strawberry@sitwriting_strawberry";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_strawberry";
			sVar9 = "PB_DROPOFF";
			break;
		case 5:
			vVar0 = { 2502.43f, -1307.799f, 47.95231f };
			vVar3 = { 0f, 0f, 0f };
			uParam0->f_1 = { 2508.56f, -1309.07f, 48.41f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { 2503.67f, -1307.946f, 48.97729f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitrelax_std";
					sVar8 = "PB_RELAX_R_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@stand_std";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@std@sitwriting_std";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_std";
			sVar9 = "PB_DROPOFF";
			break;
		case 38:
			vVar0 = { -763.5278f, -1262.461f, 42.90836f };
			vVar3 = { 0f, 0f, -89.99999f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			if (uParam0->f_65 == 18)
			{
				uParam0->f_7 = joaat("P_DESK14X");
				uParam0->f_1 = { -761.53f, -1271.73f, 43.77f };
				sVar6 = "script@proc@bountyhunting@skinnersearch@sitrelax";
				sVar8 = "PB_RELAX_R_RELAX";
			}
			else
			{
				uParam0->f_7 = joaat("P_WORKBENCHDESK01X");
				uParam0->f_1 = { -761.69f, -1266.73f, 43.05f };
				switch (uParam0->f_301)
				{
					case 1:
					case default:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitrelax_bw";
						sVar8 = "PB_RELAX_R_RELAX";
						break;
					case 0:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@stand_bw";
						sVar8 = "PB_STAND_R_LOOK";
						break;
					case 2:
						sVar6 = "script@proc@bountyhunting@sheriff_rewards@blackwater@sitwriting_bw";
						sVar8 = "PB_WRITE_R_WRITE";
						break;
				}
			}
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -763.6382f, -1263.701f, 44.04934f };
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_blackwater";
			sVar9 = "PB_DROPOFF";
			break;
		case 115:
			vVar0 = { -5529.901f, -2925.066f, -2.3753f };
			vVar3 = { 0f, 0f, 295f };
			uParam0->f_9 = joaat("S_INV_MONEYCLIP01X");
			uParam0->f_7 = joaat("P_DESK07X");
			uParam0->f_1 = { -5530.877f, -2930.6f, -2.2877f };
			uParam0->f_14 = joaat("P_DOOR_VAL_JAIL_CELL01X");
			uParam0->f_15 = { vVar0 };
			uParam0->f_19 = joaat("P_CS_LOCKJAIL01X");
			uParam0->f_20 = { -5529.466f, -2926.232f, -1.3503f };
			switch (uParam0->f_301)
			{
				case 1:
				case default:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitrelax_tweed";
					sVar8 = "PB_RELAX_FL_RELAX";
					break;
				case 0:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@stand_tweed";
					sVar8 = "PB_STAND_R_LOOK";
					break;
				case 2:
					sVar6 = "script@proc@bountyhunting@sheriff_rewards@tumbleweed@sitwriting_tweed";
					sVar8 = "PB_WRITE_R_WRITE";
					break;
			}
			sVar7 = "script@proc@bountyhunting@jail_dropoffs@dropoff_tumbleweed";
			sVar9 = "PB_DROPOFF";
			break;
	}
	if (uParam0->f_301 == 2)
	{
		uParam0->f_11 = joaat("P_JOURNAL_OPEN01X");
	}
	uParam0->f_5 = func_463(uParam0->f_300);
	uParam0->f_30[0 /*14*/] = 0;
	uParam0->f_30[0 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[0 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[0 /*14*/].f_8 = sVar6;
	uParam0->f_30[0 /*14*/].f_9 = sVar8;
	uParam0->f_30[0 /*14*/].f_10 = 1;
	uParam0->f_30[0 /*14*/].f_11 = 0;
	uParam0->f_30[0 /*14*/].f_12 = 0;
	uParam0->f_30[1 /*14*/] = 0;
	uParam0->f_30[1 /*14*/].f_2 = { vVar0 };
	uParam0->f_30[1 /*14*/].f_5 = { vVar3 };
	uParam0->f_30[1 /*14*/].f_8 = sVar7;
	uParam0->f_30[1 /*14*/].f_9 = sVar9;
	uParam0->f_30[1 /*14*/].f_10 = 0;
	uParam0->f_30[1 /*14*/].f_11 = 0;
	uParam0->f_30[1 /*14*/].f_12 = 1;
}

bool func_321()
{
	return func_464(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

bool func_322()
{
	if (func_465())
	{
		return true;
	}
	return false;
}

bool func_323(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 > -1 && iParam3 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iParam3 /*3*/]))
		{
			func_14(*uParam1, *uParam2, uParam0[iParam3 /*3*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			return true;
		}
	}
	return false;
}

bool func_324(var uParam0, float fParam1)
{
	if (func_67(uParam0, fParam1))
	{
		func_127(uParam0);
		return true;
	}
	return false;
}

int func_325(int iParam0, int iParam1)
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

int func_326(int iParam0, int iParam1)
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
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_328(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 8)
	{
		bVar0 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (func_45(bVar0, 0))
		{
			PED::_0x2EB75FB86C41F026(bVar0, 3, 0);
			PED::_0x2EB75FB86C41F026(bVar0, 1, 0);
		}
		if (iParam1 == 0)
		{
			return true;
		}
		if (func_45(bVar0, 0))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar1 = PED::GET_MOUNT(Global_35);
				if (bVar0 == iVar1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
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

void func_330(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_466(iParam0, 32);
	func_331();
}

void func_331()
{
	if (func_200(0))
	{
		func_467(0);
	}
	if (func_200(1))
	{
		func_467(1);
	}
	if (func_200(5))
	{
		func_467(5);
	}
	if (func_200(6))
	{
		func_468(6);
	}
}

bool func_332(int iParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 7 || ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0) == 8)
	{
		iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
		if (TASK::_IS_PED_LEADING_HORSE(Global_35))
		{
			iVar0 = TASK::_GET_LED_HORSE_FROM_PED(Global_35);
			if (iVar0 == iVar1)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_333(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2903.174f, 1311.317f, 43.9893f;
		case 5:
			return 2503.365f, -1308.754f, 47.9537f;
		case 105:
			return 1358.246f, -1301.761f, 76.7606f;
		case 26:
			return -1811.682f, -353.0481f, 160.4039f;
		case 76:
			return -273.1385f, 809.027f, 118.38f;
		case 38:
			return -764.4813f, -1263.396f, 42.8484f;
		case 115:
			return -5529.103f, -2926.849f, -2.2884f;
	}
	return 0f, 0f, 0f;
}

bool func_334(var uParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_331, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_331) > 3f)
	{
		if ((fVar0 > 0.1f || fVar0 < -0.1f) || (fVar1 > 0.1f || fVar1 < -0.1f))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_331, "player", Global_35);
			return true;
		}
	}
	return false;
}

bool func_335(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

bool func_336(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_337(int iParam0, bool bParam1)
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

bool func_338(var uParam0, int iParam1, char* sParam2)
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

int func_339(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_340(int iParam0, bool bParam1, bool bParam2)
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

bool func_341(int iParam0)
{
	if (func_224(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_342(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_343(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_344(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_345(int iParam0, bool bParam1)
{
	if (func_341(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_346()
{
	return true;
}

int func_347(var uParam0)
{
	return uParam0;
}

void func_348(int iParam0)
{
	if (!func_469(iParam0))
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

int func_349(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_470(iParam0, 1))
	{
		return 0;
	}
	if (func_291(func_290(iParam0)))
	{
		iVar1 = func_292(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_0x49A8C2CD97815215(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_0x0CADC3A977997472(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_140(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_451(iParam0, 1);
	func_471(iParam0);
	if (bParam3)
	{
		func_451(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_350(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 16);
	}
	else
	{
		func_21(uParam0, 67108864);
		func_21(uParam0, 16);
	}
}

void func_351(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 32);
	}
	else
	{
		func_21(uParam0, 32);
	}
}

void func_352(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 8);
	}
	else
	{
		func_15(&(uParam0->f_1), 8);
	}
}

void func_353(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 2);
	}
	else
	{
		func_15(&(uParam0->f_1), 2);
	}
}

void func_354(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_21(&(uParam0->f_1), 4);
	}
	else
	{
		func_15(&(uParam0->f_1), 4);
	}
}

Vector3 func_355(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2906.88f, 1313.98f, 44.32f;
		case 5:
			return 2510.23f, -1308.89f, 47.95f;
		case 105:
			return 1362.44f, -1301.61f, 76.76f;
		case 26:
			return -1808.22f, -347.41f, 163.65f;
		case 76:
			return -278.31f, 805.26f, 118.37f;
		case 38:
			return -763.94f, -1270.71f, 43.14f;
		case 115:
			return -5530.877f, -2930.6f, -2.2877f;
	}
	return 0f, 0f, 0f;
}

char* func_356(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 78:
			sVar0 = "ASB_Sheriff";
			break;
		case 5:
			sVar0 = "SD_PoliceChief";
			break;
		case 105:
			sVar0 = "RHD_sheriff";
			break;
		case 26:
			sVar0 = "STR_Sheriff";
			break;
		case 76:
			sVar0 = "VAL_Sheriff";
			break;
		case 38:
			sVar0 = "BLW_Police_Chief";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "VAL_Sheriff";
			break;
	}
	return sVar0;
}

void func_357(var uParam0, bool bParam1)
{
	if (!func_472(bParam1, 1))
	{
		DECORATOR::DECOR_SET_BOOL(bParam1, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(bParam1, func_473(uParam0->f_300));
	}
}

void func_358(bool bParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
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
	if (bParam0 == func_474(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_475(bParam0))
	{
		if (func_476(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(bParam0);
		}
	}
	if (func_39(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			bVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(bVar0) && !ENTITY::IS_ENTITY_DEAD(bVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(bVar0, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			bVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(bVar2) && !ENTITY::IS_ENTITY_DEAD(bVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_358(bVar2, vParam1, fParam4, iParam5, fParam6);
			}
			return;
		}
	}
	if (!func_39(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(bParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), false, true);
		}
	}
	if (func_39(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(bParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(bParam0, false);
		}
	}
	else if (func_39(iParam5, 129))
	{
		if (func_39(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(bParam0, vParam1, func_39(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(bParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(bParam0, vParam1, fParam4, true, func_39(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_39(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), bVar3, 0, false);
		}
		if (func_475(bParam0))
		{
			bVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			PHYSICS::_0x0348469DAA17576C(bVar6);
			if (!func_39(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(bVar6, true, false);
				TASK::TASK_STAND_STILL(bVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0) == Global_35 && !func_39(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_359(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	iVar0 = func_258(uParam0->f_69, Global_35, 0.7f);
	if (uParam0->f_65 == 18)
	{
		if (iVar0 == 0 || iVar0 == 3)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_F_SHRFF";
				sVar2 = "RTN_DEAD_F_SHRFF";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_F_SHRFF";
				sVar2 = "RTN_ALIVE_F_SHRFF";
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_DEAD_B_SHRFF";
			sVar2 = "RTN_DEAD_B_SHRFF";
		}
		else
		{
			sVar1 = "SCRIPT_PROC@BOUNTY@SKINNER_SEARCH@SHERIFF@RTN_ALIVE_B_SHRFF";
			sVar2 = "RTN_ALIVE_B_SHRFF";
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else if (uParam0->f_65 == 12)
	{
		if (iVar0 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_DEAD_DEPUTY";
				sVar2 = "ENTER_FRONT_DEAD_DEPUTY";
			}
			else
			{
				sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_FRONT_ALIVE_DEPUTY";
				sVar2 = "ENTER_FRONT_ALIVE_DEPUTY";
			}
		}
		else
		{
			iVar0 = func_258(uParam0->f_69, Global_35, 1f);
			if (iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_DEAD_DEPUTY";
					sVar2 = "ENTER_LEFT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_LEFT_ALIVE_DEPUTY";
					sVar2 = "ENTER_LEFT_ALIVE_DEPUTY";
				}
			}
			else if (iVar0 == 2)
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_67))
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_DEAD_DEPUTY";
					sVar2 = "ENTER_RIGHT_DEAD_DEPUTY";
				}
				else
				{
					sVar1 = "SCRIPT_PROC@BOUNTY@LEMOYNE_RAIDER@INTERIOR_RETURN@ENTER_RIGHT_ALIVE_DEPUTY";
					sVar2 = "ENTER_RIGHT_ALIVE_DEPUTY";
				}
			}
		}
		TASK::_0x79197F7D2BB5E73A(uParam0->f_69, uParam0->f_371, sVar1, sVar2, "SCRIPT_COMMON_SHERIFF_SIT_RELAX", 0);
		TASK::TASK_LOOK_AT_ENTITY(uParam0->f_69, Global_35, -1, 0, 51, 0);
	}
	else
	{
		TASK::_0xE7FA07624574B79A(uParam0->f_69, Global_35, 2, 1, -1f, 1, 0, 0, 0);
	}
}

bool func_360(var uParam0)
{
	if (uParam0->f_359)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, 33554432);
	}
	return func_39(uParam0->f_328, 16777216);
}

bool func_361(var uParam0)
{
	if (uParam0->f_358)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_67, true))
	{
		return func_39(uParam0->f_328, -2147483648);
	}
	return func_39(uParam0->f_328, 1073741824 /* Float: 2f */);
}

char* func_362(int iParam0, bool bParam1)
{
	if (iParam0 == 78 && !bParam1)
	{
		return "WHOA";
	}
	return "GREET_PLAYER_CAPTURED_BOUNTY";
}

Vector3 func_363(var uParam0, int iParam1)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "", 24);
	switch (uParam0->f_65)
	{
		case 11:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "BDUL_LAWGREET", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "BDUL_LAWGREETSJ", 24);
			}
			break;
		case 153:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT03_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT03_GREET_A", 24);
				}
			}
			break;
		case 14:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_RTRN_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 16))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "JVA_RBT5_DEAD_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "JVA_RBT5_ALVE_A", 24);
				}
			}
			break;
		case 13:
			if (iParam1 == 0)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "BRA_DELIVER_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_DEL_S_WK", 24);
				}
				else
				{
					StringCopy(&cVar0, "BRA_DELIVER_S", 24);
				}
			}
			else if (iParam1 == 2)
			{
				if (func_477(uParam0->f_65, 8))
				{
					StringCopy(&cVar0, "BRA_PLYR_KILL_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "BRA_PLR_ATKN_", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			else if (iParam1 == 3)
			{
				if (func_39(uParam0->f_329, 32768))
				{
					StringCopy(&cVar0, "BRA_PLYR_ATK_JN", 24);
				}
			}
			break;
		case 154:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT12_GREET_DJ", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT12_GREET_D", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT12_GRT_AJ", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT12_GREET_DS", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT12_GRT_AS", 24);
				}
			}
			break;
		case 15:
			if (iParam1 == 0)
			{
				if (func_477(uParam0->f_65, 32))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBT14_GREET_AJ1", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBT14_GREET_A", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_J12", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_A2", 24);
				}
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "RBT14_GREET_AS", 24);
			}
			else if (iParam1 == 2)
			{
				if (func_101())
				{
					StringCopy(&cVar0, "RBT14_GREET_AJ2", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT14_GREET_AA", 24);
				}
			}
			break;
		case 12:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					if (func_101())
					{
						StringCopy(&cVar0, "RBCON_IG3_P1_J", 24);
					}
					else
					{
						StringCopy(&cVar0, "RBCON_IG3_P1", 24);
					}
				}
				else if (func_101())
				{
					StringCopy(&cVar0, "RBCON_IG2_P1_J", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBCON_IG2_P1", 24);
				}
			}
			break;
		case 16:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "NBX_SDS_ALV", 24);
				cVar0 = { func_387(cVar0) };
			}
			else if (iParam1 == 1)
			{
				StringCopy(&cVar0, "NBX_SDS_ALVR", 24);
			}
			break;
		case 18:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT20_IG3_DEAD", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT20_IG3_ALIVE", 24);
				}
			}
			break;
		case 155:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT21_RTRNAWKJ", 24);
			}
			break;
		case 17:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_GREET_D", 24);
				}
				else
				{
					StringCopy(&cVar0, "RBT18_GREET_A", 24);
				}
			}
			else if (iParam1 == 1)
			{
				if (!func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT18_RTNAWAKE", 24);
				}
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				StringCopy(&cVar0, "RBT22_IG7_B", 24);
			}
			break;
		case 20:
			if (iParam1 == 0)
			{
				if (func_146(uParam0->f_67))
				{
					StringCopy(&cVar0, "RBT23_BDM_D", 24);
					cVar0 = { func_387(cVar0) };
				}
				else
				{
					StringCopy(&cVar0, "RBT23_BDM_A", 24);
					cVar0 = { func_387(cVar0) };
				}
			}
			break;
	}
	return cVar0;
}

void func_364(var uParam0)
{
	if (uParam0->f_5 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
		{
			func_230(uParam0);
		}
	}
	if (uParam0->f_7 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
		{
			if (uParam0->f_26 == 0)
			{
				uParam0->f_26 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_7, uParam0->f_1, 7);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_26))
			{
				uParam0->f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_26));
			}
		}
	}
	if (uParam0->f_11 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			uParam0->f_10 = OBJECT::CREATE_OBJECT(uParam0->f_11, uParam0->f_1, true, true, false, false, true);
		}
	}
}

void func_365(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		if (uParam0->f_29 == 0)
		{
			uParam0->f_29 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_14, uParam0->f_15, 7);
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_29))
		{
			uParam0->f_13 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_29));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
	{
		if (uParam0->f_28 == 0)
		{
			uParam0->f_28 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_19, uParam0->f_20, 7);
		}
		else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_28))
		{
			uParam0->f_18 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_28));
		}
	}
}

int func_366(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_69))
		{
			return 1;
		}
		if (uParam0->f_5 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_4))
			{
				return 1;
			}
		}
		if (uParam0->f_7 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_6))
			{
				return 1;
			}
		}
		if (uParam0->f_11 != 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
			{
				return 1;
			}
			if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_10))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_367(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

bool func_368(var uParam0, int iParam1)
{
	if ((uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_67))
	{
		return false;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_30[iParam1 /*14*/].f_1, true, false))
		{
			uParam0->f_30[iParam1 /*14*/] = 1;
			return true;
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_30[iParam1 /*14*/].f_9))
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, uParam0->f_30[iParam1 /*14*/].f_9, false, true);
		}
		else
		{
			uParam0->f_30[iParam1 /*14*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_8, uParam0->f_30[iParam1 /*14*/].f_13, 0, false, true);
		}
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_30[iParam1 /*14*/].f_1))
		{
			func_478(uParam0, iParam1);
			func_479(uParam0, iParam1);
			func_480(uParam0, iParam1);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_30[iParam1 /*14*/].f_1);
		}
	}
	return false;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_370(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_481();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_482(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_372(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_101())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_392(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_481();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_483(iVar1);
		func_485(func_484(), 0, 4000);
		func_486(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_487(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_399(func_398(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_369(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_488(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_399(func_398(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_369(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_488(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_489(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_398(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_490(10, 1);
	}
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_372(int iParam0)
{
	if (!func_491(iParam0))
	{
		return false;
	}
	return func_492(iParam0);
}

int func_373()
{
	return Global_40.f_4283.f_1;
}

int func_374(int iParam0)
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
	else if (iParam0 <= 115)
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

int func_375(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_215() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_372(45))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

void func_376(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	Global_40.f_9829[iParam0 /*4*/].f_1 = iParam1;
	Global_40.f_9829[iParam0 /*4*/] = iParam2;
	Global_40.f_9829[iParam0 /*4*/].f_2 = 0;
	Global_40.f_9829[iParam0 /*4*/].f_3 = iParam3;
}

void func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -1;
	iVar1 = func_219(iParam1);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam1)
		{
			if (iVar3 >= 0)
			{
				func_376(iVar3, Global_40.f_9829[iVar0 /*4*/].f_1, iParam1, Global_40.f_9829[iVar0 /*4*/].f_3);
			}
			iVar3 = iVar0;
			iVar2++;
			if (iVar2 == iVar1)
			{
				func_376(iVar0, iParam0, iParam1, 0);
				return;
			}
		}
		iVar0++;
	}
}

bool func_378(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

void func_379(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_15(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_380(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_493(iParam0, 32);
	func_331();
}

int func_381(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_494(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_495(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_382(char* sParam0, char* sParam1, char* sParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(42, sParam0, sParam1, sParam2));
}

char* func_383(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_496(sParam1));
}

void func_384(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_498(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_498(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_385(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL(sParam1))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(10, sParam0, sParam1));
}

void func_386(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(MISC::VAR_STRING(2, sParam0));
}

Vector3 func_387(char[12] cParam0)
{
	if (func_101())
	{
		StringConCat(&cParam0, "J", 24);
	}
	else
	{
		StringConCat(&cParam0, "A", 24);
	}
	return cParam0;
}

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_500(func_499(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_389(var uParam0)
{
	if (func_390(81053684, uParam0))
	{
		return true;
	}
	if (func_390(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_500(func_499(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_501(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

var func_391()
{
	if (func_215() != -1)
	{
		return 0;
	}
	return func_502(joaat("FAME"));
}

int func_392(int iParam0, int iParam1, int iParam2)
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

bool func_393()
{
	return Global_1347398.f_1 == 0;
}

void func_394(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_395()
{
	return Global_1347398.f_1 == 1000;
}

bool func_396()
{
	return Global_1347398.f_1 == 2000;
}

bool func_397()
{
	return Global_1347398.f_1 == 3000;
}

struct<2> /*16*/ func_398(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

void func_399(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_400()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_401(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_402(int iParam0)
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

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_503(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_400())
	{
		return -1;
	}
	iVar0 = func_401(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_504(iVar1, 0);
	func_406(iVar1, 0);
	func_410(iVar1, 0);
	func_408(iVar1, 0);
	func_505(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_506(iVar1, iParam4);
	}
	return iVar1;
}

bool func_404(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_405(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_406(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

int func_407(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_4;
	}
	return 0;
}

void func_408(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

int func_409(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

void func_410(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_411(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = uParam1;
}

int func_412(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_314(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_187(iParam0, 1399091007))
	{
		func_507(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_413(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_186(iParam0, 0))
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
	if (!func_508())
	{
		func_509(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_510(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_511(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_314(iParam0);
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
	else if (!func_512(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_514(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_513(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_187(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_513(iParam0));
	}
	func_489(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> /*16*/ func_414(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_186(iParam0, 0))
	{
		return Var0;
	}
	if (func_187(iParam0, -305066475))
	{
		if (func_215() == -1)
		{
			if (func_187(iParam0, -537818634))
			{
				return func_398(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_398(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_187(iParam0, -537818634))
	{
		return func_398(joaat("MEDICINE_ITEMS"));
	}
	if (func_187(iParam0, 2084895747))
	{
		return func_398(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

bool func_415(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_457(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_519(iParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_459(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_416(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_186(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_520(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_521(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_522(iParam0, Var0, Var0.f_4, bParam4) };
	return func_519(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_417(bool bParam0)
{
	if (func_215() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_461(bParam0));
}

void func_418(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_187(iParam0, 606799272))
		{
			func_523(iParam0, iParam1);
		}
		if (func_187(iParam0, -1112814642) && func_187(iParam0, -1697809989))
		{
			func_524(iParam0, iParam1, 1, 0);
		}
	}
}

void func_419(var uParam0, bool bParam1, int iParam2)
{
	func_525(iParam2);
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
		uParam0->f_13 = func_526(0);
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
							func_15(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_527(1))
						{
							func_15(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_527(1) || *uParam0 & 8192 != 0))
				{
					func_21(uParam0, 33554432);
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
			if (func_528(uParam0))
			{
				uParam0->f_15 = func_438();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_438() - uParam0->f_15) > 500)
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
	func_529(uParam0);
}

bool func_420(bool bParam0, var uParam1)
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
			if (!func_530(bParam0, uParam1, bVar2))
			{
				return false;
			}
			if (func_531(bParam0, bVar2) <= func_532(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_421(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_533(iParam2, 1, 1, 1, 0))
	{
		func_15(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_534(uParam1, 1);
	func_535();
}

bool func_422(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_536(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_537(uParam1);
			if (func_538(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_539(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_534(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_534(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_423(bool bParam0, bool bParam1, var uParam2)
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
	if (func_540(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_537(uParam2);
		if (func_538(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_539(uParam2)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_424(bool bParam0, var uParam1)
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
	if (func_530(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_539(uParam1)
		{
			fVar3 = func_537(uParam1);
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

bool func_425(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_426(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_541(uParam2);
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
			if (func_434(uParam2, bParam1))
			{
				func_534(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_427(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_542(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_434(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_534(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_428(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_543(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_544(bParam1, vVar0, vVar4))
					{
						func_534(uParam2, 1);
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
					func_534(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_544(bParam1, vVar0, vVar7))
					{
						func_534(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_429(bool bParam0, var uParam1)
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
		if (!func_530(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_545(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_546(Global_1935630.f_34[iVar0]))
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
			if (func_547(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_548(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_549(uParam1, bParam0, fVar1, iVar0))
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

bool func_430(bool bParam0, var uParam1)
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

bool func_431(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_432(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_550(bVar0, &iVar2))
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
	if (func_551(bVar0, bParam0))
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

int func_433(var uParam0, bool bParam1)
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

bool func_434(var uParam0, bool bParam1)
{
	if (func_552(uParam0))
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

bool func_435(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_175(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_436()
{
}

bool func_437(var uParam0, bool bParam1)
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
		if (func_553(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_438();
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
						if (func_157(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_438();
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

int func_438()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_439()
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
	if ((func_438() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_440(var uParam0, bool bParam1)
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
	fVar0 = func_532(uParam0);
	if (uParam0->f_12 > func_554(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_555(bParam1);
	iVar1 = func_556(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_441(bool bParam0, bool bParam1, var uParam2)
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
	return func_557(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_442(bool bParam0, var uParam1)
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
		if (func_285(bParam0, uParam1, 1))
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
					if (!func_449(uParam1, bParam0))
					{
						if (func_157(bVar4, Global_36, 1) < 7f)
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

bool func_443(bool bParam0, var uParam1)
{
	if (!func_558(0))
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

bool func_444(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_438();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_445(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_446(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_438();
	}
	else if (func_438() - uParam1->f_4) > func_559(uParam1)
	{
		return func_560(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_447(var uParam0, bool bParam1)
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

bool func_448(bool bParam0, int iParam1, int iParam2)
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

bool func_449(var uParam0, bool bParam1)
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

int func_450(int iParam0)
{
	int iVar0;

	iVar0 = func_292(iParam0);
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

void func_451(int iParam0, int iParam1)
{
	if (func_215() != -1)
	{
		return;
	}
	if (!func_286(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_452(int iParam0, int iParam1)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_453(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_454(int iParam0)
{
	if (!func_404(iParam0))
	{
		return -1;
	}
	return func_561(iParam0);
}

int func_455(int iParam0)
{
	if (!func_312(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

bool func_456(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_461(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_457(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_458(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_459(int iParam0)
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

int func_460(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_515(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_517(&Var0, func_516(0));
	}
	if (!func_518(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_459(iVar18);
	return iVar19;
}

int func_461(bool bParam0)
{
	if (func_215() == -1)
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

void func_462(var uParam0)
{
	int iVar0;

	if (func_562(uParam0->f_65))
	{
		uParam0->f_301 = 0;
	}
	else if (func_563(uParam0->f_65))
	{
		uParam0->f_301 = 2;
	}
	else if (func_564(uParam0->f_65))
	{
		uParam0->f_301 = 1;
	}
	else if (uParam0->f_300 != 78)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		uParam0->f_301 = iVar0;
	}
	else if (func_565())
	{
		uParam0->f_301 = 1;
	}
	else
	{
		uParam0->f_301 = 0;
	}
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("P_CHAIRDESK02X");
		case 105:
			return joaat("P_WOODENCHAIR01X");
		case 26:
			return joaat("P_CHAIR24X");
		case 76:
			return joaat("P_DININGCHAIRS01X");
		case 38:
			return joaat("P_DININGCHAIRS01X");
		case 115:
			return joaat("P_WINDSORCHAIR03X");
		case 78:
			return joaat("P_WOODENCHAIR01X");
	}
	return joaat("P_CHAIR24X");
}

bool func_464(int iParam0)
{
	return iParam0 != 0;
}

bool func_465()
{
	return func_566(1);
}

void func_466(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 - (Global_1900383[iParam0 /*45*/].f_24 && iParam1));
}

void func_467(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = func_201(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bVar0))
	{
		return;
	}
	if (func_567(iParam0, 64))
	{
		func_468(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(bVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_372(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (bVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(-515518185, bVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_568(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == bVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_468(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_569(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, bVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_570(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_567(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_571(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == bVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(bVar0, true, false) };
	fVar15 = func_572(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_573(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = -401963276;
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(bVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = -1380599892;
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = 1313031610;
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = -1012863186;
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_574(Global_1900383[iParam0 /*45*/].f_26);
		func_575(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == -401963276)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == bVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 673950256);
	}
	if (func_476(bVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, 561559387);
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, -201249929);
	}
	iVar21 = func_569(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(bVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(bVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(bVar0, iVar22);
	}
}

void func_468(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

bool func_469(int iParam0)
{
	return func_576(iParam0, 2);
}

bool func_470(int iParam0, bool bParam1)
{
	if (!func_286(iParam0))
	{
		return false;
	}
	if ((func_287(iParam0, 1) && !func_140(iParam0)) && func_141(iParam0))
	{
		return false;
	}
	if (!func_287(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_577(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_471(int iParam0)
{
	if (!func_286(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_472(bool bParam0, bool bParam1)
{
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(bParam0, "HAS_VOICE"))
	{
		return true;
	}
	if (bParam1 && AUDIO::_0xF0EE69F500952FA5(bParam0))
	{
		return true;
	}
	return false;
}

char* func_473(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 78:
			sVar0 = "0034_U_M_O_AsbSheriff_01";
			break;
		case 5:
			sVar0 = "1017_U_M_M_SDPoliceChief_01";
			break;
		case 105:
			sVar0 = "0405_U_M_M_RhdSheriff_01";
			break;
		case 26:
			sVar0 = "0457_U_M_M_StrSherriff_01";
			break;
		case 76:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
		case 38:
			sVar0 = "0085_U_M_O_BlWPoliceChief_01";
			break;
		case 115:
			sVar0 = "TWD_Sheriff";
			break;
		default:
			sVar0 = "0484_U_M_M_ValSheriff_01";
			break;
	}
	return sVar0;
}

bool func_474(var uParam0)
{
	return uParam0;
}

bool func_475(bool bParam0)
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

bool func_476(bool bParam0)
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

bool func_477(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_278(Global_1347702[iParam0 /*49*/].f_15);
	if (func_39(iVar0, iParam1))
	{
		return true;
	}
	return false;
}

void func_478(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_11 || uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_578(uParam0->f_300), uParam0->f_67, 0);
	}
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_241(uParam0->f_300), Global_35, 0);
	}
}

void func_479(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_12)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_579(uParam0->f_300), uParam0->f_13, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, func_580(uParam0->f_300), uParam0->f_18, 0);
	}
}

void func_480(var uParam0, int iParam1)
{
	if (uParam0->f_30[iParam1 /*14*/].f_10)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Sheriff", uParam0->f_69, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "DESK", uParam0->f_6, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "Chair", uParam0->f_4, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_30[iParam1 /*14*/].f_1, "BOOK", uParam0->f_10, 0);
		}
	}
}

int func_481()
{
	int iVar0;

	iVar0 = func_581();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_482(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_215() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_582(MISC::ABSF(fVar1) < 1f, func_582(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_484()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_485(int iParam0, bool bParam1, int iParam2)
{
	func_583((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_584(iParam0);
}

void func_486(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_585(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_487(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_586(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_587(iVar5, &iVar2, &iVar0))
			{
				if (!func_186(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_588(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_314(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_481() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_481() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_589();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

char* func_488(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_489(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_590(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_490(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_591(iParam0))
	{
		return 0;
	}
	if (!func_592())
	{
		return 0;
	}
	if (!func_593(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

bool func_491(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_492(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_493(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 = (Global_1900383[iParam0 /*45*/].f_24 || iParam1);
}

float func_494(vector3 vParam0, vector3 vParam3)
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

bool func_495(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

char* func_496(char* sParam0)
{
	return sParam0;
}

int func_497(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_498(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

int func_499(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_594(iVar0);
}

int func_500(int iParam0, int iParam1)
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

int func_501(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

var func_502(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	Var1 = { func_398(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_503(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_504(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_595(iParam0);
	}
	else
	{
		func_596(iParam0, iParam1);
	}
	func_597();
}

void func_505(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_506(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

void func_507(int iParam0, var uParam1, var uParam2)
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

bool func_508()
{
	return !Global_1911774;
}

void func_509(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_510(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_511(int iParam0, int iParam1)
{
	if (!func_186(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_512(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_513(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_514(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<18> /*144*/ func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_516(bool bParam0)
{
	int iVar0;

	iVar0 = func_461(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_522(923904168, func_598(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_522(923904168, func_598(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_522(923904168, func_598(bParam0), -740156546, 0);
}

void func_517(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_518(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_461(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_519(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_599(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_600(*uParam1, &Var0, bParam6, 0))
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
	if (!func_417(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_461(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

struct<5> /*40*/ func_520(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_598(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_314(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_522(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_516(bParam1) };
			if (bParam2 && func_601(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_602(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_602(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_603(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_604(bParam1) };
			switch (func_501(iParam0))
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
			if (func_605(iParam0, -1823706425))
			{
				Var0 = { func_522(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_605(iParam0, -1483207246))
			{
				Var0 = { func_522(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_600(Var0, &Var27, bParam1, 0))
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

bool func_521(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_599(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_417(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_461(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_522(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_186(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_461(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_523(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_215() == -1)
	{
		if (func_606(43))
		{
			if (func_187(iParam0, 412399755))
			{
				func_607(joaat("EXOTIC_STAGE_01"));
				if (func_608() == 0)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_606(44))
		{
			if (func_187(iParam0, 709057512))
			{
				func_607(joaat("EXOTIC_STAGE_02"));
				if (func_608() == 1)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(45))
		{
			if (func_187(iParam0, -1478961327))
			{
				func_607(joaat("EXOTIC_STAGE_03"));
				if (func_608() == 2)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(46))
		{
			if (func_187(iParam0, -1238404098))
			{
				func_607(joaat("EXOTIC_STAGE_04"));
				if (func_608() == 3)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_606(47))
		{
			if (func_187(iParam0, 1160548794))
			{
				func_607(joaat("EXOTIC_STAGE_05"));
				if (func_608() == 4)
				{
					func_609(0, 10);
					iVar0 = func_610(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_611(iParam0) < func_612(iParam0))
						{
							func_613(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_524(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_185(func_614(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_615(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_616(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_525(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_617();
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
			func_618(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_526(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_527(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_448(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_528(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_215() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_619(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_619(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_556(iVar0) == -1)
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

void func_529(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_620(uParam0);
	}
}

bool func_530(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_556(bParam2);
	}
	else
	{
		iVar1 = func_555(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_556(bParam0);
	}
	else
	{
		iVar0 = func_555(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_12(*uParam1, 8388608))
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

float func_531(bool bParam0, bool bParam1)
{
	return func_175(bParam0, bParam1, 1, 1);
}

float func_532(var uParam0)
{
	return uParam0->f_26;
}

bool func_533(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_534(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_15(uParam0, 134217728);
	}
	else
	{
		func_21(uParam0, 134217728);
	}
}

void func_535()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_536(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_175(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_621(bVar0, 0)))
		{
			if (func_622(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_537(var uParam0)
{
	return uParam0->f_17;
}

bool func_538(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_12(*uParam0, 4194304))
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

int func_539(var uParam0)
{
	return uParam0->f_18;
}

bool func_540(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_621(bVar0, 0)))
		{
			if (func_623(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_541(var uParam0)
{
	return uParam0->f_23;
}

int func_542(var uParam0)
{
	return uParam0->f_21;
}

int func_543(var uParam0)
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

bool func_544(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_453(bParam0, vParam4, 0.5f))
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

int func_545(bool bParam0)
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
	if (func_624(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_546(int iParam0)
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

bool func_547(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(bParam1))
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

bool func_548(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_625(bParam1))
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

bool func_549(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_625(bParam1))
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

bool func_550(bool bParam0, int iParam1)
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

bool func_551(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_626(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_552(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_553(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_157(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_554(var uParam0)
{
	return uParam0->f_24;
}

int func_555(bool bParam0)
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

int func_556(bool bParam0)
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

int func_557(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_550(Global_35, &iVar1))
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
		fVar2 = func_175(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_175(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_558(int iParam0)
{
	if (func_101())
	{
		return false;
	}
	return func_299(Global_1347702[58 /*49*/].f_15, 1);
}

int func_559(var uParam0)
{
	return uParam0->f_20;
}

int func_560(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

int func_561(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_627(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_562(int iParam0)
{
	if (((iParam0 == 14 || iParam0 == 11) || iParam0 == 154) || iParam0 == 17)
	{
		return true;
	}
	return false;
}

bool func_563(int iParam0)
{
	if ((iParam0 == 13 || iParam0 == 16) || iParam0 == 155)
	{
		return true;
	}
	return false;
}

bool func_564(int iParam0)
{
	if (((((iParam0 == 153 || iParam0 == 15) || iParam0 == 18) || iParam0 == 20) || iParam0 == 19) || iParam0 == 12)
	{
		return true;
	}
	return false;
}

bool func_565()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_566(int iParam0)
{
	return (Global_1935496 && iParam0) != 0;
}

bool func_567(int iParam0, int iParam1)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1900383[iParam0 /*45*/].f_24 && iParam1) != 0;
}

void func_568(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_629(func_628(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_630())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_101();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_569(int iParam0)
{
	iParam0 = func_327(iParam0);
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

void func_570(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_629(func_628(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_630())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_101())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_571(int iParam0)
{
	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

float func_572(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_573(int iParam0)
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

	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_631(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_569(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_569(iParam0) + 1;
	fVar6 = func_632(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_633(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_574(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -401963276);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 231194138);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1012863186);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -272772079);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1313031610);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1814032670);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1380599892);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 430539302);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -995247980);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -25056193);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -264630352);
}

void func_575(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

bool func_576(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_577(int iParam0, bool bParam1)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_286(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_292(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_450(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_292(iParam0));
}

char* func_578(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "Bounty";
		case 105:
			return "Target";
		case 78:
			return "Bounty";
		case 26:
			return "Bounty";
		case 5:
			return "Bounty";
		case 38:
			return "Bounty";
		case 115:
			return "Bounty";
	}
	return "";
}

char* func_579(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoor";
		case 105:
			return "Door";
		case 78:
			return "CellDoor";
		case 26:
			return "CellDoor";
		case 5:
			return "CellDoor";
		case 38:
			return "CellDoor";
		case 115:
			return "CellDoor";
	}
	return "";
}

char* func_580(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return "CellDoorLock";
		case 105:
			return "lock";
		case 78:
			return "CellDoorLock";
		case 26:
			return "CellDoorLock";
		case 5:
			return "CellDoorLock";
		case 38:
			return "CellDoorLock";
		case 115:
			return "CellDoorLock";
	}
	return "";
}

int func_581()
{
	return Global_40.f_11095.f_35;
}

float func_582(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_583(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_634(bParam1);
	}
}

void func_584(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_585(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_586(int iParam0)
{
	vector3 vVar0;

	if (!func_635(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_DATAFILE_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_587(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_635(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_588(int iParam0)
{
	return iParam0;
}

int func_589()
{
	int iVar0;

	iVar0 = func_481();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

void func_590(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_591(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_592()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_593(int iParam0, int iParam1, int iParam2)
{
	if (!func_591(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP1");
			break;
		case 1:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP2");
			break;
		case 2:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP3");
			break;
		case 3:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP4");
			break;
		case 4:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_CHP5");
			break;
		case 5:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_GOLDRUSH");
			break;
		case 6:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_MINIGAMES");
			break;
		case 7:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_B_AND_E");
			break;
		case 8:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RCKPT");
			break;
		case 9:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_TO_POOR");
			break;
		case 10:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_HONOR");
			break;
		case 11:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_RC");
			break;
		case 12:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BOUNTY");
			break;
		case 13:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_UPGR_W");
			break;
		case 14:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_BEAR");
			break;
		case 15:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_ART");
			break;
		case 16:
			*iParam1 = joaat("SP_ACHIEVEMENTS");
			*iParam2 = joaat("ACH_COLLECT");
			break;
		default:
			return false;
	}
	return true;
}

int func_594(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_636(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_595(int iParam0)
{
	int iVar0;

	iVar0 = func_627(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_637(iVar0);
}

int func_596(int iParam0, int iParam1)
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
			func_638(iVar2);
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

void func_597()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

struct<4> /*32*/ func_598(bool bParam0)
{
	return func_522(joaat("CHARACTER"), func_639(), -1591664384, bParam0);
}

bool func_599(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_600(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_461(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_601(int iParam0, bool bParam1)
{
	if (func_501(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_372(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_602(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_640(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_603(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_641(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_604(bool bParam0)
{
	int iVar0;

	iVar0 = func_461(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_522(271701509, func_598(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_522(271701509, func_598(bParam0), 12999093, 0);
}

bool func_605(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_501(iParam0);
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

bool func_606(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	return func_299(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_607(int iParam0)
{
	if (!func_642(iParam0))
	{
		func_644(func_643(iParam0));
	}
}

int func_608()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_642(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_609(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_645(&Global_0, 8);
	}
	if (!func_592() || func_215() != -1)
	{
		return;
	}
	func_645(&Global_0, 1);
}

int func_610(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_611(iVar9);
	iVar2 = func_611(iVar10);
	iVar3 = func_611(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_611(iVar12);
	}
	iVar5 = func_612(iVar9);
	iVar6 = func_612(iVar10);
	iVar7 = func_612(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_612(iVar12);
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

int func_611(int iParam0)
{
	int iVar0;

	if (func_185(iParam0, 1, 0))
	{
		iVar0 = func_316(iParam0, 0, 0);
	}
	return iVar0;
}

int func_612(int iParam0)
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

void func_613(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_592() && (func_646(38) || func_606(38)))
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
			if (func_592() && (func_646(39) || func_606(39)))
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
			iVar9 = func_647(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_592() && (func_646(41) || func_606(41)))
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
			if (func_592() && (func_646(49) || func_606(49)))
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
			iVar9 = func_647(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_648(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_649(iParam0, iVar13, iVar14))
	{
	}
	if (func_650(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_651(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_653(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_654(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_614(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_635(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_615(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_614(iParam1, 5) || iParam0 == func_614(iParam1, 6)) || iParam0 == func_614(iParam1, 7)) || iParam0 == func_614(iParam1, 8)) || iParam0 == func_614(iParam1, 9))
	{
		func_655(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_613(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_656(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_616(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_614(iParam1, 5) || iParam0 == func_614(iParam1, 6)) || iParam0 == func_614(iParam1, 7)) || iParam0 == func_614(iParam1, 8)) || iParam0 == func_614(iParam1, 9))
	{
		if (func_655(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_656(51, 0, 0, iVar0, func_647(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_613(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_656(51, 0, 0, iVar0, func_647(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_617()
{
	if (func_657())
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

void func_618(var uParam0, var uParam1)
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

int func_619(var uParam0)
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

void func_620(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_21(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_15(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_621(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_622(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_623(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_623(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_624(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_625(bool bParam0)
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

int func_626(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_627(int iParam0)
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

char* func_628(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_658(37, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_658(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_629(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_514(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_630()
{
	if (func_215() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_631(int iParam0)
{
	iParam0 = func_327(iParam0);
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

float func_632(int iParam0)
{
	iParam0 = func_327(iParam0);
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

float func_633(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_634(bool bParam0)
{
	func_659(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

bool func_635(int iParam0, var uParam1)
{
	if (!func_660(iParam0))
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

int func_636(int iParam0, int iParam1)
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

int func_637(int iParam0)
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

int func_638(int iParam0)
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

struct<4> /*32*/ func_639()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_640(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_186(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_522(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_461(bParam6), &Var0, 0);
	return uVar4;
}

bool func_641(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_461(0);
	*uParam1 = { func_522(iParam0, func_516(0), iParam3, 0) };
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

bool func_642(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_643(int iParam0)
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

void func_644(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

void func_645(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_646(int iParam0)
{
	if (func_215() != -1)
	{
		return false;
	}
	if (!func_298(iParam0))
	{
		return false;
	}
	return func_661(Global_1347702[iParam0 /*49*/].f_15);
}

int func_647(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_635(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_648(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_662() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_663(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_664(), 12);
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
			else if (func_665() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_666(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_665(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_667(), 13);
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
			else if (func_668() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_669(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_668(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_647(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_649(int iParam0, int iParam1, int iParam2)
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

bool func_650(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_651(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_652(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_670(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_185(iVar2, 1, 0) || func_672(func_671(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_673(func_670(iVar0))), func_673(func_670(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_665() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_666() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_674(iVar0)), func_674(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_614(iParam3, func_675(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_611(iVar2) - iParam7) >= func_647(iParam3, func_676(iVar0));
				}
				else
				{
					bVar1 = func_611(iVar2) >= func_647(iParam3, func_676(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_611(iVar2) + iParam7) >= func_647(iParam3, func_676(iVar0));
			}
			else
			{
				bVar1 = func_611(iVar2) >= func_647(iParam3, func_676(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_677(iVar2)), func_677(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_678(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_679(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_679(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_668() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_669() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_680(iVar0)), func_680(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_614(iParam3, func_675(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_611(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_681(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_681(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_682(iVar2)), func_682(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_653(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_667() >= 13)
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

bool func_654(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_404(func_683(0)) && ((func_684(0) == 1 || func_684(0) == 8) || func_684(0) == 6))
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

bool func_655(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar0) && func_681(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar2))
		{
			*iParam2++;
		}
		if ((func_681(iVar0) && func_681(iVar1)) && func_681(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_681(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_681(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_681(iVar0))
		{
			*iParam2++;
		}
		if (func_681(iVar1))
		{
			*iParam2++;
		}
		if (func_681(iVar2))
		{
			*iParam2++;
		}
		if (func_681(iVar3))
		{
			*iParam2++;
		}
		if (((func_681(iVar0) && func_681(iVar1)) && func_681(iVar2)) && func_681(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_592() && (func_646(38) || func_606(38)))
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
			if (func_592() && (func_646(39) || func_606(39)))
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
			if (func_592() && (func_646(49) || func_606(49)))
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
		if (func_592() && (func_646(38) || func_606(38)))
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
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_687(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_673(func_686(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_592() && (func_646(39) || func_606(39)))
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
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_592() && (func_646(49) || func_606(49)))
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
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_685(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_657()
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

bool func_658(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_688(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_689())
	{
		return func_688(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_688(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

void func_659(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

bool func_660(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_661(int iParam0)
{
	int iVar0;

	iVar0 = func_454(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_662()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_185(func_690(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_663()
{
	return func_691(Global_40.f_12019);
}

int func_664()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_690(iVar1);
		if (func_185(iVar2, 1, 0) || func_672(func_671(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_665()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_692(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_666()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_693(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_667()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_678(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_668()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

int func_669()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_670(int iParam0)
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

int func_671(int iParam0)
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

bool func_672(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_673(int iParam0)
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

char* func_674(int iParam0)
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

int func_675(int iParam0)
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

int func_676(int iParam0)
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

char* func_677(int iParam0)
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

bool func_678(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_679(int iParam0)
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

char* func_680(int iParam0)
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

bool func_681(int iParam0)
{
	if (func_694(iParam0) && func_185(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_695(iParam0) && func_696(iParam0))
	{
		return true;
	}
	return false;
}

char* func_682(int iParam0)
{
	if (!func_186(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_513(iParam0));
}

int func_683(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_684(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

var func_685(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_686(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

var func_687(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_688(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_689()
{
	return Global_1109000.f_245;
}

int func_690(int iParam0)
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

int func_691(int iParam0)
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

bool func_692(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_693(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_694(int iParam0)
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

int func_695(int iParam0)
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

int func_696(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_697(&iVar0, 0, iVar95, &Var1) && !func_697(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_698(iVar0, &Var1);
			if (func_186(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_697(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_200(iParam1) && !func_699(iParam1))
	{
		bVar0 = func_201(iParam1);
	}
	else
	{
		return false;
	}
	func_700(uParam3);
	iVar5 = func_701(iParam2);
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

void func_698(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_702(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_703(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_699(int iParam0)
{
	int iVar0;

	iParam0 = func_327(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_200(iParam0))
	{
		return false;
	}
	iVar0 = func_201(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_700(var uParam0)
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

int func_701(int iParam0)
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

void func_702(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
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

bool func_703(int iParam0, int iParam1, int iParam2, int iParam3)
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

