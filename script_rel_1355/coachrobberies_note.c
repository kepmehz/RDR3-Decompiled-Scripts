#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	char* sLocal_4 = NULL;
	bool bLocal_5 = false;
#endregion

void __EntryFunction__()
{
	sLocal_4 = "SCRB";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	while (true)
	{
		switch (iLocal_0)
		{
			case 0:
				HUD::TEXT_BLOCK_REQUEST(sLocal_4);
				iLocal_0 = 1;
				break;
			case 1:
				if (HUD::TEXT_BLOCK_IS_LOADED(sLocal_4))
				{
					func_2(&uLocal_1);
					iLocal_0 = 2;
				}
				break;
			case 2:
				if (func_3(&uLocal_1) > 15f)
				{
					func_1();
					iLocal_0 = 3;
				}
				else if (!bLocal_5)
				{
					func_4();
					bLocal_5 = true;
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1()
{
	func_5(1);
	HUD::_TEXT_BLOCK_DELETE(sLocal_4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2(var uParam0)
{
	func_6(uParam0, 0f);
}

float func_3(var uParam0)
{
	if (!func_7(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_8(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_9() - uParam0->f_1);
}

void func_4()
{
	int iVar0;
	char* sVar1;

	iVar0 = Global_40.f_9146.f_3;
	switch (iVar0)
	{
		case 4:
			sVar1 = "CR_RHD_R1";
			break;
		case 5:
			sVar1 = "CR_RHD_R2";
			break;
		case 6:
			sVar1 = "CR_RHD_R3";
			break;
		case 13:
			sVar1 = "CR_RHD_RTL";
			break;
		case 0:
			sVar1 = "CR_STR_R1";
			break;
		case 1:
			sVar1 = "CR_STR_R2";
			break;
		case 2:
			sVar1 = "CR_STR_R3";
			break;
	}
	func_10(sVar1, 0, 0, 1);
}

void func_5(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

void func_6(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_9() - fParam1);
	func_11(uParam0, 1);
	func_12(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_7(var uParam0)
{
	return func_13(*uParam0, 1);
}

bool func_8(var uParam0)
{
	return func_13(*uParam0, 2);
}

float func_9()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

var func_10(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	return func_14(sParam0, -1, iParam1, iParam2, 0, iParam3);
}

void func_11(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_12(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_13(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_14(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

