#region Local Variables
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	float fLocal_8 = 0f;
	float fLocal_9 = 0f;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	struct<6> /*48*/ sLocal_15 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	char* sLocal_24 = NULL;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	char* sLocal_34 = NULL;
	int iLocal_35 = 0;
	struct<2> /*16*/ sLocal_36 = { 0, 0 } ;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 10;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_73 = 0;
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
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
#endregion

void main()
{
	var uVar0;
	int iVar12;

	sLocal_0 = "";
	fLocal_8 = 1f;
	fLocal_9 = 1f;
	sLocal_21 = "mech_skin@BUCK_BUTCHER";
	sLocal_22 = "PBL_BASE";
	sLocal_23 = "PBL_DUMP";
	sLocal_24 = "PBL_DROP_IN";
	sLocal_34 = "beat_gang_camp_reminder";
	iLocal_35 = 23;
	func_1();
	func_2();
	BUILTIN::WAIT(0);
	func_3();
	uVar0 = 11;
	while (!func_4(&uVar0))
	{
		BUILTIN::WAIT(0);
	}
	func_5(0);
	if (!Global_40)
	{
	}
	func_6();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && func_7(&uLocal_39) < 2)
	{
		func_8();
		BUILTIN::WAIT(0);
	}
	NETWORK::_0xE5FF65CFF5160752();
	func_9(0);
	while (true)
	{
		iVar12 = CLOCK::GET_CLOCK_HOURS();
		func_10(iVar12);
		func_11(iVar12);
		func_12(&uLocal_123);
		func_14(func_13() == 3);
		func_15(&Global_1899245);
		func_8();
		if (func_16(1024))
		{
			AUDIO::_0x9428447DED71FC7E("Load_Menu_Scenes");
			func_17(1024);
		}
		switch (func_13())
		{
			case 0:
				if (Global_40)
				{
					func_18();
					func_17(4);
				}
				else if (MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 496295564)
				{
					func_18();
					func_17(4);
				}
				else if (!func_19())
				{
					func_20(1);
				}
				if (func_21() == 1 || func_21() == 0)
				{
					func_22();
					func_9(1);
				}
				else
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 1:
				if (func_23())
				{
					func_17(4);
					func_9(2);
				}
				break;
			case 2:
				func_24();
				if (func_25(func_21()))
				{
					func_9(3);
				}
				break;
			case 3:
				func_26();
				func_27();
				func_28();
				if (func_29())
				{
					func_30();
					func_9(4);
				}
				break;
			case 4:
				if (func_31())
				{
					func_32();
					func_17(4);
					func_17(64);
					func_33();
					if (func_21() == 1)
					{
						func_9(5);
						SCRIPTS::BAIL_TO_LANDING_PAGE(0);
					}
					else if (func_21() == 4)
					{
						func_9(2);
					}
					else if (func_34() != 1)
					{
						func_9(5);
						func_35();
					}
					else
					{
						func_9(2);
					}
				}
				break;
			case 5:
				func_35();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(1);
	AUDIO::_0x6339C1EA3979B5F7("Main_Menu", "Load_Menu_Scenes");
}

void func_2()
{
}

void func_3()
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	func_36();
	func_37();
	func_38();
	func_39();
}

bool func_4(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (func_40(iVar1))
		{
			if (!func_41(iVar1, uParam0[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		SCRIPTS::_SET_ALL_GLOBAL_BLOCKS_HAVE_BEEN_LOADED(true);
	}
	return bVar0;
}

void func_5(bool bParam0)
{
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8, bParam0);
	SCRIPTS::_SET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9, bParam0);
}

void func_6()
{
	func_42();
	func_43();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_0xA657EC9DBC6CC900(joaat("WORLD"));
	func_44();
}

int func_7(var uParam0)
{
	return uParam0->f_76;
}

void func_8()
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		func_45(&uLocal_39);
	}
	else if (func_46(&uLocal_39))
	{
		func_47(&uLocal_39);
	}
}

void func_9(int iParam0)
{
	Local_36 = iParam0;
	Local_36.f_1 = MISC::GET_GAME_TIMER();
}

void func_10(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1899516 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1899516 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1899516 = 2;
		return;
	}
	Global_1899516 = 4;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
	iVar1 = CLOCK::GET_CLOCK_YEAR();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) | -2147483648;
	}
	else
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
		iVar0 = (iVar0 - iVar0 & -2147483648);
	}
	Global_1899515 = iVar0;
}

void func_12(var uParam0)
{
	bool bVar0;

	if (func_48() == -3)
	{
		return;
	}
	bVar0 = COMPAPP::_0x7AF1BB4504EA5ED9();
	if (Global_1955830 != bVar0)
	{
		Global_1955830 = bVar0;
		if (bVar0)
		{
			func_49("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			func_50(&(uParam0->f_1));
			func_49("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_51();
	}
	if (Global_1955830)
	{
		func_52(uParam0);
	}
	func_51();
}

int func_13()
{
	return Local_36;
}

void func_14(bool bParam0)
{
	func_53();
	func_54();
	if (!bParam0)
	{
		return;
	}
	func_55();
	func_56();
}

void func_15(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
			{
				func_57(3);
			}
			if (func_58())
			{
				func_59(&(Global_1899245.f_1));
				func_57(1);
			}
			break;
		case 1:
			if (func_60(&(Global_1899245.f_1), 10000, 1))
			{
				func_57(2);
			}
			break;
		case 2:
			func_61();
			if (!func_58())
			{
				func_57(0);
			}
			break;
		case 3:
			if (func_58())
			{
				func_62();
			}
			break;
		default:
			func_57(0);
			break;
	}
}

bool func_16(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_17(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 - (Global_1572864.f_3 && iParam0));
}

void func_18()
{
	func_63(4);
	func_20(2);
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_64(joaat("BENCHMARK"))))
	{
		Global_43893 = 1;
	}
	func_65(joaat("SINGLE_PLAYER"), 0);
}

bool func_19()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_20(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

int func_21()
{
	return Global_1572864.f_1;
}

void func_22()
{
	struct<6> /*48*/ sVar0;

	Local_15 = { Var0 };
}

bool func_23()
{
	func_66();
	switch (func_67())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_PUSH_PAGE("/landing");
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				PAD::_0xF239400E16C23E08(2, 0);
				func_68();
				func_69(1);
				func_70();
				func_71();
				func_72(0);
				func_73();
				func_74(-1);
				func_75(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 1:
			if (func_76())
			{
				func_75(2);
			}
			else if (REPLAY::IS_VIDEO_EDITOR_RUNNING())
			{
				func_75(2);
				Local_15.f_2 = 4;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_77())
			{
				if (func_78())
				{
					NETWORK::_CLEAR_LAUNCH_PARAMS();
					func_79();
				}
				else
				{
					Local_15.f_2 = 1;
					func_63(4);
				}
				if (func_77())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_20(Local_15.f_2);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				GOOGLE_ANALYTICS::_GOOGLE_ANALYTICS_POP_PAGE("/landing");
				NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
				PAD::_0xA0CEFCEA390AAB9B(2);
				return true;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}
	return false;
}

void func_24()
{
	if (!func_16(64))
	{
		return;
	}
	switch (func_80())
	{
		case joaat("FREEROAM"):
			if (func_81(joaat("HARDCORE")))
			{
				func_82(2);
			}
			else if (func_81(joaat("FRIENDLY")))
			{
				func_82(1);
			}
			else
			{
				func_82(0);
			}
			if (func_81(joaat("SHIFT_F")))
			{
				Global_31 = 1;
			}
			if (func_81(joaat("DEMO")))
			{
				Global_33 = 1;
			}
			if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
			{
				Global_34 = 1;
			}
			else
			{
				Global_34 = 0;
			}
			if (func_81(joaat("PRIVATE")))
			{
				Global_1572887.f_5 = 1;
			}
			else
			{
				Global_1572887.f_5 = 0;
			}
			if (func_81(joaat("NEW_GAME")))
			{
				Global_30 = 1;
			}
			if (func_81(joaat("INTRO_NOT_DONE")))
			{
			}
			if (func_81(joaat("NEAR_POSSE")))
			{
			}
			if (func_81(joaat("RANDOM_POSSE")))
			{
			}
			if (func_81(joaat("HANDHELD")))
			{
			}
			break;
		case joaat("SERIES"):
			break;
		case joaat("MISSION"):
			break;
		case joaat("MINIGAME"):
			break;
		case joaat("MISSION_CREATOR"):
			Global_32 = 1;
			Global_1572887.f_5 = 1;
			break;
	}
	func_17(64);
}

bool func_25(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			func_63(4);
			return true;
		case 2:
			sVar0 = func_83(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_83(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_83(4);
			iVar1 = 1024;
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
	{
		func_84(iParam0);
		return true;
	}
	if (func_85(sVar0, iVar1))
	{
		func_84(iParam0);
		func_86(iParam0);
		func_32();
		return true;
	}
	return false;
}

void func_26()
{
}

void func_27()
{
}

void func_28()
{
}

bool func_29()
{
	if (func_34() != func_21())
	{
		return true;
	}
	if (func_16(4))
	{
		return true;
	}
	if (func_76())
	{
		func_78();
		CAM::DO_SCREEN_FADE_OUT(0);
		return true;
	}
	return false;
}

void func_30()
{
	func_36();
	func_17(4);
	PAD::_0xA0CEFCEA390AAB9B(0);
	if (func_34() == 3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1572887.f_14))
		{
			func_63(2048);
		}
	}
	else
	{
		PLAYER::FORCE_CLEANUP(2);
		func_63(64);
	}
}

bool func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = 1;
	while (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		bVar3 = true;
		if (iVar0 == iVar1)
		{
			bVar3 = false;
		}
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(iVar0))
		{
			bVar3 = false;
		}
		if (bVar3)
		{
			if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(iVar0))
			{
				SCRIPTS::_REQUEST_THREAD_EXIT(iVar0);
			}
			if (func_48() == -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 2);
			}
			iVar2 = 0;
			BUILTIN::WAIT(0);
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
	return iVar2;
}

void func_32()
{
	if (func_34() != 2)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(2));
	}
	if (func_34() != 3)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(3));
	}
	if (func_34() != 4)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_83(4));
	}
}

void func_33()
{
}

int func_34()
{
	return Global_1572864;
}

void func_35()
{
	char* sVar0;

	sVar0 = NETWORK::_GET_LAUNCH_PARAM_STRING();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = func_87();
		SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(sVar0);
		return;
	}
	SCRIPTS::BAIL_WITH_PASS_THROUGH_PARAMS(sVar0);
}

void func_36()
{
	func_88();
	func_89();
	func_90();
	SCRIPTS::_0x11B0A0B282FA9B10(0);
}

void func_37()
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	sLocal_0 = "startup";
	SAVE::_0x9BB83C4DD7BE0802(&Global_40, 12066, 1, sLocal_0, 94);
	func_91(&(Global_40.f_9));
	func_92(&(Global_40.f_40), "g_savedGlobals.sFlow", 1);
	func_93(&(Global_40.f_1095), "g_savedGlobals.playerHorse", 1);
	func_94(&(Global_40.f_9910));
	func_95(&(Global_40.f_4283));
	func_96(&(Global_40.f_9052));
	func_97(&(Global_40.f_9074));
	func_98(&(Global_40.f_9079));
	func_99(&(Global_40.f_9146));
	func_100(&(Global_40.f_7756));
	func_101(&(Global_40.f_7832), "g_savedGlobals.eTutorialsRun", 1);
	func_102(&(Global_40.f_358));
	func_103(&(Global_40.f_431));
	func_104(&(Global_40.f_7100));
	func_105(&(Global_40.f_450));
	func_106(&(Global_40.f_490));
	func_107(&(Global_40.f_4237));
	func_108(&(Global_40.f_4942));
	func_109(&(Global_40.f_6563));
	func_110(&(Global_40.f_7039));
	func_111(&(Global_40.f_7157));
	func_112(&(Global_40.f_7731));
	func_113(&(Global_40.f_7748));
	func_114(&(Global_40.f_7862), "g_savedGlobals.mapBlipData", 1);
	func_115(&(Global_40.f_8863));
	func_116(&(Global_40.f_9028));
	func_117(&(Global_40.f_9020));
	func_118(&(Global_40.f_9096));
	func_119(&(Global_40.f_9145));
	func_120(&(Global_40.f_9274), "g_savedGlobals.herbs", 1);
	func_121(&(Global_40.f_9319));
	func_122(&(Global_40.f_9384));
	func_123(&(Global_40.f_9422));
	func_124(&(Global_40.f_9479));
	func_125(&(Global_40.f_9536));
	func_126(&(Global_40.f_11943));
	func_127(&(Global_40.f_9571));
	func_128(&(Global_40.f_9632));
	func_129(&(Global_40.f_10991));
	func_130(&(Global_40.f_283));
	func_131(&(Global_40.f_297));
	func_132(&(Global_40.f_7857));
	func_133(&(Global_40.f_9829));
	func_134(&(Global_40.f_11029));
	func_135(&(Global_40.f_11095));
	func_136(&(Global_40.f_11166));
	func_137(&(Global_40.f_7443));
	func_138(&(Global_40.f_9419));
	func_139(&(Global_40.f_11182));
	func_140(&(Global_40.f_11184));
	func_141(&(Global_40.f_11206));
	func_142(&(Global_40.f_11623));
	func_143(&(Global_40.f_11959));
	func_144(&(Global_40.f_11864));
	func_145(&(Global_40.f_11883));
	func_146(&(Global_40.f_11922));
	func_147(&(Global_40.f_9045));
	func_148(&(Global_40.f_12000));
	func_149(&(Global_40.f_12003));
	func_150(&(Global_40.f_12004));
	func_151(&(Global_40.f_12019));
	SAVE::_0xBB7F4273C186BC4B(&Global_40, "bGameInitialized");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_1), "bInGameflow");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_9421), "bUsedFirstPerson");
	func_152(&(Global_40.f_2), "vLastCampPosition");
	SAVE::_0x35DEFECAE36D4FAE(&(Global_40.f_5), "fLastCampHeading");
	func_152(&(Global_40.f_6), "vCurrentCaravanBedPosition");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7854), "minigameUnlocked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7855), "jobUnlocked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7856), "procmissionUnlocked");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_7729), "wornOutfit");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_39), "playerCharacterModel");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_449), "lawBountyAchievement");
	SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_1093), "eRCMIndexTracked");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_1094), "iRCMsActive");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7755), "deadeyeLevel");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_11953), "bAttackedBurial");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11954), "iMickeyMemory");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11955), "iStudiedAnimalsNoBinoculars");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11956), "iLastPayoffTutorialMessage");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11957), "iSavedBounty");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_7730), "bHatKnockedOff");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_9273), "iHerbArrLocation");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11958), "iSPMinigameAchievementTracker");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_11999), "iSPChecksum");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_7860), "bEndlessSummerInitialized");
	SAVE::_0x529B9CCD0972AF4D(&(Global_40.f_7861), "iMoneyBeforeGuarma");
	StringCopy(&cVar0, "specialWildHorse", 64);
	SAVE::_0x81F4E92BE3958364(&(Global_40.f_11945), 8, &cVar0);
	iVar16 = 0;
	while (iVar16 < Global_40.f_11945)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(Global_40.f_11945[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_12017), "bPhotoModeToastDelivered");
	SAVE::_0xBB7F4273C186BC4B(&(Global_40.f_12018), "bFlacoCabinCigBoxLooted");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedDeeds";
	SAVE::_0x9BB83C4DD7BE0802(&Global_12106, 5398, 1, sLocal_0, 1);
	func_153(&Global_12106);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedBeats";
	SAVE::_0x9BB83C4DD7BE0802(&Global_17504, 3206, 1, sLocal_0, 1);
	func_154(&Global_17504);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedShops";
	SAVE::_0x9BB83C4DD7BE0802(&Global_20710, 2408, 1, sLocal_0, 1);
	func_155(&Global_20710);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegions";
	SAVE::_0x9BB83C4DD7BE0802(&Global_23118, 1769, 1, sLocal_0, 3);
	func_156(&Global_23118);
	func_157(&(Global_23118.f_1651));
	SAVE::_0x529B9CCD0972AF4D(&(Global_23118.f_1768), "g_savedGlobalsRegions.iInnocentsKilled");
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedRegionalCharacters";
	SAVE::_0x9BB83C4DD7BE0802(&Global_24887, 1909, 1, sLocal_0, 1);
	func_158(&Global_24887);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedPlayerOutfits";
	SAVE::_0x9BB83C4DD7BE0802(&Global_26796, 777, 1, sLocal_0, 1);
	func_159(&Global_26796);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedHerbs";
	SAVE::_0x9BB83C4DD7BE0802(&Global_27573, 4501, 1, sLocal_0, 1);
	func_160(&Global_27573);
	SAVE::_0xE8346E62FD7FB962();
	sLocal_0 = "SavedVignettes";
	SAVE::_0x9BB83C4DD7BE0802(&Global_32074, 4234, 1, sLocal_0, 2);
	func_161(&Global_32074);
	func_162(&(Global_32074.f_2697));
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(1);
}

void func_38()
{
	sLocal_0 = "startup";
	SAVE::_0xED4B0C1057892B2E(&Global_36638, 1466, 0, sLocal_0);
	func_120(&Global_36638, "g_mpSavedGlobals.herbs", 0);
	func_163(&(Global_36638.f_45), "g_mpSavedGlobals.sPersona");
	func_101(&(Global_36638.f_1444), "g_mpSavedGlobals.eTutorialsRun", 0);
	SAVE::_0xE8346E62FD7FB962();
	SAVE::_0xC0ABF784590798A9(0);
}

void func_39()
{
	SCRIPTS::REQUEST_SCRIPT(func_83(2));
	SCRIPTS::REQUEST_SCRIPT(func_83(3));
	SCRIPTS::REQUEST_SCRIPT(func_83(4));
	func_164();
}

bool func_40(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return true;
	}
	return false;
}

