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
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	int iLocal_21[3] = { 0, 0, 0 };
	char* sLocal_25 = NULL;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		func_4();
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.423f, -2597.155f, -10f, 0f, 0f, -24.7897f, 116.6365f, 76.68949f, 15f, "m_volArmadillo_Restriction");
	func_7(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0f, 0f, -47.25f, 134.75f, 95.75f, 50f, "m_VolRidgewoodFarm_Restriction");
	func_8(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volTwinRocks_Restriction");
	func_8(iLocal_16, 1);
}

void func_3()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_9())
		{
			iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, -3960.03f, -2122.22f, -4.99f, 0f, 0f, 51f, 4.85f, 7.96f, 13.94f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, -3955.38f, -2127.12f, -4.19f, 0f, 0f, 51f, 7.61f, 7.5f, 12.32f);
			iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_19);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, -3962.87f, -2135.84f, -5.32f, 0f, 0f, 0f, 27f, 27f, 20f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_18, -3934.91f, -2138.85f, -5.32f, 0f, 0f, 0f, 10f, 10f, 20f);
			iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_18);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f);
			sLocal_25 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_25);
			LAW::_0x8C598A930F471938(sLocal_25, iLocal_17);
			LAW::_0x35815F372D43E1E5(sLocal_25, iLocal_18);
			LAW::_0xAD3E07C37A7C1ADC(sLocal_25, iLocal_18);
			LAW::_0xA1B0E6301E2E02A6(sLocal_25, iLocal_19);
		}
	}
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_OWNER"));
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_WIFE"));
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_1"));
	iVar3 = PERSCHAR::_0x112DDF56300BC6E5(joaat("CHO_RID_HORSESHOP_RANCHHAND_2"));
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar3))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar3) && func_10(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(-154581735);
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar2))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar2) && func_10(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(-154581735);
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1) && func_10(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(-154581735);
			}
		}
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0) && func_10(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_11(-154581735);
			}
		}
		else if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0) && !func_10(-154581735))
		{
			if (!STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-262371610, Global_36))
			{
				func_12(-154581735);
			}
		}
	}
}

void func_5()
{
	int iVar0[3];
	int iVar4[3];
	int iVar8[7];
	int iVar16[3];
	int iVar20;
	int iVar21;

	if (!bLocal_20)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return;
		}
		iVar21 = 0;
		while (iVar21 < 3)
		{
			switch (iVar21)
			{
				case 0:
					iVar0[0] = -1745210725;
					iVar0[1] = -1096712211;
					iVar0[2] = -1941005496;
					iVar4[0] = 1898267848;
					iVar4[1] = 974280355;
					iVar4[2] = 1756181464;
					iVar8[0] = -72482077;
					iVar8[1] = 1941336822;
					iVar8[2] = 1710282603;
					iVar8[3] = -1122265410;
					iVar8[4] = 1309948033;
					iVar8[5] = 712371053;
					iVar8[6] = -935952905;
					iVar16[0] = -752772715;
					iVar16[1] = 503623514;
					iVar16[2] = -752772715;
					iVar20 = 574303518;
					break;
				case 1:
					iVar0[0] = -1029093195;
					iVar0[1] = -1325390493;
					iVar0[2] = -1622834706;
					iVar4[0] = 257582350;
					iVar4[1] = -39730787;
					iVar4[2] = -1438901569;
					iVar8[0] = -772691681;
					iVar8[1] = 1011350990;
					iVar8[2] = 705321299;
					iVar8[3] = -2110850686;
					iVar8[4] = 32078073;
					iVar8[5] = 1007204499;
					iVar8[6] = -1142062162;
					iVar16[0] = 34346755;
					iVar16[1] = 482102371;
					iVar16[2] = -502343927;
					iVar20 = 112916013;
					break;
				case 2:
					iVar0[0] = -1443390498;
					iVar0[1] = 689576469;
					iVar0[2] = -1750010031;
					iVar4[0] = -1725439174;
					iVar4[1] = 1857654366;
					iVar4[2] = 2095655613;
					iVar8[0] = 1049317994;
					iVar8[1] = -279038963;
					iVar8[2] = 161441935;
					iVar8[3] = -820561187;
					iVar8[4] = -1268841107;
					iVar8[5] = 2087785010;
					iVar8[6] = -280121448;
					iVar16[0] = 1065585604;
					iVar16[1] = -175048740;
					iVar16[2] = -482127039;
					iVar20 = -1603458673;
					break;
			}
			func_13(iVar21, &iVar0, &iVar4, &iVar8, &iVar16, iVar20);
			iVar21++;
		}
		if (func_10(1583012985) && func_10(479419429))
		{
			func_14(1583012985, 0, 0);
			func_14(479419429, 0, 0);
			func_14(2077022393, 1, 0);
		}
		bLocal_20 = true;
	}
}

