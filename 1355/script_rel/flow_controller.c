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
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_2() == -1)
	{
		while (!func_3(1024))
		{
			BUILTIN::WAIT(0);
		}
	}
	Global_1879534.f_1910 = 0;
	Global_1879534.f_1 = 0;
	Global_1879534.f_2 = 1;
	if (Global_1572887.f_12 == 0)
	{
		func_4();
	}
	Global_1879534.f_1910 = 0;
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = true;
		}
		else
		{
			if (Global_1879534.f_2)
			{
				iVar1 = 0;
				while (Global_1879534.f_2 && iVar1 < Global_1879534.f_7300)
				{
					if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
					{
						Global_1879534.f_2 = 0;
					}
					else
					{
						iVar1 = (1 + iVar1);
					}
					BUILTIN::WAIT(250);
				}
			}
			else
			{
				if (!Global_1879534.f_7301.f_1)
				{
					if (Global_1879534.f_7301)
					{
						if (!Global_1879534)
						{
							bVar2 = func_5(&Global_0, 2);
							if (!bVar2)
							{
								if (!func_6(196))
								{
									func_7();
								}
							}
						}
					}
				}
				BUILTIN::WAIT(0);
			}
		}
	}
	func_1();
}

void func_1()
{
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887.f_12;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1887078.f_1682[iVar0 /*13*/].f_8 = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1887078.f_1696[iVar0 /*2*/] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_1887078.f_1707[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_1887078.f_1682[iVar0 /*13*/] = 0;
		iVar0++;
	}
	Global_1055058[Global_1225639 /*116*/].f_15.f_6 = -1;
	Global_1887078.f_1722 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1887078.f_1720 = -1;
}

bool func_5(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_6(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_7()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = -1;
	func_9();
	iVar1 = 0;
	if (Global_1879534.f_10 != -1)
	{
		iVar2 = 1;
		iLocal_15 = 0;
		iLocal_14 = Global_1879534.f_10;
	}
	else if (CAM::IS_SCREEN_FADED_OUT() && Global_1572887.f_12 == -1)
	{
		iVar2 = Global_1879534.f_7300;
		Global_1879534.f_6 = 1;
	}
	else if (Global_1879534.f_7 || (Global_1572887.f_12 == -1 && func_10(500)))
	{
		iLocal_14 = 0;
		iLocal_15 = 0;
		iVar2 = Global_1879534.f_7300;
	}
	else
	{
		iVar2 = 1;
	}
	func_11(&iVar2);
	func_12();
	while (iVar1 < iVar2 && !bVar3)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iLocal_14 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iLocal_14 /*4*/], 1))
			{
				iVar0 = iLocal_14;
				func_13(iVar0, 0);
				if (Global_1879534.f_6 || Global_1879534.f_11[iVar0])
				{
					func_13(iVar0, 1);
					if (!Global_1879534.f_7)
					{
						if (Global_1879534.f_11[iVar0])
						{
							Global_1879534.f_11[iVar0] = 0;
						}
						else
						{
							Global_1879534.f_6 = 0;
						}
					}
				}
				if (Global_1572887.f_12 == -1)
				{
					iVar1++;
				}
			}
			if (Global_1572887.f_12 == 0)
			{
				iVar1++;
			}
		}
		else
		{
			iLocal_15++;
			if (iLocal_15 >= Global_1879534.f_7300)
			{
				Global_1879534.f_7301.f_1 = 1;
				Global_1879534.f_1 = 0;
				return;
			}
		}
		iLocal_14++;
		if (iLocal_14 >= Global_1879534.f_7300)
		{
			if (!Global_1879534.f_1910)
			{
				Global_1879534.f_1 = 0;
			}
			iLocal_15++;
			Global_1879534.f_1910 = 0;
			Global_1879534.f_6 = 0;
			Global_1879534.f_7 = 0;
			iLocal_15 = 0;
			iLocal_14 = 0;
		}
		if (MISC::_0xC43CD2668B204419() - MISC::_0x72904D3D62AF5839()) <= BUILTIN::FLOOR((BUILTIN::TO_FLOAT(MISC::_0xC43CD2668B204419()) * 0.2f))
		{
			bVar3 = true;
		}
	}
}

void func_8()
{
}

void func_9()
{
}

bool func_10(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

void func_11(int iParam0)
{
}

void func_12()
{
	Global_1898164.f_164 = func_14(0, 1, 0);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1;
	iVar1 = iVar0;
	iVar2 = Global_1879534.f_7222[iParam0 /*2*/];
	iVar3 = Global_1879534.f_7222[iParam0 /*2*/].f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 2))
	{
		iLocal_15++;
		return;
	}
	func_15(iParam0, iVar0);
	iVar0 = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1;
	if (Global_1879534.f_1911[iVar0 /*3*/] == 531432813)
	{
		func_15(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1)
		{
			iVar1 = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1;
			func_15(iParam0, Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1);
		}
	}
}

bool func_14(int iParam0, bool bParam1, bool bParam2)
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
		if (func_16())
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
		iVar0 = func_17(Global_1898164.f_1[0 /*5*/]);
		if (func_18(iVar0) && func_19(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_20(Global_1898164.f_1[0 /*5*/]))
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

int func_15(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = Global_1879534.f_1911[iParam1 /*3*/];
	iVar2 = Global_1879534.f_1911[iParam1 /*3*/].f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_21(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_22(iVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iParam0 /*4*/]), 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_23(iVar2);
			break;
		case -217347738:
			iVar0 = func_24(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_25(iVar2);
			break;
		case 1984622930:
			iVar0 = func_26(iVar2);
			break;
		case -661286798:
			iVar0 = func_27(iVar2);
			break;
		case -1532130030:
			iVar0 = func_28(iVar2);
			break;
		case 1174602905:
			iVar0 = func_29(iVar2);
			break;
		case 1111033820:
			iVar0 = func_30(iVar2);
			break;
		case 1986927063:
			iVar0 = func_31(iVar2);
			break;
		case -1982716178:
			iVar0 = func_32(iVar2);
			break;
		case -964850613:
			iVar0 = func_33(iVar2);
			break;
		case -1913176419:
			iVar0 = func_34(iVar2);
			break;
		case 1210875743:
			iVar0 = func_35(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_36(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_37(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_38(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_39(iVar2);
			break;
		case 939785963:
			iVar0 = func_40(iVar2);
			break;
		case -2146402779:
			iVar0 = func_41(iVar2);
			break;
		case -1785731347:
			iVar0 = func_42(iVar2);
			break;
		case -2093459088:
			iVar0 = func_43(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_44(iParam0, iVar2);
			break;
		case 566451265:
			iVar0 = func_45(iVar2);
			break;
		case -115271859:
			iVar0 = func_46(iVar2);
			break;
		case 2021594245:
			iVar0 = func_47(iVar2);
			break;
		case -806419157:
			iVar0 = func_48(iVar2);
			break;
		case -1110793538:
			iVar0 = func_49(iVar2);
			break;
		case 2088328892:
			iVar0 = func_50(iVar2);
			break;
		case -1535636242:
			iVar0 = func_51(iVar2);
			break;
		case 1509183597:
			iVar0 = func_52(iVar2);
			break;
		case 1281917784:
			iVar0 = func_53(iParam0, iVar2);
			break;
		default:
			if (!func_54(iVar1, iVar2, &iVar0))
			{
				iVar0 = -2;
			}
			break;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 2))
	{
		if (iVar0 != -1)
		{
			Global_1879534.f_1 = 1;
			Global_1879534.f_1910 = 1;
		}
		func_55(iParam0, iVar0);
	}
	return iVar0;
}

bool func_16()
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

int func_17(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_57(func_56(iParam0));
}

bool func_18(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_19(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_20(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_21(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1879534.f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
	return -2;
}

int func_22(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1879534.f_7300)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
	{
		return -2;
	}
	MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 2);
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
	{
		MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iVar0 /*4*/]), 1);
	}
	return -2;
}

int func_23(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 42)
	{
		return -2;
	}
	return iVar0;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (iVar0 <= -1 || iVar0 >= Global_1879534.f_7300)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	iVar2 = Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1;
	iVar3 = Global_1879534.f_7222[iVar0 /*2*/];
	iVar4 = Global_1879534.f_7222[iVar0 /*2*/].f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (Global_1879534.f_1911[iVar5 /*3*/] == 531432813)
		{
			iVar6 = Global_1879534.f_1911[iVar5 /*3*/].f_2;
			iVar7 = Global_1879534.f_211[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if (Global_1879534.f_211[iParam0 /*4*/].f_1 == 1)
	{
		iVar1 = 1;
	}
	func_58(iVar0, iVar1);
	return -2;
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	func_59(iVar0, iVar1);
	return -2;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if (Global_1879534.f_211[iParam0 /*4*/].f_2 == 1)
	{
		bVar2 = true;
	}
	func_60(iVar0, iVar1, bVar2);
	return -2;
}

int func_28(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1879534.f_211[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (func_61(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (func_62(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (func_63(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_31(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == Global_1879534.f_7300)
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_32(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	if (!Global_1879534.f_7301.f_131[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_33(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 104)
	{
		return -2;
	}
	Global_1879534.f_7301.f_131[iVar0] = 1;
	return -2;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar1 = Global_1879534.f_211[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(func_64(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), func_65(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), func_66(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(func_67(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), func_68(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), func_69(iVar1));
	}
	return -2;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam1 == -1)
	{
		return -2;
	}
	if (!func_70())
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam1 /*4*/].f_2;
	iVar1 = Global_1879534.f_211[iParam1 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam1 /*4*/];
	if (!Global_1879534.f_46[iParam0])
	{
		if (func_71(Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3))
		{
			Global_1879534.f_112[iParam0] = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3;
		}
		else
		{
			Global_1879534.f_112[iParam0] = func_72();
			func_73(&(Global_1879534.f_112[iParam0]), iVar0, iVar1, iVar2, 0, 0, 0, 0);
			Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3 = Global_1879534.f_112[iParam0];
		}
		Global_1879534.f_46[iParam0] = 1;
	}
	else
	{
		iVar3 = (MISC::GET_GAME_TIMER() - func_74());
		iVar4 = -1;
		if ((Global_1572887.f_12 == -1 && Global_1430242.f_9) && iVar3 >= 5000)
		{
			iVar4 = func_75(1);
		}
		if (func_76(func_72(), Global_1879534.f_112[iParam0], 1) || iVar4 == 0)
		{
			Global_1879534.f_46[iParam0] = 0;
			Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3 = -15;
			if (iVar4 == 0)
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_36(int iParam0, int iParam1)
{
	if (!func_70())
	{
		return -2;
	}
	if (!Global_1879534.f_46[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1879534.f_79[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_1879534.f_46[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > Global_1879534.f_79[iParam0])
	{
		Global_1879534.f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_70())
	{
		return -2;
	}
	if (!Global_1879534.f_46[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = func_72();
		if (func_64(iVar1) > iVar0)
		{
			func_73(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_64(iVar1) != iVar0)
		{
			func_77(&iVar1, 0);
			func_78(&iVar1, 0);
			func_79(&iVar1, iVar0);
		}
		Global_1879534.f_112[iParam0] = iVar1;
		Global_1879534.f_46[iParam0] = 1;
	}
	else if (func_80(Global_1879534.f_112[iParam0], 1))
	{
		Global_1879534.f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;

	if (!Global_1879534.f_46[iParam0])
	{
		iVar0 = iParam1;
		Global_1879534.f_112[iParam0] = iVar0;
		Global_1879534.f_46[iParam0] = 1;
	}
	else if (func_80(Global_1879534.f_112[iParam0], 1))
	{
		Global_1879534.f_46[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_39(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_40(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_81())
	{
		switch (iVar0)
		{
			case 49:
				func_40(151);
				break;
			case 18:
				func_40(153);
				func_40(155);
				break;
			case 13:
				func_40(154);
				break;
		}
	}
	if (func_19(Global_1347702[iVar0 /*49*/].f_12, 2048))
	{
		return -2;
	}
	else if (func_82(iVar0, 0))
	{
		return -2;
	}
	else if (func_83(iVar0))
	{
		return -2;
	}
	return -1;
}

int func_41(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_42(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!func_84(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (func_85(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (!func_85(iVar0))
	{
		if ((!Global_1935630 & 2048 != 0 && !func_20(Global_1572864.f_8)) && !func_14(0, 1, 1))
		{
			if (func_87(iVar0, 0, 1, func_86()))
			{
			}
		}
	}
	else
	{
		if (func_2() == 0)
		{
		}
		return -2;
	}
	return -1;
}

int func_44(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (func_6(32768))
	{
		return -1;
	}
	if (!func_85(iVar0))
	{
		if (func_88(Global_1935630, 1048576))
		{
			return -1;
		}
		if (!func_88(Global_1935630, 2048) && !func_14(0, 1, 1))
		{
			if ((func_2() == -1 && func_70()) && func_5(&Global_0, 3))
			{
				return -1;
			}
			if (func_87(iVar0, func_70(), 0, -1))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar0);
	if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar0))
	{
		return -1;
	}
	SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(iVar0, iVar1);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar0);
	return -2;
}

int func_46(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_47(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_48(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_49(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_50(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_51(int iParam0)
{
	iParam0 = iParam0;
	return -1;
}

int func_52(int iParam0)
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

	if (iParam0 == -1)
	{
		return -2;
	}
	if (Global_1879534.f_1)
	{
		return -1;
	}
	iVar0 = func_75(0);
	if (iVar0 >= Global_1879534.f_211[iParam0 /*4*/])
	{
		iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
		iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
		iVar3 = Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1;
		iVar4 = Global_1879534.f_7222[iVar1 /*2*/];
		iVar5 = Global_1879534.f_7222[iVar1 /*2*/].f_1;
		if (iVar3 < iVar4)
		{
			return -2;
		}
		if (iVar3 > iVar5)
		{
			return -2;
		}
		iVar6 = iVar4;
		iVar7 = -1;
		while (iVar6 <= iVar5)
		{
			if (Global_1879534.f_1911[iVar6 /*3*/] == 531432813)
			{
				iVar7 = Global_1879534.f_1911[iVar6 /*3*/].f_2;
				iVar8 = Global_1879534.f_211[iVar7 /*4*/];
				if (iVar8 == iVar2)
				{
					Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 = iVar6;
					return -2;
				}
			}
			iVar6++;
		}
	}
	return -2;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam1 /*4*/].f_3;
	if (func_84(iVar0))
	{
		if (func_85(iVar0))
		{
			return -2;
		}
	}
	Var1 = Global_1879534.f_211[iParam1 /*4*/];
	Var1.f_1 = Global_1879534.f_211[iParam1 /*4*/].f_1;
	iVar3 = Global_1879534.f_211[iParam1 /*4*/].f_2;
	if (!Global_1879534.f_145[iParam0])
	{
		Global_1879534.f_178[iParam0] = (func_89(Var1) + iVar3);
		Global_1879534.f_145[iParam0] = 1;
	}
	else if (func_89(Var1) >= Global_1879534.f_178[iParam0])
	{
		return -2;
	}
	return -1;
}

bool func_54(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -566605714:
			*iParam2 = func_90(iParam1);
			break;
		case 891989563:
			*iParam2 = func_91(iParam1);
			break;
		case 987244216:
			*iParam2 = func_92(iParam1);
			break;
		case 2055336839:
			*iParam2 = func_93(iParam1);
			break;
		case -1271429659:
			*iParam2 = func_94(iParam1);
			break;
		case -259205396:
			*iParam2 = func_95(iParam1);
			break;
		case -289754349:
			*iParam2 = func_96(iParam1);
			break;
		case -1940826795:
			*iParam2 = func_97(iParam1);
			break;
		case 40566325:
			*iParam2 = func_98(iParam1);
			break;
		case 901529234:
			*iParam2 = func_99(iParam1);
			break;
		case -780657756:
			*iParam2 = func_100(iParam1);
			break;
		case -1628808209:
			*iParam2 = func_101(iParam1);
			break;
		case 1225435693:
			*iParam2 = func_102(iParam1);
			break;
		case 363897013:
			*iParam2 = func_103(iParam1);
			break;
		case -1042325909:
			*iParam2 = func_104(iParam1);
			break;
		case -1472568760:
			*iParam2 = func_105(iParam1);
			break;
		case 2143263185:
			*iParam2 = func_106(iParam1);
			break;
		case -1520384013:
			*iParam2 = func_107();
			break;
		case -401276712:
			*iParam2 = func_108();
			break;
		case 759449782:
			*iParam2 = func_109(iParam1);
			break;
		case 477724652:
			*iParam2 = func_110(iParam1);
			break;
		case -1815455941:
			*iParam2 = func_111(iParam1);
			break;
		case -914010892:
			*iParam2 = func_112(iParam1);
			break;
		case -346691420:
			*iParam2 = func_113(iParam1);
			break;
		case -471968486:
			*iParam2 = func_114(iParam1);
			break;
		case 672918768:
			*iParam2 = func_115(iParam1);
			break;
		case 1181815586:
			*iParam2 = func_116(iParam1);
			break;
		case -755014414:
			*iParam2 = func_117(iParam1);
			break;
		case 644640119:
			*iParam2 = func_118(iParam1);
			break;
		case -915138989:
			*iParam2 = func_119(iParam1);
			break;
		case 1250460476:
			*iParam2 = func_120(iParam1);
			break;
		case -1449067653:
			*iParam2 = func_121(iParam1);
			break;
		case -549926405:
			*iParam2 = func_122(iParam1);
			break;
		case 1015095530:
			*iParam2 = func_123(iParam1);
			break;
		case -1523883609:
			*iParam2 = func_124(iParam1);
			break;
		case -990335083:
			*iParam2 = func_125(iParam1);
			break;
		case -716094127:
			*iParam2 = func_126(iParam1);
			break;
		case -1260617938:
			*iParam2 = func_127(iParam1);
			break;
		case -1063874733:
			*iParam2 = func_128(iParam1);
			break;
		case 1331093620:
			*iParam2 = func_129(iParam1);
			break;
		case 1842360635:
			*iParam2 = func_130(iParam1);
			break;
		case -663280148:
			*iParam2 = func_131(iParam1);
			break;
		case -1360770031:
			*iParam2 = func_132(iParam1);
			break;
		case -486436146:
			*iParam2 = func_133(iParam1);
			break;
		case -1053276381:
			*iParam2 = func_134(iParam1);
			break;
		case -1673286084:
			*iParam2 = func_135(iParam1);
			break;
		case -756450532:
			*iParam2 = func_136(iParam1);
			break;
		case -1289504437:
			*iParam2 = func_137(iParam1);
			break;
		case 26902781:
			*iParam2 = func_138(iParam1);
			break;
		case 147262072:
			*iParam2 = func_139(iParam1);
			break;
		case -2042718100:
			*iParam2 = func_140(iParam1);
			break;
		case -1738949208:
			*iParam2 = func_141(iParam1);
			break;
		case -1536300574:
			*iParam2 = func_142(iParam1);
			break;
		case 47963769:
			*iParam2 = func_143(iParam1);
			break;
		case 630069176:
			*iParam2 = func_144(iParam1);
			break;
		case 634895793:
			*iParam2 = func_145(iParam1);
			break;
		case -1216055267:
			*iParam2 = func_146(iParam1);
			break;
		case 1050963831:
			*iParam2 = func_147(iParam1);
			break;
		case -1535566683:
			*iParam2 = func_148(iParam1);
			break;
		case 433040111:
			*iParam2 = func_149(iParam1);
			break;
		case 1883692561:
			*iParam2 = func_150(iParam1);
			break;
		case 2001493029:
			*iParam2 = func_151(iParam1);
			break;
		case 1978308683:
			*iParam2 = func_152(iParam1);
			break;
		case 99307713:
			*iParam2 = func_153(iParam1);
			break;
		case 111818573:
			*iParam2 = func_154(iParam1);
			break;
		case 1120810236:
			*iParam2 = func_155(iParam1);
			break;
		case -1244116362:
			*iParam2 = func_156(iParam1);
			break;
		case -1729634664:
			*iParam2 = func_157(iParam1);
			break;
		case -1941172569:
			*iParam2 = func_158(iParam1);
			break;
		case -1408274960:
			*iParam2 = func_159(iParam1);
			break;
		case -90803914:
			*iParam2 = func_160(iParam1);
			break;
		case 656468362:
			*iParam2 = func_161(iParam1);
			break;
		case 995574226:
			*iParam2 = func_162(iParam1);
			break;
		case 2121795512:
			*iParam2 = func_163(iParam1);
			break;
		case -1293709741:
			*iParam2 = func_164(iParam1);
			break;
		case 670944580:
			*iParam2 = func_165(iParam1);
			break;
		case 225795806:
			*iParam2 = func_166(iParam1);
			break;
		case 1805087304:
			*iParam2 = func_167(iParam1);
			break;
		case -838803174:
			*iParam2 = func_168(iParam1);
			break;
		case -138866642:
			*iParam2 = func_169(iParam1);
			break;
		case -718595174:
			*iParam2 = func_170(iParam1);
			break;
		case -801023198:
			*iParam2 = func_171(iParam1);
			break;
		case -1120129944:
			*iParam2 = func_172(iParam1);
			break;
		case 794205136:
			*iParam2 = func_173(iParam1);
			break;
		case -1672441969:
			*iParam2 = func_174(iParam1);
			break;
		case 644587471:
			*iParam2 = func_175(iParam1);
			break;
		case -1398429376:
			*iParam2 = func_176();
			break;
		case -683322528:
			*iParam2 = func_177(iParam1);
			break;
		case 1836702732:
			*iParam2 = func_178(iParam1);
			break;
		case 460788415:
			*iParam2 = func_179(iParam1);
			break;
		case -845953794:
			*iParam2 = func_180(iParam1);
			break;
		case 498793617:
			*iParam2 = func_181(iParam1);
			break;
		case -1156263964:
			*iParam2 = func_182(iParam1);
			break;
		case 7411042:
			*iParam2 = func_183(iParam1);
			break;
		case -1598787124:
			*iParam2 = func_184(iParam1);
			break;
		case -1378868385:
			*iParam2 = func_185(iParam1);
			break;
		case 1098008903:
			*iParam2 = func_186(iParam1);
			break;
		case 1371030896:
			*iParam2 = func_187(iParam1);
			break;
		case 1093832731:
			*iParam2 = func_188();
			break;
		case -159886710:
			*iParam2 = func_189();
			break;
		case -1440757252:
			*iParam2 = func_190(iParam1);
			break;
		case 2025667422:
			*iParam2 = func_191(iParam1);
			break;
		case -42848759:
			*iParam2 = func_192(iParam1);
			break;
		case -1083639171:
			*iParam2 = func_193(iParam1);
			break;
		case 69231574:
			*iParam2 = func_194(iParam1);
			break;
		case 203794828:
			*iParam2 = func_195(iParam1);
			break;
		case -2030110303:
			*iParam2 = func_196(iParam1);
			break;
		case -148700515:
			*iParam2 = func_197(iParam1);
			break;
		case 1831856550:
			*iParam2 = func_198(iParam1);
			break;
		case 260291403:
			*iParam2 = func_199(iParam1);
			break;
		case 2128134704:
			*iParam2 = func_200(iParam1);
			break;
		case -644074888:
			*iParam2 = func_201();
			break;
		case 442701271:
			*iParam2 = func_202();
			break;
		case -1525868272:
			*iParam2 = func_203(iParam1);
			break;
		case 170295534:
			*iParam2 = func_204(iParam1);
			break;
		case -612537234:
			*iParam2 = func_205(iParam1);
			break;
		case -157982035:
			*iParam2 = func_206(iParam1);
			break;
		case 2038286720:
			*iParam2 = func_207();
			break;
		case 1475426593:
			*iParam2 = func_208(iParam1);
			break;
		case -2024549018:
			*iParam2 = func_209(iParam1);
			break;
		case -391651599:
			*iParam2 = func_210(iParam1);
			break;
		case 1810366898:
			*iParam2 = func_211(iParam1);
			break;
		case 442105888:
			*iParam2 = func_212(iParam1);
			break;
		case -1829373791:
			*iParam2 = func_213(iParam1);
			break;
		case -508972844:
			*iParam2 = func_214(iParam1);
			break;
		case 1726178855:
			*iParam2 = func_215(iParam1);
			break;
		case -1496733911:
			*iParam2 = func_216(iParam1);
			break;
		case -2049944022:
			*iParam2 = func_217(iParam1);
			break;
		case -976663157:
			*iParam2 = func_218(iParam1);
			break;
		case 1518265781:
			*iParam2 = func_219(iParam1);
			break;
		case -1438979859:
			*iParam2 = func_220(iParam1);
			break;
		case 242535924:
			*iParam2 = func_221(iParam1);
			break;
		default:
			return false;
	}
	return true;
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case -1:
		case 32:
			return;
		default:
			break;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1879534.f_112[iParam0] = -15;
		Global_1879534.f_46[iParam0] = 0;
		Global_1879534.f_7301.f_2[iParam0 /*4*/].f_3 = -15;
		Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1++;
		return;
	}
	iVar0 = Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1;
	iVar1 = Global_1879534.f_7222[iParam0 /*2*/];
	iVar2 = Global_1879534.f_7222[iParam0 /*2*/].f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (Global_1879534.f_1911[iVar3 /*3*/] == 531432813)
		{
			iVar4 = Global_1879534.f_1911[iVar3 /*3*/].f_2;
			iVar5 = Global_1879534.f_211[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				Global_1879534.f_7301.f_2[iParam0 /*4*/].f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_58(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (Global_1879534.f_7301.f_131.f_105[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534.f_7301.f_131.f_105[iParam0] = iParam1;
}

void func_59(int iParam0, int iParam1)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return;
	}
	if (Global_1879534.f_7301.f_131.f_107[iParam0] == iParam1)
	{
		return;
	}
	Global_1879534.f_7301.f_131.f_107[iParam0] = iParam1;
}

void func_60(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Global_1879534.f_7301.f_131.f_110[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1879534.f_7301.f_131.f_110[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1879534.f_7301.f_131.f_110[iParam0]), iParam1);
	}
}

bool func_61(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	return Global_1879534.f_7301.f_131.f_105[iParam0];
}

int func_62(int iParam0)
{
	if (iParam0 == 2 || iParam0 == -1)
	{
		return 0;
	}
	return Global_1879534.f_7301.f_131.f_107[iParam0];
}

bool func_63(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(Global_1879534.f_7301.f_131.f_110[iParam0], iParam1);
	return bVar0;
}

int func_64(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_65(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_66(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_67(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_68(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_69(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_222(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

bool func_70()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_71(int iParam0)
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
	iVar0 = func_66(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_65(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_64(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_69(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_68(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_67(iParam0);
	if (iVar5 < 1 || iVar5 > func_223(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_72()
{
	return Global_1899515;
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_69(*iParam0);
	iVar1 = func_68(*iParam0);
	iVar2 = func_67(*iParam0);
	iVar3 = func_64(*iParam0);
	iVar4 = func_65(*iParam0);
	iVar5 = func_66(*iParam0);
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
	iVar6 = func_223(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_223(iVar1, iVar0);
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
	func_224(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_74()
{
	return Global_1898438;
}

int func_75(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case 987244216:
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
						if (func_19(Global_1347702[iVar1 /*49*/].f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
							if (func_84(iVar2) && !func_225(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_76(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_71(iParam1) || !func_71(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_77(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_78(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_79(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

bool func_80(int iParam0, bool bParam1)
{
	return func_76(func_72(), iParam0, bParam1);
}

bool func_81()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_82(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_19(Global_1347702[iParam0 /*49*/].f_12, 2097152))
		{
			if (func_226(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
		else if (func_19(Global_1347702[iParam0 /*49*/].f_12, 256))
		{
			if (!func_226(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_227(iParam0);
}

bool func_83(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_18(iParam0))
	{
		return false;
	}
	return func_226(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_85(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_226(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_86()
{
	return Global_40.f_4283.f_1;
}

bool func_87(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_228(iParam0))
	{
		return false;
	}
	if ((func_226(Global_1347702[59 /*49*/].f_15, 1) && !func_226(Global_1347702[61 /*49*/].f_15, 1)) && Global_40.f_9052.f_21 & 2 == 0)
	{
		return false;
	}
	if (func_229(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !func_230(iParam0)) && !Global_43891)
		{
			func_232(iParam0, BUILTIN::VDIST2(func_231(iParam0), Global_36), -1, 1, 1);
			func_233(&(Global_1835011[iParam0 /*74*/]), 2);
		}
		return false;
	}
	if (bParam2)
	{
		if (!func_236(func_234(iParam0), func_235(iParam0), 0, Global_1835011[iParam0 /*74*/].f_21, iParam3))
		{
			return false;
		}
		if (func_75(1) > 1)
		{
			if (Global_1835011[iParam0 /*74*/].f_73 <= 0)
			{
				Global_1835011[iParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - Global_1835011[iParam0 /*74*/].f_73) < 60000)
			{
				if (func_237(iParam0, 0, 1))
				{
					return false;
				}
				if ((iParam0 == 15 && Global_1357549.f_1494 & 32768 != 0) && func_239(Global_35, func_238(iParam0), 50f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
					{
						Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, func_238(iParam0), 5f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_238(iParam0), 2.5f)))
					{
						return false;
					}
				}
			}
		}
	}
	iVar0 = func_240(Global_1835011[iParam0 /*74*/].f_1);
	if (!func_241(iVar0))
	{
		return false;
	}
	else if (Global_1835011[iParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[iParam0 /*74*/].f_73 = 0;
		func_242(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
		}
	}
	if (bParam1)
	{
		func_243(Global_1835011[iParam0 /*74*/].f_1);
	}
	else if (!Global_1879534)
	{
		func_244(4);
	}
	return true;
}

bool func_88(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_89(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_90(int iParam0)
{
	if (func_6(32768))
	{
		return -2;
	}
	if (func_84(iParam0))
	{
		func_245(iParam0, -1, 0, 1, 1, 0, 0);
		func_246(iParam0);
	}
	return -2;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_6(32768))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (func_18(iVar0) && !func_83(iVar0))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		func_247(iVar0, 1, 1, 1, 32);
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		func_248(iVar0, 0, 1);
		iVar1 = 0;
		while (iVar1 < Global_1879534.f_7300)
		{
			if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 2))
			{
				if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar1 /*4*/], 1))
				{
					switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/])
					{
						case 987244216:
							if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1 /*3*/].f_2 == iVar0)
							{
								Global_1879534.f_7301.f_2[iVar1 /*4*/].f_1++;
							}
							else
							{
								iVar1++;
							}
							return -2;
							default:
								break;
					}
				}
			}
		}
	}
}

int func_92(int iParam0)
{
	if (func_83(iParam0))
	{
		return -2;
	}
	return -1;
}

int func_93(int iParam0)
{
	if (func_18(iParam0) && !func_83(iParam0))
	{
		func_249(iParam0, 1, 0, 0, 0, 0, 0);
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, 32);
		}
		func_247(iParam0, 1, 1, 1, 32);
	}
	return -2;
}

int func_94(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_251(iParam0);
	return -2;
}

int func_95(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_252(iParam0);
	return -2;
}

int func_96(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_253(iParam0, 0);
	return -2;
}

int func_97(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_254(iParam0, 32, 1);
	func_253(iParam0, 0);
	return -2;
}

int func_98(int iParam0)
{
	int iVar0;

	if (!func_250(iParam0))
	{
		return -2;
	}
	iVar0 = iParam0;
	if (func_255() == 4 && (((iVar0 != 0 && iVar0 != 2) && iVar0 != 6) && iVar0 != 3))
	{
		return -2;
	}
	func_256(iParam0);
	return -2;
}

int func_99(int iParam0)
{
	int iVar0;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_250(iVar0))
	{
		return -2;
	}
	func_257(iVar0);
	if (Global_1879534.f_1172[iParam0 /*2*/].f_1 == 1)
	{
		func_258(iVar0, 0, 0, 1, 0);
	}
	return -2;
}

int func_100(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	return -2;
}

int func_101(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	return -2;
}

int func_102(int iParam0)
{
	return -2;
}

int func_103(int iParam0)
{
	return -2;
}

int func_104(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_259(iVar0, Global_1879534.f_211[iParam0 /*4*/], 0, Global_1879534.f_211[iParam0 /*4*/].f_1, Global_1879534.f_211[iParam0 /*4*/].f_2, 1, 0);
		iVar0++;
	}
	return -2;
}

int func_105(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 != 27 && !func_250(iVar0))
	{
		return -2;
	}
	fVar1 = BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/].f_1);
	fVar1 = (fVar1 / 100f);
	fVar2 = BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/].f_2);
	fVar2 = (fVar2 / 100f);
	if (iVar0 != 27)
	{
		Global_1360165[iVar0 /*1157*/].f_138 = fVar1;
		Global_1360165[iVar0 /*1157*/].f_139 = fVar2;
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 27)
		{
			Global_1360165[iVar3 /*1157*/].f_138 = fVar1;
			Global_1360165[iVar3 /*1157*/].f_139 = fVar2;
			iVar3++;
		}
	}
	return -2;
}

int func_106(int iParam0)
{
	if (!func_250(Global_1879534.f_211[iParam0 /*4*/]))
	{
		return -2;
	}
	func_260(Global_1879534.f_211[iParam0 /*4*/], Global_1879534.f_211[iParam0 /*4*/].f_1);
	return -2;
}

int func_107()
{
	func_261();
	return -2;
}

int func_108()
{
	func_262(32768);
	return -2;
}

int func_109(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_263(iParam0, 1, 1);
	return -2;
}

int func_110(int iParam0)
{
	if (!func_250(iParam0))
	{
		return -2;
	}
	func_263(iParam0, 0, 1);
	return -2;
}

int func_111(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_250(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return -2;
	}
	if (func_264(iVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_112(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_250(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return -2;
	}
	if (func_265(iVar0, iVar1))
	{
		return -2;
	}
	return -1;
}

int func_113(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_266(iVar0), iVar1);
	if (iVar1 == joaat("CS_LEIGHGRAY"))
	{
		PERSCHAR::_0x2DF89CD2ED1D0BDE(func_266(iVar0), joaat("META_OUTFIT_DEFAULT"));
	}
	else
	{
		PERSCHAR::_0x535A66AAD2BF68F9(func_266(iVar0), PERSCHAR::_0xDC9655D47DEC0353(func_266(iVar0)));
	}
	return -2;
}

int func_114(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = func_267(Global_1879534.f_211[iParam0 /*4*/]);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return -2;
	}
	if (Global_1879534.f_211[iParam0 /*4*/].f_1 > 0)
	{
		bVar1 = true;
	}
	if (Global_1879534.f_211[iParam0 /*4*/].f_2 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(sVar0, bVar1, true);
	}
	else
	{
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bVar1, true);
	}
	return -2;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_268(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_269(iVar1);
	func_270(iVar0);
	return -2;
}

int func_116(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	func_269(iVar0);
	func_270(func_271());
	return -2;
}

int func_117(int iParam0)
{
	return -2;
}

int func_118(int iParam0)
{
	return -2;
}

int func_119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	func_272(iVar0, iVar2, iVar3, iVar1, 1, 1, 0);
	return -2;
}

int func_120(int iParam0)
{
	return -2;
}

int func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	func_273(iVar0, iVar1, 1, iVar2, iVar3);
	return -2;
}

int func_122(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_274(iVar0, iVar1);
	return -2;
}

int func_123(int iParam0)
{
	if (!func_275(iParam0))
	{
		return -2;
	}
	func_276(iParam0);
	return -2;
}

int func_124(int iParam0)
{
	if (!func_277(iParam0))
	{
		return -2;
	}
	func_278(iParam0);
	return -2;
}

int func_125(int iParam0)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_277(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_279(iVar0, uVar1);
	return -2;
}

int func_126(int iParam0)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_277(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_280(iVar0, uVar1);
	return -2;
}

int func_127(int iParam0)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_277(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_281(iVar0, uVar1);
	return -2;
}

int func_128(int iParam0)
{
	if (!func_282(iParam0))
	{
		return -2;
	}
	func_283(iParam0);
	return -2;
}

int func_129(int iParam0)
{
	if (!func_282(iParam0))
	{
		return -2;
	}
	func_284(iParam0);
	return -2;
}

int func_130(int iParam0)
{
	int iVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_282(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_285(iVar0, uVar1);
	return -2;
}

int func_131(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	bVar1 = MISC::IS_BIT_SET(Global_1879534.f_211[iParam0 /*4*/].f_1, 0);
	bVar2 = MISC::IS_BIT_SET(Global_1879534.f_211[iParam0 /*4*/].f_1, 1);
	bVar3 = MISC::IS_BIT_SET(Global_1879534.f_211[iParam0 /*4*/].f_1, 2);
	iVar4 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return -2;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return -1;
	}
	if (bVar1)
	{
		func_287(iVar0);
	}
	if (bVar2)
	{
		func_288(iVar0);
	}
	if (bVar3)
	{
		if (iVar0 == joaat("WEAPON_MELEE_KNIFE"))
		{
		}
		iVar5 = 1;
		if (func_289(iVar0))
		{
			iVar5 = 5;
		}
		bVar6 = false;
		if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || iVar0 == joaat("WEAPON_MELEE_KNIFE")) || iVar0 == joaat("WEAPON_LASSO"))
		{
			bVar6 = true;
		}
		func_290(iVar0, iVar5, 1, 0, bVar6, 752097756, 0, 1, 0, 0);
	}
	if (iVar4 != -1)
	{
		switch (iVar4)
		{
			case 523:
			case 524:
			case 525:
				func_292(iVar4, func_291(iVar0), 0);
				break;
			default:
				func_293(iVar4, 0);
				break;
		}
	}
	return -2;
}

int func_132(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_294(iVar0))
	{
		return -2;
	}
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 > 0;
	func_295(iVar0, 1, 0);
	if (bVar1 && func_70())
	{
		func_296(iVar0, 0, 1, 0);
	}
	return -2;
}

int func_133(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_290(iVar0, iVar1, 1, 0, 0, 752097756, 0, 0, 0, 0);
	if (func_297(iVar0, 1104960349))
	{
		func_298(iVar0);
	}
	return -2;
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (!func_286(iVar0, 0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_299(iVar0, iVar1, 1, -142743235, 0);
	return -2;
}

int func_135(int iParam0)
{
	if (!func_300(iParam0))
	{
		return -2;
	}
	func_301(iParam0);
	return -2;
}

int func_136(int iParam0)
{
	if (!func_300(iParam0))
	{
		return -2;
	}
	if (!func_70())
	{
		return -2;
	}
	func_302(iParam0);
	return -2;
}

int func_137(int iParam0)
{
	func_303(iParam0, 1, 0);
	return -2;
}

int func_138(int iParam0)
{
	func_303(iParam0, 0, 0);
	return -2;
}

int func_139(int iParam0)
{
	if (!STREAMING::IS_MODEL_A_PED(iParam0))
	{
		return -2;
	}
	if (func_70())
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(iParam0, true);
	}
	return -2;
}

int func_140(int iParam0)
{
	if (!STREAMING::IS_MODEL_A_PED(iParam0))
	{
		return -2;
	}
	if (PED::_IS_THIS_MODEL_A_HORSE(iParam0) && func_304(iParam0))
	{
		return -2;
	}
	if (func_70())
	{
		PED::SET_PED_MODEL_IS_SUPPRESSED(iParam0, false);
	}
	return -2;
}

int func_141(int iParam0)
{
	func_305(iParam0);
	return -2;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_306(iVar0, iVar1, 0);
	return -2;
}

int func_143(int iParam0)
{
	func_307(iParam0, 1);
	return -2;
}

int func_144(int iParam0)
{
	func_307(iParam0, 0);
	return -2;
}

int func_145(int iParam0)
{
	func_308(iParam0, 0);
	if (iParam0 == 24)
	{
		func_308(119, 0);
	}
	return -2;
}

int func_146(int iParam0)
{
	func_308(iParam0, 1);
	return -2;
}

int func_147(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	func_309(iVar0, uVar1);
	return -2;
}

int func_148(int iParam0)
{
	if (func_310(iParam0))
	{
		if (iParam0 == joaat("PLAYER_THREE"))
		{
			func_311();
		}
		return -2;
	}
	return -1;
}

int func_149(int iParam0)
{
	if (Global_1347477.f_200 || !func_70())
	{
		return -2;
	}
	Global_40.f_11095.f_11[13] = BUILTIN::TO_FLOAT(iParam0);
	Global_1347477.f_201 = 1;
	return -2;
}

int func_150(int iParam0)
{
	float fVar0;

	if (Global_1347477.f_200 || !func_70())
	{
		return -2;
	}
	fVar0 = func_312(13);
	fVar0 = (fVar0 + BUILTIN::TO_FLOAT(iParam0));
	Global_40.f_11095.f_11[13] = func_313(fVar0, Global_40.f_11095.f_40, Global_40.f_11095.f_41);
	Global_1347477.f_201 = 1;
	return -2;
}

int func_151(int iParam0)
{
	Global_40.f_11095.f_40 = BUILTIN::TO_FLOAT(Global_1879534.f_1172[iParam0 /*2*/]);
	Global_40.f_11095.f_41 = BUILTIN::TO_FLOAT(Global_1879534.f_1172[iParam0 /*2*/].f_1);
	return -2;
}

int func_152(int iParam0)
{
	Global_40.f_11095.f_67 = iParam0;
	if (Global_40.f_11095.f_67 >= 9)
	{
		Global_40.f_11095.f_44 = 0.2f;
		func_314();
	}
	if ((Global_40.f_11095.f_67 == 9 && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !func_315())
	{
		AUDIO::_0xD47D47EFBF103FB8(Global_35, 3);
	}
	return -2;
}

int func_153(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	if (iVar0 == 0)
	{
		func_316(uVar1);
	}
	else if (iVar0 == 1)
	{
		func_317(uVar1);
	}
	else if (iVar0 == 2)
	{
		func_318(uVar1);
	}
	return -2;
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_70())
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	MISC::_0xDD560ABEF5D3784C(&uVar2, &iVar3);
	if (iVar0 == 0 || iVar0 == -1439599467)
	{
		if (iVar3 == 0)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			if (iVar0 == -1439599467)
			{
				MISC::SET_RANDOM_WEATHER_TYPE(true, true);
			}
		}
		else
		{
			func_319(8);
			if (iVar0 == -1439599467)
			{
				func_319(16);
			}
		}
	}
	else if (iVar1 == 0)
	{
		MISC::SET_WEATHER_TYPE(iVar0, true, true, false, 0f, false);
	}
	else
	{
		MISC::SET_WEATHER_TYPE(iVar0, false, true, true, BUILTIN::TO_FLOAT(iVar1), false);
	}
	return -2;
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (!func_320(iVar0))
	{
		return -2;
	}
	if (!func_321(iVar1))
	{
		return -2;
	}
	if (!func_322(iVar2))
	{
		return -2;
	}
	if (!func_323(iVar3))
	{
		return -2;
	}
	func_324(iVar0, iVar1, 0);
	Global_40.f_7731[iVar0 /*5*/].f_1 = iVar2;
	Global_40.f_7731[iVar0 /*5*/].f_2 = iVar3;
	func_325(10, 0, 0, 0, 0);
	return -2;
}

int func_156(int iParam0)
{
	func_326(1);
	return -2;
}

int func_157(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (!func_327(iVar0))
	{
	}
	if (bVar1)
	{
		func_328(iVar0, 0, 0);
	}
	else
	{
		func_328(iVar0, 1, 0);
	}
	return -2;
}

int func_158(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	uVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	if (!func_329(iVar0, 0))
	{
	}
	func_330(iVar0, uVar1, 0);
	return -2;
}

int func_159(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (!func_329(iVar0, 0))
	{
	}
	func_331(iVar0, bVar1);
	return -2;
}

int func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	int iVar12;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	iVar2 = func_332(iVar0);
	if (iVar0 <= -1 || iVar0 >= 42)
	{
	}
	iVar3 = func_333(iVar0);
	switch (iVar2)
	{
		case 0:
			StringCopy(&cVar4, "ODR Ambush ", 64);
			break;
		case 2:
			StringCopy(&cVar4, "EXC Ambush ", 64);
			break;
		case 1:
			StringCopy(&cVar4, "INB Ambush ", 64);
			break;
		case 3:
			StringCopy(&cVar4, "SAV Ambush ", 64);
			break;
		case 4:
			StringCopy(&cVar4, "RNC Ambush ", 64);
			break;
		case 5:
			StringCopy(&cVar4, "BND Ambush ", 64);
			break;
	}
	if (bVar1)
	{
		if (!func_334(iVar0, 0))
		{
			iVar12 = 0;
			while (iVar12 < iVar3)
			{
				func_335(iVar2, iVar0, &cVar4, iVar12);
				iVar12++;
			}
		}
	}
	else
	{
		iVar12 = 0;
		while (iVar12 < iVar3)
		{
			func_336(iVar2, iVar0, iVar12);
			iVar12++;
		}
	}
	return -2;
}

int func_161(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	func_337(Global_1879534.f_1172[iParam0 /*2*/]);
	func_326(1);
	return -2;
}

int func_162(int iParam0)
{
	func_338(iParam0, 0);
	return -2;
}

int func_163(int iParam0)
{
	if (iParam0 != 0)
	{
		func_339(iParam0, 0);
	}
	else
	{
		func_340(0);
	}
	func_341(iParam0);
	return -2;
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (iVar2 == 0)
	{
		func_342(iVar0, iVar1);
	}
	else
	{
		func_343(iVar0, iVar1);
	}
	return -2;
}

int func_165(int iParam0)
{
	func_344(iParam0, 1);
	return -2;
}

int func_166(int iParam0)
{
	func_344(iParam0, 0);
	return -2;
}

int func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = (func_62(iVar0) + Global_1879534.f_1172[iParam0 /*2*/].f_1);
	func_59(iVar0, iVar1);
	return -2;
}

int func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 2)
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	switch (iVar2)
	{
		case 0:
			if (func_62(iVar0) == iVar1)
			{
				return -2;
			}
			break;
		case 1:
			if (func_62(iVar0) != iVar1)
			{
				return -2;
			}
			break;
		case 2:
			if (func_62(iVar0) < iVar1)
			{
				return -2;
			}
			break;
		case 3:
			if (func_62(iVar0) > iVar1)
			{
				return -2;
			}
			break;
		case 4:
			if (func_62(iVar0) >= iVar1)
			{
				return -2;
			}
			break;
		case 5:
			if (func_62(iVar0) <= iVar1)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1879534.f_1 || Global_1879534.f_1910)
	{
		return -1;
	}
	if (IntToFloat((MISC::GET_GAME_TIMER() - func_74())) <= 5000f)
	{
		return -1;
	}
	if (!func_70())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = func_75(1);
	iVar2 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	switch (iVar2)
	{
		case 0:
			if (iVar1 == iVar0)
			{
				return -2;
			}
			break;
		case 1:
			if (iVar1 != iVar0)
			{
				return -2;
			}
			break;
		case 2:
			if (iVar1 < iVar0)
			{
				return -2;
			}
			break;
		case 3:
			if (iVar1 > iVar0)
			{
				return -2;
			}
			break;
		case 4:
			if (iVar1 >= iVar0)
			{
				return -2;
			}
			break;
		case 5:
			if (iVar1 <= iVar0)
			{
				return -2;
			}
			break;
	}
	return -1;
}

int func_170(int iParam0)
{
	func_345(iParam0, 1);
	return -2;
}

int func_171(int iParam0)
{
	func_346(iParam0, 1);
	return -2;
}

int func_172(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = LAW::_0x76CF93D4B416B288(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"));
	iVar2 = (iVar1 + iVar0);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	LAW::_0xF19706B1F8FFA88F(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), iVar2);
	return -2;
}

int func_173(int iParam0)
{
	bool bVar0;

	bVar0 = iParam0 > 0;
	func_347(bVar0);
	return -2;
}

int func_174(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = iParam0 > 0;
	iVar1 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID());
	Global_40.f_11957 = iVar1;
	if (bVar0)
	{
		LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	}
	return -2;
}

int func_175(int iParam0)
{
	bool bVar0;

	bVar0 = iParam0 > 0;
	if (Global_40.f_11957 == 0 && LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) == 0)
	{
		return -2;
	}
	LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), 0);
	if (Global_40.f_11957 > 0)
	{
		LAW::_0x0E3BDEED21BEB945(PLAYER::PLAYER_ID(), Global_40.f_11957);
		if (bVar0)
		{
			Global_40.f_11957 = 0;
		}
	}
	return -2;
}

int func_176()
{
	func_348();
	return -2;
}

int func_177(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 != false;
	if (bVar2)
	{
		func_349(iVar0, uVar1);
	}
	else
	{
		func_350(iVar0, uVar1);
	}
	return -2;
}

int func_178(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 != false;
	if (bVar2)
	{
		func_351(iVar0, uVar1);
	}
	else
	{
		func_352(iVar0, uVar1);
	}
	return -2;
}

int func_179(int iParam0)
{
	bool bVar0;

	if (iParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
		if (func_85(59))
		{
			func_353();
		}
		else
		{
			func_354();
			func_355();
			INVENTORY::_0xE36D4A38D28D9CFB(1);
		}
		func_302(24);
	}
	else
	{
		func_356(Global_35, joaat("WEAPON_MELEE_TORCH"));
		func_357();
		INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
		if (!func_85(59))
		{
			func_358(1, 0, 1);
			func_359();
		}
		func_301(24);
	}
	return -2;
}

int func_180(int iParam0)
{
	bool bVar0;

	if (iParam0 > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_360(&(Global_40.f_7443), 1);
	}
	else
	{
		func_361(&(Global_40.f_7443), 0);
		func_362(Global_35, -1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
	}
	return -2;
}

int func_181(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	bVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1 == true;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (!func_327(iVar0))
	{
		return -2;
	}
	if (!bVar1)
	{
		func_363(iVar0, 0, 1);
	}
	func_364(iVar0, bVar1, iVar2);
	return -2;
}

int func_182(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (!func_327(iVar0))
	{
		return -2;
	}
	func_363(iVar0, bVar1, 1);
	return -2;
}

int func_183(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (!func_365(iVar0))
	{
		return -2;
	}
	func_366(iVar0, bVar1);
	return -2;
}

int func_184(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	bVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1 == true;
	bVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2 == true;
	if (!func_367(iVar0))
	{
		return -2;
	}
	func_368(iVar0, bVar1, bVar2);
	return -2;
}

int func_185(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1 == true;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (Global_1879534)
	{
		return -2;
	}
	func_293(iVar0, bVar1);
	return -2;
}

int func_186(int iParam0)
{
	func_369(iParam0);
	return -2;
}

int func_187(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		if (func_2() != -1)
		{
			return -2;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
	}
	return -2;
}

int func_188()
{
	if (func_5(&Global_0, 3))
	{
		return -1;
	}
	func_370(&Global_0, 1);
	func_370(&Global_0, 32);
	func_370(&Global_0, 64);
	return -2;
}

int func_189()
{
	if (func_5(&Global_0, 3))
	{
		return -1;
	}
	return -2;
}

int func_190(int iParam0)
{
	if (func_371(iParam0))
	{
		return -2;
	}
	if (!Global_1879534 && func_75(1) <= 0)
	{
		return -2;
	}
	return -1;
}

int func_191(int iParam0)
{
	if (func_372(iParam0))
	{
		func_373(iParam0, 1);
	}
	return -2;
}

int func_192(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_18(iVar0))
	{
		return -2;
	}
	if (func_83(iVar0))
	{
		return -2;
	}
	if (func_88(Global_1935630, 1048576))
	{
		return -1;
	}
	if (func_6(32768))
	{
		return -1;
	}
	if (!func_83(iVar0))
	{
		if (!func_88(Global_1935630, 2048) && !func_14(0, 1, 1))
		{
			if (func_2() == -1 && func_5(&Global_0, 3))
			{
				func_374();
				return -1;
			}
			if (func_375(iVar0, 1, 1, 1, 0))
			{
				return -2;
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_193(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!func_18(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	if (func_83(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_194(int iParam0)
{
	if (func_83(iParam0) || (func_376(iParam0) && (Global_1430242.f_1 + Global_1430242.f_3) == 1))
	{
		return -2;
	}
	return -1;
}

int func_195(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_377(iVar0))
	{
		func_378(iVar0);
	}
	return -2;
}

int func_196(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_377(iVar0))
	{
		func_379(iVar0);
	}
	return -2;
}

int func_197(int iParam0)
{
	func_380(iParam0, 1);
	return -2;
}

int func_198(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_381(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	struct<5> Var13;
	struct<10> Var18;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	iVar0 = -2;
	if (iParam0 == -1)
	{
		return iVar0;
	}
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/];
	if (iVar1 == 0)
	{
		return iVar0;
	}
	if (!func_382(iVar1, &uVar2))
	{
		return iVar0;
	}
	Var13 = { Global_1887078[iParam0 /*5*/] };
	Var18.f_9 = -1591664384;
	bVar36 = false;
	iVar32 = Var13.f_1;
	iVar33 = Var13.f_2;
	switch (Var13)
	{
		case 0:
		default:
			Var13 = 0;
			iVar0 = -1;
			break;
			if (!func_383("ALL COACHES", &iVar32, &iVar33, -1591664384, 0))
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar0 = -1;
			}
			else
			{
				Var13.f_1 = iVar32;
				Var13.f_2 = iVar33;
				iVar34 = 0;
				while (iVar34 < iVar33)
				{
					if (!func_384(&Var18, iVar34, iVar32, iVar33))
					{
					}
					else if (Var18.f_4 == 0)
					{
					}
					else
					{
						iVar35 = 0;
						while (iVar35 < 10)
						{
							if (uVar2[iVar35] == 0)
							{
							}
							else if (Var18.f_4 != uVar2[iVar35])
							{
							}
							else
							{
								bVar36 = true;
							}
							iVar35++;
						}
					}
					iVar34++;
				}
				if (!bVar36)
				{
					Var13 = 1;
				}
				else
				{
					Var13 = 2;
				}
				func_385(iVar32);
				iVar0 = -1;
				Jump @389; //curOff = 321
				if (!Var13.f_4)
				{
					Var13.f_4 = 1;
					Var13.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
				if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Var13.f_3, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 30000)
				{
					Var13 = 0;
					Var13.f_4 = 0;
				}
				iVar0 = -1;
				Jump @389; //curOff = 378
				iVar0 = -2;
			}
			Global_1887078[iParam0 /*5*/] = { Var13 };
			return iVar0;
			default:
				break;
	}
}

int func_200(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_386(iVar0))
	{
		return -1;
	}
	if (func_387(iVar0))
	{
		return -2;
	}
	if (func_388(iVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_201()
{
	if (func_389(255))
	{
		return -1;
	}
	return -2;
}

int func_202()
{
	NETWORK::NETWORK_SET_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT(true);
	return -2;
}

int func_203(int iParam0)
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

	iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	iVar1 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	iVar2 = -1;
	iVar3 = -1;
	if (func_390(PLAYER::PLAYER_ID()))
	{
		iVar2 = iVar1;
		iVar3 = iVar0;
		iVar4 = 15;
	}
	else
	{
		iVar2 = iVar0;
		iVar3 = iVar1;
		iVar4 = 16;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar2 /*4*/], 1))
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	iVar5 = Global_1879534.f_7301.f_2[iVar2 /*4*/].f_1;
	iVar6 = Global_1879534.f_7222[iVar2 /*2*/];
	iVar7 = Global_1879534.f_7222[iVar2 /*2*/].f_1;
	if (iVar5 < iVar6)
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	if (iVar5 > iVar7)
	{
		func_391(iVar3, iVar2);
		return -2;
	}
	iVar8 = iVar6;
	iVar9 = -1;
	while (iVar8 <= iVar7)
	{
		if (!Global_1879534.f_1911[iVar8 /*3*/] == 531432813)
		{
			iVar8++;
		}
		else
		{
			iVar9 = Global_1879534.f_1911[iVar8 /*3*/].f_2;
			iVar10 = Global_1879534.f_211[iVar9 /*4*/];
			if (iVar10 != iVar4)
			{
				iVar8++;
			}
			else
			{
				Global_1879534.f_7301.f_2[iVar2 /*4*/].f_1 = iVar8;
				func_391(iVar3, iVar2);
				return -2;
			}
		}
	}
	return -2;
}

int func_204(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_386(iVar0))
	{
		return -1;
	}
	if (func_387(iVar0))
	{
		return -2;
	}
	if (func_388(iVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_2() == 0)
	{
		if (!func_392())
		{
			return -1;
		}
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (iVar0 == -1)
	{
		MISC::SET_BIT(&iVar3, 0);
		MISC::SET_BIT(&iVar3, 1);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 0))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar0, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 0);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 0))
		{
			if (func_85(iVar0))
			{
				MISC::SET_BIT(&iVar3, 1);
			}
		}
	}
	if (iVar1 == -1)
	{
		MISC::SET_BIT(&iVar3, 2);
		MISC::SET_BIT(&iVar3, 3);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 2))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar1, 0, 0, -1))
				{
					MISC::SET_BIT(&iVar3, 2);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 3) && MISC::IS_BIT_SET(iVar3, 2))
		{
			if (func_85(iVar1))
			{
				MISC::SET_BIT(&iVar3, 3);
			}
		}
	}
	if (iVar2 == -1)
	{
		MISC::SET_BIT(&iVar3, 4);
		MISC::SET_BIT(&iVar3, 5);
	}
	else
	{
		if (!MISC::IS_BIT_SET(iVar3, 4))
		{
			if (!Global_1935630 & 2048 != 0 && !func_14(0, 1, 1))
			{
				if (func_87(iVar2, 0, 0, -1))
				{
					func_236(func_234(iVar2), func_235(iVar2), 0, Global_1835011[iVar2 /*74*/].f_21, func_86());
					MISC::SET_BIT(&iVar3, 4);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iVar3, 5) && MISC::IS_BIT_SET(iVar3, 4))
		{
			if (func_85(iVar2))
			{
				MISC::SET_BIT(&iVar3, 5);
			}
		}
	}
	Global_1879534.f_211[iParam0 /*4*/].f_3 = iVar3;
	if ((MISC::IS_BIT_SET(iVar3, 1) && MISC::IS_BIT_SET(iVar3, 3)) && MISC::IS_BIT_SET(iVar3, 5))
	{
		return -2;
	}
	return -1;
}

int func_206(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;

	uVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	bVar1 = false;
	switch (Global_1887078.f_1718)
	{
		case 0:
			Global_1887078.f_1720 = -1;
			iVar2 = func_393(uVar0);
			if (iVar2 == -1)
			{
			}
			else
			{
				Global_1887078.f_1720 = iVar2;
				func_394(1);
			}
			break;
		case 1:
			if (Global_1887078.f_1720 == -1)
			{
				func_394(0);
			}
			else if (func_395(Global_1887078.f_1720))
			{
				bVar1 = true;
			}
			break;
		case 2:
			func_394(0);
			break;
	}
	if (bVar1)
	{
		func_394(0);
		Global_1887078.f_1720 = -1;
		return -2;
	}
	return -1;
}

int func_207()
{
	func_396();
	return -2;
}

int func_208(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_386(iVar0))
	{
		return -1;
	}
	if (func_388(iVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -1;
}

int func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_390(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_1879534.f_1172[iParam0 /*2*/];
	}
	else
	{
		iVar0 = Global_1879534.f_1172[iParam0 /*2*/].f_1;
	}
	if (iVar0 == 0 || !func_386(iVar0))
	{
		return -2;
	}
	if (func_388(iVar0, 0, PLAYER::PLAYER_ID(), 0))
	{
		return -2;
	}
	return -2;
}

int func_210(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!func_84(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (func_397(Global_1835011[iVar0 /*74*/].f_1) == Global_1879534.f_211[iParam0 /*4*/].f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_211(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!func_18(iVar0))
	{
		return -2;
	}
	uVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	uVar2 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	if (func_397(Global_1347702[iVar0 /*49*/].f_15) == Global_1879534.f_211[iParam0 /*4*/].f_1)
	{
		return uVar1;
	}
	return uVar2;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = Global_1879534.f_211[iParam0 /*4*/];
	if (!func_18(iVar0))
	{
		return -2;
	}
	iVar1 = Global_1879534.f_211[iParam0 /*4*/].f_2;
	iVar2 = Global_1879534.f_211[iParam0 /*4*/].f_1;
	uVar3 = Global_1879534.f_211[iParam0 /*4*/].f_3;
	iVar4 = func_398(Global_1347702[iVar0 /*49*/].f_15);
	func_73(&iVar4, 0, 0, iVar1, 0, 0, 0, 0);
	switch (iVar2)
	{
		case 2:
		case 5:
			if (!func_399(iVar4))
			{
				return uVar3;
			}
			break;
		case 3:
		case 4:
			if (func_399(iVar4))
			{
				return uVar3;
			}
			break;
	}
	return -2;
}

int func_213(int iParam0)
{
	vector3 vVar0;

	if (!func_70())
	{
		return -2;
	}
	if (Global_1879534)
	{
		return -2;
	}
	vVar0.x = BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/]);
	vVar0.f_1 = BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/].f_1);
	vVar0.f_2 = BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/].f_2);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar0, BUILTIN::TO_FLOAT(Global_1879534.f_211[iParam0 /*4*/].f_3), true, false, true);
	return -2;
}

int func_214(int iParam0)
{
	func_400(iParam0);
	return -2;
}

int func_215(int iParam0)
{
	func_401(iParam0, 0);
	return -2;
}

int func_216(int iParam0)
{
	func_402(iParam0);
	return -2;
}

int func_217(int iParam0)
{
	func_403(iParam0);
	return -2;
}

int func_218(int iParam0)
{
	func_404(iParam0);
	return -2;
}

int func_219(int iParam0)
{
	func_405(iParam0);
	return -2;
}

int func_220(int iParam0)
{
	if (!func_406(iParam0))
	{
		return -2;
	}
	func_407(iParam0);
	return -2;
}

int func_221(int iParam0)
{
	if (!func_406(iParam0))
	{
		return -2;
	}
	func_408(iParam0);
	return -2;
}

int func_222(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_223(int iParam0, int iParam1)
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

void func_224(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(iParam0, iParam6);
	func_410(iParam0, iParam5);
	func_411(iParam0, iParam4);
	func_79(iParam0, iParam3);
	func_78(iParam0, iParam2);
	func_77(iParam0, iParam1);
}

bool func_225(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

bool func_226(int iParam0, bool bParam1)
{
	switch (func_412(iParam0))
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

int func_227(int iParam0)
{
	int iVar0;

	if (func_83(iParam0))
	{
		return 0;
	}
	if (func_413(iParam0, 0))
	{
		func_414(iParam0);
		return 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar0] == -1)
			{
				func_414(iParam0);
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

bool func_228(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_415(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_229(int iParam0, bool bParam1, bool bParam2)
{
	if (func_416(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0)
{
	return func_225(iParam0);
}

Vector3 func_231(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 880.67f, 1267.78f, 233.66f;
		default:
			break;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

int func_232(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_6(32768))
	{
		return 0;
	}
	iVar0 = func_2();
	if ((bParam4 && func_417(&(Global_1835011[iParam0 /*74*/].f_29), 512)) && !func_417(&(Global_1835011[iParam0 /*74*/].f_29), 1024))
	{
		if (func_418())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!func_419(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_226(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_74()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_226(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_74()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_226(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (func_420(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_421(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (func_422(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_423(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_424(iParam0));
				}
			}
			else if (func_422(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(1673015813, func_423(iParam0), func_425(iParam0), func_426(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(1673015813, func_427(iParam0), func_428(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_422(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_231(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_423(iParam0));
				bVar2 = true;
			}
		}
		else if (func_230(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(-1337945352, func_424(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_424(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(1673015813, func_424(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = 1673015813;
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_422(iParam0))
			{
				func_429(iParam2, 4194304);
			}
			else
			{
				func_430(iParam2, 4194304);
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!func_417(&(Global_1835011[iParam0 /*74*/].f_29), 1024) && !func_230(iParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 580546400);
			func_431(&(Global_1835011[iParam0 /*74*/].f_29), 1024);
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_230(iParam0))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, -1986290853);
	}
	if (bParam3 || func_421(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
	}
	iVar4 = func_432(Global_40.f_4283);
	if (func_327(iVar4) && func_433(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = func_434(iVar4);
	}
	if (func_435(iParam0, bVar5, iVar4))
	{
		func_436(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_437(579))
	{
		func_438(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_417(&(Global_1835011[iParam0 /*74*/].f_29), 4096) && !func_417(&(Global_1835011[iParam0 /*74*/].f_29), 8192)) && IntToFloat(func_74()) >= 10f) && !Global_1935630.f_12) && !Global_16) && !func_439(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_420(iParam0, iVar0) || (fParam1 >= (func_440(iParam0) * func_440(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			StringConCat(&cVar7, "_FIRST", 16);
			func_441(&cVar7, 10000, 0, 0, 0, 1);
			func_431(&(Global_1835011[iParam0 /*74*/].f_29), 8192);
		}
	}
	return 1;
}

void func_233(var uParam0, int iParam1)
{
	uParam0->f_63 = (uParam0->f_63 || iParam1);
}

int func_234(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_30;
}

int func_235(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

bool func_236(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_2() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_14(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_442(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_443(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_254(iVar0, 512, 1);
			}
			else
			{
				func_444(iVar0, 512, 1);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_237(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	iVar0 = func_234(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_443(iVar1, &iVar0))
		{
			bVar2 = func_446(func_445(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else
			{
				if (bParam1 && func_447(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_447(iVar1, 47, 1))
				{
					return true;
				}
				if (!PED::_0x5102307CE88798EB(bVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(bVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(bVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

Vector3 func_238(int iParam0)
{
	return func_424(iParam0);
}

bool func_239(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_448(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

int func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_415(iParam0))
	{
		return -1;
	}
	if (func_2() != -1)
	{
		iVar2 = func_449(iParam0);
		if (iVar2 >= 0)
		{
			func_450(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_451(iVar1, 1);
			func_450(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_449(iParam0);
		if (iVar2 >= 0)
		{
			func_450(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_20(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_451(iVar0, 1);
					func_450(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

bool func_241(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_234(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_443(iVar1, &iVar0))
		{
			bVar2 = func_446(func_445(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(bVar2))
			{
			}
			else if (PED::_0x5102307CE88798EB(bVar2))
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(bVar2);
			}
		}
		iVar1++;
	}
}

void func_243(int iParam0)
{
	func_452(iParam0);
}

void func_244(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_245(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_241(iParam1))
	{
		iParam1 = func_449(func_235(iParam0));
		if (!func_241(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		if ((bParam2 || bParam6) && (!func_420(iParam0, -1) || Global_1835011[iParam0 /*74*/].f_70))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, 724623647);
		}
		else
		{
			if (func_418())
			{
				if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
				{
					if (Global_1835011[iParam0 /*74*/].f_27 == Global_1905944.f_5698)
					{
						func_453(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
			if (func_420(iParam0, -1) && func_454(iParam0))
			{
				func_232(iParam0, fParam5, iParam1, bParam2, 1);
				func_233(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !func_225(iParam0)) && !Global_43891)
	{
		func_232(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_455(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*74*/].f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false) && !func_456(iParam0)) && !func_455(iParam1, 1024))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
	}
	if (bParam4)
	{
		func_457(Global_1835011[iParam0 /*74*/].f_1);
	}
	else
	{
		func_430(iParam1, 3831);
	}
	Global_1835011[iParam0 /*74*/].f_73 = 0;
}

void func_246(int iParam0)
{
	if (!func_458(iParam0))
	{
		return;
	}
	func_457(Global_1835011[iParam0 /*74*/].f_1);
}

void func_247(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_18(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_459(iParam0);
	}
	if (func_460(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		func_461(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (func_19(Global_1347702[iParam0 /*49*/].f_12, 1024))
	{
		func_462(&(Global_1347702[iParam0 /*49*/].f_12), 1024);
	}
	if (iParam1 == 1)
	{
		func_463(iParam0, 0);
	}
	func_464(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	func_465(iParam0, iParam2);
	if (func_466(iParam0))
	{
		func_457(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (func_467(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_468(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

void func_249(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char[] cVar0[8];

	if (!func_18(iParam0))
	{
		return;
	}
	if (func_469())
	{
		func_470(iParam0, 1);
	}
	if (iParam0 == 85)
	{
		MISC::_0xCC3EDC5614B03F61(18);
	}
	else if (iParam0 == 86)
	{
		MISC::_0xCC3EDC5614B03F61(19);
	}
	else if (iParam0 == 87)
	{
		MISC::_0xCC3EDC5614B03F61(20);
	}
	else if (iParam0 == 135)
	{
		MISC::_0xCC3EDC5614B03F61(73);
	}
	else if (iParam0 == 20)
	{
		MISC::_0xCC3EDC5614B03F61(6);
	}
	else if (iParam0 == 19)
	{
		MISC::_0xCC3EDC5614B03F61(7);
	}
	else if (iParam0 == 12)
	{
		MISC::_0xCC3EDC5614B03F61(10);
	}
	else if (iParam0 == 16)
	{
		MISC::_0xCC3EDC5614B03F61(11);
	}
	else if (iParam0 == 17)
	{
		MISC::_0xCC3EDC5614B03F61(13);
	}
	else if (iParam0 == 18)
	{
		MISC::_0xCC3EDC5614B03F61(14);
	}
	else if (iParam0 == 14)
	{
		MISC::_0xCC3EDC5614B03F61(15);
	}
	if (iParam0 == 95)
	{
		if (!func_6(32768))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(joaat("SP_ACHIEVEMENTS"), joaat("ACH_FWB")))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(joaat("ACH_FWB_CLEMENS"), 1);
			}
		}
	}
	else if (iParam0 == 102)
	{
		if (!func_469())
		{
			Global_1347702[iParam0 /*49*/].f_35 = 104;
			Global_1347702[104 /*49*/].f_48 = Global_1347702[iParam0 /*49*/].f_15;
		}
	}
	func_248(iParam0, 0, iParam3);
	if (func_18(Global_1347702[iParam0 /*49*/].f_35))
	{
		func_471(Global_1347702[iParam0 /*49*/].f_35);
		if (iParam1 == 1)
		{
			func_82(Global_1347702[iParam0 /*49*/].f_35, 0);
			if (func_472(iParam0))
			{
				Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43 = Global_1347702[iParam0 /*49*/].f_43;
			}
		}
	}
	else
	{
		func_473();
	}
	if (!func_19(Global_1347702[iParam0 /*49*/].f_12, 1) && !func_19(Global_1347702[iParam0 /*49*/].f_12, 33554432))
	{
		if (func_19(Global_1347702[iParam0 /*49*/].f_12, 262144))
		{
			if (bParam5)
			{
				func_474(iParam0);
			}
			bParam5 = false;
			cVar0 = func_475(Global_1347702[iParam0 /*49*/].f_15);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
			{
				MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cVar0), 2);
			}
			func_462(&(Global_1347702[iParam0 /*49*/].f_12), 262144);
		}
	}
	if (bParam2 == 1)
	{
		bParam2 = func_19(Global_1347702[iParam0 /*49*/].f_12, 4);
	}
	if (!func_6(32768))
	{
		func_476(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_477(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	func_478(iParam0);
}

bool func_250(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_251(int iParam0)
{
	if (!func_479(iParam0))
	{
		return;
	}
	func_254(iParam0, 2, 1);
	func_480(iParam0);
}

void func_252(int iParam0)
{
	if (!func_479(iParam0))
	{
		return;
	}
	func_444(iParam0, 32, 1);
	func_254(iParam0, 4, 1);
	func_254(iParam0, 2, 1);
	func_480(iParam0);
}

void func_253(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	func_444(iParam0, 2, 1);
	bVar0 = true;
	if (((!bParam1 && func_250(iParam0)) && ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/])) && ENTITY::IS_ENTITY_ON_SCREEN(Global_1360165[iParam0 /*1157*/]))
	{
		bVar0 = false;
	}
	func_481(iParam0, 0, 0, bVar0);
}

void func_254(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_250(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] || iParam1);
}

int func_255()
{
	return Global_40.f_4283;
}

void func_256(int iParam0)
{
	func_254(iParam0, 4, 1);
}

void func_257(int iParam0)
{
	func_444(iParam0, 4, 1);
}

void func_258(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	if (!func_250(iParam0))
	{
		return;
	}
	if (func_482(iParam0))
	{
		if (!func_483(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_447(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_484(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	bVar1 = func_446(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(bVar1) && func_485(iParam0) < 10000f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(bVar1) && ENTITY::IS_ENTITY_ATTACHED(bVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(bVar1, true)) || PED::IS_PED_ON_MOUNT(bVar1)) || PED::IS_PED_IN_ANY_VEHICLE(bVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(bVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(bVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(bVar1, true, true);
	}
	if (bParam4)
	{
		func_486(iParam0, 2, 1);
	}
	else
	{
		func_487(iParam0);
		func_486(iParam0, 1, 1);
	}
}

void func_259(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_72();
	if (bVar0)
	{
		func_73(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_71(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			Global_1360165[iParam0 /*1157*/].f_1152 = uParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = uParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = iVar1;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = uParam1;
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_479(iParam0))
	{
		return;
	}
	if (!func_488(iParam1))
	{
		return;
	}
	iVar0 = -1;
	bVar1 = false;
	if (func_489(iParam0, iParam1, &iVar0, &bVar1))
	{
		if (bVar1)
		{
			func_490(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
		}
		if (iVar0 != -1)
		{
			func_491(iParam0, iVar0);
		}
	}
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		func_492(iVar0);
		iVar0++;
	}
	func_493();
}

void func_262(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_1357549.f_1495 = (Global_1357549.f_1495 || iParam0);
			break;
	}
}

void func_263(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_479(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_254(iParam0, 32768, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(PERSCHAR::_0xA00DF706C60173D1(func_494(iParam0, 1)), true);
		if (bParam2)
		{
			Global_1360165[iParam0 /*1157*/].f_126 = func_495(iParam0);
		}
	}
	else
	{
		func_444(iParam0, 32768, 1);
	}
}

bool func_264(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return false;
	}
	iVar0 = func_484(iParam0, 0);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_446(iParam0)) && !ENTITY::_0x88AD6CC10D8D35B2(func_446(iParam0)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(func_446(iParam0), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_6 != iParam1 || Global_40.f_4942[iParam0 /*60*/].f_3 == 0)
	{
		func_306(iParam0, func_496(iParam0, Global_40.f_4283, 1, 1), 1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_6 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(func_497(iParam0), Global_40.f_4942[iParam0 /*60*/].f_6);
	return true;
}

bool func_265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return false;
	}
	iVar0 = func_494(iParam0, 0);
	if (iVar0 == 0)
	{
		return true;
	}
	iVar1 = func_498(iParam0, 0);
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)) && !ENTITY::_0x88AD6CC10D8D35B2(PERSCHAR::_0x31C70A716CAE1FEE(iVar1)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(iVar1), true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
	}
	Global_40.f_4942[iParam0 /*60*/].f_7 = iParam1;
	PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
	return true;
}

int func_266(int iParam0)
{
	if (!func_406(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AZL_CAMP_COLTER"):
			return "AZL_CAMP_COLTER";
		case joaat("AZL_CAMP_HORSESHOE_OVERLOOK"):
			return "AZL_CAMP_HORSESHOE_OVERLOOK";
		case joaat("AZL_CAMP_CLEMENS_POINT"):
			return "AZL_camp_clemens_point";
		case joaat("AZL_CAMP_SHADY_BELLE"):
			return "AZL_camp_shady_belle";
		case joaat("AZL_CAMP_BEAVER_HOLLOW"):
			return "AZL_camp_beaver_hollow";
		case joaat("AZ_CAMP_DARK_MOOD_ZONE"):
			return "AZ_camp_dark_mood_zone";
		case joaat("AZL_CAMP_PRONGHORN_RANCH"):
			return "AZL_camp_pronghorn_ranch";
		case joaat("AZL_PRONGHORN_RANCH"):
			return "AZL_pronghorn_ranch";
		case joaat("AZL_CAMP_BEECHERS_HOPE"):
			return "AZL_camp_beechers_hope";
		case joaat("AZL_BEECHERS_HOPE"):
			return "AZL_beechers_hope";
		case joaat("AZL_CAMP_LAKAY"):
			return "AZL_Camp_Lakay";
		case joaat("AZL_CAMP_GUARMA"):
			return "AZL_Camp_Guarma";
		case joaat("AZL_BEECHERS_HOPE_FARM_RUNNING"):
			return "AZL_beechers_hope_farm_running";
		default:
			break;
	}
	return "";
}

bool func_268(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_40.f_4283.f_4 == iParam0)
	{
		return;
	}
	Global_40.f_4283.f_4 = iParam0;
	iVar0 = 176656832;
	iVar1 = 176656832;
	switch (Global_40.f_4283)
	{
		case 0:
			iVar0 = joaat("CSTAG_ARRANGEMENT_COL_SETUP");
			iVar1 = joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN");
			break;
		case 1:
			iVar0 = joaat("CSTAG_ARRANGEMENT_HSO_SETUP");
			iVar1 = joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN");
			break;
		case 2:
			iVar0 = joaat("CSTAG_ARRANGEMENT_CLM_SETUP");
			iVar1 = joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN");
			break;
		case 3:
			iVar0 = joaat("CSTAG_ARRANGEMENT_SDB_SETUP");
			iVar1 = joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN");
			break;
		case 6:
			iVar0 = joaat("CSTAG_ARRANGEMENT_BVH_SETUP");
			iVar1 = joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN");
			break;
	}
	iVar2 = 0;
	while (iVar2 < 60)
	{
		if (Global_40.f_4283.f_6[iVar2 /*5*/].f_4 == 2)
		{
			func_499(&(Global_40.f_4283.f_6[iVar2 /*5*/]), 1, 0);
		}
		iVar2++;
	}
	if (Global_40.f_4283.f_4 == 0 && iVar0 != 176656832)
	{
		func_272(iVar0, joaat("CSTP_PERSIST_ACROSS_STATES"), -469960592, -1, 1, 1, 0);
	}
	else if (Global_40.f_4283.f_4 == 2 && iVar1 != 176656832)
	{
		func_272(iVar1, joaat("CSTP_PERSIST_ACROSS_STATES"), -469960592, -1, 1, 1, 0);
	}
	func_500();
}

void func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar22;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_40.f_4283 == iParam0)
	{
		iVar0 = func_501(func_432(iParam0));
		if (iVar0 != -1)
		{
			Global_40.f_6 = { Global_1395601.f_5[iVar0 /*28*/].f_2 };
		}
		func_272(func_502(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
		Global_40.f_4283.f_330 = -15;
		return;
	}
	func_503();
	switch (iParam0)
	{
		case 0:
		case 1:
			func_504("hso_post_caravan");
			func_505(-349064220);
			break;
		case 2:
			func_504("dewclm_post_caravan");
			func_505(1776302352);
			func_506(-349064220);
			break;
		case 3:
			func_505(-523522517);
			func_506(-349064220);
			func_506(1776302352);
			break;
		case 4:
		case 5:
		case 6:
			func_506(-349064220);
			func_506(1776302352);
			func_506(-523522517);
			break;
		case 7:
		case 8:
			func_506(-349064220);
			func_506(1776302352);
			func_506(-523522517);
			func_506(1591451572);
			break;
	}
	Global_1934266.f_66 = 1;
	func_507(func_432(iParam0), 0);
	switch (func_2())
	{
		case -1:
			func_508();
			func_509(iParam0);
			func_510(1, 18);
			func_511(iParam0);
			func_512(iParam0);
			Var2.f_11 = 1;
			iVar22 = 0;
			while (iVar22 < 10)
			{
				MISC::_COPY_MEMORY(&(Global_40.f_6563.f_274[iVar22 /*20*/]), &Var2, 20);
				iVar22++;
			}
			Global_40.f_6563.f_273 = 0;
			func_513(&(Global_1359489.f_25), 1, 1);
			Global_1359453 = 0;
			iVar1 = 0;
			while (iVar1 < 27)
			{
				func_444(iVar1, 16384, 1);
				iVar1++;
			}
			func_514(0, 14);
			func_515();
			func_516();
			Global_1357549.f_1497.f_8 |= 1;
			Global_1391438 = 1;
			Global_40.f_4283.f_330 = -15;
			func_272(joaat("CSTAG_NEW_CAMP_FIRST_VISIT"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 0, 1, 0);
			func_272(func_502(iParam0), joaat("CSTP_PERSIST_ACROSS_STATES"), -1235532919, -1, 1, 1, 0);
			break;
	}
}

int func_271()
{
	switch (func_2())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_517(iParam0);
	iVar3 = func_518(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_519(iParam0, 1);
			if (func_520(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_499(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_521(1, iParam0);
				}
				else
				{
					func_522(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_523(iParam0))
	{
		return 0;
	}
	iVar2 = func_524(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			if (func_525(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1, 1) > func_525(iParam3, 1))
			{
				return 1;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_526(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == joaat("TSTAG_NO_TAGS"))
		{
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] = iParam1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_72();
				func_73(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_526(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			if (func_527(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if (Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/].f_3 == iVar2 && Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] != iParam1)
					{
						if ((Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON") || Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")) && (iParam1 == joaat("TSTAG_LOCKDOWN_SALOON") || iParam1 == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")))
						{
							return 0;
						}
						func_528(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/]));
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_523(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			func_528(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/]));
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_275(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

void func_276(int iParam0)
{
	if (!func_275(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7854), iParam0);
}

bool func_277(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 3)
	{
		return false;
	}
	return true;
}

void func_278(int iParam0)
{
	if (!func_277(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7855), iParam0);
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_279(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_530(iVar0);
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_280(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_531(iVar0, 0);
			break;
		case 1:
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_281(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 0:
			iVar0 = iParam1;
			if (!func_529(iVar0))
			{
				return;
			}
			func_532(iVar0, 0, 0);
			break;
		case 1:
		case 2:
			break;
		default:
			break;
	}
}

bool func_282(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

void func_283(int iParam0)
{
	if (!func_282(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7856), iParam0);
}

void func_284(int iParam0)
{
	if (!func_282(iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&(Global_40.f_7856), iParam0);
}

void func_285(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 8:
			break;
		case 10:
			break;
		default:
			break;
	}
}

bool func_286(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_287(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_533(iParam0))
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

void func_288(int iParam0)
{
	int iVar0;

	if (!func_533(iParam0))
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

bool func_289(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_THROWN_TOMAHAWK"):
		case joaat("WEAPON_THROWN_DYNAMITE"):
		case joaat("WEAPON_THROWN_THROWING_KNIVES"):
		case joaat("WEAPON_THROWN_MOLOTOV"):
			iVar0 = 1;
			break;
	}
	return iVar0;
}

bool func_290(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (!func_534(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_535(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_536(iParam0, bParam2);
	iVar2 = 0;
	if (func_537(iParam0, 0, 0) == 0)
	{
		if (func_538(iParam0))
		{
			iVar5 = func_539(iParam0);
			iVar6 = func_540(iVar5);
			iVar7 = func_541(iVar6) + 1;
			func_542(iVar5);
			if (func_543(38))
			{
				func_293(483, 0);
			}
			else
			{
				func_293(482, 0);
			}
			if (iVar7 == func_544(iVar6))
			{
				func_290(func_545(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_70() && func_546(4))
				{
					if (func_70() && (func_547(38) || func_543(38)))
					{
						func_549(38, func_545(iVar6), 0, 0, func_548(), 0, -1, 0);
						func_550(2);
					}
					else
					{
						func_549(38, func_545(iVar6), 0, 0, func_548(), 0, -1, 0);
						func_550(1);
					}
				}
			}
			else if (func_70() && func_546(4))
			{
				if (func_70() && (func_547(38) || func_543(38)))
				{
					func_549(38, 0, 0, 0, func_548(), 0, -1, 0);
					func_550(2);
				}
				else
				{
					func_549(38, 0, 0, 0, func_548(), 0, -1, 0);
					func_550(1);
				}
			}
			if (func_70() && func_546(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_70() && (func_547(38) || func_543(38)))
					{
						func_551(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_551(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_552(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_297(iParam0, 866047851) && !func_297(iParam0, -1979000645)) && !func_297(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_553(iParam0, 8388608) && !func_554(28))
	{
		func_301(28);
	}
	if (!bVar3)
	{
		if (func_297(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_555(iParam0) == -1447088266)
			{
				iVar1 = func_557(func_556(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_2() == -1)
					{
						func_287(iVar1);
					}
					if (func_558(0) && func_559(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_560(iParam0, iVar0, iParam5);
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
					if (func_2() == -1)
					{
						func_287(iParam0);
					}
					if (func_558(0) && func_559(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_560(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_552(iParam0) == joaat("WEAPON"))
		{
			if (!func_561(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_552(iParam0) == joaat("AMMO") && func_562(iParam0))
		{
			if (!func_563(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_297(iParam0, 866047851))
		{
			func_564(iParam0);
		}
		else if (func_297(iParam0, 2000026003))
		{
			func_565(iParam0);
		}
		else if (func_297(iParam0, -103750053))
		{
			func_567(func_566(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_567(func_568(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_297(iParam0, -121341956) && !func_297(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_226(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_293(498, 0);
				}
			}
			if (func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378))
			{
				func_569(iParam0);
			}
		}
		else if (func_297(iParam0, -136654233))
		{
			if (func_297(iParam0, -1021472396))
			{
			}
		}
		else if (func_297(iParam0, -1466706512) && func_297(iParam0, 1147021565))
		{
			func_293(484, 0);
		}
		else if (func_297(iParam0, 1147021565) && func_297(iParam0, -524514947))
		{
		}
		else if (func_297(iParam0, 554195525))
		{
		}
		else if (func_297(iParam0, 589988438))
		{
			if (func_570())
			{
				func_571(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_297(iParam0, 787083290) && func_297(iParam0, 949916894))
		{
			func_572(iParam0);
		}
		else if (func_297(iParam0, -1718133314))
		{
			func_573(iParam0);
		}
		else if (func_297(iParam0, -1738650224))
		{
			func_574(iParam0);
		}
		else if (func_297(iParam0, -1112814642) && func_297(iParam0, 949916894))
		{
			func_575(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_297(iParam0, 1841149704))
		{
			func_576();
		}
		else if (func_297(iParam0, 606799272))
		{
			func_577(iParam0, iParam1);
			func_578(iParam0);
		}
		else if (func_297(iParam0, -1112814642) && func_297(iParam0, -1697809989))
		{
			func_579(iParam0, 0, 0, 0);
		}
		else if (func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378))
		{
			func_569(iParam0);
		}
		else if (func_297(iParam0, -1921346699))
		{
			if (func_2() != -1)
			{
				return false;
			}
			func_580(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_297(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_581(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_290(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_581(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_290(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_581(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_290(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_581(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_290(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_581(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_290(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_581(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_290(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_297(iParam0, -839724752) && func_553(iParam0, 4))
		{
			if (!func_543(42))
			{
				func_582(iParam0);
			}
		}
		else if (func_297(iParam0, 1399091007))
		{
			func_583(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_297(iParam0, 1248798204))
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
				func_290(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_301(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_362(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_584(&iVar9, 0))
				{
					func_559(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_362(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_293(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_585();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_586();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_587();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_588();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_589();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_591(499813453, 0);
				func_592(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_591(499813453, 0);
				func_592(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_590(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_591(499813453, 0);
				func_592(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_591(666607663, 0);
				func_593(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_591(666607663, 0);
				func_593(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_590(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_591(666607663, 0);
				func_593(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_591(-220219788, 0);
				func_594(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_591(-220219788, 0);
				func_594(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_590(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_591(-220219788, 0);
				func_594(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_590(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_591(218622660, 0);
				func_595(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_590(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_591(218622660, 0);
				func_595(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_591(390004462, 0);
				func_596(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_591(390004462, 0);
				func_596(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_590(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_591(390004462, 0);
				func_596(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_591(6410548, 0);
				func_597(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_591(6410548, 0);
				func_597(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_591(6410548, 0);
				func_597(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_590(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_591(6410548, 0);
				func_597(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_292(242, func_598(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_292(240, func_598(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_292(241, func_598(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
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
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					func_599(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_293(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_293(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_293(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_290(func_600(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_290(func_601(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_554(1))
				{
					func_293(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_293(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_293(496, 0);
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
		func_602(&iVar10);
		if (!func_603(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_558(0))
		{
			return true;
		}
		if (func_552(iParam0) == joaat("CLOTHING"))
		{
			func_604(iParam0);
		}
		if (func_297(iParam0, -1979000645))
		{
			func_605(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_558(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_290(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_606(iVar2, 0);
		}
	}
	Var35 = { func_607(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_608(iParam0);
	if (fParam6 > 0f)
	{
		if (func_297(iParam0, -839724752))
		{
			func_609(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_610(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

int func_291(int iParam0)
{
	var uVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (func_611(iParam0, &uVar0, -1683087938, 0))
	{
		return uVar0;
	}
	return iParam0;
}

void func_292(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_615(iVar0, iVar1);
}

bool func_294(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_295(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_294(iParam0))
	{
		return;
	}
	if (func_616(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		func_618(iParam0, 1, 0);
	}
	iVar0 = func_619(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_620(iParam0, 512))
		{
			func_325(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_418() && !bParam1) && !func_14(0, 0, 1))
	{
		func_441(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_621(iParam0, 6);
	if (bParam2)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(1, 4);
		}
	}
}

int func_296(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (Global_1905943)
	{
		return 0;
	}
	Global_1905943 = iParam3;
	if (Global_1905943)
	{
	}
	if (Global_1905941 == iParam0)
	{
		return 1;
	}
	if (Global_40.f_7729 == iParam0 && !bParam2)
	{
		Global_1905941 = iParam0;
		return 1;
	}
	if (Global_40.f_7729 != Global_1905941 && !bParam2)
	{
		return 0;
	}
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (!func_616(iParam0) && !bParam2)
	{
		return 0;
	}
	iVar0 = func_619(iParam0);
	if (iParam0 > 5 && !func_622(iVar0, Global_1946804.f_1))
	{
	}
	Global_1905941 = iParam0;
	func_623(iParam0, 1024);
	DECORATOR::DECOR_SET_BOOL(Global_35, "outfitChanged", false);
	DECORATOR::DECOR_SET_BOOL(Global_35, "playerChangeOutfits", true);
	if (bParam2)
	{
		func_621(iParam0, 32768);
	}
	if (bParam1)
	{
		func_621(iParam0, 8192);
	}
	return 1;
}

bool func_297(int iParam0, int iParam1)
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

void func_298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (func_297(iParam0, 1989861793))
	{
		iVar0 = func_624(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_625(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_626(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_627(iVar14, iVar1);
					if (iVar15 != iParam0 && func_286(iVar15, 0))
					{
						if (func_628(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_629(iVar1);
				if (bVar13)
				{
					func_630(iParam0);
				}
				else
				{
					func_293(306, 0);
				}
			}
		}
	}
}

int func_299(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_631(iParam0, 1);
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
			func_610(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_581(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_607(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_537(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_537(iParam0, 0, 0) - iParam1) < 0)
		{
			func_299(iParam0, func_537(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_552(iParam0) == joaat("WEAPON"))
	{
		if (!func_632(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_633(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_610(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_634(iParam0, iParam1);
	return 1;
}

bool func_300(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_301(int iParam0)
{
	if (!func_300(iParam0))
	{
		return;
	}
	func_635(iParam0);
	func_636(iParam0);
}

void func_302(int iParam0)
{
	if (!func_300(iParam0))
	{
		return;
	}
	func_637(iParam0);
	func_638(iParam0);
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_506(1497516462);
			func_505(2016141805);
			func_505(1010885152);
			func_505(-502324015);
			break;
		case 2016141805:
			func_505(1497516462);
			func_506(2016141805);
			func_505(1010885152);
			func_505(-502324015);
			break;
		case 1010885152:
			func_505(1497516462);
			func_505(2016141805);
			func_506(1010885152);
			func_505(-502324015);
			break;
		case -502324015:
			func_505(1497516462);
			func_505(2016141805);
			func_505(1010885152);
			func_506(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_505(-538889627);
			func_505(-538880323);
			func_505(-1056767524);
			func_506(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_639();
			func_506(iParam0);
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
			func_640();
			func_506(iParam0);
			break;
		case 2019386373:
			func_505(-664252410);
			func_505(2109952320);
			func_506(2019386373);
			break;
		case -664252410:
			func_505(2019386373);
			func_505(2109952320);
			func_506(-664252410);
			break;
		case 2109952320:
			func_505(2019386373);
			func_505(-664252410);
			func_506(2109952320);
			break;
		case -1674179981:
			func_505(-1835851517);
			func_505(-1838352012);
			func_506(-1674179981);
			break;
		case -1835851517:
			func_505(-1674179981);
			func_505(-1838352012);
			func_506(-1835851517);
			break;
		case -1838352012:
			func_505(-1674179981);
			func_505(-1835851517);
			func_506(-1838352012);
			break;
		case -1717960576:
			func_505(210001842);
			func_506(-1717960576);
			break;
		case 210001842:
			func_505(-1717960576);
			func_506(210001842);
			break;
		case -150493654:
			func_505(-1271608261);
			func_505(1846061697);
			func_505(-1145519186);
			func_506(-150493654);
			break;
		case -1271608261:
			func_505(-150493654);
			func_505(1846061697);
			func_505(-1145519186);
			func_506(-1271608261);
			break;
		case 1846061697:
			func_505(-150493654);
			func_505(-1271608261);
			func_505(-1145519186);
			func_506(1846061697);
			break;
		case -1145519186:
			func_505(-150493654);
			func_505(-1271608261);
			func_505(1846061697);
			func_506(-1145519186);
			break;
		case 1766284049:
			func_505(280705402);
			func_505(1926308480);
			func_506(1766284049);
			break;
		case 280705402:
			func_505(1766284049);
			func_505(1926308480);
			func_506(280705402);
			break;
		case 1926308480:
			func_505(1766284049);
			func_505(280705402);
			func_506(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_505(439465264);
				func_506(1609506757);
			}
			else
			{
				func_505(1609506757);
				func_505(439465264);
			}
			break;
		case 439465264:
			if (func_641(1609506757))
			{
				if (bParam1)
				{
					func_506(439465264);
				}
				else
				{
					func_505(439465264);
				}
			}
			break;
		case 1822001510:
			func_505(-1612662716);
			func_506(1822001510);
			break;
		case -1612662716:
			func_505(1822001510);
			func_506(-1612662716);
			break;
		case 1306158345:
			func_505(1952610440);
			func_505(-223469678);
			func_505(-404698347);
			func_505(1517904467);
			func_506(1306158345);
			break;
		case 1952610440:
			func_505(1306158345);
			func_505(-223469678);
			func_505(-404698347);
			func_505(1517904467);
			func_506(1952610440);
			break;
		case -223469678:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-404698347);
			func_505(1517904467);
			func_506(-223469678);
			break;
		case -404698347:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-223469678);
			func_505(1517904467);
			func_506(-404698347);
			break;
		case 1517904467:
			func_505(1306158345);
			func_505(1952610440);
			func_505(-223469678);
			func_505(-404698347);
			func_506(1517904467);
			break;
		case 1376646519:
			func_505(931649776);
			func_505(-434590080);
			func_505(1743048395);
			func_505(449774763);
			func_506(1376646519);
			break;
		case 931649776:
			func_505(1376646519);
			func_505(-434590080);
			func_505(1743048395);
			func_505(449774763);
			func_506(931649776);
			break;
		case -434590080:
			func_505(1376646519);
			func_505(931649776);
			func_505(1743048395);
			func_505(449774763);
			func_506(-434590080);
			break;
		case 1743048395:
			func_505(1376646519);
			func_505(931649776);
			func_505(-434590080);
			func_505(449774763);
			func_506(1743048395);
			break;
		case 449774763:
			func_505(1376646519);
			func_505(931649776);
			func_505(-434590080);
			func_505(1743048395);
			func_506(449774763);
			break;
		case -1414537028:
			func_505(38162571);
			func_505(1350391819);
			func_505(54073871);
			func_506(-1414537028);
			break;
		case 38162571:
			func_505(-1414537028);
			func_505(1350391819);
			func_505(54073871);
			func_506(38162571);
			break;
		case 1350391819:
			func_505(-1414537028);
			func_505(38162571);
			func_505(54073871);
			func_506(1350391819);
			break;
		case 54073871:
			func_505(-1414537028);
			func_505(38162571);
			func_505(1350391819);
			func_506(54073871);
			break;
		case 198200492:
			func_506(198200492);
			func_505(-1124061431);
			func_505(52706132);
			func_505(-259123672);
			break;
		case -1124061431:
			func_505(198200492);
			func_506(-1124061431);
			func_505(52706132);
			func_505(-259123672);
			break;
		case 52706132:
			func_505(198200492);
			func_505(-1124061431);
			func_506(52706132);
			func_505(-259123672);
			break;
		case -259123672:
			func_505(198200492);
			func_505(-1124061431);
			func_505(52706132);
			func_506(-259123672);
			break;
		case -919512195:
			func_506(-919512195);
			func_505(-1925798111);
			func_505(420709909);
			func_505(1703426636);
			break;
		case -1925798111:
			func_506(-1925798111);
			func_505(-919512195);
			func_505(420709909);
			func_505(1703426636);
			break;
		case 420709909:
			func_506(420709909);
			func_505(-919512195);
			func_505(-1925798111);
			func_505(1703426636);
			break;
		case 1703426636:
			func_506(1703426636);
			func_505(-919512195);
			func_505(-1925798111);
			func_505(420709909);
			break;
		case -1223121209:
			func_506(-1223121209);
			func_505(630808005);
			break;
		case 630808005:
			func_506(630808005);
			func_505(-1223121209);
			break;
		case 1453909576:
			func_506(1453909576);
			func_505(1643531967);
			break;
		case 1643531967:
			func_506(1643531967);
			func_505(1453909576);
			break;
		case 0:
			func_506(0);
			func_505(473295046);
			func_505(-1738165526);
			break;
		case 473295046:
			func_506(473295046);
			func_505(0);
			func_505(-1738165526);
			break;
		case -1738165526:
			func_506(-1738165526);
			func_505(0);
			func_505(473295046);
			break;
		case 932909855:
			func_506(932909855);
			func_505(2051822093);
			break;
		case 2051822093:
			func_506(2051822093);
			func_505(932909855);
			break;
		case 405586984:
			func_506(405586984);
			func_505(1509509592);
			func_505(-959357075);
			func_505(-1311865656);
			break;
		case 1509509592:
			func_506(1509509592);
			func_505(405586984);
			func_505(-959357075);
			func_505(-1311865656);
			break;
		case -959357075:
			func_506(-959357075);
			func_505(1509509592);
			func_505(405586984);
			func_505(-1311865656);
			break;
		case -1311865656:
			func_506(-1311865656);
			func_505(1509509592);
			func_505(-959357075);
			func_505(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_506(-524145696);
			}
			else
			{
				func_505(-524145696);
			}
			func_505(1626481264);
			func_505(282809459);
			break;
		case 282809459:
			func_506(282809459);
			func_505(1626481264);
			func_505(-524145696);
			break;
		case 1626481264:
			func_506(1626481264);
			func_505(-524145696);
			func_505(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_506(885203519);
			}
			else
			{
				func_505(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_506(-1080627546);
			}
			else
			{
				func_505(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_641(iParam0))
				{
					func_506(iParam0);
				}
			}
			else if (func_641(iParam0))
			{
				func_505(iParam0);
			}
			break;
	}
}

bool func_304(int iParam0)
{
	if (!func_642(iParam0))
	{
		return false;
	}
	if (!func_81())
	{
		return true;
	}
	return false;
}

void func_305(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_643(iVar0, iParam0))
		{
			func_306(iVar0, iParam0, 0);
		}
		iVar0++;
	}
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (!func_250(iParam0))
	{
		return;
	}
	if (!func_643(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_486(iParam0, 25, 1);
	}
}

void func_307(int iParam0, int iParam1)
{
	if (!func_644(iParam0))
	{
		return;
	}
	Global_40.f_7100[iParam0 /*8*/].f_7 = iParam1;
}

void func_308(int iParam0, bool bParam1)
{
	if (!func_645(iParam0))
	{
		return;
	}
	Global_17504.f_42[iParam0 /*8*/].f_7 = !bParam1;
}

void func_309(int iParam0, var uParam1)
{
	Global_17504.f_42[iParam0 /*8*/].f_5 = uParam1;
}

bool func_310(int iParam0)
{
	if (iParam0 == joaat("PLAYER_THREE"))
	{
		Global_40.f_7729 = 61;
		Global_1905941 = 61;
	}
	Global_1935630.f_2 = iParam0;
	func_646(iParam0, 999);
	return true;
}

void func_311()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		Global_20710.f_1630[iVar0] = -15;
		func_342(iVar0, 8);
		func_342(iVar0, 256);
		func_342(iVar0, 128);
		iVar0++;
	}
}

float func_312(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

float func_313(float fParam0, float fParam1, float fParam2)
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

void func_314()
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

bool func_315()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_316(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_48 = uParam0;
}

void func_317(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_47 = uParam0;
}

void func_318(var uParam0)
{
	if (func_647())
	{
		return;
	}
	Global_40.f_11095.f_46 = uParam0;
}

void func_319(int iParam0)
{
	Global_1934765.f_67 = (Global_1934765.f_67 || iParam0);
}

bool func_320(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

bool func_322(int iParam0)
{
	return iParam0 != 0;
}

bool func_323(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

void func_324(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_320(iParam0))
	{
		return;
	}
	if (!func_321(iParam1))
	{
		return;
	}
	if (Global_40.f_7731[iParam0 /*5*/] == iParam1)
	{
		return;
	}
	Global_40.f_7731[iParam0 /*5*/] = iParam1;
	if (!bParam2)
	{
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_648(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_72();
		func_649(iParam0, &iVar0, &iVar1, bVar2);
		func_73(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_325(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_650(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = bParam3;
	func_651(Var0);
}

void func_326(bool bParam0)
{
	if ((!func_226(func_652(4), 1) || func_467(func_652(33))) || func_467(func_652(34)))
	{
		return;
	}
	func_653(bParam0);
	func_654(bParam0);
	func_655(0);
}

bool func_327(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_328(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_656(iParam0))
	{
		return;
	}
	iVar0 = 8388864;
	if (bParam1)
	{
		if (!func_657(iParam0))
		{
			func_658(iParam0, iVar0);
		}
	}
	else if (func_657(iParam0))
	{
		func_659(iParam0, iVar0);
	}
}

bool func_329(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

void func_330(int iParam0, var uParam1, int iParam2)
{
	if (func_329(iParam0, 0))
	{
		Global_40.f_9571[iParam0 /*10*/].f_1 = uParam1;
	}
}

void func_331(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_329(iParam0, 0))
	{
		return;
	}
	iVar0 = func_660(iParam0);
	if (bParam1)
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, iVar0);
	}
	else
	{
		PLAYER::_0xCDDD4B74660E2335(PLAYER::PLAYER_ID(), 0, iVar0);
	}
}

int func_332(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (iParam0 >= 0)
	{
		if (iParam0 <= 10)
		{
			iVar0 = 0;
		}
		else if (iParam0 <= 17)
		{
			iVar0 = 2;
		}
		else if (iParam0 <= 23)
		{
			iVar0 = 1;
		}
		else if (iParam0 <= 28)
		{
			iVar0 = 3;
		}
		else if (iParam0 <= 30)
		{
			iVar0 = 4;
		}
		else if (iParam0 <= 33)
		{
			iVar0 = 5;
		}
	}
	return iVar0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 38:
			return 1;
		case 0:
			return 5;
		case 6:
		case 42:
			return 3;
		case 9:
		case 10:
		case 37:
			return 4;
		case 1:
		case 2:
		case 36:
			return 2;
		case 41:
			return 2;
		case 40:
			return 1;
		case 13:
			return 2;
		case 14:
			return 3;
		case 16:
			return 2;
		case 11:
			return 6;
		case 17:
		case 39:
			return 5;
		case 18:
			return 1;
		case 19:
			return 1;
		case 20:
			return 1;
		case 21:
			return 4;
		case 27:
			return 2;
		case 33:
			return 2;
		case 43:
			return 4;
		default:
			break;
	}
	return 1;
}

bool func_334(int iParam0, bool bParam1)
{
	if (func_661(iParam0, bParam1))
	{
		return true;
	}
	if (Global_40.f_9632[iParam0 /*4*/].f_1 == 0)
	{
		return false;
	}
	if (!bParam1)
	{
		return Global_40.f_9632[iParam0 /*4*/].f_1 > 0;
	}
	if (func_662(iParam0))
	{
		return true;
	}
	return false;
}

void func_335(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;

	if (iParam3 < 0)
	{
		iVar3 = Global_1392135.f_26[iParam0];
	}
	else
	{
		iVar3 = iParam3;
	}
	if (iParam1 == 20 && Global_1392135.f_26[iParam0] == 0)
	{
		vVar0 = { 2492.525f, 1326.504f, 112.8341f };
	}
	else if (iParam1 == 43 && Global_1392135.f_26[iParam0] == 1)
	{
		vVar0 = { func_663(iParam1, iVar3) };
	}
	else
	{
		vVar0 = { func_663(iParam1, iVar3) };
	}
	StringIntConCat(sParam2, iParam1, 64);
	if (iParam3 >= 0)
	{
		bVar4 = true;
	}
	else
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_664(vVar0, 256);
		if (iParam1 == 20 && iVar3 == 0)
		{
			func_665(vVar0, 115f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else if (iParam1 == 43 && Global_1392135.f_26[iParam0] == 1)
		{
			func_665(vVar0, 130f, sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_665(vVar0, func_666(iParam1, iParam0, iVar3), sParam2, 1, 0, 256, 0, -1082130432 /* Float: -1f */);
		}
	}
}

void func_336(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;

	if (iParam2 < 0)
	{
		iVar3 = Global_1392135.f_33[iParam0];
	}
	else
	{
		iVar3 = iParam2;
	}
	vVar0 = { func_663(iParam1, iVar3) };
	if (func_667(vVar0, 0, 256, 0))
	{
		func_664(vVar0, 256);
	}
}

void func_337(int iParam0)
{
	int iVar0;

	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_72();
	func_73(&iVar0, func_66(iParam0), func_65(iParam0), func_64(iParam0), func_67(iParam0), 0, 0, 1);
	CLOCK::SET_CLOCK_TIME(func_64(iVar0), func_65(iVar0), func_66(iVar0));
	CLOCK::SET_CLOCK_DATE(func_67(iVar0), func_68(iVar0), func_69(iVar0));
	func_668(CLOCK::GET_CLOCK_HOURS());
}

void func_338(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (func_2() != -1)
	{
		return;
	}
	if (func_669(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_670())
	{
		iVar1 = 0;
	}
	func_671(iParam0, iVar1);
}

void func_339(int iParam0, bool bParam1)
{
	if (!func_672(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		Global_40.f_9479[iParam0 /*4*/].f_1 = -1;
		Global_40.f_9479[iParam0 /*4*/].f_2 = -1;
		Global_40.f_9479[iParam0 /*4*/].f_3 = -1;
	}
	Global_40.f_9479[iParam0 /*4*/] = -1;
}

void func_340(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_339(iVar0, bParam0);
		iVar0++;
	}
}

void func_341(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_672(iParam0))
	{
		return;
	}
	switch (Global_40.f_9479[iParam0 /*4*/])
	{
		case -1:
			if (func_673(0) > 0)
			{
				if (func_674(Global_40.f_9479[iParam0 /*4*/].f_1))
				{
					Global_40.f_9536[Global_40.f_9479[iParam0 /*4*/].f_1] = 1;
				}
				else
				{
					iVar0 = func_675();
					if (func_674(iVar0))
					{
						Global_40.f_9479[iParam0 /*4*/].f_1 = iVar0;
						Global_40.f_9536[iVar0] = 1;
					}
				}
				if (func_674(Global_40.f_9479[iParam0 /*4*/].f_2))
				{
					Global_40.f_9536[Global_40.f_9479[iParam0 /*4*/].f_2] = 1;
				}
				else
				{
					iVar1 = func_675();
					if (func_674(iVar1))
					{
						Global_40.f_9479[iParam0 /*4*/].f_2 = iVar1;
						Global_40.f_9536[iVar1] = 1;
					}
				}
			}
			if (func_83(42))
			{
				Global_40.f_9479[iParam0 /*4*/].f_3 = 14;
			}
			else
			{
				Global_40.f_9479[iParam0 /*4*/].f_3 = iParam0;
			}
			Global_40.f_9479[iParam0 /*4*/] = 0;
			break;
		case 0:
		case 1:
		case 2:
			break;
	}
}

void func_342(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] - (Global_20710.f_2246[iParam0] && iParam1));
	}
}

void func_343(int iParam0, int iParam1)
{
	if (!func_676(iParam0))
	{
	}
	else
	{
		Global_20710.f_2246[iParam0] = (Global_20710.f_2246[iParam0] || iParam1);
	}
}

void func_344(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_677(iVar0, iParam0) != bParam1)
		{
			func_678(iVar0, iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_345(int iParam0, int iParam1)
{
	if (!func_679(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] || iParam1);
}

void func_346(int iParam0, int iParam1)
{
	if (!func_679(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] = (Global_40.f_11029[iParam0 /*5*/] - (Global_40.f_11029[iParam0 /*5*/] && iParam1));
}

int func_347(bool bParam0)
{
	if (!bParam0 && func_641(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_348()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_680(iVar0);
		iVar0++;
	}
}

void func_349(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, true);
}

void func_350(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_NEW(iVar0, false);
}

void func_351(int iParam0, var uParam1)
{
	int iVar0;

	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

void func_352(int iParam0, var uParam1)
{
	int iVar0;

	return;
	if (iParam0 <= -1)
	{
		return;
	}
	iVar0 = func_681(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, false);
}

void func_353()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;
	int iVar17;

	if (INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	func_682(1);
	Var3.f_9 = -1591664384;
	if (func_383("ALL", &iVar0, &iVar1, -1591664384, 0))
	{
		INVENTORY::_0xE36D4A38D28D9CFB(1);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_384(&Var3, iVar2, iVar0, iVar1))
			{
			}
			else if (!func_286(Var3.f_4, 0))
			{
			}
			else if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(Var3.f_4))
			{
			}
			else if (func_297(Var3.f_4, 173360570) && Var3.f_9 != -1360128126)
			{
				func_603(Var3.f_4, Var3.f_11, 752097756);
				INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
			}
			else
			{
				iVar17 = func_552(Var3.f_4);
				switch (iVar17)
				{
					case joaat("PROVISION"):
					case joaat("PRECIOUS_METAL"):
					case joaat("GOLD"):
					case joaat("CONSUMABLE"):
						if ((((iVar17 == joaat("CONSUMABLE") && ((Var3.f_4 == joaat("CONSUMABLE_AGED_PIRATE_RUM") || Var3.f_4 == joaat("CONSUMABLE_GINSENG_ELIXIER")) || Var3.f_4 == joaat("CONSUMABLE_VALERIAN_ROOT"))) || (iVar17 == joaat("PROVISION") && func_683(Var3.f_4))) || func_624(Var3.f_4, -949239683) == -1337515701) || func_297(Var3.f_4, -651046900))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
						}
						if (Var3.f_9 != -1360128126)
						{
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("WEAPON_MOD"):
					case joaat("WEAPON"):
					case joaat("AMMO"):
					case joaat("WEAPON_DECORATION"):
						break;
					case joaat("CLOTHING"):
						if (Var3.f_4 == joaat("KIT_BANDANA"))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
							func_684(Var3.f_4, 1, 1, 0);
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("UPGRADE"):
						if (((Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE") || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER")) || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP")) || Var3.f_4 == joaat("UPGRADE_FSH_BAIT_SPINNER_FRESHWATER_LEG"))
						{
							func_603(Var3.f_4, Var3.f_11, 752097756);
							INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						}
						break;
					case joaat("HORSE_EQUIPMENT"):
						if (!func_685(Var3.f_4, 0))
						{
						}
						break;
					case joaat("HORSE"):
					case joaat("KIT"):
					case joaat("COMPONENT"):
					case joaat("DOCUMENT"):
						func_603(Var3.f_4, Var3.f_11, 752097756);
						INVENTORY::_0x3E4E811480B3AE79(1, &Var3, Var3.f_11, -142743235);
						break;
					default:
						break;
				}
			}
			iVar2++;
		}
		func_385(iVar0);
	}
	else
	{
		INVENTORY::_0xE36D4A38D28D9CFB(1);
	}
	func_687(func_686(1), 0, 0, 0, 1);
	func_688(1116, 0, 0f, 1, 0, 0, 1, 752097756);
	func_603(joaat("UPGRADE_UPG_COOKING_SPIT"), 1, 752097756);
	func_603(joaat("WEAPON_FISHINGROD"), 1, 752097756);
	func_603(joaat("WEAPON_KIT_CAMERA"), 1, 752097756);
	func_603(joaat("WEAPON_KIT_BINOCULARS"), 1, 752097756);
	func_603(joaat("WEAPON_MELEE_DAVY_LANTERN"), 1, 752097756);
	func_603(joaat("DOCUMENT_PLAYER_JOURNAL"), 1, 752097756);
	func_603(joaat("KIT_CAMP"), 1, 752097756);
	func_603(joaat("CONSUMABLE_APPLE"), 1, 752097756);
	func_603(joaat("CONSUMABLE_CHEWING_TOBACCO"), 1, 752097756);
	func_603(joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 752097756);
	func_603(joaat("CONSUMABLE_STRING_MEAT_COOKED"), 2, 752097756);
	func_603(joaat("PROVISION_MARYS_RING"), 1, 752097756);
	func_603(joaat("CONSUMABLE_BAKED_BEANS_CAN"), 1, 752097756);
	func_603(joaat("CONSUMABLE_CORNEDBEEF_CAN"), 1, 752097756);
	func_603(joaat("CONSUMABLE_SALMON_CAN"), 1, 752097756);
}

void func_354()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE")))
	{
		return;
	}
	func_689(1, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE"), true);
}

void func_355()
{
	int iVar0;

	iVar0 = MONEY::_MONEY_GET_CASH_BALANCE();
	Global_40.f_7861 = iVar0;
	if (iVar0 > 0)
	{
		MONEY::_MONEY_DECREMENT_CASH_BALANCE(iVar0);
	}
}

void func_356(int iParam0, int iParam1)
{
	if (!WEAPON::IS_WEAPON_VALID(iParam1))
	{
		return;
	}
	if (iParam1 == joaat("WEAPON_UNARMED"))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iParam1, true, -142743235);
	}
}

void func_357()
{
	int iVar0;
	struct<4> Var30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_690(Global_35, &iVar0);
	Var30 = { func_691(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_682(0);
	func_692(7);
	func_684(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_693() == 1160113249)
	{
		func_684(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_684(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_694(Global_35, &iVar0);
}

void func_358(bool bParam0, bool bParam1, bool bParam2)
{
	func_695(bParam0, bParam1, bParam2);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GUARMA_APPEARANCE_ACTIVE"), false);
}

void func_359()
{
	if (Global_40.f_7861 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(Global_40.f_7861, 752097756);
	}
}

void func_360(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		func_696(uParam0[iVar0 /*3*/]);
		MISC::_COPY_MEMORY(uParam0[iVar0 /*3*/], &(Global_40.f_7157[iVar0 /*3*/]), 3);
		if (bParam1)
		{
			func_697(iVar0, 1, 0);
		}
		iVar0++;
	}
}

void func_361(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 95)
	{
		if ((func_620(iVar0, 2) == 0 || func_620(iVar0, 4) == 0) || bParam1)
		{
			MISC::_COPY_MEMORY(&(Global_40.f_7157[iVar0 /*3*/]), uParam0[iVar0 /*3*/], 3);
		}
		iVar0++;
	}
}

int func_362(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_698(iParam1, 1, 0) };
		iParam3 = func_699(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_701(iParam1, iParam2, func_700(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_702(1, (func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[func_700(iParam3, 1) /*11*/])
			{
				func_325(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_703(32768) && iParam1 != Global_1946804.f_57[func_700(iParam3, 1) /*11*/])
			{
				func_704();
				func_325(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_325(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_705(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_325(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_706(0);
			func_707(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_325(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_658(iParam0, 16777216);
		func_364(iParam0, 1, 350);
		if (bParam2)
		{
			Global_1888801[iParam0 /*35*/].f_31 = 1;
		}
	}
	else
	{
		func_659(iParam0, 16777216);
		func_364(iParam0, 0, 350);
	}
}

void func_364(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_327(iParam0))
	{
		return;
	}
	if (func_708(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		iVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		iVar0 = func_709(iParam0);
	}
	bVar1 = func_710(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_711(iParam0);
		if (iParam2 > iVar2 || !func_71(func_712(iParam0)))
		{
			func_713(iParam0, func_72());
			func_714(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_658(iParam0, 33554432);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_659(iParam0, 33554432);
		func_713(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_715(iParam0);
}

bool func_365(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_366(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 2);
	}
	else
	{
		func_717(iParam0, 1);
		func_717(iParam0, 2);
	}
	func_718(iParam0, bParam1);
}

bool func_367(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_368(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_367(iParam0))
	{
		return;
	}
	func_719(iParam0, 8);
	if (bParam1)
	{
		if (bParam2)
		{
			func_720(iParam0, 8);
		}
		func_720(iParam0, 2);
		func_721(iParam0, 1);
	}
	else
	{
		func_719(iParam0, 2);
		func_721(iParam0, 0);
	}
}

void func_369(int iParam0)
{
	int iVar0;

	iVar0 = func_722(iParam0, 0);
	if (!func_386(iVar0))
	{
		return;
	}
	else if (func_387(iVar0))
	{
		return;
	}
	if (!func_388(iVar0, 0, 255, 0))
	{
		return;
	}
	if (iVar0 == 173210050)
	{
	}
}

void func_370(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_371(int iParam0)
{
	if (!func_723(iParam0))
	{
		return false;
	}
	return Global_32074.f_4[iParam0 /*4*/].f_3;
}

bool func_372(int iParam0)
{
	if (!func_723(iParam0))
	{
		return false;
	}
	return Global_1327590.f_23[iParam0 /*17*/];
}

void func_373(int iParam0, bool bParam1)
{
	if (!func_723(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	Global_32074.f_4[iParam0 /*4*/].f_3 = bParam1;
}

void func_374()
{
	func_724();
	if (!func_725())
	{
		func_726(&Global_0);
		return;
	}
	if (func_2() == -1)
	{
		if ((IntToFloat((MISC::GET_GAME_TIMER() - Global_0.f_6)) + (func_727(Global_36, Global_0.f_3) * 1000f)) > 300000f)
		{
			if (!func_728() && !func_5(&Global_0, 3))
			{
				func_510(0, -1);
			}
		}
		if (func_5(&Global_0, 1024))
		{
			func_729(0, 0);
			Global_0.f_6 = MISC::GET_GAME_TIMER();
			Global_0.f_3 = { Global_36 };
			func_730(&Global_0, 1024);
		}
	}
	if (func_5(&Global_0, 3))
	{
		func_731();
	}
	else if (func_5(&Global_0, 8))
	{
		func_732();
	}
}

bool func_375(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_18(iParam0))
	{
		return true;
	}
	if (!func_413(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return true;
		}
		func_82(iParam0, 0);
	}
	if (bParam2)
	{
		if (!func_460(Global_1347702[iParam0 /*49*/].f_13, 1024))
		{
			func_733(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
		}
	}
	if (bParam4 && !func_460(Global_1347702[iParam0 /*49*/].f_13, 8192))
	{
		func_733(&(Global_1347702[iParam0 /*49*/].f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		if (func_460(Global_1347702[iParam0 /*49*/].f_13, 64))
		{
			return true;
		}
		return false;
	}
	if (!func_466(iParam0))
	{
		func_240(Global_1347702[iParam0 /*49*/].f_15);
	}
	else if (bParam3 && !func_734(Global_1347702[iParam0 /*49*/].f_15))
	{
		func_243(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (!func_460(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		func_733(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	return false;
}

bool func_376(int iParam0)
{
	int iVar0;

	if (!func_18(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case 987244216:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_377(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_378(int iParam0)
{
	if (!func_377(iParam0))
	{
		return;
	}
	if (!func_735(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 1;
}

void func_379(int iParam0)
{
	if (!func_377(iParam0))
	{
		return;
	}
	if (!func_735(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_4 = 0;
}

int func_380(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_736(iParam0))
	{
		return 0;
	}
	if (!func_70())
	{
		return 0;
	}
	if (!func_737(iParam0, &iVar0, &iVar1))
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

bool func_381(int iParam0)
{
	return (Global_40.f_9052.f_21 && iParam0) != 0;
}

bool func_382(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = *uParam1;
	if (iVar1 <= 0 || iVar1 < 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		(*uParam1)[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 1:
		default:
			return false;
			(*uParam1)[0] = joaat("COACH_BUGGY01");
			(*uParam1)[1] = joaat("COACH_BUGGY02");
			(*uParam1)[2] = joaat("COACH_BUGGY03");
		case 2:
			(*uParam1)[0] = joaat("COACH_CART01");
			(*uParam1)[1] = joaat("COACH_CART03");
			(*uParam1)[2] = joaat("COACH_CART04");
			(*uParam1)[3] = joaat("COACH_CART05");
			(*uParam1)[4] = joaat("COACH_CART06");
			(*uParam1)[5] = joaat("COACH_CART07");
			(*uParam1)[6] = joaat("COACH_CART08");
			break;
		case 3:
			(*uParam1)[0] = joaat("COACH_CHUCKWAGON001X");
			(*uParam1)[1] = joaat("COACH_CHUCKWAGON002X");
			(*uParam1)[2] = joaat("COACH_WAGON02");
			(*uParam1)[3] = joaat("COACH_WAGON03");
			(*uParam1)[4] = joaat("COACH_WAGON04");
			(*uParam1)[5] = joaat("COACH_WAGON05");
			(*uParam1)[6] = joaat("COACH_WAGON06");
			(*uParam1)[7] = joaat("COACH_UTILITYWAGON");
			break;
		case 4:
			(*uParam1)[0] = joaat("COACH_STAGECOACH001X");
			(*uParam1)[1] = joaat("COACH_STAGECOACH002X");
			(*uParam1)[2] = joaat("COACH_STAGECOACH003X");
			(*uParam1)[3] = joaat("COACH_STAGECOACH004X");
			(*uParam1)[4] = joaat("COACH_STAGECOACH005X");
			(*uParam1)[5] = joaat("COACH_STAGECOACH006X");
			(*uParam1)[6] = joaat("COACH_COACH003");
			(*uParam1)[7] = joaat("COACH_COACH004");
			(*uParam1)[8] = joaat("COACH_COACH005");
			(*uParam1)[9] = joaat("COACH_COACH006");
			break;
		case 5:
			(*uParam1)[0] = joaat("COACH_SUPPLYWAGON");
			(*uParam1)[1] = -714135711;
			(*uParam1)[2] = -1012628532;
			(*uParam1)[3] = joaat("COACH_LOGWAGON");
			(*uParam1)[4] = joaat("COACH_COALWAGON");
			break;
		case 6:
			(*uParam1)[0] = -714135711;
			(*uParam1)[1] = -1012628532;
			break;
		case 7:
			(*uParam1)[0] = joaat("COACH_LOGWAGON");
			break;
		case 8:
			(*uParam1)[0] = joaat("COACH_COALWAGON");
			break;
		case 9:
			(*uParam1)[0] = joaat("COACH_ARMOREDWAGON");
			break;
		case 10:
			(*uParam1)[0] = 0;
			break;
	}
	return true;
}

bool func_383(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_738(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_384(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_385(int iParam0)
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

bool func_386(int iParam0)
{
	return iParam0 != 0;
}

bool func_387(int iParam0)
{
	int iVar0;

	if (!func_386(iParam0))
	{
		return false;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1224424)
	{
		if (Global_1224424.f_1[iVar0 /*22*/].f_4 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;

	return func_739(iParam0, &uVar0, iParam1, iParam2, iParam3);
}

bool func_389(int iParam0)
{
	if (Global_1225382.f_1 >= 3)
	{
		return true;
	}
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam0 == 255)
	{
		return true;
	}
	if (func_740(29, iParam0))
	{
		return true;
	}
	if (func_741(iParam0))
	{
		return true;
	}
	return false;
}

bool func_390(int iParam0)
{
	int iVar0;

	iVar0 = func_742(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_743(&(Global_1132155.f_12.f_3719.f_772[iVar0 /*4*/]), 1);
}

void func_391(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam1 /*4*/], 1))
	{
		MISC::CLEAR_BIT(&(Global_1879534.f_7301.f_2[iParam1 /*4*/]), 1);
		bVar0 = true;
	}
	if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iParam0 /*4*/], 1))
	{
		MISC::SET_BIT(&(Global_1879534.f_7301.f_2[iParam0 /*4*/]), 1);
		bVar0 = true;
	}
	if (bVar0)
	{
	}
}

bool func_392()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (NETWORK::NETWORK_SESSION_IS_ANY_REQUEST_IN_PROGRESS())
	{
		return false;
	}
	if (!func_744())
	{
		return false;
	}
	if (!func_745())
	{
		return false;
	}
	if (!func_746())
	{
		return false;
	}
	if (func_747())
	{
		return false;
	}
	return true;
}

int func_393(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1887078.f_1696[iVar0 /*2*/] != -1)
		{
		}
		else
		{
			Global_1887078.f_1719++;
			Global_1887078.f_1696[iVar0 /*2*/] = Global_1887078.f_1719;
			Global_1887078.f_1696[iVar0 /*2*/].f_1 = uParam0;
			iVar1 = Global_1887078.f_1719;
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

void func_394(int iParam0)
{
	Global_1887078.f_1718 = iParam0;
}

bool func_395(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1887078.f_1707[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = (Global_40.f_450 - 1);
	while (iVar1 >= 0)
	{
		iVar2 = Global_40.f_450[iVar1];
		if (func_18(iVar2))
		{
			if (func_19(Global_1347702[iVar2 /*49*/].f_12, 2097152))
			{
				func_247(iVar2, 1, 1, 1, 32);
				func_248(iVar2, 1, 1);
				if (func_748(iVar2, 4))
				{
					func_749(iVar2, 1);
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	func_299(joaat("DOCUMENT_COACH_ROBBERY_NOTE_05"), 1, 1, -142743235, 0);
	func_299(joaat("DOCUMENT_COACH_ROBBERY_NOTE_06"), 1, 1, -142743235, 0);
	func_299(joaat("DOCUMENT_BOUNTY_POSTER_RTL"), 1, 1, -142743235, 0);
	func_750(67);
	if (!func_751(57))
	{
		if (func_226(Global_1347702[102 /*49*/].f_15, 1))
		{
			if (!func_226(Global_1347702[103 /*49*/].f_15, 1))
			{
				func_82(104, 0);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (!func_751(22))
		{
			func_750(22);
			func_299(joaat("DOCUMENT_BOUNTY_POSTER_CHAIN_GANG"), 5, 1, -142743235, 0);
			func_82(30, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(Global_1347702[28 /*49*/].f_15, 1))
		{
			if (!func_226(Global_1347702[29 /*49*/].f_15, 1))
			{
				func_752(29);
				func_752(28);
				func_299(joaat("DOCUMENT_CALLOWAY_NOTE"), 1, 1, -142743235, 0);
				func_82(28, 0);
				if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(27), func_754(27)))
				{
					func_755(27);
				}
				func_478(27);
			}
		}
		else if (!func_226(Global_1347702[85 /*49*/].f_15, 1) && func_226(Global_1347702[84 /*49*/].f_15, 1))
		{
			func_752(85);
			func_752(84);
			func_82(84, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (!func_751(50))
		{
			bVar3 = false;
			if (func_83(89))
			{
				bVar3 = true;
			}
			func_750(50);
			func_82(89, 0);
			if (bVar3)
			{
				func_756(Global_1347702[89 /*49*/].f_15, 1);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(Global_1347702[124 /*49*/].f_15, 1))
		{
			if (!func_226(Global_1347702[125 /*49*/].f_15, 1))
			{
				func_752(125);
				func_752(124);
				func_82(124, 0);
				func_299(joaat("PROVISION_POLLUTION_EVIDENCE"), 1, 1, -142743235, 0);
				if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(123), func_754(123)))
				{
					func_755(123);
				}
				func_478(123);
			}
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_226(Global_1347702[143 /*49*/].f_15, 1) && !func_226(Global_1347702[144 /*49*/].f_15, 1))
		{
			func_752(144);
			func_752(143);
			func_82(143, 0);
		}
	}
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (func_81())
		{
			if (func_226(Global_1347702[151 /*49*/].f_15, 1) && !func_226(Global_1347702[152 /*49*/].f_15, 1))
			{
				func_752(152);
				func_752(151);
				func_82(151, 0);
			}
		}
	}
}

int func_397(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_757(iParam0);
}

int func_398(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -15;
	}
	return func_758(iParam0);
}

bool func_399(int iParam0)
{
	return Global_1899515 > iParam0;
}

void func_400(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_324 = iParam0;
	Var0 = { func_759(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_401(int iParam0, bool bParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_324 + iParam0) < 0)
	{
		return;
	}
	func_400((Global_40.f_4283.f_324 + iParam0));
	if (bParam1)
	{
		func_380(9, iParam0);
	}
}

void func_402(int iParam0)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_324 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_400(iVar0);
}

void func_403(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_759(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_404(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_403((Global_40.f_4283.f_325 + iParam0));
}

void func_405(int iParam0)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = (Global_40.f_4283.f_325 - iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	func_403(iVar0);
}

bool func_406(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_407(int iParam0)
{
	bool bVar0;

	if (!func_406(iParam0))
	{
		return 0;
	}
	if (!func_760(func_266(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_761(iParam0)))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_0x31C70A716CAE1FEE(func_761(iParam0))))
		{
			return 1;
		}
	}
	bVar0 = PERSCHAR::_0x31C70A716CAE1FEE(func_761(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
	}
	PERSCHAR::_0x7B204F88F6C3D287(func_761(iParam0));
	return 1;
}

int func_408(int iParam0)
{
	if (!func_406(iParam0))
	{
		return 0;
	}
	if (!func_760(func_266(iParam0)))
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_761(iParam0)))
	{
		return 0;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_761(iParam0));
	return 1;
}

void func_409(int iParam0, int iParam1)
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

void func_410(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_68(*iParam0);
	iVar1 = func_69(*iParam0);
	if (iParam1 < 1 || iParam1 > func_223(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_412(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_762(iParam0);
}

bool func_413(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_2() != -1)
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

void func_414(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_250(Global_1347702[iParam0 /*49*/].f_29[iVar1]))
			{
				func_764(&iVar0, func_763(Global_1347702[iParam0 /*49*/].f_29[iVar1]));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_733(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
		else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
		{
			if (func_236(iVar0, Global_1347702[iParam0 /*49*/].f_15, 1, Global_1347702[iParam0 /*49*/].f_27, func_86()))
			{
				func_733(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			}
		}
		else
		{
			func_733(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
	}
}

bool func_415(int iParam0)
{
	return func_412(iParam0) == 0;
}

bool func_416(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_765(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1225639.f_10)
		{
			if (!Global_1225639.f_11)
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

bool func_417(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_418()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_419(int iParam0)
{
	if (func_2() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_226(Global_1347702[21 /*49*/].f_15, 1);
		case 44:
			return func_226(Global_1347702[83 /*49*/].f_15, 1);
	}
	return true;
}

bool func_420(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_422(iParam0))
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

bool func_421(var uParam0, int iParam1)
{
	return (uParam0->f_63 && iParam1) != 0;
}

bool func_422(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_766(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_423(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

Vector3 func_424(int iParam0)
{
	if (func_422(iParam0))
	{
		return func_423(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

Vector3 func_425(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 7.5f, 8f, 5f;
		default:
			break;
	}
	return 5f, 5f, 5f;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_427(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 39:
			return 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 8:
			return 891.27f, 1279.39f, 234.14f;
		case 27:
			return 2604.742f, -1212.295f, 52.3389f;
		case 29:
			return 2715.245f, -1356.552f, Global_1835011[iParam0 /*74*/].f_18.f_2;
		case 41:
			return 1332.632f, -7248.313f, 55.5522f;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_428(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45f;
		case 8:
			return 54f;
		case 27:
			return 35f;
		case 41:
			return 50f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25f;
}

void func_429(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

void func_430(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 - (Global_1898346[iParam0 /*6*/].f_1 && iParam1));
}

void func_431(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_432(int iParam0)
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

bool func_433(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_434(int iParam0)
{
	if (!func_767(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_768(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_769(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_769(iParam0), false) <= func_770();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_770();
	}
	return func_771();
}

bool func_435(int iParam0, bool bParam1, int iParam2)
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

void func_436(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_20(iParam0))
	{
		return;
	}
	switch (func_772(iParam0))
	{
		case 1:
			iVar0 = func_17(iParam0);
			if (func_773(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_420(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = 1986697381;
				}
				else
				{
					iVar2 = -592708248;
				}
			}
			else if ((func_420(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
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
				if (!func_230(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, -1986290853);
				}
				if (func_421(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, 724623647);
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_17(iParam0);
			if (func_774(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_775(iVar1))
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
				iVar2 = func_775(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_0xBD62D98799A3DAF0(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_776(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_438(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_439(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

float func_440(int iParam0)
{
	return (func_428(iParam0) / 2f);
}

var func_441(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = cParam0;
	uVar15 = UIFEED::_SHOW_TOOLTIP(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_442(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_443(iVar0, &iParam0))
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

bool func_443(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_250(iParam0))
	{
		return false;
	}
	iVar0 = func_763(iParam0);
	return (*iParam1 && iVar0) != 0;
}

void func_444(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_250(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] = (Global_40.f_4942[iParam0 /*60*/] - (Global_40.f_4942[iParam0 /*60*/] && iParam1));
}

int func_445(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

int func_446(int iParam0)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_447(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return false;
		}
	}
	func_777(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

float func_448(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_449(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_450(int iParam0, bool bParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	if (!func_415(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_778(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_778(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_772(iParam0), func_17(iParam0), func_779(iParam0), func_778(iParam0), Global_36);
		}
	}
	func_780(iParam0, 1);
	bParam1 = bParam1;
}

void func_451(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_56(Global_1898330[iParam0]);
		func_781(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

void func_452(int iParam0)
{
	if (!func_20(iParam0))
	{
		return;
	}
	if (!func_782(iParam0))
	{
		return;
	}
	func_780(iParam0, 2);
}

void func_453(int iParam0)
{
	func_783(1);
}

bool func_454(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_63 & 64512 != 0;
}

bool func_455(int iParam0, int iParam1)
{
	return (func_241(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

bool func_456(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_467(Global_1835011[iParam0 /*74*/].f_1);
}

void func_457(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	if (func_782(iParam0))
	{
		func_468(iParam0, 0, 2);
	}
	iVar0 = func_449(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

bool func_458(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_782(Global_1835011[iParam0 /*74*/].f_1);
}

void func_459(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		func_784(Global_1347702[iParam0 /*49*/].f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::_0xD17672447692478E(Global_1347702[iParam0 /*49*/].f_41, 0);
		}
		VOLUME::_DELETE_VOLUME(Global_1347702[iParam0 /*49*/].f_41);
	}
}

bool func_460(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_461(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_462(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_463(int iParam0, bool bParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		func_785(&(Global_1347702[iParam0 /*49*/].f_14));
		func_461(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		func_786(iParam0);
		if ((!func_787(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_0x2F901291EF177B02(Global_1347702[iParam0 /*49*/].f_40, 0);
			func_461(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
			func_788(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			func_789(iParam0, 16384);
			func_791(iParam0, 1, func_790(iParam0));
		}
	}
}

void func_464(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_792(iParam0, &iVar1, &iVar0))
	{
		if (func_793(iVar1, iVar0, 1))
		{
			func_274(iVar1, iVar0);
		}
	}
}

void func_465(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			func_461(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			VOLUME::_0x748C5F51A18CB8F0(0);
			func_247(iParam0, 1, 1, iParam1, 32);
			VOLUME::_0x748C5F51A18CB8F0(1);
			iVar1 = (Global_40.f_1094 - 1);
			if (iVar0 < iVar1)
			{
				if (func_18(Global_40.f_450[iVar1]))
				{
					Global_40.f_450[iVar0] = Global_40.f_450[iVar1];
					Global_40.f_450[iVar1] = -1;
				}
			}
			else
			{
				Global_40.f_450[iVar0] = -1;
			}
			Global_40.f_1094 = (Global_40.f_1094 - 1);
			return;
		}
		iVar0++;
	}
}

bool func_466(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_18(iParam0))
	{
		return false;
	}
	return func_782(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_467(int iParam0)
{
	int iVar0;

	iVar0 = func_412(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_468(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_20(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_467(iParam0) && !func_782(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_778(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_467(iParam0))
	{
		iParam2 = -1;
	}
	if (func_762(iParam0) == 3 || (func_762(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_778(iParam0))))
	{
		func_794(func_772(iParam0), func_778(iParam0), iParam2);
		if ((!func_20(Global_1572864.f_8) && !func_14(0, 1, 0)) && !func_88(Global_1935630, 32768))
		{
			iVar0 = func_795(iParam0);
			if (iVar0 != -1)
			{
				func_796(0);
			}
			else if (func_772(iParam0) == 8)
			{
				iVar0 = func_797();
				if (iVar0 != -1)
				{
					func_796(0);
				}
			}
		}
	}
	func_780(iParam0, 0);
	if (func_798(0) == iParam0)
	{
		func_799(1);
		func_347(0);
		func_244(1);
	}
	func_800(iParam0, 1);
	func_801(iParam0);
}

bool func_469()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_470(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_471(int iParam0)
{
	func_473();
	if (!func_18(iParam0))
	{
		return;
	}
	Global_40.f_1093 = Global_1347702[iParam0 /*49*/];
}

bool func_472(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[iParam0 /*49*/].f_43))
	{
		return false;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_43))
	{
		return false;
	}
	else if (Global_1347702[iParam0 /*49*/].f_28 != Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/].f_28)
	{
		return false;
	}
	else if (Global_1347702[iParam0 /*49*/] != Global_1347702[Global_1347702[iParam0 /*49*/].f_35 /*49*/])
	{
		return false;
	}
	else if (!func_802(iParam0))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_1347702[iParam0 /*49*/].f_43, false, false), func_790(Global_1347702[iParam0 /*49*/].f_35));
	if (fVar0 > (7.5f * 7.5f))
	{
		return false;
	}
	return true;
}

void func_473()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_40.f_1093;
	Global_40.f_1093 = -1;
	if (func_803(iVar0))
	{
		iVar1 = 0;
		while (iVar1 < Global_1347702)
		{
			if (func_18(iVar1) && Global_1347702[iVar1 /*49*/] == iVar0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iVar1 /*49*/].f_37))
				{
					func_463(iVar1, 0);
					func_804(iVar1, func_790(iVar1), 0, 0);
				}
			}
			iVar1++;
		}
	}
}

void func_474(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_19(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		iVar0 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar1 = joaat("HUD_TOASTS");
	}
	else
	{
		iVar2 = func_805(iParam0, 1);
		iVar0 = iVar2;
		iVar1 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_19(Global_1347702[iParam0 /*49*/].f_12, 67108864))
	{
		func_806("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, func_754(iParam0));
		func_807("MISSION_COMPLETE", &(Global_1347702[iParam0 /*49*/].f_3), iVar1, iVar0, joaat("PLAYER_MENU"), "MISSION_COMPLETE_DETAILS", joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 1, 1, 1);
	}
}

char[] func_475(int iParam0)
{
	char[] cVar0[8];

	if (!func_20(iParam0))
	{
		return cVar0;
	}
	switch (func_772(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_808(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_17(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_476(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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

	if (!func_20(iParam0))
	{
		return;
	}
	if (func_412(iParam0) == 4)
	{
		func_810(iParam0, func_72());
		if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
		{
			if (bParam3)
			{
				func_780(iParam0, 6);
			}
			else
			{
				func_780(iParam0, 5);
			}
			func_801(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_799(1);
	}
	iVar0 = func_772(iParam0);
	bVar1 = func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_811(0, 2);
		if (!bVar1 && bParam1)
		{
			func_812();
		}
	}
	else
	{
		func_347(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_813(iParam0);
	}
	else
	{
		Var2 = { func_759(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!func_6(32768))
		{
			Var4 = { func_759(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && func_762(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_17(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_17(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((func_17(iParam0) != 95 && func_17(iParam0) != 82) && !func_19(Global_1347702[func_17(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[func_17(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[func_17(iParam0) /*74*/].f_8), true);
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
		func_815(func_17(iParam0), iVar6, func_814());
	}
	else if (iVar0 == 8)
	{
		func_816(func_17(iParam0), iVar6, func_814(), func_469());
	}
	if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
	{
		iVar9 = func_817(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_272(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_818(func_17(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_820(1);
				func_821(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				func_821(45, 0, 1);
				break;
			case 8:
				iVar10 = func_822(func_17(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_819((iVar10 - 20), 0, iVar10);
					iVar11 = func_819((iVar11 - 10), 0, iVar11);
				}
				func_821(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_823(func_17(iParam0)))
				{
					func_824(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				func_821(120, 0, 1);
				break;
			case 2:
				func_821(120, 0, 1);
				break;
			case 6:
				func_821(func_825(func_779(iParam0)), 0, 1);
				break;
			case 5:
				func_821(120, 0, 1);
				break;
		}
	}
	func_800(iParam0, 1);
	func_810(iParam0, func_72());
	func_801(iParam0);
	if ((!func_762(iParam0) == 0 && bParam1) && func_2() == -1)
	{
		iVar12 = func_795(iParam0);
		if (iVar12 != -1)
		{
			func_796(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_797();
			if (iVar12 != -1)
			{
				func_796(0);
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
				switch (func_17(iParam0))
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
				if (func_18(func_17(iParam0)) && func_19(Global_1347702[func_17(iParam0) /*49*/].f_12, 4))
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
				if (func_17(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_728();
				}
				break;
			case 8:
				if (func_17(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = func_728();
				}
				break;
		}
	}
	if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
	{
		if (bParam3)
		{
			func_780(iParam0, 6);
		}
		else
		{
			func_780(iParam0, 5);
		}
		func_801(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_17(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						func_826();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_290(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_290(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_290(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_290(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_290(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_290(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_290(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_290(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_290(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_290(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_290(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_290(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_298(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_290(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_827();
						func_828(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						func_829();
						func_830();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_831(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_290(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							func_293(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							func_293(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_832(304805134, 1, 1);
						if (!func_226(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_476(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_833();
						break;
					case 26:
						func_834();
						break;
					case 17:
						func_835(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (func_81())
						{
							func_288(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_836(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = func_72();
							func_73(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_837(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_81())
						{
							func_288(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (func_81())
						{
							func_288(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_838();
						break;
					case 37:
						func_839();
						if (func_840())
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
						func_841();
						break;
					case 43:
						func_842();
						break;
					case 44:
						if (!func_226(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_476(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
						if (!func_226(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_476(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_843();
						break;
					case 59:
						func_844();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_845();
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
						func_846();
						if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							func_293(451, 0);
						}
						if (!func_847(joaat("TAXIDERMY_ORDER_05")))
						{
							if (func_847(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = func_72();
								func_73(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_837(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (func_848(4))
						{
							if (!func_581(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = func_72();
								func_73(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_837(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_290(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_290(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_849(89200);
						func_849(2300);
						func_849(2300);
						break;
					case 68:
						func_850();
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
						func_851();
						func_849(-139100);
						break;
					case 69:
						if (func_226(Global_1347702[9 /*49*/].f_15, 1))
						{
							func_849(-6000);
						}
						break;
					case 70:
						func_849(23400);
						func_849(1900);
						func_849(-15000);
						break;
					case 71:
						func_849(-5500);
						break;
				}
				break;
			case 8:
				switch (func_17(iParam0))
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
						func_852();
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
						func_853();
						break;
					case 66:
						func_854();
						func_855();
						break;
					case 67:
						if (!func_856(6))
						{
							func_256(6);
						}
						if (!func_856(3))
						{
							func_256(3);
						}
						if (func_81())
						{
							func_288(joaat("WEAPON_PISTOL_M1899"));
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
						if (func_226(Global_1835011[69 /*74*/].f_1, 1))
						{
							func_857(0);
							func_849(40500);
						}
						else
						{
							func_857(0);
							func_849(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_17(iParam0))
				{
					case 0:
						switch (func_779(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		func_858(iParam0);
		func_859();
		switch (iVar0)
		{
			case 1:
				switch (func_17(iParam0))
				{
					case 4:
						func_860(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_860(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_860(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_860(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_860(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_860(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_860(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_397(iParam0);
						func_860(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_860(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_860(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_581(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_290(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_860(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_860(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_860(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (func_397(iParam0) == 0)
						{
							func_860(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_860(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_19(Global_1347702[func_17(iParam0) /*49*/].f_12, 536870912))
				{
					func_380(11, 1);
				}
				switch (func_17(iParam0))
				{
					case 109:
						func_860(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						func_380(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_860(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_860(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_860(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_860(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
				{
					func_860(iParam0, func_397(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 7, 11, joaat("CACR02")))
				{
					func_860(iParam0, func_861(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 8, 11, joaat("CACR03")))
				{
					func_860(iParam0, func_861(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 11, 11, joaat("CACR01")))
				{
					func_860(iParam0, func_861(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_809(0, 12, 11, joaat("CACR04")))
				{
					func_860(iParam0, func_861(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_762(iParam0) == 0)
			{
				if (func_778(iParam0) == 0)
				{
				}
				else if (STATS::STATSTRACKER_IS_INITIALIZED(func_778(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_794(func_772(iParam0), func_778(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_17(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						func_862(func_475(Global_1879514.f_1));
						if (iVar0 == 8 && func_17(iParam0) == 58)
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
						if (func_18(func_17(iParam0)) && func_19(Global_1347702[func_17(iParam0) /*49*/].f_12, 1))
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
			func_510(bParam2, iVar20);
		}
	}
	func_244(1);
	if ((bVar13 || func_728()) && (func_772(iParam0) == 1 || func_772(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_477(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (STATS::STATSTRACKER_IS_INITIALIZED(func_778(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_794(func_772(iParam0), func_778(iParam0), iVar0);
		if (func_6(32768))
		{
			iVar1 = func_772(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_809(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = func_863();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (func_782(iParam0))
	{
		func_468(iParam0, 0, 2);
	}
	else if (func_467(iParam0))
	{
		if (!func_762(iParam0) == 5 && !func_762(iParam0) == 6)
		{
			if (bParam1)
			{
				func_780(iParam0, 6);
			}
			else
			{
				func_780(iParam0, 5);
			}
			func_801(iParam0);
		}
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (func_17(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_17(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

void func_478(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	bool bVar5;
	bool bVar6;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_753(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_754(iParam0));
		}
		func_864(iParam0, 4);
		func_864(iParam0, 8);
		return;
	}
	else if (func_19(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		func_865(Global_1347702[iParam0 /*49*/]);
		func_755(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
			func_867(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_754(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_864(iParam0, 4);
		func_864(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_748(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_748(iParam0, 16))
	{
		bVar6 = true;
	}
	func_865(Global_1347702[iParam0 /*49*/]);
	func_755(iParam0);
	MemCopy(&cVar1, {Global_1347702[iParam0 /*49*/].f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (func_748(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (func_748(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
		func_867(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		if (func_748(iParam0, 16) || bVar6)
		{
			func_868(iParam0, 1);
		}
		if (func_748(iParam0, 8) || bVar5)
		{
			func_869(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_866(0, &cVar1, 0, 0, -1, -1);
		func_867(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		func_869(iParam0, 1);
		if (func_748(iParam0, 16) || bVar6)
		{
			func_868(iParam0, 1);
		}
	}
}

bool func_479(int iParam0)
{
	return iParam0 > -1;
}

void func_480(int iParam0)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_497(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

void func_481(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_250(iParam0) && MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		func_258(iParam0, bParam1, bParam2, bParam3, 0);
	}
}

bool func_482(int iParam0)
{
	return func_870(iParam0, 16, 1);
}

bool func_483(int iParam0)
{
	if (!func_250(iParam0))
	{
		return false;
	}
	if (!func_482(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

int func_484(int iParam0, bool bParam1)
{
	if (!func_250(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_480(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

float func_485(int iParam0)
{
	if (!func_479(iParam0))
	{
		return 0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return;
		}
	}
	func_777(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_487(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = func_446(iParam0);
	iVar1 = func_484(iParam0, 0);
	func_871(iParam0, bVar0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
		{
			PED::_0xF008E0BA1FE1D644(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
		}
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		if (bVar2)
		{
			PED::_0x7D4E70A67A651C71(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_488(int iParam0)
{
	return iParam0 != 0;
}

bool func_489(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	*bParam3 = 0;
	*iParam2 = 0;
	if (func_872(iParam0, iParam1))
	{
		*bParam3 = 1;
	}
	if (func_873(iParam0, iParam1, iParam2))
	{
		return true;
	}
	*iParam2 = -1;
	return *bParam3;
}

void func_490(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_446(iParam0);
	if ((func_874(iVar0, 0) && func_875(iParam0, *uParam1)) && PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_876(iParam0, *uParam1);
	}
	if ((!func_874(iVar0, 0) || !func_875(iParam0, *uParam1)) || !PED::_0x7C8AA850617651D9(iVar0, *uParam1))
	{
		func_877(uParam1);
	}
}

void func_491(int iParam0, int iParam1)
{
	int iVar0;

	func_490(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]));
	if (func_488(Global_40.f_4942[iParam0 /*60*/].f_11[iParam1 /*3*/]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < iParam1)
		{
		}
		else if (iVar0 < 9 && func_488(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]))
		{
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/] = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/];
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_1 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_1;
			Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 /*3*/].f_2 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/].f_2;
			func_879(iParam0, iVar0, func_878(iParam0, iVar0 + 1));
			func_877(&(Global_40.f_4942[iParam0 /*60*/].f_11[iVar0 + 1 /*3*/]));
			func_879(iParam0, iVar0 + 1, 0);
		}
		iVar0++;
	}
}

void func_492(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = Global_40.f_4942[iParam0 /*60*/].f_11[iVar1 /*3*/];
		if (func_488(iVar0))
		{
			func_490(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_11[iVar1 /*3*/]));
		}
		iVar1++;
	}
	iVar0 = Global_40.f_4942[iParam0 /*60*/].f_8;
	if (func_488(iVar0))
	{
		func_490(iParam0, &(Global_40.f_4942[iParam0 /*60*/].f_8));
	}
}

void func_493()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_488(Global_40.f_4237[iVar0 /*3*/]))
		{
			func_880(&(Global_40.f_4237[iVar0 /*3*/]));
		}
		iVar0++;
	}
}

int func_494(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_881(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_494(iParam0, 1);
		iVar1 = PERSCHAR::_0xA00DF706C60173D1(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

int func_496(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_479(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_226(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_226(Global_1347702[63 /*49*/].f_15, 1) || func_467(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_882(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_226(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_870(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_226(Global_1347702[134 /*49*/].f_15, 1) || func_467(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3468; //curOff = 2293
			switch (iParam0)
			{
				case 2:
					if (func_226(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			Jump @3468; //curOff = 2367
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_882(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			Jump @3468; //curOff = 3140
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = -426171916;
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_883(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_226(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			Jump @3468; //curOff = 3303
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_446(iParam0)))
			{
				iVar10 = 0;
				while (iVar10 < iVar7)
				{
					if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
					{
						bVar9 = true;
						iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
					}
					iVar10++;
				}
			}
			if (!bVar9)
			{
				iVar11 = 0;
				if (iVar7 > 0 && bParam2)
				{
					iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
				}
				iVar8 = iVar1[iVar11];
			}
			if (!func_643(iParam0, iVar8))
			{
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			return iVar8;
		}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

int func_498(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_495(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_499(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_519(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_521(2, *uParam0);
		}
		else
		{
			func_522(2, *uParam0);
		}
	}
	func_884(uParam0);
}

void func_500()
{
	Global_1357549 = 0;
	func_885(1);
}

int func_501(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CSTAG_COL_BASE");
		case 1:
			return joaat("CSTAG_HSO_BASE");
		case 2:
			return joaat("CSTAG_CLM_BASE");
		case 3:
			return joaat("CSTAG_SDB_BASE");
		case 4:
			return joaat("CSTAG_GUA_BASE");
		case 5:
			return joaat("CSTAG_LAK_BASE");
		case 6:
			return joaat("CSTAG_BVH_BASE");
		case 7:
			return joaat("CSTAG_PRG_BASE");
		case 8:
			return joaat("CSTAG_BCH_BASE");
		default:
			break;
	}
	return 176656832;
}

void func_503()
{
	func_505(1591451572);
	func_505(-349064220);
	func_505(1776302352);
	func_505(-523522517);
}

void func_504(char* sParam0)
{
	if (PATHFIND::_0x5AC0944C156E5F44(sParam0))
	{
		PATHFIND::_0x527B97C203BB8606(sParam0);
	}
}

void func_505(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_886(iParam0, 1);
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

void func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_886(iParam0, 1);
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

void func_507(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_2() == 0)
	{
		return;
	}
	if (func_6(128))
	{
		return;
	}
	if (!func_887(iParam0))
	{
		return;
	}
	if (func_710(iParam0, 32))
	{
		return;
	}
	func_658(iParam0, 32);
	func_888(&Global_1935630, 8192);
	func_567(func_568(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_889(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_567(func_568(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_567(func_568(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_567(func_568(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_567(func_568(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_567(func_568(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_567(func_568(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_0xD8C7162AB2E2AF45(1822876181);
			break;
		case 1:
			MAP::_0xD8C7162AB2E2AF45(1092217275);
			break;
		case 2:
			MAP::_0xD8C7162AB2E2AF45(1855549007);
			MAP::_0xD8C7162AB2E2AF45(1542246539);
			break;
		case 6:
			MAP::_0xD8C7162AB2E2AF45(-237206861);
			break;
		case 7:
			MAP::_0xD8C7162AB2E2AF45(276890716);
			break;
		case 9:
			MAP::_0xD8C7162AB2E2AF45(-353968602);
			break;
		case 10:
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			MAP::_0xD8C7162AB2E2AF45(-1354901649);
			break;
		case 11:
			MAP::_0xD8C7162AB2E2AF45(-496244122);
			break;
		case 12:
			MAP::_0xD8C7162AB2E2AF45(-678676588);
			break;
		case 15:
			MAP::_0xD8C7162AB2E2AF45(-732274047);
			break;
		case 16:
			MAP::_0xD8C7162AB2E2AF45(-12216052);
			break;
		case 17:
			MAP::_0xD8C7162AB2E2AF45(-1456731677);
			break;
		case 21:
			MAP::_0xD8C7162AB2E2AF45(-2086563810);
			break;
		case 22:
			MAP::_0xD8C7162AB2E2AF45(221661572);
			break;
		case 24:
			MAP::_0xD8C7162AB2E2AF45(222265732);
			break;
		case 25:
			MAP::_0xD8C7162AB2E2AF45(-1484929764);
			break;
		case 26:
			MAP::_0xD8C7162AB2E2AF45(1104975149);
			break;
		case 27:
			MAP::_0xD8C7162AB2E2AF45(235472255);
			break;
		case 28:
			MAP::_0xD8C7162AB2E2AF45(-1337880478);
			break;
		case 29:
			MAP::_0xD8C7162AB2E2AF45(-1813267128);
			break;
		case 30:
			MAP::_0xD8C7162AB2E2AF45(-1941572412);
			break;
		case 31:
			MAP::_0xD8C7162AB2E2AF45(1006072805);
			break;
		case 121:
			MAP::_0xD8C7162AB2E2AF45(929640770);
			break;
		case 122:
			MAP::_0xD8C7162AB2E2AF45(1603579970);
			break;
		case 124:
			MAP::_0xD8C7162AB2E2AF45(-1332669948);
			break;
		case 123:
			MAP::_0xD8C7162AB2E2AF45(-1807212021);
			break;
		case 34:
			MAP::_0xD8C7162AB2E2AF45(-1347759053);
			break;
		case 36:
			MAP::_0xD8C7162AB2E2AF45(-918096609);
			break;
		case 114:
			MAP::_0xD8C7162AB2E2AF45(1728445882);
			break;
		case 37:
			MAP::_0xD8C7162AB2E2AF45(-507075109);
			break;
		case 40:
			MAP::_0xD8C7162AB2E2AF45(462373845);
			break;
		case 42:
			MAP::_0xD8C7162AB2E2AF45(-1727895786);
			break;
		case 43:
			MAP::_0xD8C7162AB2E2AF45(1826504111);
			break;
		case 44:
			MAP::_0xD8C7162AB2E2AF45(1714554710);
			break;
		case 45:
			MAP::_0xD8C7162AB2E2AF45(-91026072);
			break;
		case 54:
			MAP::_0xD8C7162AB2E2AF45(893855320);
			break;
		case 55:
			MAP::_0xD8C7162AB2E2AF45(326709244);
			break;
		case 49:
			MAP::_0xD8C7162AB2E2AF45(653799702);
			break;
		case 62:
			MAP::_0xD8C7162AB2E2AF45(415864829);
			break;
		case 64:
			MAP::_0xD8C7162AB2E2AF45(-1836330842);
			break;
		case 65:
			MAP::_0xD8C7162AB2E2AF45(648073069);
			break;
		case 66:
			MAP::_0xD8C7162AB2E2AF45(770074951);
			break;
		case 68:
			MAP::_0xD8C7162AB2E2AF45(-1276637644);
			break;
		case 71:
			MAP::_0xD8C7162AB2E2AF45(-431488293);
			break;
		case 72:
			MAP::_0xD8C7162AB2E2AF45(-1101810198);
			break;
		case 74:
			MAP::_0xD8C7162AB2E2AF45(-1344767066);
			break;
		case 77:
			MAP::_0xD8C7162AB2E2AF45(1472232821);
			break;
		case 79:
			MAP::_0xD8C7162AB2E2AF45(-1368676121);
			break;
		case 63:
			MAP::_0xD8C7162AB2E2AF45(-33677540);
			break;
		case 80:
			MAP::_0xD8C7162AB2E2AF45(1602161184);
			MAP::_0xD8C7162AB2E2AF45(-443207523);
			MAP::_0xD8C7162AB2E2AF45(-683043834);
			break;
		case 82:
			MAP::_0xD8C7162AB2E2AF45(147256338);
			MAP::_0xD8C7162AB2E2AF45(-134804027);
			MAP::_0xD8C7162AB2E2AF45(2027689141);
			break;
		case 83:
			MAP::_0xD8C7162AB2E2AF45(-161135375);
			break;
		case 85:
			MAP::_0xD8C7162AB2E2AF45(1625008147);
			break;
		case 86:
			MAP::_0xD8C7162AB2E2AF45(121074776);
			break;
		case 87:
			MAP::_0xD8C7162AB2E2AF45(1876184276);
			break;
		case 89:
			MAP::_0xD8C7162AB2E2AF45(458479023);
			break;
		case 91:
			MAP::_0xD8C7162AB2E2AF45(85299473);
			break;
		case 96:
			MAP::_0xD8C7162AB2E2AF45(-1150244084);
			break;
		case 98:
			MAP::_0xD8C7162AB2E2AF45(759314201);
			break;
		case 99:
			MAP::_0xD8C7162AB2E2AF45(2063457042);
			break;
		case 100:
			MAP::_0xD8C7162AB2E2AF45(1877776161);
			break;
		case 102:
			MAP::_0xD8C7162AB2E2AF45(2143316225);
			break;
		case 104:
			MAP::_0xD8C7162AB2E2AF45(-1623232489);
			MAP::_0xD8C7162AB2E2AF45(-1393093729);
			break;
		case 106:
			MAP::_0xD8C7162AB2E2AF45(1354284392);
			break;
		case 107:
			MAP::_0xD8C7162AB2E2AF45(-1430883057);
			break;
		case 109:
			MAP::_0xD8C7162AB2E2AF45(820139809);
			break;
		case 112:
			MAP::_0xD8C7162AB2E2AF45(1561007383);
			MAP::_0xD8C7162AB2E2AF45(-960425936);
			break;
	}
	if (bParam1)
	{
		func_658(iParam0, 64);
	}
}

void func_508()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_890(iVar0);
		if (iVar1 != -1)
		{
			if (func_891(iVar1) != -1 && iVar1 != func_86())
			{
				if (iVar0 == Global_1934051.f_33 && func_433(iVar0))
				{
					func_892(iVar0, 7148155);
					func_893(&(Global_1934051.f_33), 0);
				}
				iVar2 = func_894(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && func_433(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						func_893(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_509(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_86();
	if (func_327(iVar0))
	{
		iVar1 = func_501(iVar0);
		if (func_895(iVar1))
		{
			Global_40.f_9384[iVar1 /*2*/] = (Global_40.f_9384[iVar1 /*2*/] - Global_40.f_9384[iVar1 /*2*/] & 1);
		}
	}
	iVar2 = func_432(iParam0);
	iVar3 = func_501(iVar2);
	if (func_895(iVar3))
	{
		Global_40.f_9384[iVar3 /*2*/] |= 1;
		Global_40.f_6 = { Global_1395601.f_5[iVar3 /*28*/].f_2 };
		VOLUME::_0x748C5F51A18CB8F0(0);
		VOLUME::_0x748C5F51A18CB8F0(1);
	}
}

void func_510(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_370(&Global_0, 8);
	}
	if (!func_70() || func_2() != -1)
	{
		return;
	}
	func_370(&Global_0, 1);
}

void func_511(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_432(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_896(iParam0);
	func_897(iParam0);
	func_500();
	if (iVar0 == 9)
	{
		func_303(-524145696, 0, 0);
	}
}

void func_512(int iParam0)
{
	func_898();
	switch (iParam0)
	{
		case 0:
			func_899(-1303.82f, 2431.232f, 307.1254f, 254.7021f, 2);
			func_899(-1331.61f, 2479.874f, 308.7661f, 343.4772f, 1);
			func_899(-1367.155f, 2401.237f, 305.9231f, 182.5857f, 0);
			break;
		case 1:
			func_899(-40.4062f, 24.7958f, 92.5989f, 345.8244f, 2);
			func_899(-46.6053f, 49.3195f, 89.4332f, 32.7929f, 2);
			func_899(-89.1265f, 74.3389f, 88.5412f, 341.7615f, 1);
			func_899(-117.2523f, 26.8954f, 84.9916f, 71.3425f, 1);
			func_899(-92.892f, 50.1228f, 87.8695f, 45.8778f, 1);
			func_899(-13.6112f, -0.4862f, 101.6951f, 255.2034f, 2);
			func_899(-32.3882f, -18.9331f, 103.6418f, 237.7177f, 3);
			func_899(-19.8908f, -62.5598f, 103.873f, 267.298f, 3);
			func_899(-33.2324f, -103.5739f, 101.7936f, 255.1129f, 3);
			func_899(-69.4097f, -128.0305f, 97.0682f, 221.4977f, 3);
			func_899(-79.3456f, -103.7585f, 91.473f, 66.6098f, 3);
			func_899(-134.3901f, -69.9172f, 90.3402f, 108.8014f, 0);
			func_899(-163.3076f, -54.9202f, 89.2085f, 130.3788f, 0);
			func_899(-7.8651f, 34.202f, 96.8284f, 252.726f, 2);
			break;
		case 2:
			func_899(773.3724f, -1152.694f, 46.0144f, 287.6862f, 1);
			func_899(678.071f, -1106.928f, 50.6427f, 308.8809f, 1);
			func_899(694.5107f, -1273.256f, 42.5974f, 276.0894f, 3);
			func_899(624.2226f, -1093.59f, 44.0105f, 324.7204f, 1);
			func_899(695.23f, -1204.24f, 44.84f, -75.427f, 0);
			break;
		case 3:
			func_899(1814.452f, -1812.884f, 47.3854f, 46.0618f, 0);
			func_899(1844.125f, -1770.289f, 44.872f, 354.3456f, 0);
			func_899(1774.591f, -1878.943f, 45.1128f, 1.1527f, 0);
			func_899(1751.868f, -1959.416f, 47.0387f, 100.6328f, 3);
			func_899(1818.659f, -2009.734f, 43.2796f, 94.403f, 3);
			break;
		case 6:
			func_899(2372.828f, 1302.302f, 108.3737f, 193.8477f, 2);
			func_899(2299.087f, 1370.095f, 100.6253f, 148.7151f, 1);
			func_899(2325.401f, 1301.158f, 95.0156f, 220.5325f, 2);
			break;
	}
}

void func_513(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_514(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_745())
	{
		if (func_900(255))
		{
			if (!func_901(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_327(Global_1894899.f_2) && func_902(Global_1894899.f_2))
		{
			func_903(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_904(16);
			}
		}
		else if (func_327(Global_1894899.f_2) && !func_710(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		func_905(16);
		func_906();
		if (bVar0)
		{
			func_905(1);
		}
	}
}

void func_515()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1357549.f_1674))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1357549.f_1674))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1357549.f_1674, true, false);
		}
		if (ENTITY::IS_ENTITY_DEAD(Global_1357549.f_1674) == 0)
		{
			VEHICLE::DELETE_VEHICLE(&(Global_1357549.f_1674));
		}
	}
}

void func_516()
{
	func_907(32);
}

int func_517(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_908(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_909(iVar6);
	}
	return iVar5;
}

int func_518(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	Var0 = Global_1357549.f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_910(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_519(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_911(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

bool func_520(int iParam0)
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

void func_521(int iParam0, int iParam1)
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

void func_522(int iParam0, int iParam1)
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

bool func_523(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

int func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_912(iParam0, 1);
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar1 = func_912(func_913(iVar3), 1);
		iVar2 = func_912(func_914(iVar3), 1);
		if (iVar0 >= iVar1)
		{
			if (iVar0 <= iVar2)
			{
				return iVar3;
			}
		}
		iVar3++;
	}
	return 0;
}

int func_525(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2120502580:
			return 5;
		case -1784359682:
			return 1;
		case -518918701:
			return 3;
		case 820723243:
			return 0;
		case 977356591:
			return 4;
		case 1461274691:
			return 6;
		case 1710500858:
			return 2;
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

void func_526(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_523(iParam0))
	{
		return;
	}
	func_915(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1935183.f_73[iParam0 /*7*/][iVar0]), iVar1);
	}
}

bool func_527(int iParam0)
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
			return false;
		default:
			break;
	}
	return false;
}

void func_528(int iParam0, var uParam1)
{
	if (!func_523(iParam0))
	{
		return;
	}
	if (*uParam1 == joaat("TSTAG_NO_TAGS"))
	{
		return;
	}
	func_526(iParam0, *uParam1, 0);
	func_916(uParam1);
	Global_1935183.f_24 = 1;
}

bool func_529(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

void func_530(int iParam0)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		func_917(iParam0);
		MISC::SET_BIT(&(Global_40.f_9052), iParam0);
	}
	if (func_412(Global_1392626[iParam0 /*32*/].f_3) == 3)
	{
		func_468(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
}

void func_531(int iParam0, int iParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (func_467(Global_1392626[iParam0 /*32*/].f_3) || func_782(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_468(Global_1392626[iParam0 /*32*/].f_3, 0, 2);
	}
	if (iParam1 == 0)
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
		func_917(iParam0);
	}
}

void func_532(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_529(iParam0))
	{
		return;
	}
	else if (!func_20(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!func_381(1))
	{
		func_918(1);
	}
	func_917(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = func_72();
		func_73(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_476(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_530(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_533(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_534(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_2() == -1)
	{
		if (func_919(iParam0) && func_920(iParam0))
		{
			func_921(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_535(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_922(iParam0, iParam1);
	Var0 = { func_698(iParam0, 0, 1) };
	iVar5 = func_923(iParam0, &Var0, 0, 0);
	iVar6 = func_924(iParam0, 0);
	if ((iVar5 > 1 && !func_728()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_297(iParam0, -2051813666))
		{
			func_293(583, 1);
		}
		else
		{
			func_293(582, 0);
		}
	}
	if (func_925(iParam0, &Var0, *iParam1, 0, 0))
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

void func_536(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_624(iParam0, -949239683))
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

int func_537(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_631(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_926(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam2), iParam0, 0);
	return iVar2;
}

bool func_538(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_539(iParam0) != 0;
}

int func_539(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_927())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_928(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_540(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_541(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_927())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_540(iVar0))
		{
			if (func_581(func_928(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_542(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_929(48);
	func_510(0, -1);
}

bool func_543(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_226(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_544(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_545(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_546(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_226(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_547(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_18(iParam0))
	{
		return false;
	}
	return func_467(Global_1347702[iParam0 /*49*/].f_15);
}

int func_548()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_581(func_930(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_549(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_70() && (func_547(38) || func_543(38)))
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
			if (func_70() && (func_547(39) || func_543(39)))
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
			iVar9 = func_931(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_70() && (func_547(41) || func_543(41)))
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
			if (func_70() && (func_547(49) || func_543(49)))
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
			iVar9 = func_931(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_932(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_933(iParam0, iVar13, iVar14))
	{
	}
	if (func_934(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_935(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_936(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_937(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_938(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_550(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_551(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_70() && (func_547(38) || func_543(38)))
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
			if (func_70() && (func_547(39) || func_543(39)))
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
			if (func_70() && (func_547(49) || func_543(49)))
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
		if (func_70() && (func_547(38) || func_543(38)))
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
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_806(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_939(func_545(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_70() && (func_547(39) || func_543(39)))
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
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_70() && (func_547(49) || func_543(49)))
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
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_807(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_552(int iParam0)
{
	vector3 vVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_553(int iParam0, int iParam1)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_554(int iParam0)
{
	if (!func_300(iParam0))
	{
		return false;
	}
	return func_940(iParam0);
}

int func_555(int iParam0)
{
	struct<2> Var0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_556(int iParam0, bool bParam1)
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
	if (func_286(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_941(iVar0) || func_942(iVar0))
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

int func_557(int iParam0, bool bParam1)
{
	if (!func_286(iParam0, 0))
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

bool func_558(bool bParam0)
{
	if (func_2() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_738(bParam0));
}

bool func_559(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_698(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_943((398 + iVar28), 1);
			if (func_944(iParam0, &Var0, iVar5, 0))
			{
				if (func_945(iParam0, &Var6, iVar5))
				{
					Var29 = { func_946(iParam0, Var0, iVar5, 0) };
					func_947(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_558(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_560(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_948(iParam0, iParam1);
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

bool func_560(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_562(iParam0))
	{
		return false;
	}
	if (!func_558(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_561(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_557(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_2() == -1)
		{
			func_287(iVar0);
			if (iParam1 == 1248274121)
			{
				func_949(iVar0);
			}
		}
		if (!func_925(iParam0, &uVar1, 1, 0, 0))
		{
			func_921(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_950(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_559(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_559(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_559(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_315())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_951(iVar0))
				{
					func_559(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_559(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_952(Global_35, 2, 0, 1);
				if ((((func_533(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_554(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_533(iVar7) && func_554(24))
				{
					if (!func_559(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_559(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_559(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_293(480, 1);
	}
	return true;
}

bool func_562(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_563(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_562(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_533(iVar4))
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
	if (func_581(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
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
		func_292(func_953(iParam0), func_598(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_2() == -1)
		{
			if (func_226(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_293(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_558(0))
	{
		if (func_560(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_603(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_564(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_840()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_954(Global_35, iParam0, &uVar0))
		{
			func_362(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_589();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_587();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_585();
			break;
	}
}

void func_565(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_585();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_586();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_587();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_588();
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
			func_589();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_955();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_314();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_566(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_567(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> func_568(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_569(int iParam0)
{
	bool bVar0;

	bVar0 = func_297(iParam0, -2017733358);
	if (func_956() < 3)
	{
		if (bVar0)
		{
			if (func_958(func_957(iParam0), iParam0))
			{
				func_292(79, func_598(func_957(iParam0)), 1);
			}
			else
			{
				func_292(78, func_598(func_957(iParam0)), 1);
			}
		}
		else
		{
			func_292(80, func_598(func_959(iParam0)), 1);
		}
	}
}

bool func_570()
{
	if (((((func_960(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_960(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_960(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_571(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_961(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_962(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_963(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_572(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_551(51, 0, 0, 0, 0, -1, 0);
			func_964(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_551(51, 0, 0, 0, 0, -1, 0);
			func_964(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_549(39, 0, 0, 0, 0, 0, 1, 0);
			func_551(39, 0, 0, 0, 0, -1, 0);
			func_965(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_549(41, 0, 0, 0, 0, 0, 1, 0);
			func_551(41, 0, 0, 0, 0, -1, 0);
			func_966(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_549(49, 0, 0, 0, 0, 0, 1, 0);
			func_551(49, 0, 0, 0, 0, -1, 0);
			func_967(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_968(1), 0, -1, 0);
			func_969(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_968(2), 0, -1, 0);
			func_969(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_968(4), 0, -1, 0);
			func_969(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_968(8), 0, -1, 0);
			func_969(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_549(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_968(16), 0, -1, 0);
			func_969(16);
			break;
	}
}

void func_573(int iParam0)
{
	if (func_970() == 1)
	{
		if (func_543(39))
		{
			func_293(342, 0);
		}
		else
		{
			func_293(343, 0);
			func_965(1);
		}
	}
	if (func_970() >= 30)
	{
		func_293(344, 0);
	}
	func_549(39, 0, 0, 0, 0, 0, -1, 0);
	func_551(39, 0, 0, func_970(), 30, 1, 0);
}

void func_574(int iParam0)
{
	if (func_971() == 1)
	{
		if (func_543(49))
		{
			func_293(409, 0);
		}
		else
		{
			func_293(410, 0);
			func_967(1);
		}
	}
	if (func_971() >= 10)
	{
		func_293(411, 0);
	}
	func_549(49, 0, 0, 0, 0, 0, -1, 0);
	func_551(49, 0, 0, func_971(), 10, 1, 0);
}

void func_575(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_293(437, 0);
			func_293(440, 0);
			func_972(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_964(1);
			func_303(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_972(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_964(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_972(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_964(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_972(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_964(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_293(438, 0);
			func_972(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_549(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_551(51, 0, 0, sVar0, func_931(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_964(32768);
			break;
		default:
			func_293(439, 0);
			break;
	}
}

void func_576()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_577(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_2() == -1)
	{
		if (!func_543(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_293(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_293(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_293(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_293(400, 0);
			}
		}
		else if (func_297(iParam0, 412399755))
		{
			func_973(joaat("EXOTIC_STAGE_01"));
			if (func_974() == 0)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_543(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_293(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_293(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_293(401, 0);
			}
		}
		else if (func_297(iParam0, 709057512))
		{
			func_973(joaat("EXOTIC_STAGE_02"));
			if (func_974() == 1)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_543(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_293(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_293(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_293(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_293(398, 0);
			}
		}
		else if (func_297(iParam0, -1478961327))
		{
			func_973(joaat("EXOTIC_STAGE_03"));
			if (func_974() == 2)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_978(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_929(48);
					}
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_543(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_293(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_293(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_293(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_293(406, 0);
			}
		}
		else if (func_297(iParam0, -1238404098))
		{
			func_973(joaat("EXOTIC_STAGE_04"));
			if (func_974() == 3)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_543(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_293(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_293(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_293(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_293(403, 0);
			}
		}
		else if (func_297(iParam0, 1160548794))
		{
			func_973(joaat("EXOTIC_STAGE_05"));
			if (func_974() == 4)
			{
				func_510(0, 10);
				iVar1 = func_975(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_976(iParam0) < func_977(iParam0))
					{
						func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_551(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_578(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_978(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_979(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_929(48);
		}
	}
}

void func_579(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_581(func_980(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_981(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_982(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_580(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_571(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_571(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_571(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_571(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_571(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_571(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_571(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COIN"):
			func_571(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_571(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_571(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_571(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_571(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_571(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_983())
			{
				func_571(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_571(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_571(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_571(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_571(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_571(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_571(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_571(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_571(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_571(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_571(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_571(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_571(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_571(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_581(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_552(iParam0);
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
		if (!func_984(iParam0, 1))
		{
			return false;
		}
	}
	return func_537(iParam0, 0, bParam2) >= iParam1;
}

void func_582(int iParam0)
{
	if (func_543(41))
	{
		func_293(363, 0);
	}
	else
	{
		func_293(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_01"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_02"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_03"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_04"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_05"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_06"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_07"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_08"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_09"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_10"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_11"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_12"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_13"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_510(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_985(joaat("LEGENDARY_FISH_14"));
			func_986(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_987(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_583(int iParam0, int iParam1)
{
	var uVar0;

	func_988(iParam0, iParam1, &uVar0);
}

bool func_584(int iParam0, bool bParam1)
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
	iVar18 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_952(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_383("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_384(&Var3, iVar2, iVar0, iVar1))
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
						func_385(iVar0);
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

void func_585()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_586()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_587()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_588()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_589()
{
	func_989();
	func_990();
	func_991();
}

void func_590(int iParam0, int iParam1, bool bParam2)
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

void func_591(int iParam0, bool bParam1)
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
	func_807(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_592(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_593(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_594(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_595(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_596(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_597(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_598(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_599(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	if (!func_613(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_614(iParam0, 1024))
	{
		return;
	}
	func_615(iVar0, iVar1);
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

int func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_927())
	{
		return func_601();
	}
	iVar4 = (func_927() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_927())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_992(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_928(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_601()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_927());
	return func_928(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_602(int iParam0)
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

bool func_603(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_698(iParam0, 0, 1) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	return func_993(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	switch (func_555(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_994(81053684, 0) <= 0)
			{
				func_325(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_325(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_995(iParam0);
			if (func_294(iVar0))
			{
				func_295(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_325(30, iParam0, 0, 0, 0);
			}
			if (func_693() == -2125499975 || func_693() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_325(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_693() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_325(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_996(-525676072, 0))
			{
				if (func_997(-525676072, &iVar1))
				{
					func_325(33, iVar1, 0, 0, 0);
				}
			}
			func_325(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_998(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_362(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_301(24);
		if (func_584(&iVar2, 0))
		{
			func_559(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_605(int iParam0)
{
	if (func_297(iParam0, 943695443))
	{
		func_999(0, iParam0);
	}
	else if (func_297(iParam0, -2096528786))
	{
		func_999(1, iParam0);
	}
	else if (func_297(iParam0, -1094167013))
	{
		func_999(2, iParam0);
	}
	else if (func_297(iParam0, 1936654645))
	{
		func_999(3, iParam0);
	}
	else if (func_297(iParam0, 1306489306))
	{
		func_999(4, iParam0);
	}
	else if (func_297(iParam0, 435762317))
	{
		func_999(5, iParam0);
	}
	else if (func_297(iParam0, 1259363210))
	{
		func_999(6, iParam0);
	}
	else if (func_297(iParam0, 881398259))
	{
		func_999(7, iParam0);
	}
	else if (func_297(iParam0, -541549214))
	{
		func_999(8, iParam0);
	}
	else if (func_297(iParam0, 130796156))
	{
		func_999(-1, iParam0);
	}
}

int func_606(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	func_1000(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_1001(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_607(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	if (func_297(iParam0, -305066475))
	{
		if (func_2() == -1)
		{
			if (func_297(iParam0, -537818634))
			{
				return func_759(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_759(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_297(iParam0, -537818634))
	{
		return func_759(joaat("MEDICINE_ITEMS"));
	}
	if (func_297(iParam0, 2084895747))
	{
		return func_759(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_608(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_2() == -1)
			{
				if (func_226(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_293(109, 1);
				}
			}
			break;
	}
}

void func_609(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1003(func_1002(0));
	func_1005(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1004(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_610(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_286(iParam0, 0))
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
	if (!func_1006())
	{
		func_1007(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1008(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1008(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_553(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_552(iParam0);
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
	else if (!func_1009(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_1010(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_598(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_297(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_598(iParam0));
	}
	func_1005(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_611(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && Var1.f_18[iVar0 /*2*/].f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*uParam1 = { Var1.f_18[iVar0 /*2*/] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_612(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_613(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1011(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1012(iParam0))
	{
		return false;
	}
	if (func_1013(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_614(iParam0, 1)) || func_6(32768))
	{
		if (!func_614(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_1014())
	{
		return false;
	}
	return true;
}

bool func_614(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_615(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_616(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	if (func_620(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_617(int iParam0)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	if (func_620(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_618(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (!func_617(iParam0))
	{
		func_621(iParam0, 2);
		if (bParam2)
		{
			if (!func_14(0, 0, 1))
			{
				func_510(1, 4);
			}
		}
		if ((!func_418() && !bParam1) && !func_14(0, 0, 1))
		{
			func_441(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_1015(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_619(int iParam0)
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

bool func_620(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

void func_621(int iParam0, int iParam1)
{
	if (!func_294(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

bool func_622(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1016(iParam1);
	func_1017(&(Global_1946804.f_964), iVar0, iParam0, -897569541, 1, iParam1);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	return DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964));
}

void func_623(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_294(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] && iParam1);
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] - iVar0);
}

int func_624(int iParam0, int iParam1)
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

struct<10> func_625(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_626(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_627(int iParam0, int iParam1)
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

bool func_628(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1018(iParam0, iParam1, 1))
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
				if (Var2.f_2 == joaat("COST_TYPE_CRAFT") && func_1018(iParam0, Var2, 1))
				{
					if (func_1019(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1019(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_293(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_629(int iParam0)
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

void func_630(int iParam0)
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
		func_293(iVar0, 0);
	}
}

int func_631(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_552(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_297(iParam0, 1399091007))
	{
		func_988(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_632(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_1020(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1022(&Var0, func_1021(0));
	}
	if (!func_1023(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_384(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_947(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_385(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_633(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_698(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1024(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_946(iParam0, Var0, Var0.f_4, bParam4) };
	return func_947(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_634(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_297(iParam0, 606799272))
		{
			func_1025(iParam0, iParam1);
		}
		if (func_297(iParam0, -1112814642) && func_297(iParam0, -1697809989))
		{
			func_579(iParam0, iParam1, 1, 0);
		}
	}
}

void func_635(int iParam0)
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

void func_636(int iParam0)
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
			func_1026(1);
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
			func_1027(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1027(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1027(3);
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
			func_1028(1);
			break;
		case 34:
			func_1029(1);
			break;
		case 35:
			func_1030(1);
			break;
		case 36:
			break;
		case 37:
			func_1031(0);
			break;
		case 38:
			func_1032(0);
			break;
		case 39:
			func_1033(0);
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
			if ((!Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_293(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_293(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_293(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_70()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_806("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_293(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_2() == -1)
			{
				if (!func_998(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_1034(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_315())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_581(iVar0, 1, 0))
					{
						func_603(iVar0, 1, 752097756);
					}
					func_362(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_581(1013902307, 1, 0))
				{
					func_603(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_581(1013902307, 1, 0))
				{
					func_603(1013902307, 1, 752097756);
				}
				if (!func_581(142640135, 1, 0))
				{
					func_603(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_581(786809402, 1, 0))
				{
					func_603(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_2() == -1)
			{
				if (!func_581(786809402, 1, 0))
				{
					func_603(786809402, 1, 752097756);
				}
				if (!func_581(-518019409, 1, 0))
				{
					func_603(-518019409, 1, 752097756);
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
			func_1035();
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

void func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_638(int iParam0)
{
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
			func_1026(0);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			func_1036(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			func_1036(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			func_1036(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
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
			func_1028(0);
			break;
		case 34:
			func_1029(0);
			break;
		case 35:
			func_1030(0);
			break;
		case 36:
			break;
		case 37:
			func_1031(1);
			break;
		case 38:
			func_1032(1);
			break;
		case 39:
			func_1033(1);
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
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 2:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 1)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			}
			break;
		case 3:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 2)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			}
			break;
		case 4:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, true);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 3)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			}
			break;
		case 5:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, true);
			if (PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX()) > 4)
			{
				PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			}
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), false);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), false);
			break;
		case 48:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 50:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 49:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 51:
			PLAYER::_0xC900A465364A85D6(PLAYER::PLAYER_ID());
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(1);
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
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), false);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", false, true);
			break;
		case 46:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), false);
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), false);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), false);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), false);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), false);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), false);
			break;
	}
}

void func_639()
{
	func_505(-939420910);
	func_505(-1187950766);
	func_505(356365161);
	func_505(753127042);
	func_505(-2038424081);
	func_505(1884271742);
	func_505(459290420);
}

void func_640()
{
	func_505(704802028);
	func_505(588987611);
	func_505(2008888900);
	func_505(1649996811);
	func_505(227918160);
	func_505(168171957);
	func_505(1193080109);
	func_505(-491981251);
	func_505(-639037538);
	func_505(-618620429);
}

bool func_641(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_886(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

bool func_642(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_643(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_250(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_1037(iParam0, iParam1);
	return bVar0;
}

bool func_644(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 6);
}

bool func_645(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_646(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iParam1 == 999)
	{
		iVar0 = func_2();
	}
	if (iVar0 == -1)
	{
		switch (iParam0)
		{
			case joaat("PLAYER_ZERO"):
				func_1038(-2125499975);
				break;
			case joaat("PLAYER_THREE"):
				func_1038(1160113249);
				break;
			default:
				break;
		}
		return;
	}
	if (iParam0 == joaat("MP_MALE"))
	{
		func_1038(joaat("MPC_PLAYER_TYPE_MP_MALE"));
	}
	else if (iParam0 == joaat("MP_FEMALE"))
	{
		func_1038(joaat("MPC_PLAYER_TYPE_MP_FEMALE"));
	}
}

bool func_647()
{
	return false;
}

bool func_648(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_649(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
		case 10:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1040(iParam1, iParam2, &uVar0, &uVar1, 0, func_1039(iParam0));
	}
}

void func_650(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_651(struct<4> Param0)
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
			if (func_1041(Param0))
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
			func_1042(Param0);
			Global_1946804.f_668[Global_1946804.f_856 /*4*/] = { Param0 };
			Global_1946804.f_850++;
			Global_1946804.f_856 = (Global_1946804.f_856 + 1 % 25);
			func_650(8);
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
			if (func_1041(Param0))
			{
				return;
			}
			func_1042(Param0);
			Global_1946804.f_567[Global_1946804.f_851 /*4*/] = { Param0 };
			Global_1946804.f_851++;
			func_650(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_707(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_652(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_653(bool bParam0)
{
	bool bVar0;

	if (Global_40.f_7748.f_1 < 9)
	{
		if (func_80(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (func_1043())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					func_1044();
				}
				else
				{
					func_1045();
				}
			}
		}
	}
	if (bVar0)
	{
		func_325(9, 0, 0, 0, 0);
	}
}

void func_654(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (Global_40.f_7731[iVar0 /*5*/] < 10)
		{
			if (func_80(Global_40.f_7731[iVar0 /*5*/].f_3, 1))
			{
				if (Global_40.f_7731[iVar0 /*5*/] <= 10)
				{
					if (Global_40.f_7731[iVar0 /*5*/] < 7)
					{
						bVar1 = true;
					}
					else if (func_648(iVar0))
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (bParam0)
					{
						func_1046(iVar0);
					}
					else
					{
						func_1047(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_325(10, 0, 0, 0, 0);
		func_325(7, 0, 0, 0, 0);
	}
}

void func_655(bool bParam0)
{
	if (func_1048() && (bParam0 || func_80(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_72();
		}
		else
		{
			func_293(492, 1);
		}
		func_325(9, 0, 0, 0, 0);
	}
}

bool func_656(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 16:
		case 36:
		case 79:
		case 114:
		case 118:
		case 125:
		case 127:
		case 129:
			return true;
		default:
			break;
	}
	return false;
}

bool func_657(int iParam0)
{
	return func_710(iParam0, 256);
}

void func_658(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] || iParam1);
	}
}

void func_659(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/] = (Global_1058888.f_40615[iParam0 /*11*/] - (Global_1058888.f_40615[iParam0 /*11*/] && iParam1));
}

int func_660(int iParam0)
{
	if (!func_329(iParam0, 0))
	{
		return 2;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("DISCOVERABLE_NAME_ODRISCOLL");
		case 2:
			return 1230354436 /* GXTEntry: "Lemoyne Raider" */;
		case 1:
			return -392391548 /* GXTEntry: "Murfree Brood" */;
		case 3:
			return -1141178522 /* GXTEntry: "Skinner Brother" */;
		case 4:
			return 1203887108 /* GXTEntry: "Hired Gun" */;
		case 5:
			return joaat("DISCOVERABLE_NAME_DEL_LOBO");
		default:
			break;
	}
	return 2;
}

bool func_661(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		if (Global_40.f_9632[iParam0 /*4*/] > 0)
		{
			if (Global_40.f_9632[iParam0 /*4*/] >= func_1049(iParam0))
			{
				return true;
			}
			Var2 = { func_759(joaat("TOTAL_PLAYING_TIME")) };
			if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
			{
				iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
				if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
				{
					return false;
				}
			}
		}
	}
	return Global_40.f_9632[iParam0 /*4*/] > 0;
}

bool func_662(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = { func_759(joaat("TOTAL_PLAYING_TIME")) };
	if (STATS::STAT_ID_GET_INT(&Var2, &uVar0))
	{
		iVar1 = STATS::_0x1E7384AB5D4F4581(uVar0);
		if (iVar1 >= Global_40.f_9632[iParam0 /*4*/].f_3)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

Vector3 func_663(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 261.4119f, 168.1394f, 97.095f;
				case 1:
					return -71.9f, 314.6f, 108.1f;
				case 2:
					return -247.9203f, 499.8062f, 94.8408f;
				case 3:
					return -265.6117f, -258.6254f, 91.1275f;
				case 4:
					return 947.9633f, 392.5947f, 110.4447f;
				default:
					break;
			}
			break;
		case 1:
		case 2:
		case 36:
			switch (iParam1)
			{
				case 0:
					return 37.4f, 576f, 130.9528f;
				case 1:
					return 82.3596f, 414.8434f, 126.6896f;
				default:
					break;
			}
			break;
		case 3:
		case 4:
		case 38:
			switch (iParam1)
			{
				case 0:
					return -99.1603f, 295.7463f, 102.7589f;
				default:
					break;
			}
			break;
		case 6:
		case 42:
			switch (iParam1)
			{
				case 0:
					return -605.1606f, 415.9453f, 95.278f;
				case 1:
					return 647.687f, -566.0206f, 73.8882f;
				case 2:
					return 156.9574f, 589.7143f, 124.4553f;
				default:
					break;
			}
			break;
		case 5:
		case 35:
			switch (iParam1)
			{
				case 0:
					return -1110.081f, 126.4462f, 55.3198f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				default:
					break;
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					return -1735.511f, 57.3352f, 154.7623f;
				case 1:
					return 839.995f, -692.6373f, 66.1221f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -511.2764f, -324.3151f, 65.11539f;
					Jump @2274; //curOff = 750
					switch (iParam1)
					{
						case 0:
							return -511.2764f, -324.3151f, 65.11539f;
						default:
							break;
					}
					Jump @2274; //curOff = 785
					switch (iParam1)
					{
						case 0:
							return 340.1664f, 224.1398f, 101.5865f;
						case 1:
							return -368.3074f, 115.4362f, 40.7802f;
						case 2:
							return -1061.945f, -445.6989f, 80.26047f;
						case 3:
							return -1283.033f, 16.5433f, 53.7479f;
						default:
							break;
					}
					Jump @2274; //curOff = 892
					switch (iParam1)
					{
						case 0:
							return 1633.234f, -672.1511f, 43.5035f;
						case 1:
							return 925.174f, -1145.063f, 53.314f;
						case 2:
							return 1426.139f, -1437.182f, 78.244f;
						case 3:
							return 1480.597f, -1043.651f, 54.8389f;
						case 4:
							return 2156.54f, -1319.13f, 41.4469f;
						case 5:
							return 1321.881f, -1679.864f, 66.872f;
						default:
							break;
					}
					Jump @2274; //curOff = 1047
					switch (iParam1)
					{
						case 0:
							return 1497.896f, -719.2251f, 47.15442f;
						default:
							break;
					}
					Jump @2274; //curOff = 1082
					switch (iParam1)
					{
						case 0:
							return 1633.234f, -672.1511f, 43.5035f;
						default:
							break;
					}
					Jump @2274; //curOff = 1117
					switch (iParam1)
					{
						case 0:
							return 925.6f, -1145f, 53f;
						case 1:
							return 1485.047f, -1042.127f, 52.9948f;
						default:
							break;
					}
					Jump @2274; //curOff = 1176
					switch (iParam1)
					{
						case 0:
							return 1717.905f, -2066.761f, 42.9164f;
						case 1:
							return 1475.829f, -2229.839f, 42.6941f;
						case 2:
							return 2153.501f, -1302.344f, 42.1521f;
						default:
							break;
					}
					Jump @2274; //curOff = 1259
					switch (iParam1)
					{
						case 0:
							return 1240.883f, -859.2491f, 69.91452f;
						case 1:
							return 991.1385f, -889.2033f, 70.3542f;
						default:
							break;
					}
					Jump @2274; //curOff = 1318
					switch (iParam1)
					{
						case 0:
							return 2139.084f, -1322.471f, 41.6526f;
						case 1:
							return 2162.225f, -960.3032f, 41.7974f;
						case 2:
							return 1153.882f, -1502.448f, 52.6003f;
						case 3:
							return 1490.574f, -1001.085f, 48.9639f;
						case 4:
							return 1659.413f, -1597.443f, 55.4104f;
						default:
							break;
					}
					Jump @2274; //curOff = 1449
					switch (iParam1)
					{
						case 0:
							return 2427.188f, 1043.388f, 86.5726f;
						default:
							break;
					}
					Jump @2274; //curOff = 1484
					switch (iParam1)
					{
						case 0:
							return 2427.188f, 1043.388f, 86.5726f;
						default:
							break;
					}
					Jump @2274; //curOff = 1519
					switch (iParam1)
					{
						case 0:
							return 2355.17f, 1680.76f, 95.341f;
						case 1:
							return 2606.643f, 1809.042f, 91.94587f;
						case 2:
							return 2627.776f, 1314.441f, 113.6464f;
						case 3:
							return 2853.661f, 869.5517f, 49.258f;
						default:
							break;
					}
					Jump @2274; //curOff = 1626
					switch (iParam1)
					{
						case 0:
							return 2466.44f, 1326.504f, 108.6252f;
						default:
							break;
					}
					Jump @2274; //curOff = 1661
					switch (iParam1)
					{
						case 0:
							return 2737.724f, 836.7189f, 83.38937f;
						default:
							break;
					}
					Jump @2274; //curOff = 1696
					switch (iParam1)
					{
						case 0:
							return 2814.25f, 445.3571f, 63.1659f;
						default:
							break;
					}
					Jump @2274; //curOff = 1731
					switch (iParam1)
					{
						case 0:
							return -2361.181f, -1483.392f, 140.8987f;
						default:
							break;
					}
					Jump @2274; //curOff = 1766
					switch (iParam1)
					{
						case 0:
							return -1554.11f, -1211.528f, 73.6863f;
						default:
							break;
					}
					Jump @2274; //curOff = 1801
					switch (iParam1)
					{
						case 0:
							return -1298.058f, -1248.784f, 81.8463f;
						default:
							break;
					}
					Jump @2274; //curOff = 1836
					switch (iParam1)
					{
						case 0:
							return -1424.421f, -956.7158f, 61.702f;
						default:
							break;
					}
					Jump @2274; //curOff = 1871
					switch (iParam1)
					{
						case 0:
							return -2089.884f, -1624.694f, 132.9787f;
						case 1:
							return -2169.37f, -1187.876f, 132.733f;
						default:
							break;
					}
					Jump @2274; //curOff = 1930
					switch (iParam1)
					{
						case 0:
							return -2285.194f, -414.9127f, 156.6726f;
						default:
							break;
					}
					Jump @2274; //curOff = 1965
					switch (iParam1)
					{
						case 0:
							return -2285.194f, -414.9127f, 156.6726f;
						default:
							break;
					}
					Jump @2274; //curOff = 2000
					switch (iParam1)
					{
						case 0:
							return -3285.6f, -2630.4f, 4.9f;
						default:
							break;
					}
					Jump @2274; //curOff = 2035
					switch (iParam1)
					{
						case 0:
							return -5233.051f, -2902.402f, 1.486f;
						default:
							break;
					}
					Jump @2274; //curOff = 2070
					switch (iParam1)
					{
						case 0:
							return -3827.842f, -2983.152f, -7.33933f;
						case 1:
							return -4181.152f, -2308.259f, 0.004f;
						default:
							break;
					}
					Jump @2274; //curOff = 2129
					switch (iParam1)
					{
						case 0:
							return 1903.304f, 1642.989f, 170.1826f;
						default:
							break;
					}
					Jump @2274; //curOff = 2164
					switch (iParam1)
					{
						case 0:
							return 2386.82f, 751.7125f, 66.2341f;
						case 1:
							return 2678.968f, 268.3763f, 62.3124f;
						case 2:
							return 1904.455f, 498.3759f, 122.2237f;
						case 3:
							return 2832.23f, 927.7681f, 47.4658f;
						default:
							break;
					}
					return 0f, 0f, 0f;
				}

void func_664(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_1050(vParam0))
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
			if (func_1051(vVar2, vParam0, 2f, 1))
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

int func_665(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_1050(vParam0))
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
		if (func_1052(vParam0))
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
	func_1053(iVar0, bParam8);
	return iVar0;
}

float func_666(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
		case 3:
			return 150f;
		default:
			break;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 3)
			{
				return 140f;
			}
			else
			{
				return 130f;
			}
			break;
		case 11:
			return 140f;
		default:
			return 175f;
	}
	return 175f;
}

bool func_667(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_1050(vParam0))
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

void func_668(int iParam0)
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

bool func_669(var uParam0)
{
	if (-1829635046 == func_1054(81053684))
	{
		if (func_1055(uParam0))
		{
			return true;
		}
	}
	else if (func_1056(-525676072, uParam0))
	{
		if (func_1055(uParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_670()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

void func_671(int iParam0, int iParam1)
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

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = func_1057();
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
	iVar4 = func_819(BUILTIN::CEIL(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_819(BUILTIN::CEIL(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_1058())
		{
			func_1059(0);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_1060())
		{
			func_1059(1000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_1061())
		{
			func_1059(2000);
			AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_1062())
	{
		func_1059(3000);
		AUDIO::PLAY_SOUND_FRONTEND("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_567(func_759(joaat("FAME")), iVar1);
	iVar10 = func_1057();
	AUDIO::_0x078F77FD1A43EAB3(iVar0, iVar10);
}

bool func_672(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

int func_673(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (Global_40.f_9536[iVar0] == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_674(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 34);
}

int func_675()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (Global_40.f_9536[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_676(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_677(int iParam0, int iParam1)
{
	return (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1) > 0;
}

void func_678(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1063(iParam0);
				func_1064(iParam0, 0);
				break;
		}
		func_1065(iParam0, iParam1);
		if (func_1066(iParam1, &iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
			{
				if (func_1067(Global_1360165[iParam0 /*1157*/], iVar0))
				{
					PED::_0xA2F8B3B5FEDFC100(Global_1360165[iParam0 /*1157*/], iVar0);
				}
				PED::_SET_PED_BODY_COMPONENT(Global_1360165[iParam0 /*1157*/], PED::_GET_PED_META_OUTFIT_HASH(Global_1360165[iParam0 /*1157*/]));
				PED::_UPDATE_PED_VARIATION(Global_1360165[iParam0 /*1157*/], false, true, true, true, false);
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
			case 4096:
			case 16384:
			case 32768:
			case 65536:
			case 131072:
			case 262144:
			case 524288:
			case 1048576:
			case 2097152:
			case 134217728:
			case 1073741824:
				func_1063(iParam0);
				func_1064(iParam0, 1);
				break;
		}
		func_1068(iParam0, iParam1);
		func_1069(iParam0, Global_1360165[iParam0 /*1157*/], 1);
	}
}

bool func_679(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

void func_680(int iParam0)
{
	if (!func_365(iParam0))
	{
		return;
	}
	func_1070(iParam0, 0);
}

int func_681(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1071(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

void func_682(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_286(iVar1, 0))
		{
			func_1072(iVar1, 0, bParam0);
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

bool func_683(int iParam0)
{
	if (((((((((((((((((func_297(iParam0, -2017733358) || func_297(iParam0, -1369131378)) || func_297(iParam0, -687467589)) || func_297(iParam0, 412399755)) || func_297(iParam0, 709057512)) || func_297(iParam0, -1478961327)) || func_297(iParam0, -1238404098)) || func_297(iParam0, 1160548794)) || iParam0 == joaat("PROVISION_BOAR_RARE_TUSK")) || iParam0 == joaat("PROVISION_BRA_SHIELD")) || iParam0 == joaat("PROVISION_CATHERINES_NECKLACE")) || iParam0 == joaat("PROVISION_DB_SKULL_STATUE")) || iParam0 == joaat("PROVISION_DEPUTY_STAR")) || iParam0 == joaat("PROVISION_LOANSHARK_SKINS")) || iParam0 == joaat("PROVISION_NATIVE_AMERICAN_RING")) || iParam0 == joaat("PROVISION_RC_ROCK_STATUE")) || iParam0 == joaat("PROVISION_SCRAP_METAL")) || iParam0 == joaat("PROVISION_RCKITTY_EMERALD"))
	{
		return true;
	}
	if (func_297(iParam0, 1291597743) && (!func_297(iParam0, -121341956) || func_297(iParam0, 606799272)))
	{
		return true;
	}
	return false;
}

void func_684(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1073(iParam0))
	{
		return;
	}
	iVar0 = func_555(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1074(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1075(0))
	{
		func_1076(iParam0, 1);
		if (func_693() == 1160113249)
		{
			func_1076(func_1075(-2125499975), 0);
		}
		else
		{
			func_1076(func_1075(1160113249), 0);
		}
	}
	func_1077();
	if (func_1078(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_738(0), iParam0, 0);
	}
	func_1079(iParam0, bParam3);
	if (bParam2)
	{
		func_1080(0, 0);
	}
}

bool func_685(int iParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (!func_1081(iParam0, 856287005, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1082() };
	Var10.f_4 = uVar9;
	if (func_993(iParam0, &uVar15, &Var10, 1, 752097756, 0))
	{
		if (bParam1)
		{
			if (!func_1083(iParam0, 1))
			{
			}
		}
		if (func_1084(iParam0))
		{
			func_685(func_1085(iParam0), 1);
		}
		func_1086();
		return true;
	}
	return false;
}

int func_686(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_687(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1087(iParam0);
	if (bParam3)
	{
		func_1088(iParam0, sParam1, iParam2);
	}
}

void func_688(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_962(iParam0, sParam4, iParam5);
	}
	func_963(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_689(bool bParam0, bool bParam1)
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	if (func_1089(8) && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	Global_26796.f_627.f_121 = { Global_1946804.f_2657 };
	Global_26796.f_627 = func_619(Global_40.f_7729);
	if (bParam0)
	{
		func_682(1);
	}
	func_1090(8);
}

void func_690(int iParam0, int* iParam1)
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
		if (func_533(iVar31))
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

struct<4> func_691(bool bParam0)
{
	return func_946(joaat("CHARACTER"), func_1091(), -1591664384, bParam0);
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (func_2() == -1)
	{
		func_1092(352481484);
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
		if (func_555(iVar2) != -999503751)
		{
			func_1093(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1094(iVar2, 0))
		{
			func_1079(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

int func_693()
{
	return Global_1946804.f_1;
}

void func_694(int iParam0, int iParam1)
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
				if (func_942((*iParam1)[iVar0]))
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

int func_695(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_2() != -1)
	{
		return 0;
	}
	func_1095(bParam1);
	if (bParam2)
	{
		func_1096(1);
	}
	if (bParam0)
	{
		func_1097(8);
	}
	return 1;
}

void func_696(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_697(int iParam0, int iParam1, bool bParam2)
{
	if (!func_294(iParam0))
	{
		return;
	}
	if (func_616(iParam0))
	{
		if (func_617(iParam0))
		{
			func_623(iParam0, 2);
			func_623(iParam0, 4);
			if (bParam2)
			{
				if (!func_14(0, 0, 1))
				{
					func_510(1, 4);
				}
			}
		}
	}
}

struct<5> func_698(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;

	Var0 = { func_691(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_552(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_946(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_1021(bParam1) };
			if (bParam2 && func_1098(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_944(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_944(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_945(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
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
			Var0 = { func_1099(bParam1) };
			switch (func_555(iParam0))
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
			if (func_1100(iParam0, -1823706425))
			{
				Var0 = { func_946(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1100(iParam0, -1483207246))
			{
				Var0 = { func_946(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_1101(Var0, &Var27, bParam1, 0))
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

int func_699(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1102(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_700(int iParam0, int iParam1)
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

bool func_701(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_1103();
	if (iParam2 == 39)
	{
		Var0 = { func_698(iParam0, 1, 0) };
		iParam2 = func_700(func_699(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_297(iParam0, 866047851) && func_1104(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_703(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		func_1105(func_1102(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1106(iParam2);
	func_1107(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1108(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_1108(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1109(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = func_1110(iParam0, iParam2, iParam1, func_2() != -1);
	if (bParam4)
	{
		func_1111(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		func_1111(&(Global_1946804.f_1378), 1, 0);
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
				func_1112(func_1102(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_702(bool bParam0, bool bParam1, bool bParam2)
{
	func_1113(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

bool func_703(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_704()
{
	func_1114(&(Global_1946804.f_2776));
	func_1115(32768);
	func_1112(1108822547, 8, 6);
}

int func_705(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_700(iParam0, 1);
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

void func_706(int iParam0)
{
	struct<4> Var0;

	if (func_1116(iParam0, 4096))
	{
		Global_1946804.f_858++;
	}
	if (Global_1946804.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1117(Var0);
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1117(Var0);
}

bool func_708(int iParam0)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_710(iParam0, 16777216);
}

int func_709(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_710(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40615[iParam0 /*11*/] && iParam1) != 0;
}

int func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_327(iParam0))
	{
		return 0;
	}
	iVar0 = func_1118(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_1119(func_712(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_712(int iParam0)
{
	if (!func_327(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40615[iParam0 /*11*/].f_1;
}

void func_713(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_1 = iParam1;
}

void func_714(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_715(int iParam0)
{
	if (!func_327(iParam0))
	{
		return;
	}
	if (func_1120(iParam0) && func_1121(iParam0))
	{
		func_1123(func_1122(iParam0));
	}
	else
	{
		func_1124(func_1122(iParam0));
	}
}

void func_716(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (!func_1125(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/].f_5 = (Global_1058888.f_42266[iParam0 /*12*/].f_5 || iParam1);
}

void func_717(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 - (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/].f_5 = (Global_1058888.f_42266[iParam0 /*12*/].f_5 - (Global_1058888.f_42266[iParam0 /*12*/].f_5 && iParam1));
}

void func_718(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_365(iParam0))
	{
		return;
	}
	if (func_1125(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 1);
	}
	else
	{
		func_717(iParam0, 1);
	}
	func_1126(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1127(iVar0) == iParam0)
		{
			func_721(iVar0, 0);
		}
		iVar0++;
	}
}

void func_719(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888.f_42339[iParam0] = (Global_1058888.f_42339[iParam0] - (Global_1058888.f_42339[iParam0] && iParam1));
}

void func_720(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (!func_1128(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888.f_42339[iParam0] = (Global_1058888.f_42339[iParam0] || iParam1);
}

void func_721(int iParam0, bool bParam1)
{
	if (!func_367(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_720(iParam0, 1);
	}
	else
	{
		if (func_1129(iParam0))
		{
			return;
		}
		func_719(iParam0, 1);
	}
	func_1130(iParam0, bParam1);
}

int func_722(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1131(iParam0);
	if (bParam1)
	{
		switch (iVar0)
		{
			case joaat("MISSION_COOP_CHAR_CREATOR"):
			default:
				return 0;
				return -496459706;
			case -765810527:
				return -1052738286;
			case -736232052:
				return -2042919232;
			case 34802860:
				return 173210050;
				switch (iVar0)
				{
					case joaat("MISSION_COOP_CHAR_CREATOR"):
					default:
						return 0;
						return -496459706;
					case -765810527:
						return -1052738286;
					case -736232052:
						return -2042919232;
					case 34802860:
						return 173210050;
					case joaat("MISSION_COOP_GVO_INTRO_1"):
						return -1758386749;
					case joaat("MISSION_COOP_GVO_INTRO_2"):
						return -1333110667;
					case joaat("MISSION_COOP_GVO_INTRO_3"):
						return -1008926950;
					case joaat("MISSION_COOP_GVO_OUTLAW_1"):
						return 1844852257;
					case joaat("MISSION_COOP_GVO_OUTLAW_2"):
						return -1130540186;
					case joaat("MISSION_COOP_GVO_OUTLAW_3"):
						return -883953461;
					case joaat("MISSION_COOP_GVO_OUTLAW_4"):
						return -1728607205;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_1"):
						return 716380931;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_2"):
						return 1090144145;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_3"):
						return -1237667308;
					case joaat("MISSION_COOP_GVO_GUNSLINGER_4"):
						return -1411080856;
					case joaat("MISSION_COOP_GVO_REVENGE_1"):
						return -1308143969;
				}
		}
	}
}

bool func_723(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

void func_724()
{
	struct<4> Var0;

	if (func_1132() >= 1 && func_1132() < 6)
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	switch (func_1132())
	{
		case 0:
			if (func_1133())
			{
				if (!func_1134(&(Global_0.f_9)))
				{
					func_1135(&(Global_0.f_9), 0);
				}
			}
			else if (func_1134(&(Global_0.f_9)))
			{
				func_1136(&(Global_0.f_9));
			}
			if (func_1134(&(Global_0.f_9)))
			{
				if (func_1137(&(Global_0.f_9)) >= 10f)
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					func_1138(1);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PLAYER::FORCE_CLEANUP(2);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				HUD::_HIDE_HUD_COMPONENT(-1679307491);
				Global_0.f_12 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
				}
				else
				{
					Global_0.f_12 = PED::_GET_LAST_MOUNT(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Global_0.f_12, true, false)) > 50f)
						{
							Global_0.f_12 = 0;
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
						}
					}
				}
				Global_0.f_13 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					PED::DETACH_CARRIABLE_ENTITY(Global_0.f_13, false, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, true);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 797.0328f, 1780.719f, 279.8931f, 6.2684f, true, false, true);
				func_510(0, -1);
				Global_0.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@fin3@arthurs_grave", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Global_0.f_8);
				UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE"), true);
				func_1138(2);
			}
			break;
		case 2:
			if (!func_5(&Global_0, 3) || func_1137(&(Global_0.f_9)) >= 15f)
			{
				func_1138(3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_0.f_8, true, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Global_0.f_8, "JOHN", &Var0, false, 0, 2))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1138(4);
				}
				else
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(Global_0.f_8, &Var0, &(Var0.f_9), 2);
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Var0, Var0.f_3.f_2, true, true, true, false);
					func_1138(4);
				}
			}
			break;
		case 4:
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX())) || func_1137(&(Global_0.f_9)) >= 15f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_12, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_13, false);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_0.f_8, "JOHN", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(Global_0.f_8);
				func_1138(5);
			}
			break;
		case 5:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Global_0.f_8, false))
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				if (func_641(932909855))
				{
					func_1139(joaat("JOURNAL_ENTRY_100_PERCENT_HIGH"), 0);
				}
				else
				{
					func_1139(joaat("JOURNAL_ENTRY_100_PERCENT_LOW"), 0);
				}
				func_1140(0);
				func_1138(6);
			}
			break;
		case 6:
			break;
	}
}

bool func_725()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!func_70())
		{
			return false;
		}
		else if (!func_85(0))
		{
			return false;
		}
		else if (func_1141())
		{
			return false;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return false;
	}
	if (func_6(32898))
	{
		return false;
	}
	if (func_20(Global_1572864.f_8))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (func_5(&Global_0, 32))
	{
		if (func_5(&Global_0, 2))
		{
			return true;
		}
		if (func_5(&Global_0, 64))
		{
			return true;
		}
	}
	if (func_14(0, 1, 1))
	{
		return false;
	}
	if (func_416(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return false;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (UISTICKYFEED::_0xC5C395C60B542A3C(1))
	{
		return false;
	}
	if (func_1142() != 2 && func_1142() != 3)
	{
		return false;
	}
	if (func_1143())
	{
		return false;
	}
	return true;
}

void func_726(var uParam0)
{
	uParam0->f_2 = 0;
}

float func_727(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_728()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_70())
	{
		return false;
	}
	if (!func_226(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_226(Global_1835011[2 /*74*/].f_1, 1) && func_226(Global_1347702[120 /*49*/].f_15, 1)) && !func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_226(Global_1835011[37 /*74*/].f_1, 1) && !func_226(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_226(Global_1835011[57 /*74*/].f_1, 1) && !func_226(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_226(Global_1835011[26 /*74*/].f_1, 1) && !func_226(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_226(Global_1835011[62 /*74*/].f_1, 1) && func_226(Global_1835011[63 /*74*/].f_1, 1)) && !func_226(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_226(Global_1835011[75 /*74*/].f_1, 1) && !func_226(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_226(Global_1835011[76 /*74*/].f_1, 1) && !func_226(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_226(Global_1835011[40 /*74*/].f_1, 1) && func_226(Global_1835011[41 /*74*/].f_1, 1)) && !func_226(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_226(Global_1835011[62 /*74*/].f_1, 1) && func_226(Global_1835011[63 /*74*/].f_1, 1)) && !func_226(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_226(Global_1835011[65 /*74*/].f_1, 1) && func_226(Global_1835011[66 /*74*/].f_1, 1)) && !func_226(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

void func_729(int iParam0, bool bParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_6(32768))
	{
		return;
	}
	if (!func_6(32768))
	{
		func_1144(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (func_6(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_72();
	}
}

void func_730(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

int func_731()
{
	if (!func_5(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			func_730(&Global_0, 1);
			return 0;
		}
		if (!func_70())
		{
			func_730(&Global_0, 1);
			return 0;
		}
		if (func_20(func_798(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_88(Global_1935630, 2048) || func_6(38))
		{
			return 0;
		}
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		{
			return 0;
		}
		if (SAVE::SAVEGAME_IS_SAVE_PENDING())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (func_5(&Global_0, 16))
		{
			func_730(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_1145(0);
	}
	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
	{
		return 0;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return 0;
	}
	func_729(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 };
	Global_0.f_14 = 0;
	func_370(&Global_0, 4);
	func_730(&Global_0, 2);
	func_730(&Global_0, 32);
	func_730(&Global_0, 64);
	return 1;
}

void func_732()
{
	if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
	{
		Global_0.f_1 = -1;
		return;
	}
	func_730(&Global_0, 8);
	Global_0.f_1 = -1;
}

void func_733(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_734(int iParam0)
{
	return func_412(iParam0) == 2;
}

bool func_735(int iParam0)
{
	if (Global_1415419.f_19[iParam0 /*12*/] != 0)
	{
		return true;
	}
	return false;
}

bool func_736(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_737(int iParam0, int iParam1, int iParam2)
{
	if (!func_736(iParam0))
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

int func_738(bool bParam0)
{
	if (func_2() == -1)
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

int func_739(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
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
	Var1.f_12 = iParam2;
	Var1.f_14 = iParam3;
	Var1.f_13 = iParam4;
	func_1146(uParam1, iParam0, Var1);
	return 1;
}

bool func_740(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1225315[iParam1 /*2*/] && iParam0) != 0;
}

bool func_741(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1225288.f_2), iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1225288.f_23[iVar0 /*3*/]), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_742(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1140157[iParam0 /*19*/].f_1.f_1;
}

bool func_743(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

bool func_744()
{
	return !Global_1572887.f_8;
}

bool func_745()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_746()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_5;
}

bool func_747()
{
	if (Global_1572887.f_252.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887.f_252.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_748(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_749(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_753(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_754(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(2, func_754(iParam0)))
			{
				UILOG::_UILOG_REMOVE_ENTRY(2, func_754(iParam0));
			}
		}
	}
	func_864(iParam0, 4);
	func_864(iParam0, 8);
	func_864(iParam0, 16);
}

void func_750(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_18(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			func_752(iVar0);
			if (func_19(Global_1347702[iVar0 /*49*/].f_12, 4))
			{
				return;
			}
		}
		iVar0++;
	}
}

bool func_751(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_18(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			if (func_19(Global_1347702[iVar0 /*49*/].f_12, 4))
			{
				if (func_226(Global_1347702[iVar0 /*49*/].f_15, 1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_752(int iParam0)
{
	if (!func_18(iParam0))
	{
		return;
	}
	func_248(iParam0, 1, 1);
	func_247(iParam0, 1, 1, 1, 32);
	func_749(iParam0, 1);
	func_780(Global_1347702[iParam0 /*49*/].f_15, 0);
	func_1147(Global_1347702[iParam0 /*49*/].f_15, -15);
	func_756(Global_1347702[iParam0 /*49*/].f_15, 0);
	func_1148(Global_1347702[iParam0 /*49*/].f_15, 0);
	func_1149(iParam0, 0f);
	func_1150(iParam0, 0f);
	Global_40.f_490.f_402[iParam0] = 0;
}

int func_753(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_754(int iParam0)
{
	var uVar0;

	uVar0 = Global_1347702[iParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&uVar0);
}

void func_755(int iParam0)
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
	iVar10 = func_805(iParam0, 0);
	iVar11 = iVar10;
	iVar12 = iVar10;
	if (iParam0 == 82 || iParam0 == 83)
	{
		iVar12 = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	StringConCat(&cVar0, "_DESC", 64);
	iVar13 = func_753(iParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar13, func_754(iParam0), Global_1347702[iParam0 /*49*/].f_24, iVar12, MISC::GET_HASH_KEY(&cVar0), Global_1347702[iParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar13, func_754(iParam0), iVar11, MISC::GET_HASH_KEY("toast_log_blips"));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar9))
	{
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar13, func_754(iParam0), MISC::GET_HASH_KEY(sVar8), MISC::GET_HASH_KEY(sVar9));
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar13, func_754(iParam0)))
	{
		func_470(iParam0, 4);
	}
}

void func_756(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1151(iParam0, iParam1);
}

int func_757(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_758(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

struct<2> func_759(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

bool func_760(int iParam0)
{
	return iParam0 != 0;
}

int func_761(int iParam0)
{
	if (!func_406(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_762(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_1152(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40501.f_1[iVar0 /*2*/].f_1;
}

int func_763(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_764(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_765(bool bParam0, bool bParam1, bool bParam2)
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

bool func_766(var uParam0)
{
	if (func_417(&(uParam0->f_29), 62))
	{
		switch (func_1153())
		{
			case 1:
				if (!func_417(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_417(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_417(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_417(&(uParam0->f_29), 32))
				{
					if (func_417(&(uParam0->f_29), 2))
					{
						if (func_64(func_72()) < 5)
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

bool func_767(int iParam0)
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

bool func_768(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_769(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return -2578.509f, 389.3037f, 148.3825f;
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_770()
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

bool func_771()
{
	return Global_1894899 & 2 != 0;
}

int func_772(int iParam0)
{
	if (!func_20(iParam0))
	{
		return 0;
	}
	return func_1154(func_56(iParam0));
}

bool func_773(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_435(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_774(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_1155(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_775(int iParam0)
{
	int iVar0;

	iVar0 = -1337945352;
	if (!func_18(iParam0))
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

void func_776(int iParam0)
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

int func_777(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_778(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_498[iParam0 /*2*/].f_1;
}

int func_779(int iParam0)
{
	if (!func_20(iParam0))
	{
		return -1;
	}
	return func_1156(func_56(iParam0));
}

void func_780(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1157(iParam0, iParam1);
}

void func_781(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_1154(iParam0);
	*uParam1 = func_57(iParam0);
	*uParam2 = func_1156(iParam0);
}

bool func_782(int iParam0)
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
		iVar0 = func_762(iParam0);
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

void func_783(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_784(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_664(vVar0, 0);
}

void func_785(var uParam0)
{
	*uParam0 = 0;
}

void func_786(int iParam0)
{
	if (func_1158(179) || func_1158(180))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			if (Global_1347702[iParam0 /*49*/].f_37 == Global_1905944.f_5698)
			{
				func_453(1);
			}
		}
	}
	if (func_1159(179))
	{
		func_1160(179);
	}
	if (func_1159(180))
	{
		func_1160(180);
	}
}

bool func_787(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_416(iParam0, bParam1, bParam2, bParam3))
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

void func_788(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_789(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_18(iParam0))
	{
		return;
	}
	func_1161(&(Global_1347702[iParam0 /*49*/].f_14), iParam1);
	func_1161(&(Global_1347702[iParam0 /*49*/].f_14), 2);
	func_1162(&(Global_1347702[iParam0 /*49*/].f_12), 16384);
	func_461(&(Global_1347702[iParam0 /*49*/].f_13), 32);
	if (iParam1 != 16384)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_18(Global_40.f_450[iVar0]))
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

Vector3 func_790(int iParam0)
{
	vector3 vVar0;

	if (!func_18(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_1163(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_791(int iParam0, bool bParam1, vector3 vParam2)
{
	if (!func_18(iParam0))
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
	func_786(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[iParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_804(iParam0, func_1164(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_804(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_804(iParam0, vParam2, 0, 0);
	}
	MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, 724623647);
	func_733(&(Global_1347702[iParam0 /*49*/].f_13), 4096);
}

bool func_792(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE");
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = joaat("TSTAG_NO_TAGS");
	*iParam1 = -1;
	return false;
}

bool func_793(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_523(iParam0))
	{
		return false;
	}
	if (!func_1165(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_1166(iParam0, iParam1);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_794(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_795(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_772(iParam0))
	{
		case 1:
			iVar0 = func_17(iParam0);
			return func_1167(iVar0);
		case 8:
			iVar1 = func_17(iParam0);
			if (func_19(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_1168(iVar1);
			}
			break;
	}
	return -1;
}

void func_796(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_2() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_1169(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_1170();
		Global_1898077.f_9 = func_1171(Global_1894899.f_2);
		func_1172(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_797()
{
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_226(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_226(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_226(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_226(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_226(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_226(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_798(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_799(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1173(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_888(&Global_1935630, 4194304);
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

void func_800(int iParam0, bool bParam1)
{
	if (func_2() != -1)
	{
		return;
	}
	if (func_798(0) != iParam0)
	{
		return;
	}
	if (func_1174(iParam0))
	{
		if (bParam1)
		{
			func_1175(-525676072);
		}
		else
		{
			func_1176(-525676072);
		}
	}
}

int func_801(int iParam0)
{
	return func_1178(func_1177(iParam0));
}

bool func_802(int iParam0)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_48 == -1)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_47 == 0)
	{
		return true;
	}
	iVar0 = func_1179(iParam0);
	return func_80(iVar0, 1);
}

bool func_803(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 81);
}

void func_804(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3[24];
	char* sVar6;

	if (!func_18(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && func_14(0, 0, 1))
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
	if (func_6(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_775(iParam0);
	if (!bParam5 && func_1180(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_1164(iParam0), Global_1347702[iParam0 /*49*/].f_18);
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
		func_885(8);
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
	func_1181(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_2() == -1)
	{
		func_776(iParam0);
		iVar0 = func_432(Global_40.f_4283);
		if (func_327(iVar0) && func_433(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_434(iVar0);
		}
		if (func_1155(iParam0, bVar1, iVar0))
		{
			func_436(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
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
		func_733(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_1180(iParam0) || func_19(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_19(Global_1347702[iParam0 /*49*/].f_12, 512)) || func_460(Global_1347702[iParam0 /*49*/].f_13, 2048))
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
			func_733(&(Global_1347702[iParam0 /*49*/].f_13), 32768);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_1182(iParam0))
		{
			if (iParam0 == 97)
			{
				func_293(185, 0);
			}
			else
			{
				func_293(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			StringConCat(&cVar3, "_FIRST", 24);
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_441(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_470(iParam0, 2);
	}
}

int func_805(int iParam0, bool bParam1)
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
		if (bParam1 || func_226(Global_1347702[iParam0 /*49*/].f_15, 1))
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
		if (bParam1 || func_226(Global_1347702[iParam0 /*49*/].f_15, 1))
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

var func_806(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
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

var func_807(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_808(int iParam0)
{
	if (func_772(iParam0) == 1)
	{
		return func_17(iParam0);
	}
	return -1;
}

int func_809(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1183())
	{
		iVar2 = func_1183();
	}
	iVar5 = func_1184(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_56(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_56(iVar6) == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_56(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_56(iVar6) == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return func_1185(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_810(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_6 = iParam1;
}

int func_811(bool bParam0, int iParam1)
{
	int iVar0;

	if (!bParam0 && func_641(373691918))
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
	func_347(bParam0);
	return 1;
}

void func_812()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;

	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_250(iVar17))
		{
			iVar18 = func_446(iVar17);
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
	func_1136(&(Global_1359489.f_55));
	if (func_883(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		func_1186(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

void func_813(int iParam0)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1188(iParam0, (func_1187(iParam0) + BUILTIN::SHIFT_LEFT(1, 16)));
}

bool func_814()
{
	return func_1189() > 0;
}

void func_815(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			func_1139(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			func_1139(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			func_1140(1);
			break;
		case 16:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			func_1139(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (func_1190(146))
			{
				func_1139(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			func_1140(1);
			break;
		case 76:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			func_1139(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			func_1140(0);
			break;
		case 15:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			func_1139(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			func_1139(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			break;
		case 27:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			func_1139(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			func_1139(joaat("JOURNAL_GT_MOB_3"), iParam1);
			break;
		case 31:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			break;
		case 4:
			func_1139(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			func_1140(0);
			break;
		case 6:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			break;
		case 25:
			func_1139(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			break;
		case 24:
			if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			break;
		case 48:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (func_1192(51))
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			break;
		case 49:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			break;
		case 58:
			func_1139(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			break;
		case 50:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			break;
		case 52:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			break;
		case 32:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			break;
		case 47:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			break;
		case 69:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (func_226(Global_1347702[9 /*49*/].f_15, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			break;
		case 70:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			break;
		case 71:
			if (func_1191() == 0)
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			break;
		case 37:
			func_1139(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			break;
		case 9:
			if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			break;
		case 13:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			break;
		case 53:
			func_1139(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			break;
		case 54:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			break;
		case 56:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			break;
		case 57:
			func_1139(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			break;
		case 22:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			break;
		case 12:
			func_1139(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			break;
		case 0:
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			break;
		case 1:
			func_1140(1);
			break;
		case 3:
			if (func_840())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					func_1139(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				func_1139(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
			break;
		default:
			break;
	}
}

void func_816(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			func_1139(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (func_226(Global_1835011[69 /*74*/].f_1, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (func_1190(26))
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			func_1139(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (func_1190(54))
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (func_1190(39))
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_397(Global_1835011[33 /*74*/].f_1) == 1)
				{
					func_1139(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (func_1190(43))
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (func_1190(41))
			{
				func_1139(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (func_1190(49))
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			func_1139(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (func_226(Global_1347702[23 /*49*/].f_15, 1))
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			func_1139(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			func_1139(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			func_1139(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			func_1140(1);
			break;
		case 67:
			func_1139(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			func_1139(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			func_1140(0);
			break;
		case 70:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			func_1139(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			func_1139(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			func_1139(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (func_1190(78))
			{
				func_1139(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (func_1190(79))
			{
				func_1139(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			func_1139(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (func_1190(101))
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			func_1139(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (func_1190(103))
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (func_1190(104))
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			func_1139(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (func_1190(109))
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (func_1190(110))
			{
				if (Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					func_1139(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			func_1139(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (func_1190(117))
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (func_1190(118))
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (func_1190(121))
			{
				func_1139(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (func_1190(122))
			{
				func_1139(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			func_1139(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			func_1139(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			func_1139(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			func_1139(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			func_1139(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					func_1139(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					func_1139(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				func_1139(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (func_1190(136))
			{
				func_1139(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				func_1139(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					func_1139(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					func_1139(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				func_1139(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				func_1139(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (func_1190(147))
			{
				func_1139(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (func_1190(148))
			{
				func_1139(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_1139(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (func_1190(149))
			{
				func_1139(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				func_1139(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

int func_817(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = func_772(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_808(iParam0);
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
					if (func_397(Global_1835011[9 /*74*/].f_1) == 0)
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
			iVar2 = func_17(iParam0);
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
			iVar3 = func_17(iParam0);
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

int func_818(int iParam0, int iParam1)
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

int func_819(int iParam0, int iParam1, int iParam2)
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

void func_820(bool bParam0)
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

void func_821(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_1193(iParam0, iParam1, bParam2);
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

int func_822(int iParam0, int iParam1)
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

bool func_823(int iParam0)
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

void func_824(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if ((Global_36616 && func_1194(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_1195(iParam0);
	iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_1196(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_1197(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1196(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_826()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 1);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(13);
		Global_1898441[iVar0 /*38*/] = 13;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_WIN2_COM", 24);
	}
}

void func_827()
{
	if (func_2() != -1)
	{
		return;
	}
	func_1199();
	func_1200();
	func_1201();
	func_1202();
	func_1203();
	func_1204();
	func_1205();
}

void func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_299(iParam0, 1, 1, -142743235, 1);
	if (func_1206(iParam0))
	{
		func_1072(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_700(func_1207(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1208(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_693() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1209(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1209(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_1210(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_1210(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_1210(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_1210(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_1210(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_1210(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_1210(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_1210(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_1210(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1211(iVar8, iVar0))
				{
					func_1212(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1211(iVar8, iVar0))
		{
			func_1212(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
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
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_829()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1211(iVar5, iVar0);
		if (iVar1 == Global_1946804.f_57[iVar5 /*11*/] || iVar1 == 0)
		{
			if (func_693() == -2125499975 || func_693() == -449205311)
			{
				vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
				vVar2.f_1 = 1530758430;
				func_1212(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = joaat("BASE");
				func_1212(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = joaat("CLOTHING_SP_SHIRT_BOUNTY01_VARIATION_01");
	vVar2.f_1 = 1530758430;
	if (Global_1946804.f_57[iVar5 /*11*/] == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] || 0 == Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/])
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar5 /*3*/] = { vVar2 };
	}
}

void func_830()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 2);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(14);
		Global_1898441[iVar0 /*38*/] = 14;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MUD1_COM", 24);
	}
}

char* func_831(int iParam0, bool bParam1)
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
			if ((func_226(Global_1835011[59 /*74*/].f_1, 1) || func_226(Global_1347702[1 /*49*/].f_15, 1)) || func_467(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_883(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
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

void func_832(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_700(iParam0, 1);
	func_1213(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	func_1213(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			func_325(17, iParam0, 0, 0, 0);
		}
	}
	if (func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1213(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
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
			func_1213(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_833()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 5);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(17);
		Global_1898441[iVar0 /*38*/] = 17;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA2_COM", 24);
	}
}

void func_834()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 6);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(18);
		Global_1898441[iVar0 /*38*/] = 18;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BRA3_COM", 24);
	}
}

int func_835(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;

	if (iParam3 == -358215195)
	{
		Var0 = { func_698(iParam1, 1, 0) };
		iParam3 = func_699(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1214(iParam3);
	return func_362(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_836(int iParam0, int iParam1)
{
	if (!func_1215(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1216(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1217(&(Global_40.f_9910[iParam1 /*6*/]), 4);
}

void func_837(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1215(iParam0))
	{
		return;
	}
	if (!func_71(iParam1))
	{
		return;
	}
	if (func_80(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1216(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_836(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1218(&(Global_40.f_9910[iVar0 /*6*/]), 2);
	}
	Global_40.f_9910[iVar0 /*6*/].f_4 = iParam1;
	if (bParam2)
	{
		if (!func_14(0, 0, 1))
		{
			func_510(0, 17);
		}
	}
}

void func_838()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 7);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(19);
		Global_1898441[iVar0 /*38*/] = 19;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MOB5_COM", 24);
	}
}

void func_839()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 8);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(20);
		Global_1898441[iVar0 /*38*/] = 20;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_SAI1_COM", 24);
	}
}

bool func_840()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_841()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 9);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(21);
		Global_1898441[iVar0 /*38*/] = 21;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA1_COM", 24);
	}
}

void func_842()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 10);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(22);
		Global_1898441[iVar0 /*38*/] = 22;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_GUA3_COM", 24);
	}
}

void func_843()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 12);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(24);
		Global_1898441[iVar0 /*38*/] = 24;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ODR5_COM", 24);
	}
}

void func_844()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 13);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(25);
		Global_1898441[iVar0 /*38*/] = 25;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN1_COM", 24);
	}
}

void func_845()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 14);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(27);
		Global_1898441[iVar0 /*38*/] = 27;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_MAR51_COM", 24);
	}
}

void func_846()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 15);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(28);
		Global_1898441[iVar0 /*38*/] = 28;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_847(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_848(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

void func_849(int iParam0)
{
	if (func_6(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_1005(MISC::VAR_STRING(2, "MISSION_COMPLETE_BANK_FEED", MISC::ABSI(iParam0)), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514.f_14 = 1;
		Global_1879514.f_15 = 0;
	}
	else
	{
		func_1005(MISC::VAR_STRING(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", MISC::GET_HASH_KEY("ITEMTYPE_BANK_DEBT"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514.f_14 = 0;
		Global_1879514.f_15 = 1;
	}
}

void func_850()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 16);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(29);
		Global_1898441[iVar0 /*38*/] = 29;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_BEE22_COM", 24);
	}
}

void func_851()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 17);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(26);
		Global_1898441[iVar0 /*38*/] = 26;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_FIN2_COM", 24);
	}
}

void func_852()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 11);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(23);
		Global_1898441[iVar0 /*38*/] = 23;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOC_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOC_COM", 24);
	}
}

void func_853()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 3);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(15);
		Global_1898441[iVar0 /*38*/] = 15;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DOW3_COM", 24);
	}
}

void func_854()
{
	int iVar0;

	SOCIALCLUBFEED::_SC_FEED_SUBMIT_PRESET_MESSAGE(2, 4);
	if (MISC::IS_ORBIS_VERSION())
	{
		iVar0 = func_1198(16);
		Global_1898441[iVar0 /*38*/] = 16;
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_18), "AF_CAP1", 24);
		StringCopy(&(Global_1898441[iVar0 /*38*/].f_21), "AF_DUT1_COM", 24);
	}
}

void func_855()
{
	if (func_1219() > 1)
	{
		func_1220();
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_BAND_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_BAND_ROOT"), true);
			func_293(444, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HERB_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HERB_ROOT"), true);
			func_293(447, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HORSE_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HORSE_ROOT"), true);
			func_293(448, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SHOT_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SHOT_ROOT"), true);
			func_293(450, 1);
		}
		if (!UNLOCK::UNLOCK_IS_VISIBLE(joaat("SP_CHAL_WEAP_ROOT")))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_CHAL_WEAP_ROOT"), true);
			func_293(452, 1);
		}
	}
}

bool func_856(int iParam0)
{
	return func_870(iParam0, 4, 1);
}

void func_857(int iParam0)
{
	struct<2> Var0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_759(joaat("BANK_DEBT_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_858(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_6(32768))
	{
		return;
	}
	if (!func_20(iParam0))
	{
		return;
	}
	func_888(&Global_1935630, 8192);
	iVar2 = 1;
	switch (func_772(iParam0))
	{
		case 1:
			func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS")), 1);
			iVar0 = func_17(iParam0);
			func_567(func_759(joaat("MISSIONS_PROGRESSED")), 1);
			switch (func_1167(iVar0))
			{
				case 0:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
					break;
				case 1:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
					break;
				case 2:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
					break;
				case 3:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
					break;
				case 4:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
					break;
				case 5:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
					break;
				case 6:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
					break;
				case 7:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
					break;
				case 8:
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
			}
			if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8))))
			{
				func_567(func_568(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
			}
			break;
		case 8:
			iVar1 = func_17(iParam0);
			if (func_19(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				func_567(func_759(joaat("MISSIONS_PROGRESSED")), 1);
			}
			if (func_19(Global_1347702[iVar1 /*49*/].f_12, 4) || iVar1 == 59)
			{
				if (func_19(Global_1347702[iVar1 /*49*/].f_12, 1))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS")), 1);
				}
				else
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC")), 1);
				}
			}
			if (func_19(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				switch (func_1168(iVar1))
				{
					case 0:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP1")), 1);
						break;
					case 1:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP2")), 1);
						break;
					case 2:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP3")), 1);
						break;
					case 3:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP4")), 1);
						break;
					case 4:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP5")), 1);
						break;
					case 5:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP6")), 1);
						break;
					case 6:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP7")), 1);
						break;
					case 7:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP8")), 1);
						break;
					case 8:
						func_567(func_568(joaat("COMPLETED"), joaat("MISSIONS_CHP9")), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && MISSIONDATA::MISSIONDATA_IS_REQUIRED_STORY_MISSION(MISC::GET_HASH_KEY(&(Global_1347702[iVar1 /*49*/].f_3))))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")), 1);
				}
			}
			else if (func_19(Global_1347702[iVar1 /*49*/].f_12, 4))
			{
				if (func_19(Global_1347702[iVar1 /*49*/].f_12, 4194304))
				{
				}
				else if (!func_19(Global_1347702[iVar1 /*49*/].f_12, 512))
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS")), 1);
				}
				else
				{
					func_567(func_568(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 1);
				}
			}
			break;
	}
}

void func_859()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!func_3(64))
	{
		return;
	}
	else if (func_88(Global_1935630, 131072))
	{
		return;
	}
	else if ((func_14(0, 0, 1) || func_1143()) || func_728())
	{
		return;
	}
	iVar0 = func_797();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1221(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_806(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_806(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1088(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_510(0, -1);
	}
	if (iVar2 > 0)
	{
		func_441("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1222(1, 0);
	Global_1956575.f_4 = 1;
}

void func_860(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_6(32768))
	{
		return;
	}
	func_688(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_1223(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_861(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 1:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 2:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 4:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 5:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		case 6:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 9:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 10:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1) * 3;
		case 11:
			return func_961(joaat("REWARD_MONEYSTACK_LARGE"), 0, -1);
		default:
			break;
	}
	return 0;
}

void func_862(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_863();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_772(Global_1879514.f_1) == 1)
			{
				func_380(5, 1);
			}
			else if (func_772(Global_1879514.f_1) == 8 && (func_19(Global_1347702[func_17(Global_1879514.f_1) /*49*/].f_12, 1) || func_19(Global_1347702[func_17(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				func_380(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

int func_863()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1224(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_1225(iVar0))
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

void func_864(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_865(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (func_18(iVar0) && Global_1347702[iVar0 /*49*/] == iParam0)
		{
			bVar1 = true;
			func_749(iVar0, 1);
		}
		else if (bVar1)
		{
		}
		else
		{
			iVar0++;
		}
	}
}

char* func_866(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_1226(sParam1));
}

void func_867(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = func_753(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_754(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_754(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_868(int iParam0, bool bParam1)
{
	if (!func_748(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(iParam0), func_754(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(iParam0), func_754(iParam0), 2, "");
		func_470(iParam0, 16);
	}
	else
	{
		if (func_748(iParam0, 8))
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(iParam0), func_754(iParam0), 1, "");
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(iParam0), func_754(iParam0), 0, "");
		}
		func_864(iParam0, 16);
	}
}

void func_869(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_748(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_753(iParam0), func_754(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_748(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(iParam0), func_754(iParam0), 1, "");
		}
		func_470(iParam0, 8);
	}
	else
	{
		if (func_748(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_753(iParam0), func_754(iParam0), 0, "");
		}
		func_864(iParam0, 8);
	}
}

bool func_870(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_479(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

void func_871(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		func_1227(bParam1);
	}
}

bool func_872(int iParam0, int iParam1)
{
	return Global_40.f_4942[iParam0 /*60*/].f_8 == iParam1;
}

bool func_873(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	while (*iParam2 < 10)
	{
		if (Global_40.f_4942[iParam0 /*60*/].f_11[*iParam2 /*3*/] == iParam1)
		{
			return true;
		}
		*iParam2++;
	}
	*iParam2 = -1;
	return false;
}

bool func_874(int iParam0, int iParam1)
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
	if (func_1228(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_1228(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_875(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return false;
	}
	if (func_872(iParam0, iParam1))
	{
		return func_1229(iParam0);
	}
	iVar0 = -1;
	if (func_873(iParam0, iParam1, &iVar0))
	{
		return func_878(iParam0, iVar0);
	}
	return false;
}

void func_876(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_446(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		PED::_0x2B4CE170DE09F346(bVar0, iParam1);
	}
	func_1230(iParam0, iParam1, 0);
}

void func_877(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
	uParam0->f_2 = 0;
}

bool func_878(int iParam0, int iParam1)
{
	if ((!func_479(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1);
}

void func_879(int iParam0, int iParam1, bool bParam2)
{
	if ((!func_479(iParam0) || iParam1 < 0) || iParam1 >= 10)
	{
		return;
	}
	if (bParam2)
	{
		if (!MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
		{
			MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_1155, iParam1))
	{
		MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_1155), iParam1);
	}
}

void func_880(var uParam0)
{
	if ((func_874(Global_35, 0) && func_1231(*uParam0)) && PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_1232(*uParam0);
	}
	if ((!func_874(Global_35, 0) || !func_1231(*uParam0)) || !PED::_0x7C8AA850617651D9(Global_35, *uParam0))
	{
		func_877(uParam0);
	}
}

int func_881(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_479(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_479(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

bool func_882(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_883(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1233(iParam0);
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

void func_884(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_885(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_1357549.f_1494 = (Global_1357549.f_1494 || iParam0);
			break;
	}
}

int func_886(int iParam0, int iParam1)
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

bool func_887(int iParam0)
{
	int iVar0;

	if (func_1234(iParam0))
	{
		if (!func_554(45))
		{
			return false;
		}
	}
	iVar0 = func_889(iParam0);
	if (func_70())
	{
		if (!func_226(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_888(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_889(int iParam0)
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
	else if (iParam0 <= 116)
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

int func_890(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_891(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

void func_892(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

void func_893(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1235(*uParam0, -1);
		func_1236(*uParam0, 0);
		func_1237(*uParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*uParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*uParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*uParam0]));
		}
	}
	*uParam0 = -1;
}

int func_894(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_895(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_896(int iParam0)
{
	Global_40.f_4283 = iParam0;
	Global_40.f_4283.f_1 = func_432(iParam0);
}

void func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_907(2097152);
			break;
		case 1:
			func_907(4194304);
			break;
		case 2:
			func_907(16777216);
			break;
		case 3:
			func_907(33554432);
			break;
		case 5:
			func_907(67108864);
			break;
		case 4:
			func_907(134217728);
			break;
		case 6:
			func_907(268435456);
			break;
		case 7:
			func_907(536870912);
			break;
		case 8:
			func_907(1073741824 /* Float: 2f */);
			break;
	}
}

void func_898()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		Global_1357549.f_1497.f_32[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = 0f;
		Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	Global_1357549.f_1497.f_108 = 0;
}

int func_899(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1050(Global_1357549.f_1497.f_32[iVar0 /*5*/]))
		{
			Global_1357549.f_1497.f_32[iVar0 /*5*/] = { vParam0 };
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_3 = fParam3;
			Global_1357549.f_1497.f_32[iVar0 /*5*/].f_4 = iParam4;
			Global_1357549.f_1497.f_108++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_900(int iParam0)
{
	return func_901(23, iParam0);
}

bool func_901(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1238(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 == func_1239())
	{
		return func_1238(&(Global_1109400.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1225639.f_21[iParam1])
	{
		return func_1238(&(Global_1108178[iParam1 /*37*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_902(int iParam0)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_710(iParam0, 8);
}

void func_903(int iParam0, int iParam1)
{
	if (!func_327(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_904(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

void func_905(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_906()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_710(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_710(iVar1, 2))
			{
				if (func_2() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				func_659(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_907(int iParam0)
{
	switch (func_2())
	{
		case -1:
			Global_40.f_4283.f_2 = (Global_40.f_4283.f_2 || iParam0);
			break;
	}
}

bool func_908(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_909(int iParam0)
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

bool func_910(vector3 vParam0, int iParam3, var uParam4, int iParam5, int* iParam6, bool bParam7)
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

int func_911(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1240(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_912(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1993529370:
			return 14;
		case -1910231185:
			return 27;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"):
			return 30;
		case -1751068532:
			return 19;
		case joaat("TSTAG_NO_TAGS"):
			return 0;
		case -1403291038:
			return 13;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"):
			return 28;
		case -1132827806:
			return 18;
		case -1066004925:
			return 36;
		case -586199837:
			return 23;
		case -529686691:
			return 20;
		case joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"):
			return 29;
		case joaat("TSTAG_LOCKDOWN"):
			return 9;
		case -415041951:
			return 3;
		case joaat("TSTAG_FLOW_PRE_BOUNTY_1"):
			return 15;
		case joaat("TSTAG_FIRST_VISIT"):
			return 1;
		case -115118166:
			return 8;
		case joaat("TSTAG_ENDLESS_SUMMER"):
			return 4;
		case 0:
			return 38;
		case 508286680:
			return 5;
		case joaat("TSTAG_LOCKDOWN_SALOON"):
			return 11;
		case 623901469:
			return 16;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_WALK_WITH_JOHN"):
			return 31;
		case joaat("TSTAG_RHD_FEUD1_ACTIVE"):
			return 25;
		case 1274330613:
			return 22;
		case joaat("TSTAG_VAL_MUD5_ACTIVE_STEALTH_EXIT"):
			return 34;
		case 1398684735:
			return 26;
		case 1556254948:
			return 2;
		case joaat("TSTAG_RAIN"):
			return 6;
		case joaat("TSTAG_LOCKDOWN_PARTIAL"):
			return 10;
		case 1598344177:
			return 21;
		case joaat("TSTAG_VAL_MUD5_ACTIVE"):
			return 33;
		case joaat("TSTAG_VAL_MUD4_ACTIVE_GO_TO_SALOON"):
			return 32;
		case joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE"):
			return 35;
		case 1763394652:
			return 17;
		case joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"):
			return 12;
		case joaat("TSTAG_RHD_SADIE1_ACTIVE"):
			return 24;
		case 1843135693:
			return 7;
		case 1869671285:
			return 37;
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

int func_913(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 508286680;
		case 2:
			return -115118166;
		case 3:
			return 1274330613;
		case 4:
			return -1993529370;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TSTAG_NO_TAGS");
		case 1:
			return 1843135693;
		case 2:
			return -1403291038;
		case 3:
			return -1066004925;
		case 4:
			return 1598344177;
		default:
			break;
	}
	return joaat("TSTAG_NO_TAGS");
}

int func_915(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_912(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_916(var uParam0)
{
	struct<5> Var0;

	Var0 = joaat("TSTAG_NO_TAGS");
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_917(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_1241(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_1241(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_918(int iParam0)
{
	Global_40.f_9052.f_21 = (Global_40.f_9052.f_21 || iParam0);
}

bool func_919(int iParam0)
{
	return func_552(iParam0) == joaat("WEAPON");
}

bool func_920(int iParam0)
{
	var uVar0;

	if (func_2() != -1)
	{
		return false;
	}
	if (func_553(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_925(iParam0, &uVar0, 1, 0, 0);
	}
	return func_581(iParam0, 1, 0);
}

void func_921(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_552(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_557(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_942(iVar0))
	{
		if (func_2() == -1)
		{
			func_287(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_537(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_610(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_922(int iParam0, int iParam1)
{
	int iVar0;

	if (func_297(iParam0, 58855631))
	{
		func_1242(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_923(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_1243(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_738(bParam3), iParam0);
}

int func_924(int iParam0, bool bParam1)
{
	if (func_562(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_738(bParam1), iParam0, 0);
}

bool func_925(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_1244(&iParam0);
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (!func_558(0))
	{
		bParam3 = true;
	}
	if (func_919(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_1021(0) };
			Var4.f_9 = -1591664384;
			if (!func_944(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (func_945(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (func_1098(iParam0, 1))
			{
				if (!func_944(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (func_945(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1245(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_923(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_1243(iParam0))
	{
		iVar28 = func_1246(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_926(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1020(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1022(&Var0, func_1021(0));
	}
	if (!func_1023(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	func_385(iVar14);
	return iVar15;
}

int func_927()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_928(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_929(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_2() != -1)
	{
		return;
	}
	iVar0 = func_1247(iParam0);
	fVar1 = func_1248(iParam0);
	if ((Global_1347477.f_117 || !func_554(31)) || !func_1249(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1250(iVar0) >= 7)
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
	func_1251(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1005(MISC::VAR_STRING(6, func_1252(iParam0), fVar1), "itemtype_textures", func_1253(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_930(int iParam0)
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

int func_931(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1254(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_932(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_548() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1255(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1256(), 12);
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
			else if (func_970() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1257(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_970(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1258(), 13);
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
			else if (func_971() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1259(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_971(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_931(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_933(int iParam0, int iParam1, int iParam2)
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

bool func_934(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_935(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_936(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1260(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_581(iVar2, 1, 0) || func_1262(func_1261(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_939(func_1260(iVar0))), func_939(func_1260(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_970() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1263(iVar0)), func_1263(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1257() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1263(iVar0)), func_1263(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1263(iVar0)), func_1263(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_980(iParam3, func_1264(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_976(iVar2) - iParam7) >= func_931(iParam3, func_1265(iVar0));
				}
				else
				{
					bVar1 = func_976(iVar2) >= func_931(iParam3, func_1265(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_976(iVar2) + iParam7) >= func_931(iParam3, func_1265(iVar0));
			}
			else
			{
				bVar1 = func_976(iVar2) >= func_931(iParam3, func_1265(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1266(iVar2)), func_1266(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1267(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1268(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_1268(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_971() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1269(iVar0)), func_1269(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1259() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1269(iVar0)), func_1269(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1269(iVar0)), func_1269(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_980(iParam3, func_1264(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_976(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1270(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1270(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1271(iVar2)), func_1271(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_937(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1258() >= 13)
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

bool func_938(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_20(func_798(0)) && ((func_1272(0) == 1 || func_1272(0) == 8) || func_1272(0) == 6))
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

char* func_939(int iParam0)
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

bool func_940(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_941(int iParam0)
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

bool func_942(int iParam0)
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

int func_943(int iParam0, int iParam1)
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

bool func_944(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1246(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_945(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1273(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_946(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_286(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_738(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_947(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1274(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1101(*uParam1, &Var0, bParam6, 0))
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
	if (!func_558(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_738(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_1275(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_949(int iParam0)
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
	iVar2 = func_72();
	func_73(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_950(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1276(iParam0))
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

bool func_951(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_952(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_953(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_554(50))
			{
				if (!func_554(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_554(51))
			{
				if (!func_554(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_954(int iParam0, int iParam1, var uParam2)
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

	if (!func_286(iParam1, 0))
	{
		return false;
	}
	if (func_552(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_2() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_555(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1207(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_297(iParam1, 866047851))
	{
		iVar5 = func_700(iVar4, 1);
		if (func_1104(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = func_555(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && func_297(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (func_1056(1868067663, &uVar0))
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
				iVar10 = func_1277(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1277(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_555(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_297(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && func_1278(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
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

void func_955()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

int func_956()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_581(func_1279(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_957(int iParam0)
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

bool func_958(int iParam0, int iParam1)
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
	if (func_581(iVar0, 1, 0) && func_581(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_959(int iParam0)
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

bool func_960(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1280(iParam0);
	if (iVar0 != -15)
	{
		func_73(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_80(iVar0, 1);
	}
	return false;
}

int func_961(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_581(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_286(iVar25, 0) && func_297(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_962(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1005(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_963(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_1281())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1005(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_404(iVar0);
			func_1282(iVar0, 0, 0);
		}
		func_1005(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_567(func_759(joaat("CAREER_CASH")), iVar1);
	}
}

void func_964(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_965(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_966(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_967(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_968(int iParam0)
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
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_976(iVar12);
		iVar8 = func_977(iVar12);
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

void func_969(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_970()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1283(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_971()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_972(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1270(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1270(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1270(iVar0))
		{
			*sParam2++;
		}
		if (func_1270(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1270(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1270(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1270(iVar0))
		{
			*sParam2++;
		}
		if (func_1270(iVar1))
		{
			*sParam2++;
		}
		if (func_1270(iVar0) && func_1270(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1270(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1270(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1270(iVar0))
		{
			*sParam2++;
		}
		if (func_1270(iVar1))
		{
			*sParam2++;
		}
		if (func_1270(iVar2))
		{
			*sParam2++;
		}
		if ((func_1270(iVar0) && func_1270(iVar1)) && func_1270(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1270(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1270(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1270(iVar0))
		{
			*sParam2++;
		}
		if (func_1270(iVar1))
		{
			*sParam2++;
		}
		if (func_1270(iVar2))
		{
			*sParam2++;
		}
		if (func_1270(iVar3))
		{
			*sParam2++;
		}
		if (((func_1270(iVar0) && func_1270(iVar1)) && func_1270(iVar2)) && func_1270(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_973(int iParam0)
{
	if (!func_1284(iParam0))
	{
		func_1286(func_1285(iParam0));
	}
}

int func_974()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1284(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
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
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_976(iVar12);
		iVar8 = func_977(iVar12);
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

int func_976(int iParam0)
{
	int iVar0;

	if (func_581(iParam0, 1, 0))
	{
		iVar0 = func_537(iParam0, 0, 0);
	}
	return iVar0;
}

int func_977(int iParam0)
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

int func_978(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_979(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_980(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1254(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_981(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_980(iParam1, 5) || iParam0 == func_980(iParam1, 6)) || iParam0 == func_980(iParam1, 7)) || iParam0 == func_980(iParam1, 8)) || iParam0 == func_980(iParam1, 9))
	{
		func_972(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_549(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_551(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_982(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_980(iParam1, 5) || iParam0 == func_980(iParam1, 6)) || iParam0 == func_980(iParam1, 7)) || iParam0 == func_980(iParam1, 8)) || iParam0 == func_980(iParam1, 9))
	{
		if (func_972(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_549(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_551(51, 0, 0, iVar0, func_931(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_549(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_551(51, 0, 0, iVar0, func_931(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_983()
{
	if (func_467(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

bool func_984(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_631(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_383("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_384(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_533(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_385(iVar1);
				return true;
			}
			iVar3++;
		}
		func_385(iVar1);
	}
	return false;
}

void func_985(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_986(int iParam0)
{
	if (!func_1287(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_987(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_988(int iParam0, int iParam1, var uParam2)
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

float func_989()
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

	if (func_1288())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1289(2);
	}
	if (Global_1347477.f_119)
	{
		return func_1289(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1290();
	fVar2 = func_1291();
	fVar3 = func_1292();
	fVar4 = func_1293();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1294()));
	fVar7 = (func_1289(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1295(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1296(3, fVar9, fVar9 > 100f);
	return func_313(fVar7, -100f, 100f);
}

float func_990()
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

	if (func_1288())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1289(1);
	}
	if (Global_1347477.f_119)
	{
		return func_1289(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1290();
	fVar2 = func_1291();
	fVar3 = func_1292();
	fVar4 = func_1293();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1294()));
	fVar7 = (func_1289(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1295(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1296(2, fVar9, fVar9 > 100f);
	return func_313(fVar7, -100f, 100f);
}

float func_991()
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

	if (func_1288())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1289(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1297())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1298())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_1289(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_1290();
	fVar2 = func_1291();
	fVar3 = func_1292();
	fVar4 = func_1293();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1294()));
	fVar7 = (func_1289(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1295(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1296(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_1289(0);
	}
	return func_313(fVar7, -100f, 100f);
}

bool func_992(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_993(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_286(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_925(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_558(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_738(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_994(int iParam0, bool bParam1)
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
				return func_1299();
			}
			break;
	}
	return 0;
}

int func_995(int iParam0)
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

bool func_996(int iParam0, bool bParam1)
{
	return func_994(iParam0, 0) < func_1300(iParam0, bParam1);
}

bool func_997(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_998(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946804.f_1497.f_1[func_700(iParam0, 1) /*3*/] != Global_1946804.f_57[func_700(iParam0, 1) /*11*/];
}

void func_999(int iParam0, int iParam1)
{
	if (func_297(iParam1, 130796156))
	{
		func_1301(iParam1, 0);
	}
	else if (func_297(iParam1, 930141731))
	{
		func_1301(iParam1, 1);
		func_1302(iParam0);
	}
}

void func_1000(var uParam0, int iParam1)
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

int func_1001(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1303(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1304(uParam2, iParam0, Var1);
	return 1;
}

int func_1002(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_1003(int iParam0)
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

int func_1004(int iParam0)
{
	var uVar0;

	if (!func_1305(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_1005(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
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
	func_1306(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1006()
{
	return !Global_1911774;
}

void func_1007(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1008(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1009(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1010(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1011(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_1012(int iParam0)
{
	if (func_2() != -1)
	{
		if (func_614(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_614(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1013(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_614(iParam0, 65536) && !func_614(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_614(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_614(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1014()
{
	return Global_1905944.f_5694;
}

char* func_1015(int iParam0)
{
	int iVar0;

	iVar0 = func_619(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_1271(iVar0);
}

int func_1016(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	if (func_2() == -1)
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

void func_1017(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_1018(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_2() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_1307(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1019(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_2() != -1)
	{
		return false;
	}
	if (func_1307(iParam0, iParam1, &uVar2, &iVar1))
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

struct<14> func_1020(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1021(bool bParam0)
{
	int iVar0;

	iVar0 = func_738(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224215))
		{
			Global_1224215 = { func_946(923904168, func_691(bParam0), -740156546, bParam0) };
		}
		return Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224223))
		{
			Global_1224223 = { func_946(923904168, func_691(bParam0), -740156546, 0) };
		}
		return Global_1224223;
	}
	return func_946(923904168, func_691(bParam0), -740156546, 0);
}

void func_1022(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1023(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_738(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1024(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_1274(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_558(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_738(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_1025(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_2() == -1)
	{
		if (func_543(43))
		{
			if (func_297(iParam0, 412399755))
			{
				func_973(joaat("EXOTIC_STAGE_01"));
				if (func_974() == 0)
				{
					func_510(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_543(44))
		{
			if (func_297(iParam0, 709057512))
			{
				func_973(joaat("EXOTIC_STAGE_02"));
				if (func_974() == 1)
				{
					func_510(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(45))
		{
			if (func_297(iParam0, -1478961327))
			{
				func_973(joaat("EXOTIC_STAGE_03"));
				if (func_974() == 2)
				{
					func_510(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(46))
		{
			if (func_297(iParam0, -1238404098))
			{
				func_973(joaat("EXOTIC_STAGE_04"));
				if (func_974() == 3)
				{
					func_510(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_543(47))
		{
			if (func_297(iParam0, 1160548794))
			{
				func_973(joaat("EXOTIC_STAGE_05"));
				if (func_974() == 4)
				{
					func_510(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_976(iParam0) < func_977(iParam0))
						{
							func_549(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_1026(bool bParam0)
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

void func_1027(int iParam0)
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

void func_1028(bool bParam0)
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

void func_1029(bool bParam0)
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

void func_1030(bool bParam0)
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

void func_1031(bool bParam0)
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

void func_1032(bool bParam0)
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

void func_1033(bool bParam0)
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

int func_1034(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946804.f_1497.f_1[func_700(iParam0, 1) /*3*/];
}

void func_1035()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_357();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_287(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_603(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_287(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_603(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_1036(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1955569.f_5.f_1))
	{
		return;
	}
	iVar0 = Global_1955569.f_5.f_2[iParam0 /*36*/];
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1955569.f_5.f_1, iVar0);
}

bool func_1037(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_479(iParam0))
	{
		return false;
	}
	func_1309(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

void func_1038(int iParam0)
{
	Global_1946804.f_1 = iParam0;
}

int func_1039(int iParam0)
{
	switch (Global_40.f_7731[iParam0 /*5*/].f_2)
	{
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		default:
			break;
	}
	return 1;
}

void func_1040(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_1310(BUILTIN::TO_FLOAT(*iParam0), fVar3);
	iVar1 = func_1311(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = func_1312(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*iParam0 = (*iParam0 / iParam5);
	*iParam1 = (*iParam1 / iParam5);
	*uParam2 = (*uParam2 / iParam5);
	*uParam3 = (*uParam3 / iParam5);
	*iParam1 = (*iParam1 + iVar0);
	*uParam2 = (*uParam2 + iVar1);
	*uParam3 = (*uParam3 + iVar2);
	if (bParam4)
	{
		*uParam3 = (*uParam3 * -1);
		*uParam2 = (*uParam2 * -1);
		*iParam1 = (*iParam1 * -1);
		*iParam0 = (*iParam0 * -1);
	}
}

bool func_1041(int iParam0)
{
	return Global_1946804.f_529[iParam0] > 0;
}

void func_1042(int iParam0)
{
	Global_1946804.f_529[iParam0]++;
}

bool func_1043()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_1044()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_1313(Global_40.f_7748.f_5, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_1314(Global_40.f_7748.f_1, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_1045();
	}
}

void func_1045()
{
	int iVar0;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_1315();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_1316(iVar0, 0);
	if (func_1043())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			func_1315();
		}
		else
		{
			func_1317();
		}
	}
	func_1318();
}

void func_1046(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_1313(Global_40.f_7731[iParam0 /*5*/].f_3, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_649(iParam0, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_1047(iParam0, 0);
	}
}

void func_1047(int iParam0, bool bParam1)
{
	int iVar0;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_1319(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_648(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_1320(iVar0);
	func_324(iParam0, iVar0, 0);
	if (func_648(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_1319(iParam0);
		}
		else
		{
			func_1321(iParam0);
		}
	}
	func_1322();
}

bool func_1048()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 2:
			return 2;
		case 36:
			return 2;
		case 9:
			return 2;
		case 10:
			return 2;
		case 37:
			return 2;
		case 0:
			return 1;
		case 16:
			return 3;
		case 11:
			return 1;
		case 20:
			return 1;
		case 18:
			return 1;
		case 19:
			return 1;
		case 24:
			return 1;
		case 34:
			return 3;
		case 43:
			return 6;
		default:
			break;
	}
	return 2;
}

bool func_1050(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_1051(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

bool func_1052(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_1053(int iParam0, bool bParam1)
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

int func_1054(int iParam0)
{
	int iVar0;

	iVar0 = func_700(func_1323(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_1055(var uParam0)
{
	if (func_1056(81053684, uParam0))
	{
		return true;
	}
	if (func_1056(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_1056(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_700(func_1323(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946804.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946804.f_1497.f_1[iVar1 /*3*/];
		if (func_555(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

var func_1057()
{
	if (func_2() != -1)
	{
		return 0;
	}
	return func_1324(joaat("FAME"));
}

bool func_1058()
{
	return Global_1347398.f_1 == 0;
}

void func_1059(int iParam0)
{
	Global_1347398.f_1 = iParam0;
}

bool func_1060()
{
	return Global_1347398.f_1 == 1000;
}

bool func_1061()
{
	return Global_1347398.f_1 == 2000;
}

bool func_1062()
{
	return Global_1347398.f_1 == 3000;
}

void func_1063(int iParam0)
{
	func_1065(iParam0, 1);
	func_1065(iParam0, 128);
	func_1065(iParam0, 256);
	func_1065(iParam0, 512);
	func_1065(iParam0, 1024);
	func_1065(iParam0, 2048);
	func_1065(iParam0, 4096);
	func_1065(iParam0, 65536);
	func_1065(iParam0, 16384);
	func_1065(iParam0, 262144);
	func_1065(iParam0, 524288);
	func_1065(iParam0, 1048576);
	func_1065(iParam0, 2097152);
	func_1065(iParam0, 32768);
	func_1065(iParam0, 131072);
	func_1065(iParam0, 134217728);
	func_1065(iParam0, 1073741824 /* Float: 2f */);
}

void func_1064(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_1065(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 - (Global_40.f_4942[iParam0 /*60*/].f_5 && iParam1));
}

bool func_1066(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 860729266;
			return true;
		case 128:
			*iParam1 = 1606325429;
			return true;
		case 256:
			*iParam1 = 1743550585;
			return true;
		case 512:
			*iParam1 = 1064646155;
			return true;
		case 1024:
			*iParam1 = -536694793;
			return true;
		case 2048:
			*iParam1 = -1304053509;
			return true;
		case 4096:
			*iParam1 = 879715242;
			return true;
		case 65536:
			*iParam1 = -972364774;
			return true;
		case 16384:
			*iParam1 = -1100875244;
			return true;
		case 262144:
			*iParam1 = 1153596794;
			return true;
		case 524288:
			*iParam1 = 1016389820;
			return true;
		case 1048576:
			*iParam1 = -726966617;
			return true;
		case 2097152:
			*iParam1 = 1365901568;
			return true;
		case 32768:
			*iParam1 = -1658942149;
			return true;
		case 131072:
			*iParam1 = -1980913856;
			return true;
		case 134217728:
			*iParam1 = -1683207356;
			return true;
		case 1073741824:
			*iParam1 = -1712783565;
			return true;
	}
	return false;
}

bool func_1067(int iParam0, int iParam1)
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

void func_1068(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 = (Global_40.f_4942[iParam0 /*60*/].f_5 || iParam1);
}

void func_1069(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1 > 0 && func_1067(iParam1, 860729266))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 860729266);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4096 > 0 && func_1067(iParam1, 879715242))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 879715242);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 128 > 0 && func_1067(iParam1, 1606325429))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1606325429);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 256 > 0 && func_1067(iParam1, 1743550585))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1743550585);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 512 > 0 && func_1067(iParam1, 1064646155))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1064646155);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1024 > 0 && func_1067(iParam1, -536694793))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -536694793);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2048 > 0 && func_1067(iParam1, -1304053509))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1304053509);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & -2147483648 > 0 && func_1067(iParam1, 718939204))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 718939204);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 65536 > 0 && func_1067(iParam1, -972364774))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -972364774);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16384 > 0 && func_1067(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1100875244);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 262144 > 0 && func_1067(iParam1, 1153596794))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1153596794);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 524288 > 0 && func_1067(iParam1, 1016389820))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1016389820);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1048576 > 0 && func_1067(iParam1, -726966617))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -726966617);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 2097152 > 0 && func_1067(iParam1, 1365901568))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1365901568);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 32768 > 0 && func_1067(iParam1, -1658942149))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1658942149);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 131072 > 0 && func_1067(iParam1, -1980913856))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1980913856);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 4194304 > 0 && func_1067(iParam1, 491764525))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 491764525);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8388608 > 0 && func_1067(iParam1, -76015264))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -76015264);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 16777216 > 0 && func_1067(iParam1, 622113465))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 622113465);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 33554432 > 0 && func_1067(iParam1, 781533162))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 781533162);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 67108864 > 0 && func_1067(iParam1, -271415321))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -271415321);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 134217728 > 0 && func_1067(iParam1, -1683207356))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1683207356);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 268435456 > 0 && func_1067(iParam1, -254794762))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -254794762);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 536870912 > 0 && func_1067(iParam1, 609066278))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 609066278);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 1073741824 > 0 && func_1067(iParam1, -1712783565))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, -1712783565);
	}
	if (Global_40.f_4942[iParam0 /*60*/].f_5 & 8192 > 0 && func_1067(iParam1, 1544915253))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_1070(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_365(iParam0))
	{
		return;
	}
	iVar0 = func_1325();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	PLAYER::_SET_MAX_WANTED_LEVEL_2(iVar0);
	if (iParam0 == func_1326())
	{
		LAW::_SET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID(), iParam1);
	}
	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_358[iParam0 /*12*/] != iParam1)
		{
			func_1327(iParam0, iParam1);
			func_1328(iParam0);
		}
		Global_40.f_358[iParam0 /*12*/] = iParam1;
		if (!func_1125(iParam0, 4))
		{
			if (Global_40.f_358[iParam0 /*12*/] >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(1))
			{
				func_1329(iParam0, 1);
			}
		}
		else if (Global_40.f_358[iParam0 /*12*/] == 0)
		{
			func_1329(iParam0, 0);
		}
		return;
	}
	Global_1058888.f_42266[iParam0 /*12*/] = iParam1;
}

bool func_1071(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1330(iParam0, uParam1, &uVar0))
	{
		func_1331(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_1072(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_555(iParam0))
	{
		case -2061583405:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1332(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1077();
	}
	if (bParam1)
	{
		func_1080(0, 0);
	}
}

bool func_1073(int iParam0)
{
	if (func_2() == -1)
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

int func_1074(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1333(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1094(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (func_555(iParam0) != -999503751)
	{
		func_1093(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1075(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1076(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1246(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_738(0), &Var5);
	return 1;
}

void func_1077()
{
	int iVar0;

	if (func_2() == -1)
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

bool func_1078(int iParam0)
{
	return func_1335(func_1334(iParam0));
}

void func_1079(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1246(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_738(0), &Var5, bParam1);
}

void func_1080(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1336(0);
	}
	if (bParam0)
	{
		func_650(8);
		func_650(512);
	}
	else
	{
		func_650(8);
		func_650(16);
	}
}

bool func_1081(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
		iVar1 = func_555(iParam1);
		iVar5 = func_1337(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_698(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_946(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = func_738(0);
			Var37 = { func_698(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_946(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_555(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_1338(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
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

struct<4> func_1082()
{
	struct<4> Var0;

	Var0 = { func_691(0) };
	return func_946(856287005, Var0, -218846335, 0);
}

bool func_1083(int iParam0, int iParam1)
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

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (!func_1081(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_1082() };
	Var14 = { func_946(iParam0, Var10, iVar9, 0) };
	if (func_1339(Var14, iParam1))
	{
		if (func_1340(iParam0))
		{
			if (func_1341(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_1083(iVar18, 0))
				{
				}
			}
		}
		else if (func_1084(iParam0))
		{
			if (func_1341(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1083(iVar19, 0))
				{
				}
			}
			if (func_1341(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1083(iVar20, 0))
				{
				}
			}
			iVar21 = func_1085(iParam0);
			if (func_286(iVar21, 0))
			{
				if (func_1083(iVar21, 1))
				{
				}
			}
		}
		func_1086();
		return true;
	}
	return false;
}

bool func_1084(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_297(iParam0, -251515357))
	{
		return true;
	}
	return false;
}

int func_1085(int iParam0)
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

int func_1086()
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

	Var0 = { func_698(856287005, 0, 0) };
	Var5 = { func_946(856287005, Var0, Var0.f_4, 0) };
	iVar10 = func_555(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_1342(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_286(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_1337(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_1342(Var5, iVar11, 0);
			if (!func_286(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_1084(iVar14) || func_1340(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_1084(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_1084(iVar14) && func_1343(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_1344(iVar11, &Var16, 1))
									{
										if (!func_1339(Var16, 1))
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

void func_1087(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_686(1) < iParam0)
	{
		iParam0 = func_686(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_759(joaat("CAREER_CASH")) };
	STATS::_0xBD861AE8A5181ED7(&Var0, iParam0);
}

void func_1088(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1005(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_1089(int iParam0)
{
	return (Global_26796.f_774 && iParam0) != 0;
}

void func_1090(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 || iParam0);
}

struct<4> func_1091()
{
	struct<4> Var0;

	return Var0;
}

void func_1092(int iParam0)
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
	Var2 = { func_1020(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_1023(&Var2, &iVar0, &iVar1, 0))
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
		func_385(iVar0);
	}
}

void func_1093(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1345(iParam2, *uParam0);
	func_1346(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1094(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_698(iParam0, 0, 0) };
	Var5 = { func_946(iParam0, Var0, Var0.f_4, 0) };
	if (func_1246(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_738(0), &Var5, iParam1);
	return true;
}

void func_1095(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_2() != -1)
	{
		return;
	}
	if (!func_1089(8))
	{
		return;
	}
	if (Global_26796.f_627 == 0)
	{
		return;
	}
	Global_1946804.f_1497 = Global_26796.f_627;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[iVar0 /*3*/] };
		iVar0++;
	}
	func_682(1);
	Global_1946804.f_2657 = { Global_26796.f_627.f_121 };
	func_1077();
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		func_1094(iVar2, 0);
		iVar1 = func_700(func_1207(iVar2), 1);
		if (iVar1 >= 39)
		{
		}
		else if (Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0])
		{
			INVENTORY::_0x46743BBFEDBC859E(func_738(0), iVar2, 1);
		}
		else
		{
			INVENTORY::_0x46743BBFEDBC859E(func_738(0), iVar2, 0);
		}
		iVar0++;
	}
	if (!bParam0)
	{
		return;
	}
	iVar3 = Global_1946804.f_1497;
	iVar4 = func_995(iVar3);
	if (iVar4 == -1)
	{
		iVar4 = 0;
		func_1347(Global_35, iVar4, &(Global_1946804.f_1949), 1, iVar3, 1);
	}
	else
	{
		func_1347(Global_35, iVar4, &(Global_1946804.f_1949), 1, 0, 1);
	}
}

void func_1096(bool bParam0)
{
	int iVar0;

	if (func_1348(Global_35))
	{
		func_1349(Global_35, bParam0, 1);
		return;
	}
	iVar0 = Global_1946804.f_1497;
	Global_1905941 = func_995(iVar0);
	if (Global_1905941 == -1)
	{
		Global_1905941 = 0;
	}
	func_623(Global_40.f_7729, 4096);
	func_621(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	func_1350(Global_35, 1, 1);
}

void func_1097(int iParam0)
{
	Global_26796.f_774 = (Global_26796.f_774 - (Global_26796.f_774 && iParam0));
}

bool func_1098(int iParam0, bool bParam1)
{
	if (func_555(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_554(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1099(bool bParam0)
{
	int iVar0;

	iVar0 = func_738(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1224219))
		{
			Global_1224219 = { func_946(271701509, func_691(bParam0), 12999093, 0) };
		}
		return Global_1224219;
	}
	return func_946(271701509, func_691(bParam0), 12999093, 0);
}

bool func_1100(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_555(iParam0);
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

bool func_1101(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_738(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1102(int iParam0, int iParam1)
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

void func_1103()
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

int func_1104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/] && func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1105(int iParam0)
{
	func_1112(iParam0, 8, 6);
}

void func_1106(int iParam0)
{
	func_1351(&(Global_1946804.f_2589), iParam0);
}

void func_1107(int iParam0, int iParam1)
{
	func_1352(&(Global_1946804.f_2589), iParam0, iParam1);
}

void func_1108(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_1109(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_555(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1353(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1107(iVar1, iVar3);
		}
	}
	if (func_998(-1586649372) && func_1353(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1107(iVar1, iVar3);
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
						func_1107(iVar1, iVar3);
					}
				}
			}
			func_1354(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1354(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1354(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1354(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1354(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1354(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_555(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1278(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == func_555(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && func_297(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (func_1278(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || func_297(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1107(iVar1, iVar3);
					}
				}
			}
			switch (func_555(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_555(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_555(uParam0->f_1[iVar1 /*3*/]) || func_297(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1107(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1110(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1355(0);
	if (iParam2 != 0 && func_1356(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1357(iParam0, func_1102(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1111(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_2() != -1;
	iVar7 = func_1355(0);
	if (func_703(32768))
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
			iVar5 = func_1102(iVar0, 1);
			if (func_1358(iVar5, 8))
			{
			}
			else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1358(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1277(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_1359(uParam0);
				if (iVar3 > 0)
				{
					if (!func_703(524288))
					{
						func_650(524288);
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
							iVar5 = func_1102(iVar0, 1);
							if (func_1358(iVar5, 8))
							{
							}
							else if (Global_1946804.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1358(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1277(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_1107(iVar0, iParam2);
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
					func_1115(524288);
				}
			}
		}
	}
}

void func_1112(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 - (Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_1113(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1360(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1361(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_619(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_619(Global_40.f_7729);
				Global_1946804.f_1378 = func_619(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1362(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1080(0, 1);
	}
}

void func_1114(var uParam0)
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

void func_1115(int iParam0)
{
	Global_1946804 = (Global_1946804 - (Global_1946804 && iParam0));
}

bool func_1116(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1117(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	if (Global_1946804.f_852 >= 20)
	{
		return;
	}
	if (func_1041(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_852)
		{
			iVar1 = ((Global_1946804.f_853 + iVar0) % 20);
			if (((Global_1946804.f_769[iVar1 /*4*/] == Param0 && Global_1946804.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946804.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946804.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946804.f_769[iVar1 /*4*/] == 34 && func_1041(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1042(Param0);
	Global_1946804.f_769[Global_1946804.f_854 /*4*/] = { Param0 };
	Global_1946804.f_852++;
	Global_1946804.f_854 = (Global_1946804.f_854 + 1 % 20);
	func_650(8);
}

int func_1118(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	if (func_708(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0 /*11*/].f_3;
}

int func_1119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_71(iParam0))
	{
		return 0;
	}
	func_1313(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_1120(int iParam0)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	return func_710(iParam0, 33554432);
}

bool func_1121(int iParam0)
{
	if (!func_327(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

int func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

void func_1123(int iParam0)
{
	int iVar0;

	if (func_1363(iParam0) == 57)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_1364(iParam0) == 4 || func_1364(iParam0) == 12) || func_1127(func_1364(iParam0)) == 4) || (func_1128(func_1364(iParam0), 8) && ((func_1364(iParam0) == 2 || func_1364(iParam0) == 0) || func_1364(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_1124(int iParam0)
{
	if (func_1363(iParam0) == 57)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

bool func_1125(int iParam0, int iParam1)
{
	if (!func_365(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42266[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_1126(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1123(func_1365(iParam0));
	}
	else
	{
		func_1124(func_1365(iParam0));
	}
}

int func_1127(int iParam0)
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

bool func_1128(int iParam0, int iParam1)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42339[iParam0] && iParam1) != 0;
}

bool func_1129(int iParam0)
{
	if (!func_367(iParam0))
	{
		return false;
	}
	return func_1128(iParam0, 2);
}

void func_1130(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_367(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_1366(iParam0);
	if (bParam1)
	{
		func_1123(iVar0);
	}
	else
	{
		func_1124(iVar0);
	}
}

int func_1131(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return -765810527;
		case 5:
		case 6:
		case 7:
		case 8:
			return 34802860;
		case 9:
		case 10:
		case 11:
		case 12:
			return -736232052;
		default:
			break;
	}
	return func_1367(iParam0);
}

int func_1132()
{
	return Global_0.f_7;
}

bool func_1133()
{
	struct<2> Var0;
	float fVar2;

	if (!func_70())
	{
		return false;
	}
	if (func_6(32768))
	{
		return false;
	}
	if (func_88(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE")))
	{
		return false;
	}
	if (!func_226(Global_1835011[77 /*74*/].f_1, 1) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("FINALE3_OUTRO")) > 0)
	{
		return false;
	}
	if (Global_1914319.f_18941.f_17 || Global_1914319.f_18941.f_15)
	{
		return false;
	}
	if (Global_1392040 & 8388608 != 0)
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return false;
	}
	if (Global_1392040.f_6)
	{
		return false;
	}
	if (Global_1914319.f_17369)
	{
		return false;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return false;
	}
	if (UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return false;
	}
	if (Global_1898437 == Global_1347702[42 /*49*/].f_15 && (MISC::GET_GAME_TIMER() - Global_1898438) <= 60000)
	{
		return false;
	}
	Var0 = { func_759(joaat("TOTAL_PROGRESS_MADE")) };
	fVar2 = func_1368(Var0);
	return fVar2 >= 100f;
}

bool func_1134(var uParam0)
{
	return func_1369(*uParam0, 1);
}

void func_1135(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1134(uParam0))
	{
		func_1370(uParam0);
	}
}

void func_1136(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_1137(var uParam0)
{
	if (!func_1134(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1371(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1372() - uParam0->f_1);
}

void func_1138(int iParam0)
{
	Global_0.f_7 = iParam0;
	func_1370(&(Global_0.f_9));
}

void func_1139(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1373(iParam0, 0);
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
		func_1140(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1140(int iParam0)
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
			func_1373(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1374(1);
	}
}

bool func_1141()
{
	return Global_1425247.f_53;
}

int func_1142()
{
	return Global_1572864;
}

bool func_1143()
{
	return (func_88(Global_1935630, 4096) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

void func_1144(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_2() == -1)
	{
		func_1375();
	}
	else
	{
		return;
	}
	func_1376();
	Global_40.f_9.f_14 = func_72();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1377())
		{
			func_1378(Global_1310720.f_1);
		}
		else if (func_86() == func_1379(Global_36, 1) && func_1380() != 2)
		{
			func_1378(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_1378(Global_36);
		}
		func_1381(Global_36, &vVar0, &uVar4);
		if (!func_1377())
		{
			if (func_448(vVar0, Global_36) < func_448(Global_40.f_9.f_7, Global_36))
			{
				func_1378(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_1379(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1381(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_888(&Global_1935630, 8192);
	}
	func_1382();
}

void func_1145(bool bParam0)
{
	if (!func_5(&Global_0, 2))
	{
		func_1144(0, 0);
		SAVE::SAVEGAME_SAVE_SP(-189896212);
		func_370(&Global_0, 2);
		if (bParam0)
		{
			func_370(&Global_0, 32);
		}
		func_730(&Global_0, 1);
	}
}

void func_1146(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_1383(uParam0))
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

void func_1147(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_810(iParam0, iParam1);
}

void func_1148(int iParam0, int iParam1)
{
	if (!func_20(iParam0))
	{
		return;
	}
	func_1384(iParam0, iParam1);
}

void func_1149(int iParam0, float fParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	Global_40.f_490[iParam0] = fParam1;
}

void func_1150(int iParam0, float fParam1)
{
	if (!func_18(iParam0))
	{
		return;
	}
	Global_40.f_490.f_201[iParam0] = fParam1;
}

void func_1151(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

int func_1152(int iParam0)
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

int func_1153()
{
	return Global_1899516;
}

int func_1154(int iParam0)
{
	return iParam0 & 31;
}

bool func_1155(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

int func_1156(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_1157(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1385(iParam0);
	}
	else
	{
		func_1386(iParam0, iParam1);
	}
	func_1387();
}

bool func_1158(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

bool func_1159(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_612(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_1160(int iParam0)
{
	int iVar0;
	int iVar1;

	func_612(iParam0, &iVar0, &iVar1);
	func_1388(iVar0, iVar1);
}

void func_1161(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1163(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_397(Global_1347702[iParam0 /*49*/].f_15) != 0)
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

Vector3 func_1164(int iParam0)
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

bool func_1165(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_1166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_523(iParam0))
	{
		return false;
	}
	func_915(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183.f_73[iParam0 /*7*/][iVar0], iVar1);
}

int func_1167(int iParam0)
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

int func_1168(int iParam0)
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

void func_1169(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_1170()
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

int func_1171(int iParam0)
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

void func_1172(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_1173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1174(int iParam0)
{
	if (!func_20(iParam0))
	{
		return false;
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (func_17(iParam0))
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
			switch (func_17(iParam0))
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

void func_1175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_738(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1389(func_1334(iParam0), 6);
}

void func_1176(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_738(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_555(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1390(func_1334(iParam0), 6);
}

int func_1177(int iParam0)
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

int func_1178(int iParam0)
{
	struct<5> Var0;

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
	func_1391(iParam0, Global_1898164.f_162);
	return 1;
}

int func_1179(int iParam0)
{
	int iVar0;

	iVar0 = func_398(Global_1347702[iParam0 /*49*/].f_48);
	func_73(&iVar0, 0, 0, Global_1347702[iParam0 /*49*/].f_47, 0, 0, 0, 0);
	return iVar0;
}

bool func_1180(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_18(iParam0))
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

void func_1181(int iParam0)
{
	if (!func_1180(iParam0))
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
				}
				func_733(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, -1446646876);
			}
			func_461(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

bool func_1182(int iParam0)
{
	if ((iParam0 == 97 || iParam0 == 99) || iParam0 == 6)
	{
		return true;
	}
	return false;
}

int func_1183()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1184(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_1185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1392(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1183())
	{
		return -1;
	}
	iVar0 = func_1184(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_1157(iVar1, 0);
	func_1188(iVar1, 0);
	func_1151(iVar1, 0);
	func_1384(iVar1, 0);
	func_1393(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1394(iVar1, iParam4);
	}
	return iVar1;
}

int func_1186(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_499(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1187(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

void func_1188(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

int func_1189()
{
	return Global_40.f_11095.f_35;
}

bool func_1190(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_1191()
{
	int iVar0;
	int iVar1;

	iVar0 = func_398(Global_1347702[9 /*49*/].f_15);
	iVar1 = func_398(Global_1835011[69 /*74*/].f_1);
	if (func_76(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1192(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return func_226(Global_1835011[iParam0 /*74*/].f_1, 1);
}

void func_1193(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_1395(iParam0, iParam1, bParam2);
}

int func_1194(int iParam0)
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

int func_1195(int iParam0)
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

void func_1196(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;

	iVar0 = func_1396();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1397(iParam0);
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
	if (func_554(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_315())
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
	Global_40.f_11095.f_35 = func_819(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1396();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1398(iVar1);
		func_1400(func_1399(), 0, 4000);
		func_1401(Global_40.f_11095.f_35);
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
		func_1402(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_567(func_759(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1195(14))
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
					sParam4 = func_1403(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1005(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1005(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_567(func_759(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1195(4))
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
					sParam4 = func_1403(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1005(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1005(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_759(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_380(10, 1);
	}
}

void func_1197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_1198(int iParam0)
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

void func_1199()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1404(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1405();
		}
		return;
	}
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_1406();
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
	func_1404(1);
}

void func_1200()
{
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_290(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1201()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1407(0);
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
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1407(1);
}

void func_1202()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_687(15000, 0, 0, 0, 1);
			func_1407(0);
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
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_688(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1407(1);
}

void func_1203()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_581(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_467(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_290(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1408(1))
			{
				func_595(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_581(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_467(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_290(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1408(2))
			{
				func_595(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_1408(4))
		{
			func_595(4);
		}
		if (func_1408(0))
		{
			func_1409(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_581(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_299(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_581(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_299(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (func_1408(1))
		{
			func_1409(1);
		}
		if (func_1408(2))
		{
			func_1409(2);
		}
		if (func_1408(4))
		{
			func_1409(4);
		}
		if (!func_1408(0))
		{
			func_595(0);
		}
	}
}

void func_1204()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { func_1410() };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_287(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_559(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1410() };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		func_1411(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1411(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1411(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1411(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1411(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1411(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1411(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1411(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1411(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1411(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1411(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1411(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1411(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1411(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_670())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_533(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_554(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_554(24) && func_533(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_533(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_554(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_1205()
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

bool func_1206(int iParam0)
{
	switch (func_555(iParam0))
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

int func_1207(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_698(iParam0, 1, 0) };
	return func_699(Var0.f_4);
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (func_2() == -1)
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
		iVar0 = func_700(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1108(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

bool func_1209(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;

	Var4 = func_1016(iParam6);
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
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1413(uParam0, func_1412(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_700(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
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
							if (func_1414(iVar3) && func_1357(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
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
						while (iVar1 < Global_1946804.f_2652)
						{
							func_1109(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
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

Vector3 func_1210(int iParam0, int iParam1)
{
	if (func_2() == -1)
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

int func_1211(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { func_1210(iParam0, iParam1) };
	return vVar0.x;
}

void func_1212(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1213(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1214(int iParam0)
{
	func_1108(&(Global_1946804.f_1497.f_1[func_700(iParam0, 1) /*3*/]), 2, 6);
	func_1108(&(Global_1946804.f_1378.f_1[func_700(iParam0, 1) /*3*/]), 2, 6);
}

bool func_1215(int iParam0)
{
	return iParam0 != 0;
}

int func_1216(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!func_1215(iParam0))
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

bool func_1217(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1218(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1219()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1415(iVar1);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1416(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1220()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1415(iVar0);
		if (!UNLOCK::UNLOCK_IS_VISIBLE(func_1416(iVar1)))
		{
			UNLOCK::UNLOCK_SET_VISIBLE(func_1416(iVar1), true);
		}
		iVar0++;
	}
}

int func_1221(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;

	if (func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_286(iVar0, 0))
	{
		return 0;
	}
	if (!func_1417(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1242(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_297(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_698(iVar0, 0, 1) };
	iVar10 = func_1418(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1419(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1420(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_290(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_687(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1222(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
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

void func_1223(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1281())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1281())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(func_778(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_17(iParam0);
	if (func_772(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_772(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1421(1, iVar1);
					func_1421(8, iVar1);
					func_1421(7, iVar1);
					break;
				case 12:
					func_1421(6, iVar1);
					break;
				case 53:
					func_1421(3, iVar1);
					func_1421(7, iVar1);
					func_1421(4, iVar1);
					break;
				case 20:
					func_1421(8, iVar1);
					break;
				case 19:
					func_1421(1, iVar1);
					func_1421(2, iVar1);
					break;
				case 24:
					func_1421(3, iVar1);
					func_1421(9, iVar1);
					func_1421(20, iVar1);
					break;
				case 28:
					func_1421(1, iVar1);
					break;
				case 34:
					func_1421(23, iVar1);
					func_1421(2, iVar1);
					func_1421(18, iVar1);
					break;
				case 29:
					func_1421(0, iVar1);
					func_1421(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1421(0, iVar1);
					func_1421(3, iVar1);
					func_1421(2, iVar1);
					func_1421(11, iVar1);
					func_1421(6, iVar1);
					func_1421(25, iVar1);
					func_1421(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1421(5, iVar1);
					break;
				case 63:
					func_1421(1, iVar1);
					func_1421(3, iVar1);
					break;
				case 37:
					func_1421(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_809(0, 10, 11, joaat("CABR01")))
			{
				func_1421(7, iVar1);
				func_1421(4, iVar1);
			}
			else if (iParam0 == func_809(0, 7, 11, joaat("CACR02")))
			{
				func_1421(8, iVar1);
				func_1421(15, iVar1);
			}
			else if (iParam0 == func_809(0, 8, 11, joaat("CACR03")))
			{
				func_1421(3, iVar1);
			}
			else if (iParam0 == func_809(0, 11, 11, joaat("CACR01")))
			{
				func_1421(6, iVar1);
				func_1421(3, iVar1);
			}
			else if (iParam0 == func_809(0, 12, 11, joaat("CACR04")))
			{
				func_1421(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1422()));
	if (!func_437(629))
	{
		func_293(629, 0);
	}
}

int func_1224(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;

	if (!func_20(iParam0))
	{
		return 0;
	}
	cVar0 = func_475(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1225(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

char* func_1226(char* sParam0)
{
	return sParam0;
}

void func_1227(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_1228(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_1229(int iParam0)
{
	if (!func_479(iParam0))
	{
		return 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_1154;
}

void func_1230(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_479(iParam0))
	{
		return;
	}
	if (func_872(iParam0, iParam1))
	{
		func_1423(iParam0, bParam2);
		return;
	}
	iVar0 = -1;
	if (func_873(iParam0, iParam1, &iVar0))
	{
		func_879(iParam0, iVar0, bParam2);
	}
}

bool func_1231(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_1424(iParam0, &iVar0))
	{
		return func_1425(iVar0);
	}
	return false;
}

void func_1232(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		PED::_0x2B4CE170DE09F346(Global_35, iParam0);
	}
	func_1426(iParam0, 0);
}

bool func_1233(int iParam0)
{
	int iVar0;
	int iVar1;

	func_911(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_1234(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

void func_1235(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_1236(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_1237(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

bool func_1238(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1239()
{
	return Global_1109400.f_245;
}

int func_1240(int iParam0, int iParam1)
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

void func_1241(var uParam0)
{
	*uParam0 = 0;
}

int func_1242(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_286(iParam0, 0))
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

bool func_1243(int iParam0)
{
	if (func_1427(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_1244(int iParam0)
{
	if (!func_286(*iParam0, 0))
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

bool func_1245(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;

	if (!func_286(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_698(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_943((398 + iVar29), 1);
		if (func_944(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_945(iParam0, &Var6, iVar5);
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

int func_1246(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_946(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_738(bParam6), &Var0, 0);
	return uVar4;
}

int func_1247(int iParam0)
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

float func_1248(int iParam0)
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
			return func_1428(iParam0);
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
			return func_1428(iParam0);
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
			return func_1428(iParam0);
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

bool func_1249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_554(18);
		case 2:
			return func_554(20);
		case 1:
			return func_554(19);
		default:
			break;
	}
	return true;
}

int func_1250(int iParam0)
{
	return func_1429(Global_40.f_11095.f_11[iParam0]);
}

void func_1251(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_554(31))
	{
		return;
	}
	iVar0 = func_1250(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1250(iParam0);
	if (func_1430(iParam0) && func_1431(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1432(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1433(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_293(func_1434(iParam0), 0);
					}
					func_1435(iParam0, iVar2, iVar3);
					func_1436(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1252(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1253(int iParam0)
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

bool func_1254(int iParam0, var uParam1)
{
	if (!func_1437(iParam0))
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

int func_1255()
{
	return func_1438(Global_40.f_12019);
}

int func_1256()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_930(iVar1);
		if (func_581(iVar2, 1, 0) || func_1262(func_1261(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1257()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1439(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1258()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1267(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1259()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_1260(int iParam0)
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

int func_1261(int iParam0)
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

bool func_1262(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1263(int iParam0)
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

int func_1264(int iParam0)
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

int func_1265(int iParam0)
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

char* func_1266(int iParam0)
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

bool func_1267(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_1268(int iParam0)
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

char* func_1269(int iParam0)
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

bool func_1270(int iParam0)
{
	if (func_1440(iParam0) && func_581(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1441(iParam0) && func_1442(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1271(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_598(iParam0));
}

int func_1272(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_1273(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_738(0);
	*uParam1 = { func_946(iParam0, func_1021(0), iParam3, 0) };
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

bool func_1274(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1275(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1276(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_1277(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946804.f_57[func_700(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_703(524288))
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

bool func_1278(int iParam0)
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

int func_1279(int iParam0)
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

int func_1280(int iParam0)
{
	return func_1443(iParam0, -1);
}

bool func_1281()
{
	if (func_840())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_1282(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1281())
	{
		func_1005(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_1005(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_1283(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1284(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_1285(int iParam0)
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

void func_1286(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_1287(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_1288()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1289(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_1290()
{
	float fVar0;
	int iVar1;

	fVar0 = func_312(13);
	iVar1 = func_1444(fVar0);
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

float func_1291()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1292()
{
	if (func_840())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1293()
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

float func_1294()
{
	return Global_1955565.f_3;
}

void func_1295(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1445(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1296(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_1445(iParam0, 2, 0, 0);
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

bool func_1297()
{
	return func_312(12) <= -99f;
}

bool func_1298()
{
	return func_312(12) >= 99f;
}

int func_1299()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (func_555(iVar1) == -999503751)
		{
			if (func_1446() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_1300(int iParam0, bool bParam1)
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

void func_1301(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1447(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_301(50);
			}
			else
			{
				func_301(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_301(51);
			}
			else
			{
				func_301(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_1448(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_585();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_585();
			}
			break;
		case 3:
			func_301(24);
			if (bParam1)
			{
				if (!func_1448(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_585();
				}
			}
			break;
	}
}

void func_1302(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_1449(0))
			{
				iVar0++;
			}
			if (func_1449(2))
			{
				iVar0++;
			}
			if (func_1449(4))
			{
				iVar0++;
			}
			if (!func_1450(16))
			{
				if (iVar0 == 1)
				{
					func_1451();
					func_293(456, 1);
					func_1452(16);
				}
			}
			if (!func_1450(32))
			{
				if (iVar0 >= 3)
				{
					func_1451();
					func_293(456, 1);
					func_1452(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_1449(1))
			{
				iVar0++;
			}
			if (func_1449(3))
			{
				iVar0++;
			}
			if (func_1449(7))
			{
				iVar0++;
			}
			if (!func_1450(1))
			{
				if (iVar0 == 1)
				{
					func_1453();
					func_293(457, 1);
					func_1452(1);
				}
			}
			if (!func_1450(2))
			{
				if (iVar0 >= 3)
				{
					func_1453();
					func_293(457, 1);
					func_1452(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_1449(5))
			{
				iVar0++;
			}
			if (func_1449(6))
			{
				iVar0++;
			}
			if (func_1449(8))
			{
				iVar0++;
			}
			if (!func_1450(4))
			{
				if (iVar0 == 1)
				{
					func_1454();
					func_293(455, 1);
					func_1452(4);
				}
			}
			if (!func_1450(8))
			{
				if (iVar0 >= 3)
				{
					func_1454();
					func_293(455, 1);
					func_1452(8);
				}
			}
			break;
	}
}

void func_1303(var uParam0)
{
	func_1000(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946804.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_1000(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_1304(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_1383(uParam0))
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

bool func_1305(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1306(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_1307(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
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

int func_1308(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_976(iVar9);
	iVar2 = func_976(iVar10);
	iVar3 = func_976(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_976(iVar12);
	}
	iVar5 = func_977(iVar9);
	iVar6 = func_977(iVar10);
	iVar7 = func_977(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_977(iVar12);
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

int func_1309(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1455(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_1310(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_1311(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_1312(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

void func_1313(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1456(func_72(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_1314(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*iParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*iParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*iParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*iParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*iParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_1040(iParam1, iParam2, &uVar0, &uVar1, 0, func_1457());
	}
}

void func_1315()
{
	bool bVar0;

	bVar0 = func_1043();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !func_1043())
	{
		func_1458(14);
	}
}

void func_1316(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_1459(iParam0))
	{
		return;
	}
	if (Global_40.f_7748.f_1 == iParam0)
	{
		return;
	}
	Global_40.f_7748.f_1 = iParam0;
	if (!bParam1)
	{
		Global_40.f_7748.f_5 = func_72();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_1043());
		func_1314(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_73(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_1317()
{
	bool bVar0;

	bVar0 = func_1043();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !func_1043())
	{
		func_1458(14);
	}
}

void func_1318()
{
	int iVar0;

	if (func_1460() >= 7)
	{
		iVar0 = func_72();
		func_73(&iVar0, 0, 0, 0, 2, 0, 0, 0);
		DECORATOR::DECOR_SET_INT(Global_35, "hairLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "hairShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "hairLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "hairLong");
	}
}

void func_1319(int iParam0)
{
	bool bVar0;

	bVar0 = func_648(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !func_648(iParam0))
	{
		func_293(490, 1);
		func_1461(iParam0, 0);
	}
}

void func_1320(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_293(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && func_226(Global_1835011[4 /*74*/].f_1, 1))
	{
		func_293(493, 0);
	}
}

void func_1321(int iParam0)
{
	bool bVar0;

	bVar0 = func_648(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !func_648(iParam0))
	{
		func_293(490, 1);
		func_1461(iParam0, 0);
	}
}

void func_1322()
{
	int iVar0;

	iVar0 = func_72();
	func_73(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_1462(0) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chinLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chinShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chinLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chinLong");
	}
	if (func_1462(1) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "chopsLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "chopsShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "chopsLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "chopsLong");
	}
	if (func_1462(2) >= 7)
	{
		DECORATOR::DECOR_SET_INT(Global_35, "stacheLong", iVar0);
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheShort"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "stacheShort");
		}
	}
	else if (DECORATOR::DECOR_EXIST_ON(Global_35, "stacheLong"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "stacheLong");
	}
}

int func_1323(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_699(iVar0);
}

var func_1324(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_759(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1325()
{
	int iVar0;

	if (func_2() == 0)
	{
		return -1;
	}
	iVar0 = func_797();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_85(24))
	{
		return 50000;
	}
	return 150000;
}

int func_1326()
{
	return Global_1934266.f_4;
}

void func_1327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYAMBARINO"), iParam1);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWHANOVER"), iParam1);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYLEMOYNE"), iParam1);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYWESTELIZABETH"), iParam1);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEBOUNTYNEWAUSTIN"), iParam1);
			break;
		default:
			break;
	}
}

void func_1328(int iParam0)
{
	int iVar0;

	iVar0 = func_1463(iParam0);
	switch (iParam0)
	{
		case 0:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELAMBARINO"), iVar0);
			break;
		case 1:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWHANOVER"), iVar0);
			break;
		case 2:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELLEMOYNE"), iVar0);
			break;
		case 3:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELWESTELIZABETH"), iVar0);
			break;
		case 4:
			COMPAPP::_0x74BCCEB233AD95B2(joaat("STATEWANTEDLEVELNEWAUSTIN"), iVar0);
			break;
		default:
			break;
	}
}

void func_1329(int iParam0, bool bParam1)
{
	if (!func_365(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_716(iParam0, 4);
	}
	else
	{
		func_717(iParam0, 4);
	}
	func_1464(iParam0, bParam1);
}

bool func_1330(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132155.f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1465(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam2->f_1), uParam2);
}

void func_1331(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), uParam0);
}

int func_1332(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1333(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_555(iParam0) != -999503751)
		{
			func_1466(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (func_555(iParam0) != -999503751)
	{
		func_1466(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_1094(iParam0, 1);
	return 1;
}

bool func_1333(int iParam0, int iParam1)
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

int func_1334(int iParam0)
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

bool func_1335(int iParam0)
{
	return (Global_1946804.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1336(int iParam0)
{
	Global_1946804.f_978 = iParam0;
}

int func_1337(int iParam0)
{
	int iVar0;

	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_555(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1338(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x22E590F108289A9D(func_738(bParam6), &uParam0, iParam4, &Var0))
	{
		return false;
	}
	if (!func_1101(Var0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_1339(struct<4> Param0, int iParam4)
{
	struct<11> Var0;

	if (!func_558(0))
	{
		return func_1467(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1101(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_738(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1340(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
	}
	if (func_297(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_1341(int iParam0, int iParam1)
{
	struct<4> Var0;

	if (!func_1468(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1082() };
	*iParam1 = func_1342(Var0, iParam0, 0);
	if (!func_286(*iParam1, 0))
	{
		return false;
	}
	return true;
}

int func_1342(struct<4> Param0, int iParam4, int iParam5)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1338(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1343(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_1344(int iParam0, var uParam1, bool bParam2)
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
	Var2 = { func_1020(0, iParam0, -1591664384, -1591664384, 0, 0) };
	func_1022(&Var2, func_1082());
	if (func_1023(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (func_384(&Var16, iVar30, iVar0, iVar1))
			{
				if (func_286(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && func_1343(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						func_385(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		func_385(iVar0);
	}
	return false;
}

void func_1345(int iParam0, var uParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1346(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1469(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_700(func_1207(iParam1), 1);
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
		func_1470(uParam0);
	}
}

bool func_1347(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = -1;
	if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = iParam1;
	}
	if (iParam4 != 0)
	{
		iVar1 = iParam4;
	}
	else
	{
		iVar1 = func_619(iParam1);
	}
	if (iVar0 == -1 && !func_622(iVar1, func_693()))
	{
		return true;
	}
	if (uParam2->f_1 != 0 && func_1471(uParam2, 1))
	{
		if (uParam2->f_1 == iVar1)
		{
			if (bParam3)
			{
				return func_1472(iParam0, uParam2);
			}
			else
			{
				return true;
			}
		}
		else if (uParam2->f_1 != iVar1)
		{
			func_1473(uParam2);
		}
	}
	if (!func_1471(uParam2, 1))
	{
		func_1474(&(uParam2->f_1));
		if (!bParam5)
		{
			if (!func_1475(&(uParam2->f_1), &uVar2, iVar1, iVar0, 1, 0))
			{
				return true;
			}
		}
		uParam2->f_1 = iVar1;
		func_1476(uParam2, 1);
	}
	if (!bParam3)
	{
		return true;
	}
	return func_1472(iParam0, uParam2);
}

bool func_1348(int iParam0)
{
	return func_1477(iParam0, &(Global_1946804.f_1949));
}

int func_1349(bool bParam0, bool bParam1, bool bParam2)
{
	return func_1478(bParam0, &(Global_1946804.f_1949), bParam1, 0, 1, bParam2);
}

void func_1350(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
	}
	else
	{
		iVar0 |= 1;
	}
	if (bParam2 && Global_1946804.f_2535 != 0)
	{
		func_1479(Global_1946804.f_2535);
		func_1480(0);
		Global_1946804.f_2535 = 0;
	}
	if (func_703(32768))
	{
		func_1481(1108822547);
	}
	if (func_2() != -1)
	{
		func_325(2, 0, 6, iParam0, 0);
		func_325(4, 0, 0, iParam0, 0);
		func_325(5, 0, 0, iParam0, 0);
		func_325(6, 0, 0, iParam0, 0);
	}
	else
	{
		func_325(2, 0, iVar0, iParam0, 0);
	}
	func_1336(0);
}

void func_1351(var uParam0, int iParam1)
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
			if ((func_1482(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_1482(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1483(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_1352(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1484(uParam0, 1))
	{
		func_1485(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1353(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_1354(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1107(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1107(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1107(iVar2, iVar0);
		}
	}
}

int func_1355(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_693();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1356(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1357(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_1358(int iParam0, int iParam1)
{
	return (Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_1359(var uParam0)
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

void func_1360(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iParam0 /*3*/] = { Global_1946804.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_2() == -1)
	{
		func_1212(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1486(&(Global_1946804.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1361(int iParam0, int iParam1)
{
	if (func_2() == -1)
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

void func_1362(int iParam0, bool bParam1, int iParam2)
{
	func_1487(&(Global_1946804.f_1378), iParam0);
	func_1488(2, iParam0, 6);
	if (bParam1)
	{
		func_1080(0, 1);
	}
}

int func_1363(int iParam0)
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

int func_1364(int iParam0)
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

int func_1365(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("STATE_LEMOYNE");
		case 3:
			return joaat("STATE_WEST_ELIZABETH");
		case 1:
			return joaat("STATE_NEW_HANOVER");
		case 0:
			return joaat("STATE_AMBARINO");
		case 4:
			return joaat("STATE_NEW_AUSTIN");
		case 5:
			return joaat("STATE_GUARMA");
		default:
			break;
	}
	return 0;
}

int func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return 1776960747;
}

int func_1367(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MISSION_COOP_CHAR_CREATOR");
		case 1:
			return joaat("MISSION_COOP_INTRO_RHODES");
		case 2:
			return joaat("MISSION_COOP_INTRO_VALENTINE");
		case 3:
			return joaat("MISSION_COOP_INTRO_BLACKWATER");
		case 4:
			return joaat("MISSION_COOP_INTRO_TUMBLEWEED");
		case 5:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_RHODES");
		case 6:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_VALENTINE");
		case 7:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_BLACKWATER");
		case 8:
			return joaat("MISSION_COOP_FREEMODE_TUTORIAL_TUMBLEWEED");
		case 9:
			return joaat("MISSION_COOP_CLAY2_RHODES");
		case 10:
			return joaat("MISSION_COOP_CLAY2_VALENTINE");
		case 11:
			return joaat("MISSION_COOP_CLAY2_BLACKWATER");
		case 12:
			return joaat("MISSION_COOP_CLAY2_TUMBLEWEED");
		case 13:
			return joaat("MISSION_COOP_GVO_INTRO_1");
		case 14:
			return joaat("MISSION_COOP_GVO_INTRO_2");
		case 15:
			return joaat("MISSION_COOP_GVO_INTRO_3");
		case 16:
			return joaat("MISSION_COOP_GVO_OUTLAW_1");
		case 17:
			return joaat("MISSION_COOP_GVO_OUTLAW_2");
		case 18:
			return joaat("MISSION_COOP_GVO_OUTLAW_3");
		case 19:
			return joaat("MISSION_COOP_GVO_OUTLAW_4");
		case 20:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_1");
		case 21:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_2");
		case 22:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_3");
		case 23:
			return joaat("MISSION_COOP_GVO_GUNSLINGER_4");
		case 24:
			return joaat("MISSION_COOP_GVO_REVENGE_1");
		default:
			break;
	}
	return 0;
}

float func_1368(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

bool func_1369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1370(var uParam0)
{
	func_1489(uParam0, 0f);
}

bool func_1371(var uParam0)
{
	return func_1369(*uParam0, 2);
}

float func_1372()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_1373(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_1374(1);
	}
}

void func_1374(bool bParam0)
{
	if (bParam0)
	{
		func_1490(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1491(&(Global_40.f_12019.f_42), 1);
	}
}

void func_1375()
{
	if (func_2() != -1)
	{
		return;
	}
	if (!func_70())
	{
		return;
	}
	func_1492(&(Global_40.f_40));
}

void func_1376()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_0xC29996A337BDD099(Global_1425371[iVar0 /*373*/].f_1))
		{
			Global_40.f_11029[iVar0 /*5*/].f_1 = { VEHICLE::_0x1E8A921112891651(Global_1425371[iVar0 /*373*/].f_1) };
			Global_40.f_11029[iVar0 /*5*/].f_4 = VEHICLE::_0x67995318F5FAA496(Global_1425371[iVar0 /*373*/].f_1);
		}
		iVar0++;
	}
}

bool func_1377()
{
	return !func_1050(Global_1310720.f_1);
}

void func_1378(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_1379(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1493();
	if (func_327(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1494(vParam0, iParam3);
}

int func_1380()
{
	return Global_40.f_4283.f_4;
}

void func_1381(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1495())
	{
		fVar0 = func_727(vParam0, Global_40.f_6);
	}
	if (func_1496(33554432))
	{
		if (!func_1051(Global_40.f_2, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
		{
			fVar1 = func_727(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_1382()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_88(Global_1935630, 8192))
	{
		return;
	}
	if (func_6(32768))
	{
		return;
	}
	func_1173(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * func_1498(10f, BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * func_1498(5f, BUILTIN::TO_FLOAT(func_1497(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * func_1498(25f, BUILTIN::TO_FLOAT(func_1324(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * func_1498(1f, BUILTIN::TO_FLOAT(func_1324(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * func_1498(6f, BUILTIN::TO_FLOAT(func_1324(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * func_1498(1f, BUILTIN::TO_FLOAT(func_1324(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = func_1499();
	fVar0 = (fVar0 + (0.1111111f * func_1498(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + func_1498(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1498(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_1501()))));
	if (func_83(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_83(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_1500(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * func_1498(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1498(5f, BUILTIN::TO_FLOAT(func_1324(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * func_1498(5f, BUILTIN::TO_FLOAT(func_1497(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(func_1275(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	func_1502(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1498((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1498(1f, BUILTIN::TO_FLOAT(func_1503(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(func_1504());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * func_1498(5f, BUILTIN::TO_FLOAT(func_1324(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * func_1498(1f, BUILTIN::TO_FLOAT(func_1324(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * func_1498(1f, BUILTIN::TO_FLOAT(func_1324(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * func_1498(1f, BUILTIN::TO_FLOAT(func_1324(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1498(1f, BUILTIN::TO_FLOAT(func_1497(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { func_759(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = func_1368(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_20(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_20(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_762(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_457(Global_1898330[iVar61]);
				}
				else
				{
					func_451(iVar61, 0);
					if (func_772(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_778(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_778(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_778(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_1383(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_1384(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

int func_1385(int iParam0)
{
	int iVar0;

	iVar0 = func_1152(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1505(iVar0);
}

int func_1386(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (Global_1058888.f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888.f_40501 == 0)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888.f_40501)
	{
		if (iParam0 == Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			iVar2++;
		}
		else if (iParam0 < Global_1058888.f_40501.f_1[iVar2 /*2*/])
		{
			func_1506(iVar2);
			Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888.f_40501 < 31)
	{
		iVar2 = Global_1058888.f_40501;
		Global_1058888.f_40501.f_1[iVar2 /*2*/] = { Var0 };
		Global_1058888.f_40501++;
		if (Global_1058888.f_40501 > 32)
		{
			Global_1058888.f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1387()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40501)
	{
		iVar0++;
	}
}

void func_1388(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_1389(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 - (Global_1946804.f_2657.f_26.f_6 && iParam0));
}

void func_1390(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_6 = (Global_1946804.f_2657.f_26.f_6 || iParam0);
}

void func_1391(int iParam0, int iParam1)
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
			func_1507((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1507(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_20(Global_1898164.f_1[0 /*5*/]))
	{
		func_780(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_1392(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1393(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/] = iParam1;
}

void func_1394(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_498[iParam0 /*2*/].f_1 = iParam1;
}

void func_1395(int iParam0, int iParam1, bool bParam2)
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

int func_1396()
{
	int iVar0;

	iVar0 = func_1189();
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

int func_1397(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_2() != -1)
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
	fVar1 = func_1508(MISC::ABSF(fVar1) < 1f, func_1508(fVar1 < 0f, -1f, 1f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_1398(int iParam0)
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

int func_1399()
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

void func_1400(int iParam0, bool bParam1, int iParam2)
{
	func_1509((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1955569.f_1.f_2.f_1, iParam0);
	func_1510(iParam0);
}

void func_1401(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_20[2], func_1511(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_1402(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1512(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1513(iVar5, &iVar2, &iVar0))
			{
				if (!func_286(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1514(iVar2);
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
							if (func_552(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1396() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_1396() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1515();
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

char* func_1403(int iParam0)
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

void func_1404(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_290(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1405();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1516(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_828(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_299(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		func_1517(146323340, func_1082());
		Var0 = { func_1518() };
		if (func_1519(&Var0) == -1387633835)
		{
			func_1520(&Var0);
			func_1521(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_1522(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1523(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_1524(iVar6, iVar7);
				func_1525(iVar6, iVar8);
				func_1526(iVar6, iVar9);
				func_1527(iVar6, 0);
				if (func_1528(iVar6))
				{
					func_1529(iVar6);
				}
				iVar10 = func_1530(iVar8);
				func_1531(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_1405()
{
	if (!func_1532(-1898635967, func_1082(), 1))
	{
		return 0;
	}
	if (func_840())
	{
		if (!func_1532(146323340, func_1082(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1406()
{
	func_288(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_288(joaat("WEAPON_SHOTGUN_PUMP"));
	func_288(joaat("WEAPON_RIFLE_VARMINT"));
}

void func_1407(bool bParam0)
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
		func_290(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_290(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_299(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_299(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_299(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_1522(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1523(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_1524(iVar0, iVar1);
				func_1525(iVar0, iVar2);
				func_1526(iVar0, iVar3);
				func_1527(iVar0, 0);
				if (func_1528(iVar0))
				{
					func_1529(iVar0);
				}
				iVar4 = func_1530(iVar2);
				func_1531(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1405();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

bool func_1408(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1409(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<10> Var17;
	struct<14> Var39;

	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_383("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_384(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_945(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_385(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_385(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1411(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;

	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1338(Param1, iParam5, &Var5, 0))
	{
		func_947(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_993(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1339(Var19, 1);
}

int func_1412(int iParam0)
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

void func_1413(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1533(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_1102(iVar0, 1);
			if (func_1353(iVar0, iParam1))
			{
				vVar4 = { func_1210(iVar0, -1) };
				if ((vVar4.x != Global_1946804.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1358(iVar7, 4))
				{
					func_1112(iVar7, 4, 6);
				}
			}
			else
			{
				func_1534(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946804.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1414(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946804.f_964.f_2 = 0;
	if (func_2() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1017(&(Global_1946804.f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1946804.f_964), 1409451727))
	{
		return false;
	}
	return true;
}

int func_1415(int iParam0)
{
	return BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iParam0)));
}

int func_1416(int iParam0)
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

bool func_1417(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_2() == -1)
	{
		if (func_919(iParam0))
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

int func_1418(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1244(&iParam0);
	if (!func_286(iParam0, 0))
	{
		return 0;
	}
	if (!func_558(0))
	{
		bParam2 = true;
	}
	iVar0 = func_923(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2 || !func_1243(iParam0))
	{
		iVar1 = func_1246(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = INVENTORY::_0xE787F05DFC977BDE(func_738(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1419(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;

	if (func_297(iParam0, -5284486))
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
		iVar49 = 0;
		if (func_1535(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
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
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_624(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_627(iVar62, iVar61);
					if (func_286(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1419(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1419(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1535(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1420(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_686(1);
}

void func_1421(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1536(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::VAR_STRING(2, func_831(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(func_1536(iParam0)), 1997120069, MISC::VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::VAR_STRING(2, func_831(iParam0, 0))), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1422()
{
	return Global_40.f_4283.f_325;
}

void func_1423(int iParam0, bool bParam1)
{
	if (!func_479(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_1154 = bParam1;
}

bool func_1424(int iParam0, int iParam1)
{
	*iParam1 = 0;
	while (*iParam1 < 15)
	{
		if (Global_40.f_4237[*iParam1 /*3*/] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	*iParam1 = -1;
	return false;
}

bool func_1425(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1347701, iParam0);
}

void func_1426(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1;
	if (func_1424(iParam0, &iVar0))
	{
		func_1537(iVar0, bParam1);
	}
}

int func_1427(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_1428(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_1247(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_1429(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_1538(iVar6) - func_1538(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_1429(float fParam0)
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

int func_1430(int iParam0)
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

int func_1431(int iParam0)
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

int func_1432(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_1429(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_1538(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_1538(iVar0 + 1));
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

int func_1433(int iParam0)
{
	int iVar0;

	if (func_1539(iParam0, &iVar0))
	{
		return func_1538(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_1540())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_1540())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_1540())
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

int func_1434(int iParam0)
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

void func_1435(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_1541(iParam0));
	sVar4 = func_1543(func_1542(iVar3, iParam2));
	sVar6 = func_1544(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_1545(iParam0));
	iVar8 = func_1546(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_1547(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_807(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_1548(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_1436(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_1437(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1438(int iParam0)
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

bool func_1439(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_1440(int iParam0)
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

int func_1441(int iParam0)
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

int func_1442(int iParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1549(&iVar0, 0, iVar95, &Var1) && !func_1549(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_1550(iVar0, &Var1);
			if (func_286(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

int func_1443(int iParam0, int iParam1)
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
		iParam1 = func_738(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_409(&uVar6, iVar0);
	func_410(&uVar6, iVar1);
	func_411(&uVar6, iVar2);
	func_79(&uVar6, iVar3);
	func_78(&uVar6, iVar4);
	func_77(&uVar6, iVar5);
	return uVar6;
}

int func_1444(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_1445(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_1008(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_1008(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_1446()
{
	return Global_1946804.f_1497;
}

int func_1447(int iParam0)
{
	int iVar0;

	if (func_1551(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_1552(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_1553(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_1554(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_1448(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_581(func_1555(iVar0, iParam0), 1, 0))
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

bool func_1449(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_581(func_1556(iVar0, iParam0), 1, 0))
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

bool func_1450(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_1451()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = func_1250(1);
	func_1435(1, iVar0, 0);
}

void func_1452(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_1453()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = func_1250(2);
	func_1435(2, iVar0, 0);
}

void func_1454()
{
	int iVar0;

	if (func_2() != -1)
	{
		return;
	}
	func_603(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = func_1250(0);
	func_1435(0, iVar0, 0);
}

int func_1455(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case -426171916:
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

void func_1456(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_76(iParam0, iParam1, 1))
	{
		iVar0 = func_68(iParam1);
		iVar1 = func_69(iParam0);
		iVar2 = (func_69(iParam0) - func_69(iParam1));
		iVar3 = (func_68(iParam0) - func_68(iParam1));
		iVar4 = (func_67(iParam0) - func_67(iParam1));
		iVar5 = (func_64(iParam0) - func_64(iParam1));
		iVar6 = (func_65(iParam0) - func_65(iParam1));
		iVar7 = (func_66(iParam0) - func_66(iParam1));
	}
	else
	{
		iVar0 = func_68(iParam0);
		iVar1 = func_69(iParam1);
		iVar2 = (func_69(iParam1) - func_69(iParam0));
		iVar3 = (func_68(iParam1) - func_68(iParam0));
		iVar4 = (func_67(iParam1) - func_67(iParam0));
		iVar5 = (func_64(iParam1) - func_64(iParam0));
		iVar6 = (func_65(iParam1) - func_65(iParam0));
		iVar7 = (func_66(iParam1) - func_66(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_223(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_1557(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

int func_1457()
{
	if (func_1558(8))
	{
		return 8;
	}
	else if (func_1558(4))
	{
		return 4;
	}
	else if (func_1558(2))
	{
		return 2;
	}
	return 1;
}

void func_1458(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

bool func_1459(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

int func_1460()
{
	return Global_40.f_7748.f_1;
}

void func_1461(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
}

int func_1462(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

int func_1463(int iParam0)
{
	if (!func_365(iParam0))
	{
		return 0;
	}
	if (Global_40.f_358[iParam0 /*12*/].f_5 & 2 != 0)
	{
		return 5;
	}
	if (Global_40.f_358[iParam0 /*12*/] > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_1559(Global_40.f_358[iParam0 /*12*/]);
	}
	return 0;
}

void func_1464(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MAP::_0x563FCB6620523917(func_1560(iParam0), -1482012664);
	}
	else if (MAP::_0xE38450DBCBC70E3D(func_1560(iParam0), -1305340593) || MAP::_0xE38450DBCBC70E3D(func_1560(iParam0), -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(func_1560(iParam0));
	}
}

int func_1465(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("CHALLENGE");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = joaat("FEATURE");
			break;
		case -2:
			iVar0 = joaat("GOLD");
			break;
		case 2:
			iVar0 = joaat("MISSION_STORY");
			break;
		case 3:
			iVar0 = joaat("MISSION_PROCEDURAL");
			break;
		case 4:
			iVar0 = joaat("MISSION_MINIGAME");
			break;
		case 5:
			iVar0 = joaat("MISSION_FREE_MODE_EVENT");
			break;
		case 6:
			iVar0 = joaat("MISSION_VERSUS");
			break;
		case 7:
			iVar0 = joaat("PROPERTY");
			break;
		case 8:
			iVar0 = joaat("RECIPE");
			break;
		case 9:
			iVar0 = joaat("TITLE");
			break;
		case 10:
			iVar0 = joaat("SHOP");
			break;
		case 11:
			iVar0 = joaat("GFH_GIVERS");
			break;
		case 12:
			iVar0 = joaat("GFH_LOCATIONS");
			break;
		case 13:
			iVar0 = 1332629624;
			break;
		case 14:
			iVar0 = 1746212499;
			break;
		case 15:
			iVar0 = joaat("GVO_UNLOCKS");
			break;
		case 16:
			iVar0 = 1151893103;
			break;
		case 17:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

void func_1466(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1561(iParam1);
	func_1562(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1563(&(uParam0->f_26), iVar1);
		if (func_1564(uParam0->f_26, &iVar0))
		{
			func_1565(iVar0, iVar1);
		}
	}
}

int func_1467(struct<4> Param0, int iParam4, bool bParam5)
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
	if (!func_1101(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_552(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_1566(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_1567(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_1568(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_1569(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_1570(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_1571(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1468(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_555(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1337(iParam0);
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

void func_1469(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1572(&(uParam0->f_3));
}

void func_1470(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1573(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

bool func_1471(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

bool func_1472(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_1 == 0)
	{
		return false;
	}
	if (!func_1471(uParam1, 2))
	{
		iVar1 = PED::_GET_META_PED_TYPE(iParam0);
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (uParam1->f_1.f_1[iVar0 /*3*/] == Global_1946804.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				uParam1->f_135[uParam1->f_134 /*2*/] = PED::_0xF6D9E1F3560CBF8E(iVar1, uParam1->f_1.f_1[iVar0 /*3*/], 0, false, 0);
				uParam1->f_135[uParam1->f_134 /*2*/].f_1 = iVar0;
				uParam1->f_134++;
			}
			iVar0++;
		}
		func_1476(uParam1, 2);
	}
	return func_1477(iParam0, uParam1);
}

void func_1473(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	uParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_134)
	{
		if (PED::_0x93FFD92F05EC32FD(uParam0->f_135[iVar0 /*2*/]))
		{
			PED::_0x13E7320C762F0477(uParam0->f_135[iVar0 /*2*/]);
		}
		uParam0->f_135[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1.f_1[iVar0 /*3*/] = { vVar1 };
		iVar0++;
	}
	func_1114(&(uParam0->f_120));
	uParam0->f_134 = 0;
	*uParam0 = 0;
}

void func_1474(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946804.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_1475(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_1574(uParam0, iParam3, iParam2) && !func_1209(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_703(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			func_1105(1108822547);
		}
		else
		{
			func_1481(1108822547);
		}
	}
	func_1111(uParam0, 0, 0);
	func_1336(iParam5);
	return true;
}

void func_1476(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1477(bool bParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return true;
	}
	if (uParam1->f_1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam1->f_134)
	{
		if (!PED::_0xB0B2C6D170B0E8E5(uParam1->f_135[iVar0 /*2*/]))
		{
			return false;
		}
		iVar0++;
	}
	return PED::IS_PED_READY_TO_RENDER(bParam0);
}

int func_1478(bool bParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	bVar1 = true;
	if (uParam1->f_1 == 0)
	{
		return 0;
	}
	if (!func_1477(bParam0, uParam1))
	{
		bVar1 = false;
	}
	iVar3 = uParam1->f_1;
	iVar2 = func_995(iVar3);
	if (iVar2 == -1)
	{
		iVar2 = 0;
	}
	if (iVar2 >= 0 && iVar2 <= 5)
	{
		bVar0 = true;
	}
	Global_1905941 = iVar2;
	func_623(Global_40.f_7729, 4096);
	func_621(Global_1905941, 4096);
	Global_40.f_7729 = Global_1905941;
	func_1575(&(uParam1->f_1));
	iVar4 = -1;
	if (!bVar0)
	{
		iVar4 = func_1576(uParam1->f_1);
	}
	func_1413(&(Global_1946804.f_1497), iVar4, 0);
	func_1577(iVar3, bParam0, bVar0, 1, bVar1, 0);
	func_1578(bParam0);
	if (bParam2)
	{
		func_1473(uParam1);
	}
	if (bParam3)
	{
		func_1579();
	}
	if (bParam4)
	{
		if (bParam5)
		{
			func_706(0);
		}
		else
		{
			func_706(2048);
		}
	}
	return 1;
}

int func_1479(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1946804.f_2535.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1946804.f_2535.f_2 = 0;
		Global_1946804.f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946804.f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1580(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1946804.f_2535.f_2 = (Global_1946804.f_2535.f_2 - (Global_1946804.f_2535.f_2 && Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1581(iVar1, Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1))
		{
			func_1582(iVar1, Global_1946804.f_2535.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1946804.f_2535.f_1 = (Global_1946804.f_2535.f_1 - 1);
	Global_1946804.f_2535.f_43[iVar0 /*2*/] = { Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] };
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/].f_1 = 0;
	Global_1946804.f_2535.f_43[Global_1946804.f_2535.f_1 /*2*/] = 0;
	return 1;
}

bool func_1480(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1102(iVar0, 1);
		if (!func_1358(iVar2, 2))
		{
		}
		else if (Global_1946804.f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1583(iVar0) == -1)
			{
				func_1107(iVar0, 0);
				func_1483(&(Global_1946804.f_2589.f_2[(Global_1946804.f_2589 - 1) /*2*/]), 2, 6);
			}
			func_1112(iVar2, 3, 6);
			Global_1946804.f_2456[iVar0 /*2*/] = 0;
			Global_1946804.f_2456[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1481(int iParam0)
{
	func_1534(iParam0, 8, 6);
}

bool func_1482(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1483(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1484(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1485(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1486(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_1487(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1212(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1486(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1488(int iParam0, int iParam1, int iParam2)
{
	if (func_2() == -1)
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

void func_1489(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1372() - fParam1);
	func_1584(uParam0, 1);
	func_1585(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1490(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1491(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1492(int* iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1879534.f_7301), 243);
}

int func_1493()
{
	return Global_1894899.f_2;
}

int func_1494(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_1586(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

bool func_1495()
{
	if (func_85(43) && !func_85(44))
	{
		return false;
	}
	if (func_85(67) && func_255() != 8)
	{
		return false;
	}
	return true;
}

bool func_1496(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1497(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_568(iParam0, iParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

float func_1498(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_1499()
{
	int iVar0;

	if (func_1228(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_1228(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1500(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1501()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1587(iVar0);
		if (func_1228(func_1588(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1502(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_537(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_537(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_537(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1503(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_566(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_1504()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1589(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1505(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40501 < 32)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var1 };
	}
	Global_1058888.f_40501 = (Global_1058888.f_40501 - 1);
	if (Global_1058888.f_40501 < 0)
	{
		Global_1058888.f_40501 = 0;
	}
	return 1;
}

int func_1506(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = (Global_1058888.f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 /*2*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1058888.f_40501.f_1[iParam0 /*2*/] = { Var1 };
	Global_1058888.f_40501++;
	if (Global_1058888.f_40501 > 32)
	{
		Global_1058888.f_40501 = 32;
	}
	return 1;
}

void func_1507(int iParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

float func_1508(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_1509(int iParam0, bool bParam1)
{
	Global_1955569.f_1 = iParam0;
	if (bParam1)
	{
		func_1590(bParam1);
	}
}

void func_1510(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_1511(int iParam0)
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

bool func_1512(int iParam0)
{
	vector3 vVar0;

	if (!func_1254(23, &vVar0))
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

bool func_1513(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_1254(23, &Var0))
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

int func_1514(int iParam0)
{
	return iParam0;
}

int func_1515()
{
	int iVar0;

	iVar0 = func_1396();
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

void func_1516(int iParam0)
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

	func_299(iParam0, 1, 1, -142743235, 1);
	iVar34 = func_1591(iParam0, &uVar18);
	func_1592(iParam0, &uVar18, &iVar34, 1);
	if (func_693() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_1593(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_1072(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_299(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (func_555(uVar18[iVar36]))
		{
			case -2061583405:
				func_1593(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				func_1593(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				func_1593(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				func_1593(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				func_1593(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_1072(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_700(func_1207(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_1474(&(Global_1946804.f_1616));
	func_1209(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { func_1210(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { func_1210(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { func_1210(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { func_1210(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { func_1210(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { func_1210(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { func_1210(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { func_1210(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { func_1210(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_1211(iVar0[iVar36], iVar35))
			{
				func_1072(func_1594(iVar35), 1, 1);
				func_1595(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_1533(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_1212(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
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
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_995(iParam0))
	{
		if (!func_1089(8))
		{
			if (func_693() == -2125499975)
			{
				if (bVar17)
				{
					func_1209(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_1487(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1488(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_995(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_1209(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_1487(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_1488(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_995(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_995(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_623(Global_40.f_7729, 4096);
					func_621(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_1596(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	func_1209(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_1209(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

int func_1517(int iParam0, struct<4> Param1)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	var uVar7;
	int iVar11;
	struct<5> Var12;

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
			if (func_286(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1246(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1597(&uVar7);
					if (func_947(Var3, &uVar7, &Var12, -1, -142743235, 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> func_1518()
{
	struct<6> Var0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_1341(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1341(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1341(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1341(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1341(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1341(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

int func_1519(var uParam0)
{
	return uParam0->f_1;
}

void func_1520(var uParam0)
{
	func_1598(uParam0);
	func_1600(uParam0, func_1599(-1346384396));
	func_1601(uParam0, func_1599(-712836614));
	func_1602(uParam0, func_1599(-1629133289));
	func_1603(uParam0, func_1599(1302066700));
	func_1604(uParam0, func_1599(599669344));
	func_1605(uParam0, func_1599(-1555511632));
}

void func_1521(struct<6> Param0)
{
	if (!func_1083(Param0.f_4, 1))
	{
	}
	if (!func_1083(Param0, 1))
	{
	}
	if (!func_1083(Param0.f_2, 1))
	{
	}
	if (!func_1083(Param0.f_5, 1))
	{
	}
	if (!func_1083(Param0.f_3, 1))
	{
	}
	if (!func_1083(Param0.f_1, 1))
	{
	}
}

int func_1522(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_70())
	{
		if (func_469())
		{
			bVar0 = false;
			if (!func_226(Global_1835011[15 /*74*/].f_1, 1) && !func_554(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1606();
				*iParam1 = func_1607();
				*iParam2 = func_1608();
				return 1;
			}
			else
			{
				*iParam0 = func_1609();
				*iParam1 = func_1610();
				*iParam2 = func_1611();
				return 1;
			}
		}
		else if (func_315())
		{
			if (!func_226(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_1612();
				*iParam1 = func_1613();
				*iParam2 = func_1614();
				return 1;
			}
			else
			{
				*iParam0 = func_1615();
				*iParam1 = func_1616();
				*iParam2 = func_1617();
				return 1;
			}
		}
	}
	else if (func_469())
	{
		*iParam0 = func_1618();
		*iParam1 = func_1619();
		*iParam2 = func_1620();
		return 1;
	}
	else if (func_315())
	{
		*iParam0 = func_1621();
		*iParam1 = func_1622();
		*iParam2 = func_1623();
		return 1;
	}
	return 0;
}

int func_1523(int iParam0)
{
	iParam0 = func_1624(iParam0);
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

void func_1524(int iParam0, int iParam1)
{
	iParam0 = func_1624(iParam0);
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

void func_1525(int iParam0, int iParam1)
{
	iParam0 = func_1624(iParam0);
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

void func_1526(int iParam0, int iParam1)
{
	iParam0 = func_1624(iParam0);
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

void func_1527(int iParam0, int iParam1)
{
	iParam0 = func_1624(iParam0);
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

bool func_1528(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_1625(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_691(0) };
	if (func_1626(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_1529(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -1591664384;
	if (!func_1627(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_947(Var0.f_4, &Var0, &Var29, -1, -142743235, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_1530(int iParam0)
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

int func_1531(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_286(iParam1, 0))
	{
		return 0;
	}
	if (!func_1628(iParam1))
	{
		return 0;
	}
	if (func_1528(iParam0))
	{
		return 0;
	}
	iVar0 = func_1625(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_691(0) };
	Var1.f_4 = iVar0;
	if (!func_993(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1532(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

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
			if (func_286(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_1246(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					func_1597(&Var7);
					if (func_993(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							func_1339(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1533(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_1534(int iParam0, int iParam1, int iParam2)
{
	Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 = (Global_1946804.f_57[func_700(iParam0, 1) /*11*/].f_10 || iParam1);
}

bool func_1535(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_286(iParam0, 0))
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
		func_1629(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

char* func_1536(int iParam0)
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

void func_1537(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1347701, iParam0))
		{
			MISC::SET_BIT(&Global_1347701, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1347701, iParam0))
	{
		MISC::CLEAR_BIT(&Global_1347701, iParam0);
	}
}

int func_1538(int iParam0)
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

bool func_1539(int iParam0, int iParam1)
{
	return false;
}

bool func_1540()
{
	return false;
}

int func_1541(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_738(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> func_1542(int iParam0, int iParam1)
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

char* func_1543(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1544(int iParam0)
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

char* func_1545(int iParam0)
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

int func_1546(int iParam0)
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

int func_1547(int iParam0)
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

int func_1548(int iParam0)
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

bool func_1549(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1630(iParam1) && !func_1631(iParam1))
	{
		bVar0 = func_1632(iParam1);
	}
	else
	{
		return false;
	}
	func_1633(uParam3);
	iVar5 = func_1634(iParam2);
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

void func_1550(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1635(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_1636(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

bool func_1551(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_297(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_1552(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_297(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_1553(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_297(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_1554(int iParam0)
{
	if (!func_286(iParam0, 0))
	{
		return false;
	}
	if (func_297(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_1555(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1637(iParam0);
		case 1:
			return func_1638(iParam0);
		case 2:
			return func_1639(iParam0);
		case 3:
			return func_1640(iParam0);
	}
	return 0;
}

int func_1556(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1641(iParam0);
		case 1:
			return func_1642(iParam0);
		case 2:
			return func_1643(iParam0);
		case 3:
			return func_1644(iParam0);
		case 4:
			return func_1645(iParam0);
		case 5:
			return func_1646(iParam0);
		case 6:
			return func_1647(iParam0);
		case 7:
			return func_1648(iParam0);
		case 8:
			return func_1649(iParam0);
	}
	return 0;
}

float func_1557(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

bool func_1558(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

int func_1559(int iParam0)
{
	int iVar0;

	iVar0 = 5;
	while (iVar0 >= 1)
	{
		if (iParam0 >= PLAYER::GET_WANTED_LEVEL_THRESHOLD(iVar0))
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

int func_1560(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_1650(iParam0), 64);
	sVar8 = func_1651(cVar0);
	return MISC::GET_HASH_KEY(sVar8);
}

int func_1561(int iParam0)
{
	return Global_1946804.f_2657.f_26.f_7[iParam0];
}

void func_1562(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946804.f_2657.f_26.f_7[iParam0];
	Global_1946804.f_2657.f_26.f_7[iParam0] = Global_1946804.f_2657.f_26.f_7[iParam1];
	Global_1946804.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1563(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1469(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_1564(int iParam0, int iParam1)
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

void func_1565(int iParam0, int iParam1)
{
	Global_1946804.f_2657.f_26.f_7[iParam0] = iParam1;
}

struct<29> func_1566(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1570(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1567(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1652(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1653(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1653(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1653(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> func_1568(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1570(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1569(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1654(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1653(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1653(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1653(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> func_1570(var uParam0)
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

int func_1571(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1655(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1653(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1653(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1653(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_1572(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1573(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1656(func_693());
	if (*uParam0)
	{
		func_1572(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
}

bool func_1574(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_1594(iParam1) != iParam2)
	{
		return false;
	}
	if (func_1361(2, iParam1))
	{
		func_1657(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_1575(var uParam0)
{
	int iVar0;

	Global_1946804.f_1497 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { uParam0->f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

int func_1576(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1016(0);
	func_1017(&(Global_1946804.f_964), iVar1, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return -1;
	}
	if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &(Global_1946804.f_964), 2049745650))
	{
		return -1;
	}
	return func_1412(iVar0);
}

void func_1577(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar4 = func_995(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_2() != -1)
	{
		return;
	}
	func_1103();
	if (bParam5)
	{
		if (!func_1475(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_703(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		func_704();
	}
	func_1658(iVar3, 1, 1, 1, 1, 1);
	func_325(31, 0, 0, 0, 0);
	func_706(0);
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
			func_325(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_325(2, iVar1, 3, bParam1, 0);
		}
	}
	else
	{
		func_1659(&(Global_1946804.f_1497), bParam1, 1, -1, 1, 1, 1);
	}
}

void func_1578(bool bParam0)
{
	PED::_0xE3144B932DFDFF65(bParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(bParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(bParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_1579()
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
	if (!func_703(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946804.f_859)
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
	TASK::TASK_PLAY_ANIM(Global_35, func_1660(), sVar0, 8f, -8f, -1, 67108880, 0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_1115(1);
	STREAMING::REMOVE_ANIM_DICT(func_1660());
}

int func_1580(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2535.f_1)
	{
		if (Global_1946804.f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1581(int iParam0, var uParam1)
{
	return (Global_1946804.f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_1582(int iParam0, var uParam1)
{
	Global_1946804.f_2535.f_3[iParam0] = (Global_1946804.f_2535.f_3[iParam0] - (Global_1946804.f_2535.f_3[iParam0] && uParam1));
}

int func_1583(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2589)
	{
		if (Global_1946804.f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1584(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1585(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1586(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1661(vParam0, 0f, 0f, 0, 2);
	return func_1661(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_1587(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_1588()
{
	return Global_40.f_8863.f_148;
}

int func_1589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SP_CHAL_BAND_ROOT");
		case 1:
			return joaat("SP_CHAL_EXPL_ROOT");
		case 2:
			return joaat("SP_CHAL_GAMB_ROOT");
		case 3:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 5:
			return joaat("SP_CHAL_HUNT_ROOT");
		case 6:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 7:
			return joaat("SP_CHAL_SURV_ROOT");
		case 8:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

void func_1590(bool bParam0)
{
	func_1662(bParam0);
	Global_1955569.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_HIDE_HUD_COMPONENT(121713391);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(121713391);
	}
}

int func_1591(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> Var1;
	int iVar8;

	iVar8 = 0;
	if (!func_622(iParam0, func_693()))
	{
		return 0;
	}
	Var1 = func_1016(func_693());
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

int func_1592(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;

	Var5.f_9 = -1591664384;
	iVar19 = func_1016(func_693());
	Var20 = { func_1020(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!func_1023(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_384(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = func_995(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_1017(&(Global_1946804.f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
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
	func_385(iVar0);
	return 1;
}

void func_1593(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_1333(iVar2, &iVar0))
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

int func_1594(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1663();
	}
	if (func_2() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_1595(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_2() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946804.f_57[iVar0 /*11*/];
			func_1212(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = Global_1946804.f_57[iVar0 /*11*/];
		func_1486(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

int func_1596(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
	iVar0 = func_619(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_1594(iParam1);
	}
	if ((bParam3 && func_620(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_622(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_623(Global_40.f_7729, 4096);
		func_621(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(bParam0, "metaped_outfit_request_name"))
	{
		func_1664(bParam0);
	}
	func_1579();
	if (!func_1665(iParam1))
	{
		func_1577(iVar0, bParam0, func_1666(iParam1), 1, 0, 1);
	}
	func_1578(bParam0);
	return 1;
}

void func_1597(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1598(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_1599(int iParam0)
{
	if (func_469())
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
	else if (func_315())
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

void func_1600(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1601(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_1602(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_1603(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_1604(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_1605(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

int func_1606()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1607()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_1608()
{
	return 1;
}

int func_1609()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1610()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1611()
{
	return 1;
}

int func_1612()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_1613()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_1614()
{
	return 2;
}

int func_1615()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_1616()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_1617()
{
	return 1;
}

int func_1618()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_1619()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_1620()
{
	return 1;
}

int func_1621()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_1622()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_1623()
{
	return 1;
}

int func_1624(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1625(int iParam0)
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

int func_1626(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_738(bParam2), uParam0, iParam1);
}

bool func_1627(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_1528(iParam0))
	{
		return false;
	}
	iVar0 = func_1625(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_691(0) };
	if (!func_1667(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1668(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_1628(int iParam0)
{
	return func_552(iParam0) == joaat("HORSE");
}

void func_1629(int iParam0, int iParam1, var uParam2, int iParam3)
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

bool func_1630(int iParam0)
{
	iParam0 = func_1624(iParam0);
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

bool func_1631(int iParam0)
{
	int iVar0;

	iParam0 = func_1624(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_1630(iParam0))
	{
		return false;
	}
	iVar0 = func_1632(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1632(int iParam0)
{
	iParam0 = func_1624(iParam0);
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

void func_1633(var uParam0)
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

int func_1634(int iParam0)
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

void func_1635(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_1636(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_1637(int iParam0)
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

int func_1638(int iParam0)
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

int func_1639(int iParam0)
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

int func_1640(int iParam0)
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

int func_1641(int iParam0)
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

int func_1642(int iParam0)
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

int func_1643(int iParam0)
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

int func_1644(int iParam0)
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

int func_1645(int iParam0)
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

int func_1646(int iParam0)
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

int func_1647(int iParam0)
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

int func_1648(int iParam0)
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

int func_1649(int iParam0)
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

char* func_1650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LBS_AMBARINO_BOUNTY";
		case 1:
			return "LBS_NEW_HANOVER_BOUNTY";
		case 2:
			return "LBS_LEMOYNE_BOUNTY";
		case 3:
			return "LBS_W_ELIZABETH_BOUNTY";
		case 4:
			return "LBS_NEW_AUSTIN_BOUNTY";
		case 5:
			return "LBS_GUARMA_BOUNTY";
		default:
			break;
	}
	return "LBS_INVALID_BOUNTY";
}

char* func_1651(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1652(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1653(int iParam0, int iParam1)
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
	func_1669(iParam0, iParam1);
}

bool func_1654(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1655(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_1656(int iParam0)
{
	if (func_2() == -1)
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

void func_1657(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
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

void func_1658(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_1663()) || bParam5)
		{
			func_1670();
		}
	}
	if (func_2() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_1671(Global_1946804.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_619(Global_40.f_7729);
				Global_1946804.f_1378 = func_619(Global_40.f_7729);
				bParam3 = true;
			}
		}
		bVar1 = func_1666(iVar0);
	}
	if (bParam3 && bVar1)
	{
		func_1362(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_1080(0, 1);
	}
	func_1336(0);
}

void func_1659(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_2() != -1;
	Global_1946804.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_0x0BFA1BD465CDFEFD(bParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_189);
			}
			if ((Global_1946804.f_1 == -2125499975 || Global_1946804.f_1 == -449205311) && Global_1347477.f_190 != 0)
			{
				PED::_SET_PED_BODY_COMPONENT(bParam1, Global_1347477.f_190);
			}
			func_650(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1672(bParam1, 29, bVar4, 1, 0);
			func_1672(bParam1, 31, bVar4, 1, 0);
			func_1672(bParam1, 30, bVar4, 1, 0);
			func_1672(bParam1, 22, bVar4, 1, 0);
			func_1672(bParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_703(32768) && func_1358(1108822547, 8)) && func_1353(10, iParam3))
	{
		func_1673(bParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946804.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1102(iVar1, 1);
			if (func_1358(iVar3, 8))
			{
			}
			else if (Global_1946804.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_1353(iVar1, iParam3))
				{
				}
				else if ((func_1358(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
				{
					if (!func_1358(iVar3, 1) || bParam2)
					{
						Global_1946804.f_857++;
						if (!bParam6)
						{
							func_1672(bParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == 289238755)
						{
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = 289238755;
						}
						func_1534(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946804.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_1672(bParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946804.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946804.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_1358(iVar3, 1))
							{
								func_1112(iVar3, 1, 6);
							}
							Global_1946804.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(bParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_0x66B957AAC2EAAEAB(bParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804.f_857 <= 0)
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

char* func_1660()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

int func_1661(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_1662(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

int func_1663()
{
	if (func_2() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_1664(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

bool func_1665(int iParam0)
{
	return false;
}

bool func_1666(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1667(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_738(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_1668(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_738(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

void func_1669(int iParam0, int iParam1)
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

void func_1670()
{
	int iVar0;

	Global_1946804.f_1497 = Global_1946804.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = { Global_1946804.f_1378.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

bool func_1671(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1016(0);
	iVar1 = 0;
	func_1017(&(Global_1946804.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
	if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946804.f_964), -1516819610))
	{
		return false;
	}
	return iVar1;
}

void func_1672(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1102(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1674(iParam4);
		}
		else if (iParam4 != Global_1946804.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(bParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(bParam0, Global_1946804.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

void func_1673(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_1358(1108822547, 6))
	{
		if (bParam2)
		{
			func_1672(bParam0, iVar0, func_2() != -1, 0, 0);
			func_1534(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_0xBC6DF00D7A4A6819(bParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
		func_1112(1108822547, 1, 6);
	}
	Global_1946804.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
}

int func_1674(int iParam0)
{
	int iVar0;

	iVar0 = func_555(iParam0);
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