bool func_41(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_165(iParam0, 1))
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, false);
				SCRIPTS::REQUEST_SCRIPT(func_166(iParam0));
				func_167(uParam1, 1, iParam0);
			}
			else
			{
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_166(iParam0)))
			{
				SCRIPTS::START_NEW_SCRIPT(func_166(iParam0), 128);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_166(iParam0));
				func_167(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(func_166(iParam0))) == 0)
			{
				MISC::_SET_GLOBAL_BLOCK_IS_LOADED(iParam0, true);
				func_167(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_42()
{
	char cVar0[32];

	DECORATOR::DECOR_REGISTER("outfitChanged", 2);
	DECORATOR::DECOR_REGISTER("playerChangeOutfits", 2);
	DECORATOR::DECOR_REGISTER("HorseHitchRope", 3);
	DECORATOR::DECOR_REGISTER("Whistling", 2);
	DECORATOR::DECOR_REGISTER("Inspecting_Item", 2);
	DECORATOR::DECOR_REGISTER("JustSavedAtBed", 2);
	DECORATOR::DECOR_REGISTER("CookingMeat", 2);
	DECORATOR::DECOR_REGISTER("build_success", 2);
	DECORATOR::DECOR_REGISTER("RWARV_Dominoes", 2);
	DECORATOR::DECOR_REGISTER("Fishing_LaunchNow", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Asked", 2);
	DECORATOR::DECOR_REGISTER("RKTTY_Wagon", 2);
	DECORATOR::DECOR_REGISTER("iDamageFrame", 3);
	DECORATOR::DECOR_REGISTER("bIgnoreDamageChecking", 2);
	DECORATOR::DECOR_REGISTER("rev_comment", 2);
	DECORATOR::DECOR_REGISTER("camp_attacker", 2);
	DECORATOR::DECOR_REGISTER("HorseGender", 3);
	DECORATOR::DECOR_REGISTER("HorseCamp", 2);
	DECORATOR::DECOR_REGISTER("HorseCompanion", 2);
	DECORATOR::DECOR_REGISTER("CaravanCommonHorse", 2);
	DECORATOR::DECOR_REGISTER("CaravanLivestock", 2);
	DECORATOR::DECOR_REGISTER("StableOwnedHorse", 3);
	DECORATOR::DECOR_REGISTER("HorseMission", 2);
	DECORATOR::DECOR_REGISTER("bHorseHasBeenStolen", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenLassoedFromHorse", 2);
	DECORATOR::DECOR_REGISTER("bHasBeenTrampledByHorse", 2);
	DECORATOR::DECOR_REGISTER("companion_manager_msg", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_command", 3);
	DECORATOR::DECOR_REGISTER("companion_manager_watch_mode", 3);
	DECORATOR::DECOR_REGISTER("outfit_tags", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request", 3);
	DECORATOR::DECOR_REGISTER("metaped_outfit_request_name", 3);
	DECORATOR::DECOR_REGISTER("chinLong", 3);
	DECORATOR::DECOR_REGISTER("chopsLong", 3);
	DECORATOR::DECOR_REGISTER("stacheLong", 3);
	DECORATOR::DECOR_REGISTER("chinShort", 3);
	DECORATOR::DECOR_REGISTER("chopsShort", 3);
	DECORATOR::DECOR_REGISTER("stacheShort", 3);
	DECORATOR::DECOR_REGISTER("hairLong", 3);
	DECORATOR::DECOR_REGISTER("hairShort", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRevolverWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newPistolWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newShotgunWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponType", 3);
	DECORATOR::DECOR_REGISTER("player_newRifleWeaponTime", 3);
	DECORATOR::DECOR_REGISTER("chest_open", 2);
	DECORATOR::DECOR_REGISTER("loot_money", 3);
	DECORATOR::DECOR_REGISTER("fLoot_money", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model1", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient1z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_type2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_amt2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_model2", 3);
	DECORATOR::DECOR_REGISTER("loot_item_offset2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_offset2z", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2x", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2y", 1);
	DECORATOR::DECOR_REGISTER("loot_item_orient2z", 1);
	DECORATOR::DECOR_REGISTER("loot_ammo1_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo1_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo2_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_type", 3);
	DECORATOR::DECOR_REGISTER("loot_ammo3_amt", 3);
	DECORATOR::DECOR_REGISTER("loot_weapon", 3);
	DECORATOR::DECOR_REGISTER("loot_empty", 2);
	DECORATOR::DECOR_REGISTER("lootable_interior", 3);
	DECORATOR::DECOR_REGISTER("scripted_loot_only", 2);
	DECORATOR::DECOR_REGISTER("got_loot", 2);
	DECORATOR::DECOR_REGISTER("ransack", 2);
	DECORATOR::DECOR_REGISTER("loot_long_custom_anim_data_set", 4);
	DECORATOR::DECOR_REGISTER("letter_item", 3);
	DECORATOR::DECOR_REGISTER("loot_allow_random", 2);
	DECORATOR::DECOR_REGISTER("bLostLogs", 2);
	DECORATOR::DECOR_REGISTER("bNoticePlayer", 2);
	DECORATOR::DECOR_REGISTER("bIgnoreThisPed", 2);
	DECORATOR::DECOR_REGISTER("bPedAlreadyCounted", 2);
	DECORATOR::DECOR_REGISTER("bCowering", 2);
	DECORATOR::DECOR_REGISTER("bChopDown", 2);
	DECORATOR::DECOR_REGISTER("bGPSEnabled", 2);
	DECORATOR::DECOR_REGISTER("interactNeg", 3);
	DECORATOR::DECOR_REGISTER("bOnBreak", 2);
	DECORATOR::DECOR_REGISTER("bScriptedILO", 2);
	DECORATOR::DECOR_REGISTER("bAmbientCoachLooted", 2);
	DECORATOR::DECOR_REGISTER("ValuableCoach", 2);
	DECORATOR::DECOR_REGISTER("Herd_Panicked_Member", 2);
	DECORATOR::DECOR_REGISTER("honor_block", 3);
	DECORATOR::DECOR_REGISTER("honor_bank", 3);
	DECORATOR::DECOR_REGISTER("honor_override", 3);
	DECORATOR::DECOR_REGISTER("not_enemy", 2);
	DECORATOR::DECOR_REGISTER("bleed_start_time", 3);
	DECORATOR::DECOR_REGISTER("instigated_by_player", 2);
	DECORATOR::DECOR_REGISTER("wagon_block_honor", 2);
	DECORATOR::DECOR_REGISTER("lose_honor_steal_vehicle", 2);
	DECORATOR::DECOR_REGISTER("player_greeted", 2);
	DECORATOR::DECOR_REGISTER("player_antagonized", 2);
	DECORATOR::DECOR_REGISTER("was_antagonized", 2);
	DECORATOR::DECOR_REGISTER("injured_woman", 2);
	DECORATOR::DECOR_REGISTER("recently_punched", 2);
	DECORATOR::DECOR_REGISTER("was_hurt", 2);
	StringCopy(&cVar0, func_168(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_169(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_170(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_171(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	StringCopy(&cVar0, func_172(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 1);
	MemCopy(&cVar0, {func_173()}, 4);
	DECORATOR::DECOR_REGISTER(&cVar0, 3);
	DECORATOR::DECOR_REGISTER("pedRoam_bInPedRoam", 2);
	DECORATOR::DECOR_REGISTER("pedRoam_targetRegion", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_state", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_behavior", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_target", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_targetCoord_Z", 1);
	DECORATOR::DECOR_REGISTER("pedRoam_targetArea", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_hashKey", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_owner", 3);
	DECORATOR::DECOR_REGISTER("pedRoam_flags", 3);
	DECORATOR::DECOR_REGISTER("register_open", 2);
	DECORATOR::DECOR_REGISTER("register_open_rdy", 2);
	DECORATOR::DECOR_REGISTER("camera_takingPic", 2);
	DECORATOR::DECOR_REGISTER("wearing_bandana", 2);
	DECORATOR::DECOR_REGISTER("temp_HorseBroken", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_beauHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_bnp_PenelopeHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_elz1_elizaHogtie", 2);
	DECORATOR::DECOR_REGISTER("rcm_SerialKiller_hogtie", 2);
	DECORATOR::DECOR_REGISTER("proc_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_played", 2);
	DECORATOR::DECOR_REGISTER("rcm_f_acc_passed", 2);
	DECORATOR::DECOR_REGISTER("rcm_lakay_bounty_target", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Knowing", 2);
	DECORATOR::DECOR_REGISTER("LoanShark_Questioned", 2);
	StringCopy(&cVar0, func_174(), 32);
	DECORATOR::DECOR_REGISTER(&cVar0, 2);
	DECORATOR::DECOR_REGISTER("player_crafting_active", 2);
	DECORATOR::DECOR_REGISTER("player_whittling_active", 2);
	DECORATOR::DECOR_REGISTER("bShowIsReady", 2);
	DECORATOR::DECOR_REGISTER("bShowIsPaidFor", 2);
	DECORATOR::DECOR_REGISTER("bUpdatedPlayer", 2);
	DECORATOR::DECOR_REGISTER("Global_Object_Unique_ID", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_PackedDeed", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_Value", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpStart", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_ExpDuration", 3);
	DECORATOR::DECOR_REGISTER("Global_Object_No_Blip", 2);
	DECORATOR::_DECOR_REGISTER_2(func_175(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_176(), 6, true);
	DECORATOR::_DECOR_REGISTER_2(func_177(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_178(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_179(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_180(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_181(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_182(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_183(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_184(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_185(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("bFmeBaseHasWeapon", 2, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameHash", 3, true);
	DECORATOR::_DECOR_REGISTER_2("iMinigameSeat", 3, true);
	DECORATOR::DECOR_REGISTER("bBeatPed", 2);
	DECORATOR::DECOR_REGISTER("bIgnoreLawMissionEntity", 2);
	DECORATOR::DECOR_REGISTER("Has_Voice", 2);
	DECORATOR::DECOR_REGISTER("bUnarmed", 2);
	DECORATOR::DECOR_REGISTER("RANSACK", 2);
	DECORATOR::DECOR_REGISTER("bIsCriminal", 2);
	DECORATOR::DECOR_REGISTER("bDeadOrAlive", 2);
	DECORATOR::DECOR_REGISTER("bReacted_To_Shocking_Event", 2);
	DECORATOR::DECOR_REGISTER("REDJ_Witness_Time", 1);
	DECORATOR::DECOR_REGISTER("SafeOpened", 2);
	DECORATOR::DECOR_REGISTER("TargetHit", 2);
	DECORATOR::DECOR_REGISTER("bBeatCriminal", 2);
	DECORATOR::DECOR_REGISTER("bIsSpecialPed", 2);
	DECORATOR::DECOR_REGISTER("iSpecialPedID", 3);
	DECORATOR::DECOR_REGISTER("bPickupThisCorpse", 2);
	DECORATOR::DECOR_REGISTER("last_gun_damage_time_in_ms", 3);
	DECORATOR::DECOR_REGISTER("grapple_start_time", 3);
	DECORATOR::DECOR_REGISTER("grapple_tutorial_played", 2);
	DECORATOR::DECOR_REGISTER("worn_tutorial", 2);
	DECORATOR::DECOR_REGISTER("propsetName", 4);
	DECORATOR::DECOR_REGISTER("witnessCannotBeBribedOrThreatened", 2);
	DECORATOR::_DECOR_REGISTER_2("MP_HUD_Bits", 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_186(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_187(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_188(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_189(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_190(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_191(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_192(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_193(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_194(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_195(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_196(), 2, true);
	DECORATOR::DECOR_REGISTER("MC_EntityID", 3);
	DECORATOR::DECOR_REGISTER("MC_ChasePedID", 3);
	DECORATOR::_DECOR_REGISTER_2("iCampFollowerCamp", 3, true);
	DECORATOR::DECOR_REGISTER("Camp_Defender_Mount_Location", 3);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Bluegill", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_BullheadCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChainPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_ChannelCatfish", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LakeSturgeon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LargemouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_LongnoseGar", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Muskie", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_NorthernPike", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_Perch", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RedfinPickerel", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_RockBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SmallmouthBass", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SockeyeSalmon", 1, true);
	DECORATOR::_DECOR_REGISTER_2("Fish_Attractor_SteelheadTrout", 1, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Lives", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Time", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Laps", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Rounds", 3, true);
	DECORATOR::_DECOR_REGISTER_2("FFF_Seated", 2, true);
	DECORATOR::_DECOR_REGISTER_2("PedSeatedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2("MinigameObject", 2, true);
	DECORATOR::_DECOR_REGISTER_2("DontGrabThisPedForMinigame", 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_197(), 2, true);
	DECORATOR::_DECOR_REGISTER_2(func_198(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_199(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_200(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_201(), 3, true);
	DECORATOR::_DECOR_REGISTER_2("NetHorseFence_Sold", 2, true);
	DECORATOR::DECOR_REGISTER("wagonFenceValue", 3);
	DECORATOR::DECOR_REGISTER("ItemSetScriptIndex", 3);
	DECORATOR::DECOR_REGISTER("HorseTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamA", 2);
	DECORATOR::DECOR_REGISTER("HorseTeamB", 2);
	DECORATOR::DECOR_REGISTER("HorseOwnerTeamB", 2);
	DECORATOR::DECOR_REGISTER("HorseScriptCreator", 3);
	DECORATOR::DECOR_REGISTER("UsesTracker", 2);
	DECORATOR::DECOR_REGISTER("bValidRobber", 2);
	DECORATOR::DECOR_REGISTER("STORY_COOP_PED_ID", 3);
	DECORATOR::_DECOR_REGISTER_2(func_202(), 3, true);
	DECORATOR::_DECOR_REGISTER_2(func_203(), 6, true);
	DECORATOR::_DECOR_REGISTER_2("fast_travel_camp_barker", 3, true);
}

void func_43()
{
	func_204();
	func_205();
	func_206();
}

void func_44()
{
	STREAMING::_0xDEEE1F265B7ECEF5();
}

int func_45(var uParam0)
{
	switch (func_7(uParam0))
	{
		case 0:
			if (func_207(uParam0))
			{
				uParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				uParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_81, "TooltipText", "");
				uParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_81, "isVisible", true);
				func_208(uParam0, 1);
				func_209(uParam0, 1);
			}
			else
			{
				func_209(uParam0, 3);
			}
			break;
		case 1:
			uParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_82, &(uParam0->f_5[uParam0->f_78 /*7*/]));
			func_209(uParam0, 2);
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_77 + uParam0->f_5[uParam0->f_78 /*7*/].f_5))
			{
				uParam0->f_78++;
				if (uParam0->f_78 < 10)
				{
					func_209(uParam0, 1);
				}
				else
				{
					func_209(uParam0, 3);
				}
			}
			break;
		case 3:
			func_47(uParam0);
			return 1;
	}
	return 0;
}

bool func_46(var uParam0)
{
	return uParam0->f_80;
}

void func_47(var uParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_81))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_81);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_82);
	}
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(*uParam0))
	{
		DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	}
	func_208(uParam0, 0);
}

int func_48()
{
	return Global_1572887.f_12;
}

var func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_50(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_51()
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-792505136))
	{
		QUEUE::_EVENT_QUEUE_POP(-792505136);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	if (func_210() || func_211())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			func_212(&(uParam0->f_1), 0);
		}
		else if (func_213(&(uParam0->f_1)))
		{
			func_50(&(uParam0->f_1));
		}
	}
	if (!bVar1 && func_213(&(uParam0->f_1)))
	{
		if (func_214(&(uParam0->f_1)) >= 0.5f)
		{
			func_50(&(uParam0->f_1));
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iVar0, 4);
		if (LAW::_GET_WANTED_INTENSITY_FOR_PLAYER(PLAYER::PLAYER_ID()) > 0)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	func_215(iVar0);
}

void func_53()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		func_216(SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_54()
{
	switch (Global_1572887.f_94.f_51)
	{
		case 0:
			func_217();
			break;
		case 1:
			func_218();
			break;
		case 2:
			func_219();
			break;
		case 3:
			func_220();
			break;
	}
}

void func_55()
{
	if (Global_1572887.f_94.f_49 == 0)
	{
		return;
	}
	switch (Global_1572887.f_94.f_49)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
			{
				func_221("NET_SESSION_INV_HEADER", "NT_INV_EXTENDED_PC", joaat("BLIPS"), joaat("BLIP_MP_PLAYLIST_TEAMGAME"), -2, 0, 0, 0, 0, 1, 1);
				func_222(4);
			}
			else
			{
				func_222(2);
			}
			break;
		case 2:
			func_223();
			func_222(3);
			break;
		case 3:
			if (func_224() == 0)
			{
				return;
			}
			func_222(4);
			break;
		case 4:
			func_222(0);
			break;
	}
}

void func_56()
{
	if (func_16(4))
	{
		func_225();
	}
	switch (Global_1572887.f_94)
	{
		case 0:
			break;
		case 1:
			func_226();
			break;
		case 2:
			func_227();
			break;
		case 4:
			func_228();
			break;
		case 6:
			func_229();
			break;
		case 3:
			func_230();
			break;
		case 5:
			func_231();
			break;
		case 8:
			func_232();
			break;
		case 9:
			func_233();
			break;
		case 10:
			func_234();
			break;
		case 11:
			func_235();
			break;
		case 12:
			func_236();
			break;
		case 13:
			func_237();
			break;
		case 14:
			func_238();
			break;
		case 16:
			func_239();
			break;
		case 17:
			func_240();
			break;
	}
}

void func_57(int iParam0)
{
	Global_1899245 = iParam0;
}

bool func_58()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1 /*38*/] != 0)
		{
			Global_1899245.f_132 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_59(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_60(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_241(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_59(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_59(uParam0);
		return true;
	}
	return false;
}

void func_61()
{
	int iVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_58())
		{
			func_62();
		}
		return;
	}
	if (Global_1899245.f_132 >= 20 || Global_1899245.f_132 < 0)
	{
		return;
	}
	iVar0 = Global_1899245.f_132;
	if (func_242(Global_1898441[iVar0 /*38*/]))
	{
		func_243(iVar0);
		Global_1898441[iVar0 /*38*/] = 0;
	}
	if (func_244(Global_1898441[iVar0 /*38*/]))
	{
		Global_1898441[iVar0 /*38*/] = 0;
	}
	switch (Global_1898441[iVar0 /*38*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
			func_245(Global_1898441[iVar0 /*38*/], iVar0, 1);
			break;
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
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			func_245(Global_1898441[iVar0 /*38*/], iVar0, 0);
			break;
	}
	Global_1899245.f_132++;
	if (Global_1899245.f_132 == 42)
	{
		Global_1899245.f_132 = 0;
	}
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_243(iVar0);
		iVar0++;
	}
	func_59(&(Global_1899245.f_1));
}

void func_63(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

char* func_64(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case joaat("SHIFT_F"):
			sVar0 = "shift_f";
			break;
		case joaat("DEMO"):
			sVar0 = "demo";
			break;
		case joaat("INTRO_NOT_DONE"):
			sVar0 = "intro_not_done";
			break;
		case joaat("PRIVATE"):
			sVar0 = "private";
			break;
		case joaat("FRIENDLY"):
			sVar0 = "friendly";
			break;
		case joaat("HARDCORE"):
			sVar0 = "hardcore";
			break;
		case joaat("NEAR_POSSE"):
			sVar0 = "near_posse";
			break;
		case joaat("RANDOM_POSSE"):
			sVar0 = "random_posse";
			break;
		case joaat("OPEN_POSSE"):
			sVar0 = "open_posse";
			break;
		case joaat("FOLLOW_INVITE"):
			sVar0 = "follow_invite";
			break;
		case joaat("RANDOM_REGION"):
			sVar0 = "random_region";
			break;
		case joaat("LAST_REGION"):
			sVar0 = "last_region";
			break;
		case joaat("SPAWN_LOCATION"):
			sVar0 = "spawn_location";
			break;
		case joaat("LAST_LOCATION"):
			sVar0 = "last_location";
			break;
		case joaat("CAMP"):
			sVar0 = "camp";
			break;
		case joaat("HANDHELD"):
			sVar0 = "handheld";
			break;
		case joaat("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

void func_65(int iParam0, int iParam1)
{
	Global_1572887.f_182 = iParam0;
	Global_1572887.f_182.f_1 = iParam1;
	func_246(28);
}

void func_66()
{
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	if (func_67() != 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

int func_67()
{
	return Local_15;
}

void func_68()
{
	Global_1572887.f_182.f_1 = 0;
}

void func_69(int iParam0)
{
	NETWORK::_0x704F92B3AF20D857(iParam0);
}

void func_70()
{
	struct<19> /*152*/ sVar0;

	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_152)))
	{
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_152));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887.f_152 = { Var0 };
}

void func_71()
{
	func_247();
	func_248(-1);
	func_249(0);
	Global_1572887.f_94.f_41 = 0;
	if (Global_1572887.f_94.f_53 == 2)
	{
		Global_1572887.f_94.f_53 = 0;
	}
}

void func_72(int iParam0)
{
	Global_1572887.f_94.f_44 = iParam0;
}

void func_73()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_74(int iParam0)
{
	Global_1572887.f_12 = iParam0;
}

void func_75(int iParam0)
{
	Local_15 = iParam0;
	Local_15.f_1 = MISC::GET_GAME_TIMER();
}

bool func_76()
{
	bool bVar0;
	vector3 vVar1;

	if (func_250())
	{
		return false;
	}
	bVar0 = false;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("LANDING_PAGE")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("LANDING_PAGE"), &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.z == -490822059)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
						func_251(joaat("SINGLE_PLAYER"));
						bVar0 = true;
					}
					else if (vVar1.z == 2143694500)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						bVar0 = true;
					}
					else if (vVar1.z == 367452774)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						bVar0 = true;
					}
					else if (vVar1.z == 1317995259)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						func_251(joaat("FREEROAM"));
						func_252(joaat("INTRO_NOT_DONE"));
						bVar0 = true;
					}
					else if (vVar1.z == 425390024)
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
					}
					else if (vVar1.z == 446331713)
					{
						NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(true);
					}
					else if (vVar1.z == 505720336)
					{
						if (func_34() == 2)
						{
							Global_43893 = 1;
							func_63(128);
							NETWORK::_CLEAR_LAUNCH_PARAM(func_64(joaat("BENCHMARK")));
						}
						else
						{
							func_251(joaat("BENCHMARK"));
							bVar0 = true;
						}
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("LANDING_PAGE"));
	}
	if (!bVar0)
	{
		if (((SCRIPTS::IS_LOADING_SCREEN_VISIBLE() && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("LANDING_PAGE"))) && !NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("MODE")))) && (MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 0 || MISC::_GAME_FRAMEWORK_MANAGER_GET_MODE() == 2101404901))
		{
			if (!func_213(&(Local_15.f_3)))
			{
				func_212(&(Local_15.f_3), 0);
			}
			else if (func_214(&(Local_15.f_3)) >= 15f)
			{
				SCRIPTS::BAIL_TO_LANDING_PAGE(0);
			}
		}
		else if (func_213(&(Local_15.f_3)))
		{
			func_50(&(Local_15.f_3));
		}
	}
	return bVar0;
}

bool func_77()
{
	return func_254() > 120000;
}

bool func_78()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("MODE"))))
	{
		if (func_80() == 0)
		{
			func_251(joaat("SINGLE_PLAYER"));
			func_246(28);
			return true;
		}
		else
		{
			func_246(28);
			return true;
		}
	}
	func_255(&(Global_1572887.f_182));
	sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("MODE")));
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (iVar1 != 0)
	{
		func_251(iVar1);
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("REGION_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("REGION_ID")));
		Global_1572887.f_182.f_3 = func_256(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("DISTRICT_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("DISTRICT_ID")));
		Global_1572887.f_182.f_4 = func_257(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("STATE_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("STATE_ID")));
		Global_1572887.f_182.f_5 = func_258(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("MINIGAME_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("MINIGAME_ID")));
		Global_1572887.f_182.f_7 = func_259(MISC::GET_HASH_KEY(sVar0));
		Global_1572887.f_182.f_6 = -1;
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("SERIES_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("SERIES_ID")));
		Global_1572887.f_182.f_2 = func_260(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("MISSION_ID"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("MISSION_ID")));
		Global_1572887.f_182.f_8 = MISC::GET_HASH_KEY(sVar0);
	}
	Global_1572887.f_182.f_9 = 0;
	if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(joaat("CHAR_SLOT"))))
	{
		sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(joaat("CHAR_SLOT")));
		if (MISC::STRING_TO_INT(sVar0, &(Global_1572887.f_182.f_9)))
		{
		}
	}
	iVar2 = joaat("ARG_0");
	iVar4 = 0;
	iVar5 = joaat("ARG_0");
	iVar4 = 0;
	while (iVar4 <= 15)
	{
		iVar2 = (iVar5 + iVar4);
		if (NETWORK::_GET_LAUNCH_PARAM_EXISTS(func_253(iVar2)))
		{
			sVar0 = NETWORK::_GET_LAUNCH_PARAM_VALUE(func_253(iVar2));
			iVar3 = MISC::GET_HASH_KEY(sVar0);
			if (iVar3 != 0)
			{
				func_252(iVar3);
			}
		}
		iVar4++;
	}
	func_246(28);
	return true;
}

void func_79()
{
	switch (func_80())
	{
		case joaat("SINGLE_PLAYER"):
			Local_15.f_2 = 2;
			break;
		case joaat("BENCHMARK"):
			Local_15.f_2 = 2;
			NETWORK::_SET_LAUNCH_PARAM_VALUE(func_64(joaat("BENCHMARK")), "1");
			break;
		case joaat("FREEROAM"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("GOLDSTORE"):
			break;
		case joaat("SERIES"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("MISSION"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("MINIGAME"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("MISSION_CREATOR"):
			if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
			{
				Local_15.f_2 = 1;
				func_63(4);
				if (func_81(joaat("FOLLOW_INVITE")) || NETWORK::NETWORK_IS_PLATFORM_INVITE_PENDING())
				{
					NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
				}
			}
			else
			{
				Local_15.f_2 = 3;
				func_63(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("CLIP"):
			Local_15.f_2 = 4;
			func_63(4);
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

int func_80()
{
	return Global_1572887.f_182;
}

bool func_81(int iParam0)
{
	return func_262(Global_1572887.f_182.f_1, func_261(iParam0));
}

void func_82(int iParam0)
{
	Global_1572887.f_13 = iParam0;
}

char* func_83(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_84(int iParam0)
{
	Global_1572864 = iParam0;
}

bool func_85(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

void func_86(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
		case 3:
			AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 4:
			AUDIO::_0xAC84686C06184B0D("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_87()
{
	char cVar0[64];
	char cVar8[64];
	struct<8> /*64*/ sVar16[10];
	int iVar97;
	int iVar98;
	int iVar99;
	char cVar100[64];
	char cVar108[64];
	char cVar116[64];
	char cVar124[64];
	char cVar132[64];
	char cVar140[64];

	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_263(func_80()), 64);
	StringCopy(&cVar8, "-char_slot=", 64);
	StringIntConCat(&cVar8, Global_1572887.f_182.f_9, 64);
	switch (func_80())
	{
		case joaat("BENCHMARK"):
		case joaat("SINGLE_PLAYER"):
			return MISC::VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
		case joaat("FREEROAM"):
			iVar98 = 0;
			iVar99 = 0;
			iVar98 = 0;
			while (iVar98 <= 15)
			{
				iVar97 = func_264(iVar98);
				if (func_81(iVar97) && iVar99 < 10)
				{
					StringCopy(&(Var16[iVar99 /*8*/]), "-arg_", 64);
					StringIntConCat(&(Var16[iVar99 /*8*/]), iVar99, 64);
					StringConCat(&(Var16[iVar99 /*8*/]), "=", 64);
					StringConCat(&(Var16[iVar99 /*8*/]), func_64(iVar97), 64);
					iVar99++;
				}
				iVar98++;
			}
			if (Global_1572887.f_182.f_3 != -1)
			{
				StringCopy(&cVar100, "-region_id=", 64);
				StringConCat(&cVar100, func_265(Global_1572887.f_182.f_3), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar100, &(Var16[0 /*8*/]), &(Var16[1 /*8*/]), &(Var16[2 /*8*/]), &(Var16[3 /*8*/]), &(Var16[4 /*8*/]));
			}
			else if (Global_1572887.f_182.f_4 != -1)
			{
				StringCopy(&cVar108, "-district_id=", 64);
				StringConCat(&cVar108, func_266(Global_1572887.f_182.f_4), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar108, &(Var16[0 /*8*/]), &(Var16[1 /*8*/]), &(Var16[2 /*8*/]), &(Var16[3 /*8*/]), &(Var16[4 /*8*/]));
			}
			else if (Global_1572887.f_182.f_5 != -1)
			{
				StringCopy(&cVar116, "-state_id=", 64);
				StringConCat(&cVar116, func_267(Global_1572887.f_182.f_5), 64);
				return MISC::VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar116, &(Var16[0 /*8*/]), &(Var16[1 /*8*/]), &(Var16[2 /*8*/]), &(Var16[3 /*8*/]), &(Var16[4 /*8*/]));
			}
			else
			{
				return MISC::VAR_STRING(43690, "LAUNCH_PARAMS", &cVar0, &cVar8, &(Var16[0 /*8*/]), &(Var16[1 /*8*/]), &(Var16[2 /*8*/]), &(Var16[3 /*8*/]), &(Var16[4 /*8*/]));
			}
			break;
		case joaat("GOLDSTORE"):
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
		case joaat("SERIES"):
			StringCopy(&cVar124, "-series_id=", 64);
			StringConCat(&cVar124, func_268(Global_1572887.f_182.f_2), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar124);
		case joaat("MISSION"):
			StringCopy(&cVar132, "-mission_id=", 64);
			StringConCat(&cVar132, "", 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar132);
		case joaat("MINIGAME"):
			StringCopy(&cVar140, "-minigame_id=", 64);
			StringConCat(&cVar140, func_269(Global_1572887.f_182.f_7), 64);
			return MISC::VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar140);
		case joaat("MISSION_CREATOR"):
			return MISC::VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
	}
	return "";
}

void func_88()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(1);
}

void func_89()
{
}

void func_90()
{
	BRAIN::DISABLE_SCRIPT_BRAIN_SET(2);
}

void func_91(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 30, "saveGameData", 20);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "saveGameData.saveGameLocation");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "saveGameData.iSaveGamePropset");
	func_152(&(uParam0->f_2), "saveGameData.vSaveGamePropsetPosition");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_5), "saveGameData.fSaveGamePropsetHeading");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), "saveGameData.iSaveGameScenarioHash");
	func_152(&(uParam0->f_7), "saveGameData.vResetPosition");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_10), "saveGameData.iResetRespawnNode");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_11), "saveGameData.iResetAnimIndex");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_12), "saveGameData.bForceAltAnim");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_13), "saveGameData.fResetHeading");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_14), "saveGameData.eSavedTOD");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_15), "saveGameData.respawnRegion");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_20), "saveGameData.iResetBounty");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_16), 4, "saveGameData.iRespawnPosHistory");
	iVar0 = 0;
	while (iVar0 < uParam0->f_16)
	{
		StringCopy(&cVar1, "saveGameData.iRespawnPosHistory", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_16[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_21), 9, "saveGameData.missionReplayData");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), "saveGameData.missionReplayData.iBitStorage");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_21.f_1), 5, "saveGameData.missionReplayData.iGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_1)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.iGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21.f_1[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_21.f_6), 3, "saveGameData.missionReplayData.fGeneralStorage");
	iVar0 = 0;
	while (iVar0 < uParam0->f_21.f_6)
	{
		StringCopy(&cVar1, "saveGameData.missionReplayData.fGeneralStorage", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_21.f_6[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_92(var uParam0, char* sParam1, int iParam2)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 243, "flow");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "flow.isGameflowActive");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), "flow.flowCompleted");
	func_270(&(uParam0->f_2));
	func_271(&(uParam0->f_131));
	SAVE::_0xE0B45E983BFC0768();
}

