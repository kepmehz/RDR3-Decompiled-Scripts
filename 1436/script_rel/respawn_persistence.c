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
	struct<2> /*16*/ sLocal_14 = { 0, 0 } ;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
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
#endregion

void main()
{
	int iVar0;
	int iVar1;
	struct<16> /*128*/ sVar2;
	struct<10> /*80*/ sVar18;
	struct<55> /*440*/ sVar28;
	struct<60> /*480*/ sVar97;
	bool bVar158;
	vector3 vVar159;
	float fVar162;
	int iVar163;
	int iVar164;
	int iVar165;
	int iVar166;
	int iVar167;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Var28.f_5 = 8;
	Var28.f_14 = -1;
	Var28.f_22 = -1082130432;
	Var28.f_23 = -1;
	Var28.f_34 = 6;
	Var28.f_54.f_4 = 1;
	Var28.f_54.f_5 = 1;
	Var97.f_40 = 10000;
	Var97.f_58 = 1;
	Var97.f_59 = 34;
	bVar158 = true;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (((Global_1347343 != -1 && Global_1347343 != 4) || func_2(2)) || func_3(Global_1347343.f_2))
	{
		func_4();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (bVar158)
	{
		BUILTIN::WAIT(0);
		if (!PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		}
		bVar158 = !Global_1310720.f_8;
		switch (func_5())
		{
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					MISC::PAUSE_DEATH_ARREST_RESTART(true);
					func_6(2);
				}
				if (Global_1934266.f_59)
				{
					SCRIPTS::REQUEST_SCRIPT("law_arrest");
					AUDIO::_0x6339C1EA3979B5F7("Title_Screen", "Arrest_Fail_Respawn_Scenes");
				}
				Global_1310720.f_11 = 1;
				break;
			case 2:
				if (Global_1934266.f_59)
				{
					Global_1934266.f_62 = func_7();
					Global_1934266.f_63 = func_9(func_8());
					func_10(Global_1934266.f_62, &(Global_40.f_9.f_7));
					func_11(Global_1934266.f_62, &Var97);
					Global_40.f_9.f_7 = { Var97.f_6 };
					Global_40.f_9.f_13 = 0f;
					Global_40.f_9.f_15 = func_12(Global_40.f_9.f_7, 1);
					STREAMING::SET_FOCUS_POS_AND_VEL(Global_40.f_9.f_7, 0f, 0f, 0f);
					STREAMING::LOAD_SCENE_START(Global_40.f_9.f_7, 0f, 0f, 0f, 10f, 0);
					MISC::PAUSE_DEATH_ARREST_RESTART(false);
					MISC::IGNORE_NEXT_RESTART(true);
					LAW::_0x55F37F5F3F2475E1();
				}
				else
				{
					LAW::_0x55F37F5F3F2475E1();
					Global_40.f_11956 = 0;
					vVar159 = { Global_36 };
					func_13(vVar159, 200f, 1, 0, 0, 0, 0);
				}
				Global_1310720.f_5 = MISC::GET_GAME_TIMER();
				func_14(0);
				func_6(3);
				break;
			case 3:
				func_6(4);
				break;
			case 4:
				if (Global_1934266.f_59)
				{
					func_6(5);
				}
				else
				{
					AUDIO::_0xAC84686C06184B0D("TITLE_SCREEN", "DEATH_FAIL_RESPAWN_SCENES");
					func_6(5);
				}
				break;
			case 5:
				if (!Global_1934266.f_59)
				{
					if (Global_1310720.f_7)
					{
						Local_14.f_1 = "TITLE_SCREEN_ENTER_OFF_MISSION";
						Local_14 = "DEATH_FAIL_RESPAWN_SOUNDS";
						Global_1935630.f_3 = func_15(&Local_14, "ALERT_PLAYER_DEAD", 0, 1);
					}
					CAM::DO_SCREEN_FADE_OUT(0);
					LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
					func_16();
					func_6(6);
				}
				else
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_6(6);
				}
				break;
			case 6:
				Global_40.f_9.f_15 = func_12(Global_40.f_9.f_7, 1);
				func_6(7);
				break;
			case 7:
				PED::IS_PED_INJURED(Global_35);
				fVar162 = 0f;
				if (BUILTIN::VDIST(Global_40.f_9.f_7, 0f, 0f, 0f) > 1f)
				{
					Global_40.f_9.f_7.f_2 = (Global_40.f_9.f_7.f_2 + 1f);
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_40.f_9.f_7, &fVar162, false))
					{
						Global_40.f_9.f_7.f_2 = fVar162;
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_7, false, true, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Global_40.f_9.f_13);
				}
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				Global_35 = PLAYER::PLAYER_PED_ID();
				Global_36 = { ENTITY::GET_ENTITY_COORDS(Global_35, false, false) };
				STREAMING::CLEAR_FOCUS();
				STREAMING::LOAD_SCENE_STOP();
				PED::INSTANTLY_FILL_PED_POPULATION();
				VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				func_17();
				func_18(0);
				func_19();
				func_20();
				func_6(8);
				break;
			case 8:
				iVar163 = func_21();
				iVar164 = 0;
				if (10000 + Global_1310720.f_4) < MISC::GET_GAME_TIMER()
				{
					iVar164 = 1;
				}
				if (iVar163 || iVar164)
				{
					func_6(9);
				}
				break;
			case 9:
				if (func_22())
				{
					iVar1 = -1;
					func_6(10);
				}
				else if (Global_1310720)
				{
					func_6(11);
				}
				else if (Global_1934266.f_59)
				{
					Global_1934266.f_65 = 0;
					func_6(13);
				}
				else
				{
					func_6(14);
				}
				break;
			case 11:
				if (func_23(Global_40.f_9.f_15))
				{
					SCRIPTS::REQUEST_SCRIPT("player_camp");
					if (SCRIPTS::HAS_SCRIPT_LOADED("player_camp"))
					{
						Var18 = 1;
						Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("player_camp", &Var18, 10, 6096);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("player_camp");
						func_6(15);
						Global_1310720 = 0;
					}
				}
				break;
			case 10:
				if (func_23(Global_40.f_9.f_15))
				{
					iVar0 = func_24(Global_40.f_9.f_15);
					if (iVar1 == -1)
					{
						iVar1 = MISC::GET_GAME_TIMER();
					}
					if (iVar0 != -1)
					{
						if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[iVar0 /*28*/].f_23))
						{
							if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1395601.f_5[iVar0 /*28*/].f_24, false))
							{
								SCRIPTS::REQUEST_SCRIPT("property_use_core");
								if (SCRIPTS::HAS_SCRIPT_LOADED("property_use_core"))
								{
									Var28.f_2 = Global_1395601.f_5[iVar0 /*28*/].f_23;
									Var28.f_15 = 1;
									Global_1395601.f_5[iVar0 /*28*/].f_24 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("property_use_core", &Var28, 69, 6096);
									SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("property_use_core");
									func_6(15);
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > (20000 + iVar1))
						{
							func_6(14);
						}
					}
					else
					{
						func_6(14);
					}
				}
				break;
			case 14:
				if ((Global_1310720.f_7 && !CAM::IS_SCREEN_FADED_IN()) && UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Global_1935630.f_3) >= 3)
				{
					CAM::DO_SCREEN_FADE_IN(0);
				}
				iVar167 = 1;
				iVar165 = 0;
				iVar166 = 0;
				if (!func_25(vVar159))
				{
					Global_1310720.f_18 = { vVar159 };
					Global_1310720.f_21 = func_12(vVar159, 0);
				}
				if (Global_40.f_9.f_11 >= 0)
				{
					iVar167 = 0;
				}
				if (func_26(15) && func_27(65536))
				{
					if (func_23(Global_40.f_9.f_15) || Global_1310720.f_4 + 10000 < MISC::GET_GAME_TIMER())
					{
						if (Global_40.f_9.f_10 >= 0)
						{
							Var18 = Global_40.f_9.f_10;
							Global_40.f_9.f_10 = -1;
						}
						else
						{
							func_28(Global_40.f_9.f_7, &iVar165, &iVar166, iVar167, 1, 0, 0, 10f, 50f);
							Var18 = iVar165;
							Global_40.f_9.f_11 = iVar166;
						}
						Var2 = { Var18 };
						StringCopy(&(Var2.f_10), "respawn_dump_body", 32);
						Var2.f_14 = 1024;
						Var2.f_15 = 1;
						func_29(Var2, 0);
						func_6(15);
					}
				}
				break;
			case 13:
				if (func_23(Global_40.f_9.f_15))
				{
					if (!Global_1934266.f_65)
					{
						if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
						{
							STREAMING::LOAD_SCENE_START(Global_40.f_9.f_7, BUILTIN::COS((Global_40.f_9.f_13 + 90f)), BUILTIN::SIN((Global_40.f_9.f_13 + 90f)), 0f, 10f, 0);
							Global_1934266.f_64 = MISC::GET_GAME_TIMER();
						}
					}
					Global_1934266.f_65 = 1;
					if ((!STREAMING::IS_LOAD_SCENE_ACTIVE() || STREAMING::IS_LOAD_SCENE_LOADED()) || MISC::GET_GAME_TIMER() >= (30000 + Global_1934266.f_64))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934266.f_58, false))
						{
							SCRIPTS::REQUEST_SCRIPT("law_arrest");
							if (SCRIPTS::HAS_SCRIPT_LOADED("law_arrest"))
							{
								Global_1934266.f_59 = 0;
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
								if (STREAMING::IS_LOAD_SCENE_ACTIVE())
								{
									STREAMING::CLEAR_FOCUS();
									STREAMING::LOAD_SCENE_STOP();
								}
								AUDIO::_0x9428447DED71FC7E("Arrest_Fail_Respawn_Scenes");
								CAM::DO_SCREEN_FADE_OUT(0);
								Global_1934266.f_58 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("law_arrest", &Var97, 61, 10000);
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("law_arrest");
								func_6(15);
							}
						}
					}
				}
				break;
			case 15:
				break;
		}
	}
	func_1();
}

