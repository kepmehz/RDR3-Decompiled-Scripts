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
	struct<216> /*1728*/ sLocal_14 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
#endregion

void main()
{
	int iVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_14);
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (Global_1914319.f_18941.f_17 && Local_14 > 2)
		{
		}
		else
		{
			func_2(&Local_14);
			func_3(9, 0, &(Local_14.f_203), &(Local_14.f_137), &(Local_14.f_210), 0, 1097859072 /* Float: 15f */, 0);
			if (!func_4(Global_35, 0))
			{
				func_1(&Local_14);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_5(76), true, 0))
			{
				if (!func_6(&(Local_14.f_134)))
				{
					func_7(&(Local_14.f_134), 0);
				}
				else if (func_8(&(Local_14.f_134)) > 10f)
				{
					func_9(&(Local_14.f_134));
					func_1(&Local_14);
				}
			}
			else if (func_10(9, 0, &(Local_14.f_182), Local_14.f_203))
			{
				func_1(&Local_14);
			}
			func_11(Local_14.f_203, &(Local_14.f_214), 8, 9, 0);
			switch (Local_14)
			{
				case 0:
					HUD::TEXT_BLOCK_REQUEST("ES1AUD");
					STREAMING::REQUEST_MODEL(func_12(0), false);
					func_13(&Local_14);
					func_14(Local_14.f_204, "SP_EndlessStrainer1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					POPULATION::_0xB56D41A694E42E86(Local_14.f_206, 0, 0, 0, -1, -1, 0);
					POPULATION::_0x18262CAFEBB5FBE1(Local_14.f_206, 0, 0, 0, -1, -1, 0);
					if (!func_15())
					{
						Local_14.f_143 = func_17(9, 0, 9, func_16(9));
					}
					else
					{
						Local_14.f_143 = func_17(9, 1, 9, func_16(9));
					}
					if (!func_18(Local_14.f_143))
					{
					}
					func_19(&(Local_14.f_182));
					func_20(&(Local_14.f_99));
					func_21(&(Local_14.f_99), 0);
					func_22(&(Local_14.f_99), 0);
					func_23(&(Local_14.f_99), 0);
					func_24(&(Local_14.f_99), 0);
					func_25(&(Local_14.f_99), 1);
					func_26(&(Local_14.f_99), 0);
					func_27(&(Local_14.f_99), 0);
					func_28(&(Local_14.f_99), 0);
					func_29(&(Local_14.f_99), 0);
					func_30(&(Local_14.f_99), 1);
					func_31(&(Local_14.f_99), 1);
					func_32(&(Local_14.f_99), 1);
					func_33(&(Local_14.f_99), 1);
					func_34(&(Local_14.f_99), 0);
					func_35(&(Local_14.f_99), 1);
					func_36(&(Local_14.f_99), 0);
					if ((func_18(Local_14.f_143) && func_37(&(Local_14.f_143), &(Local_14.f_215))) && VOLUME::DOES_VOLUME_EXIST(Local_14.f_207))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_207, true, 0))
						{
							if (!func_38(Local_14.f_143, 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(func_39(-529064319, 0)) && !func_40(-529064319))
								{
									func_41(-529064319, 1, 0f, 0, 0, 0.5f, 0, 0);
									func_42(-529064319, 1);
								}
								if (func_40(-529064319) && !func_43(-529064319))
								{
									func_44(&Local_14, 1);
								}
							}
							else if (func_38(Local_14.f_143, 1))
							{
								func_44(&Local_14, 18);
							}
						}
					}
					break;
				case 1:
					PED::_RESERVE_AMBIENT_PEDS(1);
					if ((((HUD::TEXT_BLOCK_IS_LOADED("ES1AUD") && STREAMING::HAS_MODEL_LOADED(func_12(0))) && PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() == 1) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && VOLUME::DOES_VOLUME_EXIST(Local_14.f_207))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_207, true, 0))
						{
							func_44(&Local_14, 2);
						}
					}
					break;
				case 2:
					if (func_47(&(Local_14.f_203), func_12(0), func_45(0), func_46(0), 0, 0, 1))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_203, "special_ped_group", 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_203, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_14.f_203, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_203, 277, true);
						func_48(&Local_14);
						func_49(&(Local_14.f_1), Local_14.f_203, "MT3_Guest2", 0);
						func_50(Local_14.f_203, 9);
						func_44(&Local_14, 3);
					}
					break;
				case 3:
					if (!func_6(&(Local_14.f_128)))
					{
						func_51(&(Local_14.f_128), 0f);
						Local_14.f_212 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
					}
					else if (IntToFloat(Local_14.f_212) <= func_8(&(Local_14.f_128)) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_205, true, 0))
					{
						Local_14.f_212 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
						func_51(&(Local_14.f_128), 0f);
						func_9(&(Local_14.f_128));
						func_44(&Local_14, 4);
					}
					else
					{
						func_52(&Local_14, iVar0);
					}
					break;
				case 4:
					func_53(&Local_14);
					break;
				case 5:
					func_54(&Local_14, 0, 1);
					break;
				case 6:
					func_54(&Local_14, 1, 2);
					break;
				case 7:
					func_54(&Local_14, 2, 4);
					break;
				case 8:
					func_54(&Local_14, 3, 8);
					break;
				case 9:
					func_54(&Local_14, 4, 16);
					break;
				case 10:
					func_54(&Local_14, 5, 32);
					break;
				case 11:
					func_54(&Local_14, 6, 64);
					break;
				case 12:
					func_54(&Local_14, 7, 128);
					break;
				case 13:
					func_55(&Local_14, 9);
					break;
				case 14:
					func_55(&Local_14, 10);
					break;
				case 15:
					func_55(&Local_14, 11);
					break;
				case 16:
					func_55(&Local_14, 12);
					break;
				case 18:
					break;
				case 17:
					break;
				case 19:
					break;
			}
			func_56(&Local_14, &Local_14);
		}
	}
}

void func_1(int iParam0)
{
	func_57(9);
	if (func_18(iParam0->f_143) && (func_58(iParam0->f_143) || func_59(iParam0->f_143)))
	{
		func_60(iParam0->f_143, 0, 2);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_203))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_203, 0f);
		PED::DELETE_PED(&(iParam0->f_203));
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_204))
	{
		func_61(iParam0->f_204);
		VOLUME::_DELETE_VOLUME(iParam0->f_204);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_206))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_206);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_206);
		VOLUME::_DELETE_VOLUME(iParam0->f_206);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_205))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_205);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_207))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_207);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_208))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_208);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_39(-529064319, 0)) && func_40(-529064319))
	{
		func_62(-529064319, 1);
	}
	func_63(&(iParam0->f_182));
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[9 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[9 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1396257[9 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[9 /*638*/][1 /*48*/].f_47);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_203))
	{
		if (!func_4(iParam0->f_203, 0))
		{
			func_1(iParam0);
		}
		else if (func_64(iParam0->f_203, 0, &(iParam0->f_99), &(iParam0->f_127), 0, 0))
		{
			if (!func_65(iParam0->f_214, 64))
			{
				func_66(&(iParam0->f_214), 64);
			}
		}
		if ((func_65(iParam0->f_214, 64) && *iParam0 >= 2) && *iParam0 < 17)
		{
			if (AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				AUDIO::_0x36559148B78853B3(1, false, 0);
			}
			func_44(iParam0, 17);
		}
	}
}

int func_3(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return 0;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_67();
			*uParam4 = 1;
			return 1;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_68(Global_35, *uParam2, fParam6, 1))
		{
			return 0;
		}
	}
	else if (fParam5 > fParam6)
	{
		return 0;
	}
	if (!func_6(uParam3))
	{
		func_51(uParam3, 0f);
	}
	else if (func_8(uParam3) >= 2f)
	{
		if (!func_69(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_70(iParam0);
			*uParam4 = 1;
			func_9(uParam3);
			return 1;
		}
		else
		{
			func_70(iParam0);
			*uParam4 = 1;
			func_9(uParam3);
			return 1;
		}
	}
	return 0;
}