void func_93(var uParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "playerHorse", 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCurrentStableSlot", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 3142, &cVar0);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	func_272(&(uParam0->f_1));
	func_273(&(uParam0->f_3054));
	func_274(&(uParam0->f_3134));
	func_275(&(uParam0->f_3135));
	func_276(&(uParam0->f_3140));
	SAVE::_0xE0B45E983BFC0768();
}

void func_94(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 1081, "postOfficeData");
	StringCopy(&cVar1, "postOfficeData.trackedParcels", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1081, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*6*/], 6, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailSendFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*6*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eMailReplyFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*6*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eSentTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*6*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eDeliveryTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*6*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTrackedParcel", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*6*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bOverrideDeliveryTime", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*6*/])->f_5), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_95(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	struct<8> /*64*/ sVar16;
	int iVar24;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 659, "caravanCamp", 39);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "caravanCamp.eCurrentCamp");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "caravanCamp.eCurrentCampRegion");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "caravanCamp.eCampFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "caravanCamp.eCampAppearance");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "caravanCamp.eCampSetupState");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "caravanCamp.eCampSubstate");
	StringCopy(&cVar0, "caravancamp.activeCampStateTags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 301, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar24 /*5*/]), 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eTag", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar24 /*5*/]), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar24 /*5*/].f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".ePersistence", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar24 /*5*/].f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPriority", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar24 /*5*/].f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eCategory", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar24 /*5*/].f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_307), 5, "caravanCamp.sPearsonUnlocks");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307), "caravanCamp.sPearsonUnlocks.iUnlockedBitset");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_1), "caravanCamp.sPearsonUnlocks.iItemsCrafted");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_2), "caravanCamp.sPearsonUnlocks.iAnimalsDonated");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_3), "caravanCamp.sPearsonUnlocks.iCentsDonated");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_307.f_4), "caravanCamp.sPearsonUnlocks.iTrinkedDonated");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_312), "caravanCamp.iCampLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_313), "caravanCamp.iCampChickenCoopLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_314), "caravanCamp.iCampVehicleLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_315), "caravanCamp.iCampToolsLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_316), "caravanCamp.iCampCraftingFireLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_317), "caravanCamp.iCampShavingKitLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_318), "caravanCamp.iCampPearsonLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_319), "caravanCamp.iCampStraussLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_320), "caravanCamp.iCampArthurLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_321), "caravanCamp.iCampTentLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_322), "caravanCamp.iCampHitchLevel");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_323), "caravanCamp.iNumInnocentsKilled");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_324), "caravanCamp.iCampFundsCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_325), "caravanCamp.iGangSavingsCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_326), "caravanCamp.iBankDebtCents");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_327), "caravanCamp.iCarcassesDonated");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_328), "caravanCamp.todCampSupplyDecrement");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_329), "caravanCamp.todCampFoodDecrement");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_330), "caravanCamp.todNextPlayerStewServe");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_331), "caravanCamp.todNextCompanionDonation");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_332), 3, "caravanCamp.eLastDonationCompanions");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_332[0]), "caravanCamp.eLastDonationCompanions0");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_332[1]), "caravanCamp.eLastDonationCompanions1");
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "caravancamp.eCheckinState", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_335), 32, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_335)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_335[iVar24]), &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "caravanCamp.caravanPurchaseList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_367), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_367)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_367[iVar24 /*4*/]), 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eGlobalItemIdx", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_367[iVar24 /*4*/]), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_367[iVar24 /*4*/].f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iPurchaseCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_367[iVar24 /*4*/].f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".eShopPurchasedFrom", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_367[iVar24 /*4*/].f_3), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_408), 7, "caravanCamp.sCaravanChoreData");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408), "caravanCamp.sCaravanChoreData.iChoresCompletedBitMask");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_408.f_1), "caravanCamp.sCaravanChoreData.todLastChoreCompleted");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_408.f_2), "caravanCamp.sCaravanChoreData.fMilkAmount");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_408.f_3), "caravanCamp.sCaravanChoreData.fEggAmount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408.f_4), "caravanCamp.sCaravanChoreData.iNumberOfChoresCompletedTotal");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_408.f_5), "caravanCamp.sCaravanChoreData.iTimesCowWasMilkedToday");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_408.f_6), "caravanCamp.sCaravanChoreData.bStallsCleaned");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_415), 25, "caravanCamp.sSupplyGroups");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iGroupItemsRemovedBitset", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_415), 5, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_415[iVar24]), &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_415.f_5), "caravanCamp.sSupplyGroups.todCompanionNextRemoval");
	StringCopy(&cVar0, "caravanCamp.sSupplyGroups.iUnlockHashes", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_415.f_6), 18, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_415.f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_415.f_6[iVar24]), &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_415.f_24), "caravanCamp.sSupplyGroups.iUnlockHashCount");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_440), 127, "caravanCamp.sContData");
	StringCopy(&cVar0, "caravanCamp.sContData.sPg", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_440), 127, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_440)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_440[iVar24 /*63*/]), 63, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iCarriedOverCents", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_440[iVar24 /*63*/]), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".sCont", 64);
		func_277(Var16, &(uParam0->f_440[iVar24 /*63*/].f_1));
		Var16 = { Var8 };
		StringConCat(&Var16, ".iContributionCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_440[iVar24 /*63*/].f_62), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_567), 7, "caravanCamp.sCampHorseData");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_567), "caravanCamp.sCampHitchedHorseSavedData.bCampHorseHitched");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_567.f_1), "caravanCamp.sCampHitchedHorseSavedData.eCampIndex");
	func_152(&(uParam0->f_567.f_2), "caravanCamp.sCampHitchedHorseSavedData.vHitchedAtCoords");
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_567.f_5), "caravanCamp.sCampHitchedHorseSavedData.fHitchedAtHeading");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_567.f_6), "caravanCamp.sCampHitchedHorseSavedData.iHorseGender");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_574), "caravanCamp.eLongAbsenceInstancesSeen");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_575), "caravanCamp.todLongAbsenceTOD");
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_576), 2, "caravanCamp.sCampAmbientStreams");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_576.f_1), "caravanCamp.sCampAmbientStreams.todLastStreamPlayed");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_576), "caravanCamp.sCampAmbientStreams.iCounterStreamBeenPlayed");
	SAVE::_0xE0B45E983BFC0768();
	StringCopy(&cVar0, "caravanCamp.eMiniExchangeQueue", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_578), 81, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_578)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_578[iVar24]), &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_96(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 22, "loansharkingData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "loansharkingData.iLSActiveDebtors");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 10, "loansharkingData.todLSVictimRespawn");
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, "loansharkingData.todLSVictimRespawn", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_11), 10, "loansharkingData.eLSSavedMissionFlags");
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		StringCopy(&cVar1, "loansharkingData.eLSSavedMissionFlags", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_21), "loansharkingData.eLSSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_97(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, "bountyhuntingData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "bountyhuntingData.iBountiesCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "bountyhuntingData.eFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "bountyhuntingData.eRCMStage");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "bountyhuntingData.iRewardAlive");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "bountyhuntingData.iRewardDead");
	SAVE::_0xE0B45E983BFC0768();
}

void func_98(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 17, "bankRobberyData");
	StringCopy(&cVar0, "bankRobberyData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar16], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_5)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.todLastRobTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_10), 5, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_10)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_10[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "bankRobberyData.iCompletedRobberies", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_15), &cVar0);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_16), "bankRobberyData.bIsBraveClientActive");
	SAVE::_0xE0B45E983BFC0768();
}

void func_99(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 127, "coachRobbery");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "coachRobbery.iCompletedRobberies");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "coachRobbery.eActiveRobbery");
	StringCopy(&cVar0, "coachRobbery.eStatus", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_4)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.eCurrentVariant", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_19), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_19)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_19[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.eCurrentDifficulty", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_34), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_34)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_34[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobExp", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_79), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_79)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_79[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.todCoachRobAct", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_64), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_64)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_64[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.iTimesOffered", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_49), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_49)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_49[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.bNoteHasBeenRead", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_94), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_94)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_94[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "coachRobbery.iRobberiesSinceLastPoliceTrap", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_111), 15, &cVar0);
	iVar16 = 0;
	while (iVar16 < uParam0->f_111)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_111[iVar16]), &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "coachRobbery.eCurrentRobberyStr");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "coachRobbery.eCurrentRobberyRho");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_126), "coachRobbery.eCoachBitflags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_109), "coachRobbery.todCoachRobberyCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_110), "coachRobbery.todTipGivenByFreightWorker");
	SAVE::_0xE0B45E983BFC0768();
}

void func_100(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "tutorialSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 76, &cVar1);
	StringCopy(&cVar1, "tutorialSaved.sTimedData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 76, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*3*/], 3, &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimeLastRun", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*3*/], &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "iTimesRun", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*3*/])->f_1), &Var9);
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		StringConCat(&Var9, "eTutorial", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*3*/])->f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_101(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "eTutorialsRun", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 22, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_102(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	char cVar17[64];
	struct<8> /*64*/ sVar25;

	StringCopy(&cVar1, "lawStateData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 73, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*12*/], 12, &Var9);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "iStateBounty", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*12*/], &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "vLastKnownLocation", 64);
		func_152(&((uParam0[iVar0 /*12*/])->f_1), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "fLastKnownRadius", 64);
		SAVE::_0x35DEFECAE36D4FAE(&((uParam0[iVar0 /*12*/])->f_4), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "eStateFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_5), &cVar17);
		cVar17 = { Var9 };
		StringConCat(&cVar17, "stateLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&((uParam0[iVar0 /*12*/])->f_6), 6, &cVar17);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6.f_1), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eChinStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6.f_2), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6.f_3), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6.f_4), &Var25);
		Var25 = { cVar17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_6.f_5), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_103(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "lawDistrictData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 18, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eLawDistrictFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_104(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "caravanEventData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*8*/], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesCompleted", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*8*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".todNextAvailable", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*8*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric1", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGeneric2", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*8*/])->f_7), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_105(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "pendingRCMStage", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 40, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_106(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "rcmDataSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 603, &cVar1);
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "rcmDataSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_201), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_201)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_201[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "rcmDataSaved.eRCMSavedFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_402), 201, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_402)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_402[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_107(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "playerOnlyGreetStack", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 46, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*3*/], 3, &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRuleset", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bTempDisable", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_108(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;
	struct<8> /*64*/ sVar25;
	int iVar33;

	StringCopy(&cVar1, "companionData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1621, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x8E8FFB9E4AD051D2(uParam0[iVar0 /*60*/], 60, &Var9, 21);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*60*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTrustLevel", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*60*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iFollowerLevel", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*60*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "companionOutfit", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastWornOutfitOnMission", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "wornItems", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanion", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "modelCompanionHorse", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "immediateGreetOverride", 64);
		SAVE::_0x443174C20B8B9E7F(&((uParam0[iVar0 /*60*/])->f_8), 3, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eRuleset", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_8), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "todExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_8.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "bTempDisable", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*60*/])->f_8.f_2), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "greetOverrides", 64);
		SAVE::_0x81F4E92BE3958364(&((uParam0[iVar0 /*60*/])->f_11), 31, &Var17);
		iVar33 = 0;
		while (iVar33 < 10)
		{
			Var25 = { Var17 };
			StringIntConCat(&Var25, iVar33, 64);
			SAVE::_0x443174C20B8B9E7F(&((uParam0[iVar0 /*60*/])->f_11[iVar33 /*3*/]), 3, &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "eRuleset", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_11[iVar33 /*3*/]), &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "todExpiry", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_11[iVar33 /*3*/].f_1), &Var25);
			Var25 = { Var17 };
			StringConCat(&Var25, "bTempDisable", 64);
			SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*60*/])->f_11[iVar33 /*3*/].f_2), &Var25);
			SAVE::_0xE0B45E983BFC0768();
			iVar33++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		Var17 = { Var9 };
		StringConCat(&Var17, "eTemporaryMood", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_42), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePersistentMood", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_44), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTemporaryMoodExpiry", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_43), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastItemInteraction", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_45), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastChore", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_46), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastActivity", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_47), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRoleCooldown", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_48), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eTimedEventType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_49), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todTimedEvent", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_50), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "txtSchedule", 64);
		SAVE::_0x186608A2AC6F9E88(&((uParam0[iVar0 /*60*/])->f_51), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eDeedReservedFor", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*60*/])->f_59), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_109(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	char cVar16[64];
	int iVar24;

	StringCopy(&cVar0, "companion_manager", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 476, &cVar0);
	StringConCat(&cVar0, ".itemRequests", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 271, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar24 /*27*/], 27, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequest", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar24 /*27*/], &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eRequestItem", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumRequested", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar24 /*27*/])->f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eCompanion", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHandInType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eResultType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtConversation", 64);
		SAVE::_0x5A10D6506B2F2C63(&((uParam0[iVar24 /*27*/])->f_6), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtThankDialogue", 64);
		SAVE::_0x5A10D6506B2F2C63(&((uParam0[iVar24 /*27*/])->f_9), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "txtHandOverScenePath", 64);
		SAVE::_0x186608A2AC6F9E88(&((uParam0[iVar24 /*27*/])->f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVignette", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_20), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "ePickupReward", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_21), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eModelReward", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_22), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iRewardSupplyGroupHash", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar24 /*27*/])->f_23), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eState", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*27*/])->f_24), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasThankDialoguePlayed", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar24 /*27*/])->f_25), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bRewardHelpTextShown", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar24 /*27*/])->f_26), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".iItemRequestCompleteBitset", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_271), &cVar16);
	cVar16 = { cVar0 };
	StringConCat(&cVar16, ".eReturnedJackBook", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_272), &cVar16);
	StringCopy(&cVar0, "companion_manager.iNumAvailableActivities", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_273), &cVar0);
	StringCopy(&cVar0, "companion_manager.availableActivities", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_274), 201, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_274)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x8E8FFB9E4AD051D2(&(uParam0->f_274[iVar24 /*20*/]), 20, &Var8, 20);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivity", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityInstance", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eHost", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eParticipants", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eConditionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vInvitePos", 64);
		func_152(&(uParam0->f_274[iVar24 /*20*/].f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vActivityPos", 64);
		func_152(&(uParam0->f_274[iVar24 /*20*/].f_8), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bEnabledInFlow", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_274[iVar24 /*20*/].f_11), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bHasBeenLaunched", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_274[iVar24 /*20*/].f_12), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bMustOffer", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_274[iVar24 /*20*/].f_13), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bOfferUntilHasRun", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_274[iVar24 /*20*/].f_14), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "bForceLaunch", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_274[iVar24 /*20*/].f_15), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eActivityDeed", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_16), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eTODAvailable", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_274[iVar24 /*20*/].f_17), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iWeight", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_274[iVar24 /*20*/].f_18), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "iNumTimesOffered", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_274[iVar24 /*20*/].f_19), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "companion_manager.todHungoverExpiry", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_475), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_110(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "activities", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenPerformed", 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bHasBeenOffered", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_111(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "outfits", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_112(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	struct<8> /*64*/ sVar16;
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 17, "playerFacialHair");
	StringCopy(&cVar0, "playerFacialHair.facialHair", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 16, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar24 /*5*/], 5, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairLength", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar24 /*5*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairCut", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*5*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*5*/])->f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".facialHairNextGrowthTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar24 /*5*/])->f_3), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iNumAcceleratedGrowthCycles", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar24 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_16), "playerFacialHair.eFacialHairFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_113(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 7, "playerHeadHair");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "playerHeadHair.ePomadeWearOffTimer");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "playerHeadHair.headHairLength");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "playerHeadHair.eHeadHairCut");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "playerHeadHair.eHeadHairStyle");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "playerHeadHair.eHeadHairFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "playerHeadHair.headHairNextGrowthTimer");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), "playerHeadHair.iNumAcceleratedGrowthCycles");
	SAVE::_0xE0B45E983BFC0768();
}

void func_114(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "mapBlipData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1001, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipRegion", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipType", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipPackedPosition", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "blipTODFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_115(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "discoverableData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 157, &cVar1, 14);
	StringCopy(&cVar1, "discoverableData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 144, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_timesViewed", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_145), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "todDiscoEasel_timeStamp", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_144), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoEasel_currentlyViewed", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_147), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoPhonograph_visits", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_146), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDreamcatchers_bitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_148), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriable_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_149), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableMore_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_150), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCarriableArrows_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_151), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_152), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationMoreVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_153), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoLocationOtherVersion_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_154), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoCorpse_iBitField", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_155), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "DiscoDisable", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_156), &Var9);
	SAVE::_0xE0B45E983BFC0768();
}

void func_116(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "showManagerData", 64);
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 17, &cVar1, 7);
	StringCopy(&cVar1, "showManagerData.eCurrentShow", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "showManagerData.TODLastTimeViewed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "showManagerData.iShowBits", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_12), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalShowViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_13), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMCViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_14), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMagicLanternViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_15), &cVar1);
	StringCopy(&cVar1, "showManagerData.iTotalMovieViews", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_16), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_117(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "townSecretData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 8, &cVar1);
	StringCopy(&cVar1, "townSecretData.eFlags", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { cVar1 };
	StringConCat(&Var9, "TownSecret_VanHorn_bitfield", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "iTownSecret_Saint_Denis_bitfield", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), &Var9);
	Var9 = { cVar1 };
	StringConCat(&Var9, "eStrawberryLastDayUFOSeen", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &Var9);
	SAVE::_0xE0B45E983BFC0768();
}

void func_118(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "eventArea", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 49, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*12*/], 12, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iStage", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*12*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iForceTransitionStage", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*12*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNextStage", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todCounter", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStateFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomData", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*12*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaCustomCounter", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*12*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iEventAreaMassacreCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*12*/])->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iAggroStage", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_9), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todAggroed", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_10), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todMassacred", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*12*/])->f_11), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_119(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "duelingData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".eFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_120(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "herbs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 45, &cVar1);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eHerbTypeFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_121(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 65, "huntingZoneData");
	StringCopy(&cVar1, "huntingZoneData.sHuntingZoneTypes", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 65, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 65, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bDiscovered", 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bCompleted", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eLaunchTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".bLegendaryHasBeenSkinned", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_122(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "propertyData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 35, &cVar1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eTimeOfDay", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_123(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "homeRobberyData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*7*/], 7, &Var9);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*7*/], "todNextAvailable");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_1), "todLastVisited");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_4), "eFlags");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_5), "eFlagsPlus");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_6), "eFlagsSet3");
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_2), "iTimesRobbed");
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_3), "iPlayerCentsLostAtHome");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_124(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "newspapers.", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 57, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &Var9);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*4*/], ".eStatus");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_1), ".eDynamicStory1");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_2), ".eDynamicStory2");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_3), ".eFishingStory");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_125(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "dynamicArticles.", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 35, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_126(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "itemData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "itemData.todSurvivalistActive");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "itemData.todChewingGumActive");
	SAVE::_0xE0B45E983BFC0768();
}

void func_127(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "gangs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*10*/], 10, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangSavedFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*10*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "gangStatus", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*10*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iKillsSinceStatusChange", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastKill", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*10*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresCleared", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_7), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumCampfiresPersisted", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_8), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGangEncounterStage", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*10*/])->f_9), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_128(var uParam0)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	struct<8> /*64*/ sVar17;
	struct<8> /*64*/ sVar25;
	char cVar33[64];

	StringCopy(&cVar1, "gangAmbushesSeen", 64);
	StringCopy(&cVar33, "ambushTrack", 64);
	StringCopy(&cVar9, "gangAmbushesStraight", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 197, "ambush");
	StringCopy(&cVar33, "ambush.ambushTrack", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 177, &cVar33);
	iVar0 = 0;
	while (iVar0 < 44)
	{
		Var25 = { cVar33 };
		StringIntConCat(&Var25, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &Var25);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iCompletedCount", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*4*/], &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSeenCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iSpawnedCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var25 };
		StringConCat(&Var17, ".iNextAllowedSpawnMinutes", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_177), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_177)
	{
		Var17 = { cVar1 };
		StringIntConCat(&Var17, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_177[iVar0]), &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_184), 7, &cVar9);
	iVar0 = 0;
	while (iVar0 < uParam0->f_184)
	{
		Var17 = { cVar9 };
		StringIntConCat(&Var17, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_184[iVar0]), &Var17);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_191), "ambush.eAmbushSavedFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_192), "ambush.todLastAmbushTime");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_193), "ambush.eLastAmbushGang");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_194), "ambush.eLastAmbush");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_195), "ambush.iAmbushesCompleted");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_196), "ambush.iNumRecognizeAmbushesStraight");
	SAVE::_0xE0B45E983BFC0768();
}

