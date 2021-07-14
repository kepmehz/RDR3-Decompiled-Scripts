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
	int iLocal_14 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void main()
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = ScriptParam_0;
	if (func_1() != -1)
	{
		func_2();
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (Global_1879534)
	{
		BUILTIN::WAIT(0);
	}
	Var0 = func_3(5);
	Var0.f_6 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "gang_enc_bandito_shack", 32);
	Var10.f_14 = 2048;
	Var10.f_15 = 1;
	func_4(Var10, 0);
	func_2();
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2()
{
	SCRIPTS::_0xE7282390542F570D(iLocal_14);
	if (func_1() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

var func_3(int iParam0)
{
	return Global_40.f_9571[iParam0 /*10*/].f_9;
}

void func_4(struct<16> /*128*/ sParam0, int iParam16)
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
	if (!func_5(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_6(&(Param0.f_10)))
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
			func_7(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_5(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_6(char* sParam0)
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

void func_7(int iParam0)
{
	if (func_5(iParam0, 1))
	{
		func_8(1);
	}
}

void func_8(int iParam0)
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