void func_6()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_25);
	func_15();
}

void func_7(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, iParam0);
	}
}

bool func_9()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_16(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0, 1);
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

void func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0, 1);
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

void func_13(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	func_17(iParam5);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	switch (iVar0)
	{
		case 0:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[1]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 2);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 1:
			func_17((*iParam1)[0]);
			func_18(&(iLocal_21[iParam0]), 1);
			break;
		case 2:
			func_17((*iParam1)[1]);
			func_18(&(iLocal_21[iParam0]), 2);
			break;
		case 3:
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 4:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[1]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 2);
			break;
		case 5:
			func_17((*iParam1)[0]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 1);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
		case 6:
			func_17((*iParam1)[1]);
			func_17((*iParam1)[2]);
			func_18(&(iLocal_21[iParam0]), 2);
			func_18(&(iLocal_21[iParam0]), 4);
			break;
	}
	if (func_19(iLocal_21[iParam0], 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[0]);
			func_18(&(iLocal_21[iParam0]), 8);
		}
	}
	if (func_19(iLocal_21[iParam0], 2))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[1]);
			func_18(&(iLocal_21[iParam0]), 16);
		}
	}
	if (func_19(iLocal_21[iParam0], 4))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam2)[2]);
			func_18(&(iLocal_21[iParam0]), 32);
		}
	}
	if ((func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 16)) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[6]);
				func_18(&(iLocal_21[iParam0]), 4096);
				break;
			case 2:
				func_17((*iParam3)[3]);
				func_18(&(iLocal_21[iParam0]), 512);
				break;
			case 3:
				func_17((*iParam3)[4]);
				func_18(&(iLocal_21[iParam0]), 1024);
				break;
			case 4:
				func_17((*iParam3)[5]);
				func_18(&(iLocal_21[iParam0]), 2048);
				break;
			case 5:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 6:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
			case 7:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 16))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[3]);
				func_18(&(iLocal_21[iParam0]), 512);
				break;
			case 1:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 16) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[5]);
				func_18(&(iLocal_21[iParam0]), 2048);
				break;
			case 1:
				func_17((*iParam3)[1]);
				func_18(&(iLocal_21[iParam0]), 128);
				break;
			case 2:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8) && func_19(iLocal_21[iParam0], 32))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iVar0)
		{
			case 0:
				func_17((*iParam3)[4]);
				func_18(&(iLocal_21[iParam0]), 1024);
				break;
			case 1:
				func_17((*iParam3)[0]);
				func_18(&(iLocal_21[iParam0]), 64);
				break;
			case 2:
				func_17((*iParam3)[2]);
				func_18(&(iLocal_21[iParam0]), 256);
				break;
		}
	}
	else if (func_19(iLocal_21[iParam0], 8))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[0]);
			func_18(&(iLocal_21[iParam0]), 64);
		}
	}
	else if (func_19(iLocal_21[iParam0], 16))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[1]);
			func_18(&(iLocal_21[iParam0]), 128);
		}
	}
	else if (func_19(iLocal_21[iParam0], 32))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
		{
			func_17((*iParam3)[2]);
			func_18(&(iLocal_21[iParam0]), 256);
		}
	}
	if (!func_19(iLocal_21[iParam0], 8128))
	{
		if (func_19(iLocal_21[iParam0], 8))
		{
			func_17((*iParam4)[0]);
		}
		if (func_19(iLocal_21[iParam0], 16))
		{
			func_17((*iParam4)[1]);
		}
		if (func_19(iLocal_21[iParam0], 32))
		{
			func_17((*iParam4)[2]);
		}
	}
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_12(1497516462);
			func_11(2016141805);
			func_11(1010885152);
			func_11(-502324015);
			break;
		case 2016141805:
			func_11(1497516462);
			func_12(2016141805);
			func_11(1010885152);
			func_11(-502324015);
			break;
		case 1010885152:
			func_11(1497516462);
			func_11(2016141805);
			func_12(1010885152);
			func_11(-502324015);
			break;
		case -502324015:
			func_11(1497516462);
			func_11(2016141805);
			func_11(1010885152);
			func_12(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_11(-538889627);
			func_11(-538880323);
			func_11(-1056767524);
			func_12(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_20();
			func_12(iParam0);
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
			func_21();
			func_12(iParam0);
			break;
		case 2019386373:
			func_11(-664252410);
			func_11(2109952320);
			func_12(2019386373);
			break;
		case -664252410:
			func_11(2019386373);
			func_11(2109952320);
			func_12(-664252410);
			break;
		case 2109952320:
			func_11(2019386373);
			func_11(-664252410);
			func_12(2109952320);
			break;
		case -1674179981:
			func_11(-1835851517);
			func_11(-1838352012);
			func_12(-1674179981);
			break;
		case -1835851517:
			func_11(-1674179981);
			func_11(-1838352012);
			func_12(-1835851517);
			break;
		case -1838352012:
			func_11(-1674179981);
			func_11(-1835851517);
			func_12(-1838352012);
			break;
		case -1717960576:
			func_11(210001842);
			func_12(-1717960576);
			break;
		case 210001842:
			func_11(-1717960576);
			func_12(210001842);
			break;
		case -150493654:
			func_11(-1271608261);
			func_11(1846061697);
			func_11(-1145519186);
			func_12(-150493654);
			break;
		case -1271608261:
			func_11(-150493654);
			func_11(1846061697);
			func_11(-1145519186);
			func_12(-1271608261);
			break;
		case 1846061697:
			func_11(-150493654);
			func_11(-1271608261);
			func_11(-1145519186);
			func_12(1846061697);
			break;
		case -1145519186:
			func_11(-150493654);
			func_11(-1271608261);
			func_11(1846061697);
			func_12(-1145519186);
			break;
		case 1766284049:
			func_11(280705402);
			func_11(1926308480);
			func_12(1766284049);
			break;
		case 280705402:
			func_11(1766284049);
			func_11(1926308480);
			func_12(280705402);
			break;
		case 1926308480:
			func_11(1766284049);
			func_11(280705402);
			func_12(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_11(439465264);
				func_12(1609506757);
			}
			else
			{
				func_11(1609506757);
				func_11(439465264);
			}
			break;
		case 439465264:
			if (func_10(1609506757))
			{
				if (bParam1)
				{
					func_12(439465264);
				}
				else
				{
					func_11(439465264);
				}
			}
			break;
		case 1822001510:
			func_11(-1612662716);
			func_12(1822001510);
			break;
		case -1612662716:
			func_11(1822001510);
			func_12(-1612662716);
			break;
		case 1306158345:
			func_11(1952610440);
			func_11(-223469678);
			func_11(-404698347);
			func_11(1517904467);
			func_12(1306158345);
			break;
		case 1952610440:
			func_11(1306158345);
			func_11(-223469678);
			func_11(-404698347);
			func_11(1517904467);
			func_12(1952610440);
			break;
		case -223469678:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-404698347);
			func_11(1517904467);
			func_12(-223469678);
			break;
		case -404698347:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-223469678);
			func_11(1517904467);
			func_12(-404698347);
			break;
		case 1517904467:
			func_11(1306158345);
			func_11(1952610440);
			func_11(-223469678);
			func_11(-404698347);
			func_12(1517904467);
			break;
		case 1376646519:
			func_11(931649776);
			func_11(-434590080);
			func_11(1743048395);
			func_11(449774763);
			func_12(1376646519);
			break;
		case 931649776:
			func_11(1376646519);
			func_11(-434590080);
			func_11(1743048395);
			func_11(449774763);
			func_12(931649776);
			break;
		case -434590080:
			func_11(1376646519);
			func_11(931649776);
			func_11(1743048395);
			func_11(449774763);
			func_12(-434590080);
			break;
		case 1743048395:
			func_11(1376646519);
			func_11(931649776);
			func_11(-434590080);
			func_11(449774763);
			func_12(1743048395);
			break;
		case 449774763:
			func_11(1376646519);
			func_11(931649776);
			func_11(-434590080);
			func_11(1743048395);
			func_12(449774763);
			break;
		case -1414537028:
			func_11(38162571);
			func_11(1350391819);
			func_11(54073871);
			func_12(-1414537028);
			break;
		case 38162571:
			func_11(-1414537028);
			func_11(1350391819);
			func_11(54073871);
			func_12(38162571);
			break;
		case 1350391819:
			func_11(-1414537028);
			func_11(38162571);
			func_11(54073871);
			func_12(1350391819);
			break;
		case 54073871:
			func_11(-1414537028);
			func_11(38162571);
			func_11(1350391819);
			func_12(54073871);
			break;
		case 198200492:
			func_12(198200492);
			func_11(-1124061431);
			func_11(52706132);
			func_11(-259123672);
			break;
		case -1124061431:
			func_11(198200492);
			func_12(-1124061431);
			func_11(52706132);
			func_11(-259123672);
			break;
		case 52706132:
			func_11(198200492);
			func_11(-1124061431);
			func_12(52706132);
			func_11(-259123672);
			break;
		case -259123672:
			func_11(198200492);
			func_11(-1124061431);
			func_11(52706132);
			func_12(-259123672);
			break;
		case -919512195:
			func_12(-919512195);
			func_11(-1925798111);
			func_11(420709909);
			func_11(1703426636);
			break;
		case -1925798111:
			func_12(-1925798111);
			func_11(-919512195);
			func_11(420709909);
			func_11(1703426636);
			break;
		case 420709909:
			func_12(420709909);
			func_11(-919512195);
			func_11(-1925798111);
			func_11(1703426636);
			break;
		case 1703426636:
			func_12(1703426636);
			func_11(-919512195);
			func_11(-1925798111);
			func_11(420709909);
			break;
		case -1223121209:
			func_12(-1223121209);
			func_11(630808005);
			break;
		case 630808005:
			func_12(630808005);
			func_11(-1223121209);
			break;
		case 1453909576:
			func_12(1453909576);
			func_11(1643531967);
			break;
		case 1643531967:
			func_12(1643531967);
			func_11(1453909576);
			break;
		case 0:
			func_12(0);
			func_11(473295046);
			func_11(-1738165526);
			break;
		case 473295046:
			func_12(473295046);
			func_11(0);
			func_11(-1738165526);
			break;
		case -1738165526:
			func_12(-1738165526);
			func_11(0);
			func_11(473295046);
			break;
		case 932909855:
			func_12(932909855);
			func_11(2051822093);
			break;
		case 2051822093:
			func_12(2051822093);
			func_11(932909855);
			break;
		case 405586984:
			func_12(405586984);
			func_11(1509509592);
			func_11(-959357075);
			func_11(-1311865656);
			break;
		case 1509509592:
			func_12(1509509592);
			func_11(405586984);
			func_11(-959357075);
			func_11(-1311865656);
			break;
		case -959357075:
			func_12(-959357075);
			func_11(1509509592);
			func_11(405586984);
			func_11(-1311865656);
			break;
		case -1311865656:
			func_12(-1311865656);
			func_11(1509509592);
			func_11(-959357075);
			func_11(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_12(-524145696);
			}
			else
			{
				func_11(-524145696);
			}
			func_11(1626481264);
			func_11(282809459);
			break;
		case 282809459:
			func_12(282809459);
			func_11(1626481264);
			func_11(-524145696);
			break;
		case 1626481264:
			func_12(1626481264);
			func_11(-524145696);
			func_11(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_12(885203519);
			}
			else
			{
				func_11(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_12(-1080627546);
			}
			else
			{
				func_11(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_10(iParam0))
				{
					func_12(iParam0);
				}
			}
			else if (func_10(iParam0))
			{
				func_11(iParam0);
			}
			break;
	}
}