void func_129(var uParam0)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];

	StringCopy(&cVar1, "campfires.iVignetteVariations", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 38, "campfires");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "campfires.eFoothillsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "campfires.eMountainsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "campfires.ePlainsStoriesSpoken");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), "campfires.eSwampsStoriesSpoken");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_35), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_35)
	{
		cVar9 = { cVar1 };
		StringIntConCat(&cVar9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_35[iVar0]), &cVar9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "campfires.vCampfireUsedPositions", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 31, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		cVar9 = { cVar1 };
		StringIntConCat(&cVar9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_4[iVar0 /*3*/]), 3, &cVar9);
		func_152(&(uParam0->f_4[iVar0 /*3*/]), &cVar9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_37), "campfires.eCampSavedFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_130(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "worldStates", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 14, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_131(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "worldStateTimers", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 61, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_132(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "featureUnlocked", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_133(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	SAVE::_0x443174C20B8B9E7F(uParam0, 81, "jailData");
	StringCopy(&cVar1, "jailData.sPrisoners", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 81, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eJailRegion", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisoner", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerFlag", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePrisonerDialogue", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_134(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "trainData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 66, &cVar1);
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*5*/], 5, &Var9);
		func_152(&((uParam0[iVar0 /*5*/])->f_1), "vTrainLoc");
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*5*/], "trainFlags");
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*5*/])->f_4), "bDirection");
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_135(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 71, "playerRPGData", 39);
	StringCopy(&cVar1, "playerRPGData.fPlayerEfficiency", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 4, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCorePoints", 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.sAttributeOverpoweredTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 7, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_4)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_4[iVar0 /*2*/]), 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "fTankTime", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_4[iVar0 /*2*/]), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "fCoreTime", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_4[iVar0 /*2*/].f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.fAttributePoints", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_11), 24, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_11[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "playerRPGData.iHonor", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_35), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestHonorRank", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_36), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iLowestHonorRank", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_37), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iHighestBountyHonorReached", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_38), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDeadeyeAmount", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_39), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightLowerLimit", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_40), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerWeightUpperLimit", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_41), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerTankSickMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_44), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fPlayerStamWeightMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_45), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_DEADEYECORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_46), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_STAMINACORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_47), &cVar1);
	StringCopy(&cVar1, "playerRPGData.RPG_TIME_BEFORE_HEALTHCORE_EMPTY", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_48), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iOverfedTimer", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42), &cVar1);
	StringCopy(&cVar1, "playerRPGData.bPlayerPoisoned", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_43), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fGritResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_49), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fInstinctResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_50), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fStrengthResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_51), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFatResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_52), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHeatResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_53), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fColdResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_54), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusHealthXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_55), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusDeadeyeXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_56), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBonusStaminaXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_57), &cVar1);
	StringCopy(&cVar1, "playerRPGData.ePlayerSickness", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_67), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeDepleteMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_58), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fEagleEyeRangeBonus", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_59), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fWeaponDegradeResist", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_60), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageScaleMelee", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_61), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_62), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fDamageTakenOnHorseModifier", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_63), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fBowStaminaModifier", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_64), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iGrappledKilledBears", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_65), &cVar1);
	StringCopy(&cVar1, "playerRPGData.iTimesEatenFood", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_66), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHorseBondingXPMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_68), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fHealthRefillMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_69), &cVar1);
	StringCopy(&cVar1, "playerRPGData.fFortifyMod", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_70), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_136(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "moralChoices", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eChoiceType", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_137(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 286, "cacheOutfitData");
	func_278("cachedOutfits", uParam0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_138(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "playerCampData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "playerCampData.eFlags");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "playerCampData.iNumberOfCamps");
	SAVE::_0xE0B45E983BFC0768();
}

void func_139(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "jailbreakData", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iViewedJailbreaks", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "lastViewedJailbreakTime", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_140(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 22, "sFishingDataSaved");
	StringCopy(&cVar1, "sFishingDataSaved.eCurrentBaitEquipped", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFishingDataSaved.bHasLegendaryFishBeenCaught", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_5)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_5[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), "sFishingDataSaved.iFishingDataSavedBits");
	SAVE::_0xE0B45E983BFC0768();
}

void func_141(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	struct<8> /*64*/ sVar10;
	struct<8> /*64*/ sVar18;
	struct<8> /*64*/ sVar26;

	StringCopy(&cVar2, "managedTowns", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 417, &cVar2);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*26*/], 26, &Var10);
		StringConCat(&Var10, ".eActiveTownStateTags", 64);
		SAVE::_0x81F4E92BE3958364(uParam0[iVar0 /*26*/], 26, &Var10);
		iVar1 = 0;
		while (iVar1 < uParam0->f_1)
		{
			Var18 = { Var10 };
			StringIntConCat(&Var18, iVar1, 64);
			SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*26*/][iVar1 /*5*/], 5, &Var18);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTag", 64);
			SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*26*/][iVar1 /*5*/], &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPriority", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*26*/][iVar1 /*5*/])->f_1), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTagPersistence", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*26*/][iVar1 /*5*/])->f_2), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eCategory", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*26*/][iVar1 /*5*/])->f_3), &Var26);
			Var26 = { Var18 };
			StringConCat(&Var26, ".eTODExpiry", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*26*/][iVar1 /*5*/])->f_4), &Var26);
			SAVE::_0xE0B45E983BFC0768();
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_142(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "specialPeds", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 241, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*8*/], 8, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "ePedStage", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*8*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eSavedFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*8*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*8*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todLastEncounter", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*8*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todDeathTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*8*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iInteracts", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_6), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeaths", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*8*/])->f_7), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_143(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "dataShacksSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 40, &cVar1);
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat1", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "dataShacksSaved.iSavedFloat2", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_20), 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_20)
	{
		Var9 = { cVar1 };
		StringConCat(&Var9, "_", 64);
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_20[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_144(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "hideouts", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 19, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*2*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iNumActorsRemaining", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*2*/], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_145(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 39, "sFilletDataSaved");
	StringCopy(&cVar1, "sFilletDataSaved.iBestLaps", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFilletDataSaved.iFastestLap", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_13), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_13[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "sFilletDataSaved.iLongestTime", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_26[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_146(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "eBufferedJournalEntryUnlocks", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 21, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_147(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 7, "collectiblesData");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "collectiblesData.bDinoBonesStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), "collectiblesData.bLegendaryFishStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2), "collectiblesData.bRockCarvingsStage2RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_3), "collectiblesData.bTaxidermyStage1RCM");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_4), "collectiblesData.bCarolinaParakeetExtinction");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_5), "collectiblesData.bChalTownHoldups");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_6), "collectiblesData.bTSAnnesburgRiddle");
	SAVE::_0xE0B45E983BFC0768();
}

void func_148(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "sCheatManagerSaved");
	StringCopy(&cVar1, "sCheatManagerSaved.iUnlockedCheats", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_149(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "reinforcedequipmentSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eEquipmentRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_150(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "collectableUiLogSaved", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 13, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiCigCardsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiDinoBonesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiExoticsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiLegendaryFishSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiParakeetsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiRockCarvingsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTaxidermySavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHJackHallSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHHighStakesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHPoisonTrailSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_9), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHTresorMortsSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_10), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHElementalTrailSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eUiTHLandmarksOfRichesSavedFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_12), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_151(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 47, "shared");
	func_279(uParam0);
	func_280(&(uParam0->f_2));
	func_281(&(uParam0->f_3));
	func_282(&(uParam0->f_4));
	func_283(&(uParam0->f_5));
	func_284(&(uParam0->f_25));
	func_285(&(uParam0->f_26));
	func_286(&(uParam0->f_27));
	func_287(&(uParam0->f_42));
	func_288(&(uParam0->f_43));
	func_289(&(uParam0->f_44));
	func_290(&(uParam0->f_45));
	SAVE::_0xE0B45E983BFC0768();
}

void func_152(var uParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".x", 64);
	SAVE::_0x35DEFECAE36D4FAE(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".y", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".z", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
}

void func_153(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "deeds", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 5398, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*7*/], 7, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "iDeedPacked", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*7*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "eStatus", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iCompletionData", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt1", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iGenericInt2", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_4), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iUniqueHashID", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*7*/])->f_5), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "lastCompletedTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*7*/])->f_6), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_154(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	char cVar16[64];
	int iVar24;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 3206, "beatTrackingData", 17);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "beatTrackingData.todGangBeatAvailable");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "beatTrackingData.iSpawnedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "beatTrackingData.iSeenCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "beatTrackingData.iLaunchedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), "beatTrackingData.iCompletedCount");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_11), "beatTrackingData.iHerbalistCampState");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "beatTrackingData.eLastCompleted");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), "beatTrackingData.eLastSeen");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_9), "beatTrackingData.bCompletedBeatSinceLastMission");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_10), "beatTrackingData.bSeenBeatSinceLastMission");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_7), "beatTrackingData.bAmbushSeenSinceLastBeat");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_8), "beatTrackingData.bCampfireSeenSinceLastBeat");
	StringCopy(&cVar0, "beatTrackingData.iCompletedLocation", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_12), 30, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_12)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_12[iVar24]), &Var8);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatTrack", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_42), 961, &cVar0);
	iVar24 = 0;
	while (iVar24 < 120)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_42[iVar24 /*8*/]), 8, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTimesCompleted", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42[iVar24 /*8*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42[iVar24 /*8*/].f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42[iVar24 /*8*/].f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42[iVar24 /*8*/].f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iBeatAvailableAt", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_42[iVar24 /*8*/].f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".eBeatRarity", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_42[iVar24 /*8*/].f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".bBeatExhausted", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_42[iVar24 /*8*/].f_6), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_42[iVar24 /*8*/].f_7), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatGeneric", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1003), 1081, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1003)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1003[iVar24 /*6*/]), 6, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".ID", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1003[iVar24 /*6*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iGeneric1", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1003[iVar24 /*6*/].f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iGeneric2", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1003[iVar24 /*6*/].f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".eBeatTown", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1003[iVar24 /*6*/].f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".eBeatTimeOfDay", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1003[iVar24 /*6*/].f_5), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".mnPedModel", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1003[iVar24 /*6*/].f_3), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatUsedLocations", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2084), 121, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2084)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_2084[iVar24 /*5*/]), 5, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".vUsedAtLocation", 64);
		func_152(&(uParam0->f_2084[iVar24 /*5*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".eBeat", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2084[iVar24 /*5*/].f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iBeatRestrictionTimeLeft", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2084[iVar24 /*5*/].f_4), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "beatTrackingData.beatRegionSaved", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2205), 1001, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_2205)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_2205[iVar24 /*2*/]), 2, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iRegionSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2205[iVar24 /*2*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iRegionComplete", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2205[iVar24 /*2*/].f_1), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	struct<8> /*64*/ sVar12;
	struct<8> /*64*/ sVar20;
	struct<8> /*64*/ sVar28;
	struct<8> /*64*/ sVar36;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 2408, "shopsData", 17);
	StringCopy(&cVar4, "shopsData.iTimesRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1168), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1168)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1168[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1322), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1322)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1322[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastRegisterRobbed", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1476), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1476)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1476[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastVisited", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1630), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1630)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1630[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todLastEscalation", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1784), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1784)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1784[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.todTimeToResetInjuredOutfit", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1938), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1938[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.eRobberyFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2092), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2092)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2092[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "shopsData.eShopFlags", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2246), 154, &cVar4);
	iVar0 = 0;
	while (iVar0 < uParam0->f_2246)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2246[iVar0]), &Var12);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x443174C20B8B9E7F(uParam0, 1168, "shopsData.sPurchaseData");
	StringCopy(&cVar4, "sShopPurchases", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1126, &cVar4);
	iVar2 = 25;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*45*/], 45, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemBoughtFromShop", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*45*/], &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eLastItemSoldToShop", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*45*/])->f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iTotalMoneySpent", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*45*/])->f_43), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iMoneySpentInSession", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*45*/])->f_44), &Var36);
		Var20 = { Var12 };
		StringConCat(&Var20, ".sPurchaseList", 64);
		SAVE::_0x81F4E92BE3958364(&((uParam0[iVar0 /*45*/])->f_2), 41, &Var20);
		iVar3 = 10;
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			Var28 = { Var20 };
			StringIntConCat(&Var28, iVar1, 64);
			SAVE::_0x443174C20B8B9E7F(&((uParam0[iVar0 /*45*/])->f_2[iVar1 /*4*/]), 4, &Var28);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eItem", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*45*/])->f_2[iVar1 /*4*/]), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseTimer", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*45*/])->f_2[iVar1 /*4*/].f_1), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".iPurchaseCount", 64);
			SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*45*/])->f_2[iVar1 /*4*/].f_2), &Var36);
			Var36 = { Var28 };
			StringConCat(&Var36, ".eShopPurchasedFrom", 64);
			SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*45*/])->f_2[iVar1 /*4*/].f_3), &Var36);
			SAVE::_0xE0B45E983BFC0768();
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar4, "sPurchaseData.sPlayerPurchases", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1126), 41, &cVar4);
	iVar2 = uParam0->f_1126;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Var12 = { cVar4 };
		StringIntConCat(&Var12, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1126[iVar0 /*4*/]), 4, &Var12);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eItem", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1126[iVar0 /*4*/]), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseTimer", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1126[iVar0 /*4*/].f_1), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".iPurchaseCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1126[iVar0 /*4*/].f_2), &Var36);
		Var36 = { Var12 };
		StringConCat(&Var36, ".eShopPurchasedFrom", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1126[iVar0 /*4*/].f_3), &Var36);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1167), "sPurchaseData.eLastPurchaseReg");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2400), "shopsData.bPlayerHasBrowsedAnyShop");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2401), "shopsData.bHideCatInfoBox");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2402), "shopsData.bPurchaseMade");
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_2403), "shopsData.bRCKittyEmeraldViewed");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2404), "shopsData.iLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2405), "shopsData.iSecondLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2406), "shopsData.iThirdLastHorseSoldTimeStamp");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2407), "shopsData.iLostLegendaryItemsBitset");
	SAVE::_0xE0B45E983BFC0768();
}

void func_156(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;
	struct<8> /*64*/ sVar25;

	StringCopy(&cVar1, "regions", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1651, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*11*/], 11, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "eRegionFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*11*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentLockdownStartTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "currentWantedZoneStartTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "iLockdownDuration", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*11*/])->f_3), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "regionLawMemoryData", 64);
		SAVE::_0x443174C20B8B9E7F(&((uParam0[iVar0 /*11*/])->f_4), 6, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "eLastOuftitSeenByLaw", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eSideburnsStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eChinStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eMustacheStyle", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eTimeOutfitLastSeen", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "eAppearanceLawMemoryFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*11*/])->f_4.f_5), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		Var17 = { Var9 };
		StringConCat(&Var17, "iInocentsKilledInRegion", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*11*/])->f_10), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_157(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	StringCopy(&cVar1, "regionTownFlags", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 117, &cVar1);
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationSaved", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 111, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "regionTownFlags.eRegionConversationCampSave", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_111), 6, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_111[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_158(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "regionalCharacter", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 1909, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "rcFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "todRCDeathTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_159(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	StringCopy(&cVar0, "SPMetaped", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 777, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 26, &Var8);
	func_291(uParam0, Var8);
	SAVE::_0xE0B45E983BFC0768();
	Var8 = { cVar0 };
	StringConCat(&Var8, "OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 601, &Var8);
	iVar16 = 0;
	while (iVar16 <= 4)
	{
		func_292(&(uParam0->f_26[iVar16 /*120*/]), Var8, iVar16);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_627), "iOutfitHash");
	StringCopy(&Var8, "SingleSavedAppearance", 64);
	func_292(&(uParam0->f_627.f_1), Var8, 0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "PortableSnapshot", 64);
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_627.f_121), 26, &Var8);
	func_291(&(uParam0->f_627.f_121), Var8);
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_774), "SPMetaped_eSystemFlags");
	StringCopy(&Var8, "SPMetaped_PlayerType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_775), "SPMetaped_PlayerType");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_776), "SPMetaped_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
}

void func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	struct<8> /*64*/ sVar10;
	char cVar18[64];
	struct<8> /*64*/ sVar26;

	StringCopy(&cVar2, "herbData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 4501, &cVar2);
	iVar0 = 0;
	while (iVar0 < 500)
	{
		Var10 = { cVar2 };
		StringIntConCat(&Var10, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*9*/], 9, &Var10);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*9*/], "eHerbType");
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*9*/])->f_1), "iHerbPackedLocation");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*9*/])->f_2), "todTimePicked");
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*9*/])->f_3), "eHerbFlags");
		StringCopy(&cVar18, "iHerbPatchPlants", 64);
		SAVE::_0x81F4E92BE3958364(&((uParam0[iVar0 /*9*/])->f_4), 5, &cVar18);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Var26 = { cVar18 };
			StringIntConCat(&Var26, iVar1, 64);
			SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*9*/])->f_4[iVar1]), &Var26);
			iVar1++;
		}
		SAVE::_0xA844FEB5C22C2C74();
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_161(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	struct<8> /*64*/ sVar16;
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 2697, "campVignettes");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "campVignettes.iTotalVigsSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "campVignettes.iTotalCampfireSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "campVignettes.iTotalWalkAndTalkSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "campVignettes.iTotalMusicSeen");
	StringCopy(&cVar0, "campVignettes.vigData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 2693, &cVar0);
	iVar24 = 0;
	while (iVar24 < 673)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_4[iVar24 /*4*/]), 4, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4[iVar24 /*4*/]), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4[iVar24 /*4*/].f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iTimesSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4[iVar24 /*4*/].f_2), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bSeen", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_4[iVar24 /*4*/].f_3), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_162(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	char cVar16[64];
	int iVar24;

	SAVE::_0x443174C20B8B9E7F(uParam0, 1537, "ambVigData");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "ambVigData.iLaunches");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), "ambVigData.iSpawned");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), "ambVigData.iSeen");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "ambVigData.iTriggered");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), "ambVigData.todLaunchTimeHuman");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), "ambVigData.todLaunchTimeAnimal");
	StringCopy(&cVar0, "ambVigData.sRegisteredVigs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 1489, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_6)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar24 /*6*/]), 6, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSeen", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar24 /*6*/]), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iLaunched", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar24 /*6*/].f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iSpawned", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar24 /*6*/].f_2), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".iTriggered", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar24 /*6*/].f_3), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".bUnlocked", 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_6[iVar24 /*6*/].f_4), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, ".todLaunchTime", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6[iVar24 /*6*/].f_5), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, "ambVigData.sUsedLocs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1495), 41, &cVar0);
	iVar24 = 0;
	while (iVar24 < uParam0->f_1495)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1495[iVar24 /*4*/]), 4, &Var8);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "vLoc", 64);
		func_152(&(uParam0->f_1495[iVar24 /*4*/].f_1), &cVar16);
		cVar16 = { Var8 };
		StringConCat(&cVar16, "eVig", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1495[iVar24 /*4*/]), &cVar16);
		SAVE::_0xE0B45E983BFC0768();
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1536), "ambVigData.iNumberOfParakeet");
	SAVE::_0xE0B45E983BFC0768();
}

void func_163(var uParam0, char* sParam1)
{
	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 1399, "persona", 11);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "psna_ePreferredDistrict");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_eLastValidRegion");
	func_152(&(uParam0->f_2), "psna_vLastValidPosition");
	func_293(&(uParam0->f_5));
	func_294(&(uParam0->f_15));
	func_295(&(uParam0->f_62));
	func_296(&(uParam0->f_350));
	func_297(&(uParam0->f_1362));
	func_298(&(uParam0->f_1365));
	SAVE::_0xE0B45E983BFC0768();
}

void func_164()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_40(iVar0))
		{
			SCRIPTS::REQUEST_SCRIPT(func_166(iVar0));
		}
		iVar0++;
	}
}

bool func_165(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = (iParam0 >= 0 && iParam0 <= 10);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

char* func_166(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "init_global_block_ugc";
		case 4:
			return "init_global_block_mp";
		case 3:
			return "init_global_block_profiler";
		case 5:
			return "init_global_block_sp";
		case 7:
			return "init_global_block_shared";
		case 6:
			return "init_global_block_transition";
		case 10:
			return "init_global_block_softsave";
		case 2:
			return "init_global_block_mc";
		case 9:
			return "init_global_block_mc_deathmatch";
		case 8:
			return "init_global_block_mc_race";
	}
	return uVar0;
}

void func_167(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam1;
}

char* func_168()
{
	return "allyEnum";
}

char* func_169()
{
	return "horseEntityIndex";
}

char* func_170()
{
	return "blipIndex";
}

char* func_171()
{
	return "genericMissionInt";
}

char* func_172()
{
	return "genericMissionFloat";
}

Vector3 func_173()
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "eDuelResult", 24);
	return cVar0;
}

char* func_174()
{
	return "cutDeleteMe";
}

char* func_175()
{
	return "brain_id";
}

char* func_176()
{
	return "brain_player";
}

char* func_177()
{
	return "brain_type";
}

char* func_178()
{
	return "brain_isHidden";
}

char* func_179()
{
	return "brain_isDisabled";
}

char* func_180()
{
	return "brain_timeStamp";
}

char* func_181()
{
	return "brain_value";
}

char* func_182()
{
	return "brain_lootable_type";
}

char* func_183()
{
	return "brain_lootable_value";
}

char* func_184()
{
	return "brain_lootable_deed";
}

char* func_185()
{
	return "brain_lootable_id";
}

char* func_186()
{
	return "MP_HUD_Local_Status_Icon";
}

char* func_187()
{
	return "MP_HUD_Local_Secondary_Icon";
}

char* func_188()
{
	return "MP_HUD_Local_Blip_Sprite";
}

char* func_189()
{
	return "MP_HUD_Hide_My_Blip_FOR_TEAMS";
}

char* func_190()
{
	return "MP_HUD_Force_My_Blip_Persistent_For_Teams";
}

char* func_191()
{
	return "MP_HUD_Force_Can_Hear_Teams";
}

char* func_192()
{
	return "fetch_entity";
}

char* func_193()
{
	return "fetch_turned_in";
}

char* func_194()
{
	return "fetch_static_prop_placed_on_ground";
}

char* func_195()
{
	return "fetch_combat_config";
}

char* func_196()
{
	return "chu_vip_ped";
}

char* func_197()
{
	return "NetStableMount";
}

char* func_198()
{
	return "NetStableGUID1";
}

char* func_199()
{
	return "NetStableGUID2";
}

char* func_200()
{
	return "NetStableGUID3";
}

char* func_201()
{
	return "NetStableGUID4";
}

char* func_202()
{
	return "NSS_PLAYER_FLAG";
}

char* func_203()
{
	return "NSS_PLAYER_BOUNTY_CUSTODIAN";
}

void func_204()
{
}

void func_205()
{
}

void func_206()
{
}

bool func_207(var uParam0)
{
	bool bVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	struct<8> /*64*/ sVar6;
	bool bVar14;
	var uVar15;
	var uVar16;
	int iVar24[100];
	int iVar125;
	int iVar126;
	int iVar127;
	struct<7> /*56*/ sVar128;

	StringCopy(&cVar1, "loading_tips", 24);
	bVar0 = DATAFILE::PARSEDDATA_IS_FILE_VALID(*uParam0);
	if (!bVar0)
	{
		*uParam0 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam0);
	if (!bVar4)
	{
		return false;
	}
	func_299(uParam0);
	uParam0->f_79 = func_300(uParam0, 1);
	if (uParam0->f_79 <= 0)
	{
		return false;
	}
	uVar15 = uParam0->f_1;
	iVar5 = 0;
	while (iVar5 < uParam0->f_79)
	{
		iVar24[iVar5] = iVar5;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= (uParam0->f_79 - 1))
	{
		iVar125 = MISC::GET_RANDOM_INT_IN_RANGE(iVar5, (uParam0->f_79 - 1));
		iVar126 = iVar24[iVar5];
		iVar24[iVar5] = iVar24[iVar125];
		iVar24[iVar125] = iVar126;
		iVar5++;
	}
	iVar127 = 0;
	while (iVar127 < 10)
	{
		uParam0->f_1 = uVar15;
		uParam0->f_3 = iVar24[iVar127];
		if (func_301(uParam0, 0))
		{
			if (func_302(uParam0, 2, &Var6))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_303(uParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							func_304(&Var128, 1);
						}
					}
					if (func_303(uParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							func_304(&Var128, 2);
						}
					}
					func_305(uParam0, 3, &(Var128.f_5));
					if (func_302(uParam0, 6, &uVar16))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar16))
						{
							Var128.f_6 = MISC::GET_HASH_KEY(&uVar16);
						}
					}
				}
			}
			if (Var128.f_6 == 0 || MISSIONDATA::MISSIONDATA_GET_RATING(Var128.f_6) >= 2)
			{
				uParam0->f_5[iVar127 /*7*/] = { Var128 };
				iVar127++;
			}
		}
	}
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
	return true;
}

void func_208(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

void func_209(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

int func_210()
{
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 5))
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_306(255))
			{
				return 1;
			}
			if (!NETWORK::_0xDD73C9838CE7181D())
			{
				return 1;
			}
		}
	}
	if (func_307(0))
	{
		return 1;
	}
	if (Global_16)
	{
		return 1;
	}
	if (func_308())
	{
		return 1;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (GRAPHICS::GET_TV_CHANNEL() != -1)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
		{
			return 1;
		}
	}
	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				return 1;
			}
		}
	}
	if (func_48() == -1)
	{
		if (func_309(Global_1835011[39 /*74*/].f_1))
		{
			if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
			{
				if (!CAM::_0x1204EB53A5FBC63D())
				{
					return 1;
				}
			}
		}
	}
	if (STREAMING::_0x99F92061EFE908BA() || func_310(Global_1935630, 16384))
	{
		return 1;
	}
	if (func_310(Global_1935630, 4096))
	{
		return 1;
	}
	if (func_310(Global_1935630, 2048))
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_211()
{
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1955830.f_1, 6))
	{
		return 1;
	}
	if (func_48() == -2)
	{
		return 1;
	}
	if (func_310(Global_1935630, 4096))
	{
		return 1;
	}
	if (func_310(Global_1935630, 2048))
	{
		return 1;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (STREAMING::_0x99F92061EFE908BA() || func_310(Global_1935630, 16384))
	{
		return 1;
	}
	if (Global_16 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
	{
		return 1;
	}
	if (func_311())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			return 1;
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if ((!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_311())
		{
			return 1;
		}
	}
	if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT())
	{
		return 1;
	}
	if (func_48() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (func_312(255) > 2 && !func_313(Global_1224589.f_5, 8192))
			{
				return 1;
			}
			else if (func_314(32))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1 || !func_213(uParam0))
	{
		func_315(uParam0);
	}
}