void func_1()
{
	func_30();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_3(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_4()
{
	func_31(&Global_1935630, 4096);
	Global_40.f_9.f_15 = -1;
	func_6(0);
	Global_40.f_9.f_12 = 0;
	Global_1310720.f_4 = 0;
	Global_1310720.f_7 = 0;
	Global_1310720.f_13 = 0;
	Global_1310720.f_14 = 0;
	Global_1310720.f_12 = 0;
	Global_1310720.f_27 = 0;
	Global_1310720.f_28 = 0;
	Global_1310720.f_29 = -1;
	Global_1935630.f_4 = 0;
	Global_1897952.f_40 = 0;
	Global_1310720.f_24 = joaat("WEAPON_UNARMED");
	Global_1310720.f_22 = -1;
	func_32(0);
}

int func_5()
{
	return Global_1572864.f_21;
}

void func_6(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

int func_7()
{
	int iVar0;
	int iVar1;

	iVar0 = func_8();
	switch (iVar0)
	{
		case 8:
			iVar1 = 57;
			break;
		case 10:
			iVar1 = 78;
			break;
		case 11:
			if (Global_1894899.f_187 || func_33(105))
			{
				iVar1 = 5;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		case 1:
			if (((func_34(11) || func_35(Global_1835011[11 /*74*/].f_1)) || func_36(Global_1835011[11 /*74*/].f_1)) || func_33(26))
			{
				iVar1 = 76;
			}
			else
			{
				iVar1 = 26;
			}
			break;
		case 0:
		case 2:
			iVar1 = 5;
			break;
		case 3:
		case 5:
		case 6:
		case 7:
		case 9:
			if (func_33(76))
			{
				iVar1 = 78;
			}
			else
			{
				iVar1 = 76;
			}
			break;
		case 4:
		case 12:
			if ((!func_37() || Global_1934266.f_56 == 1) || func_38(Global_1835011[58 /*74*/].f_1, 1))
			{
				iVar1 = 38;
			}
			else if (((func_34(11) || func_35(Global_1835011[11 /*74*/].f_1)) || func_36(Global_1835011[11 /*74*/].f_1)) || func_33(26))
			{
				iVar1 = 76;
			}
			else
			{
				iVar1 = 26;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar1 = 115;
			break;
		default:
			iVar1 = -1;
			break;
	}
	return iVar1;
}

int func_8()
{
	return Global_1897952.f_41;
}

int func_9(int iParam0)
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

int func_10(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 5:
			*uParam1 = { 2503.741f, -1307.135f, 47.9537f };
			return 1;
		case 26:
			*uParam1 = { -1810.262f, -351.5755f, 160.4386f };
			return 1;
		case 38:
			*uParam1 = { -766.9637f, -1264.285f, 42.9484f };
			return 1;
		case 57:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
		case 76:
			*uParam1 = { -272.4204f, 811.132f, 118.3688f };
			return 1;
		case 78:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
		case 105:
			*uParam1 = { 1355.763f, -1301.361f, 76.7643f };
			return 1;
		case 115:
			*uParam1 = { -5529.573f, -2927.617f, -0.6848f };
			break;
		default:
			*uParam1 = { 2903.666f, 1315.805f, 44.3104f };
			return 1;
	}
	return 0;
}

int func_11(int iParam0, var uParam1)
{
	bool bVar0;

	uParam1->f_58 = 1;
	uParam1->f_59 = 34;
	if (func_39(16) && !func_39(21))
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	switch (iParam0)
	{
		case 5:
			uParam1->f_3 = { 2503.741f, -1307.135f, 47.9537f };
			uParam1->f_6 = { 2503.741f, -1307.135f, 47.9537f };
			uParam1->f_9 = { 2502.73f, -1309.843f, 50.6283f };
			uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
			uParam1->f_15 = { 2505.388f, -1309.63f, 50.6283f };
			uParam1->f_18 = { -11.6079f, 0f, 21.707f };
			uParam1->f_21 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
			if (!func_33(5))
			{
				uParam1->f_27 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
			}
			else
			{
				uParam1->f_27 = { 2158.207f, -1334.824f, 41.852f };
				uParam1->f_30 = { 2153.072f, -1332.934f, 42.0877f };
				uParam1->f_33 = 63.3853f;
			}
			uParam1->f_34 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_37 = { 2517.845f, -1306.583f, 47.9532f };
			uParam1->f_2 = -1;
			uParam1->f_60 = 5;
			return 1;
		case 26:
			if (!func_33(26))
			{
				uParam1->f_3 = { -1810.262f, -351.5755f, 160.4386f };
				uParam1->f_6 = { -1810.262f, -351.5755f, 160.4386f };
				uParam1->f_9 = { -1810.599f, -353.7559f, 162.963f };
				uParam1->f_12 = { -28.1011f, 0f, -8.544f };
				uParam1->f_15 = { -1812.176f, -352.5742f, 162.963f };
				uParam1->f_18 = { -28.2679f, 0f, -55.9402f };
				uParam1->f_21 = { -1801.609f, -346.8549f, 165.8972f };
				uParam1->f_24 = { -6.9047f, 0f, 128.5486f };
				uParam1->f_27 = { -1803.986f, -351.9818f, 163.1167f };
				uParam1->f_30 = { -1801.529f, -353.1572f, 163.0777f };
				uParam1->f_33 = 243.1584f;
				uParam1->f_34 = { -1809.85f, -349.1629f, 163.6478f };
				uParam1->f_37 = { -1805.275f, -352.656f, 163.1386f };
				uParam1->f_2 = 472;
				uParam1->f_60 = 26;
			}
			else
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
			return 1;
		case 38:
			uParam1->f_3 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_6 = { -766.9637f, -1264.285f, 42.9484f };
			uParam1->f_9 = { -767.8228f, -1265.614f, 45.4401f };
			uParam1->f_12 = { -40.1575f, 0f, -28.7499f };
			uParam1->f_15 = { -766.1311f, -1265.554f, 45.4401f };
			uParam1->f_18 = { -40.1575f, 0f, 31.4592f };
			uParam1->f_21 = { -756.7747f, -1270.037f, 45.4809f };
			uParam1->f_24 = { -19.0657f, 0f, -96.9653f };
			if (!func_33(38))
			{
				uParam1->f_27 = { -754.2406f, -1269.955f, 43.0754f };
				uParam1->f_30 = { -751.5127f, -1270.165f, 42.449f };
				uParam1->f_33 = 265.8834f;
			}
			else
			{
				uParam1->f_27 = { -1058.057f, -1216.424f, 62.3631f };
				uParam1->f_30 = { -1061.885f, -1216.49f, 62.6087f };
				uParam1->f_33 = 96.0826f;
			}
			uParam1->f_34 = { -756.3996f, -1272.202f, 43.1796f };
			uParam1->f_37 = { -754.8086f, -1272.261f, 43.1187f };
			uParam1->f_2 = 509;
			uParam1->f_60 = 38;
			return 1;
		case 57:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!func_33(57))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
		case 76:
			if (!func_33(76))
			{
				uParam1->f_3 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_6 = { -272.597f, 810.9159f, 118.3688f };
				uParam1->f_9 = { -273.5943f, 810.2109f, 120.875f };
				uParam1->f_12 = { -33.6383f, 0f, -50.2445f };
				uParam1->f_15 = { -273.971f, 811.4304f, 120.875f };
				uParam1->f_18 = { -33.6383f, 0f, -91.7191f };
				uParam1->f_21 = { -271.6968f, 801.6126f, 120.311f };
				uParam1->f_24 = { -6.6603f, 0f, 84.6681f };
				uParam1->f_27 = { -275.209f, 797.9658f, 117.9365f };
				uParam1->f_30 = { -275.0261f, 795.0437f, 117.7023f };
				uParam1->f_33 = 182.3676f;
				uParam1->f_34 = { -275.8173f, 805.5717f, 118.3864f };
				uParam1->f_37 = { -276.4383f, 800.1778f, 118.4085f };
				uParam1->f_2 = 3;
				uParam1->f_60 = 76;
			}
			else
			{
				uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
				uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
				uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
				uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
				uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
				uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
				uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
				uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
				uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
				uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
				uParam1->f_2 = 382;
				uParam1->f_60 = 78;
			}
			return 1;
		case 78:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!func_33(78))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
		case 105:
			if (!func_33(105) && !bVar0)
			{
				uParam1->f_3 = { 1355.763f, -1301.361f, 76.7643f };
				uParam1->f_6 = { 1355.763f, -1301.361f, 76.7643f };
				uParam1->f_9 = { 1357.636f, -1301.202f, 78.6542f };
				uParam1->f_12 = { -28.2134f, 0f, 80.8091f };
				uParam1->f_15 = { 1356.35f, -1303.378f, 78.6542f };
				uParam1->f_18 = { -28.2134f, 0f, 32.6023f };
				uParam1->f_21 = { 1358.598f, -1307.626f, 78.7945f };
				uParam1->f_24 = { -26.9284f, 0f, 160.3281f };
				uParam1->f_27 = { 1356.928f, -1310.358f, 75.9901f };
				uParam1->f_30 = { 1356.312f, -1311.949f, 75.8727f };
				uParam1->f_33 = 157.5328f;
				uParam1->f_34 = { 1340.875f, -1297.587f, 76.3625f };
				uParam1->f_37 = { 1339.913f, -1303.004f, 76.3098f };
				uParam1->f_2 = 70;
				uParam1->f_60 = 105;
			}
			else
			{
				uParam1->f_3 = { 2503.741f, -1307.135f, 47.9537f };
				uParam1->f_6 = { 2503.741f, -1307.135f, 47.9537f };
				uParam1->f_9 = { 2502.73f, -1309.843f, 50.6283f };
				uParam1->f_12 = { -11.6079f, 0f, -14.2586f };
				uParam1->f_15 = { 2505.388f, -1309.63f, 50.6283f };
				uParam1->f_18 = { -11.6079f, 0f, 21.707f };
				uParam1->f_21 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_24 = { -26.7304f, 0f, 25.2209f };
				uParam1->f_27 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_30 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_33 = 275.7476f;
				uParam1->f_34 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_37 = { 2517.845f, -1306.583f, 47.9532f };
				uParam1->f_2 = 256;
				uParam1->f_60 = 5;
			}
			return 1;
		case 115:
			uParam1->f_3 = { -5532.633f, -2924.589f, -0.8993f };
			uParam1->f_6 = { -5529.573f, -2927.617f, -0.6848f };
			uParam1->f_9 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_12 = { -2.25f, 0f, -45.756f };
			uParam1->f_15 = { -5529.9f, -2926.97f, -1.19f };
			uParam1->f_18 = { -2.25f, 0f, -45.756f };
			uParam1->f_21 = { -5530.5f, -2941.74f, 0.39f };
			uParam1->f_24 = { -6.155f, 0f, 32.786f };
			uParam1->f_34 = { -5528.508f, -2930.258f, -1.3609f };
			uParam1->f_37 = { -5526.999f, -2933.425f, -1.9664f };
			uParam1->f_27 = { -5526.24f, -2934.047f, -1.9674f };
			uParam1->f_33 = -147.66f;
			uParam1->f_2 = 348;
			uParam1->f_60 = 115;
			return 1;
		default:
			uParam1->f_3 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_6 = { 2903.666f, 1315.805f, 44.3104f };
			uParam1->f_9 = { 2904.578f, 1316.083f, 45.674f };
			uParam1->f_12 = { -27.1441f, 0f, 80.0971f };
			uParam1->f_15 = { 2903.999f, 1314.985f, 45.674f };
			uParam1->f_18 = { -27.1441f, 0f, 34.3462f };
			uParam1->f_21 = { 2950.544f, 1354.832f, 46.5247f };
			uParam1->f_24 = { -19.8757f, 0f, -27.5102f };
			if (!func_33(78))
			{
				uParam1->f_27 = { 2912.547f, 1310.123f, 43.6438f };
				uParam1->f_30 = { 2914.968f, 1309.185f, 43.4608f };
				uParam1->f_33 = 246.9621f;
			}
			else
			{
				uParam1->f_27 = { 2820.362f, 1139.3f, 47.8403f };
				uParam1->f_30 = { 2818.865f, 1135.519f, 47.8328f };
				uParam1->f_33 = 158.4311f;
			}
			uParam1->f_34 = { 2955.716f, 1357.495f, 44.1385f };
			uParam1->f_37 = { 2951.752f, 1359.711f, 44.1435f };
			uParam1->f_2 = 382;
			uParam1->f_60 = 78;
			return 1;
	}
	return 0;
}

int func_12(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_40();
	if (func_41(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_42(vParam0, iParam3);
}

void func_13(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_14(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_31(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_43(&Global_1935630, 4194304);
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

int func_15(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	struct<2> /*16*/ sVar0;
	int iVar3;

	Var0 = iParam2;
	Var0.f_1 = sParam1;
	iVar3 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_DEATH_FAIL_MESSAGE(sParam0, &Var0, bParam3);
	return iVar3;
}

void func_16()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_44(iVar0))
		{
			func_45(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_17()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_46())
	{
		if (func_47(iVar0) == 3)
		{
			if (func_48(iVar0) == 1)
			{
				func_49(iVar0, 0);
				func_50(1);
			}
			else
			{
				func_49(iVar0, 0);
				func_50(1);
			}
		}
		iVar0++;
	}
}

void func_18(bool bParam0)
{
	if ((!func_38(func_51(4), 1) || func_36(func_51(33))) || func_36(func_51(34)))
	{
		return;
	}
	func_52(bParam0);
	func_53(bParam0);
	func_54(0);
}

void func_19()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	bVar0 = func_37();
	bVar1 = false;
	if (bVar0 && !func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_55(5))
		{
			func_56(5, 0);
			func_57(0, 0);
			func_58(0, 1);
			if (func_59() == 5)
			{
				func_60(0);
				func_61(0);
			}
			func_62(5);
			return;
		}
	}
	if (!Global_1310720.f_7)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		func_63(iVar2);
		func_64(iVar2);
		func_65(iVar2);
		iVar2++;
	}
	iVar2 = -1;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		bVar3 = false;
		if (iVar2 == 0 || iVar2 == 1)
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
		}
		else
		{
			bVar4 = false;
			if (iVar2 == 0)
			{
				bVar4 = true;
			}
			else if ((iVar2 == 1 && func_66(0) == 0) && func_66(5) == 0)
			{
				bVar4 = true;
			}
			if (func_67(iVar2))
			{
				iVar5 = func_68(iVar2);
				if (iVar5 + 10000 > Global_1310720.f_16)
				{
					func_69(iVar2, 0);
					func_70(iVar2, -1f);
					func_71(iVar2, 0);
					func_72(iVar2);
				}
				else
				{
					func_73(iVar2);
					func_74(iVar2);
					if (bVar4)
					{
						func_75(5, 0);
						func_76(5, -15);
						func_72(5);
					}
				}
			}
			if ((func_66(iVar2) == 0 && func_66(5) == 1) && func_77(5) == 1)
			{
				if (func_78(5) + 10000 > Global_1310720.f_16)
				{
					func_56(5, iVar2);
					func_58(iVar2, 1);
					if (iVar2 == 0 && func_59() == 5)
					{
						func_60(0);
						func_61(0);
					}
					func_62(5);
				}
			}
		}
		iVar2++;
	}
}

void func_20()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		bVar0 = false;
		if (iVar1 == 6)
		{
			bVar0 = true;
		}
		func_79(iVar1, bVar0);
		iVar1++;
	}
	if (func_80())
	{
		func_81();
	}
}