void func_15()
{
	func_22(-1745210725);
	func_22(-1096712211);
	func_22(-1941005496);
	func_22(1898267848);
	func_22(974280355);
	func_22(1756181464);
	func_22(-72482077);
	func_22(1941336822);
	func_22(1710282603);
	func_22(-1122265410);
	func_22(1309948033);
	func_22(-935952905);
	func_22(712371053);
	func_22(-752772715);
	func_22(503623514);
	func_22(-407026996);
	func_22(574303518);
	func_22(-1029093195);
	func_22(-1325390493);
	func_22(-1622834706);
	func_22(257582350);
	func_22(-39730787);
	func_22(-1438901569);
	func_22(-772691681);
	func_22(1011350990);
	func_22(705321299);
	func_22(-2110850686);
	func_22(32078073);
	func_22(-1142062162);
	func_22(1007204499);
	func_22(34346755);
	func_22(482102371);
	func_22(-502343927);
	func_22(112916013);
	func_22(-1443390498);
	func_22(689576469);
	func_22(-1750010031);
	func_22(-1725439174);
	func_22(1857654366);
	func_22(2095655613);
	func_22(1049317994);
	func_22(-279038963);
	func_22(161441935);
	func_22(-820561187);
	func_22(-1268841107);
	func_22(-280121448);
	func_22(2087785010);
	func_22(1065585604);
	func_22(-175048740);
	func_22(-482127039);
	func_22(-1603458673);
	iLocal_21[0] = 0;
	iLocal_21[1] = 0;
	iLocal_21[2] = 0;
	bLocal_20 = false;
}

int func_16(int iParam0, int iParam1)
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

void func_17(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_23(uParam0, iParam1);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_20()
{
	func_11(-939420910);
	func_11(-1187950766);
	func_11(356365161);
	func_11(753127042);
	func_11(-2038424081);
	func_11(1884271742);
	func_11(459290420);
}

void func_21()
{
	func_11(704802028);
	func_11(588987611);
	func_11(2008888900);
	func_11(1649996811);
	func_11(227918160);
	func_11(168171957);
	func_11(1193080109);
	func_11(-491981251);
	func_11(-639037538);
	func_11(-618620429);
}

void func_22(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_23(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