bool func_213(var uParam0)
{
	return func_316(*uParam0, 1);
}

float func_214(var uParam0)
{
	if (!func_213(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_317(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_318() - uParam0->f_1);
}

void func_215(int iParam0)
{
	if (iParam0 != Global_1955830.f_3)
	{
		COMPAPP::_0x74BCCEB233AD95B2(joaat("MAPSTATE"), iParam0);
		Global_1955830.f_3 = iParam0;
	}
}

void func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_319(iParam1);
			break;
		case 1121131740:
			func_320(iParam1);
			break;
		case 543140406:
			func_321(iParam1);
			break;
		case -2095977185:
			func_322(iParam1);
			break;
		case 809652668:
			func_323(iParam1);
			break;
		case 1860341470:
			func_324();
			break;
		case 516249386:
			func_325(iParam1);
			break;
		case 904577075:
			func_326(iParam1);
			break;
	}
}

void func_217()
{
	if (Global_1572887.f_94.f_42 != 0 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887.f_94.f_53 > 2 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887.f_94.f_43 != -1 && func_327())
	{
		func_328(1);
		return;
	}
	if (Global_1572887.f_94.f_54 != 0 && func_327())
	{
		func_328(1);
		return;
	}
	Global_1572887.f_94.f_54 = 0;
}

void func_218()
{
	struct<8> /*64*/ sVar0;
	vector3 vVar19;

	Global_1572887.f_94.f_56 = MISC::GET_GAME_TIMER();
	Var0.f_2 = 4;
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	if (func_329(128) || func_329(256))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	vVar19.x = 0;
	vVar19.f_1 = "SG_HDNG";
	vVar19.f_2 = func_330();
	Global_1572887.f_94.f_52 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(&Var0, &vVar19, true);
	func_328(2);
	func_331(0);
}

void func_219()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar9;

	if (func_48() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887.f_14, false))
		{
			if (func_332() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				func_328(3);
				return;
			}
		}
	}
	if (UISTICKYFEED::_UI_STICKY_FEED_IS_ALERT_SCREEN_ACTIVE())
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
	while (UIEVENTS::EVENTS_UI_IS_PENDING(joaat("STATUS_ALERT_FEED")))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(joaat("STATUS_ALERT_FEED"), &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887.f_94.f_52)
					{
						if (vVar5.z == 2074623703)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
							bVar0 = true;
						}
						if (vVar5.z == 444632721)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
							bVar2 = true;
						}
						if (vVar5.z == 1400745903)
						{
							UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887.f_94.f_52)
					{
						Global_1572887.f_94.f_52 = 0;
						bVar3 = true;
						UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(joaat("STATUS_ALERT_FEED"));
	}
	iVar9 = (MISC::GET_GAME_TIMER() - Global_1572887.f_94.f_56);
	bVar4 = (iVar9 > Global_1899378.f_2.f_14 && Global_1572887.f_94.f_56 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		func_328(3);
		if (func_329(128) || func_329(256))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				func_333(8);
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				func_333(16);
			}
		}
	}
}

void func_220()
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_334(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	if (Global_1572887.f_94.f_52 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1572887.f_94.f_52);
	}
	Global_1572887.f_94.f_52 = 0;
	Global_1572887.f_94.f_42 = 0;
	Global_1572887.f_94.f_54 = 0;
	Global_1572887.f_94.f_53 = 0;
	Global_1572887.f_94.f_43 = -1;
	Global_1572887.f_94.f_56 = -1;
	func_328(0);
}

var func_221(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_222(int iParam0)
{
	Global_1572887.f_94.f_49 = iParam0;
}

void func_223()
{
	struct<2> /*16*/ sVar0[2];

	Var0[0 /*2*/] = { Global_1572887.f_94.f_6 };
	Var0[1 /*2*/] = { Global_1572887.f_94.f_6.f_2 };
	Global_1572887.f_94.f_50 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 2);
}

int func_224()
{
	struct<8> /*64*/ sVar0[2];
	int iVar17;
	char* sVar18;
	char* sVar19;
	char* sVar20;

	iVar17 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_1572887.f_94.f_50, &Var0, 2);
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = func_335(&(Var0[0 /*8*/]), joaat("COLOR_PURE_WHITE"));
	sVar19 = func_335(&(Var0[1 /*8*/]), joaat("COLOR_PURE_WHITE"));
	sVar20 = MISC::VAR_STRING(42, "NT_INV_EXTENDED", sVar19, sVar18);
	func_221("NET_SESSION_INV_HEADER", sVar20, joaat("BLIPS"), joaat("BLIP_MP_PLAYLIST_TEAMGAME"), -2, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_225()
{
	NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	func_331(0);
	func_69(0);
	func_71();
}

void func_226()
{
	func_247();
	func_249(2);
	if (func_336(Global_1572887.f_94.f_12, 131072))
	{
		func_333(8);
		return;
	}
	if (func_337())
	{
		func_338(128);
		return;
	}
	func_333(8);
}

void func_227()
{
	struct<17> /*136*/ sVar0;

	if (func_339())
	{
		func_249(17);
	}
	if (func_340(16))
	{
		func_249(17);
		return;
	}
	if (!func_340(8))
	{
		return;
	}
	func_341(8);
	func_342();
	if (func_48() == -1)
	{
		func_249(4);
		return;
	}
	switch (Global_1572887.f_94.f_1)
	{
		case 2:
			NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
			break;
		case 3:
			NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
			break;
		case 0:
			Var0 = { func_343() };
			NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10));
			break;
		case 1:
			if (NETWORK::NETWORK_REQUEST_JOIN(&(Global_1572887.f_94.f_12)) == -1)
			{
				func_249(17);
				return;
			}
			break;
	}
	func_249(3);
}

void func_228()
{
	if (!func_344())
	{
		func_249(17);
		return;
	}
	func_345();
	func_249(6);
}

void func_229()
{
	struct<17> /*136*/ sVar0;

	if (!func_346())
	{
		return;
	}
	if (func_347() == 2 || func_347() == 3)
	{
		NETWORK::NETWORK_ACTION_PLATFORM_INVITE();
	}
	else if (func_347() == 0 || func_347() == 1)
	{
		Var0 = { func_343() };
		NETWORK::NETWORK_ACCEPT_RS_INVITE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_10));
	}
	func_249(3);
}

void func_230()
{
	if (!func_344())
	{
		func_333(4);
		func_249(17);
		return;
	}
	switch (func_347())
	{
		case 0:
		case 2:
		case 4:
			break;
		case 1:
		case 3:
			break;
	}
	func_70();
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
	func_247();
	func_249(5);
}

void func_231()
{
	int iVar0;

	iVar0 = func_348();
	if (iVar0 == 1)
	{
		func_349(1);
		func_350();
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		func_247();
		func_351(0, 0, 0, 1);
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		func_352(1, 1);
		func_249(8);
	}
	else if (iVar0 == 2)
	{
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_333(4);
		func_249(17);
	}
}

void func_232()
{
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	}
	func_247();
	func_249(9);
}

void func_233()
{
	func_247();
	func_331(1);
	func_249(10);
}

void func_234()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (!func_340(1) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_247();
		func_353();
		func_249(11);
	}
	else if (func_339())
	{
		func_338(16);
		func_249(17);
	}
}

void func_235()
{
	int iVar0;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_333(4);
		func_249(17);
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1224589.f_3, 501393341, true);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_1224589.f_3))
	{
		func_350();
		return;
	}
	func_354();
	func_331(1);
	func_249(12);
}

void func_236()
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar17;
	struct<2> /*16*/ sVar21;
	struct<2> /*16*/ sVar27;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();
	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_333(4);
		func_249(17);
	}
	Var0 = { func_343() };
	Var17 = { func_355() };
	Var21 = { func_356() };
	switch (func_347())
	{
		case 0:
			Var27 = { Var0 };
			break;
		case 1:
			Var27 = { Var0 };
			break;
		case 2:
			Var27 = { Var17 };
			break;
		case 3:
			Var27 = { Var17 };
			break;
		case 4:
			Var27 = { Var21 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var27))
	{
		return;
	}
	func_247();
	func_249(13);
}

void func_237()
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar17;
	struct<2> /*16*/ sVar21;
	struct<2> /*16*/ sVar27;
	int iVar29;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();
	if (func_339())
	{
		func_338(16);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_333(4);
		func_249(17);
	}
	Var0 = { func_343() };
	Var17 = { func_355() };
	Var21 = { func_356() };
	switch (func_347())
	{
		case 0:
			Var27 = { Var0 };
			break;
		case 1:
			Var27 = { Var0 };
			break;
		case 2:
			Var27 = { Var17 };
			break;
		case 3:
			Var27 = { Var17 };
			break;
		case 4:
			Var27 = { Var21 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var27))
	{
		func_338(8);
		func_357(Global_1224589.f_11);
		func_333(2);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		func_333(4);
		func_249(17);
	}
	iVar29 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var27);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar29))
	{
		return;
	}
	func_358(iVar29);
	NETWORK::_0x5A91BCEF74944E93(iVar29, 30f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar29))
	{
		return;
	}
	func_247();
	func_249(14);
}

void func_238()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();
	if ((func_359() && func_360()) && (func_312(255) > 0 && func_361() > -1))
	{
		func_249(16);
	}
}

void func_239()
{
	int iVar0;
	int iVar1;
	struct<65> /*520*/ sVar2;
	int iVar67;
	int iVar68;
	bool bVar69;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();
	if (func_339())
	{
		func_338(16);
		func_249(17);
	}
	iVar0 = Global_1572887.f_94.f_39;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_338(8);
		func_362(1);
		func_357(Global_1224589.f_11);
		func_333(2);
		func_333(4);
		func_249(17);
	}
	if (func_312(iVar0) == 0)
	{
		return;
	}
	if (func_363() != 2 && func_334(255))
	{
		return;
	}
	iVar1 = func_364(Global_1055058[iVar0 /*116*/].f_2);
	if (iVar1 == 1)
	{
		GANG::_0xC0474C8BCF6787AD(GANG::NETWORK_GET_GANG_ID(iVar0));
	}
	if (func_365())
	{
		func_366();
		func_333(32);
		func_333(2);
		func_249(17);
		return;
	}
	if (Global_262777[iVar0 /*69*/].f_1.f_54 != 0)
	{
		iVar1 = func_364(Global_262777[iVar0 /*69*/].f_1.f_54);
	}
	if (iVar1 == 10 || iVar1 == 1)
	{
		if (!func_367(-1, 0))
		{
			return;
		}
		Var2 = { func_368(iVar0) };
		iVar67 = func_369(Var2.f_13, Var2.f_12);
		if (iVar67 == 1)
		{
			return;
		}
		else if (iVar67 == 2)
		{
			func_370(1024);
		}
		if (func_371(iVar0))
		{
			func_333(2);
			func_249(17);
			return;
		}
		else
		{
			func_338(4);
			func_372(1);
			func_72(2);
			func_249(17);
			return;
		}
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		func_331(0);
		return;
	}
	iVar68 = func_347();
	bVar69 = false;
	if ((iVar68 != 1 && iVar68 != 3) || bVar69)
	{
		if (bVar69)
		{
		}
	}
	if (!func_373())
	{
		return;
	}
	func_333(2);
	func_249(17);
}

void func_240()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	func_353();
	if (func_340(4))
	{
		if (Global_1572887.f_94.f_51 != 0)
		{
			return;
		}
		if (func_374())
		{
			if ((!func_340(2) && !func_334(255)) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
			if (!Global_1224589.f_8 || Global_1224589.f_10 == Global_1224589)
			{
				func_375(0, 3, 0);
			}
		}
		else if (func_363() != 2 && func_48() == 0)
		{
			if (func_363() == 0)
			{
				func_376(0);
			}
			else if (func_363() == 1)
			{
				func_18();
			}
		}
	}
	if (!func_340(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (func_334(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			func_362(0);
			func_377(1, 1);
		}
	}
	if (SCRIPTS::IS_LOADING_SCREEN_VISIBLE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}
	if (Global_1572887.f_94.f_1 == 2 || Global_1572887.f_94.f_1 == 3)
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
	}
	if (!func_340(32))
	{
		func_352(0, 1);
	}
	func_72(2);
	func_331(0);
	func_71();
}

void func_241(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_242(int iParam0)
{
	if (iParam0 >= 42 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1899202[iParam0] >= 1;
}

void func_243(int iParam0)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		Global_1898441[iParam0 /*38*/] = 0;
		Global_1898441[iParam0 /*38*/].f_1 = 0;
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_2), "", 24);
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_18), "", 24);
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_21), "", 24);
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_24), "", 24);
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_27), "", 24);
		StringCopy(&(Global_1898441[iParam0 /*38*/].f_30), "", 64);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy(&(Global_1898441[iParam0 /*38*/].f_5[iVar0 /*3*/]), "", 24);
			iVar0++;
		}
	}
}

bool func_244(var uParam0)
{
	return false;
}

void func_245(struct<25> /*200*/ sParam0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, int iParam38, bool bParam39)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (!func_378(Param0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_21)))
	{
		return;
	}
	MISC::_0xCC7FC854B956A128(&(Param0.f_18), &(Param0.f_21));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_2)))
	{
		MISC::_0x9935F76407C32539(&(Param0.f_2));
	}
	if (bParam39)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_5[0 /*3*/])))
		{
			MISC::_0x91D657230BC208D2(&(Param0.f_5[0 /*3*/]), &(Param0.f_24));
			Var0 = { func_379(PLAYER::PLAYER_ID()) };
			if (func_380(Var0))
			{
				MISC::_0xAF530E56505D1BD6(&Var0);
			}
		}
		iVar2 = 1;
		while (iVar2 <= 3)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_5[iVar2 /*3*/])))
			{
				MISC::_0x1694A053DFB61A34(&(Param0.f_5[iVar2 /*3*/]));
			}
			iVar2++;
		}
	}
	MISC::_0xB16FC7B364D86585();
	func_243(iParam38);
	Global_1899202[Param0]++;
}

void func_246(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1572887.f_182.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887.f_182.f_2 != -1)
	{
	}
	if (Global_1572887.f_182.f_3 != -1)
	{
	}
	if (Global_1572887.f_182.f_4 != -1)
	{
	}
	if (Global_1572887.f_182.f_5 != -1)
	{
	}
	if (Global_1572887.f_182.f_6 != -1)
	{
	}
	if (Global_1572887.f_182.f_8 != 0)
	{
	}
}

void func_247()
{
	Global_1572887.f_94.f_40 = MISC::GET_GAME_TIMER();
}

void func_248(int iParam0)
{
	Global_1572887.f_94.f_1 = iParam0;
}

void func_249(int iParam0)
{
	Global_1572887.f_94 = iParam0;
}

bool func_250()
{
	return Global_1572887.f_94.f_56 != -1;
}

void func_251(int iParam0)
{
	Global_1572887.f_182 = iParam0;
}

void func_252(int iParam0)
{
	func_381(&(Global_1572887.f_182.f_1), func_261(iParam0));
}

char* func_253(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("MODE"):
			sVar0 = "mode";
			break;
		case joaat("STATE_ID"):
			sVar0 = "state_id";
			break;
		case joaat("DISTRICT_ID"):
			sVar0 = "district_id";
			break;
		case joaat("REGION_ID"):
			sVar0 = "region_id";
			break;
		case joaat("MINIGAME_ID"):
			sVar0 = "minigame_id";
			break;
		case joaat("SERIES_ID"):
			sVar0 = "series_id";
			break;
		case joaat("MISSION_ID"):
			sVar0 = "mission_id";
			break;
		case joaat("CHAR_SLOT"):
			sVar0 = "char_slot";
			break;
		case joaat("ARG_0"):
			sVar0 = "arg_0";
			break;
		case joaat("ARG_1"):
			sVar0 = "arg_1";
			break;
		case joaat("ARG_2"):
			sVar0 = "arg_2";
			break;
		case joaat("ARG_3"):
			sVar0 = "arg_3";
			break;
		case joaat("ARG_4"):
			sVar0 = "arg_4";
			break;
		case joaat("ARG_5"):
			sVar0 = "arg_5";
			break;
		case joaat("ARG_6"):
			sVar0 = "arg_6";
			break;
		case joaat("ARG_7"):
			sVar0 = "arg_7";
			break;
		case joaat("ARG_8"):
			sVar0 = "arg_8";
			break;
		case joaat("ARG_9"):
			sVar0 = "arg_9";
			break;
		case joaat("LAUNCHPRESET"):
			sVar0 = "launchPreset";
			break;
	}
	return sVar0;
}

int func_254()
{
	return (MISC::GET_GAME_TIMER() - Local_15.f_1);
}

void func_255(var uParam0)
{
	struct<10> /*80*/ sVar0;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	*uParam0 = { Var0 };
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 30;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 31;
		case joaat("REGION_BLU_SISIKA"):
			return 32;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 33;
		case joaat("REGION_CML_DINO_LADY"):
			return 34;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 35;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 36;
		case joaat("REGION_GRT_BEECHERS"):
			return 37;
		case joaat("REGION_GRT_BLACKWATER"):
			return 38;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 39;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 40;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 41;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 50;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 51;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 42;
		case joaat("REGION_GRZ_COHUTTA"):
			return 52;
		case joaat("REGION_GRZ_COLTER"):
			return 43;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 44;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 53;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 45;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 46;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 47;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 48;
		case joaat("REGION_GRZ_THELOFT"):
			return 54;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 55;
		case joaat("REGION_GRZ_WAPITI"):
			return 56;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 49;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 57;
		case joaat("REGION_GUA_CAMP"):
			return 58;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 59;
		case joaat("REGION_GUA_LACAPILLA"):
			return 60;
		case joaat("REGION_GUA_MANICATO"):
			return 61;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 62;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 64;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 65;
		case joaat("REGION_HRT_CROP_FARM"):
			return 66;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 67;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 68;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 69;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 70;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 71;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 72;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 73;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 74;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 75;
		case joaat("REGION_HRT_VALENTINE"):
			return 76;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 77;
		case joaat("REGION_ROA_ANNESBURG"):
			return 78;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 63;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 79;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 80;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 81;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 82;
		case joaat("REGION_ROA_DOVERHILL"):
			return 83;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 84;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 85;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 86;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 87;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 88;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 89;
		case joaat("REGION_ROA_TRAPPER"):
			return 90;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 91;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 92;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 93;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 94;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 95;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 96;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 97;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 98;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 101;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 102;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 103;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 99;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 100;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 104;
		case joaat("REGION_SCM_RHODES"):
			return 105;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 106;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 107;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 108;
		case joaat("REGION_TAL_COCHINAY"):
			return 109;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 110;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 111;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 112;
		case joaat("REGION_TAL_TRAPPER"):
			return 113;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 126;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 127;
		case joaat("REGION_CHO_ARMADILLO"):
			return 120;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 121;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 122;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 124;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 123;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 125;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 114;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 115;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 116;
		case joaat("REGION_GAP_SOLOMONS_FOLLY"):
			return 129;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 117;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 118;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 119;
		case joaat("REGION_CENTRALUNIONRR"):
			return 128;
		default:
			break;
	}
	return -1;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return 0;
		case joaat("LEMOYNE"):
			return 1;
		case joaat("NEWAUSTIN"):
			return 2;
		case joaat("NEWHANOVER"):
			return 3;
		case joaat("WESTELIZABETH"):
			return 4;
		case joaat("GUARMA"):
			return 5;
		default:
			break;
	}
	return -1;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYLIST_RACE_SERIES"):
			return 0;
		case joaat("NET_PLAYLIST_ADVERSARY_MEDIUM"):
			return 2;
		case joaat("NET_PLAYLIST_ADVERSARY_LARGE"):
			return 3;
		case joaat("NET_PLAYLIST_GUN_RUSH_TEAMS"):
			return 4;
		case joaat("NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL"):
			return 5;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES"):
			return 6;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_SMALL"):
			return 7;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM"):
			return 8;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_LARGE"):
			return 9;
		case joaat("NET_PLAYLIST_PRIVATE_SERIES"):
			return 10;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_1"):
			return 11;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_2"):
			return 12;
		case joaat("NET_PLAYLIST_ORBIS_SERIES_3"):
			return 13;
		default:
			break;
	}
	return -1;
}

int func_261(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 2;
			break;
		case joaat("DEMO"):
			iVar0 = 4;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 8;
			break;
		case joaat("PRIVATE"):
			iVar0 = 16;
			break;
		case joaat("FRIENDLY"):
			iVar0 = 32;
			break;
		case joaat("HARDCORE"):
			iVar0 = 64;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 128;
			break;
		case joaat("RANDOM_POSSE"):
			iVar0 = 256;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 512;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 1024;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 2048;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 4096;
			break;
		case joaat("SPAWN_LOCATION"):
			iVar0 = 8192;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 16384;
			break;
		case joaat("CAMP"):
			iVar0 = 32768;
			break;
		case joaat("HANDHELD"):
			iVar0 = 65536;
			break;
		case joaat("BENCHMARK"):
			iVar0 = 131072;
			break;
	}
	return iVar0;
}

bool func_262(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_263(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("SINGLE_PLAYER"):
			sVar0 = "single_player";
			break;
		case joaat("FREEROAM"):
			sVar0 = "freeroam";
			break;
		case joaat("GOLDSTORE"):
			sVar0 = "goldstore";
			break;
		case joaat("SERIES"):
			sVar0 = "series";
			break;
		case joaat("MISSION"):
			sVar0 = "mission";
			break;
		case joaat("MINIGAME"):
			sVar0 = "minigame";
			break;
		case joaat("MISSION_CREATOR"):
			sVar0 = "mission_creator";
			break;
		case joaat("CLIP"):
			sVar0 = "clip";
			break;
		case joaat("BENCHMARK"):
			sVar0 = "benchmark";
			break;
	}
	return sVar0;
}

int func_264(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("NEW_GAME");
			break;
		case 1:
			iVar0 = joaat("SHIFT_F");
			break;
		case 2:
			iVar0 = joaat("DEMO");
			break;
		case 3:
			iVar0 = joaat("INTRO_NOT_DONE");
			break;
		case 4:
			iVar0 = joaat("PRIVATE");
			break;
		case 5:
			iVar0 = joaat("FRIENDLY");
			break;
		case 6:
			iVar0 = joaat("HARDCORE");
			break;
		case 7:
			iVar0 = joaat("NEAR_POSSE");
			break;
		case 8:
			iVar0 = joaat("RANDOM_POSSE");
			break;
		case 9:
			iVar0 = joaat("OPEN_POSSE");
			break;
		case 10:
			iVar0 = joaat("FOLLOW_INVITE");
			break;
		case 11:
			iVar0 = joaat("RANDOM_REGION");
			break;
		case 12:
			iVar0 = joaat("LAST_REGION");
			break;
		case 13:
			iVar0 = joaat("SPAWN_LOCATION");
			break;
		case 14:
			iVar0 = joaat("LAST_LOCATION");
			break;
		case 15:
			iVar0 = joaat("CAMP");
			break;
		case 16:
			iVar0 = joaat("HANDHELD");
			break;
		case 17:
			iVar0 = joaat("BENCHMARK");
			break;
	}
	return iVar0;
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
		case 1:
			return "LEMOYNE";
		case 2:
			return "NEWAUSTIN";
		case 3:
			return "NEWHANOVER";
		case 4:
			return "WESTELIZABETH";
		case 5:
			return "GUARMA";
		default:
			break;
	}
	return "";
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_PLAYLIST_RACE_SERIES";
		case 1:
			return "NET_PLAYLIST_FEATURED_SERIES_001";
		case 2:
			return "NET_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NET_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NET_PLAYLIST_GUN_RUSH_TEAMS";
		case 5:
			return "NET_PLAYLIST_GUN_RUSH_FREE_FOR_ALL";
		case 6:
			return "NET_PLAYLIST_NOMINATED_SERIES";
		case 7:
			return "NET_PLAYLIST_NOMINATED_SERIES_SMALL";
		case 8:
			return "NET_PLAYLIST_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NET_PLAYLIST_NOMINATED_SERIES_LARGE";
		case 10:
			return "NET_PLAYLIST_PRIVATE_SERIES";
		case 11:
			return "NET_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NET_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NET_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "";
}