int func_21()
{
	if (func_82())
	{
		return 0;
	}
	return 1;
}

bool func_22()
{
	return false;
}

bool func_23(int iParam0)
{
	if (!func_41(iParam0))
	{
		return true;
	}
	if (!VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iParam0 /*35*/].f_3, Global_36))
	{
		return true;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1888801[iParam0 /*35*/].f_23)))
	{
		return true;
	}
	if (func_83(iParam0) != -1)
	{
		if (func_84() != iParam0)
		{
			return true;
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_GHOSTTOWN")) > 0)
	{
		return true;
	}
	return func_85(iParam0);
}

int func_24(int iParam0)
{
	int iVar0;

	if (!func_41(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (Global_1395601.f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_25(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_26(int iParam0)
{
	if (!func_86(iParam0))
	{
		return false;
	}
	return Global_1914270[iParam0] != 0;
}

bool func_27(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

Vector3 func_28(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;

	vVar0 = { func_87(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (func_25(vVar0))
	{
		vVar0 = { func_87(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_29(struct<16> /*128*/ sParam0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_88(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_89(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { Param0 };
			Global_1934603.f_161++;
			func_90(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_30()
{
	if (Global_1935630.f_3 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1935630.f_3);
		Global_1935630.f_3 = 0;
	}
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_32(int iParam0)
{
	Global_1310720.f_9 = iParam0;
}

bool func_33(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 16777216);
}

int func_34(int iParam0)
{
	int iVar0;

	if (!func_92(iParam0))
	{
		return 0;
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
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_47(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_36(int iParam0)
{
	int iVar0;

	iVar0 = func_93(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_37()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_38(int iParam0, bool bParam1)
{
	switch (func_93(iParam0))
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

bool func_39(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_38(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_40()
{
	return Global_1894899.f_2;
}

bool func_41(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_42(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_94(vParam0);
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

void func_43(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_44(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_45(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_44(iParam0))
	{
		return;
	}
	func_95(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_41(iVar0))
		{
			if (func_97(func_96(iVar0, 1, 1)) == iParam0)
			{
				func_98(iVar0, 0);
				func_99(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_100(iVar1))
		{
			if (func_9(iVar1) == iParam0)
			{
				func_101(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

int func_46()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_47(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_102(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_48(int iParam0)
{
	if (!func_3(iParam0))
	{
		return 0;
	}
	return func_104(func_103(iParam0));
}

void func_49(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_105(iParam0);
	}
	else
	{
		func_106(iParam0, iParam1);
	}
	func_107();
}

void func_50(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

int func_51(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

void func_52(bool bParam0)
{
	bool bVar0;

	if (Global_40.f_7748.f_1 < 9)
	{
		if (func_108(Global_40.f_7748.f_5, 1))
		{
			if (Global_40.f_7748.f_1 <= 9)
			{
				if (Global_40.f_7748.f_1 < 9)
				{
					bVar0 = true;
				}
				else if (func_109())
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				if (bParam0)
				{
					func_110();
				}
				else
				{
					func_111();
				}
			}
		}
	}
	if (bVar0)
	{
		func_112(9, 0, 0, 0, 0);
	}
}

void func_53(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < Global_40.f_7731)
	{
		if (Global_40.f_7731[iVar0 /*5*/] < 10)
		{
			if (func_108(Global_40.f_7731[iVar0 /*5*/].f_3, 1))
			{
				if (Global_40.f_7731[iVar0 /*5*/] <= 10)
				{
					if (Global_40.f_7731[iVar0 /*5*/] < 7)
					{
						bVar1 = true;
					}
					else if (func_113(iVar0))
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
						func_114(iVar0);
					}
					else
					{
						func_115(iVar0, 0);
					}
					bVar2 = true;
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		func_112(10, 0, 0, 0, 0);
		func_112(7, 0, 0, 0, 0);
	}
}

void func_54(bool bParam0)
{
	if (func_116() && (bParam0 || func_108(Global_40.f_7748, 1)))
	{
		Global_40.f_7748.f_3 = 0;
		if (bParam0)
		{
			Global_40.f_7748 = func_117();
		}
		else
		{
			func_118(492, 1);
		}
		func_112(9, 0, 0, 0, 0);
	}
}

bool func_55(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_77(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_56(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_120(iParam0);
	func_120(iParam0);
	func_121(iParam0, iParam1);
	func_122(iParam0, iParam1);
	func_123(iParam0, iParam1);
	bVar1 = func_124(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_125(bVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar1);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar1)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	bVar3 = func_124(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(bVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_125(bVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, bVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bVar3);
		}
		else
		{
			if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == bVar3)
			{
				PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
			}
			if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == bVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_126();
}

void func_57(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = iParam1;
}

void func_58(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

int func_59()
{
	return Global_40.f_1095.f_3054;
}

void func_60(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_61(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_62(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_40.f_1095.f_1[iParam0 /*436*/]), "", 64);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_127(&Var0);
	func_128(iParam0, Var0);
	func_129(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_130(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_131(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_132(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_133(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_134(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_135(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_136(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_137(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_22 = 0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_31 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_34 = 0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0f, 0f, 0f };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_63(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_129(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
}

void func_64(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_130(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
}

void func_65(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_131(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
}

int func_66(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

bool func_67(int iParam0)
{
	int iVar0;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_124(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

int func_68(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_41;
}

void func_69(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = iParam1;
}

void func_70(int iParam0, float fParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1 = fParam1;
}

void func_71(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_41 = iParam1;
}

void func_72(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_42 = 0;
}

void func_73(int iParam0)
{
	int iVar0;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_138(iParam0))
	{
		return;
	}
	iVar0 = func_124(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_74(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_120(iParam0);
	if (func_139(56))
	{
		func_140(56);
	}
	if (func_141(56))
	{
		func_142(56);
	}
	if (func_139(57))
	{
		func_140(57);
	}
	if (func_141(57))
	{
		func_142(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_66(0) == 0) && func_66(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_143(iParam0, 1);
	}
	else
	{
		func_144(iParam0, 0);
	}
}

void func_75(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = iParam1;
}

void func_76(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = iParam1;
}

int func_77(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

int func_78(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_12;
}

void func_79(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_145(iParam0);
	func_120(iParam0);
	func_146(iParam0);
	func_147(iParam0);
	if (func_148(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_149(iParam0) != iVar0)
		{
			return;
		}
	}
	func_150(iParam0, 4);
	if (bParam1)
	{
		func_150(iParam0, 16);
	}
}

bool func_80()
{
	int iVar0;

	iVar0 = func_151();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

void func_81()
{
	bool bVar0;

	bVar0 = func_151();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	func_152(0);
}

bool func_82()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_153(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_83(int iParam0)
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

int func_84()
{
	return Global_40.f_4283.f_1;
}

bool func_85(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 8);
}

bool func_86(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

Vector3 func_87(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> /*40*/ sVar15;
	struct<5> /*40*/ sVar20;
	var uVar25;
	var uVar26;

	fVar2 = 9999999f;
	func_154(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_59() == 0 && !func_155(0))
		{
			bVar14 = true;
		}
	}
	if (!func_156(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_157();
		if (VOLUME::DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_158(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_159(iVar0, iVar1) };
			bVar11 = func_160(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !func_25(vVar7)) && func_161(iVar0, bParam8, iParam12)) && !func_162(iVar0)) || bVar11)
			{
				if (func_163(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

bool func_88(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_89(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_90(int iParam0)
{
	if (func_88(iParam0, 1))
	{
		func_164(1);
	}
}

bool func_91(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

bool func_92(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_93(int iParam0)
{
	if (!func_3(iParam0))
	{
		return -1;
	}
	return func_47(iParam0);
}

int func_94(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_165(vParam0, 0f, 0f, 0, 2);
	return func_165(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_44(iParam0))
	{
		return;
	}
	if (func_166(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_167(iParam0, 1);
	}
	else
	{
		func_168(iParam0, 1);
	}
	func_169(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_9(iVar0) == iParam0)
		{
			func_101(iVar0, 0);
		}
		iVar0++;
	}
}

int func_96(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_170(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_170(iParam0))
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
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_172(45))
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
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_172(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_38(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_38(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_172(45))
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
			if (iParam0 == func_84())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_172(45))
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
		iVar0 = func_173(iParam0);
		if (iVar0 != -1)
		{
			return func_174(iVar0, bParam1);
		}
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_98(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_41(iParam0))
	{
		return;
	}
	bVar0 = func_91(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_175(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_176(iParam0, func_117());
			func_177(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_178(iParam0, 67108864);
		func_176(iParam0, -15);
	}
	func_179(iParam0);
}

void func_99(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_41(iParam0))
	{
		return;
	}
	if (func_33(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		bVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		bVar0 = func_180(iParam0);
	}
	bVar1 = func_91(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_181(iParam0);
		if (iParam2 > iVar2 || !func_183(func_182(iParam0)))
		{
			func_184(iParam0, func_117());
			func_185(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_177(iParam0, 33554432);
			if (VOLUME::DOES_VOLUME_EXIST(bVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(bVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_178(iParam0, 33554432);
		func_184(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(bVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(bVar0, 1, 1);
		}
	}
	func_186(iParam0);
}

bool func_100(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_101(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_187(iParam0, 1);
	}
	else
	{
		if (func_188(iParam0))
		{
			return;
		}
		func_189(iParam0, 1);
	}
	func_190(iParam0, bParam1);
}

int func_102(int iParam0)
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

int func_103(int iParam0)
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

int func_104(int iParam0)
{
	return iParam0 & 31;
}

int func_105(int iParam0)
{
	int iVar0;

	iVar0 = func_102(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_191(iVar0);
}

int func_106(int iParam0, int iParam1)
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
			func_192(iVar2);
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

void func_107()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_108(int iParam0, bool bParam1)
{
	return func_193(func_117(), iParam0, bParam1);
}

bool func_109()
{
	return Global_40.f_7748.f_6 > 0;
}

void func_110()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_194(Global_40.f_7748.f_5, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_195(Global_40.f_7748.f_1, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_111();
	}
}

void func_111()
{
	int iVar0;

	if (Global_40.f_7748.f_1 >= 9)
	{
		func_196();
		return;
	}
	iVar0 = Global_40.f_7748.f_1 + 1;
	func_197(iVar0, 0);
	if (func_109())
	{
		if (Global_40.f_7748.f_1 >= 9)
		{
			func_196();
		}
		else
		{
			func_198();
		}
	}
	func_199();
}

void func_112(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_200(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_201(Var0);
}

bool func_113(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/].f_4 > 0;
}

void func_114(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_194(Global_40.f_7731[iParam0 /*5*/].f_3, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	iVar3 = (iVar3 + (365 * iVar5));
	iVar3 = (iVar3 + (30 * iVar4));
	iVar2 = (iVar2 + (24 * iVar3));
	if (iVar2 > 168)
	{
		iVar2 = 168;
	}
	while (iVar2 > iVar6)
	{
		func_202(iParam0, &iVar7, &iVar6, 0);
		iVar6 = (iVar6 + (24 * iVar7));
		iVar2 = (iVar2 - iVar6);
		func_115(iParam0, 0);
	}
}

void func_115(int iParam0, bool bParam1)
{
	int iVar0;

	if (Global_40.f_7731[iParam0 /*5*/] >= 10)
	{
		func_203(iParam0);
		return;
	}
	if (!bParam1)
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7 && !func_113(iParam0))
		{
			return;
		}
	}
	iVar0 = Global_40.f_7731[iParam0 /*5*/] + 1;
	func_204(iVar0);
	func_205(iParam0, iVar0, 0);
	if (func_113(iParam0))
	{
		if (Global_40.f_7731[iParam0 /*5*/] >= 7)
		{
			func_203(iParam0);
		}
		else
		{
			func_206(iParam0);
		}
	}
	func_207();
}

bool func_116()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_117()
{
	return Global_1899515;
}

void func_118(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_208(iParam0, &iVar0, &iVar1);
	if (!func_209(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_210(iVar0, iVar1);
}

int func_119(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_120(int iParam0)
{
	iParam0 = func_119(iParam0);
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

void func_121(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_122(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_123(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_211(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_211(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_212(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_213(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_214(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0)
{
	iParam0 = func_119(iParam0);
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

void func_125(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (func_215(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, 0);
	PED::SET_PED_OWNS_ANIMAL(Global_35, bParam0, false);
	PED::_0xB8B6430EAD2D2437(bParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_0xF74E134F40192884(bParam0, 1);
	PED::_0xFD6943B6DF77E449(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_0xAEB97D84CDF3C00B(bParam0, 0);
	if (func_216(bParam0))
	{
		iVar3 = func_217(bParam0);
		if (func_218(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

void func_126()
{
	if (func_138(0))
	{
		func_219(0);
	}
	if (func_138(1))
	{
		func_219(1);
	}
	if (func_138(5))
	{
		func_219(5);
	}
	if (func_138(6))
	{
		func_120(6);
	}
}

void func_127(var uParam0)
{
	*uParam0 = -377364164; /* GXTEntry: "Natural" */
	uParam0->f_1 = 357708345; /* GXTEntry: "Natural" */
}

void func_128(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_220(iParam0, Param1))
	{
	}
	if (!func_221(iParam0, Param1.f_1))
	{
	}
}

void func_129(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_222(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_130(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_131(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_132(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_133(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_134(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_135(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_136(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_137(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

bool func_138(int iParam0)
{
	iParam0 = func_119(iParam0);
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

bool func_139(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_140(int iParam0)
{
	if (!func_139(iParam0))
	{
		return;
	}
	func_223(1);
}

bool func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_208(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_1905944[iVar1] = uVar3;
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return;
	}
	iVar1 = func_124(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = false;
	if (iVar1 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	func_120(iParam0);
	func_120(5);
	if (func_224(5))
	{
		func_144(5, 0);
	}
	func_62(5);
	func_56(5, iParam0);
	func_58(5, 1);
	func_57(5, iParam1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar0) == iVar1)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar0, false);
	}
	if (PLAYER::_0xD3F7445CEA2E5035(iVar0) == iVar1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			PED::SET_LOOTING_FLAG(iVar1, 0, true);
			PED::SET_LOOTING_FLAG(iVar1, 1, true);
			DECORATOR::_DECOR_SET_STRING(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
	if (bVar3)
	{
		if (func_25(vVar4))
		{
			func_60(-1);
			func_61(3);
			func_225(0f, 0f, 0f);
			func_226(-15);
		}
		else
		{
			func_60(5);
			func_61(0);
			func_225(vVar4);
			func_226(func_117());
		}
	}
	func_227(iParam0);
	func_228(iParam0);
	func_62(iParam0);
	func_126();
}

void func_144(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_147(iParam0);
	if (func_148(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_149(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_138(iParam0))
	{
		return;
	}
	bVar1 = func_124(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		bVar2 = true;
	}
	func_120(iParam0);
	func_146(iParam0);
	func_229(bVar1);
	if (!ENTITY::_0x88AD6CC10D8D35B2(bVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar1, true, true);
	}
	if (func_230(bVar1))
	{
		PHYSICS::_0x0348469DAA17576C(bVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(bVar1, Global_35, 500f, -1, 0, 1f, false);
		PED::SET_PED_KEEP_TASK(bVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar3, false);
	}
	else if (iParam0 == 1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar3, 0);
	}
	PED::_0xBCC76708E5677E1D(bVar1, 1);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_0xAEB97D84CDF3C00B(bVar1, 1);
		}
		PED::_0x329772C47DBB2FBC(bVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(bVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_IS_PED_MODEL_SUPPRESSED(iVar4))
		{
			if (!func_231(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_62(iParam0);
}

void func_145(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_232(iParam0, 32);
	func_126();
}

void func_146(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
}

void func_147(int iParam0)
{
	int iVar0;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_149(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_233(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_233(iParam0);
	}
}

bool func_148(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

int func_149(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

void func_150(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
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

var func_151()
{
	return Global_1900383.f_393;
}

void func_152(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

bool func_153(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((func_234(iParam0, 2) || func_234(iParam0, 4)) || func_234(iParam0, 8))
	{
		return true;
	}
	return false;
}

int func_154(bool bParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_37();
	bVar1 = false;
	if (bVar0 && !func_39(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_39(37)) && !func_39(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_39(43)) && !func_39(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_66(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_66(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

bool func_155(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

bool func_156(int iParam0, var uParam1)
{
	if (!func_86(iParam0))
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

bool func_157()
{
	if (func_37())
	{
		if (!func_39(3))
		{
			return func_180(43);
		}
		if (func_39(38) && !func_39(43))
		{
			return func_235(8);
		}
	}
	return false;
}

bool func_158(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_236(iParam0));
}

Vector3 func_159(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	vector3 vVar5;

	func_156(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, &Var0);
	}
	return vVar5;
}

int func_160(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	int iVar6;

	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_237(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_156(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar6, &Var1);
		if (func_238(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_161(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_239(iParam0);
	if (func_240(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_162(int iParam0)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_156(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_163(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;

	if (bParam5)
	{
		if (func_241(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_55(5))
	{
		if (func_242(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_243(vParam0);
	if (bParam6)
	{
		iVar1 = func_12(vParam0, 1);
		if (func_170(iVar1) || func_244(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_245(iParam3, iParam4))
	{
		return false;
	}
	if (!func_246())
	{
		if (func_247(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam8))
	{
		if (!func_248(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == func_12(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_249(iParam3, iParam4))
	{
		return false;
	}
	if (func_250(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_251(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_37())
	{
		if (VOLUME::DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::IS_POINT_IN_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_252(vParam0, bParam10) || func_253(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_164(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_165(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

bool func_166(int iParam0, int iParam1)
{
	if (!func_44(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_167(int iParam0, int iParam1)
{
	if (!func_44(iParam0))
	{
		return;
	}
	if (!func_166(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 = (Global_1058888.f_42196[iParam0 /*12*/].f_5 || iParam1);
}

void func_168(int iParam0, int iParam1)
{
	if (!func_44(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_358[iParam0 /*12*/].f_5 = (Global_40.f_358[iParam0 /*12*/].f_5 - (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1058888.f_42196[iParam0 /*12*/].f_5 = (Global_1058888.f_42196[iParam0 /*12*/].f_5 - (Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1));
}

void func_169(int iParam0, bool bParam1)
{
	if (!func_44(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_255(func_254(iParam0));
	}
	else
	{
		func_256(func_254(iParam0));
	}
}

bool func_170(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 33554432);
}

int func_171()
{
	return Global_1572887.f_12;
}

bool func_172(int iParam0)
{
	if (!func_257(iParam0))
	{
		return false;
	}
	return func_258(iParam0);
}

int func_173(int iParam0)
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

int func_174(int iParam0, bool bParam1)
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
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_172(45))
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
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_172(45))
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
			if (!bParam1 || func_171() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_172(45))
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

int func_175(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

void func_176(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_2 = iParam1;
}

void func_177(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1058888.f_40545[iParam0 /*11*/] = (Global_1058888.f_40545[iParam0 /*11*/] || iParam1);
	}
}

void func_178(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] = (Global_1058888.f_40545[iParam0 /*11*/] - (Global_1058888.f_40545[iParam0 /*11*/] && iParam1));
}

void func_179(int iParam0)
{
	if (!func_41(iParam0))
	{
		return;
	}
	if (func_259(iParam0))
	{
		func_260(iParam0);
	}
	else
	{
		func_261(iParam0);
	}
}

int func_180(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

int func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_41(iParam0))
	{
		return 0;
	}
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_263(func_182(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_182(int iParam0)
{
	if (!func_41(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40545[iParam0 /*11*/].f_1;
}

bool func_183(int iParam0)
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
	iVar0 = func_264(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_265(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_266(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_267(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_268(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_269(iParam0);
	if (iVar5 < 1 || iVar5 > func_270(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_184(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_1 = iParam1;
}

void func_185(int iParam0, int iParam1)
{
	if (!func_41(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_186(int iParam0)
{
	if (!func_41(iParam0))
	{
		return;
	}
	if (func_170(iParam0) && func_271(iParam0))
	{
		func_255(func_272(iParam0));
	}
	else
	{
		func_256(func_272(iParam0));
	}
}

void func_187(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (!func_273(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] || iParam1);
		return;
	}
	Global_1058888.f_42269[iParam0] = (Global_1058888.f_42269[iParam0] || iParam1);
}

bool func_188(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	return func_273(iParam0, 2);
}

void func_189(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return;
	}
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_431[iParam0] = (Global_40.f_431[iParam0] - (Global_40.f_431[iParam0] && iParam1));
		return;
	}
	Global_1058888.f_42269[iParam0] = (Global_1058888.f_42269[iParam0] - (Global_1058888.f_42269[iParam0] && iParam1));
}

void func_190(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_100(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_274(iParam0);
	if (bParam1)
	{
		func_255(iVar0);
	}
	else
	{
		func_256(iVar0);
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0)
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

bool func_193(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_183(iParam1) || !func_183(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_194(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_275(func_117(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_195(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_277(uParam1, iParam2, &uVar0, &uVar1, 0, func_276());
	}
}

void func_196()
{
	bool bVar0;

	bVar0 = func_109();
	Global_40.f_7748.f_6 = 0;
	if (bVar0 && !func_109())
	{
		func_278(14);
	}
}

void func_197(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_279(iParam0))
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
		Global_40.f_7748.f_5 = func_117();
		bVar2 = (Global_40.f_7748.f_1 < 9 && func_109());
		func_195(Global_40.f_7748.f_1, &iVar0, &iVar1, bVar2);
		func_280(&(Global_40.f_7748.f_5), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_198()
{
	bool bVar0;

	bVar0 = func_109();
	Global_40.f_7748.f_6 = (Global_40.f_7748.f_6 - 1);
	if (bVar0 && !func_109())
	{
		func_278(14);
	}
}

void func_199()
{
	int iVar0;

	if (func_281() >= 7)
	{
		iVar0 = func_117();
		func_280(&iVar0, 0, 0, 0, 2, 0, 0, 0);
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

void func_200(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_201(struct<4> /*32*/ sParam0)
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
			if (func_282(Param0))
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
			func_283(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_200(8);
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
			if (func_282(Param0))
			{
				return;
			}
			func_283(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_200(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_284(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_202(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	switch (Global_40.f_7731[iParam0 /*5*/])
	{
		case 0:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*iParam2 = 0;
			break;
		case 2:
			*uParam1 = 4;
			*iParam2 = 0;
			break;
		case 3:
			*uParam1 = 8;
			*iParam2 = 0;
			break;
		case 4:
			*uParam1 = 12;
			*iParam2 = 0;
			break;
		case 5:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 6:
			*uParam1 = 20;
			*iParam2 = 0;
			break;
		case 7:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 8:
			*uParam1 = 32;
			*iParam2 = 0;
			break;
		case 9:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
		case 10:
			*uParam1 = 52;
			*iParam2 = 0;
			break;
	}
	if (bParam3)
	{
		func_277(uParam1, iParam2, &uVar0, &uVar1, 0, func_285(iParam0));
	}
}

void func_203(int iParam0)
{
	bool bVar0;

	bVar0 = func_113(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = 0;
	if (bVar0 && !func_113(iParam0))
	{
		func_118(490, 1);
		func_286(iParam0, 0);
	}
}

void func_204(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_118(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && func_38(Global_1835011[4 /*74*/].f_1, 1))
	{
		func_118(493, 0);
	}
}

void func_205(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_287(iParam0))
	{
		return;
	}
	if (!func_288(iParam1))
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
		bVar2 = (Global_40.f_7731[iParam0 /*5*/] < 7 && func_113(iParam0));
		Global_40.f_7731[iParam0 /*5*/].f_3 = func_117();
		func_202(iParam0, &iVar0, &iVar1, bVar2);
		func_280(&(Global_40.f_7731[iParam0 /*5*/].f_3), 0, 0, iVar1, iVar0, 0, 0, 0);
	}
}

void func_206(int iParam0)
{
	bool bVar0;

	bVar0 = func_113(iParam0);
	Global_40.f_7731[iParam0 /*5*/].f_4 = (Global_40.f_7731[iParam0 /*5*/].f_4 - 1);
	if (bVar0 && !func_113(iParam0))
	{
		func_118(490, 1);
		func_286(iParam0, 0);
	}
}

void func_207()
{
	int iVar0;

	iVar0 = func_117();
	func_280(&iVar0, 0, 0, 0, 2, 0, 0, 0);
	if (func_289(0) >= 7)
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
	if (func_289(1) >= 7)
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
	if (func_289(2) >= 7)
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

void func_208(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_209(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_290(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_291(iParam0))
	{
		return false;
	}
	if (func_292(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_293(iParam0, 1)) || func_2(32768))
	{
		if (!func_293(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_294())
	{
		return false;
	}
	return true;
}

void func_210(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_211(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_295(iParam0))
	{
		return false;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_296(0) };
	if (!func_297(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_298(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_212(int iParam0)
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

bool func_213(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_299(bParam10))
	{
		return func_300(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_301(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_302(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_0xDCCAA7C3BFD88862(func_303(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_304(Var14, 1))
		{
		}
	}
	return true;
}

bool func_214(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_299(bParam9))
	{
		return func_305(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_302(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_301(Param0, &Var0, bParam9, 1) || !func_301(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_302(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_303(0);
	if (!INVENTORY::_0xF2753D691BCDA314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_0x734311E2852760D0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_215(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_306(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_216(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_217(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_217(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_218(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_219(int iParam0)
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
	bVar0 = func_124(iParam0);
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
	if (func_234(iParam0, 64))
	{
		func_120(iParam0);
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
	bVar3 = func_172(42);
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
				func_307(&(Global_1900383[iParam0 /*45*/].f_27));
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
		func_120(iParam0);
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
		if (func_308(1) < 1)
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
		func_309(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_234(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(bVar0);
	bVar10 = false;
	iVar11 = func_310(iParam0);
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
	fVar15 = func_311(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_312(iParam0))
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
		func_313(Global_1900383[iParam0 /*45*/].f_26);
		func_314(Global_1900383[iParam0 /*45*/].f_26);
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
	if (func_230(bVar0) && !bVar9)
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
	iVar21 = func_308(iParam0);
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

bool func_220(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	Var0.f_9 = -1591664384;
	if (!func_211(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_315(iParam1, Var0, joaat("SLOTID_HORSE_MANE"), 0) };
	return func_304(Var29, 1);
}

bool func_221(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	Var0.f_9 = -1591664384;
	if (!func_211(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_315(iParam1, Var0, joaat("SLOTID_HORSE_TAIL"), 0) };
	return func_304(Var29, 1);
}

void func_222(var uParam0)
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

void func_223(int iParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, iParam0, 0);
}

bool func_224(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_66(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_225(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

void func_226(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

void func_227(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_316(iParam0);
	func_317();
}

void func_228(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_316(iParam0);
	func_318(iParam0, 0);
	func_319(iParam0, 0f);
}

void func_229(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_320();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(bParam0, iVar0, 0);
	iVar1 = func_321();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(bParam0, iVar1, 0);
	PED::_0xDE1B1907A83A1550(bParam0, 1f);
	PED::_0x345C9F993A8AB4A4(bParam0, 1f);
	PED::_0xEF5A3D2285D8924B(bParam0, 1f);
}

bool func_230(bool bParam0)
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

bool func_231(int iParam0)
{
	if (!func_322(iParam0))
	{
		return false;
	}
	if (!func_323())
	{
		return true;
	}
	return false;
}

void func_232(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
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

void func_233(int iParam0)
{
	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

bool func_234(int iParam0, int iParam1)
{
	iParam0 = func_119(iParam0);
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

bool func_235(int iParam0)
{
	bool bVar0;

	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9446; //curOff = 4298
			if (VOLUME::DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(bVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(bVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return false;
			}
			Jump @9446; //curOff = 4382
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9446; //curOff = 4473
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9446; //curOff = 5584
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9446; //curOff = 6027
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9446; //curOff = 6716
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9446; //curOff = 7288
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9446; //curOff = 7860
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9446; //curOff = 8875
			bVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = bVar0;
			return bVar0;
		}

bool func_236(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_324())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

int func_237(int iParam0, int iParam1)
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

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return 1529797091;
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return 1388932648;
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return 878376253;
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return -2076086367;
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_239(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (!func_156(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0))
	{
		iVar6 = func_325(iVar5);
		return iVar6;
	}
	return -1;
}

bool func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_326(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_241(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = (BUILTIN::SHIFT_LEFT(iParam1, 11) || iParam0);
	iVar0 = 0;
	while (iVar0 < Global_40.f_9.f_16)
	{
		if (Global_40.f_9.f_16[iVar0] == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	struct<4> /*32*/ sVar7;

	func_156(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar6, &Var0);
	func_156(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = -1148228754;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar5, &Var7);
	}
	return uVar5;
}

int func_243(vector3 vParam0)
{
	return func_327(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_244(int iParam0, bool bParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_273(iParam0, 8))
		{
			return false;
		}
	}
	if (func_273(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_245(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> /*32*/ sVar8;

	func_156(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	func_156(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return func_328(iVar7, 1, 0);
		}
	}
	return true;
}

bool func_246()
{
	var uVar0;

	if (func_37())
	{
		if (!func_39(4))
		{
			return true;
		}
	}
	return (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HATS")) || func_329(-2061583405, &uVar0));
}

bool func_247(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	struct<4> /*32*/ sVar7;

	func_156(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	func_156(15, &Var7);
	Var7.f_2 = -1222062814;
	Var7.f_3 = uVar5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var7.f_1), &Var7))
	{
		Var7.f_2 = 1689379704;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar6, &Var7))
		{
			return uVar6;
		}
	}
	return false;
}

bool func_248(int iParam0)
{
	if (!func_100(Global_1310720.f_22))
	{
		return true;
	}
	if (func_244(Global_1310720.f_22, 1))
	{
		return true;
	}
	if ((0 == iParam0 && 2 == Global_1310720.f_22) || (2 == iParam0 && 0 == Global_1310720.f_22))
	{
		return true;
	}
	return Global_1310720.f_22 == iParam0;
}

bool func_249(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;
	int iVar7;

	func_156(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0))
		{
			iVar6 = func_330(iVar5);
			if (func_39(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0))
		{
			iVar6 = func_330(iVar5);
			if (!func_39(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0))
		{
			iVar7 = func_331(iVar5);
			if (func_332(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0))
		{
			iVar7 = func_331(iVar5);
			if (!func_332(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_250(int iParam0)
{
	if (!func_333(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

bool func_251(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

int func_252(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!func_3(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(func_334(iVar1), vParam0) < func_336(func_335(iVar1) == 0f, bParam3, func_335(iVar1)))
					{
						return 1;
					}
					break;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_253(vector3 vParam0, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_337(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_338(iVar0), vParam0) < bParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_254(int iParam0)
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

void func_255(int iParam0)
{
	int iVar0;

	if (func_339(iParam0) == 57)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-1145496915, -1482012664);
		MAP::_MAP_ENABLE_REGION_BLIP(-1043953850, -1482012664);
		MAP::_MAP_ENABLE_REGION_BLIP(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_340(iParam0) == 4 || func_340(iParam0) == 12) || func_9(func_340(iParam0)) == 4) || (func_273(func_340(iParam0), 8) && ((func_340(iParam0) == 2 || func_340(iParam0) == 0) || func_340(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, iVar0);
	}
}

void func_256(int iParam0)
{
	if (func_339(iParam0) == 57)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-1145496915);
		MAP::_MAP_DISABLE_REGION_BLIP(-1043953850);
		MAP::_MAP_DISABLE_REGION_BLIP(-1783502982);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -1305340593) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -1482012664))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

bool func_257(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_259(int iParam0)
{
	if (!func_41(iParam0))
	{
		return false;
	}
	return func_91(iParam0, 67108864);
}

void func_260(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_341(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_342(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_261(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_341(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_342(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -1305340593) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -1482012664))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_262(int iParam0)
{
	if (!func_41(iParam0))
	{
		return 0;
	}
	if (func_33(iParam0))
	{
		return -1;
	}
	return Global_23118[iParam0 /*11*/].f_3;
}

int func_263(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_183(iParam0))
	{
		return 0;
	}
	func_194(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_264(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_265(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_266(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_267(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_343(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_268(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_269(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_270(int iParam0, int iParam1)
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

bool func_271(int iParam0)
{
	if (!func_41(iParam0))
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

int func_272(int iParam0)
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

bool func_273(int iParam0, int iParam1)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] && iParam1) != 0;
}

int func_274(int iParam0)
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

void func_275(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_193(iParam0, iParam1, 1))
	{
		iVar0 = func_268(iParam1);
		iVar1 = func_267(iParam0);
		iVar2 = (func_267(iParam0) - func_267(iParam1));
		iVar3 = (func_268(iParam0) - func_268(iParam1));
		iVar4 = (func_269(iParam0) - func_269(iParam1));
		iVar5 = (func_266(iParam0) - func_266(iParam1));
		iVar6 = (func_265(iParam0) - func_265(iParam1));
		iVar7 = (func_264(iParam0) - func_264(iParam1));
	}
	else
	{
		iVar0 = func_268(iParam0);
		iVar1 = func_267(iParam1);
		iVar2 = (func_267(iParam1) - func_267(iParam0));
		iVar3 = (func_268(iParam1) - func_268(iParam0));
		iVar4 = (func_269(iParam1) - func_269(iParam0));
		iVar5 = (func_266(iParam1) - func_266(iParam0));
		iVar6 = (func_265(iParam1) - func_265(iParam0));
		iVar7 = (func_264(iParam1) - func_264(iParam0));
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
		iVar4 = (iVar4 + func_270(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_344(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_276()
{
	if (func_345(8))
	{
		return 8;
	}
	else if (func_345(4))
	{
		return 4;
	}
	else if (func_345(2))
	{
		return 2;
	}
	return 1;
}

void func_277(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	fVar3 = BUILTIN::TO_FLOAT(iParam5);
	iVar0 = func_346(BUILTIN::TO_FLOAT(*uParam0), fVar3);
	iVar1 = func_347(BUILTIN::TO_FLOAT(*iParam1), fVar3);
	iVar2 = func_348(BUILTIN::TO_FLOAT(*uParam2), fVar3);
	*uParam0 = (*uParam0 / iParam5);
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
		*uParam0 = (*uParam0 * -1);
	}
}

void func_278(int iParam0)
{
	Global_40.f_7748.f_4 = (Global_40.f_7748.f_4 - (Global_40.f_7748.f_4 && iParam0));
}

bool func_279(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 9)
	{
		return false;
	}
	return true;
}

void func_280(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_267(*iParam0);
	iVar1 = func_268(*iParam0);
	iVar2 = func_269(*iParam0);
	iVar3 = func_266(*iParam0);
	iVar4 = func_265(*iParam0);
	iVar5 = func_264(*iParam0);
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
	iVar6 = func_270(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_270(iVar1, iVar0);
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
	func_349(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_281()
{
	return Global_40.f_7748.f_1;
}

bool func_282(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_283(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_284(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = uParam2;
	Var0 = uParam0;
	Var0.f_2 = uParam1;
	func_350(Var0);
}

int func_285(int iParam0)
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

void func_286(int iParam0, int iParam1)
{
	Global_40.f_7731[iParam0 /*5*/].f_2 = iParam1;
}

bool func_287(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return true;
}

bool func_288(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 10)
	{
		return false;
	}
	return true;
}

int func_289(int iParam0)
{
	return Global_40.f_7731[iParam0 /*5*/];
}

bool func_290(int iParam0, int iParam1)
{
	if (func_171() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_291(int iParam0)
{
	if (func_171() != -1)
	{
		if (func_293(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_293(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_292(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_293(iParam0, 65536) && !func_293(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_293(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_293(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_293(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_294()
{
	return Global_1905944.f_5694;
}

bool func_295(int iParam0)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;

	bVar0 = func_212(iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	Var1 = { func_296(0) };
	if (func_351(&Var1, bVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

struct<4> /*32*/ func_296(bool bParam0)
{
	return func_315(joaat("CHARACTER"), func_352(), -1591664384, bParam0);
}

bool func_297(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_303(bParam7);
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

bool func_298(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_303(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_299(bool bParam0)
{
	if (func_171() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_303(bParam0));
}

int func_300(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	if (!func_301(Param0, &Var0, 1, 0))
	{
		return -1;
	}
	if (func_302(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_353(Var0.f_4, Param4, iParam8, 0);
	iVar15 = INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + Var0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			Var0.f_11 = (iVar15 - iVar14);
		}
	}
	Var16 = { func_354(&Var0) };
	Var16.f_4 = { Param4 };
	Var16.f_11 = iParam8;
	Var16.f_10 = bParam10;
	iVar33 = func_355(1168099063, &Var16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_301(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_303(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_302(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_303(bool bParam0)
{
	if (func_171() == -1)
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

bool func_304(struct<4> /*32*/ sParam0, int iParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_299(0))
	{
		return func_356(Param0, iParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_301(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!INVENTORY::_0x734311E2852760D0(func_303(0), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

int func_305(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	if (func_302(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_301(Param0, &Var0, 1, 0) || !func_301(Param4, &Var14, 1, 0))
	{
		return -1;
	}
	if (func_302(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_354(&Var0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_354(&Var14) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), 1168099063))
		{
			if (func_357(iVar62, 1168099063, &Var28) && func_357(iVar62, 1168099063, &Var45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_358(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_355(1168099063, &Var28, 0);
		iVar62 = func_355(1168099063, &Var45, 0);
	}
	return iVar62;
}

bool func_306(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

void func_307(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_360(func_359(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_361())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_324();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_308(int iParam0)
{
	iParam0 = func_119(iParam0);
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

void func_309(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(*uParam0, func_360(func_359(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_361())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_324())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

int func_310(int iParam0)
{
	iParam0 = func_119(iParam0);
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

float func_311(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_312(int iParam0)
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

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_362(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_308(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_308(iParam0) + 1;
	fVar6 = func_363(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_364(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_313(int iParam0)
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

void func_314(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 673950256);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 561559387);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -201249929);
}

struct<4> /*32*/ func_315(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_365(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_303(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

void func_316(int iParam0)
{
	int iVar0;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_317()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1900383.f_317.f_2[iVar0 /*5*/] = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_2 = 0f;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_3 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_362(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_366(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_367(iParam1);
	bVar5 = func_124(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar5) || PED::IS_PED_INJURED(bVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(bVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(bVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_0xA69899995997A63B(bVar5, iVar7);
}

void func_319(int iParam0, float fParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_119(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	bVar0 = func_124(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(bVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(bVar0, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar2;
	PED::_0xA69899995997A63B(bVar0, iVar2);
	func_367(iVar2);
}

int func_320()
{
	return 5;
}

int func_321()
{
	return 6;
}

bool func_322(int iParam0)
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

bool func_323()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_324()
{
	if (func_171() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CC_LAKAY"):
			return 5;
		case joaat("CC_BEAVER_HOLLOW"):
			return 6;
		case joaat("CC_COLTER"):
			return 0;
		case joaat("CC_CLEMENS_POINT"):
			return 2;
		case joaat("CC_GUARMA"):
			return 4;
		case joaat("CC_HORSESHOE_OVERLOOK"):
			return 1;
		case joaat("CC_SHADY_BELLE"):
			return 3;
		case joaat("CC_PRONGHORN_RANCH"):
			return 7;
		case joaat("CC_BEECHERS_HOPE"):
			return 8;
		default:
			break;
	}
	return -1;
}

int func_326(int iParam0, int iParam1)
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

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_328(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_365(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_368(iParam0);
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
		if (!func_369(iParam0, 1))
		{
			return false;
		}
	}
	return func_370(iParam0, 0, bParam2) >= iParam1;
}

bool func_329(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_372(func_371(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_373(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_330(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[iVar0 /*49*/].f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_332(int iParam0)
{
	if (func_171() != -1)
	{
		return false;
	}
	if (!func_374(iParam0))
	{
		return false;
	}
	return func_38(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_333(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

Vector3 func_334(int iParam0)
{
	return func_375(iParam0);
}

float func_335(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			return 50f;
	}
	return 0f;
}

bool func_336(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

bool func_337(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_171() != -1)
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

Vector3 func_338(int iParam0)
{
	vector3 vVar0;

	if (!func_374(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_376(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

int func_339(int iParam0)
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

int func_340(int iParam0)
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

char* func_341(int iParam0)
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

char* func_342(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_343(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_344(float fParam0, float fParam1, float fParam2)
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

bool func_345(int iParam0)
{
	return (Global_40.f_7748.f_4 && iParam0) != 0;
}

int func_346(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 24f));
}

int func_347(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

int func_348(float fParam0, float fParam1)
{
	return BUILTIN::FLOOR((((fParam0 / fParam1) - BUILTIN::TO_FLOAT(BUILTIN::FLOOR((fParam0 / fParam1)))) * 60f));
}

void func_349(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_377(iParam0, iParam6);
	func_378(iParam0, iParam5);
	func_379(iParam0, iParam4);
	func_380(iParam0, iParam3);
	func_381(iParam0, iParam2);
	func_382(iParam0, iParam1);
}

void func_350(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_282(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_282(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_283(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_200(8);
}

int func_351(var uParam0, bool bParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_303(bParam2), uParam0, bParam1);
}

struct<4> /*32*/ func_352()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_353(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_365(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_315(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_303(bParam6), &Var0, 0);
	return uVar4;
}

struct<17> /*136*/ func_354(var uParam0)
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

int func_355(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_357(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_358(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_358(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_358(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_356(struct<4> /*32*/ sParam0, int iParam4, bool bParam5)
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
	if (!func_301(Param0, &Var1, 1, 0))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam4)
	{
		return iVar0;
	}
	iVar15 = func_368(Var1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		Var16 = { func_383(Param0, 1) };
		Var16.f_10 = iParam4;
		iVar0 = func_384(joaat("UPDATE"), &Var16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		Var45 = { func_385(Param0, 1) };
		Var45.f_10 = iParam4;
		iVar0 = func_386(joaat("UPDATE"), &Var45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var63 = { func_354(&Var1) };
		Var63.f_10 = iParam4;
		iVar0 = func_355(joaat("UPDATE"), &Var63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_357(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_358(int iParam0, int iParam1)
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
	func_387(iParam0, iParam1);
}

char* func_359(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_388(37, iParam0))
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
	if (func_388(37, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_360(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_389(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_361()
{
	if (func_171() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_362(int iParam0)
{
	iParam0 = func_119(iParam0);
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

float func_363(int iParam0)
{
	iParam0 = func_119(iParam0);
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

float func_364(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_365(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_366(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_37())
	{
		if (func_361())
		{
			bVar0 = false;
			if (!func_38(Global_1835011[15 /*74*/].f_1, 1) && !func_172(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_390();
				*iParam1 = func_391();
				*uParam2 = func_392();
				return 1;
			}
			else
			{
				*uParam0 = func_393();
				*iParam1 = func_394();
				*uParam2 = func_395();
				return 1;
			}
		}
		else if (func_324())
		{
			if (!func_38(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_396();
				*iParam1 = func_397();
				*uParam2 = func_398();
				return 1;
			}
			else
			{
				*uParam0 = func_399();
				*iParam1 = func_400();
				*uParam2 = func_401();
				return 1;
			}
		}
	}
	else if (func_361())
	{
		*uParam0 = func_402();
		*iParam1 = func_403();
		*uParam2 = func_404();
		return 1;
	}
	else if (func_324())
	{
		*uParam0 = func_405();
		*iParam1 = func_406();
		*uParam2 = func_407();
		return 1;
	}
	return 0;
}

void func_367(int iParam0)
{
	if (func_408() < iParam0)
	{
		func_409(iParam0);
	}
}

int func_368(int iParam0)
{
	vector3 vVar0;

	if (!func_365(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_369(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_365(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_410(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_411("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_412(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_413(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_414(iVar1);
				return true;
			}
			iVar3++;
		}
		func_414(iVar1);
	}
	return false;
}

int func_370(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_365(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_410(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_415(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_303(bParam2), iParam0, 0);
	return iVar2;
}

int func_371(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_416(iVar0);
}

int func_372(int iParam0, int iParam1)
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

int func_373(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_365(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_374(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

Vector3 func_375(int iParam0)
{
	if (func_417(iParam0))
	{
		return func_418(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_376(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_419(Global_1347702[iParam0 /*49*/].f_15) != 0)
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

void func_377(int iParam0, int iParam1)
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

void func_378(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*iParam0);
	iVar1 = func_267(*iParam0);
	if (iParam1 < 1 || iParam1 > func_270(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_380(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_381(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_382(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

struct<29> /*232*/ func_383(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_303(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_354(&Var29) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_384(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_420(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_358(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_358(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_358(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_385(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_303(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_354(&Var18) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_386(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_421(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_358(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_358(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_358(iVar0, 1);
		return iVar0;
	}
	return -1;
}

void func_387(int iParam0, int iParam1)
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

bool func_388(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_422(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_423())
	{
		return func_422(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_422(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_389(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_390()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_391()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_392()
{
	return 1;
}

int func_393()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_394()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_395()
{
	return 1;
}

int func_396()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_397()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_398()
{
	return 2;
}

int func_399()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_400()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_401()
{
	return 1;
}

int func_402()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_403()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_404()
{
	return 1;
}

int func_405()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_406()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_407()
{
	return 1;
}

int func_408()
{
	return Global_40.f_1095.f_3135;
}

void func_409(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_365(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_368(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_424(iParam0, 1399091007))
	{
		func_425(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_411(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_303(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_412(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_413(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_414(int iParam0)
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

int func_415(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_426(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_428(&Var0, func_427(0));
	}
	if (!func_429(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_414(iVar18);
	return iVar19;
}

int func_416(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_430(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_417(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_431(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_418(int iParam0)
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

int func_419(int iParam0)
{
	if (!func_3(iParam0))
	{
		return -1;
	}
	return func_432(iParam0);
}

bool func_420(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

bool func_421(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_422(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_423()
{
	return Global_1109000.f_245;
}

bool func_424(int iParam0, int iParam1)
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

void func_425(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_427(bool bParam0)
{
	int iVar0;

	iVar0 = func_303(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_315(923904168, func_296(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_315(923904168, func_296(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_315(923904168, func_296(bParam0), -740156546, 0);
}

void func_428(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_429(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_303(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_430(int iParam0, int iParam1)
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

bool func_431(var uParam0)
{
	if (func_433(&(uParam0->f_29), 62))
	{
		switch (func_434())
		{
			case 1:
				if (!func_433(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_433(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_433(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_433(&(uParam0->f_29), 32))
				{
					if (func_433(&(uParam0->f_29), 2))
					{
						if (func_266(func_117()) < 5)
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

int func_432(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_433(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_434()
{
	return Global_1899516;
}

