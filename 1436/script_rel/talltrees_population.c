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
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	bool bLocal_18 = false;
#endregion

void main()
{
	bool bVar0;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	func_1();
	func_2();
	PERSCHAR::_0x187D65F3AEC5D679(joaat("GLO_WILDERNESS_TRAPPER"), "TallTrees/Tal_Trapper_1");
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER"))))
	{
		PERSCHAR::_0xD4B614179BCD0654(PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_WILDERNESS_TRAPPER")));
	}
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	func_3();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_3();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	bLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1975f, -1615f, 125f, 0f, 0f, 0f, 100f, 100f, 50f, "m_volManzanitaPost_Restriction");
	func_4(bLocal_14, 1);
	bLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1699.8f, -2103.5f, 92f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volPacUnionRR_Restriction");
	func_4(bLocal_15, 1);
	bLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2578.4f, -1380.4f, 161f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volAuroraBasinShack_Restriction");
	func_4(bLocal_16, 1);
	if (func_5() == 8)
	{
		bLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBeechersHope_Restriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(bLocal_17, -1628.978f, -1384.765f, 87.31792f, 0f, 0f, 1.805961f, 117.1854f, 142.6396f, 34.00172f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(bLocal_17, -1583.582f, -1286.059f, 83.24481f, 0f, 0f, 1.805961f, 65.34718f, 62.69049f, 35.94681f);
		func_6(bLocal_17, 0, 0, 1);
	}
	bLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	func_7(bLocal_18, 0, 0, 1);
}

void func_3()
{
}

void func_4(bool bParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(bParam0, 2228479, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, 2228479, 16384, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, 16384, 0, -1, -1, bParam0);
	}
}

int func_5()
{
	return Global_40.f_4283;
}

void func_6(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(bParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_8(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, bParam0);
	}
}

void func_7(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(bParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(bParam0, iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_8(&iParam1, 8192);
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | 4096 | 2 | 4 | 1, 16384, 0, -1, -1, bParam0);
	}
}

void func_8(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