char* func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACKJACK";
		case 1:
			return "DOMINOES";
		case 2:
			return "POKER";
		case 3:
			return "FILLET";
		case 4:
			return "MILKING_COW";
		case 5:
			return "CLEAN_STALLS";
		case 6:
			return "FENCE_BUILDING";
		default:
			break;
	}
	return "invalid MINIGAME_TYPES";
}

void func_270(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "strandSavedVars", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 129, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".savedBitFlags", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*4*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandPos", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandHashID", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_2), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".thisCommandTOD", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam0[iVar0 /*4*/])->f_3), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_271(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 112, "controls");
	StringCopy(&cVar1, "controls.syncIDs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 105, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B(uParam0[iVar0], &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.flagIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_105), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_105)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_105[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.intIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_107), 3, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_107[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar1, "controls.bitsetIDs", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_110), 2, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_110)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_110[iVar0]), &Var9);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_272(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	StringCopy(&cVar0, "sHorseSlotInfo", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 3053, &cVar0);
	iVar16 = 0;
	while (iVar16 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar16, 64);
		func_382(uParam0[iVar16 /*436*/], &Var8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_273(var uParam0)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	int iVar24;

	StringCopy(&cVar0, "sSaddleInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 80, &cVar0);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleSlot", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eSaddleState", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".eDeadOrDroppedTime", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar8);
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_3), 58, &cVar8);
	iVar24 = 0;
	while (iVar24 < 57)
	{
		cVar16 = { cVar8 };
		StringIntConCat(&cVar16, iVar24, 64);
		func_383(&(uParam0->f_3[iVar24]), &cVar16);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_61), 16, &cVar8);
	iVar24 = 0;
	while (iVar24 < 3)
	{
		cVar16 = { cVar8 };
		StringIntConCat(&cVar16, iVar24, 64);
		func_384(&(uParam0->f_61[iVar24 /*5*/]), &cVar16);
		iVar24++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar8 = { cVar0 };
	StringConCat(&cVar8, ".vSaddleCoords", 64);
	func_152(&(uParam0->f_77), &cVar8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_274(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "sHorseBreakingInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bMinigameSuccessful", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_275(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "sTutorialInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iHighestBondLevelReached", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesOverspurred", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesRevived", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".iTimesDirtyOver50Percent", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bDeadHorseTutorialShouldRun", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_4), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_276(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "sHorseRaceInfo", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSprintBondingBonusUnlocked", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, ".bSpeedStatBonusUnlocked", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_277(struct<8> /*64*/ sParam0, var uParam8)
{
	char cVar0[128];
	struct<16> /*128*/ sVar16;
	int iVar32;

	SAVE::_0x81F4E92BE3958364(uParam8, 61, &Param0);
	iVar32 = 0;
	while (iVar32 < *uParam8)
	{
		MemCopy(&cVar0, {Param0}, 16);
		StringIntConCat(&cVar0, iVar32, 128);
		SAVE::_0x443174C20B8B9E7F(uParam8[iVar32 /*5*/], 5, &cVar0);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iSet", 128);
		SAVE::_0x529B9CCD0972AF4D(uParam8[iVar32 /*5*/], &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eComp", 128);
		SAVE::_0xB25B5A375BE5BE26(&((uParam8[iVar32 /*5*/])->f_1), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eIt", 128);
		SAVE::_0xB25B5A375BE5BE26(&((uParam8[iVar32 /*5*/])->f_2), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".eUp", 128);
		SAVE::_0xB25B5A375BE5BE26(&((uParam8[iVar32 /*5*/])->f_3), &Var16);
		Var16 = { cVar0 };
		StringConCat(&Var16, ".iVal", 128);
		SAVE::_0x529B9CCD0972AF4D(&((uParam8[iVar32 /*5*/])->f_4), &Var16);
		SAVE::_0xE0B45E983BFC0768();
		iVar32++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_278(char* sParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, sParam0, 64);
	SAVE::_0x81F4E92BE3958364(uParam1, 286, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam1[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "status", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam1[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "effect", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam1[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "tags", 64);
		SAVE::_0xB25B5A375BE5BE26(&((uParam1[iVar0 /*3*/])->f_2), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_279(var uParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "cards", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, "cards");
	StringCopy(&cVar0, "cards.eCardSetRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	SAVE::_0xB25B5A375BE5BE26(uParam0, "cards.eMailedCigaretteSets");
	SAVE::_0xE0B45E983BFC0768();
}

void func_280(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "rockCarvings", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eCarvingsRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_281(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "dinoBones", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eDinoRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_282(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "legendaryFish", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eLegendaryFishRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_283(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "gatorEggs", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 20, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todNestLastCleared", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0], &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_284(var uParam0)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 1, "egretFeathers");
	StringCopy(&cVar0, "egretFeathers.eFeathersRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_285(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "taxidermyAnimals", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eTaxidermyRewardFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_286(var uParam0)
{
	int iVar0;
	char cVar1[64];
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	StringCopy(&cVar1, "taxidermyMarital", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 15, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*2*/], 2, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, "todStatuePlacedOnMantle", 64);
		SAVE::_0xB25B5A375BE5BE26(uParam0[iVar0 /*2*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, "bPlayerLeftBeechers", 64);
		SAVE::_0xBB7F4273C186BC4B(&((uParam0[iVar0 /*2*/])->f_1), &Var17);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
}

void func_287(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, "journalData");
	SAVE::_0xB25B5A375BE5BE26(uParam0, "journalData.eFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_288(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "exotics", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eExoticStageFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_289(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "firstRecipePamphlets", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "eFirstRecipePamphletFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_290(var uParam0)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;

	StringCopy(&cVar0, "treasureHunter", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &cVar0);
	Var8 = { cVar0 };
	StringConCat(&Var8, "todTreasureHunterTutorial", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var8);
	Var8 = { cVar0 };
	StringConCat(&Var8, "iNumTreasureHuntLootLocationsFound", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var8);
	SAVE::_0xE0B45E983BFC0768();
}

void func_291(var uParam0, struct<8> /*64*/ sParam1)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	struct<8> /*64*/ sVar9;

	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 19, &Var9);
	iVar0 = 0;
	while (iVar0 < 18)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0], &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_19), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_20), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_21), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_22), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_23), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_24), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_25), &Var9);
}

void func_292(var uParam0, struct<8> /*64*/ sParam1, int iParam9)
{
	struct<8> /*64*/ sVar0;
	struct<8> /*64*/ sVar8;

	Var8 = { Param1 };
	StringConCat(&Var8, "Data", 64);
	StringIntConCat(&Var8, iParam9, 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 120, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "_eFlags", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "_Components", 64);
	func_385(&(uParam0->f_1), Var0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_293(var uParam0)
{
	SAVE::_0x443174C20B8B9E7F(uParam0, 10, "psna_sCamp");
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, "psna_sCampLocation");
	SAVE::_0x529B9CCD0972AF4D(uParam0, "psna_sCampiSize");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_sCampeDistrict");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), "psna_sCampeLocation");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0x443174C20B8B9E7F(&(uParam0->f_3), 7, "psna_sCampRecharge");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), "psna_sCampRechargeYear");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_1), "psna_sCampRechargeMonth");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_2), "psna_sCampRechargeDay");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_3), "psna_sCampRechargeHour");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_4), "psna_sCampRechargeMinute");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_5), "psna_sCampRechargeSecond");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	SAVE::_0xE0B45E983BFC0768();
	SAVE::_0xE0B45E983BFC0768();
}

void func_294(var uParam0)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	char cVar9[64];
	struct<8> /*64*/ sVar17;
	struct<8> /*64*/ sVar25;

	SAVE::_0x443174C20B8B9E7F(uParam0, 47, "psna_sPosse");
	SAVE::_0xBB7F4273C186BC4B(uParam0, "psna_sPosse_bStandardName");
	SAVE::_0x4845E7E7643A908C(&(uParam0->f_1), "psna_sPosse_txtGamertag");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), "psna_sPosse_iLastPosseID");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	StringCopy(&cVar9, "psna_sPosse_data_", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar0 /*8*/]), 8, &Var1);
		Var17 = { Var1 };
		StringConCat(&Var17, "_iPosseID", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_7), &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_6[iVar0 /*8*/]), 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/]), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6[iVar0 /*8*/].f_6), &Var25);
		SAVE::_0xE0B45E983BFC0768();
		SAVE::_0xE0B45E983BFC0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_295(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 288, "nssd_sStable_Data");
	func_386(uParam0);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_41), 246, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_387(&(uParam0->f_41[iVar0 /*49*/]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_287), "nssd_eSavedSystemFlags");
	SAVE::_0xE0B45E983BFC0768();
}

void func_296(var uParam0)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sClothes", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 1012, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 26, &Var1);
	func_291(uParam0, Var1);
	SAVE::_0xE0B45E983BFC0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_26), 601, &Var1);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_292(&(uParam0->f_26[iVar0 /*120*/]), Var1, iVar0);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_388(&(uParam0->f_627), Var1);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_953), "psna_sClothes_SystemFlags");
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_954), "psna_sClothes_PlayerType");
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_955), 55, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 54)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_955[iVar0]), &Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1010), "psna_sClothes_fEyeRedness");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1011), "psna_sClothes_iCurOutfit");
	SAVE::_0xE0B45E983BFC0768();
}

void func_297(var uParam0)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 3, &cVar9);
	SAVE::_0x81F4E92BE3958364(uParam0, 3, &Var1);
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		func_389(uParam0[iVar0 /*2*/], Var1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_298(var uParam0)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	struct<8> /*64*/ sVar9;
	char cVar17[64];

	StringCopy(&cVar17, "psna_sRpg", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 34, &cVar17);
	StringConCat(&cVar17, "psna_sAttributeData", 64);
	SAVE::_0x81F4E92BE3958364(uParam0, 24, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0], 1, &Var1);
		StringConCat(&Var1, "fAttributeXP", 64);
		SAVE::_0x35DEFECAE36D4FAE(uParam0[iVar0], &Var1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar17, "psna_sRpg", 64);
	StringConCat(&cVar17, "psna_sAttributeCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_24), 10, &cVar17);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var1 = { cVar17 };
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_24[iVar0 /*3*/]), 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "fCoreValue", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_24[iVar0 /*3*/]), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "todDegradeLastFixed", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_24[iVar0 /*3*/].f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "iDegradeCount", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_24[iVar0 /*3*/].f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_299(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iVar0, func_390(iVar0));
		iVar0++;
	}
}

int func_300(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return iVar0;
}

bool func_301(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_302(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_303(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_304(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

int func_305(var uParam0, int iParam1, int* iParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, uParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_306(int iParam0)
{
	if (iParam0 == 255)
	{
		return (Global_1109000.f_4[Global_1109504[24 /*2*/]] && Global_1109504[24 /*2*/].f_1) == Global_1109504[24 /*2*/].f_1;
	}
	return func_391(24, iParam0);
}

bool func_307(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_308()
{
	if (func_48() == 0)
	{
		return false;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Mission_EndCredits"))
	{
		return true;
	}
	if ((GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerRPGCore") && func_309(Global_1835011[23 /*74*/].f_1)) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthPoorCS"))
	{
		return true;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerSickDoctorsOpinion"))
	{
		return true;
	}
	if ((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
	{
		return true;
	}
	if (((((((((((((((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0)
{
	int iVar0;

	iVar0 = func_392(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_310(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_311()
{
	int iVar0;

	if (func_48() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_309(Global_1392915[iVar0 /*12*/].f_4))
					{
						return true;
					}
				}
				iVar0++;
			}
		}
		return false;
	}
	return false;
}

int func_312(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1224589.f_5;
	}
	return Global_262777[iParam0 /*69*/];
}

bool func_313(int iParam0, int iParam1)
{
	return (Global_262777[iParam0 /*69*/].f_67 && iParam1) != 0;
}

bool func_314(int iParam0)
{
	return (Global_262148 && iParam0) != 0;
}

void func_315(var uParam0)
{
	func_393(uParam0, 0f);
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_317(var uParam0)
{
	return func_316(*uParam0, 2);
}

float func_318()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_319(int iParam0)
{
	struct<17> /*136*/ sVar0;
	int iVar17;
	char* sVar18;
	struct<44> /*352*/ sVar19;
	int iVar63;
	int iVar64;
	char* sVar65;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		return;
	}
	iVar17 = NETWORK::_0x27B1AE4D8C652F08(Var0.f_10);
	if (iVar17 == -1)
	{
		return;
	}
	if (func_336(Var0, 131072))
	{
		func_395(Var0.f_10);
		func_248(0);
		func_333(8);
		NETWORK::_0x981146E5C9CE9250(iVar17);
		func_396(0);
	}
	sVar18 = func_335(NETWORK::_0xE59F4924BD3A718D(iVar17), joaat("COLOR_POSSE_NEUTRAL"));
	Var19 = 1;
	Var19.f_1 = 1;
	Var19.f_2 = joaat("COLOR_WHITE");
	Var19.f_4 = -1;
	Var19.f_5 = -1134602452;
	Var19.f_6 = 1276832712;
	Var19.f_12 = joaat("COLOR_WHITE");
	Var19.f_13 = joaat("COLOR_WHITE");
	Var19.f_16 = 300;
	Var19.f_21 = 1;
	Var19.f_25.f_1 = 1;
	Var19.f_25.f_9 = joaat("COLOR_WHITE");
	Var19.f_25.f_10 = 8000;
	Var19.f_25.f_11 = 1511356879;
	Var19.f_25.f_18 = 1;
	Var19.f_17 = 1;
	Var19.f_18 = Var0.f_10;
	Var19.f_10 = sVar18;
	Var19.f_14 = joaat("GENERIC_TEXTURES");
	Var19.f_15 = joaat("DEFAULT_PEDSHOT");
	Var19.f_24 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	Var19.f_23 = "IB_GAMERCARD";
	Var19.f_22 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_12)))
	{
		Var19.f_11 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_335(&(Var0.f_2), joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
		Var19.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_FM_CONTENT");
		Var19.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}
	else if (func_48() != -1)
	{
		iVar63 = func_397(MISC::GET_HASH_KEY(&(Var0.f_12)));
		if (iVar63 != -1)
		{
			iVar64 = Global_265073.f_4[iVar63 /*57*/].f_37;
			if (iVar64 == -504335712)
			{
				Var19.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
				Var19.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar65 = MISC::VAR_STRING(2, func_398(Global_265073.f_4[iVar63 /*57*/].f_39));
			}
			else if (iVar64 == 395262693)
			{
				Var19.f_25.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_DEATHMATCH");
				Var19.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar65 = MISC::VAR_STRING(2, func_399(Global_265073.f_4[iVar63 /*57*/].f_39));
			}
			else if (iVar64 == -933924539)
			{
				Var19.f_25.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_RACE");
				Var19.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
				sVar65 = MISC::VAR_STRING(2, func_400(Global_265073.f_4[iVar63 /*57*/].f_39));
			}
			Var19.f_11 = MISC::VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar65);
		}
	}
	else
	{
		Var19.f_11 = MISC::VAR_STRING(42, "NT_INV_BODY_INFO", func_335(&(Var0.f_2), joaat("COLOR_PURE_WHITE")), "PRES_SET_MODE_MP");
		Var19.f_25.f_3 = MISC::VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
		Var19.f_25.f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
	}
	Var19.f_25.f_2 = sVar18;
	Var19.f_25.f_5 = joaat("MP_LOBBY_TEXTURES");
	Var19.f_25.f_6 = joaat("TEMP_PEDSHOT");
	Var19.f_25.f_14 = "HUD_Toast_Soundset";
	Var19.f_25.f_15 = "Toast_On";
	Var19.f_16 = Global_1899378.f_2.f_16;
	if (func_401())
	{
		Var19.f_16 = 600;
	}
	func_402(Var19);
}

void func_320(int iParam0)
{
	var uVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &uVar0, 6))
	{
		return;
	}
	if (func_403())
	{
		func_404(&uVar0);
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		return;
	}
	func_404(&uVar0);
	func_405(&uVar0);
	func_248(4);
	func_396(0);
	func_222(1);
}

void func_321(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_406(1, iVar0);
	func_407(&iVar0);
}

void func_322(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		return;
	}
	if (func_403() && !func_340(16384))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_408(&Var0);
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		func_338(64);
		return;
	}
	if (func_48() != -1 && !func_394())
	{
		func_338(2);
		func_249(17);
		NETWORK::NETWORK_CLEAR_PLATFORM_INVITE();
		return;
	}
	if (!func_344())
	{
		func_333(4);
		return;
	}
	func_408(&Var0);
	func_409(&Var0);
	if (func_410(Var0, 2))
	{
		func_248(3);
	}
	else
	{
		func_248(2);
	}
	NETWORK::_0xD3A3C8B9F3BDEF81();
	func_341(16384);
	func_396(0);
}

void func_323(int iParam0)
{
	struct<6> /*48*/ sVar0;
	struct<2> /*16*/ sVar7;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		return;
	}
	Var7 = { func_379(PLAYER::PLAYER_ID()) };
	if (func_262(Var0.f_5, 2) || func_262(Var0.f_5, 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var7) && !func_403())
		{
			return;
		}
	}
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_2), &Var7) && !func_403())
	{
		return;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var7) && Var0.f_6 == 4)
	{
		return;
	}
	if (func_262(Var0.f_6, 4194304))
	{
		func_333(4);
		func_333(16384);
		func_249(17);
	}
	Global_1572887.f_94.f_54 = Var0.f_6;
	Global_1572887.f_94.f_45 = { Var0 };
	Global_1572887.f_94.f_47 = { Var0.f_2 };
	Global_1572887.f_94.f_55 = Var0.f_5;
}

void func_324()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		Global_1572887.f_94.f_43 = NETWORK::_0x74FB3E29E6D10FA9();
	}
}

void func_325(int iParam0)
{
	vector3 vVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 6))
	{
		return;
	}
	func_338(16);
	Global_1572887.f_94.f_53 = 3;
	Global_1572887.f_94.f_45 = { vVar0 };
	Global_1572887.f_94.f_47 = { vVar0.f_2 };
}

void func_326(int iParam0)
{
	vector3 vVar0;
	struct<2> /*16*/ sVar7;
	bool bVar9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &vVar0, 7))
	{
		return;
	}
	Var7 = { func_379(PLAYER::PLAYER_ID()) };
	bVar9 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&vVar0, &Var7);
	if (func_262(vVar0.f_6, 8) && bVar9)
	{
		return;
	}
	func_411(&vVar0);
	Global_1572887.f_94.f_53 = vVar0.f_5;
	Global_1572887.f_94.f_45 = { vVar0 };
	Global_1572887.f_94.f_47 = { vVar0.f_2 };
	if (Global_1572887.f_94.f_53 > 2 && !func_327())
	{
		Global_1572887.f_94.f_53 = 0;
	}
	else if (Global_1572887.f_94.f_53 == 2 && bVar9)
	{
		Global_1572887.f_94.f_53 = 0;
	}
}

bool func_327()
{
	struct<2> /*16*/ sVar0;
	bool bVar2;
	struct<2> /*16*/ sVar3;
	bool bVar5;
	bool bVar6;
	struct<2> /*16*/ sVar7;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;

	if (Global_1572887.f_94.f_42 != 0)
	{
		return true;
	}
	if (Global_1572887.f_94.f_43 != -1)
	{
		return true;
	}
	if (Global_1572887.f_94.f_53 > 2)
	{
		Var0 = { func_379(PLAYER::PLAYER_ID()) };
		bVar2 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &Var0);
		Var3 = { func_379(GANG::NETWORK_GET_GANG_LEADER(Global_1224589.f_9)) };
		bVar5 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &Var3);
		bVar6 = (bVar2 || bVar5);
		if (func_262(Global_1572887.f_94.f_53, 3))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 4))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 5))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 6))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 7))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 8))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 9))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 10))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 11))
		{
			return false;
		}
		if (func_262(Global_1572887.f_94.f_53, 12))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 13))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 14))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 15))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 16))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 17))
		{
			return false;
		}
		if (func_262(Global_1572887.f_94.f_53, 18))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 19))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 20))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 21))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 22))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 23))
		{
			return bVar6;
		}
		if (func_262(Global_1572887.f_94.f_53, 24))
		{
			return bVar6;
		}
	}
	if (Global_1572887.f_94.f_54 != 0)
	{
		Var7 = { func_379(PLAYER::PLAYER_ID()) };
		bVar9 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_47), &Var7);
		bVar10 = false;
		if (Global_1572887.f_94 > 0)
		{
			bVar10 = true;
		}
		bVar11 = !func_262(Global_1572887.f_94.f_55, 524288);
		bVar12 = !func_262(Global_1572887.f_94.f_55, 2);
		bVar13 = func_262(Global_1572887.f_94.f_55, 2);
		bVar14 = func_262(Global_1572887.f_94.f_55, 1);
		bVar15 = MISC::IS_DURANGO_VERSION();
		bVar16 = (bVar9 && (bVar10 || bVar14));
		bVar17 = (bVar16 && !bVar15);
		bVar18 = ((bVar11 && bVar12) && !bVar9);
		if (func_262(Global_1572887.f_94.f_54, 1))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 2))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 4))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 32))
		{
			return (bVar16 || bVar18);
		}
		if (func_262(Global_1572887.f_94.f_54, 64))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 8))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 16))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 128))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 512))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 8388608))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 1024))
		{
			return bVar17;
		}
		if (func_262(Global_1572887.f_94.f_54, 2048))
		{
			return bVar17;
		}
		if (func_262(Global_1572887.f_94.f_54, 4096))
		{
			return (bVar18 || bVar18);
		}
		if (func_262(Global_1572887.f_94.f_54, 8192))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 16384))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 32768))
		{
			return (bVar16 || bVar18);
		}
		if (func_262(Global_1572887.f_94.f_54, 65536))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 262144))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 524288))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 2097152))
		{
			return bVar16;
		}
		if (func_262(Global_1572887.f_94.f_54, 4194304))
		{
			return false;
		}
		if (func_262(Global_1572887.f_94.f_54, 256))
		{
			return false;
		}
		if (func_262(Global_1572887.f_94.f_54, 1048576))
		{
			return (bVar16 && bVar13);
		}
		if (func_262(Global_1572887.f_94.f_54, 131072))
		{
			return false;
		}
	}
	return false;
}

void func_328(int iParam0)
{
	Global_1572887.f_94.f_51 = iParam0;
}

bool func_329(int iParam0)
{
	return func_262(Global_1572887.f_94.f_42, iParam0);
}