bool func_4(int iParam0, int iParam1)
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
	if (func_65(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_65(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_65(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_65(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_5(int iParam0)
{
	if (!func_71(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_6(var uParam0)
{
	return func_72(*uParam0, 1);
}

void func_7(var uParam0, bool bParam1)
{
	if (bParam1 || !func_6(uParam0))
	{
		func_73(uParam0);
	}
}

float func_8(var uParam0)
{
	if (!func_6(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_74(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_75() - uParam0->f_1);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_10(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((func_76(0) == 1 || func_76(0) == 2) || func_76(0) == 8) || func_77(Global_1935630, 2048))
			{
				func_66(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (func_76(0) == 11)
			{
				func_66(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (func_76(0) == 6)
			{
				func_66(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_66(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_78(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_78(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_67();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_78(iVar2) > func_78(iVar1))
				{
					if (func_78(iVar0) > func_78(iVar2) + 1 || func_78(iVar0) < func_78(iVar1))
					{
						func_66(uParam2, 32);
					}
				}
				else if (func_78(iVar0) > func_78(iVar2) + 1 && func_78(iVar0) < func_78(iVar1))
				{
					func_66(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_79(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_79(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_80(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_80(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_81(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_66(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_82(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_83(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_6(&(uParam2->f_13)))
					{
						func_51(&(uParam2->f_13), 0f);
					}
					else if (func_84(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_9(&(uParam2->f_13));
						func_66(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_6(&(uParam2->f_13)))
					{
						func_9(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (func_85())
			{
				func_66(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (func_86())
			{
				func_66(uParam2, 2048);
			}
		}
		if (func_77(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_66(uParam2, 128);
		}
		if (func_87(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_66(uParam2, 256);
		}
	}
	if ((((((((((func_65(*uParam2, 2) || func_65(*uParam2, 4)) || func_65(*uParam2, 8)) || func_65(*uParam2, 16)) || func_65(*uParam2, 32)) || func_65(*uParam2, 64)) || func_65(*uParam2, 128)) || func_65(*uParam2, 256)) || func_65(*uParam2, 512)) || func_65(*uParam2, 1024)) || func_65(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_88(iParam3);
	if (fParam4 == 0f)
	{
		if (func_68(iParam0, Global_35, 15f, 1))
		{
			if (!func_89(*uParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_90(uParam1, iParam2);
				}
			}
		}
		else if (func_89(*uParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_91(uParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_89(*uParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_90(uParam1, iParam2);
			}
		}
	}
	else if (func_89(*uParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_91(uParam1, iParam2);
	}
}

bool func_12(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("U_M_M_VALTOWNFOLK_01");
			break;
	}
	return iVar0;
}

void func_13(int iParam0)
{
	struct<11> /*88*/ sVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_204))
	{
		Var0 = { func_92(1) };
		iParam0->f_204 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_206))
	{
		Var0 = { func_92(2) };
		iParam0->f_206 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_205))
	{
		Var0 = { func_92(0) };
		iParam0->f_205 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_207))
	{
		Var0 = { func_92(3) };
		iParam0->f_207 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_208))
	{
		Var0 = { func_92(4) };
		iParam0->f_208 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0, Var0.f_1, Var0.f_4, Var0.f_7, Var0.f_10);
	}
}

int func_14(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_93(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_15()
{
	if (func_94() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1472102294;
		case 0:
			return 1005861726;
		case 2:
			return -26239347;
		case 3:
			return 813446076;
		case 4:
			return joaat("SPID_BLIND_MAN_CASSIDY");
		case 6:
			return -161610929;
		case 7:
			return 419383665;
		case 5:
			return 1809158435;
		case 8:
			return 698747486;
		case 9:
			return 399829678;
		case 10:
			return -1767525506;
		case 11:
			return 1533318556;
		case 12:
			return 846763582;
		case 13:
			return 974338564;
		case 14:
			return 860809165;
		case 15:
			return -1682386507;
		case 16:
			return 420952075;
		case 17:
			return 1340251064;
		case 18:
			return -1417023286;
		case 19:
			return 237608522;
		case 20:
			return 1487910336;
		case 21:
			return 129290505;
		case 22:
			return 1231488843;
		case 23:
			return -499580940;
		case 24:
			return 1953535365;
		case 25:
			return -315419568;
		case 26:
			return -1708806962;
		case 27:
			return 1405526353;
		case 28:
			return -1903564707;
		case 29:
			return -1132839335;
		default:
			break;
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_95())
	{
		iVar2 = func_95();
	}
	iVar5 = func_96(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_97(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_97(iVar6) == 0)
			{
				return func_98(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_97(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_97(iVar6) == 0)
			{
				return func_98(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_98(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_18(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_19(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_20(var uParam0)
{
	func_21(uParam0, 0);
	func_34(uParam0, 0);
	func_30(uParam0, 1);
	func_28(uParam0, 1);
	func_99(uParam0, 0);
	func_100(uParam0, 1);
	func_101(uParam0, 1, 1, 1);
}

void func_21(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 16384);
	}
	else
	{
		func_103(&(uParam0->f_1), 16384);
	}
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 131072);
	}
	else
	{
		func_103(&(uParam0->f_1), 131072);
	}
}

void func_23(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 4);
	}
	else
	{
		func_102(uParam0, 4);
	}
}

void func_24(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 8);
	}
	else
	{
		func_103(&(uParam0->f_1), 8);
	}
}

void func_25(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 8);
	}
	else
	{
		func_102(uParam0, 8);
	}
}

void func_26(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 32);
	}
	else
	{
		func_102(uParam0, 32);
	}
}

void func_27(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 64);
	}
	else
	{
		func_102(uParam0, 64);
	}
}

void func_28(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 16);
	}
	else
	{
		func_102(uParam0, 67108864);
		func_102(uParam0, 16);
	}
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 2);
	}
	else
	{
		func_102(uParam0, 2);
	}
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 256);
	}
	else
	{
		func_103(&(uParam0->f_1), 256);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 4);
	}
	else
	{
		func_103(&(uParam0->f_1), 4);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 16);
	}
	else
	{
		func_103(&(uParam0->f_1), 16);
	}
}

void func_33(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 2);
	}
	else
	{
		func_103(&(uParam0->f_1), 2);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 2048);
	}
	else
	{
		func_103(&(uParam0->f_1), 2048);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 1);
	}
	else
	{
		func_103(&(uParam0->f_1), 1);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 128);
	}
	else
	{
		func_102(uParam0, 128);
	}
}

bool func_37(var uParam0, var uParam1)
{
	if (func_18(*uParam0))
	{
		*uParam1 = func_104(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_38(int iParam0, bool bParam1)
{
	switch (func_105(iParam0))
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

int func_39(int iParam0, int iParam1)
{
	int iVar0;

	func_106(iParam0, 0, 0);
	if (func_107(iParam0))
	{
		iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

bool func_40(int iParam0)
{
	func_106(iParam0, 0, 0);
	if (func_107(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1;
	}
	return false;
}

void func_41(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_106(iParam0, 0, 0);
	if (func_107(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_108(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_109(iParam0, 1);
			}
			else
			{
				func_110(iParam0, 1);
			}
		}
		else
		{
			func_111(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_112())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_42(int iParam0, int iParam1)
{
	func_41(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_43(int iParam0)
{
	func_106(iParam0, 0, 0);
	if (func_107(iParam0))
	{
		return !OBJECT::IS_DOOR_CLOSED(iParam0);
	}
	return false;
}

void func_44(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

Vector3 func_45(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -323.4929f, 767.1046f, 121.6326f };
			break;
	}
	return vVar0;
}

float func_46(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = -82.13f;
			break;
	}
	return fVar0;
}

bool func_47(var uParam0, bool bParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = func_113(bParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = func_113(bParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::IS_PED_READY_TO_RENDER(*uParam0))
	{
		return true;
	}
	return false;
}

void func_48(int iParam0)
{
	if (((((((func_65(iParam0->f_215, 1) || func_65(iParam0->f_215, 2)) || func_65(iParam0->f_215, 4)) || func_65(iParam0->f_215, 8)) || func_65(iParam0->f_215, 16)) || func_65(iParam0->f_215, 32)) || func_65(iParam0->f_215, 64)) || func_65(iParam0->f_215, 128))
	{
		iParam0->f_216 = 1;
	}
}

void func_49(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_114(uParam0, iParam1, sParam2))
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

void func_50(int iParam0, int iParam1)
{
	if (!(iParam1 > -1 && iParam1 <= 29))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "bIsSpecialPed", true);
	DECORATOR::DECOR_SET_INT(iParam0, "iSpecialPedID", iParam1);
	Global_1396257[iParam1 /*638*/].f_636 = iParam0;
}

void func_51(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_75() - fParam1);
	func_115(uParam0, 1);
	func_116(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_52(int iParam0, int iParam1)
{
	if (!func_6(&(iParam0->f_131)))
	{
		func_51(&(iParam0->f_131), 0f);
		iParam0->f_213 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
	}
	else if (IntToFloat(iParam0->f_213) <= func_8(&(iParam0->f_131)))
	{
		iParam0->f_213 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		func_51(&(iParam0->f_131), 0f);
		func_9(&(iParam0->f_131));
		iParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iParam1)
		{
			case 0:
				func_44(iParam0, 13);
				break;
			case 1:
				func_44(iParam0, 14);
				break;
			case 2:
				func_44(iParam0, 15);
				break;
			default:
				func_44(iParam0, 16);
				break;
		}
	}
}

void func_53(int iParam0)
{
	int iVar0;

	if (iParam0->f_216 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		switch (iVar0)
		{
			case 0:
				func_44(iParam0, 5);
				break;
			case 1:
				func_44(iParam0, 6);
				break;
			case 2:
				func_44(iParam0, 7);
				break;
			case 3:
				func_44(iParam0, 8);
				break;
			case 4:
				func_44(iParam0, 9);
				break;
			case 5:
				func_44(iParam0, 10);
				break;
			case 6:
				func_44(iParam0, 11);
				break;
		}
	}
	else
	{
		func_117(iParam0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	char[] cVar0[8];

	cVar0 = func_119(func_118(iParam1));
	if (!func_65(iParam0->f_214, 4))
	{
		func_120(&(iParam0->f_1), cVar0, iParam0->f_203, Global_35, 0, 0, 2, 1);
		if (func_121(func_118(iParam1)))
		{
			iParam0->f_216++;
			func_66(&(iParam0->f_214), 4);
		}
	}
	else
	{
		func_122(9, &(iParam0->f_203), &(iParam0->f_214), 32);
		if (!func_121(func_118(iParam1)))
		{
			func_123(&(iParam0->f_214), 4);
			func_66(&(iParam0->f_215), iParam2);
			if (func_124(&(iParam0->f_143), &(iParam0->f_215)))
			{
				func_44(iParam0, 3);
			}
		}
	}
}

void func_55(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_208))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_208, true, 0))
	{
		return;
	}
	if (!func_65(iParam0->f_214, 4))
	{
		func_126(&(iParam0->f_1), func_125(iParam1), 0, -1, 0, 0);
		if (func_121(func_118(iParam1)))
		{
			func_66(&(iParam0->f_214), 4);
		}
	}
	else if (!func_121(func_118(iParam1)))
	{
		func_123(&(iParam0->f_214), 4);
		func_44(iParam0, 3);
	}
}

void func_56(int iParam0, int iParam1)
{
	if (func_18(iParam0->f_143))
	{
		switch (*iParam1)
		{
			case 3:
			case 4:
			case 13:
			case 14:
			case 15:
			case 16:
				if (func_59(iParam0->f_143))
				{
					func_60(iParam0->f_143, 0, 2);
				}
				if (!func_58(iParam0->f_143))
				{
					func_127(iParam0->f_143, 1);
				}
				break;
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
				break;
			case 18:
				if (func_58(iParam0->f_143) || func_59(iParam0->f_143))
				{
					func_128(iParam0->f_143, 1, 1, 0, 1);
				}
				break;
			case 19:
				break;
		}
	}
}

void func_57(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_129(0, -1);
	}
	func_130();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

bool func_58(int iParam0)
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
		iVar0 = func_131(iParam0);
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

bool func_59(int iParam0)
{
	int iVar0;

	iVar0 = func_105(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_60(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_18(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_59(iParam0) && !func_58(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_132(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_59(iParam0))
	{
		iParam2 = -1;
	}
	if (func_131(iParam0) == 3 || (func_131(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_132(iParam0))))
	{
		func_134(func_133(iParam0), func_132(iParam0), iParam2);
		if ((!func_18(Global_1572864.f_8) && !func_135(0, 1, 0)) && !func_77(Global_1935630, 32768))
		{
			iVar0 = func_136(iParam0);
			if (iVar0 != -1)
			{
				func_137(0);
			}
			else if (func_133(iParam0) == 8)
			{
				iVar0 = func_138();
				if (iVar0 != -1)
				{
					func_137(0);
				}
			}
		}
	}
	func_139(iParam0, 0);
	if (func_140(0) == iParam0)
	{
		func_141(1);
		func_142(0);
		func_143(1);
	}
	func_144(iParam0, 1);
	func_145(iParam0);
}

void func_61(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_146(vVar0, 0);
}

void func_62(int iParam0, int iParam1)
{
	func_41(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

void func_63(var uParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);
	}
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
	{
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_20);
	}
	if (func_6(&(uParam0->f_13)))
	{
		func_9(&(uParam0->f_13));
	}
}

bool func_64(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_147(uParam2, 1, iVar0);
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
			if (func_148(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_149(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_150(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_151(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_152(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_153(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_149(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_154(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_155(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_156(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_157(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_157(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_149(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_158(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_159(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_160(uParam2, 4000))
				{
					if ((func_161(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_162(uParam2, bParam0)) && func_163(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_161(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_162(uParam2, bParam0)) && func_163(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_164(bParam0, Global_1935630.f_41))
							{
								func_165();
								*uParam3 = 2;
								func_149(bParam0, uParam2, *uParam3);
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
						if (func_164(bParam0, Global_1935630.f_41))
						{
							func_165();
							*uParam3 = 2;
							func_149(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_166(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_167() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_165();
						*uParam3 = 2;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_168())
					{
						if (func_164(bParam0, Global_1935630.f_42))
						{
							func_165();
							*uParam3 = 2;
							func_149(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_169(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_149(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_170(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_171(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_172(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_173(uParam2, 4000))
				{
					if (func_174(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_149(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_175(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_149(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_176(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_149(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_65(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_66(var uParam0, int iParam1)
{
	func_90(uParam0, iParam1);
}

int func_67()
{
	return Global_1899515;
}

bool func_68(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_69(int iParam0)
{
	return iParam0 != -15;
}

void func_70(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_67();
}

bool func_71(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_72(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_73(var uParam0)
{
	func_51(uParam0, 0f);
}

bool func_74(var uParam0)
{
	return func_72(*uParam0, 2);
}

float func_75()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_76(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_77(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_78(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_79(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_59(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_80(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_58(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_81(int iParam0)
{
	int iVar0;

	iVar0 = func_177();
	switch (iParam0)
	{
		case 0:
			switch (iVar0)
			{
				case joaat("HIGHPRESSURE"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case joaat("OVERCAST"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("SUNNY"):
					return true;
				default:
					return false;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("HIGHPRESSURE"):
				case joaat("OVERCASTDARK"):
				case joaat("SNOWLIGHT"):
				case joaat("CLOUDS"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("FOG"):
				case joaat("SHOWER"):
				case joaat("SNOW"):
				case joaat("HIGHPRESSURE"):
				case joaat("SLEET"):
				case joaat("OVERCASTDARK"):
				case joaat("CLOUDS"):
				case joaat("RAIN"):
				case joaat("MISTY"):
				case joaat("SUNNY"):
				case joaat("SNOWCLEARING"):
					return true;
				default:
					return false;
			}
			break;
		case 4:
			return true;
		case 5:
			switch (iVar0)
			{
				case joaat("FOG"):
				case joaat("MISTY"):
					return true;
			}
			break;
	}
	return false;
}

int func_82(var uParam0, var uParam1, float fParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_178(uParam1, vVar3, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_83(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_179(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!func_180(iVar1, 0))
		{
			func_181(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

int func_84(var uParam0)
{
	if (!func_6(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_74(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_167() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_85()
{
	return Global_1392040.f_6;
}

bool func_86()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_87(var uParam0, int iParam1)
{
	return func_182(*uParam0, iParam1);
}

char* func_88(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "agnes_dowd";
		case 1:
			return "anders_helgerson";
		case 2:
			return "armadillo_town_crier";
		case 3:
			return "bland_preacher";
		case 4:
			return "blind_man_cassidy";
		case 6:
			return "chelonian_master";
		case 7:
			return "civil_war_commando";
		case 5:
			return "crackpot_robot";
		case 8:
			return "dorothea_wicklow";
		case 9:
			return "endless_strainer";
		case 10:
			return "early_eugenics_proponent";
		case 11:
			return "gavins_friend";
		case 12:
			return "giant";
		case 13:
			return "grizzeld_jon";
		case 14:
			return "joe_butler";
		case 15:
			return "john_the_baptising_madman";
		case 16:
			return "lillian_powell";
		case 17:
			return "mad_scientist";
		case 18:
			return "mayor_of_strawberry";
		case 19:
			return "bum_civil_war_vet";
		case 20:
			return "philosopher_in_cave";
		case 21:
			return "poor_joe";
		case 22:
			return "sheriff_of_tumbleweed";
		case 23:
			return "soothsayer";
		case 25:
			return "swamp_weirdo_sonny";
		case 24:
			return "sun_worshipper";
		case 26:
			return "thomas_downe";
		case 27:
			return "timothy_donahue";
		case 28:
			return "tiny_hermit_in_cabin";
		case 29:
			return "vampire";
		default:
			break;
	}
	return "speci";
}

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_90(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_91(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

struct<11> /*88*/ func_92(int iParam0)
{
	struct<11> /*88*/ sVar0;

	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -321.8417f, 767.3763f, 122.018f };
			Var0.f_4 = { 0f, 0f, 10.11893f };
			Var0.f_7 = { 2.12117f, 2.137823f, 2.815422f };
			Var0.f_10 = "DoorTrigger";
			break;
		case 1:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -324.0611f, 767.058f, 118.8502f };
			Var0.f_4 = { 0f, 0f, 10.18224f };
			Var0.f_7 = { 15f, 15f, 15f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -325.7024f, 765.6274f, 122.3524f };
			Var0.f_4 = { 0f, 0f, 10.11893f };
			Var0.f_7 = { 6f, 3.75f, 3.5f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -325.7f, 765.9f, 122.4884f };
			Var0.f_4 = { 0f, 0f, 9.999996f };
			Var0.f_7 = { 6f, 4f, 4f };
			Var0.f_10 = "StayAway";
			break;
		case 4:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -325.0377f, 767.6212f, 115.4908f };
			Var0.f_4 = { 0f, 0f, 9.999996f };
			Var0.f_7 = { 8.75f, 18.5f, 17f };
			Var0.f_10 = "Inside";
			break;
	}
	return Var0;
}

int func_93(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_183(vParam0))
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
		if (func_184(vParam0))
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
	func_185(iVar0, bParam8);
	return iVar0;
}

int func_94()
{
	return Global_1572887.f_12;
}

int func_95()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_96(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_97(int iParam0)
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

int func_98(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_186(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_95())
	{
		return -1;
	}
	iVar0 = func_96(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_187(iVar1, 0);
	func_188(iVar1, 0);
	func_189(iVar1, 0);
	func_190(iVar1, 0);
	func_191(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_192(iVar1, iParam4);
	}
	return iVar1;
}

void func_99(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_102(&(uParam0->f_1), 128);
	}
	else
	{
		func_103(&(uParam0->f_1), 128);
	}
}

void func_100(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 256);
	}
	else
	{
		func_102(uParam0, 256);
	}
}

void func_101(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_103(uParam0, 268435456);
	}
	else
	{
		func_102(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_103(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_102(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_103(uParam0, 536870912);
	}
	else
	{
		func_102(uParam0, 536870912);
	}
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_103(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_104(int iParam0)
{
	if (!func_18(iParam0))
	{
		return -1;
	}
	return func_193(iParam0);
}

int func_105(int iParam0)
{
	if (!func_18(iParam0))
	{
		return -1;
	}
	return func_131(iParam0);
}

int func_106(int iParam0, bool bParam1, bool bParam2)
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

bool func_107(int iParam0)
{
	if (func_194(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_108(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_107(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_109(int iParam0, bool bParam1)
{
	if (func_107(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_110(int iParam0, bool bParam1)
{
	if (func_107(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_111(int iParam0, bool bParam1)
{
	if (func_107(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_112()
{
	return true;
}

bool func_113(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_195(bVar0, bParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_114(var uParam0, int iParam1, char* sParam2)
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

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_117(int iParam0)
{
	if (!func_65(iParam0->f_215, 1))
	{
		func_44(iParam0, 5);
	}
	else if (!func_65(iParam0->f_215, 2))
	{
		func_44(iParam0, 6);
	}
	else if (!func_65(iParam0->f_215, 4))
	{
		func_44(iParam0, 7);
	}
	else if (!func_65(iParam0->f_215, 8))
	{
		func_44(iParam0, 8);
	}
	else if (!func_65(iParam0->f_215, 16))
	{
		func_44(iParam0, 9);
	}
	else if (!func_65(iParam0->f_215, 32))
	{
		func_44(iParam0, 10);
	}
	else if (!func_65(iParam0->f_215, 64))
	{
		func_44(iParam0, 11);
	}
	else if (!func_65(iParam0->f_215, 128))
	{
		func_44(iParam0, 12);
	}
	else if (func_65(iParam0->f_215, 128))
	{
		func_44(iParam0, 3);
	}
}

char* func_118(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "SPES_1";
			break;
		case 1:
			sVar0 = "SPES_2";
			break;
		case 2:
			sVar0 = "SPES_3";
			break;
		case 3:
			sVar0 = "SPES_4";
			break;
		case 4:
			sVar0 = "SPES_5";
			break;
		case 5:
			sVar0 = "SPES_6";
			break;
		case 6:
			sVar0 = "SPES_7";
			break;
		case 7:
			sVar0 = "SPES_8";
			break;
		case 9:
			sVar0 = "SPES_AMB_S";
			break;
		case 10:
			sVar0 = "SPES_AMB_M";
			break;
		case 11:
			sVar0 = "SPES_AMB_L";
			break;
		case 12:
			sVar0 = "SPES_AMB_RES";
			break;
	}
	return sVar0;
}

char* func_119(char* sParam0)
{
	return sParam0;
}

int func_120(var uParam0, char* sParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;

	bParam3 = bParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(bParam2) && (func_196(bParam2, bParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(bParam2, bParam3, 7000, 0, 51, 0);
			if (func_196(bParam2, bParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(bParam3, bParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		func_73(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (func_197(sParam1))
			{
				return 1;
			}
		}
		else if (func_126(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_121(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

void func_122(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_89(*uParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_199(func_198(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_200(func_198(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_67();
	func_90(uParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_123(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

bool func_124(var uParam0, var uParam1)
{
	if (func_18(*uParam0))
	{
		func_201(*uParam0, *uParam1);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

Vector3 func_125(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_202("SPES_1") };
			break;
		case 1:
			vVar0 = { func_202("SPES_2") };
			break;
		case 2:
			vVar0 = { func_202("SPES_3") };
			break;
		case 3:
			vVar0 = { func_202("SPES_4") };
			break;
		case 4:
			vVar0 = { func_202("SPES_5") };
			break;
		case 5:
			vVar0 = { func_202("SPES_6") };
			break;
		case 6:
			vVar0 = { func_202("SPES_7") };
			break;
		case 7:
			vVar0 = { func_202("SPES_8") };
			break;
		case 9:
			vVar0 = { func_202("SPES_AMB_S") };
			break;
		case 10:
			vVar0 = { func_202("SPES_AMB_M") };
			break;
		case 11:
			vVar0 = { func_202("SPES_AMB_L") };
			break;
		case 12:
			vVar0 = { func_202("SPES_AMB_RES") };
			break;
	}
	return vVar0;
}

bool func_126(char[4] cParam0, char[12] cParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_203(cParam1, cParam0);
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

void func_127(int iParam0, bool bParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	if (!func_204(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_132(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_132(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_133(iParam0), func_205(iParam0), func_206(iParam0), func_132(iParam0), Global_36);
		}
	}
	func_139(iParam0, 1);
	bParam1 = bParam1;
}

void func_128(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_18(iParam0))
	{
		return;
	}
	if (func_105(iParam0) == 4)
	{
		func_207(iParam0, func_67());
		if (!func_131(iParam0) == 5 && !func_131(iParam0) == 6)
		{
			if (bParam3)
			{
				func_139(iParam0, 6);
			}
			else
			{
				func_139(iParam0, 5);
			}
			func_145(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_141(1);
	}
	iVar0 = func_133(iParam0);
	bVar1 = func_94() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_208(0, 2);
		if (!bVar1 && bParam1)
		{
			func_209();
		}
	}
	else
	{
		func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_210(iParam0);
	}
	else
	{
		Var2 = { func_198(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_211(32768))
		{
			Var4 = { func_198(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_131(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_205(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_205(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_205(iParam0) != 95 && func_205(iParam0) != 82) && !func_212(Global_1347702[func_205(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_205(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_205(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_214(func_205(iParam0), iVar6, func_213());
	}
	else if (iVar0 == 8)
	{
		func_216(func_205(iParam0), iVar6, func_213(), func_215());
	}
	if (!func_131(iParam0) == 5 && !func_131(iParam0) == 6)
	{
		iVar9 = func_217(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_218(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_219(func_205(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_220((iVar10 - 20), 0, iVar10);
					iVar11 = func_220((iVar11 - 10), 0, iVar11);
				}
				func_221(1);
				func_222(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_222(45, 0, 1);
				break;
			case 8:
				iVar10 = func_223(func_205(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_220((iVar10 - 20), 0, iVar10);
					iVar11 = func_220((iVar11 - 10), 0, iVar11);
				}
				func_222(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_224(func_205(iParam0)))
				{
					func_225(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_222(120, 0, 1);
				break;
			case 2:
				func_222(120, 0, 1);
				break;
			case 6:
				func_222(func_226(func_206(iParam0)), 0, 1);
				break;
			case 5:
				func_222(120, 0, 1);
				break;
		}
	}
	func_144(iParam0, 1);
	func_207(iParam0, func_67());
	func_145(iParam0);
	if ((!func_131(iParam0) == 0 && bParam1) && func_94() == -1)
	{
		iVar12 = func_136(iParam0);
		if (iVar12 != -1)
		{
			func_137(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_138();
			if (iVar12 != -1)
			{
				func_137(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (func_205(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (func_227(func_205(iParam0)) && func_212(Global_1347702[func_205(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_205(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_228();
				}
				break;
			case 8:
				if (func_205(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_228();
				}
				break;
		}
	}
	if (!func_131(iParam0) == 5 && !func_131(iParam0) == 6)
	{
		if (bParam3)
		{
			func_139(iParam0, 6);
		}
		else
		{
			func_139(iParam0, 5);
		}
		func_145(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_205(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_229();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_230(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_230(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_230(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_230(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_230(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_230(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_230(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_230(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_230(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_230(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_230(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_230(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_231(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_230(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("KIT_CAMP"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_232();
						func_233(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_234();
						func_235();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_236(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_230(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							func_237(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							func_237(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_238(304805134, 1, 1);
						if (!func_38(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_128(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						func_239();
						break;
					case 26:
						func_240();
						break;
					case 17:
						func_241(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_242())
						{
							func_243(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_244(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_67();
							func_245(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_246(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_242())
						{
							func_243(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_242())
						{
							func_243(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_247();
						break;
					case 37:
						func_248();
						if (func_249())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						func_250();
						break;
					case 43:
						func_251();
						break;
					case 44:
						if (!func_38(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_128(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!func_38(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_128(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_252();
						break;
					case 59:
						func_253();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_254();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_255();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							func_237(451, 0);
						}
						if (!func_256(joaat("TAXIDERMY_ORDER_05")))
						{
							if (func_256(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_67();
								func_245(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_246(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_257(4))
						{
							if (!func_258(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_67();
								func_245(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_246(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_230(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_230(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_259(89200);
						func_259(2300);
						func_259(2300);
						break;
					case 68:
						func_260();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						func_261();
						func_259(-139100);
						break;
					case 69:
						if (func_38(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_259(-6000);
						}
						break;
					case 70:
						func_259(23400);
						func_259(1900);
						func_259(-15000);
						break;
					case 71:
						func_259(-5500);
						break;
				}
				Jump @5181; //curOff = 4067
				switch (func_205(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calderón" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hernández" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						func_262();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						func_263();
						break;
					case 66:
						func_264();
						func_265();
						break;
					case 67:
						if (!func_266(6))
						{
							func_267(6);
						}
						if (!func_266(3))
						{
							func_267(3);
						}
						if (func_242())
						{
							func_243(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (func_38(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_268(0);
							func_259(40500);
						}
						else
						{
							func_268(0);
							func_259(46500);
						}
						break;
				}
				Jump @5181; //curOff = 5119
				switch (func_205(iParam0))
				{
					case 0:
						switch (func_206(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				func_269(iParam0);
				func_270();
				switch (iVar0)
				{
					case 1:
						switch (func_205(iParam0))
						{
							case 4:
								func_271(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 61:
							case 62:
							case 63:
								func_271(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 25:
								func_271(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 12:
								func_271(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 53:
								func_271(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 20:
								func_271(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 19:
								func_271(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 24:
								iVar18 = func_104(iParam0);
								func_271(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
								break;
							case 28:
								func_271(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 34:
								func_271(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
								if (!func_258(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
								{
									func_230(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
								}
								break;
							case 29:
								func_271(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
								break;
							case 37:
								break;
							case 58:
								break;
							case 57:
								func_271(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
								break;
							case 76:
								func_271(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 72:
								if (func_104(iParam0) == 0)
								{
									func_271(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								}
								else
								{
									func_271(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								}
								break;
						}
						break;
					case 8:
						if (func_212(Global_1347702[func_205(iParam0) /*49*/].f_12, 536870912))
						{
							func_272(11, 1);
						}
						switch (func_205(iParam0))
						{
							case 109:
								func_271(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
								break;
							case 55:
								func_272(8, 1);
								break;
							case 138:
								MISC::SET_BIT(&(Global_40.f_9052), 1);
								MISC::SET_BIT(&(Global_40.f_9052), 3);
								break;
							case 94:
								func_271(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 63:
								func_271(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
								break;
							case 37:
								func_271(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
								break;
							case 116:
								func_271(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
								break;
							case 9:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
								break;
						}
						break;
					case 11:
						if (iParam0 == func_17(0, 10, 11, joaat("CABR01")))
						{
							func_271(iParam0, func_104(iParam0), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_17(0, 7, 11, joaat("CACR02")))
						{
							func_271(iParam0, func_273(9), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_17(0, 8, 11, joaat("CACR03")))
						{
							func_271(iParam0, func_273(10), 1, 0.5f, 2, 0, 0, 1);
						}
						else if (iParam0 == func_17(0, 11, 11, joaat("CACR01")))
						{
							func_271(iParam0, func_273(8), 1, 0.5f, 3, 0, 0, 1);
						}
						else if (iParam0 == func_17(0, 12, 11, joaat("CACR04")))
						{
							func_271(iParam0, func_273(11), 1, 0.5f, 2, 0, 0, 1);
						}
						break;
				}
				if (bParam1)
				{
					if (!func_131(iParam0) == 0)
					{
						if (func_132(iParam0) == 0)
						{
						}
						else if (STATS::STATSTRACKER_IS_INITIALIZED(func_132(iParam0)))
						{
							iVar19 = 0;
							if (bParam3)
							{
								iVar19 = 3;
							}
							func_134(func_133(iParam0), func_132(iParam0), iVar19);
							if (bParam4)
							{
								if (iVar0 == 8 && func_205(iParam0) == 58)
								{
									Global_1879514.f_1 = iParam0;
								}
								func_275(func_274(Global_1879514.f_1));
								if (iVar0 == 8 && func_205(iParam0) == 58)
								{
									Global_1879514.f_1 = -1;
								}
							}
						}
					}
					if (bParam2)
					{
						switch (iVar0)
						{
							case 1:
								iVar20 = 3;
								break;
							case 4:
								iVar20 = 2;
								break;
							case 6:
								iVar20 = 1;
								break;
							case 2:
								iVar20 = 9;
								break;
							case 8:
								if (func_227(func_205(iParam0)) && func_212(Global_1347702[func_205(iParam0) /*49*/].f_12, 1))
								{
									iVar20 = 3;
								}
								else
								{
									iVar20 = 8;
								}
								break;
							case 7:
								iVar20 = 0;
								break;
							case 5:
								iVar20 = 12;
								break;
							case 9:
							case 11:
								iVar20 = 0;
								break;
						}
					}
					func_129(bParam2, iVar20);
				}
			}
			func_143(1);
			if ((bVar13 || func_228()) && (func_133(iParam0) == 1 || func_133(iParam0) == 8))
			{
				Global_1879534.f_6 = 1;
				Global_1879534.f_7 = 1;
			}
		}

void func_129(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_276(&Global_0, 8);
	}
	if (!func_277() || func_94() != -1)
	{
		return;
	}
	func_276(&Global_0, 1);
}

void func_130()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

int func_131(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_278(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_132(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_133(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 0;
	}
	return func_279(func_97(iParam0));
}

void func_134(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_94() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_135(int iParam0, bool bParam1, bool bParam2)
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
		if (func_280())
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
		iVar0 = func_205(Global_1898164.f_1[0 /*5*/]);
		if (func_227(iVar0) && func_212(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_18(Global_1898164.f_1[0 /*5*/]))
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

int func_136(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_133(iParam0))
	{
		case 1:
			iVar0 = func_205(iParam0);
			return func_281(iVar0);
		case 8:
			iVar1 = func_205(iParam0);
			if (func_212(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_282(iVar1);
			}
			break;
	}
	return -1;
}

void func_137(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_94() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_283(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_284();
		Global_1898077.f_9 = func_285(Global_1894899.f_2);
		func_286(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_138()
{
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_38(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_38(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_38(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_38(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_38(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_38(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_139(int iParam0, int iParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	func_187(iParam0, iParam1);
}

int func_140(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_141(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_287(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_288(&Global_1935630, 4194304);
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

int func_142(bool bParam0)
{
	if (!bParam0 && func_289(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_143(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_144(int iParam0, bool bParam1)
{
	if (func_94() != -1)
	{
		return;
	}
	if (func_140(0) != iParam0)
	{
		return;
	}
	if (func_290(iParam0))
	{
		if (bParam1)
		{
			func_291(-525676072);
		}
		else
		{
			func_292(-525676072);
		}
	}
}

int func_145(int iParam0)
{
	return func_294(func_293(iParam0));
}

void func_146(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_183(vParam0))
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
			if (func_295(vVar2, vParam0, 2f, 1))
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

void func_147(var uParam0, bool bParam1, int iParam2)
{
	func_296(iParam2);
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
		uParam0->f_13 = func_297(0);
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
							func_103(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_298(1))
						{
							func_103(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_298(1) || *uParam0 & 8192 != 0))
				{
					func_102(uParam0, 33554432);
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
			if (func_299(uParam0))
			{
				uParam0->f_15 = func_167();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_167() - uParam0->f_15) > 500)
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
	func_300(uParam0);
}

bool func_148(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

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
			if (!func_301(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_302(bParam0, iVar2) <= func_303(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_149(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_304(iParam2, 1, 1, 1, 0))
	{
		func_103(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_305(uParam1, 1);
	func_306();
}

bool func_150(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_307(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_308(uParam1);
			if (func_309(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_310(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_305(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_305(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_151(bool bParam0, bool bParam1, var uParam2)
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
	if (func_311(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_308(uParam2);
		if (func_309(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_310(uParam2)
				{
					func_305(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_152(bool bParam0, var uParam1)
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
	if (func_301(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_310(uParam1)
		{
			fVar3 = func_308(uParam1);
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

int func_153(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_312(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
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

bool func_154(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_155(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_313(uParam2);
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
			if (func_163(uParam2, bParam1))
			{
				func_305(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_156(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_314(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_163(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_305(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_157(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_315(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_305(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_305(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_316(bParam1, vVar0, vVar4))
					{
						func_305(uParam2, 1);
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
					func_305(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_316(bParam1, vVar0, vVar7))
					{
						func_305(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_158(bool bParam0, var uParam1)
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
		if (!func_301(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_317(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_318(Global_1935630.f_34[iVar0]))
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
			if (func_319(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_320(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_321(uParam1, bParam0, fVar1, iVar0))
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

bool func_159(bool bParam0, var uParam1)
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

bool func_160(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_161(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_322(bVar0, &iVar2))
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
	if (func_323(bVar0, bParam0))
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

int func_162(var uParam0, bool bParam1)
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

bool func_163(var uParam0, bool bParam1)
{
	if (func_324(uParam0))
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

bool func_164(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_196(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_165()
{
}

bool func_166(var uParam0, bool bParam1)
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
		if (func_325(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_167();
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
						if (func_326(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_167();
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

int func_167()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_168()
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
	if ((func_167() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_169(var uParam0, bool bParam1)
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
	fVar0 = func_303(uParam0);
	if (uParam0->f_12 > func_327(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_328(bParam1);
	iVar1 = func_329(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_170(bool bParam0, bool bParam1, var uParam2)
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
	return func_330(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_171(bool bParam0, var uParam1)
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
		if (func_331(bParam0, uParam1, 1))
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
					if (!func_332(uParam1, bParam0))
					{
						if (func_326(bVar4, Global_36, 1) < 7f)
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

bool func_172(bool bParam0, var uParam1)
{
	if (!func_333(0))
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

bool func_173(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_167();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_174(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_175(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_167();
	}
	else if (func_167() - uParam1->f_4) > func_334(uParam1)
	{
		return func_335(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_176(var uParam0, bool bParam1)
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

var func_177()
{
	var uVar0;
	var uVar1;
	float fVar2;
	var uVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		uVar3 = uVar0;
	}
	else
	{
		uVar3 = uVar1;
	}
	return uVar3;
}

bool func_178(var uParam0, vector3 vParam1, bool bParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, bParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_179(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, bParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*uParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_336(Global_35, *uParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

bool func_180(int iParam0, bool bParam1)
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

void func_181(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_337(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_183(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_184(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_185(int iParam0, bool bParam1)
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

bool func_186(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_187(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_338(iParam0);
	}
	else
	{
		func_339(iParam0, iParam1);
	}
	func_340();
}

void func_188(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_189(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_190(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_191(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_192(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_193(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_194(int iParam0)
{
	return iParam0 != 0;
}

void func_195(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_341(bParam1))
		{
			func_342(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_343(bParam0, 0, 1);
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
			func_344(bParam0, 0);
			bVar0 = true;
		}
		func_345(bParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

float func_196(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_197(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		AUDIO::START_PRELOADED_CONVERSATION(sParam0);
		return true;
	}
	return false;
}

struct<2> /*16*/ func_198(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_199(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_200(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_201(int iParam0, int iParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	func_189(iParam0, iParam1);
}

Vector3 func_202(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

void func_203(char[4] cParam0, char[4] cParam1, char[4] cParam2, var uParam3)
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

bool func_204(int iParam0)
{
	return func_105(iParam0) == 0;
}

int func_205(int iParam0)
{
	if (!func_18(iParam0))
	{
		return -1;
	}
	return func_346(func_97(iParam0));
}

int func_206(int iParam0)
{
	if (!func_18(iParam0))
	{
		return -1;
	}
	return func_347(func_97(iParam0));
}

void func_207(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

int func_208(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_289(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) < 2)
	{
		iVar0 = (LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar0);
	func_142(bParam0);
	return 1;
}

void func_209()
{
	struct<15> /*120*/ sVar0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_348(iVar17))
		{
			iVar18 = func_349(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	func_9(&(Global_1359489.f_55));
	if (func_350(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		func_351(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_210(int iParam0)
{
	if (!func_18(iParam0))
	{
		return;
	}
	func_188(iParam0, (func_352(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_211(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_213()
{
	return func_353() > 0;
}

void func_214(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_354(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_354(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_354(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_354(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_355(1);
			break;
		case 16:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_354(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_356(146))
			{
				func_354(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_355(1);
			break;
		case 76:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_357() == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_354(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_355(0);
			break;
		case 15:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_354(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_354(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_354(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_357() == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_354(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_354(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_354(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_355(0);
			break;
		case 6:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_354(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_354(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_358(51))
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_354(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_38(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_357() == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_357() == 0)
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_354(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_354(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_354(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_354(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_354(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_354(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_355(1);
			break;
		case 3:
			if (func_249())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					func_354(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				func_354(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_215()
{
	if (func_94() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_216(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_354(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_354(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_38(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_356(26))
			{
				func_354(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_354(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_354(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_356(54))
			{
				func_354(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_356(39))
			{
				func_354(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_104(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_354(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_354(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_356(43))
			{
				func_354(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_356(41))
			{
				func_354(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_356(49))
			{
				func_354(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_354(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_354(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_38(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_354(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_354(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_354(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_354(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_355(1);
			break;
		case 67:
			func_354(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_354(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_355(0);
			break;
		case 70:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_354(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_354(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_354(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_356(78))
			{
				func_354(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_356(79))
			{
				func_354(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_354(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_354(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_354(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_356(101))
			{
				func_354(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_354(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_356(103))
			{
				func_354(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_356(104))
			{
				func_354(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_354(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_356(109))
			{
				func_354(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_354(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_356(110))
			{
				if (Global_1357515 == 0)
				{
					func_354(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_354(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_354(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_354(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_356(117))
			{
				func_354(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_356(118))
			{
				func_354(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_356(121))
			{
				func_354(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_356(122))
			{
				func_354(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_354(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_354(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_354(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_354(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_354(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_354(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_354(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_354(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_354(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_354(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_356(136))
			{
				func_354(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_354(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_354(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_354(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_354(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_354(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_354(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_356(147))
			{
				func_354(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_356(148))
			{
				func_354(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_354(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_356(149))
			{
				func_354(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_354(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_217(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_133(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_359(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (func_104(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			break;
		case 8:
			iVar2 = func_205(iParam0);
			switch (iVar2)
			{
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_205(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_218(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_360(iParam0);
	iVar3 = func_361(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_67();
				func_245(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_362(iParam0, 1);
			if (func_363(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_364(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_365(1, iParam0);
				}
				else
				{
					func_366(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_219(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_220(int iParam0, int iParam1, int iParam2)
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

void func_221(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 64);
	}
}

void func_222(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_367(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_5)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iVar0);
		}
	}
}

int func_223(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_224(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

void func_225(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_94() != -1)
	{
		return;
	}
	if ((Global_36616 && func_368(iParam1)) != 0)
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

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_227(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_228()
{
	if (func_94() != -1)
	{
		return false;
	}
	if (!func_277())
	{
		return false;
	}
	if (!func_38(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_38(Global_1835011[2 /*74*/].f_1, 1) && func_38(Global_1347702[120 /*49*/].f_15, 1)) && !func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_38(Global_1835011[37 /*74*/].f_1, 1) && !func_38(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_38(Global_1835011[57 /*74*/].f_1, 1) && !func_38(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_38(Global_1835011[26 /*74*/].f_1, 1) && !func_38(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_38(Global_1835011[62 /*74*/].f_1, 1) && func_38(Global_1835011[63 /*74*/].f_1, 1)) && !func_38(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_38(Global_1835011[75 /*74*/].f_1, 1) && !func_38(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_38(Global_1835011[76 /*74*/].f_1, 1) && !func_38(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_38(Global_1835011[40 /*74*/].f_1, 1) && func_38(Global_1835011[41 /*74*/].f_1, 1)) && !func_38(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_38(Global_1835011[62 /*74*/].f_1, 1) && func_38(Global_1835011[63 /*74*/].f_1, 1)) && !func_38(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_38(Global_1835011[65 /*74*/].f_1, 1) && func_38(Global_1835011[66 /*74*/].f_1, 1)) && !func_38(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_229()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(13);
		Global_1898441[iVar0 /*38*/] = 13;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
	}
}

bool func_230(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (!func_374(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_375(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_376(iParam0, bParam2);
	iVar2 = 0;
	if (func_377(iParam0, 0, 0) == 0)
	{
		if (func_378(iParam0))
		{
			iVar5 = func_379(iParam0);
			iVar6 = func_380(iVar5);
			iVar7 = func_381(iVar6) + 1;
			func_382(iVar5);
			if (func_383(38))
			{
				func_237(483, 0);
			}
			else
			{
				func_237(482, 0);
			}
			if (iVar7 == func_384(iVar6))
			{
				func_230(func_385(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_277() && func_386(4))
				{
					if (func_277() && (func_387(38) || func_383(38)))
					{
						func_389(38, func_385(iVar6), 0, 0, func_388(), 0, -1, 0);
						func_390(2);
					}
					else
					{
						func_389(38, func_385(iVar6), 0, 0, func_388(), 0, -1, 0);
						func_390(1);
					}
				}
			}
			else if (func_277() && func_386(4))
			{
				if (func_277() && (func_387(38) || func_383(38)))
				{
					func_389(38, 0, 0, 0, func_388(), 0, -1, 0);
					func_390(2);
				}
				else
				{
					func_389(38, 0, 0, 0, func_388(), 0, -1, 0);
					func_390(1);
				}
			}
			if (func_277() && func_386(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_277() && (func_387(38) || func_383(38)))
					{
						func_391(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_391(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_392(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_393(iParam0, 866047851) && !func_393(iParam0, -1979000645)) && !func_393(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_394(iParam0, 8388608) && !func_395(28))
	{
		func_396(28);
	}
	if (!bVar3)
	{
		if (func_393(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_397(iParam0) == -1447088266)
			{
				iVar1 = func_399(func_398(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_94() == -1)
					{
						func_400(iVar1);
					}
					if (func_401(0) && func_402(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_403(iParam0, iVar0, iParam5);
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
					if (func_94() == -1)
					{
						func_400(iParam0);
					}
					if (func_401(0) && func_402(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_403(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_392(iParam0) == joaat("WEAPON"))
		{
			if (!func_404(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_392(iParam0) == joaat("AMMO") && func_405(iParam0))
		{
			if (!func_406(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_393(iParam0, 866047851))
		{
			func_407(iParam0);
		}
		else if (func_393(iParam0, 2000026003))
		{
			func_408(iParam0);
		}
		else if (func_393(iParam0, -103750053))
		{
			func_200(func_409(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_200(func_410(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_393(iParam0, -121341956) && !func_393(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_38(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_237(498, 0);
				}
			}
			if (func_393(iParam0, -2017733358) || func_393(iParam0, -1369131378))
			{
				func_411(iParam0);
			}
		}
		else if (func_393(iParam0, -136654233))
		{
			if (func_393(iParam0, -1021472396))
			{
			}
		}
		else if (func_393(iParam0, -1466706512) && func_393(iParam0, 1147021565))
		{
			func_237(484, 0);
		}
		else if (func_393(iParam0, 1147021565) && func_393(iParam0, -524514947))
		{
		}
		else if (func_393(iParam0, 554195525))
		{
		}
		else if (func_393(iParam0, 589988438))
		{
			if (func_412())
			{
				func_413(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_393(iParam0, 787083290) && func_393(iParam0, 949916894))
		{
			func_414(iParam0);
		}
		else if (func_393(iParam0, -1718133314))
		{
			func_415(iParam0);
		}
		else if (func_393(iParam0, -1738650224))
		{
			func_416(iParam0);
		}
		else if (func_393(iParam0, -1112814642) && func_393(iParam0, 949916894))
		{
			func_417(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_393(iParam0, 1841149704))
		{
			func_418();
		}
		else if (func_393(iParam0, 606799272))
		{
			func_419(iParam0, iParam1);
			func_420(iParam0);
		}
		else if (func_393(iParam0, -1112814642) && func_393(iParam0, -1697809989))
		{
			func_421(iParam0, 0, 0, 0);
		}
		else if (func_393(iParam0, -2017733358) || func_393(iParam0, -1369131378))
		{
			func_411(iParam0);
		}
		else if (func_393(iParam0, -1921346699))
		{
			if (func_94() != -1)
			{
				return false;
			}
			func_422(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_393(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_258(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_230(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_258(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_230(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_258(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_230(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_258(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_230(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_258(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_230(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_258(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_230(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_393(iParam0, -839724752) && func_394(iParam0, 4))
		{
			if (!func_383(42))
			{
				func_423(iParam0);
			}
		}
		else if (func_393(iParam0, 1399091007))
		{
			func_424(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_393(iParam0, 1248798204))
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
				func_230(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
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
				func_396(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_425(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_426(&iVar9, 0))
				{
					func_402(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_94() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_425(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_237(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_427();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_428();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_429();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_430();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_431();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_432(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_433(499813453, 0);
				func_434(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_432(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_433(499813453, 0);
				func_434(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_432(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_433(499813453, 0);
				func_434(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_432(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_433(666607663, 0);
				func_435(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_432(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_433(666607663, 0);
				func_435(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_432(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_433(666607663, 0);
				func_435(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_432(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_433(-220219788, 0);
				func_436(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_432(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_433(-220219788, 0);
				func_436(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_432(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_433(-220219788, 0);
				func_436(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_432(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_433(218622660, 0);
				func_437(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_432(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_433(218622660, 0);
				func_437(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_432(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_433(390004462, 0);
				func_438(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_432(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_433(390004462, 0);
				func_438(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_432(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_433(390004462, 0);
				func_438(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_432(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_433(6410548, 0);
				func_439(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_432(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_433(6410548, 0);
				func_439(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_432(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_433(6410548, 0);
				func_439(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_432(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_433(6410548, 0);
				func_439(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_441(242, func_440(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_441(240, func_440(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_441(241, func_440(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_442(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_442(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_442(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_442(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_442(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_442(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_237(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_237(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_237(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_230(func_443(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_230(func_444(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_395(1))
				{
					func_237(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_237(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_94() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_237(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_445(&iVar10);
		if (!func_446(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_401(0))
		{
			return true;
		}
		if (func_392(iParam0) == joaat("CLOTHING"))
		{
			func_447(iParam0);
		}
		if (func_393(iParam0, -1979000645))
		{
			func_448(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_401(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_230(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_449(iVar2, 0);
		}
	}
	Var35 = { func_450(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_451(iParam0);
	if (fParam6 > 0f)
	{
		if (func_393(iParam0, -839724752))
		{
			func_452(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_453(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_393(iParam0, 1989861793))
	{
		iVar0 = func_454(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_455(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_456(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_457(iVar14, iVar1);
					if (iVar15 != iParam0 && func_373(iVar15, 0))
					{
						if (func_458(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_459(iVar1);
				if (bVar13)
				{
					func_460(iParam0);
				}
				else
				{
					func_237(306, 0);
				}
			}
		}
	}
}

void func_232()
{
	if (func_94() != -1)
	{
		return;
	}
	func_461();
	func_462();
	func_463();
	func_464();
	func_465();
	func_466();
	func_467();
}

void func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_468(iParam0, 1, 1, -142743235, 1);
	if (func_469(iParam0))
	{
		func_470(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_472(func_471(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_473(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946054.f_57[iVar1 /*11*/];
		Global_1946054.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946054.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946054.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946054.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_474() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_475(&(Global_1946054.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_475(&(Global_1946054.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_476(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_476(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_476(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_476(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_476(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_476(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_476(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_476(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_476(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_477(iVar8, iVar0))
				{
					func_478(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_477(iVar8, iVar0))
		{
			func_478(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946054.f_1378.f_1[iVar1 /*3*/] = { Global_1946054.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_234()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_477(iVar5, iVar0);
		if (iVar1 == Global_1946054.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_474() == -2125499975 || func_474() == -449205311)
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_478(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				func_478(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946054.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 };
	}
}

void func_235()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(14);
		Global_1898441[iVar0 /*38*/] = 14;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MUD1_COM", 24);
	}
}

char* func_236(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_38(Global_1835011[59 /*74*/].f_1, 1) || func_38(Global_1347702[1 /*49*/].f_15, 1)) || func_59(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_350(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_237(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_479(iParam0, &iVar0, &iVar1);
	if (!func_480(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_481(iVar0, iVar1);
}

void func_238(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_472(iParam0, 1);
	func_482(&(Global_1946054.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	func_482(&(Global_1946054.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
		Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			func_483(17, iParam0, 0, 0, 0);
		}
	}
	if (func_94() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_482(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_482(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_239()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(17);
		Global_1898441[iVar0 /*38*/] = 17;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA2_COM", 24);
	}
}

void func_240()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(18);
		Global_1898441[iVar0 /*38*/] = 18;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA3_COM", 24);
	}
}

int func_241(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> /*40*/ sVar0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_484(iParam1, 1, 0) };
		iParam3 = func_485(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_486(iParam3);
	return func_425(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_242()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

void func_243(int iParam0)
{
	int iVar0;

	if (!func_487(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_VISIBLE(iVar0, true);
}

bool func_244(int iParam0, int iParam1)
{
	if (!func_488(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_489(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_490(&(Global_40.f_9910[iParam1 /*6*/]), 4);
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_491(*iParam0);
	iVar1 = func_492(*iParam0);
	iVar2 = func_493(*iParam0);
	iVar3 = func_78(*iParam0);
	iVar4 = func_494(*iParam0);
	iVar5 = func_495(*iParam0);
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
	iVar6 = func_496(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_496(iVar1, iVar0);
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
	func_497(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_488(iParam0))
	{
		return;
	}
	if (!func_498(iParam1))
	{
		return;
	}
	if (func_499(iParam1, 1))
	{
		return;
	}
	iVar0 = func_489(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_244(iParam0, -1))
	{
		return;
	}
	else
	{
		func_500(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!func_135(0, 0, 1))
		{
			func_129(0, 17);
		}
	}
}

void func_247()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(19);
		Global_1898441[iVar0 /*38*/] = 19;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MOB5_COM", 24);
	}
}

void func_248()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(20);
		Global_1898441[iVar0 /*38*/] = 20;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_SAI1_COM", 24);
	}
}

bool func_249()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_250()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(21);
		Global_1898441[iVar0 /*38*/] = 21;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA1_COM", 24);
	}
}

void func_251()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(22);
		Global_1898441[iVar0 /*38*/] = 22;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA3_COM", 24);
	}
}

void func_252()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(24);
		Global_1898441[iVar0 /*38*/] = 24;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ODR5_COM", 24);
	}
}

void func_253()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(25);
		Global_1898441[iVar0 /*38*/] = 25;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN1_COM", 24);
	}
}

void func_254()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(27);
		Global_1898441[iVar0 /*38*/] = 27;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MAR51_COM", 24);
	}
}

void func_255()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(28);
		Global_1898441[iVar0 /*38*/] = 28;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_256(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_257(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_258(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_392(iParam0);
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
		if (!func_501(iParam0, 1))
		{
			return false;
		}
	}
	return func_377(iParam0, 0, bParam2) >= iParam1;
}

void func_259(int iParam0)
{
	if (func_211(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_502(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_502(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_260()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(29);
		Global_1898441[iVar0 /*38*/] = 29;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BEE22_COM", 24);
	}
}

void func_261()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(26);
		Global_1898441[iVar0 /*38*/] = 26;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN2_COM", 24);
	}
}

void func_262()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(23);
		Global_1898441[iVar0 /*38*/] = 23;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOC_COM", 24);
	}
}

void func_263()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(15);
		Global_1898441[iVar0 /*38*/] = 15;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOW3_COM", 24);
	}
}

void func_264()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_372(16);
		Global_1898441[iVar0 /*38*/] = 16;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DUT1_COM", 24);
	}
}

void func_265()
{
	if (func_503() > 1)
	{
		func_504();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_BAND_ROOT"), true);
			func_237(444, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HERB_ROOT"), true);
			func_237(447, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HORSE_ROOT"), true);
			func_237(448, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SHOT_ROOT"), true);
			func_237(450, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_WEAP_ROOT"), true);
			func_237(452, 1);
		}
	}
}

bool func_266(int iParam0)
{
	return func_505(iParam0, 4, 1);
}

void func_267(int iParam0)
{
	func_506(iParam0, 4, 1);
}

void func_268(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_198(joaat("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_211(32768))
	{
		return;
	}
	if (!func_18(iParam0))
	{
		return;
	}
	func_288(&Global_1935630, 8192);
	iVar2 = 1;
	switch (func_133(iParam0))
	{
		case 1:
			func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS")), 1);
			iVar0 = func_205(iParam0);
			func_200(func_198(joaat("MISSIONS_PROGRESSED")), 1);
			switch (func_281(iVar0))
			{
				case 0:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_200(func_410(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
			{
				func_200(func_410(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_205(iParam0);
			if (func_212(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				func_200(func_198(joaat("MISSIONS_PROGRESSED")), 1);
			}
			if (func_212(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
			{
				if (func_212(Global_1347702[iVar1 /*49*/].f_12, 1))
				{
					func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS")), 1);
				}
				else
				{
					func_200(func_410(joaat("COMPLETED"), joaat("RC")), 1);
				}
			}
			if (func_212(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				switch (func_282(iVar1))
				{
					case 0:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_200(func_410(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
				{
					func_200(func_410(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_212(Global_1347702[iVar1 /*49*/].f_12, 4))
			{
				if (func_212(Global_1347702[iVar1 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_212(Global_1347702[iVar1 /*49*/].f_12, 512))
				{
					func_200(func_410(joaat("COMPLETED"), joaat("RC_STRANDS")), 1);
				}
				else
				{
					func_200(func_410(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_94() != -1)
	{
		return;
	}
	if (Global_1955825 != 2)
	{
		return;
	}
	if (Global_1955825.f_4)
	{
		return;
	}
	if (!func_507(64))
	{
		return;
	}
	else if (func_77(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_135(0, 0, 1) || func_508()) || func_228())
	{
		return;
	}
	iVar0 = func_138();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_509(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_510(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_510(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_511(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_129(0, -1);
	}
	if (iVar2 > 0)
	{
		func_512("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_513(1, 0);
	Global_1955825.f_4 = 1;
}

void func_271(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_211(32768))
	{
		return;
	}
	func_514(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, joaat("ADD_REASON_DEFAULT"));
	if (bParam2)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_515(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_516(iParam0))
	{
		return 0;
	}
	if (!func_277())
	{
		return 0;
	}
	if (!func_517(iParam0, &iVar0, &iVar1))
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

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_518(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_274(int iParam0)
{
	char[] cVar0[8];

	if (!func_18(iParam0))
	{
		return cVar0;
	}
	switch (func_133(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_359(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_205(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_17(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_275(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_519();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_133(Global_1879514.f_1) == 1)
			{
				func_272(5, 1);
			}
			else if (func_133(Global_1879514.f_1) == 8 && (func_212(Global_1347702[func_205(Global_1879514.f_1) /*49*/].f_12, 1) || func_212(Global_1347702[func_205(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_272(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_276(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_277()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_278(int iParam0)
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

int func_279(int iParam0)
{
	return iParam0 & 31;
}

bool func_280()
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

int func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_283(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_284()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_286(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_520(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_290(int iParam0)
{
	if (!func_18(iParam0))
	{
		return false;
	}
	switch (func_133(iParam0))
	{
		case 1:
			switch (func_205(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_205(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_521(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_397(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_523(func_522(iParam0), 6);
}

void func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_521(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_397(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_524(func_522(iParam0), 6);
}

int func_293(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_294(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_525(iParam0, Global_1898164.f_162);
	return 1;
}

bool func_295(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_296(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_526();
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
			func_527(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_297(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_298(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_528(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_299(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_94() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_529(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_529(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_329(iVar0) == -1)
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

void func_300(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_530(uParam0);
	}
}

bool func_301(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_329(bParam2);
	}
	else
	{
		iVar1 = func_328(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_329(bParam0);
	}
	else
	{
		iVar0 = func_328(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_182(*uParam1, 8388608))
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

float func_302(bool bParam0, bool bParam1)
{
	return func_196(bParam0, bParam1, 1, 1);
}

float func_303(var uParam0)
{
	return uParam0->f_26;
}

bool func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_305(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_103(uParam0, 134217728);
	}
	else
	{
		func_102(uParam0, 134217728);
	}
}

void func_306()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_307(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_196(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_531(bVar0, 0)))
		{
			if (func_532(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_308(var uParam0)
{
	return uParam0->f_17;
}

bool func_309(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_182(*uParam0, 4194304))
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

int func_310(var uParam0)
{
	return uParam0->f_18;
}

bool func_311(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_531(bVar0, 0)))
		{
			if (func_533(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_312(bool bParam0, bool bParam1, bool bParam2)
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

float func_313(var uParam0)
{
	return uParam0->f_23;
}

int func_314(var uParam0)
{
	return uParam0->f_21;
}

int func_315(var uParam0)
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

bool func_316(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_534(bParam0, vParam4, 0.5f))
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

int func_317(bool bParam0)
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
	if (func_535(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_318(int iParam0)
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

bool func_319(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_536(bParam1))
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

bool func_320(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_536(bParam1))
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

bool func_321(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_536(bParam1))
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

bool func_322(bool bParam0, int iParam1)
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

bool func_323(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_537(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_324(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_325(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_326(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_326(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_327(var uParam0)
{
	return uParam0->f_24;
}

int func_328(bool bParam0)
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

int func_329(bool bParam0)
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

int func_330(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_322(Global_35, &iVar1))
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
		fVar2 = func_196(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_196(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_331(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_528(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_332(uParam1, bVar0))
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
				if (!bParam2 || !func_332(uParam1, bVar1))
				{
					if (func_326(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_332(var uParam0, bool bParam1)
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

bool func_333(int iParam0)
{
	if (func_15())
	{
		return false;
	}
	return func_38(Global_1347702[58 /*49*/].f_15, 1);
}

int func_334(var uParam0)
{
	return uParam0->f_20;
}

int func_335(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_336(int iParam0, int iParam1, bool bParam2)
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

bool func_337(int iParam0, int iParam1)
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

int func_338(int iParam0)
{
	int iVar0;

	iVar0 = func_278(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_538(iVar0);
}

int func_339(int iParam0, int iParam1)
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
			func_539(iVar2);
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

void func_340()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_341(bool bParam0)
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

void func_342(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_540(bParam0, iParam1))
		{
			if (func_541(bParam0, iParam1))
			{
				if (func_542(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_543(bParam0);
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

void func_343(bool bParam0, int iParam1, bool bParam2)
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

void func_344(bool bParam0, bool bParam1)
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

void func_345(bool bParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

int func_346(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_347(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

bool func_348(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_349(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_350(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_545(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_351(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_364(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

int func_353()
{
	return Global_40.f_11095.f_35;
}

void func_354(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_546(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_355(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_355(int iParam0)
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
			func_546(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_547(1);
	}
}

bool func_356(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_357()
{
	int iVar0;
	int iVar1;

	iVar0 = func_548(Global_1347702[9 /*49*/].f_15);
	iVar1 = func_548(Global_1835011[69 /*74*/].f_1);
	if (func_549(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_358(int iParam0)
{
	if (!func_550(iParam0))
	{
		return false;
	}
	return func_38(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_359(int iParam0)
{
	if (func_133(iParam0) == 1)
	{
		return func_205(iParam0);
	}
	return -1;
}

int func_360(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_551(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_552(iVar6);
	}
	return iVar5;
}

int func_361(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_553(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_362(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_554(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_363(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
			return false;
		default:
			break;
	}
	return false;
}

void func_364(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_362(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_365(2, *uParam0);
		}
		else
		{
			func_366(2, *uParam0);
		}
	}
	func_555(uParam0);
}

void func_365(int iParam0, int iParam1)
{
	if (Global_1357549.f_1483 >= 25)
	{
		Global_1357549.f_1483 = 0;
	}
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483++;
}

void func_366(int iParam0, int iParam1)
{
	if (Global_1357549.f_1406 >= 50)
	{
		return;
	}
	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
	{
		return;
	}
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403++;
	Global_1357549.f_1406++;
}

void func_367(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_556(iParam0, iParam1, bParam2);
}

int func_368(int iParam0)
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

	iVar0 = func_557();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_558(iParam0);
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
	if (func_395(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_15())
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
	Global_40.f_11095.f_35 = func_220(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_557();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_559(iVar1);
		func_561(func_560(), 0, 4000);
		func_562(Global_40.f_11095.f_35);
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
		func_563(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_200(func_198(joaat("HONOR_POSITIVE_TOTAL")), 1);
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
					sParam4 = func_564(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_502(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_502(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_200(func_198(joaat("HONOR_NEGATIVE_TOTAL")), 1);
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
					sParam4 = func_564(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_502(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_502(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_198(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_272(10, 1);
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

int func_372(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1 /*38*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_373(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_374(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_94() == -1)
	{
		if (func_565(iParam0) && func_566(iParam0))
		{
			func_567(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_375(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_568(iParam0, iParam1);
	Var0 = { func_484(iParam0, 0, 1) };
	iVar5 = func_569(iParam0, &Var0, 0, 0);
	iVar6 = func_570(iParam0, 0);
	if ((iVar5 > 1 && !func_228()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_393(iParam0, -2051813666))
		{
			func_237(583, 1);
		}
		else
		{
			func_237(582, 0);
		}
	}
	if (func_571(iParam0, &Var0, *iParam1, 0, 0))
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

void func_376(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_454(iParam0, -949239683))
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

int func_377(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_392(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_572(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_573(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_521(bParam2), iParam0, 0);
	return iVar2;
}

bool func_378(int iParam0)
{
	if (func_94() != -1)
	{
		return false;
	}
	return func_379(iParam0) != 0;
}

int func_379(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_574())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_575(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_380(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_381(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_574())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_380(iVar0))
		{
			if (func_258(func_575(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_382(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_576(48);
	func_129(0, -1);
}

bool func_383(int iParam0)
{
	if (func_94() != -1)
	{
		return false;
	}
	return func_38(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_384(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_385(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_386(int iParam0)
{
	if (func_94() != -1)
	{
		return false;
	}
	return func_38(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_387(int iParam0)
{
	if (func_94() != -1)
	{
		return false;
	}
	if (!func_227(iParam0))
	{
		return false;
	}
	return func_59(Global_1347702[iParam0 /*49*/].f_15);
}

int func_388()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_258(func_577(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_277() && (func_387(38) || func_383(38)))
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
			if (func_277() && (func_387(39) || func_383(39)))
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
			iVar9 = func_578(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_277() && (func_387(41) || func_383(41)))
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
			if (func_277() && (func_387(49) || func_383(49)))
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
			iVar9 = func_578(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_579(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_580(iParam0, iVar13, iVar14))
	{
	}
	if (func_581(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_582(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_583(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_584(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_585(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_390(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_391(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_277() && (func_387(38) || func_383(38)))
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
			if (func_277() && (func_387(39) || func_383(39)))
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
			if (func_277() && (func_387(49) || func_383(49)))
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
		if (func_277() && (func_387(38) || func_383(38)))
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
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_510(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_587(func_385(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_277() && (func_387(39) || func_383(39)))
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
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_277() && (func_387(49) || func_383(49)))
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
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_586(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_392(int iParam0)
{
	vector3 vVar0;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_393(int iParam0, int iParam1)
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

bool func_394(int iParam0, int iParam1)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_395(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return func_589(iParam0);
}

void func_396(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	func_590(iParam0);
	func_591(iParam0);
}

int func_397(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_398(int iParam0, bool bParam1)
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
	if (func_373(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_592(iVar0) || func_593(iVar0))
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

int func_399(int iParam0, bool bParam1)
{
	if (!func_373(iParam0, 0))
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

void func_400(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_487(iParam0))
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

bool func_401(bool bParam0)
{
	if (func_94() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_521(bParam0));
}

bool func_402(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_484(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_594((398 + iVar28), 1);
			if (func_595(iParam0, &Var0, iVar5, 0))
			{
				if (func_596(iParam0, &Var6, iVar5))
				{
					Var29 = { func_597(iParam0, Var0, iVar5, 0) };
					func_598(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_401(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_403(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_599(iParam0, iParam1);
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

bool func_403(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_405(iParam0))
	{
		return false;
	}
	if (!func_401(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_399(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_94() == -1)
		{
			func_400(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_600(iVar0);
			}
		}
		if (!func_571(iParam0, &uVar1, 1, 0, 0))
		{
			func_567(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_601(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_402(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_402(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_402(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_15())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_602(iVar0))
				{
					func_402(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_402(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_603(Global_35, 2, 0, 1);
				if ((((func_487(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_395(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_487(iVar7) && func_395(24))
				{
					if (!func_402(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_402(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_402(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_237(480, 1);
	}
	return true;
}

bool func_405(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_406(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_405(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_487(iVar4))
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
	if (func_258(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_441(func_604(iParam0), func_440(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_94() == -1)
		{
			if (func_38(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_237(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_401(0))
	{
		if (func_403(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_446(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_407(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_249()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_605(Global_35, iParam0, &uVar0))
		{
			func_425(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_431();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_431();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_431();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_429();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_427();
			break;
	}
}

void func_408(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_427();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_428();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_429();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_430();
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
			func_431();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_606();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_607();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> /*16*/ func_409(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> /*16*/ func_410(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_411(int iParam0)
{
	bool bVar0;

	bVar0 = func_393(iParam0, -2017733358);
	if (func_608() < 3)
	{
		if (bVar0)
		{
			if (func_610(func_609(iParam0), iParam0))
			{
				func_441(79, func_440(func_609(iParam0)), 1);
			}
			else
			{
				func_441(78, func_440(func_609(iParam0)), 1);
			}
		}
		else
		{
			func_441(80, func_440(func_611(iParam0)), 1);
		}
	}
}

bool func_412()
{
	if (((((func_612(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_612(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_612(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_612(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_612(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_612(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_413(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_518(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_613(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_614(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_414(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_391(51, 0, 0, 0, 0, -1, 0);
			func_615(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_391(51, 0, 0, 0, 0, -1, 0);
			func_615(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_389(39, 0, 0, 0, 0, 0, 1, 0);
			func_391(39, 0, 0, 0, 0, -1, 0);
			func_616(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_389(41, 0, 0, 0, 0, 0, 1, 0);
			func_391(41, 0, 0, 0, 0, -1, 0);
			func_617(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_389(49, 0, 0, 0, 0, 0, 1, 0);
			func_391(49, 0, 0, 0, 0, -1, 0);
			func_618(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_389(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_619(1), 0, -1, 0);
			func_620(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_389(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_619(2), 0, -1, 0);
			func_620(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_389(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_619(4), 0, -1, 0);
			func_620(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_389(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_619(8), 0, -1, 0);
			func_620(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_389(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_619(16), 0, -1, 0);
			func_620(16);
			break;
	}
}

void func_415(int iParam0)
{
	if (func_621() == 1)
	{
		if (func_383(39))
		{
			func_237(342, 0);
		}
		else
		{
			func_237(343, 0);
			func_616(1);
		}
	}
	if (func_621() >= 30)
	{
		func_237(344, 0);
	}
	func_389(39, 0, 0, 0, 0, 0, -1, 0);
	func_391(39, 0, 0, func_621(), 30, 1, 0);
}

void func_416(int iParam0)
{
	if (func_622() == 1)
	{
		if (func_383(49))
		{
			func_237(409, 0);
		}
		else
		{
			func_237(410, 0);
			func_618(1);
		}
	}
	if (func_622() >= 10)
	{
		func_237(411, 0);
	}
	func_389(49, 0, 0, 0, 0, 0, -1, 0);
	func_391(49, 0, 0, func_622(), 10, 1, 0);
}

void func_417(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_237(437, 0);
			func_237(440, 0);
			func_623(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_391(51, 0, 0, sVar0, func_578(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_615(1);
			func_624(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_623(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_391(51, 0, 0, sVar0, func_578(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_615(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_623(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_391(51, 0, 0, sVar0, func_578(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_615(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_623(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_391(51, 0, 0, sVar0, func_578(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_615(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_237(438, 0);
			func_623(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_389(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_391(51, 0, 0, sVar0, func_578(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_615(32768);
			break;
		default:
			func_237(439, 0);
			break;
	}
}

void func_418()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_419(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_94() == -1)
	{
		if (!func_383(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_237(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_237(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_237(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_237(400, 0);
			}
		}
		else if (func_393(iParam0, 412399755))
		{
			func_625(joaat("EXOTIC_STAGE_01"));
			if (func_626() == 0)
			{
				func_129(0, 10);
				iVar1 = func_627(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_383(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_237(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_237(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_237(401, 0);
			}
		}
		else if (func_393(iParam0, 709057512))
		{
			func_625(joaat("EXOTIC_STAGE_02"));
			if (func_626() == 1)
			{
				func_129(0, 10);
				iVar1 = func_627(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_383(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_237(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_237(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_237(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_237(398, 0);
			}
		}
		else if (func_393(iParam0, -1478961327))
		{
			func_625(joaat("EXOTIC_STAGE_03"));
			if (func_626() == 2)
			{
				func_129(0, 10);
				iVar1 = func_627(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_630(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_631(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_576(48);
					}
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_383(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_237(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_237(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_237(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_237(406, 0);
			}
		}
		else if (func_393(iParam0, -1238404098))
		{
			func_625(joaat("EXOTIC_STAGE_04"));
			if (func_626() == 3)
			{
				func_129(0, 10);
				iVar1 = func_627(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_383(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_237(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_237(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_237(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_237(403, 0);
			}
		}
		else if (func_393(iParam0, 1160548794))
		{
			func_625(joaat("EXOTIC_STAGE_05"));
			if (func_626() == 4)
			{
				func_129(0, 10);
				iVar1 = func_627(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_628(iParam0) < func_629(iParam0))
					{
						func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_391(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_420(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_630(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_631(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_576(48);
		}
	}
}

void func_421(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_258(func_632(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_633(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_634(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_94() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_413(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_413(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_413(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_413(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_413(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_413(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_413(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_413(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_413(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_413(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_413(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_413(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_413(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_635())
			{
				func_413(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_413(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_413(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_413(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_413(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_413(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_413(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_413(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_413(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_413(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_413(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_413(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_413(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_413(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_423(int iParam0)
{
	if (func_383(41))
	{
		func_237(363, 0);
	}
	else
	{
		func_237(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_01"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_02"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_03"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_04"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_05"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_06"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_07"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_08"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_09"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_10"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_11"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_12"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_13"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_129(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_636(joaat("LEGENDARY_FISH_14"));
			func_637(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_638(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_424(int iParam0, int iParam1)
{
	var uVar0;

	func_639(iParam0, iParam1, &uVar0);
}

int func_425(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_484(iParam1, 1, 0) };
		iParam3 = func_485(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_640(iParam1, iParam2, func_472(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_641(1, (func_94() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_472(iParam3, 1) /*11*/])
			{
				func_483(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_642(32768) && iParam1 != Global_1946054.f_57[func_472(iParam3, 1) /*11*/])
			{
				func_643();
				func_483(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_483(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_644(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_483(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_645(0);
			func_646(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_483(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_426(int iParam0, bool bParam1)
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
	iVar18 = func_603(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_603(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_647("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_648(&Var3, iVar2, iVar0, iVar1))
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
						func_649(iVar0);
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

void func_427()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_428()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_429()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_430()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_431()
{
	func_650();
	func_651();
	func_652();
}

void func_432(int iParam0, int iParam1, bool bParam2)
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

void func_433(int iParam0, bool bParam1)
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
	func_586(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_434(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_435(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_436(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_437(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_438(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_439(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_440(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_441(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_479(iParam0, &iVar0, &iVar1);
	if (!func_480(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_653(iParam0, 1024))
	{
		return;
	}
	func_481(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_442(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_479(iParam0, &iVar0, &iVar1);
	if (!func_480(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_653(iParam0, 1024))
	{
		return;
	}
	func_481(iVar0, iVar1);
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

int func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_574())
	{
		return func_444();
	}
	iVar4 = (func_574() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_574())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_654(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_575(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_444()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_574());
	return func_575(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_445(int iParam0)
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

bool func_446(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_484(iParam0, 0, 1) };
	Var5 = { func_597(iParam0, Var0, Var0.f_4, 0) };
	return func_655(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_447(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_94() != -1)
	{
		return;
	}
	switch (func_397(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_656(81053684, 0) <= 0)
			{
				func_483(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_483(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_657(iParam0);
			if (func_658(iVar0))
			{
				func_659(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_483(30, iParam0, 0, 0, 0);
			}
			if (func_474() == -2125499975 || func_474() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_483(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_474() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_483(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_660(-525676072, 0))
			{
				if (func_661(-525676072, &iVar1))
				{
					func_483(33, iVar1, 0, 0, 0);
				}
			}
			func_483(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_662(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_425(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_396(24);
		if (func_426(&iVar2, 0))
		{
			func_402(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_448(int iParam0)
{
	if (func_393(iParam0, 943695443))
	{
		func_663(0, iParam0);
	}
	else if (func_393(iParam0, -2096528786))
	{
		func_663(1, iParam0);
	}
	else if (func_393(iParam0, -1094167013))
	{
		func_663(2, iParam0);
	}
	else if (func_393(iParam0, 1936654645))
	{
		func_663(3, iParam0);
	}
	else if (func_393(iParam0, 1306489306))
	{
		func_663(4, iParam0);
	}
	else if (func_393(iParam0, 435762317))
	{
		func_663(5, iParam0);
	}
	else if (func_393(iParam0, 1259363210))
	{
		func_663(6, iParam0);
	}
	else if (func_393(iParam0, 881398259))
	{
		func_663(7, iParam0);
	}
	else if (func_393(iParam0, -541549214))
	{
		func_663(8, iParam0);
	}
	else if (func_393(iParam0, 130796156))
	{
		func_663(-1, iParam0);
	}
}

int func_449(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	Var4.f_1 = 10;
	func_664(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_665(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> /*16*/ func_450(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_373(iParam0, 0))
	{
		return Var0;
	}
	if (func_393(iParam0, -305066475))
	{
		if (func_94() == -1)
		{
			if (func_393(iParam0, -537818634))
			{
				return func_198(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_198(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_393(iParam0, -537818634))
	{
		return func_198(joaat("MEDICINE_ITEMS"));
	}
	if (func_393(iParam0, 2084895747))
	{
		return func_198(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_451(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_94() == -1)
			{
				if (func_38(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_237(109, 1);
				}
			}
			break;
	}
}

void func_452(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_667(func_666(0));
	func_502(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_668(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_453(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_373(iParam0, 0))
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
	if (!func_669())
	{
		func_670(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_671(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_671(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_394(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_392(iParam0);
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
	else if (!func_672(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_673(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_440(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_393(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_440(iParam0));
	}
	func_502(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_454(int iParam0, int iParam1)
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

struct<10> /*80*/ func_455(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_456(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_457(int iParam0, int iParam1)
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

bool func_458(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> /*296*/ sVar2;
	int iVar49;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_674(iParam0, iParam1, 1))
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
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && func_674(iParam0, Var2, 1))
				{
					if (func_675(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_675(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_237(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_135(0, 0, 1))
		{
			func_129(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_459(int iParam0)
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

void func_460(int iParam0)
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
		func_237(iVar0, 0);
	}
}

void func_461()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_676(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_677();
		}
		return;
	}
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_678();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_676(1);
}

void func_462()
{
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_230(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_463()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_679(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_679(1);
}

void func_464()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_680(15000, 0, 0, 0, 1);
			func_679(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_514(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	func_679(1);
}

void func_465()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_258(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_59(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_230(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_681(1))
			{
				func_437(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_258(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_59(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_230(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_681(2))
			{
				func_437(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_681(4))
		{
			func_437(4);
		}
		if (func_681(0))
		{
			func_682(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_258(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_468(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_258(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_468(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (func_681(1))
		{
			func_682(1);
		}
		if (func_681(2))
		{
			func_682(2);
		}
		if (func_681(4))
		{
			func_682(4);
		}
		if (!func_681(0))
		{
			func_437(0);
		}
	}
}

void func_466()
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { func_683() };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_400(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_402(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0))
		{
			Var1 = { func_683() };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_684(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_684(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_684(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_684(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_684(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_684(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_684(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_684(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_684(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_684(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_684(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_684(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_684(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_684(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_685())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_487(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_395(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_395(24) && func_487(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_487(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_395(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_467()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
}

int func_468(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_572(iParam0, 1);
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
			func_453(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_258(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_450(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_377(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_377(iParam0, 0, 0) - iParam1) < 0)
		{
			func_468(iParam0, func_377(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_392(iParam0) == joaat("WEAPON"))
	{
		if (!func_686(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_687(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_401(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_453(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_688(iParam0, iParam1);
	return 1;
}

bool func_469(int iParam0)
{
	switch (func_397(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_397(iParam0))
	{
		case -2061583405:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_689(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_690();
	}
	if (bParam1)
	{
		func_691(0, 0);
	}
}

int func_471(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_484(iParam0, 1, 0) };
	return func_485(Var0.f_4);
}

int func_472(int iParam0, int iParam1)
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

void func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (func_94() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var2);
	while (DATAFILE::_0xED4413CEE1BF142C(&Var2))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_472(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_692(&(Global_1946054.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

int func_474()
{
	return Global_1946054.f_1;
}

bool func_475(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;

	Var4 = func_693(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946054.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_695(uParam0, func_694(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_472(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = iVar1;
				Global_1946054.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_696(iVar3) && func_697(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946054.f_2652)
						{
							func_698(uParam0, uParam0->f_1[Global_1946054.f_2612[iVar1] /*3*/], Global_1946054.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_476(int iParam0, int iParam1)
{
	if (func_94() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_477(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_476(iParam0, iParam1) };
	return vVar0.x;
}

void func_478(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_479(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_480(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_699(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_700(iParam0))
	{
		return false;
	}
	if (func_701(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_653(iParam0, 1)) || func_211(32768))
	{
		if (!func_653(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_702())
	{
		return false;
	}
	return true;
}

void func_481(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_482(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_483(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_703(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_704(Var0);
}

struct<5> /*40*/ func_484(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_705(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_392(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_597(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_706(bParam1) };
			if (bParam2 && func_707(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_595(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_595(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_596(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_708(bParam1) };
			switch (func_397(iParam0))
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
			if (func_709(iParam0, -1823706425))
			{
				Var0 = { func_597(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_709(iParam0, -1483207246))
			{
				Var0 = { func_597(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_710(Var0, &Var27, bParam1, 0))
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

int func_485(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_711(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_486(int iParam0)
{
	func_692(&(Global_1946054.f_1497.f_1[func_472(iParam0, 1) /*3*/]), 2, 6);
	func_692(&(Global_1946054.f_1378.f_1[func_472(iParam0, 1) /*3*/]), 2, 6);
}

bool func_487(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_488(int iParam0)
{
	return iParam0 != 0;
}

int func_489(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_488(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (Global_40.f_9910[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_490(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_491(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_712(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_492(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_493(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_494(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_495(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_496(int iParam0, int iParam1)
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

void func_497(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_713(iParam0, iParam6);
	func_714(iParam0, iParam5);
	func_715(iParam0, iParam4);
	func_716(iParam0, iParam3);
	func_717(iParam0, iParam2);
	func_718(iParam0, iParam1);
}

bool func_498(int iParam0)
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
	iVar0 = func_495(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_494(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_78(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_491(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_492(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_493(iParam0);
	if (iVar5 < 1 || iVar5 > func_496(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_499(int iParam0, bool bParam1)
{
	return func_549(func_67(), iParam0, bParam1);
}

void func_500(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_501(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_572(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_647("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_648(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_487(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_649(iVar1);
				return true;
			}
			iVar3++;
		}
		func_649(iVar1);
	}
	return false;
}

var func_502(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_719(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_503()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_720(iVar1);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_721(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_504()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_720(iVar0);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_721(iVar1)))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(func_721(iVar1), true);
		}
		iVar0++;
	}
}

bool func_505(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_544(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_506(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_348(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

bool func_507(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_508()
{
	return (func_77(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

int func_509(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> /*40*/ sVar5;
	int iVar10;
	int iVar11;

	if (func_94() != -1)
	{
		return 0;
	}
	if (Global_1955825 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_373(iVar0, 0))
	{
		return 0;
	}
	if (!func_722(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_723(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_393(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_484(iVar0, 0, 1) };
	iVar10 = func_724(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_725(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_726(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_230(iVar0, iVar4, 1, 0, 0, joaat("ADD_REASON_PURCHASED"), 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_680(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_510(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_511(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_502(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

var func_512(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_513(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_94() != -1)
	{
		return;
	}
	if (Global_1955825 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_514(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_613(iParam0, sParam4, iParam5);
	}
	func_614(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_515(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_727())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_727())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(func_132(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_205(iParam0);
	if (func_133(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_133(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_728(1, iVar1);
					func_728(8, iVar1);
					func_728(7, iVar1);
					break;
				case 12:
					func_728(6, iVar1);
					break;
				case 53:
					func_728(3, iVar1);
					func_728(7, iVar1);
					func_728(4, iVar1);
					break;
				case 20:
					func_728(8, iVar1);
					break;
				case 19:
					func_728(1, iVar1);
					func_728(2, iVar1);
					break;
				case 24:
					func_728(3, iVar1);
					func_728(9, iVar1);
					func_728(20, iVar1);
					break;
				case 28:
					func_728(1, iVar1);
					break;
				case 34:
					func_728(23, iVar1);
					func_728(2, iVar1);
					func_728(18, iVar1);
					break;
				case 29:
					func_728(0, iVar1);
					func_728(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_728(0, iVar1);
					func_728(3, iVar1);
					func_728(2, iVar1);
					func_728(11, iVar1);
					func_728(6, iVar1);
					func_728(25, iVar1);
					func_728(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_728(5, iVar1);
					break;
				case 63:
					func_728(1, iVar1);
					func_728(3, iVar1);
					break;
				case 37:
					func_728(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_17(0, 10, 11, joaat("CABR01")))
			{
				func_728(7, iVar1);
				func_728(4, iVar1);
			}
			else if (iParam0 == func_17(0, 7, 11, joaat("CACR02")))
			{
				func_728(8, iVar1);
				func_728(15, iVar1);
			}
			else if (iParam0 == func_17(0, 8, 11, joaat("CACR03")))
			{
				func_728(3, iVar1);
			}
			else if (iParam0 == func_17(0, 11, 11, joaat("CACR01")))
			{
				func_728(6, iVar1);
				func_728(3, iVar1);
			}
			else if (iParam0 == func_17(0, 12, 11, joaat("CACR04")))
			{
				func_728(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_729()));
	if (!func_730(629))
	{
		func_237(629, 0);
	}
}

bool func_516(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_517(int iParam0, int iParam1, int iParam2)
{
	if (!func_516(iParam0))
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

int func_518(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_258(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_373(iVar25, 0) && func_393(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_519()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_731(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_732(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

int func_520(int iParam0, int iParam1)
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

int func_521(bool bParam0)
{
	if (func_94() == -1)
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

int func_522(int iParam0)
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

void func_523(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 - (Global_1946054.f_2657.f_26.f_6 && iParam0));
}

void func_524(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 || iParam0);
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_733((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_733(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_18(Global_1898164.f_1[0 /*5*/]))
	{
		func_139(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_526()
{
	if (func_734())
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

void func_527(var uParam0, var uParam1)
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

bool func_528(bool bParam0, int iParam1, int iParam2)
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

int func_529(var uParam0)
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

void func_530(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_102(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_103(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_531(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_532(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_533(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_533(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_534(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_535(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_536(bool bParam0)
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

int func_537(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_538(int iParam0)
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

int func_539(int iParam0)
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

bool func_540(bool bParam0, int iParam1)
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

bool func_541(bool bParam0, int iParam1)
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

bool func_542(bool bParam0, int iParam1)
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
	if (!func_540(bParam0, iVar0))
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

void func_543(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_544(int iParam0)
{
	return iParam0 > -1;
}

bool func_545(int iParam0)
{
	int iVar0;
	int iVar1;

	func_554(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

void func_546(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_547(1);
	}
}

void func_547(bool bParam0)
{
	if (bParam0)
	{
		func_103(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_102(&(Global_40.f_12019.f_42), 1);
	}
}

int func_548(int iParam0)
{
	if (!func_18(iParam0))
	{
		return -15;
	}
	return func_735(iParam0);
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_498(iParam1) || !func_498(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_550(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_551(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FLOW"):
			return 7;
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
		case joaat("VIGNETTE"):
			return 10;
		case joaat("VIG_CAMP_ONLY"):
			return 11;
		case joaat("BASE"):
			return 1;
		case 1871598:
			return 9;
		case joaat("EVENT"):
			return 6;
		case joaat("ARRANGEMENT"):
			return 2;
		case joaat("GRIEFING"):
			return 4;
		case joaat("SUPPLY"):
			return 3;
		case joaat("MOOD_ARTHUR"):
			return 12;
		case joaat("MOOD_ABIGAIL"):
			return 25;
		case joaat("MOOD_BILL"):
			return 16;
		case joaat("MOOD_CHARLES"):
			return 20;
		case joaat("MOOD_DUTCH"):
			return 13;
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
		case joaat("MOOD_HOSEA"):
			return 18;
		case joaat("MOOD_JACK"):
			return 26;
		case joaat("MOOD_JAVIER"):
			return 15;
		case joaat("MOOD_JOHN"):
			return 14;
		case joaat("MOOD_KAREN"):
			return 32;
		case joaat("MOOD_LENNY"):
			return 22;
		case joaat("MOOD_MARY_BETH"):
			return 27;
		case joaat("MOOD_MICAH"):
			return 19;
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
		case joaat("MOOD_PEARSON"):
			return 29;
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
		case joaat("MOOD_STRAUSS"):
			return 30;
		case joaat("MOOD_SWANSON"):
			return 33;
		case joaat("MOOD_TILLY"):
			return 34;
		case joaat("MOOD_UNCLE"):
			return 17;
		case joaat("MOOD_TRELAWNY"):
			return 35;
		case joaat("MOOD_ODRISCOLL"):
			return 23;
		case joaat("MOOD_SEAN"):
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_553(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_554(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_736(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_555(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479.f_9)
	{
		return;
	}
	Global_1327479.f_4 = (Global_1327479.f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750.f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 2));
		}
		else
		{
			Global_1327479.f_5 = (Global_1327479.f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479.f_5 = (MISC::GET_GAME_TIMER() + iParam1 * 1000);
	}
}

int func_557()
{
	int iVar0;

	iVar0 = func_353();
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

int func_558(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_94() != -1)
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
	fVar1 = func_737(MISC::ABSF(fVar1) < 1f, func_737(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_559(int iParam0)
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

int func_560()
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

void func_561(int iParam0, bool bParam1, int iParam2)
{
	func_738((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_739(iParam0);
}

void func_562(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_740(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_563(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_741(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_742(iVar5, &iVar2, &iVar0))
			{
				if (!func_373(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_743(iVar2);
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
							if (func_392(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_557() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_557() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_744();
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

char* func_564(int iParam0)
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

bool func_565(int iParam0)
{
	return func_392(iParam0) == joaat("WEAPON");
}

bool func_566(int iParam0)
{
	var uVar0;

	if (func_94() != -1)
	{
		return false;
	}
	if (func_394(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_571(iParam0, &uVar0, 1, 0, 0);
	}
	return func_258(iParam0, 1, 0);
}

void func_567(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_392(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_399(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_593(iVar0))
	{
		if (func_94() == -1)
		{
			func_400(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_377(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_453(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_568(int iParam0, int iParam1)
{
	int iVar0;

	if (func_393(iParam0, 58855631))
	{
		func_723(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_569(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	if (!func_401(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_745(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_521(bParam3), iParam0);
}

int func_570(int iParam0, bool bParam1)
{
	if (func_405(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_521(bParam1), iParam0, 0);
}

bool func_571(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_746(&iParam0);
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (!func_401(0))
	{
		bParam3 = true;
	}
	if (func_565(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_706(0) };
			Var4.f_9 = -1591664384;
			if (!func_595(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_596(iParam0, &Var4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_707(iParam0, 1))
			{
				if (!func_595(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_596(iParam0, &Var4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_747(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_569(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_745(iParam0))
	{
		iVar28 = func_748(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_521(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_392(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_393(iParam0, 1399091007))
	{
		func_639(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_573(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_749(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_750(&Var0, func_706(0));
	}
	if (!func_751(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_649(iVar18);
	return iVar19;
}

int func_574()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_575(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_576(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_94() != -1)
	{
		return;
	}
	iVar0 = func_752(iParam0);
	fVar1 = func_753(iParam0);
	if ((Global_1347477.f_117 || !func_395(31)) || !func_754(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_755(iVar0) >= 7)
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
	func_756(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_502(MISC::VAR_STRING(6, func_757(iParam0), fVar1), "itemtype_textures", func_758(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_577(int iParam0)
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

int func_578(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_759(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_579(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_388() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_760(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_761(), 12);
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
			else if (func_621() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_762(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_621(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_763(), 13);
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
			else if (func_622() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_764(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_622(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_578(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_580(int iParam0, int iParam1, int iParam2)
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

bool func_581(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_582(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_583(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_765(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_258(iVar2, 1, 0) || func_767(func_766(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_587(func_765(iVar0))), func_587(func_765(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_621() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_768(iVar0)), func_768(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_762() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_768(iVar0)), func_768(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_768(iVar0)), func_768(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_632(iParam3, func_769(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_628(iVar2) - iParam7) >= func_578(iParam3, func_770(iVar0));
				}
				else
				{
					bVar1 = func_628(iVar2) >= func_578(iParam3, func_770(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_628(iVar2) + iParam7) >= func_578(iParam3, func_770(iVar0));
			}
			else
			{
				bVar1 = func_628(iVar2) >= func_578(iParam3, func_770(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_771(iVar2)), func_771(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_772(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_773(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_773(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_622() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_774(iVar0)), func_774(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_764() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_774(iVar0)), func_774(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_774(iVar0)), func_774(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_632(iParam3, func_769(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_628(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_775(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_775(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_776(iVar2)), func_776(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_584(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_763() >= 13)
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

bool func_585(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_18(func_140(0)) && ((func_76(0) == 1 || func_76(0) == 8) || func_76(0) == 6))
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

var func_586(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_587(int iParam0)
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

bool func_588(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_589(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_590(int iParam0)
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

void func_591(int iParam0)
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
			func_777(1);
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
			func_778(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_778(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_778(3);
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
			func_779(1);
			break;
		case 34:
			func_780(1);
			break;
		case 35:
			func_781(1);
			break;
		case 36:
			break;
		case 37:
			func_782(0);
			break;
		case 38:
			func_783(0);
			break;
		case 39:
			func_784(0);
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
			if ((!Global_1879534 && func_277()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_510("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_237(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_277()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_510("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_237(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_277()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_510("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_237(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_277()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_510("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_237(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_94() == -1)
			{
				if (!func_662(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_785(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_15())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_258(iVar0, 1, 0))
					{
						func_446(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_425(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_94() == -1)
			{
				if (!func_258(1013902307, 1, 0))
				{
					func_446(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_94() == -1)
			{
				if (!func_258(1013902307, 1, 0))
				{
					func_446(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_258(142640135, 1, 0))
				{
					func_446(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_94() == -1)
			{
				if (!func_258(786809402, 1, 0))
				{
					func_446(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_94() == -1)
			{
				if (!func_258(786809402, 1, 0))
				{
					func_446(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_258(-518019409, 1, 0))
				{
					func_446(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_786();
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

bool func_592(int iParam0)
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

bool func_593(int iParam0)
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

int func_594(int iParam0, int iParam1)
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

bool func_595(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_748(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_596(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_787(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_597(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_373(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_521(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_598(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_788(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(*uParam1, &Var0, bParam6, 0))
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
	if (!func_401(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_521(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_599(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_789(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_600(int iParam0)
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
	iVar2 = func_67();
	func_245(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_601(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_790(iParam0))
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

bool func_602(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_603(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_604(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_395(50))
			{
				if (!func_395(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_395(51))
			{
				if (!func_395(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_605(int iParam0, int iParam1, var uParam2)
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

	if (!func_373(iParam1, 0))
	{
		return false;
	}
	if (func_392(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_94() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_397(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_471(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_393(iParam1, 866047851))
	{
		iVar5 = func_472(iVar4, 1);
		if (func_791(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_397(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_393(iParam1, -1638171711))
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
			if (func_792(1868067663, &uVar0))
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
				iVar10 = func_793(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_793(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_397(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_393(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_794(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_606()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_607()
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

int func_608()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_258(func_795(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_609(int iParam0)
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

bool func_610(int iParam0, int iParam1)
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
	if (func_258(iVar0, 1, 0) && func_258(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_611(int iParam0)
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

bool func_612(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_796(iParam0);
	if (iVar0 != -15)
	{
		func_245(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_499(iVar0, 1);
	}
	return false;
}

void func_613(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_502(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_614(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_727())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_502(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_797(iVar0);
			func_798(iVar0, 0, 0);
		}
		func_502(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_200(func_198(joaat("CAREER_CASH")), iVar1);
	}
}

void func_615(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_616(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_617(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_618(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_619(int iParam0)
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
	iVar1 = func_628(iVar9);
	iVar2 = func_628(iVar10);
	iVar3 = func_628(iVar11);
	iVar5 = func_629(iVar9);
	iVar6 = func_629(iVar10);
	iVar7 = func_629(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_628(iVar12);
		iVar8 = func_629(iVar12);
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

void func_620(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_621()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_799(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_622()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_623(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_775(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_775(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_775(iVar0))
		{
			*sParam2++;
		}
		if (func_775(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_775(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_775(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_775(iVar0))
		{
			*sParam2++;
		}
		if (func_775(iVar1))
		{
			*sParam2++;
		}
		if (func_775(iVar0) && func_775(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_775(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_775(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_775(iVar0))
		{
			*sParam2++;
		}
		if (func_775(iVar1))
		{
			*sParam2++;
		}
		if (func_775(iVar2))
		{
			*sParam2++;
		}
		if ((func_775(iVar0) && func_775(iVar1)) && func_775(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_775(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_775(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_775(iVar0))
		{
			*sParam2++;
		}
		if (func_775(iVar1))
		{
			*sParam2++;
		}
		if (func_775(iVar2))
		{
			*sParam2++;
		}
		if (func_775(iVar3))
		{
			*sParam2++;
		}
		if (((func_775(iVar0) && func_775(iVar1)) && func_775(iVar2)) && func_775(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_624(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_800(1497516462);
			func_801(2016141805);
			func_801(1010885152);
			func_801(-502324015);
			break;
		case 2016141805:
			func_801(1497516462);
			func_800(2016141805);
			func_801(1010885152);
			func_801(-502324015);
			break;
		case 1010885152:
			func_801(1497516462);
			func_801(2016141805);
			func_800(1010885152);
			func_801(-502324015);
			break;
		case -502324015:
			func_801(1497516462);
			func_801(2016141805);
			func_801(1010885152);
			func_800(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_801(-538889627);
			func_801(-538880323);
			func_801(-1056767524);
			func_800(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_802();
			func_800(iParam0);
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
			func_803();
			func_800(iParam0);
			break;
		case 2019386373:
			func_801(-664252410);
			func_801(2109952320);
			func_800(2019386373);
			break;
		case -664252410:
			func_801(2019386373);
			func_801(2109952320);
			func_800(-664252410);
			break;
		case 2109952320:
			func_801(2019386373);
			func_801(-664252410);
			func_800(2109952320);
			break;
		case -1674179981:
			func_801(-1835851517);
			func_801(-1838352012);
			func_800(-1674179981);
			break;
		case -1835851517:
			func_801(-1674179981);
			func_801(-1838352012);
			func_800(-1835851517);
			break;
		case -1838352012:
			func_801(-1674179981);
			func_801(-1835851517);
			func_800(-1838352012);
			break;
		case -1717960576:
			func_801(210001842);
			func_800(-1717960576);
			break;
		case 210001842:
			func_801(-1717960576);
			func_800(210001842);
			break;
		case -150493654:
			func_801(-1271608261);
			func_801(1846061697);
			func_801(-1145519186);
			func_800(-150493654);
			break;
		case -1271608261:
			func_801(-150493654);
			func_801(1846061697);
			func_801(-1145519186);
			func_800(-1271608261);
			break;
		case 1846061697:
			func_801(-150493654);
			func_801(-1271608261);
			func_801(-1145519186);
			func_800(1846061697);
			break;
		case -1145519186:
			func_801(-150493654);
			func_801(-1271608261);
			func_801(1846061697);
			func_800(-1145519186);
			break;
		case 1766284049:
			func_801(280705402);
			func_801(1926308480);
			func_800(1766284049);
			break;
		case 280705402:
			func_801(1766284049);
			func_801(1926308480);
			func_800(280705402);
			break;
		case 1926308480:
			func_801(1766284049);
			func_801(280705402);
			func_800(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_801(439465264);
				func_800(1609506757);
			}
			else
			{
				func_801(1609506757);
				func_801(439465264);
			}
			break;
		case 439465264:
			if (func_289(1609506757))
			{
				if (bParam1)
				{
					func_800(439465264);
				}
				else
				{
					func_801(439465264);
				}
			}
			break;
		case 1822001510:
			func_801(-1612662716);
			func_800(1822001510);
			break;
		case -1612662716:
			func_801(1822001510);
			func_800(-1612662716);
			break;
		case 1306158345:
			func_801(1952610440);
			func_801(-223469678);
			func_801(-404698347);
			func_801(1517904467);
			func_800(1306158345);
			break;
		case 1952610440:
			func_801(1306158345);
			func_801(-223469678);
			func_801(-404698347);
			func_801(1517904467);
			func_800(1952610440);
			break;
		case -223469678:
			func_801(1306158345);
			func_801(1952610440);
			func_801(-404698347);
			func_801(1517904467);
			func_800(-223469678);
			break;
		case -404698347:
			func_801(1306158345);
			func_801(1952610440);
			func_801(-223469678);
			func_801(1517904467);
			func_800(-404698347);
			break;
		case 1517904467:
			func_801(1306158345);
			func_801(1952610440);
			func_801(-223469678);
			func_801(-404698347);
			func_800(1517904467);
			break;
		case 1376646519:
			func_801(931649776);
			func_801(-434590080);
			func_801(1743048395);
			func_801(449774763);
			func_800(1376646519);
			break;
		case 931649776:
			func_801(1376646519);
			func_801(-434590080);
			func_801(1743048395);
			func_801(449774763);
			func_800(931649776);
			break;
		case -434590080:
			func_801(1376646519);
			func_801(931649776);
			func_801(1743048395);
			func_801(449774763);
			func_800(-434590080);
			break;
		case 1743048395:
			func_801(1376646519);
			func_801(931649776);
			func_801(-434590080);
			func_801(449774763);
			func_800(1743048395);
			break;
		case 449774763:
			func_801(1376646519);
			func_801(931649776);
			func_801(-434590080);
			func_801(1743048395);
			func_800(449774763);
			break;
		case -1414537028:
			func_801(38162571);
			func_801(1350391819);
			func_801(54073871);
			func_800(-1414537028);
			break;
		case 38162571:
			func_801(-1414537028);
			func_801(1350391819);
			func_801(54073871);
			func_800(38162571);
			break;
		case 1350391819:
			func_801(-1414537028);
			func_801(38162571);
			func_801(54073871);
			func_800(1350391819);
			break;
		case 54073871:
			func_801(-1414537028);
			func_801(38162571);
			func_801(1350391819);
			func_800(54073871);
			break;
		case 198200492:
			func_800(198200492);
			func_801(-1124061431);
			func_801(52706132);
			func_801(-259123672);
			break;
		case -1124061431:
			func_801(198200492);
			func_800(-1124061431);
			func_801(52706132);
			func_801(-259123672);
			break;
		case 52706132:
			func_801(198200492);
			func_801(-1124061431);
			func_800(52706132);
			func_801(-259123672);
			break;
		case -259123672:
			func_801(198200492);
			func_801(-1124061431);
			func_801(52706132);
			func_800(-259123672);
			break;
		case -919512195:
			func_800(-919512195);
			func_801(-1925798111);
			func_801(420709909);
			func_801(1703426636);
			break;
		case -1925798111:
			func_800(-1925798111);
			func_801(-919512195);
			func_801(420709909);
			func_801(1703426636);
			break;
		case 420709909:
			func_800(420709909);
			func_801(-919512195);
			func_801(-1925798111);
			func_801(1703426636);
			break;
		case 1703426636:
			func_800(1703426636);
			func_801(-919512195);
			func_801(-1925798111);
			func_801(420709909);
			break;
		case -1223121209:
			func_800(-1223121209);
			func_801(630808005);
			break;
		case 630808005:
			func_800(630808005);
			func_801(-1223121209);
			break;
		case 1453909576:
			func_800(1453909576);
			func_801(1643531967);
			break;
		case 1643531967:
			func_800(1643531967);
			func_801(1453909576);
			break;
		case 0:
			func_800(0);
			func_801(473295046);
			func_801(-1738165526);
			break;
		case 473295046:
			func_800(473295046);
			func_801(0);
			func_801(-1738165526);
			break;
		case -1738165526:
			func_800(-1738165526);
			func_801(0);
			func_801(473295046);
			break;
		case 932909855:
			func_800(932909855);
			func_801(2051822093);
			break;
		case 2051822093:
			func_800(2051822093);
			func_801(932909855);
			break;
		case 405586984:
			func_800(405586984);
			func_801(1509509592);
			func_801(-959357075);
			func_801(-1311865656);
			break;
		case 1509509592:
			func_800(1509509592);
			func_801(405586984);
			func_801(-959357075);
			func_801(-1311865656);
			break;
		case -959357075:
			func_800(-959357075);
			func_801(1509509592);
			func_801(405586984);
			func_801(-1311865656);
			break;
		case -1311865656:
			func_800(-1311865656);
			func_801(1509509592);
			func_801(-959357075);
			func_801(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_800(-524145696);
			}
			else
			{
				func_801(-524145696);
			}
			func_801(1626481264);
			func_801(282809459);
			break;
		case 282809459:
			func_800(282809459);
			func_801(1626481264);
			func_801(-524145696);
			break;
		case 1626481264:
			func_800(1626481264);
			func_801(-524145696);
			func_801(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_800(885203519);
			}
			else
			{
				func_801(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_800(-1080627546);
			}
			else
			{
				func_801(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_289(iParam0))
				{
					func_800(iParam0);
				}
			}
			else if (func_289(iParam0))
			{
				func_801(iParam0);
			}
			break;
	}
}

void func_625(int iParam0)
{
	if (!func_804(iParam0))
	{
		func_806(func_805(iParam0));
	}
}

int func_626()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_804(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_627(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_628(iVar9);
	iVar2 = func_628(iVar10);
	iVar3 = func_628(iVar11);
	iVar5 = func_629(iVar9);
	iVar6 = func_629(iVar10);
	iVar7 = func_629(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_628(iVar12);
		iVar8 = func_629(iVar12);
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

int func_628(int iParam0)
{
	int iVar0;

	if (func_258(iParam0, 1, 0))
	{
		iVar0 = func_377(iParam0, 0, 0);
	}
	return iVar0;
}

int func_629(int iParam0)
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

int func_630(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_631(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_632(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_759(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_633(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_632(iParam1, 5) || iParam0 == func_632(iParam1, 6)) || iParam0 == func_632(iParam1, 7)) || iParam0 == func_632(iParam1, 8)) || iParam0 == func_632(iParam1, 9))
	{
		func_623(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_389(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_391(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_634(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_632(iParam1, 5) || iParam0 == func_632(iParam1, 6)) || iParam0 == func_632(iParam1, 7)) || iParam0 == func_632(iParam1, 8)) || iParam0 == func_632(iParam1, 9))
	{
		if (func_623(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_389(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_391(51, 0, 0, iVar0, func_578(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_389(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_391(51, 0, 0, iVar0, func_578(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_635()
{
	if (func_59(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_636(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_637(int iParam0)
{
	if (!func_807(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_638(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_639(int iParam0, int iParam1, var uParam2)
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

bool func_640(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_808();
	if (iParam2 == 39)
	{
		Var0 = { func_484(iParam0, 1, 0) };
		iParam2 = func_472(func_485(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_393(iParam0, 866047851) && func_791(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_642(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_809(func_711(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_810(iParam2);
	func_811(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_692(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_692(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_698(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_812(iParam0, iParam2, iParam1, func_94() != -1);
	if (bParam4)
	{
		func_813(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_813(&(Global_1946054.f_1378), 1, 0);
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
				func_814(func_711(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_641(bool bParam0, bool bParam1, bool bParam2)
{
	func_815(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

bool func_642(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_643()
{
	func_816(&(Global_1946054.f_2776));
	func_817(32768);
	func_814(1108822547, 8, 6);
}

int func_644(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_472(iParam0, 1);
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

void func_645(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_818(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_819(Var0);
}

void func_646(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_819(Var0);
}

bool func_647(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_521(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_648(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_649(int iParam0)
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

float func_650()
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

	if (func_820())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_821(2);
	}
	if (Global_1347477.f_119)
	{
		return func_821(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_822();
	fVar2 = func_823();
	fVar3 = func_824();
	fVar4 = func_825();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_826()));
	fVar7 = (func_821(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_827(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_828(3, fVar9, fVar9 > 100f);
	return func_829(fVar7, -100f, 100f);
}

float func_651()
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

	if (func_820())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_821(1);
	}
	if (Global_1347477.f_119)
	{
		return func_821(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_822();
	fVar2 = func_823();
	fVar3 = func_824();
	fVar4 = func_825();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_826()));
	fVar7 = (func_821(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_827(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_828(2, fVar9, fVar9 > 100f);
	return func_829(fVar7, -100f, 100f);
}

float func_652()
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

	if (func_820())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_821(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_830())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_831())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_821(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_822();
	fVar2 = func_823();
	fVar3 = func_824();
	fVar4 = func_825();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_826()));
	fVar7 = (func_821(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_827(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_828(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_821(0);
	}
	return func_829(fVar7, -100f, 100f);
}

bool func_653(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_654(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_655(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_373(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_571(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_401(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_521(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_656(int iParam0, bool bParam1)
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
				return func_832();
			}
			break;
	}
	return 0;
}

int func_657(int iParam0)
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

bool func_658(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_659(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_658(iParam0))
	{
		return;
	}
	if (func_833(iParam0))
	{
		return;
	}
	if (!func_834(iParam0))
	{
		func_835(iParam0, 1, 0);
	}
	iVar0 = func_836(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_837(iParam0, 512))
		{
			func_483(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_838() && !bParam1) && !func_135(0, 0, 1))
	{
		func_512(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_839(iParam0, 6);
	if (bParam2)
	{
		if (!func_135(0, 0, 1))
		{
			func_129(1, 4);
		}
	}
}

bool func_660(int iParam0, bool bParam1)
{
	return func_656(iParam0, 0) < func_840(iParam0, bParam1);
}

bool func_661(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_397(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_662(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_472(iParam0, 1) /*3*/] != Global_1946054.f_57[func_472(iParam0, 1) /*11*/];
}

void func_663(int iParam0, int iParam1)
{
	if (func_393(iParam1, 130796156))
	{
		func_841(iParam1, 0);
	}
	else if (func_393(iParam1, 930141731))
	{
		func_841(iParam1, 1);
		func_842(iParam0);
	}
}

void func_664(var uParam0, int iParam1)
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

int func_665(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_843(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_844(uParam2, iParam0, Var1);
	return 1;
}

int func_666(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_667(int iParam0)
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

int func_668(int iParam0)
{
	var uVar0;

	if (!func_845(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

bool func_669()
{
	return !Global_1911774;
}

void func_670(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_671(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_672(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_673(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_674(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_94() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_846(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_675(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_94() != -1)
	{
		return false;
	}
	if (func_846(iParam0, iParam1, &uVar2, &iVar1))
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

void func_676(bool bParam0)
{
	struct<6> /*48*/ sVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_230(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_677();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_847(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_233(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_468(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_849(146323340, func_848());
		Var0 = { func_850() };
		if (func_851(&Var0) == -1387633835)
		{
			func_852(&Var0);
			func_853(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_854(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_855(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_856(iVar6, iVar7);
				func_857(iVar6, iVar8);
				func_858(iVar6, iVar9);
				func_859(iVar6, 0);
				if (func_860(iVar6))
				{
					func_861(iVar6);
				}
				iVar10 = func_862(iVar8);
				func_863(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_677()
{
	if (!func_864(-1898635967, func_848(), 1))
	{
		return 0;
	}
	if (func_249())
	{
		if (!func_864(146323340, func_848(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_678()
{
	func_243(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_243(joaat("WEAPON_SHOTGUN_PUMP"));
	func_243(joaat("WEAPON_RIFLE_VARMINT"));
}

void func_679(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_230(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_230(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_468(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_468(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_468(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_854(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_855(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_856(iVar0, iVar1);
				func_857(iVar0, iVar2);
				func_858(iVar0, iVar3);
				func_859(iVar0, 0);
				if (func_860(iVar0))
				{
					func_861(iVar0);
				}
				iVar4 = func_862(iVar2);
				func_863(iVar0, iVar4);
			}
			iVar0++;
		}
		func_677();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_680(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_865(iParam0);
	if (bParam3)
	{
		func_511(iParam0, sParam1, iParam2);
	}
}

bool func_681(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_682(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> /*112*/ func_683()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> /*112*/ sVar3;
	struct<10> /*80*/ sVar17;
	struct<14> /*112*/ sVar39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_647("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_648(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_596(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_649(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_649(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_684(int iParam0, struct<4> /*32*/ sParam1, int iParam5)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<4> /*32*/ sVar19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_866(Param1, iParam5, &Var5, 0))
	{
		func_598(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_655(iParam0, &Var19, &Var0, 1, joaat("ADD_REASON_DEFAULT"), 0);
	func_867(Var19, 1);
}

bool func_685()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_686(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_749(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_750(&Var0, func_706(0));
	}
	if (!func_751(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_648(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_598(iParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_649(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_687(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_484(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_868(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_597(iParam0, Var0, Var0.f_4, bParam4) };
	return func_598(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_688(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_393(iParam0, 606799272))
		{
			func_869(iParam0, iParam1);
		}
		if (func_393(iParam0, -1112814642) && func_393(iParam0, -1697809989))
		{
			func_421(iParam0, iParam1, 1, 0);
		}
	}
}

int func_689(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_870(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_397(iParam0) != -999503751)
		{
			func_871(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19 = (Global_1946054.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_397(iParam0) != -999503751)
	{
		func_871(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_872(iParam0, 1);
	return 1;
}

void func_690()
{
	int iVar0;

	if (func_94() == -1)
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

void func_691(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_873(0);
	}
	if (bParam0)
	{
		func_703(8);
		func_703(512);
	}
	else
	{
		func_703(8);
		func_703(16);
	}
}

void func_692(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_693(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_474();
	}
	if (func_94() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_694(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_695(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_874(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_711(iVar0, 1);
			if (func_875(iVar0, iParam1))
			{
				vVar4 = { func_476(iVar0, -1) };
				if ((vVar4.x != Global_1946054.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_876(iVar7, 4))
				{
					func_814(iVar7, 4, 6);
				}
			}
			else
			{
				func_877(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946054.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_696(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946054.f_964.f_2 = 0;
	if (func_94() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_878(&(Global_1946054.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946054.f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_697(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_698(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_397(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_875(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_811(iVar1, iVar3);
		}
	}
	if (func_662(-1586649372) && func_875(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_811(iVar1, iVar3);
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
						func_811(iVar1, iVar3);
					}
				}
			}
			func_879(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_879(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_811(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_879(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_811(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_811(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_879(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_879(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_811(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_879(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_811(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_811(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_397(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_811(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_794(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_397(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_811(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_393(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_811(iVar1, iVar3);
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
						func_811(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_794(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_393(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_811(iVar1, iVar3);
					}
				}
			}
			switch (func_397(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_397(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_811(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_397(uParam0->f_1[iVar1 /*3*/]) || func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_811(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_699(int iParam0, int iParam1)
{
	if (func_94() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_700(int iParam0)
{
	if (func_94() != -1)
	{
		if (func_653(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_653(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_653(iParam0, 65536) && !func_653(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_653(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_653(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_702()
{
	return Global_1905944.f_5694;
}

void func_703(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_704(struct<4> /*32*/ sParam0)
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
			if (func_880(Param0))
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
			func_881(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_703(8);
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
			if (func_880(Param0))
			{
				return;
			}
			func_881(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_703(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_646(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> /*32*/ func_705(bool bParam0)
{
	return func_597(joaat("CHARACTER"), func_882(), -1591664384, bParam0);
}

struct<4> /*32*/ func_706(bool bParam0)
{
	int iVar0;

	iVar0 = func_521(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_597(923904168, func_705(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_597(923904168, func_705(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_597(923904168, func_705(bParam0), -740156546, 0);
}

bool func_707(int iParam0, bool bParam1)
{
	if (func_397(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_395(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_708(bool bParam0)
{
	int iVar0;

	iVar0 = func_521(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_597(271701509, func_705(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_597(271701509, func_705(bParam0), 12999093, 0);
}

bool func_709(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_397(iParam0);
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

bool func_710(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_521(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_711(int iParam0, int iParam1)
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

int func_712(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_713(int iParam0, int iParam1)
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

void func_714(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_715(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_492(*iParam0);
	iVar1 = func_491(*iParam0);
	if (iParam1 < 1 || iParam1 > func_496(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_716(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_717(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_718(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_719(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_720(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("SP_CHAL_BAND_ROOT");
		case 2:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 8:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 16:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

bool func_722(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_94() == -1)
	{
		if (func_565(iParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iParam0);
	}
	return bVar0;
}

int func_723(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_373(iParam0, 0))
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

int func_724(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_746(&iParam0);
	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	if (!func_401(0))
	{
		bParam2 = true;
	}
	iVar0 = func_569(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2 || !func_745(iParam0))
	{
		iVar1 = func_748(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_521(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_725(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> /*16*/ sVar0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<18> /*144*/ sVar35;
	int iVar53;
	struct<9> /*72*/ sVar54;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;

	if (func_393(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35.f_14 = -1;
		Var35.f_15 = -1;
		Var35.f_16 = -1;
		Var35.f_17 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
		}
		iVar53 = 0;
		if (func_883(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar53 = (iVar53 + Var0[iVar32 /*2*/].f_1);
					Jump @253; //curOff = 225
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var54 = -1;
		Var54.f_1 = -1;
		Var54.f_2 = -1;
		Var54.f_3 = -1;
		Var54.f_4 = -1;
		Var54.f_5 = -1;
		Var54.f_6 = -1;
		Var54.f_7 = -1;
		Var54.f_8 = -1;
		iVar68 = func_454(iParam0, 862142561);
		if (iVar68 != 0)
		{
			Var54.f_8 = iVar68;
			iVar65 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&Var54, &iVar64, 1);
			if (iVar65 != -1)
			{
				iVar66 = 0;
				while (iVar66 < iVar64)
				{
					iVar67 = func_457(iVar66, iVar65);
					if (func_373(iVar67, 0) && iVar67 != iParam0)
					{
						if (bParam4)
						{
							iVar53 = (iVar53 + func_725(iVar67, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar67;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar53 = (iVar53 + func_725(iVar67, -915411861, 1, 0, 0));
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar66++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar65);
			}
		}
		return iVar53;
	}
	if (!func_883(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_726(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_884(1);
}

bool func_727()
{
	if (func_249())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_728(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_885(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::VAR_STRING(2, func_236(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_885(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::VAR_STRING(2, func_236(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_729()
{
	return Global_40.f_4283.f_325;
}

bool func_730(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_94() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

int func_731(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;

	if (!func_18(iParam0))
	{
		return 0;
	}
	cVar0 = func_274(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_732(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

void func_733(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_734()
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

int func_735(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

int func_736(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
		case joaat("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case joaat("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case joaat("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case joaat("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case joaat("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case joaat("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case joaat("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case joaat("CSTAG_PLAYER_DIRTY"):
			return 339;
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case joaat("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case joaat("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case joaat("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case joaat("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case joaat("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case joaat("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case joaat("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case joaat("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case joaat("CSTAG_PLAYER_AWAY"):
			return 340;
		case joaat("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case joaat("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case joaat("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case joaat("CSTAG_FLOW_REV1_POST"):
			return 390;
		case joaat("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case joaat("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case joaat("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case joaat("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case joaat("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case joaat("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case joaat("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case joaat("CSTAG_FLOW_MR52_POST"):
			return 475;
		case joaat("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case joaat("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case joaat("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case joaat("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case joaat("CSTAG_SDB_BASE"):
			return 5;
		case joaat("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case joaat("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case joaat("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case joaat("CSTAG_FLOW_TRN2_POST"):
			return 465;
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

float func_737(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_738(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_886(bParam1);
	}
}

void func_739(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_740(int iParam0)
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

bool func_741(int iParam0)
{
	vector3 vVar0;

	if (!func_759(23, &vVar0))
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

bool func_742(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_759(23, &Var0))
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

int func_743(int iParam0)
{
	return iParam0;
}

int func_744()
{
	int iVar0;

	iVar0 = func_557();
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

bool func_745(int iParam0)
{
	if (func_887(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_746(int iParam0)
{
	if (!func_373(*iParam0, 0))
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

bool func_747(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_484(iParam0, 0, 1) };
	iVar5 = joaat("SLOTID_WEAPON_0");
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_594((398 + iVar29), 1);
		if (func_595(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_596(iParam0, &Var6, iVar5);
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

int func_748(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_597(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_521(bParam6), &Var0, 0);
	return uVar4;
}

struct<18> /*144*/ func_749(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_750(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_751(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_521(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_752(int iParam0)
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

float func_753(int iParam0)
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
			return func_888(iParam0);
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
			return func_888(iParam0);
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
			return func_888(iParam0);
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

bool func_754(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_395(18);
		case 2:
			return func_395(20);
		case 1:
			return func_395(19);
		default:
			break;
	}
	return true;
}

int func_755(int iParam0)
{
	return func_889(Global_40.f_11095.f_11[iParam0]);
}

void func_756(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_94() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_395(31))
	{
		return;
	}
	iVar0 = func_755(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_755(iParam0);
	if (func_890(iParam0) && func_891(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_892(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_893(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_237(func_894(iParam0), 0);
					}
					func_895(iParam0, iVar2, iVar3);
					func_896(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_757(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_758(int iParam0)
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

bool func_759(int iParam0, var uParam1)
{
	if (!func_897(iParam0))
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

int func_760()
{
	return func_898(Global_40.f_12019);
}

int func_761()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_577(iVar1);
		if (func_258(iVar2, 1, 0) || func_767(func_766(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_762()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_899(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_763()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_772(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_764()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_765(int iParam0)
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

int func_766(int iParam0)
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

bool func_767(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_768(int iParam0)
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

int func_769(int iParam0)
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

int func_770(int iParam0)
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

char* func_771(int iParam0)
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

bool func_772(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_773(int iParam0)
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

char* func_774(int iParam0)
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

bool func_775(int iParam0)
{
	if (func_900(iParam0) && func_258(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_901(iParam0) && func_902(iParam0))
	{
		return true;
	}
	return false;
}

char* func_776(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_440(iParam0));
}

void func_777(bool bParam0)
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

void func_778(int iParam0)
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

void func_779(bool bParam0)
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

void func_780(bool bParam0)
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

void func_781(bool bParam0)
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

void func_782(bool bParam0)
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

void func_783(bool bParam0)
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

void func_784(bool bParam0)
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

int func_785(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_472(iParam0, 1) /*3*/];
}

void func_786()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_903();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_400(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_446(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_400(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_446(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_787(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_521(0);
	*uParam1 = { func_597(iParam0, func_706(0), iParam3, 0) };
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

bool func_788(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_789(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_790(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_791(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_393(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_792(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_472(func_904(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_397(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_793(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_472(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_642(524288))
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

bool func_794(int iParam0)
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

int func_795(int iParam0)
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

int func_796(int iParam0)
{
	return func_905(iParam0, -1);
}

void func_797(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_906((Global_40.f_4283.f_325 + iParam0));
}

void func_798(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_727())
	{
		func_502(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_502(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_799(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_800(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_520(iParam0, 1);
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

void func_801(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_520(iParam0, 1);
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

void func_802()
{
	func_801(-939420910);
	func_801(-1187950766);
	func_801(356365161);
	func_801(753127042);
	func_801(-2038424081);
	func_801(1884271742);
	func_801(459290420);
}

void func_803()
{
	func_801(704802028);
	func_801(588987611);
	func_801(2008888900);
	func_801(1649996811);
	func_801(227918160);
	func_801(168171957);
	func_801(1193080109);
	func_801(-491981251);
	func_801(-639037538);
	func_801(-618620429);
}

bool func_804(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_805(int iParam0)
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

void func_806(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_807(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_808()
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

void func_809(int iParam0)
{
	func_814(iParam0, 8, 6);
}

void func_810(int iParam0)
{
	func_907(&(Global_1946054.f_2589), iParam0);
}

void func_811(int iParam0, int iParam1)
{
	func_908(&(Global_1946054.f_2589), iParam0, iParam1);
}

int func_812(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_909(0);
	if (iParam2 != 0 && func_910(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_697(iParam0, func_711(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_813(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_94() != -1;
	iVar7 = func_909(0);
	if (func_642(32768))
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
			iVar5 = func_711(iVar0, 1);
			if (func_876(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_876(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_793(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_911(uParam0);
				if (iVar3 > 0)
				{
					if (!func_642(524288))
					{
						func_703(524288);
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
							iVar5 = func_711(iVar0, 1);
							if (func_876(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_876(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_793(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_811(iVar0, iParam2);
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
					func_817(524288);
				}
			}
		}
	}
}

void func_814(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_815(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_912(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_94() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_913(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_836(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_836(Global_40.f_7729);
				Global_1946054.f_1378 = func_836(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_914(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_691(0, 1);
	}
}

void func_816(var uParam0)
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

void func_817(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_818(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_819(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_880(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_880(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_881(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_703(8);
}

bool func_820()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_821(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_822()
{
	float fVar0;
	int iVar1;

	fVar0 = func_915(13);
	iVar1 = func_916(fVar0);
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

float func_823()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_824()
{
	if (func_249())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_825()
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

float func_826()
{
	return Global_1954815.f_3;
}

void func_827(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_917(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_828(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_917(iParam0, 2, 0, 0);
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

float func_829(float fParam0, float fParam1, float fParam2)
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

bool func_830()
{
	return func_915(12) <= -99f;
}

bool func_831()
{
	return func_915(12) >= 99f;
}

int func_832()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_397(iVar1) == -999503751)
		{
			if (func_918() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_833(int iParam0)
{
	if (!func_658(iParam0))
	{
		return false;
	}
	if (func_837(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_834(int iParam0)
{
	if (!func_658(iParam0))
	{
		return false;
	}
	if (func_837(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_835(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_658(iParam0))
	{
		return;
	}
	if (!func_834(iParam0))
	{
		func_839(iParam0, 2);
		if (bParam2)
		{
			if (!func_135(0, 0, 1))
			{
				func_129(1, 4);
			}
		}
		if ((!func_838() && !bParam1) && !func_135(0, 0, 1))
		{
			func_512(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_919(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_836(int iParam0)
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

bool func_837(int iParam0, int iParam1)
{
	if (!func_658(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_838()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_839(int iParam0, int iParam1)
{
	if (!func_658(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_840(int iParam0, bool bParam1)
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

void func_841(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_920(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_396(50);
			}
			else
			{
				func_396(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_396(51);
			}
			else
			{
				func_396(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_921(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_427();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_427();
			}
			break;
		case 3:
			func_396(24);
			if (bParam1)
			{
				if (!func_921(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_427();
				}
			}
			break;
	}
}

void func_842(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_922(0))
			{
				iVar0++;
			}
			if (func_922(2))
			{
				iVar0++;
			}
			if (func_922(4))
			{
				iVar0++;
			}
			if (!func_923(16))
			{
				if (iVar0 == 1)
				{
					func_924();
					func_237(456, 1);
					func_925(16);
				}
			}
			if (!func_923(32))
			{
				if (iVar0 >= 3)
				{
					func_924();
					func_237(456, 1);
					func_925(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_922(1))
			{
				iVar0++;
			}
			if (func_922(3))
			{
				iVar0++;
			}
			if (func_922(7))
			{
				iVar0++;
			}
			if (!func_923(1))
			{
				if (iVar0 == 1)
				{
					func_926();
					func_237(457, 1);
					func_925(1);
				}
			}
			if (!func_923(2))
			{
				if (iVar0 >= 3)
				{
					func_926();
					func_237(457, 1);
					func_925(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_922(5))
			{
				iVar0++;
			}
			if (func_922(6))
			{
				iVar0++;
			}
			if (func_922(8))
			{
				iVar0++;
			}
			if (!func_923(4))
			{
				if (iVar0 == 1)
				{
					func_927();
					func_237(455, 1);
					func_925(4);
				}
			}
			if (!func_923(8))
			{
				if (iVar0 >= 3)
				{
					func_927();
					func_237(455, 1);
					func_925(8);
				}
			}
			break;
	}
}

void func_843(var uParam0)
{
	func_664(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_664(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_664(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_844(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_928(uParam0))
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

bool func_845(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_846(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_373(iParam0, 0))
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

void func_847(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_468(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_929(iParam0, &uVar18);
	func_930(iParam0, &uVar18, &iVar34, 1);
	if (func_474() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_931(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_470(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_468(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (func_397(uVar18[iVar36]))
		{
			case -2061583405:
				func_931(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_931(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_931(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_931(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_931(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_470(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_472(func_471(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_932(&(Global_1946054.f_1616));
	func_475(&(Global_1946054.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_476(8, 0) };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_476(9, 0) };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_476(0, 0) };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_476(2, 0) };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_476(3, 0) };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_476(1, 0) };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_476(5, 0) };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_476(6, 0) };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_476(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_477(iVar0[iVar36], iVar35))
			{
				func_470(func_933(iVar35), 1, 1);
				func_934(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_874(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_478(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946054.f_1497.f_1[iVar37 /*3*/] = { Global_1946054.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946054.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_657(iParam0))
	{
		if (!func_935(8))
		{
			if (func_474() == -2125499975)
			{
				if (bVar17)
				{
					func_475(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_936(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_937(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_657(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_475(&(Global_1946054.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_936(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_937(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_657(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_657(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_938(Global_40.f_7729, 4096);
					func_839(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_939(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_475(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_475(&(Global_1946054.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946054.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946054.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946054.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946054.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946054.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946054.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946054.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946054.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946054.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946054.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946054.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946054.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

struct<4> /*32*/ func_848()
{
	struct<4> /*32*/ sVar0;

	Var0 = { func_705(0) };
	return func_597(856287005, Var0, -218846335, 0);
}

int func_849(int iParam0, struct<4> /*32*/ sParam1)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	var uVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_373(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_748(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_940(&uVar7);
					if (func_598(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> /*48*/ func_850()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_941(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_941(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_941(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_941(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_941(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_941(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_851(var uParam0)
{
	return uParam0->f_1;
}

void func_852(var uParam0)
{
	func_942(uParam0);
	func_944(uParam0, func_943(-1346384396));
	func_945(uParam0, func_943(-712836614));
	func_946(uParam0, func_943(-1629133289));
	func_947(uParam0, func_943(1302066700));
	func_948(uParam0, func_943(599669344));
	func_949(uParam0, func_943(-1555511632));
}

void func_853(struct<6> /*48*/ sParam0)
{
	if (!func_950(Param0.f_4, 1))
	{
	}
	if (!func_950(Param0, 1))
	{
	}
	if (!func_950(Param0.f_2, 1))
	{
	}
	if (!func_950(Param0.f_5, 1))
	{
	}
	if (!func_950(Param0.f_3, 1))
	{
	}
	if (!func_950(Param0.f_1, 1))
	{
	}
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_277())
	{
		if (func_215())
		{
			bVar0 = false;
			if (!func_38(Global_1835011[15 /*74*/].f_1, 1) && !func_395(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_951();
				*iParam1 = func_952();
				*iParam2 = func_953();
				return 1;
			}
			else
			{
				*iParam0 = func_954();
				*iParam1 = func_955();
				*iParam2 = func_956();
				return 1;
			}
		}
		else if (func_15())
		{
			if (!func_38(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_957();
				*iParam1 = func_958();
				*iParam2 = func_959();
				return 1;
			}
			else
			{
				*iParam0 = func_960();
				*iParam1 = func_961();
				*iParam2 = func_962();
				return 1;
			}
		}
	}
	else if (func_215())
	{
		*iParam0 = func_963();
		*iParam1 = func_964();
		*iParam2 = func_965();
		return 1;
	}
	else if (func_15())
	{
		*iParam0 = func_966();
		*iParam1 = func_967();
		*iParam2 = func_968();
		return 1;
	}
	return 0;
}

int func_855(int iParam0)
{
	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_856(int iParam0, int iParam1)
{
	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
}

void func_857(int iParam0, int iParam1)
{
	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
}

void func_858(int iParam0, int iParam1)
{
	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
}

void func_859(int iParam0, int iParam1)
{
	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
}

bool func_860(int iParam0)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;

	bVar0 = func_970(iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	Var1 = { func_705(0) };
	if (func_971(&Var1, bVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_861(int iParam0)
{
	struct<10> /*80*/ sVar0;
	struct<5> /*40*/ sVar29;

	Var0.f_9 = -1591664384;
	if (!func_972(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_598(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_862(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_DONKEY");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return -41062704;
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return 887669186;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return 2102774612;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return -2011111190;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -535752499;
		default:
			break;
	}
	return 0;
}

int func_863(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	var uVar6;

	if (!func_373(iParam1, 0))
	{
		return 0;
	}
	if (!func_973(iParam1))
	{
		return 0;
	}
	if (func_860(iParam0))
	{
		return 0;
	}
	iVar0 = func_970(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_705(0) };
	Var1.f_4 = iVar0;
	if (!func_655(iParam1, &uVar6, &Var1, 1, joaat("ADD_REASON_DEFAULT"), 0))
	{
		return 0;
	}
	return 1;
}

bool func_864(int iParam0, struct<4> /*32*/ sParam1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	struct<4> /*32*/ sVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_373(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_748(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_940(&Var7);
					if (func_655(Var3, &Var7, &Var12, 1, joaat("ADD_REASON_DEFAULT"), 1))
					{
						if (bParam5)
						{
							func_867(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_865(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_884(1) < iParam0)
	{
		iParam0 = func_884(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_198(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

bool func_866(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_521(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_710(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_867(struct<4> /*32*/ sParam0, int iParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_401(0))
	{
		return func_974(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_710(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_521(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_868(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_788(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_401(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_521(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_869(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_94() == -1)
	{
		if (func_383(43))
		{
			if (func_393(iParam0, 412399755))
			{
				func_625(joaat("EXOTIC_STAGE_01"));
				if (func_626() == 0)
				{
					func_129(0, 10);
					iVar0 = func_975(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_628(iParam0) < func_629(iParam0))
						{
							func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_383(44))
		{
			if (func_393(iParam0, 709057512))
			{
				func_625(joaat("EXOTIC_STAGE_02"));
				if (func_626() == 1)
				{
					func_129(0, 10);
					iVar0 = func_975(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_628(iParam0) < func_629(iParam0))
						{
							func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_383(45))
		{
			if (func_393(iParam0, -1478961327))
			{
				func_625(joaat("EXOTIC_STAGE_03"));
				if (func_626() == 2)
				{
					func_129(0, 10);
					iVar0 = func_975(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_628(iParam0) < func_629(iParam0))
						{
							func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_383(46))
		{
			if (func_393(iParam0, -1238404098))
			{
				func_625(joaat("EXOTIC_STAGE_04"));
				if (func_626() == 3)
				{
					func_129(0, 10);
					iVar0 = func_975(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_628(iParam0) < func_629(iParam0))
						{
							func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_383(47))
		{
			if (func_393(iParam0, 1160548794))
			{
				func_625(joaat("EXOTIC_STAGE_05"));
				if (func_626() == 4)
				{
					func_129(0, 10);
					iVar0 = func_975(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_628(iParam0) < func_629(iParam0))
						{
							func_389(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_870(int iParam0, int iParam1)
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

void func_871(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_976(iParam1);
	func_977(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_978(&(uParam0->f_26), iVar1);
		if (func_979(uParam0->f_26, &iVar0))
		{
			func_980(iVar0, iVar1);
		}
	}
}

bool func_872(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_484(iParam0, 0, 0) };
	Var5 = { func_597(iParam0, Var0, Var0.f_4, 0) };
	if (func_748(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_521(0), &Var5, iParam1);
	return true;
}

void func_873(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_874(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_875(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

bool func_876(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

void func_877(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_472(iParam0, 1) /*11*/].f_10 || iParam1);
}

void func_878(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

void func_879(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_811(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_811(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_811(iVar2, iVar0);
		}
	}
}

bool func_880(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_881(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

struct<4> /*32*/ func_882()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_883(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_373(iParam0, 0))
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
		func_981(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_884(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

char* func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

void func_886(bool bParam0)
{
	func_982(bParam0);
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

int func_887(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_888(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_752(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_889(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_983(iVar6) - func_983(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_889(float fParam0)
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

int func_890(int iParam0)
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

int func_891(int iParam0)
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

int func_892(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_889(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_983(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_983(iVar0 + 1));
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

int func_893(int iParam0)
{
	int iVar0;

	if (func_984(iParam0, &iVar0))
	{
		return func_983(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_985())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_985())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_985())
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

int func_894(int iParam0)
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

void func_895(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_986(iParam0));
	sVar4 = func_988(func_987(iVar3, iParam2));
	sVar6 = func_989(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_990(iParam0));
	iVar8 = func_991(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_992(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_586(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_993(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_896(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_897(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_898(int iParam0)
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

bool func_899(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_900(int iParam0)
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

int func_901(int iParam0)
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

int func_902(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_994(&iVar0, 0, iVar95, &Var1) && !func_994(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_995(iVar0, &Var1);
			if (func_373(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_903()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_996(Global_35, &iVar0);
	Var30 = { func_705(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_997(0);
	func_998(7);
	func_999(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_474() == 1160113249)
	{
		func_999(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_999(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_1000(Global_35, &iVar0);
}

int func_904(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_485(iVar0);
}

int func_905(int iParam0, int iParam1)
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
		iParam1 = func_521(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_713(&uVar6, iVar0);
	func_714(&uVar6, iVar1);
	func_715(&uVar6, iVar2);
	func_716(&uVar6, iVar3);
	func_717(&uVar6, iVar4);
	func_718(&uVar6, iVar5);
	return uVar6;
}

void func_906(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_198(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_907(var uParam0, int iParam1)
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
			if ((func_1001(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1001(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1002(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_908(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1003(uParam0, 1))
	{
		func_1004(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_909(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_474();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_910(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_911(var uParam0)
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

void func_912(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_94() == -1)
	{
		func_478(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1005(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_913(int iParam0, int iParam1)
{
	if (func_94() == -1)
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

void func_914(int iParam0, bool bParam1, int iParam2)
{
	func_936(&(Global_1946054.f_1378), iParam0);
	func_937(2, iParam0, 6);
	if (bParam1)
	{
		func_691(0, 1);
	}
}

float func_915(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_916(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_917(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_671(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_671(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_918()
{
	return Global_1946054.f_1497;
}

char* func_919(int iParam0)
{
	int iVar0;

	iVar0 = func_836(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_776(iVar0);
}

int func_920(int iParam0)
{
	int iVar0;

	if (func_1006(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1007(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1008(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1009(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_921(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_258(func_1010(iVar0, iParam0), 1, 0))
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

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_258(func_1011(iVar0, iParam0), 1, 0))
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

bool func_923(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_924()
{
	int iVar0;

	if (func_94() != -1)
	{
		return;
	}
	func_446(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_755(1);
	func_895(1, iVar0, 0);
}

void func_925(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_926()
{
	int iVar0;

	if (func_94() != -1)
	{
		return;
	}
	func_446(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_755(2);
	func_895(2, iVar0, 0);
}

void func_927()
{
	int iVar0;

	if (func_94() != -1)
	{
		return;
	}
	func_446(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_755(0);
	func_895(0, iVar0, 0);
}

bool func_928(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_929(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;
	int iVar8;

	iVar8 = 0;
	if (!func_1012(iParam0, func_474()))
	{
		return 0;
	}
	Var1 = func_693(func_474());
	Var1.f_1 = iParam0;
	DATAFILE::_0x91DED5DD64BB2691(&Var1);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		return 0;
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var1))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&uVar0, &Var1, joaat("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_930(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> /*80*/ sVar5;
	int iVar19;
	struct<18> /*144*/ sVar20;

	Var5.f_9 = -1591664384;
	iVar19 = func_693(func_474());
	Var20 = { func_749(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_751(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_648(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_657(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_878(&(Global_1946054.f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2++;
	}
	func_649(iVar0);
	return 1;
}

void func_931(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_870(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19 = (Global_26796.f_627.f_121.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_26796.f_627.f_121[iVar0] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_932(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_933(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1013();
	}
	if (func_94() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_934(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_94() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946054.f_57[iVar0 /*11*/];
			func_478(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = Global_1946054.f_57[iVar0 /*11*/];
		func_1005(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_935(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_936(var uParam0, int iParam1)
{
	int iVar0;

	if (func_94() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_478(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1005(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_937(int iParam0, int iParam1, int iParam2)
{
	if (func_94() == -1)
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

void func_938(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_658(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_939(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_836(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_933(iParam1);
	}
	if ((bParam3 && func_837(iParam1, 4096)) && Global_1946054.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_1012(iVar0, Global_1946054.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_938(Global_40.f_7729, 4096);
		func_839(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		func_543(bParam0);
	}
	func_1014();
	if (!func_1015(iParam1))
	{
		func_1017(iVar0, bParam0, func_1016(iParam1), 1, 0, 1);
	}
	func_1018(bParam0);
	return 1;
}

void func_940(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_941(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_1019(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_848() };
	*iParam1 = func_1020(Var0, iParam0, 0);
	if (!func_373(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_942(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_943(int iParam0)
{
	if (func_215())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_000");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (func_15())
	{
		switch (iParam0)
		{
			case -1346384396:
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case -712836614:
				return joaat("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case -1629133289:
				return joaat("HORSE_EQUIPMENT_HORN_NEW_012");
			case 1302066700:
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case 599669344:
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case -1555511632:
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

void func_944(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_945(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_946(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_947(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_948(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_949(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_950(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> /*32*/ sVar10;
	struct<4> /*32*/ sVar14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (!func_1021(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_848() };
	Var14 = { func_597(iParam0, Var10, iVar9, 0) };
	if (func_867(Var14, iParam1))
	{
		if (func_1022(iParam0))
		{
			if (func_941(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_950(iVar18, 0))
				{
				}
			}
		}
		else if (func_1023(iParam0))
		{
			if (func_941(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_950(iVar19, 0))
				{
				}
			}
			if (func_941(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_950(iVar20, 0))
				{
				}
			}
			iVar21 = func_1024(iParam0);
			if (func_373(iVar21, 0))
			{
				if (func_950(iVar21, 1))
				{
				}
			}
		}
		func_1025();
		return true;
	}
	return false;
}

int func_951()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_952()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_953()
{
	return 1;
}

int func_954()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_955()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_956()
{
	return 1;
}

int func_957()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_958()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_959()
{
	return 2;
}

int func_960()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_961()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_962()
{
	return 1;
}

int func_963()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_964()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_965()
{
	return 1;
}

int func_966()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_967()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_968()
{
	return 1;
}

int func_969(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_971(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_521(bParam2), uParam0, bParam1);
}

bool func_972(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_860(iParam0))
	{
		return false;
	}
	iVar0 = func_970(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_705(0) };
	if (!func_1026(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1027(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_973(int iParam0)
{
	return func_392(iParam0) == joaat("HORSE");
}

int func_974(struct<4> /*32*/ sParam0, int iParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_710(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_392(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1028(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1029(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_1030(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1031(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1032(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1033(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_975(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_628(iVar9);
	iVar2 = func_628(iVar10);
	iVar3 = func_628(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_628(iVar12);
	}
	iVar5 = func_629(iVar9);
	iVar6 = func_629(iVar10);
	iVar7 = func_629(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_629(iVar12);
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

int func_976(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_977(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_978(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1034(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_979(int iParam0, int iParam1)
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

void func_980(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_981(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> /*16*/ sVar7;
	struct<2> /*16*/ sVar19;
	struct<2> /*16*/ sVar21[15];

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

void func_982(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

int func_983(int iParam0)
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

bool func_984(int iParam0, int iParam1)
{
	return false;
}

bool func_985()
{
	return false;
}

int func_986(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_521(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_521(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_521(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> /*32*/ func_987(int iParam0, int iParam1)
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

char* func_988(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_989(int iParam0)
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

char* func_990(int iParam0)
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

int func_991(int iParam0)
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

int func_992(int iParam0)
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

int func_993(int iParam0)
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

bool func_994(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_1035(iParam1) && !func_1036(iParam1))
	{
		bVar0 = func_1037(iParam1);
	}
	else
	{
		return false;
	}
	func_1038(uParam3);
	iVar5 = func_1039(iParam2);
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

void func_995(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_1040(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1041(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_996(int iParam0, int* iParam1)
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
		if (func_487(iVar31))
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

void func_997(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_373(iVar1, 0))
		{
			func_470(iVar1, 0, bParam0);
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

void func_998(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_94() == -1)
	{
		func_1042(352481484);
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
		if (func_397(iVar2) != -999503751)
		{
			func_1043(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_872(iVar2, 0))
		{
			func_1044(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_999(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1045(iParam0))
	{
		return;
	}
	iVar0 = func_397(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1046(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1047(0))
	{
		func_1048(iParam0, 1);
		if (func_474() == 1160113249)
		{
			func_1048(func_1047(-2125499975), 0);
		}
		else
		{
			func_1048(func_1047(1160113249), 0);
		}
	}
	func_690();
	if (func_1049(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_521(0), iParam0, 0);
	}
	func_1044(iParam0, bParam3);
	if (bParam2)
	{
		func_691(0, 0);
	}
}

void func_1000(int iParam0, int iParam1)
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
				if (func_593((*iParam1)[iVar0]))
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

bool func_1001(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1002(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1003(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1004(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1005(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

bool func_1006(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1007(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1008(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1009(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1010(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1050(iParam0);
		case 1:
			return func_1051(iParam0);
		case 2:
			return func_1052(iParam0);
		case 3:
			return func_1053(iParam0);
	}
	return 0;
}

int func_1011(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1054(iParam0);
		case 1:
			return func_1055(iParam0);
		case 2:
			return func_1056(iParam0);
		case 3:
			return func_1057(iParam0);
		case 4:
			return func_1058(iParam0);
		case 5:
			return func_1059(iParam0);
		case 6:
			return func_1060(iParam0);
		case 7:
			return func_1061(iParam0);
		case 8:
			return func_1062(iParam0);
	}
	return 0;
}

bool func_1012(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_693(iParam1);
	func_878(&(Global_1946054.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964));
}

int func_1013()
{
	if (func_94() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1014()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_642(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946054.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_1063(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_817(1);
	STREAMING::REMOVE_ANIM_DICT(func_1063());
}

bool func_1015(int iParam0)
{
	return false;
}

int func_1016(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1017(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_657(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_94() != -1)
	{
		return;
	}
	func_808();
	if (bParam5)
	{
		if (!func_1064(&(Global_1946054.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_642(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
	{
		func_643();
	}
	func_1065(iVar3, 1, 1, 1, 1, 1);
	func_483(31, 0, 0, 0, 0);
	func_645(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(bParam1))
		{
			func_483(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_483(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_1066(&(Global_1946054.f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_1018(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_1019(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_397(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1067(iParam0);
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

int func_1020(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	Var0.f_9 = -1591664384;
	if (func_866(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1021(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> /*80*/ sVar6;
	struct<4> /*32*/ sVar20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> /*40*/ sVar37;
	struct<4> /*32*/ sVar42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_397(iParam1);
		iVar5 = func_1067(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
				{
					*uParam4 = { func_484(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_597(iParam1, *uParam4, uParam4->f_4, 0) };
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
			iVar34 = func_521(0);
			Var37 = { func_484(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_597(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_397(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, iVar2))
							{
								if (func_866(Var42, Var6.f_9, &Var20, 0))
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

bool func_1022(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
	}
	if (func_393(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1023(int iParam0)
{
	if (!func_373(iParam0, 0))
	{
		return false;
	}
	if (func_393(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1024(int iParam0)
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

int func_1025()
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> /*32*/ sVar16;
	int iVar20;
	int iVar21;

	Var0 = { func_484(856287005, 0, 0) };
	Var5 = { func_597(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_397(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1020(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_373(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1067(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1020(Var5, iVar11, 0);
			if (!func_373(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_1023(iVar14) || func_1022(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_1023(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_1023(iVar14) && func_1068(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1069(iVar11, &Var16, 1))
									{
										if (!func_867(Var16, 1))
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

bool func_1026(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_521(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1027(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_521(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

struct<29> /*232*/ func_1028(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_521(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1032(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1029(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1070(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1071(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1071(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1071(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_1030(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_521(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1032(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1031(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1072(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1071(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1071(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1071(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_1032(var uParam0)
{
	struct<17> /*136*/ sVar0;

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

int func_1033(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1073(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1071(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1071(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1071(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1034(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1074(&(uParam0->f_3));
}

bool func_1035(int iParam0)
{
	iParam0 = func_969(iParam0);
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

bool func_1036(int iParam0)
{
	int iVar0;

	iParam0 = func_969(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1035(iParam0))
	{
		return false;
	}
	iVar0 = func_1037(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1037(int iParam0)
{
	iParam0 = func_969(iParam0);
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

void func_1038(var uParam0)
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

int func_1039(int iParam0)
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

void func_1040(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(bParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(bParam0);
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
		*uParam4 = PED::_GET_PED_QUALITY(bParam0);
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

bool func_1041(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	uVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, bParam1, iParam2);
	return uVar2;
}

void func_1042(int iParam0)
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
	Var2 = { func_749(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_751(&Var2, &iVar0, &iVar1, 0))
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
		func_649(iVar0);
	}
}

void func_1043(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1075(iParam2, *uParam0);
	func_1076(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

void func_1044(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_484(iParam0, 0, 0) };
	Var5 = { func_597(iParam0, Var0, Var0.f_4, 0) };
	if (func_748(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_521(0), &Var5, bParam1);
}

bool func_1045(int iParam0)
{
	if (func_94() == -1)
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

int func_1046(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_870(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_872(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_397(iParam0) != -999503751)
	{
		func_1043(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1047(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_474();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1048(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_484(iParam0, 0, 0) };
	Var5 = { func_597(iParam0, Var0, Var0.f_4, 0) };
	if (func_748(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_521(0), &Var5);
	return 1;
}

bool func_1049(int iParam0)
{
	return func_1077(func_522(iParam0));
}

int func_1050(int iParam0)
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

int func_1051(int iParam0)
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

int func_1052(int iParam0)
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

int func_1053(int iParam0)
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

int func_1054(int iParam0)
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

int func_1055(int iParam0)
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

int func_1056(int iParam0)
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

int func_1057(int iParam0)
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

int func_1058(int iParam0)
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

int func_1059(int iParam0)
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

int func_1060(int iParam0)
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

int func_1061(int iParam0)
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

int func_1062(int iParam0)
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

char* func_1063()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_1064(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1078(uParam0, iParam3, iParam2) && !func_475(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_642(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/]))
		{
			func_809(1108822547);
		}
		else
		{
			func_1079(1108822547);
		}
	}
	func_813(uParam0, 0, 0);
	func_873(iParam5);
	return true;
}

void func_1065(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1013()) || bParam5)
		{
			func_1080();
		}
	}
	if (func_94() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1081(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_836(Global_40.f_7729);
				Global_1946054.f_1378 = func_836(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_1016(iVar0);
	}
	if (iParam3 && iVar1)
	{
		func_914(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_691(0, 1);
	}
	func_873(0);
}

void func_1066(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_94() != -1;
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
			func_703(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1082(bParam1, 29, bVar4, 1, 0);
			func_1082(bParam1, 31, bVar4, 1, 0);
			func_1082(bParam1, 30, bVar4, 1, 0);
			func_1082(bParam1, 22, bVar4, 1, 0);
			func_1082(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_642(32768) && func_876(1108822547, 8)) && func_875(10, iParam3))
	{
		func_1083(bParam1, 0, 1);
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
			iVar3 = func_711(iVar1, 1);
			if (func_876(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_875(iVar1, iParam3))
				{
				}
				else if ((func_876(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_876(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_1082(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_877(iVar3, 1, 6);
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
								func_1082(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_876(iVar3, 1))
							{
								func_814(iVar3, 1, 6);
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

int func_1067(int iParam0)
{
	int iVar0;

	if (!func_373(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_397(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1068(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1069(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;
	struct<4> /*32*/ sVar20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_749(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_750(&Var2, func_848());
	if (func_751(&Var2, &iVar0, &iVar1, 0))
	{
		Var20.f_9 = -1591664384;
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_648(&Var20, iVar34, iVar0, iVar1))
			{
				if (func_373(Var20.f_4, 0) && !Var20.f_10)
				{
					if (bParam2 && func_1068(Var20.f_4))
					{
					}
					else
					{
						*uParam1 = { Var20 };
						func_649(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_649(iVar0);
	}
	return false;
}

bool func_1070(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1071(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1084(iParam0, iParam1);
}

bool func_1072(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1073(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_1074(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1075(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1076(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1034(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_472(func_471(iParam1), 1);
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
		func_1085(uParam0);
	}
}

bool func_1077(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 && iParam0) != 0;
}

bool func_1078(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_933(iParam1) != iParam2)
	{
		return false;
	}
	if (func_913(2, iParam1))
	{
		func_1086(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1079(int iParam0)
{
	func_877(iParam0, 8, 6);
}

void func_1080()
{
	int iVar0;

	Global_1946054.f_1497 = Global_1946054.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_1081(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_693(0);
	iVar1 = 0;
	func_878(&(Global_1946054.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946054.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946054.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946054.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_1082(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_711(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1087(iParam4);
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

void func_1083(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_876(1108822547, 6))
	{
		if (bParam2)
		{
			func_1082(bParam0, iVar0, func_94() != -1, 0, 0);
			func_877(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_814(1108822547, 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

void func_1084(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { Var1 };
}

void func_1085(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1088(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_1086(var uParam0, int iParam1)
{
	int iVar0;

	if (func_94() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_1087(int iParam0)
{
	int iVar0;

	iVar0 = func_397(iParam0);
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

void func_1088(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1089(func_474());
	if (*uParam0)
	{
		func_1074(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_94() != -1, iParam2);
	*uParam0 = 1;
}

int func_1089(int iParam0)
{
	if (func_94() == -1)
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