char* func_330()
{
	struct<2> /*16*/ sVar0;
	bool bVar2;
	bool bVar3;
	char cVar4[64];

	Var0 = { func_379(PLAYER::PLAYER_ID()) };
	bVar2 = (Global_1572887.f_94.f_1 == 3 || Global_1572887.f_94.f_1 == 1);
	bVar3 = false;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887.f_94.f_45)) && NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		bVar3 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887.f_94.f_45), &Var0);
	}
	if (func_329(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_329(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_329(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_329(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_329(32))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_329(8))
	{
		return "NT_INV_INCOMPATIBLE_INVITER_VANISHED";
	}
	if (func_329(64))
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (func_329(128))
	{
		return func_412(bVar2, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_329(256))
	{
		return func_412(bVar2, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_262(Global_1572887.f_94.f_54, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (func_262(Global_1572887.f_94.f_54, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (func_262(Global_1572887.f_94.f_54, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (func_262(Global_1572887.f_94.f_54, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (func_262(Global_1572887.f_94.f_54, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (func_262(Global_1572887.f_94.f_54, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (func_262(Global_1572887.f_94.f_54, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (func_262(Global_1572887.f_94.f_54, 8388608))
	{
		return "NT_INV_AIM";
	}
	if (func_262(Global_1572887.f_94.f_54, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (func_262(Global_1572887.f_94.f_54, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_262(Global_1572887.f_94.f_54, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (func_262(Global_1572887.f_94.f_54, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (func_262(Global_1572887.f_94.f_54, 32))
	{
		return func_412(bVar3, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_262(Global_1572887.f_94.f_54, 64))
	{
		return func_412(bVar2, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (func_262(Global_1572887.f_94.f_54, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (func_262(Global_1572887.f_94.f_54, 32768))
	{
		return func_412(bVar3, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (func_262(Global_1572887.f_94.f_54, 65536))
	{
		return func_412(bVar2, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_262(Global_1572887.f_94.f_54, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (func_262(Global_1572887.f_94.f_54, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (func_262(Global_1572887.f_94.f_54, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (func_262(Global_1572887.f_94.f_54, 4194304))
	{
	}
	if (func_262(Global_1572887.f_94.f_54, 256))
	{
	}
	if (func_262(Global_1572887.f_94.f_54, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (func_262(Global_1572887.f_94.f_54, 131072))
	{
	}
	if (Global_1572887.f_94.f_53 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887.f_94.f_53 == 4)
	{
		return "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION";
	}
	if (Global_1572887.f_94.f_53 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887.f_94.f_53 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887.f_94.f_53 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887.f_94.f_53 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887.f_94.f_53 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887.f_94.f_53 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887.f_94.f_53 == 11)
	{
	}
	if (Global_1572887.f_94.f_53 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887.f_94.f_53 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887.f_94.f_53 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887.f_94.f_53 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887.f_94.f_53 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887.f_94.f_53 == 17)
	{
	}
	if (Global_1572887.f_94.f_53 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887.f_94.f_53 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887.f_94.f_53 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887.f_94.f_53 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_94.f_53 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_94.f_53 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_94.f_53 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_94.f_53 == 25)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887.f_94.f_43 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887.f_94.f_43 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887.f_94.f_43 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887.f_94.f_43 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887.f_94.f_43 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887.f_94.f_43 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	StringCopy(&cVar4, "NetInvUnkErr-", 64);
	StringConCat(&cVar4, "eUIFlags=", 64);
	StringIntConCat(&cVar4, Global_1572887.f_94.f_42, 64);
	StringConCat(&cVar4, ",eResponseFlags=", 64);
	StringIntConCat(&cVar4, Global_1572887.f_94.f_54, 64);
	StringConCat(&cVar4, ",nResult=", 64);
	StringIntConCat(&cVar4, Global_1572887.f_94.f_53, 64);
	return func_413(&cVar4, joaat("COLOR_PURE_WHITE"));
}

void func_331(bool bParam0)
{
	if (((bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && !func_340(1))
	{
		NETWORK::NETWORK_START_SOLO_TUTORIAL_SESSION();
		func_333(1);
	}
	else if (((!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) && func_340(1))
	{
		NETWORK::NETWORK_END_TUTORIAL_SESSION();
		func_341(1);
	}
}

int func_332()
{
	return Global_1051081.f_11;
}

void func_333(int iParam0)
{
	func_381(&(Global_1572887.f_94.f_41), iParam0);
}

bool func_334(int iParam0)
{
	return func_391(1, iParam0);
}

char* func_335(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_414(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_336(struct<12> /*96*/ sParam0, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, int iParam17)
{
	return func_262(Param0.f_11, iParam17);
}

bool func_337()
{
	return Global_1898164.f_163;
}

void func_338(int iParam0)
{
	func_381(&(Global_1572887.f_94.f_42), iParam0);
}

bool func_339()
{
	return (MISC::GET_GAME_TIMER() - Global_1572887.f_94.f_40) > Global_1899378.f_2.f_15;
}

bool func_340(int iParam0)
{
	return func_262(Global_1572887.f_94.f_41, iParam0);
}

void func_341(int iParam0)
{
	func_415(&(Global_1572887.f_94.f_41), iParam0);
}

void func_342()
{
	Global_1572887.f_94.f_57 = 0;
}

struct<17> /*136*/ func_343()
{
	return Global_1572887.f_94.f_12;
}

bool func_344()
{
	var uVar0;

	if (!NETWORK::NETWORK_CHECK_ACCESS_AND_ALERT_IF_FAIL())
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return false;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&uVar0))
	{
		return false;
	}
	return true;
}

void func_345()
{
	func_63(64);
	func_65(joaat("FREEROAM"), 1024);
	func_20(3);
	CAM::DO_SCREEN_FADE_OUT(0);
}

bool func_346()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

int func_347()
{
	return Global_1572887.f_94.f_1;
}

int func_348()
{
	if (func_339())
	{
		func_338(16);
		return 2;
	}
	if (!func_394())
	{
		func_338(2);
		return 2;
	}
	return func_416();
}

void func_349(bool bParam0)
{
	if (func_417())
	{
		Global_1357509 = 1;
	}
	if (func_418(joaat("CAMERA_ITEM")))
	{
	}
	if (bParam0 && Global_1935630.f_44 == joaat("WEAPON_KIT_CAMERA"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}
}

void func_350()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, false);
	}
}

void func_351(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_419(iParam0);
	if (!func_420(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_421(128) && !func_422(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_423() == 4)
	{
		func_424(17);
	}
	func_425(512);
}

void func_352(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (bParam0)
		{
			HUD::_HIDE_HUD_COMPONENT(128623374);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
		}
		else
		{
			HUD::_DISPLAY_HUD_COMPONENT(128623374);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
		}
	}
}

void func_353()
{
	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(1) && func_426(32768))
	{
		return;
	}
	PED::_SET_AMBIENT_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	PED::_SET_AMBIENT_ANIMAL_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
}

void func_354()
{
	int iVar0;

	iVar0 = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(iVar0);
}

struct<4> /*32*/ func_355()
{
	return Global_1572887.f_94.f_2;
}

struct<6> /*48*/ func_356()
{
	return Global_1572887.f_94.f_6;
}

void func_357(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	vVar2 = { vParam0 };
	iVar0 = func_427(vParam0);
	if (iVar0 != -1)
	{
		iVar1 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			vVar2 = { VOLUME::_GET_VOLUME_COORDS(iVar1) };
		}
	}
	vVar5.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar5.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar2 = { vVar2 + vVar5 };
	vParam0 = { vParam0 + vVar5 };
	func_428(vVar2, 0f, vParam0, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1, 1);
	func_429(0);
}

void func_358(int iParam0)
{
	Global_1572887.f_94.f_39 = iParam0;
}

int func_359()
{
	if (Global_1572887.f_12 == -1)
	{
		return 0;
	}
	return Global_1058888.f_3;
}

int func_360()
{
	if (Global_1572887.f_12 == -1)
	{
		return 0;
	}
	return Global_1058888.f_5;
}

int func_361()
{
	return Global_262150;
}

void func_362(bool bParam0)
{
	if (!bParam0)
	{
		func_424(18);
	}
	else
	{
		func_430(18);
	}
}

int func_363()
{
	return Global_1572887.f_94.f_44;
}

int func_364(int iParam0)
{
	return iParam0 & 31;
}

bool func_365()
{
	struct<10> /*80*/ sVar0;
	int iVar10;
	int iVar11;

	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0 = { func_431() };
	iVar10 = func_432();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar10))
	{
		iVar11 = iVar10;
		Var0 = func_433(iVar11);
		Var0.f_1 = func_434(iVar11);
		Var0.f_2 = func_435(iVar11);
		Var0.f_3 = func_436(iVar11);
		Var0.f_4 = func_437(iVar11);
	}
	if (!Var0)
	{
		return false;
	}
	switch (Var0.f_1)
	{
		case 2:
			if (func_313(iVar10, 4096))
			{
				return false;
			}
			break;
	}
	func_438(Var0.f_1, Var0.f_2, Var0.f_3, Var0.f_4, 0);
	return true;
}

void func_366()
{
	Global_1572887.f_94.f_57 = 1;
}

bool func_367(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (Global_262777[iVar0 /*69*/] <= 0)
	{
		return false;
	}
	if (Global_262777[iVar0 /*69*/] > 2)
	{
		return false;
	}
	if (Global_1051043 != -1)
	{
		if (iParam0 != Global_1051043)
		{
			return false;
		}
	}
	if (!bParam1 && func_439(0) == 1)
	{
		return false;
	}
	if (func_440(255))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_262777[iVar0 /*69*/].f_1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_262777[iVar0 /*69*/].f_1))
	{
		return false;
	}
	if (Global_262777[iVar0 /*69*/].f_1.f_11 == 0)
	{
		return true;
	}
	return false;
}

struct<65> /*520*/ func_368(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1224589.f_5;
	}
	return Global_262777[iParam0 /*69*/].f_1;
}

int func_369(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	uVar0 = func_441(iParam0, iParam1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar2))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (func_312(iVar1) == 0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	iVar3 = func_442(uVar0, 8192);
	iVar4 = func_442(uVar0, 65536);
	bVar5 = func_442(uVar0, 4096);
	if ((iVar3 || iVar4) && !bVar5)
	{
		return 2;
	}
	return 3;
}

void func_370(int iParam0)
{
	Global_262777[Global_1224589 /*69*/].f_67 = (Global_262777[Global_1224589 /*69*/].f_67 || iParam0);
}

bool func_371(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_367(Global_262777[iParam0 /*69*/].f_1.f_55, func_443(&(Global_262777[iParam0 /*69*/].f_1), 32768)))
	{
		return false;
	}
	if (func_444(&(Global_262777[iParam0 /*69*/].f_1)))
	{
		return false;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_262777[iVar0 /*69*/].f_1 = iParam0;
	Global_262777[iVar0 /*69*/].f_1.f_14 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	NETWORK::_0x5A91BCEF74944E93(iParam0, 30f);
	return true;
}

void func_372(bool bParam0)
{
	int iVar0;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		POSSE::_0xC08BFF658B2E51DA(0);
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

bool func_373()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar8;
	float fVar11;

	iVar0 = PLAYER::GET_PLAYER_PED(Global_1572887.f_94.f_39);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	vVar1.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar1.x, vVar1.y);
	vVar4 = { vVar1 };
	vVar4.f_2 = (vVar4.z + 7f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar7, false))
	{
		vVar1.f_2 = uVar7;
	}
	fVar11 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	if (!func_445(&vVar8, &fVar11, 0))
	{
		vVar8 = { Global_1058888.f_43853.f_283[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*306*/].f_2 };
	}
	func_428(vVar1, fVar11, vVar8, fVar11, 5f, 20f, 1, 1, 1, 1);
	return true;
}

bool func_374()
{
	if (func_446())
	{
		return true;
	}
	if (Global_1572887.f_94.f_51 == 0)
	{
		return false;
	}
	if (func_363() != 2)
	{
		return false;
	}
	if (Global_1572887.f_94.f_53 != 2)
	{
		return false;
	}
	if (func_262(Global_1572887.f_94.f_54, 65536))
	{
		return false;
	}
	if (!func_394())
	{
		return false;
	}
	return true;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887.f_152.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887.f_94 > 0 && Global_1572887.f_94 < 17)
	{
		return 0;
	}
	Global_1572887.f_152.f_4 = 2;
	Global_1572887.f_152.f_5 = (Global_1572887.f_152.f_5 || iParam1);
	Global_1572887.f_152.f_6 = iParam0;
	Global_1572887.f_152.f_13 = iParam2;
	Global_1572887.f_152.f_14 = 0;
	return 1;
}

void func_376(int iParam0)
{
	if (iParam0 != 0)
	{
		func_447(iParam0, -1);
	}
	func_63(4);
	func_20(1);
}

void func_377(bool bParam0, bool bParam1)
{
	if (func_448(255) == 4)
	{
		return;
	}
	if (func_449(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_424(0);
	}
	else
	{
		if (bParam1)
		{
			func_351(0, 0, 0, 1);
		}
		func_430(0);
		func_450(&(Global_1109000.f_379));
		Global_1109000.f_379 = 0f;
		Global_1109000.f_379.f_5 = 1;
		Global_1109000.f_379.f_16 = 0;
		Global_1109000.f_379.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_17 = { Global_1899378.f_23.f_1, Global_1899378.f_23.f_1, Global_1899378.f_23.f_1 };
		Global_1109000.f_379.f_17.f_9 = joaat("VOLSPHERE");
		func_451(&(Global_1109000.f_418));
		Global_1109000.f_418.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_418 = Global_1109000.f_379;
		Global_1109000.f_418.f_5 = 1;
		if (bParam1)
		{
			Global_1109000.f_22.f_16 = 0;
			Global_1109000.f_22.f_17 = 0;
		}
	}
	func_452(Global_1109000.f_379, 42);
	func_453(Global_1109000.f_418, 42);
}

bool func_378(int iParam0)
{
	if (!Global_1899245.f_88[iParam0])
	{
		if (!func_454(&(Global_1899245.f_3[iParam0 /*2*/])))
		{
			func_241(&(Global_1899245.f_3[iParam0 /*2*/]), 0, 0);
		}
		Global_1899245.f_88[iParam0] = 1;
	}
	else if (func_60(&(Global_1899245.f_3[iParam0 /*2*/]), func_455(iParam0), 0))
	{
		func_59(&(Global_1899245.f_3[iParam0 /*2*/]));
		return true;
	}
	return false;
}

struct<2> /*16*/ func_379(int iParam0)
{
	struct<2> /*16*/ sVar0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_380(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_381(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_382(var uParam0, char* sParam1)
{
	char cVar0[64];
	char cVar8[64];
	int iVar16;

	SAVE::_0x8E8FFB9E4AD051D2(uParam0, 436, sParam1, 26);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".txtHorseName", 64);
	SAVE::_0x186608A2AC6F9E88(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseBreed", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eHorseModel", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eGender", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_10), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eLossType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_11), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeOfLoss", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_12), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todTimeOfLoss", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_13), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eSlotState", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_14), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sCarriedData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_15), 283, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_456(&(uParam0->f_15[iVar16 /*94*/]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sPeltSkinData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_298), 58, &cVar0);
	iVar16 = 0;
	while (iVar16 < 57)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_383(&(uParam0->f_298[iVar16]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sVisualPeltSkinInfo", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_356), 16, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_384(&(uParam0->f_356[iVar16 /*5*/]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sBondingData", 64);
	func_457(&(uParam0->f_372), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseCoreData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_398), 9, &cVar0);
	iVar16 = 0;
	while (iVar16 < 2)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_458(&(uParam0->f_398[iVar16 /*4*/]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sEfficiencyData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_407), 13, &cVar0);
	iVar16 = 0;
	while (iVar16 < 3)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_459(&(uParam0->f_407[iVar16 /*4*/]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sWrithingData", 64);
	func_460(&(uParam0->f_420), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sStableOwnedData", 64);
	func_461(&(uParam0->f_422), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sHorseBurdenData", 64);
	func_462(&(uParam0->f_425), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".vLastCoord", 64);
	func_152(&(uParam0->f_427), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fLastHeading", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_430), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampDismounted", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_431), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTimeStampAcquired", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_432), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bHasDefaultSaddle", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_433), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerPurchasedHorse", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_434), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bPlayerBrokeHorse", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_435), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_383(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 1, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCount", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_384(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 5, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".SatchelItem", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupHash", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".TextureLookupTint", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad0", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".UnusedPad1", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_385(var uParam0, struct<8> /*64*/ sParam1)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	struct<8> /*64*/ sVar9;

	SAVE::_0x443174C20B8B9E7F(uParam0, 119, &Param1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_iOutfitHash", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_Array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_1), 118, &Var1);
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Array_Idx", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_1[iVar0 /*3*/]), 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_CompHash", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1[iVar0 /*3*/]), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_WearHash", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1[iVar0 /*3*/].f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_eFlags", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1[iVar0 /*3*/].f_2), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_386(var uParam0)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 41, "nssd_sStableInventory");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(uParam0, 33, "nssd_MountItemGUID_array");
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		StringCopy(&cVar1, "nssd_StableMountGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(uParam0[iVar0 /*4*/], 4, &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data1", 64);
		SAVE::_0x529B9CCD0972AF4D(uParam0[iVar0 /*4*/], &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data2", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_1), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data3", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_2), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data4", 64);
		SAVE::_0x529B9CCD0972AF4D(&((uParam0[iVar0 /*4*/])->f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_33), "nssd_eFeeState");
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_34), "nssd_iFeesTimer");
	iVar0 = 0;
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_35), 6, "nssd_iReservedStats_array");
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		StringCopy(&cVar1, "nssd_iReservedStats_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_35[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_387(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 49, sParam1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sStableBonding", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 4, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data1", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data2", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data3", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data4", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_4), 29, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 27)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_fHorseEventXP_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_4[iVar0]), &cVar1);
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_33), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_33[iVar0 /*4*/]), 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_33[iVar0 /*4*/]), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_33[iVar0 /*4*/].f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_33[iVar0 /*4*/].f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_33[iVar0 /*4*/].f_3), &cVar1);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_152(&(uParam0->f_46), &cVar1);
	SAVE::_0xE0B45E983BFC0768();
}

void func_388(var uParam0, struct<8> /*64*/ sParam1)
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	struct<8> /*64*/ sVar9;
	struct<8> /*64*/ sVar17;

	Var17 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 326, &Param1);
	StringConCat(&Var17, "_BaseLayer", 64);
	SAVE::_0x443174C20B8B9E7F(uParam0, 5, &Var17);
	Var1 = { Var17 };
	StringConCat(&Var1, "_drawable", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_albedo", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_normal", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_material", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_tag", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &Var1);
	SAVE::_0xE0B45E983BFC0768();
	Var17 = { Param1 };
	StringConCat(&Var17, "_Layers", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_5), 321, &Var17);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		SAVE::_0x443174C20B8B9E7F(&(uParam0->f_5[iVar0 /*16*/]), 16, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/]), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5[iVar0 /*16*/].f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_5[iVar0 /*16*/].f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_5[iVar0 /*16*/].f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_5[iVar0 /*16*/].f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5[iVar0 /*16*/].f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5[iVar0 /*16*/].f_15), &Var9);
		SAVE::_0xE0B45E983BFC0768();
		iVar0++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_389(var uParam0, struct<8> /*64*/ sParam1)
{
	struct<8> /*64*/ sVar0;
	struct<8> /*64*/ sVar8;

	Var8 = { Param1 };
	SAVE::_0x443174C20B8B9E7F(uParam0, 2, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "iLocationIndex", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "iVariation", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var0);
	SAVE::_0xE0B45E983BFC0768();
}

char* func_390(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
		case 1:
			return "tooltips/tooltip";
		case 2:
			return ":label";
		case 3:
			return ":duration";
		case 4:
			return ":onlyInSP";
		case 5:
			return ":onlyInMP";
		case 6:
			return ":requiredMissionID";
	}
	return "";
}

bool func_391(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_463(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_464())
	{
		return func_463(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_463(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

int func_392(int iParam0)
{
	if (!func_465(iParam0))
	{
		return -1;
	}
	return func_466(iParam0);
}

void func_393(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_318() - fParam1);
	func_467(uParam0, 1);
	func_468(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_394()
{
	if (Global_1572887.f_12 == 0)
	{
		if (func_469())
		{
			return true;
		}
	}
	return false;
}

void func_395(int iParam0)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<5> /*40*/ sVar18;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	StringCopy(&(Var1.f_2), NETWORK::_0xE59F4924BD3A718D(iVar0), 64);
	NETWORK::_0x16EFB123C4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_12), NETWORK::_0xE79BA3BC265895DA(iVar0), 24);
	Var1.f_10 = iParam0;
	Var1.f_16 = NETWORK::_0x5ED39DA62BEB1330(iVar0);
	Var18.f_2 = -1;
	Var18.f_3 = -1;
	Var18.f_4 = -1;
	func_470(&Var1, &Var18);
}

void func_396(bool bParam0)
{
	if (bParam0)
	{
		func_333(128);
	}
	if (func_48() == 0)
	{
		func_72(2);
	}
	func_249(1);
}

int func_397(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265073.f_2)
	{
		if (Global_265073.f_39905[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265073.f_4[iVar0 /*57*/].f_36 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_398(int iParam0)
{
	switch (iParam0)
	{
		case -1759663922:
			return "UGC_MST_STRY";
		case 35466036:
			return "UGC_MST_ADV";
		case 868063036:
			return "UGC_MST_LEG";
		case 1165474480:
			return "UGC_MST_LEG";
		case 784676450:
			return "UGC_MST_CTL";
		case -1593102174:
			return "UGC_MST_SGM";
		case 1612828680:
			return "UGC_MST_ALMD";
		case 682133028:
			return "UGC_MST_CHS";
		case 605457060:
			return "UGC_MST_FDH";
		case -1545357213:
			return "UGC_MST_HTF";
		case 1053257180:
			return "UGC_MST_HTS";
		case 916298691:
			return "UGC_MST_HEMD";
		case 1692096074:
			return "UGC_MST_MWTD";
		case -471095244:
			return "UGC_MST_RNSK";
		case -1195756641:
			return "UGC_MST_SEIG";
		case 33547358:
			return "UGC_MST_SLSHR";
		case -557106090:
			return "UGC_MST_TATK";
		case -1824689524:
			return "UGC_MST_SPLY";
		case 858456953:
			return "UGC_MST_RAID";
		case -1768719739:
			return "UGC_MST_PLNDR";
		case 1335816198:
			return "UGC_MST_KOTK";
		case 1046222216:
			return "UGC_MST_DVIP";
		case -1870450715:
			return "UGC_MST_BSMN";
		case -450654273:
			return "UGC_MST_CPWGN";
		case -29139709:
			return "UGC_MST_LNDG";
		case 534981680:
			return "UGC_MST_ESCF";
		case -915869673:
			return "UGC_MST_TTYG";
		case -360644098:
			return "UGC_MST_TTYT";
		case -1528996533:
			return "UGC_MST_HTP";
		case -650766784:
			return "UGC_MST_SRMBL";
		case 1668321463:
			return "UGC_MST_SMGRN";
		case 344911429:
			return "UGC_MST_STNDF";
		case -1854465123:
			return "UGC_MST_HLDOT";
		case -1027343918:
			return "UGC_MST_BLDG";
		case -667027782:
			return "UGC_MST_ARWBL";
		case -806226507:
			return "UGC_MST_BRWL";
		case 1520184724:
			return "UGC_MST_AFGPO";
		case 449718152:
			return "UGC_MST_AFGPP";
		case -872811084:
			return "UGC_MST_GRDN";
		case -528055156:
			return "UGC_MST_DUEL";
		case -707139085:
			return "UGC_MST_FRHM";
		case -1861365556:
			return "UGC_MST_PNTTY";
		case -1422136853:
			return "UGC_MST_RVA";
		case -87902341:
			return "UGC_MST_BAO";
		case 1424000300:
			return "UGC_MST_MNTM";
		case 249583080:
			return "UGC_MST_BTYV";
		case -1436089230:
			return "UGC_MST_TTYTR";
		case -825872693:
			return "UGC_MST_FRSTT";
		case -2088359027:
			return "UGC_MST_MNYG";
		case -2083980169:
			return "UGC_MST_HDLSH";
		case -1084202760:
			return "UGC_MST_PWRBL";
		case 1575764607:
			return "UGC_MST_HRSR";
		case 733436798:
			return "UGC_MST_HRSP";
		case 1419108180:
			return "UGC_MST_PWRW";
		case 313483818:
			return "UGC_MST_JST";
		case -1311152903:
			return "UGC_MST_LOOT";
		case 683859288:
			return "UGC_MST_HEMH";
		case -1725070894:
			return "UGC_MST_PRDTR";
		case -1429156655:
			return "UGC_MST_RNGM";
		case -1735381469:
			return "UGC_MST_WWR";
		case 1934718563:
			return "UGC_MST_BRP";
		case 1682048147:
			return "UGC_MST_STGP";
		case 1430637396:
			return "UGC_MST_MYR";
		case -1482947946:
			return "UGC_MST_WAR";
		case -1495857325:
			return "UGC_MST_DSTR";
		case 1078150940:
			return "UGC_MST_AWIP";
		default:
			break;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_TYPE_DM_STANDARD"):
			return "GST_DEATHMATCH";
		case joaat("UGC_TYPE_DM_TEAM"):
			return "GST_DEATHMATCH_TEAM";
		case joaat("UGC_TYPE_DM_LTS"):
			return "GST_DEATHMATCH_LTS";
		case joaat("UGC_TYPE_DM_FTB"):
			return "GST_DEATHMATCH_FTB";
		case 1788958412:
			return "GST_DEATHMATCH_PITP";
		case joaat("UGC_TYPE_DM_LMS"):
			return "GST_DEATHMATCH_LMS";
		case joaat("UGC_TYPE_DM_MM"):
			return "GST_DEATHMATCH_MM";
		case joaat("UGC_TYPE_DM_WOC"):
			return "GST_DEATHMATCH_WOC";
		case joaat("UGC_TYPE_DM_EXC"):
			return "GST_DEATHMATCH_EXC";
		case 1842544025:
			return "GST_DEATHMATCH_TLG";
		case -632356431:
			return "GST_DEATHMATCH_TTLG";
		case -559809431:
			return "GST_DEATHMATCH_HT";
		case 1175500245:
			return "GST_DEATHMATCH_TFTB";
		case joaat("UGC_TYPE_DM_TWOC"):
			return "GST_DEATHMATCH_TWOC";
		case -548018579:
			return "GST_DEATHMATCH_EC";
		case 10577687:
			return "GST_DEATHMATCH_MC";
		case joaat("UGC_TYPE_DM_GR"):
			return "GST_DEATHMATCH_GR";
		case joaat("UGC_TYPE_DM_TGR"):
			return "GST_DEATHMATCH_TGR";
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_400(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_RACE_SUB_TYPE_STANDARD"):
			return "GST_RACE_STANDA";
		case joaat("UGC_RACE_SUB_TYPE_COMBAT"):
			return "GST_RACE_COMBAT";
		case -63669280:
			return "GST_RACE_DUALCO";
		case 851921060:
			return "GST_RACE_ELIM";
		case 2028478397:
			return "GST_RACE_SURVIV";
		case 1457860192:
			return "GST_RACE_TIMECP";
		case -79999383:
			return "GST_RACE_GOLDRU";
		case -1957416901:
			return "GST_RACE_RUNAWT";
		case 218185167:
			return "GST_RACE_TARRAC";
		case joaat("UGC_RACE_SUB_TYPE_OPEN_RACE"):
			return "GST_RACE_OPERAC";
		case -1185533313:
			return "GST_RACE_OPTARA";
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

bool func_401()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

var func_402(struct<26> /*208*/ sParam0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	func_471();
	iVar0 = func_472();
	iVar1 = Global_1898068.f_6;
	iVar2 = (iVar1 + Param0.f_16);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1935689.f_1225.f_1208++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1935689.f_1225.f_1208, 64);
	func_473(&(Global_1935689.f_1225.f_5[iVar0 /*30*/]), Global_1935689.f_1225.f_2, cVar3, Param0);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(76), Global_1935689.f_1225.f_1208);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(77), Param0.f_21);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(78), false);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(62), Param0.f_21);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(70), Param0.f_24);
	if (Param0.f_24)
	{
		Global_1935689.f_1225.f_5[iVar0 /*30*/].f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(68), Param0.f_23);
		Global_1935689.f_1225.f_5[iVar0 /*30*/].f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(71), Param0.f_22);
	}
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_18 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(79), Param0.f_17);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_19 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(50), Param0.f_18);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_20 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(51), Param0.f_18.f_1);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_21 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(80), Param0.f_18.f_2);
	Global_1935689.f_1225.f_5[iVar0 /*30*/].f_17 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(81), iVar2);
	func_475(Global_1935689.f_1225.f_1207 + 1);
	if (Global_1935689.f_1225.f_1208 == 2147483647)
	{
		Global_1935689.f_1225.f_1208 = 0;
	}
	if (func_476() && func_477(Param0.f_17))
	{
		if (func_401())
		{
			Param0.f_25 = 0;
		}
		else
		{
			Param0.f_25 = 3;
		}
		Param0.f_25.f_11 = 778915895;
		Param0.f_25.f_12 = Global_1935689.f_1225.f_5[iVar0 /*30*/];
		iVar15 = func_478(&(Param0.f_25));
		Global_1935689.f_1225.f_5[iVar0 /*30*/].f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/], func_474(83), iVar15);
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1935689.f_1225.f_3, 0, "pm_invite_item", Global_1935689.f_1225.f_5[iVar0 /*30*/]);
	return Global_1935689.f_1225.f_5[iVar0 /*30*/];
}

bool func_403()
{
	return Global_1572887.f_94 > 0;
}

void func_404(var uParam0)
{
	func_479(uParam0);
	func_479(&(uParam0->f_2));
}

void func_405(var uParam0)
{
	Global_1572887.f_94.f_6 = { *uParam0 };
}

void func_406(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<30> /*240*/ sVar2;
	int iVar32;

	iVar0 = 39;
	while (iVar0 >= 0)
	{
		Var2 = { Global_1935689.f_1225.f_5[iVar0 /*30*/] };
		iVar1 = DATABINDING::DATABINDING_READ_INT(Var2.f_18);
		iVar32 = iVar1;
		if (iParam0 != iVar32)
		{
		}
		else
		{
			iVar1 = DATABINDING::DATABINDING_READ_INT(Var2.f_19);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				func_480(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_407(int iParam0)
{
}

void func_408(var uParam0)
{
	func_479(uParam0);
}

void func_409(var uParam0)
{
	Global_1572887.f_94.f_2 = { *uParam0 };
}

bool func_410(struct<4> /*32*/ sParam0, int iParam4)
{
	return func_262(Param0.f_3, iParam4);
}

void func_411(var uParam0)
{
}

char* func_412(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_413(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_414(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_414(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_415(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_416()
{
	if (Global_1572887.f_94.f_54 != 0)
	{
		return 2;
	}
	if (Global_1572887.f_94.f_43 != -1)
	{
		return 2;
	}
	if (Global_1572887.f_94.f_53 > 2)
	{
		return 2;
	}
	if (Global_1572887.f_94.f_53 == 2)
	{
		Global_1572887.f_94.f_53 = 0;
		return 1;
	}
	return 0;
}

bool func_417()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

bool func_418(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			func_481(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_419(int iParam0)
{
	Global_1109000.f_22.f_10 = iParam0;
}

bool func_420(int iParam0)
{
	return (Global_1109000.f_22.f_6 && iParam0) != 0;
}

bool func_421(int iParam0)
{
	return (Global_1109000.f_22.f_8 && iParam0) != 0;
}

bool func_422(int iParam0)
{
	return (Global_1109000.f_4[Global_1109504[iParam0 /*2*/]] && Global_1109504[iParam0 /*2*/].f_1) == Global_1109504[iParam0 /*2*/].f_1;
}

int func_423()
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

int func_424(int iParam0)
{
	if (func_482(&(Global_1109000.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_425(int iParam0)
{
	Global_1109000.f_22.f_8 = (Global_1109000.f_22.f_8 || iParam0);
}

bool func_426(int iParam0)
{
	return (Global_265073.f_73815.f_273 && iParam0) != 0;
}

int func_427(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_449(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899.f_161)
	{
		iVar2 = Global_1894899.f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, Global_1888801[iVar2 /*35*/].f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_483(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_428(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, int iParam11, int iParam12, int iParam13)
{
	if (func_448(255) == 4)
	{
		return;
	}
	if (func_449(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1899378.f_23;
		fParam9 = Global_1899378.f_23.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1899378.f_23;
		fParam9 = Global_1899378.f_23.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1899378.f_23;
		fParam9 = Global_1899378.f_23.f_1;
	}
	if (bParam10)
	{
		func_351(0, 0, 0, 1);
	}
	func_430(0);
	func_430(3);
	Global_1109000.f_448 = iParam11;
	Global_1109000.f_449 = iParam12;
	Global_1109000.f_450 = iParam13;
	func_450(&(Global_1109000.f_379));
	Global_1109000.f_379 = fParam3;
	Global_1109000.f_379.f_5 = 1;
	Global_1109000.f_379.f_17.f_6 = { vParam0 };
	Global_1109000.f_379.f_17.f_3 = { 0f, 0f, 0f };
	Global_1109000.f_379.f_17 = { fParam9, fParam9, fParam9 };
	Global_1109000.f_379.f_17.f_9 = joaat("VOLSPHERE");
	if (fParam8 > 1f)
	{
		Global_1109000.f_379.f_16 = 1;
		Global_1109000.f_379.f_6.f_6 = { Global_1109000.f_379.f_17.f_6 };
		Global_1109000.f_379.f_6.f_3 = { 0f, 0f, 0f };
		Global_1109000.f_379.f_6 = { fParam8, fParam8, fParam8 };
		Global_1109000.f_379.f_6.f_9 = joaat("VOLSPHERE");
	}
	func_451(&(Global_1109000.f_418));
	Global_1109000.f_418.f_6 = { vParam4 };
	Global_1109000.f_418 = fParam7;
	Global_1109000.f_418.f_5 = 1;
	Global_1109000.f_22.f_16 = 0;
	Global_1109000.f_22.f_17 = 0;
	func_452(Global_1109000.f_379, 42);
	func_453(Global_1109000.f_418, 42);
}

void func_429(bool bParam0)
{
	if (!bParam0)
	{
		func_424(14);
	}
	else
	{
		func_430(14);
	}
}

int func_430(int iParam0)
{
	if (func_484(&(Global_1109000.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

struct<10> /*80*/ func_431()
{
	return Global_1572887.f_94.f_29;
}

int func_432()
{
	return Global_1572887.f_94.f_39;
}

var func_433(int iParam0)
{
	return Global_1055058[iParam0 /*116*/].f_39;
}

var func_434(int iParam0)
{
	return Global_1055058[iParam0 /*116*/].f_39.f_1;
}

var func_435(int iParam0)
{
	return Global_1055058[iParam0 /*116*/].f_39.f_2;
}

var func_436(int iParam0)
{
	return Global_1055058[iParam0 /*116*/].f_39.f_3;
}

var func_437(int iParam0)
{
	return Global_1055058[iParam0 /*116*/].f_39.f_4;
}

int func_438(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (!func_485(iParam0, iParam1))
	{
		return 0;
	}
	func_486(iParam0, iParam1, uParam2);
	func_487(iParam3);
	func_488(iParam4);
	func_489(9);
	func_490();
	if (func_465(iParam3))
	{
		func_491(iParam3);
	}
	return 1;
}

int func_439(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_440(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (func_312(iParam0) > 2)
	{
		return true;
	}
	if (Global_262777[iVar0 /*69*/].f_1.f_11 != 0)
	{
		return true;
	}
	if (Global_262777[iVar0 /*69*/].f_1 != 255)
	{
		return true;
	}
	if (Global_262777[iVar0 /*69*/].f_1.f_13 != 2147483647)
	{
		return true;
	}
	return false;
}

var func_441(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (iParam0 == 2147483647)
	{
		return uVar0;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Global_262150.f_1[iVar1 /*5*/] == iParam0 && (iParam1 == 0 || Global_262150.f_1[iVar1 /*5*/].f_1 == iParam1))
		{
			return Global_262150.f_1[iVar1 /*5*/].f_2;
		}
		iVar1++;
	}
	return uVar0;
}

int func_442(var uParam0, int iParam1)
{
	int iVar0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!Global_1224589.f_16[iVar0])
		{
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else if ((Global_262777[iVar0 /*69*/].f_67 && iParam1) != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_443(var uParam0, int iParam1)
{
	return (uParam0->f_15 && iParam1) != 0;
}

bool func_444(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uVar0 = func_441(uParam0->f_13, uParam0->f_12);
	iVar1 = SCRIPTS::COUNT_PLAYER_BITS(&uVar0);
	iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar2 = 0;
	while (iVar2 < func_492())
	{
		iVar3 = func_493(iVar2);
		if (SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar3))
		{
		}
		else if (iVar4 == iVar3)
		{
		}
		else
		{
			iVar1++;
		}
		iVar2++;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&uVar0, iVar4))
	{
		iVar1++;
	}
	return iVar1 > uParam0->f_28;
}

bool func_445(Vector3* vParam0, float* fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (bParam2)
	{
		iVar1 = 0;
		iVar2 = -1;
		fVar3 = 0f;
		iVar1 = 0;
		while (iVar1 <= 15)
		{
			fVar4 = BUILTIN::VDIST(Global_1224589.f_11, Global_1058888.f_43853.f_283[iVar1 /*306*/].f_2);
			if (fVar4 < fVar3 || iVar2 == -1)
			{
				iVar2 = iVar1;
				fVar3 = fVar4;
			}
			iVar1++;
		}
		iVar0 = iVar2;
	}
	iVar0 = Global_1058888.f_43853.f_283[iVar0 /*306*/];
	iVar5 = func_494(iVar0);
	if (iVar5 <= 0)
	{
		return false;
	}
	else
	{
		iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		if (func_495(iVar0, iVar6, vParam0, fParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_446()
{
	return func_262(Global_1572887.f_6, 1);
}

void func_447(int iParam0, int iParam1)
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
}

int func_448(int iParam0)
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

bool func_449(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_450(var uParam0)
{
	struct<30> /*240*/ sVar0;

	*uParam0 = { Var0 };
}

void func_451(var uParam0)
{
	struct<9> /*72*/ sVar0;

	*uParam0 = { Var0 };
}

void func_452(struct<29> /*232*/ sParam0, var uParam29, int iParam30)
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

void func_453(struct<6> /*48*/ sParam0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_454(var uParam0)
{
	return uParam0->f_1;
}

int func_455(int iParam0)
{
	return 60000;
}

void func_456(var uParam0, char* sParam1)
{
	char cVar0[64];
	char cVar8[64];
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 94, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eModel", 64);
	SAVE::_0xB25B5A375BE5BE26(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eItem", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableType", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCarriableConfigInfo", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedQuality", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedSkinQuality", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".ePedRarity", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eDamageCleanliness", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_7), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eOutfit", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_8), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNumMetaAssets", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_9), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sMetaAssetData", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_10), 81, &cVar0);
	iVar16 = 0;
	while (iVar16 < 10)
	{
		cVar8 = { cVar0 };
		StringIntConCat(&cVar8, iVar16, 64);
		func_496(&(uParam0->f_10[iVar16 /*8*/]), &cVar8);
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iCarcassAge", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_91), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bSkinned", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_92), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bLegendary", 64);
	SAVE::_0xBB7F4273C186BC4B(&(uParam0->f_93), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_457(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> /*64*/ sVar8;
	int iVar16;

	SAVE::_0x443174C20B8B9E7F(uParam0, 26, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iBondLevel", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fBondXP", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fHorseEventXP", 64);
	SAVE::_0x81F4E92BE3958364(&(uParam0->f_2), 24, &cVar0);
	iVar16 = 0;
	while (iVar16 < 23)
	{
		if (iVar16 == -1)
		{
		}
		else
		{
			Var8 = { cVar0 };
			StringIntConCat(&Var8, iVar16, 64);
			SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2[iVar16]), &Var8);
		}
		iVar16++;
	}
	SAVE::_0xA844FEB5C22C2C74();
	SAVE::_0xE0B45E983BFC0768();
}

void func_458(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_459(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 4, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iValue", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fValueBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fDrainBuffer", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iLastGameTime", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_460(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsWrithing", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".fWrithingDuration", 64);
	SAVE::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_461(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 3, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eShop", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todStolen", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_2), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

void func_462(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bIsStableOwned", 64);
	SAVE::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".todBurdenPlaced", 64);
	SAVE::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

bool func_463(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_464()
{
	return Global_1109000.f_245;
}

bool func_465(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_466(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_469()
{
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(1377133516))
	{
		return true;
	}
	return false;
}

void func_470(var uParam0, var uParam1)
{
	Global_1572887.f_94.f_12 = { *uParam0 };
	Global_1572887.f_94.f_29 = { *uParam1 };
}

void func_471()
{
	int iVar0;

	iVar0 = (MISC::GET_GAME_TIMER() / 1000);
	Global_1898068.f_6 = iVar0;
}

int func_472()
{
	int iVar0;
	int iVar1;
	struct<30> /*240*/ sVar2;
	int iVar32;

	iVar1 = Global_1898068.f_6;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Var2 = { Global_1935689.f_1225.f_5[iVar0 /*30*/] };
		iVar32 = DATABINDING::DATABINDING_READ_INT(Var2.f_17);
		if (iVar32 < iVar1)
		{
			if (func_498(Var2))
			{
				func_480(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_499();
}

void func_473(var uParam0, int iParam1, char[32] cParam2, struct<16> /*128*/ sParam10)
{
	func_500(uParam0, iParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_474(15), Param10.f_10);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_474(17), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(3), Param10.f_12);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(4), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(5), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(6), Param10.f_15);
}

char* func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 53:
			return "dynamic_list_item_link";
		case 54:
			return "dynamic_list_item_event_channel_hash";
		case 55:
			return "dynamic_list_item_focus_hash";
		case 56:
			return "dynamic_list_item_select_hash";
		case 57:
			return "dynamic_list_item_prompt_text";
		case 58:
			return "dynamic_list_item_prompt_enabled";
		case 59:
			return "dynamic_list_item_prompt_visible";
		case 60:
			return "dynamic_list_item_prompt_option_text";
		case 61:
			return "dynamic_list_item_prompt_option_enabled";
		case 62:
			return "dynamic_list_item_prompt_option_visible";
		case 63:
			return "dynamic_list_item_prompt_option_select_hash";
		case 64:
			return "dynamic_list_item_prompt_toggle_text";
		case 65:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 66:
			return "dynamic_list_item_prompt_toggle_visible";
		case 67:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 68:
			return "dynamic_list_item_prompt_r3_text";
		case 69:
			return "dynamic_list_item_prompt_r3_enabled";
		case 70:
			return "dynamic_list_item_prompt_r3_visible";
		case 71:
			return "dynamic_list_item_select_r3_select_hash";
		case 72:
			return "mount_collection_index";
		case 73:
			return "dynamic_list_item_rename_prompt_enabled";
		case 74:
			return "dynamic_list_item_rename_prompt_visible";
		case 75:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 76:
			return "invite_unique_id";
		case 77:
			return "invite_tracked";
		case 78:
			return "invite_processed";
		case 79:
			return "invite_script_type";
		case 80:
			return "invite_gang_id";
		case 81:
			return "invite_expiration_time";
		case 82:
			return "invite_filter_type";
		case 83:
			return "invite_feed_message_id";
		default:
			break;
	}
	return "null";
}

void func_475(int iParam0)
{
	Global_1935689.f_1225.f_1207 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1935689.f_1225.f_4, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1935689.f_1225.f_1207), 0));
}

bool func_476()
{
	return NETWORK::_NETWORK_ARE_ONLINE_NOTIFICATIONS_SHOWN_IN_STORY_MODE();
}

bool func_477(var uParam0)
{
	return true;
}

int func_478(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_5 == 0)
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == 778915895)
	{
		if (Global_1898068.f_3)
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 3)
	{
		return func_501(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, joaat("PLAYER_MENU"), uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 4)
	{
		return func_502(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, joaat("PLAYER_MENU"), uParam0->f_12, uParam0->f_11, uParam0->f_13, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_18);
	}
	else if (*uParam0 == 1)
	{
		return func_503(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_504(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_9, uParam0->f_16, uParam0->f_4, uParam0->f_17, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_221(func_413(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_413(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_10, uParam0->f_14, uParam0->f_15, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

void func_479(var uParam0)
{
}

void func_480(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1935689.f_1225.f_3, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_1225.f_1, false);
	func_505(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_475((Global_1935689.f_1225.f_1207 - 1));
}

void func_481(int iParam0)
{
	struct<16> /*128*/ sVar0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1934603[iParam0 /*16*/] = { Var0 };
	Global_1934603.f_161 = (Global_1934603.f_161 - 1);
	if (Global_1934603.f_161 < 0)
	{
		Global_1934603.f_161 = 0;
	}
}

bool func_482(var uParam0, int iParam1, int iParam2)
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

bool func_483(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_484(var uParam0, int iParam1, int iParam2)
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

bool func_485(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

void func_486(int iParam0, int iParam1, var uParam2)
{
	Global_1572887.f_45 = iParam0;
	Global_1572887.f_45.f_1 = iParam1;
	Global_1572887.f_45.f_2 = uParam2;
	func_506();
}

void func_487(int iParam0)
{
	Global_1572887.f_45.f_3 = iParam0;
	func_506();
}

void func_488(int iParam0)
{
	Global_1572887.f_45.f_4 = iParam0;
}

void func_489(int iParam0)
{
	Global_1572887.f_45.f_28 = iParam0;
}

void func_490()
{
	func_381(&(Global_1572887.f_6), 1);
	func_381(&(Global_1572887.f_6), 1073741824 /* Float: 2f */);
	func_506();
}

int func_491(int iParam0)
{
	if (func_507())
	{
		return 0;
	}
	if (!func_465(iParam0))
	{
		return 0;
	}
	Global_1051043 = iParam0;
	return 1;
}

int func_492()
{
	return Global_1109000.f_246;
}

int func_493(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1109000.f_248[iParam0];
}

int func_494(int iParam0)
{
	struct<4> /*32*/ sVar0;

	Var0 = Global_1058888.f_43853.f_283.f_4898;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_495(int iParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	struct<5> /*40*/ sVar0;

	Var0 = Global_1058888.f_43853.f_283.f_4898;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

void func_496(var uParam0, char* sParam1)
{
	char cVar0[64];

	SAVE::_0x443174C20B8B9E7F(uParam0, 8, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iDrawable", 64);
	SAVE::_0x529B9CCD0972AF4D(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iAlbedo", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iNormal", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iMaterial", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iPalette", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_4), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint0", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_5), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint1", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_6), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".iTint2", 64);
	SAVE::_0x529B9CCD0972AF4D(&(uParam0->f_7), &cVar0);
	SAVE::_0xE0B45E983BFC0768();
}

int func_497(int iParam0)
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

bool func_498(struct<29> /*232*/ sParam0, var uParam29)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_28);
}

int func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[0 /*30*/].f_17);
	iVar5 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[0 /*30*/].f_26);
	iVar0 = 0;
	while (iVar0 < 40)
	{
		iVar1 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_17);
		iVar2 = DATABINDING::DATABINDING_READ_INT(Global_1935689.f_1225.f_5[iVar0 /*30*/].f_26);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_480(Global_1935689.f_1225.f_5[iVar3 /*30*/]);
	return iVar3;
}

void func_500(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<10> /*80*/ sParam10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_474(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_474(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(53), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(54), Param10.f_4);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(56), Param10.f_5);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(55), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("IB_SELECT");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_474(57), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_474(58), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_474(59), Param10.f_9);
}

var func_501(char* sParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> /*80*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = iParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_502(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> /*80*/ sVar0;
	struct<10> /*80*/ sVar13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = iParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_503(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	uVar21 = UIFEED::_SHOW_ADVANCED_NOTIFICATION(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_504(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = UIFEED::_SHOW_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

void func_505(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_474(83));
	if (func_508(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_506()
{
	int iVar0;

	if (func_48() == -1)
	{
		return;
	}
	iVar0 = Global_1224589;
	Global_1055058[iVar0 /*116*/].f_39 = func_262(Global_1572887.f_6, 1);
	Global_1055058[iVar0 /*116*/].f_39.f_1 = Global_1572887.f_45;
	Global_1055058[iVar0 /*116*/].f_39.f_2 = Global_1572887.f_45.f_1;
	Global_1055058[iVar0 /*116*/].f_39.f_3 = Global_1572887.f_45.f_2;
	Global_1055058[iVar0 /*116*/].f_39.f_4 = Global_1572887.f_45.f_3;
	Global_1055058[iVar0 /*116*/].f_39.f_8 = Global_1572887.f_45.f_4;
	Global_1055058[iVar0 /*116*/].f_39.f_5 = { Global_1572887.f_152 };
}

bool func_507()
{
	return Global_1051043 != -1;
}

bool func_508(int iParam0)
{
	return iParam0 != 0;
}

