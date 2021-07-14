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
	struct<12> /*96*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_26 = 0;
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	vector3 vLocal_29 = { 0f, 0f, 0f };
	int iLocal_32 = 0;
	bool bLocal_33 = false;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion

void main()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_26 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
	{
		func_2(&Local_14);
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&Local_14);
	}
	iLocal_28 = ScriptParam_0.f_1;
	vLocal_29 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	fLocal_27 = TASK::_0x6718F40313A2B5A6(iLocal_28);
	iLocal_34 = func_3();
	if ((((((iLocal_34 == joaat("WILDERNESS_CHEST_18") || iLocal_34 == joaat("WILDERNESS_CHEST_32")) || iLocal_34 == joaat("WILDERNESS_CHEST_78")) || iLocal_34 == joaat("WILDERNESS_CHEST_79")) || iLocal_34 == joaat("WILDERNESS_CHEST_80")) || iLocal_34 == joaat("WILDERNESS_CHEST_81")) || iLocal_34 == joaat("WILDERNESS_CHEST_82"))
	{
		func_4(iLocal_34, &iLocal_40);
	}
	while (func_5())
	{
		if ((((((((((((iLocal_34 == joaat("WILDERNESS_CHEST_04") || iLocal_34 == joaat("WILDERNESS_CHEST_20")) || iLocal_34 == joaat("WILDERNESS_CHEST_26")) || iLocal_34 == joaat("WILDERNESS_CHEST_33")) || iLocal_34 == joaat("WILDERNESS_CHEST_49")) || iLocal_34 == joaat("WILDERNESS_CHEST_50")) || iLocal_34 == joaat("WILDERNESS_CHEST_51")) || iLocal_34 == joaat("WILDERNESS_CHEST_53")) || iLocal_34 == joaat("WILDERNESS_CHEST_54")) || iLocal_34 == joaat("WILDERNESS_CHEST_55")) || iLocal_34 == joaat("WILDERNESS_CHEST_56")) || iLocal_34 == joaat("WILDERNESS_CHEST_60")) || iLocal_34 == joaat("WILDERNESS_CHEST_66"))
		{
			if (func_6(&Local_14))
			{
				func_2(&Local_14);
			}
		}
		else if ((((iLocal_34 == joaat("WILDERNESS_CHEST_24") || iLocal_34 == joaat("WILDERNESS_CHEST_36")) || iLocal_34 == joaat("WILDERNESS_CHEST_61")) || iLocal_34 == joaat("WILDERNESS_CHEST_74")) || iLocal_34 == joaat("WILDERNESS_CHEST_78"))
		{
			if (func_7(&Local_14))
			{
				func_2(&Local_14);
			}
		}
		else if (iLocal_34 == joaat("WILDERNESS_CHEST_75") || iLocal_34 == joaat("WILDERNESS_CHEST_76"))
		{
			if (func_8(&Local_14))
			{
				func_2(&Local_14);
			}
		}
		else if (((((iLocal_34 == joaat("WILDERNESS_CHEST_09") || iLocal_34 == joaat("WILDERNESS_CHEST_69")) || iLocal_34 == joaat("WILDERNESS_CHEST_70")) || iLocal_34 == joaat("WILDERNESS_CHEST_71")) || iLocal_34 == joaat("WILDERNESS_CHEST_72")) || iLocal_34 == joaat("WILDERNESS_CHEST_73"))
		{
			if (func_9(&Local_14))
			{
				func_2(&Local_14);
			}
		}
		else if (iLocal_34 != joaat("WILDERNESS_CHEST_16"))
		{
			if (((((iLocal_34 == joaat("WILDERNESS_CHEST_18") || iLocal_34 == joaat("WILDERNESS_CHEST_32")) || iLocal_34 == joaat("WILDERNESS_CHEST_79")) || iLocal_34 == joaat("WILDERNESS_CHEST_80")) || iLocal_34 == joaat("WILDERNESS_CHEST_81")) || iLocal_34 == joaat("WILDERNESS_CHEST_82"))
			{
				if (func_10(&Local_14))
				{
					func_2(&Local_14);
				}
			}
			else
			{
				func_2(&Local_14);
			}
		}
		else if (func_11(&Local_14))
		{
			func_2(&Local_14);
		}
		BUILTIN::WAIT(0);
	}
}

int func_1()
{
	return Global_1572887.f_12;
}

void func_2(var uParam0)
{
	if ((((((((((((iLocal_34 == joaat("WILDERNESS_CHEST_04") || iLocal_34 == joaat("WILDERNESS_CHEST_20")) || iLocal_34 == joaat("WILDERNESS_CHEST_26")) || iLocal_34 == joaat("WILDERNESS_CHEST_33")) || iLocal_34 == joaat("WILDERNESS_CHEST_49")) || iLocal_34 == joaat("WILDERNESS_CHEST_50")) || iLocal_34 == joaat("WILDERNESS_CHEST_51")) || iLocal_34 == joaat("WILDERNESS_CHEST_53")) || iLocal_34 == joaat("WILDERNESS_CHEST_54")) || iLocal_34 == joaat("WILDERNESS_CHEST_55")) || iLocal_34 == joaat("WILDERNESS_CHEST_56")) || iLocal_34 == joaat("WILDERNESS_CHEST_60")) || iLocal_34 == joaat("WILDERNESS_CHEST_66"))
	{
		func_12(&iLocal_37);
	}
	if (iLocal_34 == joaat("WILDERNESS_CHEST_16"))
	{
		func_13(&(Local_14.f_11), 1);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Local_14.f_8))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Local_14.f_8));
	}
	if (iLocal_34 == joaat("WILDERNESS_CHEST_09"))
	{
	}
	else if (iLocal_34 == joaat("WILDERNESS_CHEST_69"))
	{
	}
	else if (iLocal_34 == joaat("WILDERNESS_CHEST_70"))
	{
	}
	else if (iLocal_34 == joaat("WILDERNESS_CHEST_71"))
	{
	}
	else if (iLocal_34 == joaat("WILDERNESS_CHEST_72"))
	{
	}
	else if (iLocal_34 == joaat("WILDERNESS_CHEST_73"))
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_35))
		{
			if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_35, func_14(iLocal_34, 11)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_35, func_14(iLocal_34, 11)))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_35, func_14(iLocal_34, 11), true);
			}
		}
	}
	SCRIPTS::_0xE7282390542F570D(iLocal_26);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_28))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iLocal_28));
	}
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, -1129417850, 0);
}

void func_4(int iParam0, int iParam1)
{
	*iParam1 = COLLECTION::_0x922A79CD4A033B8B(iParam0);
}

bool func_5()
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&Local_14);
		return false;
	}
	if (func_1() != -1)
	{
		func_2(&Local_14);
		return false;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		func_2(&Local_14);
		return false;
	}
	return true;
}

bool func_6(var uParam0)
{
	switch (func_15(uParam0))
	{
		case 0:
			bLocal_33 = func_16(func_3(), 5);
			Local_14.f_1 = func_17(iLocal_34, 1);
			STREAMING::REQUEST_MODEL(Local_14.f_1, false);
			func_18(uParam0, 1);
			break;
		case 1:
			if (func_19(iLocal_34) || func_20(bLocal_33, 1, 0))
			{
				func_21(Local_14.f_1, vLocal_29, &iLocal_32, 0, 0);
				func_2(&Local_14);
			}
			if (iLocal_34 == joaat("WILDERNESS_CHEST_20") || iLocal_34 == joaat("WILDERNESS_CHEST_26"))
			{
				func_18(uParam0, 2);
			}
			else if (func_23(func_22(bLocal_33)))
			{
				func_2(uParam0);
			}
			else
			{
				func_18(uParam0, 2);
			}
			break;
		case 2:
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				iLocal_34 = func_24(fLocal_27);
				func_18(uParam0, 5);
			}
			break;
		case 5:
			func_26(func_17(iLocal_34, 1), func_25(iLocal_34, 28), &iLocal_37);
			func_18(uParam0, 6);
			break;
		case 6:
			if (func_27(&iLocal_37, &iLocal_32))
			{
				func_18(uParam0, 4);
			}
			break;
		case 4:
			func_28(uParam0->f_1, vLocal_29, &iLocal_32, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				func_29(uParam0->f_1, vLocal_29, &iLocal_32, 0, 0);
				func_18(uParam0, 7);
			}
			break;
		case 7:
			func_30(uParam0->f_1, vLocal_29, func_25(iLocal_34, 27), func_25(iLocal_34, 29), &iLocal_32, bLocal_33, 1, 0, 0, func_17(iLocal_34, 0));
			func_18(uParam0, 21);
			break;
		case 21:
			break;
	}
	return false;
}

bool func_7(var uParam0)
{
	switch (func_15(uParam0))
	{
		case 0:
			bLocal_33 = func_16(func_3(), 5);
			iLocal_34 = func_24(fLocal_27);
			iLocal_41 = func_31(iLocal_34, 21);
			func_18(uParam0, 1);
			break;
		case 1:
			if (func_19(iLocal_34) || func_20(bLocal_33, 1, 0))
			{
				func_2(uParam0);
			}
			else if (iLocal_34 == joaat("WILDERNESS_CHEST_78"))
			{
				if (func_20(joaat("DOCUMENT_MAP_TOWNSECRET_ASB"), 1, 0))
				{
					func_18(uParam0, 14);
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if ((iLocal_34 == joaat("WILDERNESS_CHEST_36") || iLocal_34 == joaat("WILDERNESS_CHEST_74")) || iLocal_34 == joaat("WILDERNESS_CHEST_78"))
			{
				func_18(uParam0, 9);
			}
			else if (func_23(func_22(bLocal_33)))
			{
				func_2(uParam0);
			}
			else
			{
				func_18(uParam0, 9);
			}
			break;
		case 14:
			func_32(iLocal_40);
			func_18(uParam0, 9);
			break;
		case 9:
			if (iLocal_34 == joaat("WILDERNESS_CHEST_36"))
			{
				iLocal_39 = 4;
			}
			else
			{
				iLocal_39 = 8;
			}
			iLocal_37 = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_17(iLocal_34, 2), func_25(iLocal_34, 28), 1 | iLocal_39);
			func_18(uParam0, 10);
			break;
		case 10:
			if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_37))
			{
				iLocal_38 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_37));
				func_18(uParam0, 8);
			}
			break;
		case 8:
			if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_36))
			{
				iLocal_36 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iLocal_38, iLocal_41, 0f, 0f, 0f, 0f, 0, 0, 1);
				func_18(uParam0, 11);
			}
			break;
		case 11:
			if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_36))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(Global_35, iLocal_36))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
					{
						func_33(bLocal_33, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
						func_18(uParam0, 18);
					}
				}
			}
			break;
		case 18:
			if (func_20(bLocal_33, 1, 0))
			{
				func_18(uParam0, 20);
			}
			break;
		case 20:
			func_34(iLocal_34, 1);
			func_35(0, 10);
			func_18(uParam0, 21);
			break;
		case 21:
			break;
	}
	return false;
}

bool func_8(var uParam0)
{
	switch (func_15(uParam0))
	{
		case 0:
			bLocal_33 = func_16(func_3(), 5);
			Local_14.f_9 = func_17(iLocal_34, 0);
			STREAMING::REQUEST_MODEL(uParam0->f_9, false);
			if (func_19(iLocal_34))
			{
				func_2(uParam0);
			}
			func_18(uParam0, 1);
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
			{
				iLocal_34 = func_24(fLocal_27);
				func_36(uParam0);
				func_18(uParam0, 15);
			}
			break;
		case 15:
			if (func_37(Global_35, vLocal_29, 10f, 1, 1))
			{
				TASK::_0xA6A76D666A281F2D(uParam0->f_10, bLocal_33);
				func_18(uParam0, 16);
			}
			break;
		case 16:
			if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, func_31(iLocal_34, 21)))
			{
				func_18(uParam0, 17);
			}
			break;
		case 17:
			if (!PED::IS_PED_USING_SCENARIO_HASH(Global_35, func_31(iLocal_34, 21)))
			{
				func_18(uParam0, 18);
			}
			break;
		case 18:
			if (func_20(bLocal_33, 1, 0))
			{
				func_18(uParam0, 20);
			}
			break;
		case 20:
			func_34(iLocal_34, 1);
			func_35(0, 10);
			func_18(uParam0, 0);
			return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	switch (func_15(uParam0))
	{
		case 0:
			if (func_19(iLocal_34))
			{
				func_2(uParam0);
			}
			iLocal_35 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_29);
			func_18(uParam0, 13);
			break;
		case 13:
			if (func_38(uParam0))
			{
				func_18(uParam0, 21);
			}
			break;
		case 21:
			break;
	}
	return false;
}

bool func_10(var uParam0)
{
	bool bVar0;

	switch (func_15(uParam0))
	{
		case 0:
			if (func_19(iLocal_34))
			{
				func_2(uParam0);
			}
			if (((iLocal_34 == joaat("WILDERNESS_CHEST_79") || iLocal_34 == joaat("WILDERNESS_CHEST_80")) || iLocal_34 == joaat("WILDERNESS_CHEST_81")) || iLocal_34 == joaat("WILDERNESS_CHEST_82"))
			{
				bVar0 = func_16(iLocal_34, 5);
				if (func_20(bVar0, 1, 0) || !func_39())
				{
					func_2(uParam0);
				}
			}
			else if (iLocal_34 == joaat("WILDERNESS_CHEST_32"))
			{
				if (!(func_40() && func_41() != 0))
				{
					func_2(uParam0);
				}
				else
				{
					func_18(uParam0, 14);
				}
			}
			func_18(uParam0, 14);
			break;
		case 14:
			func_32(iLocal_40);
			func_18(uParam0, 21);
			break;
		case 21:
			break;
	}
	return false;
}

bool func_11(var uParam0)
{
	switch (func_15(uParam0))
	{
		case 0:
			func_42(&(uParam0->f_11), vLocal_29, 1.5f, 1, -1, 0);
			func_18(uParam0, 21);
			break;
		case 21:
			break;
	}
	return false;
}

int func_12(int iParam0)
{
	if (*iParam0 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(*iParam0);
		*iParam0 = 0;
	}
	return 1;
}

void func_13(int iParam0, int iParam1)
{
	if (func_43(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

char* func_14(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar5;

	if (!func_44(17, &Var0))
	{
		return "";
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var5, &Var0);
	return func_45(Var5);
}

int func_15(var uParam0)
{
	return *uParam0;
}

bool func_16(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_44(17, &Var0))
	{
		return false;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_17(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_44(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_19(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

bool func_20(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_46(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_47(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
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
		if (!func_48(bParam0, 1))
		{
			return false;
		}
	}
	return func_49(bParam0, 0, bParam2) >= iParam1;
}

void func_21(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_50(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_51(*iParam4);
	}
}

int func_22(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			return joaat("AMMO_SHOTGUN_BUCKSHOT_INCENDIARY");
		case joaat("DOCUMENT_PAMPHLET_POISON_THROWING_KNIFE"):
			return joaat("AMMO_THROWING_KNIVES_POISON");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			return joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			return joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			return joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			return joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			return joaat("AMMO_DYNAMITE_VOLATILE");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			return joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			return joaat("AMMO_ARROW_DYNAMITE");
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			return joaat("AMMO_ARROW_POISON");
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			return joaat("AMMO_MOLOTOV_VOLATILE");
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			return joaat("AMMO_TOMAHAWK_HOMING");
		case joaat("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			return joaat("AMMO_SHOTGUN_SLUG_EXPLOSIVE");
		default:
			break;
	}
	return 0;
}

bool func_23(int iParam0)
{
	int iVar0;
	struct<37> /*296*/ sVar1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == joaat("COST_TYPE_CRAFT") && !func_52(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_24(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam0);
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, -1129417850, 0);
}

Vector3 func_25(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	vector3 vVar5;

	if (!func_44(17, &Var0))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, &Var0);
	return vVar5;
}

int func_26(int iParam0, vector3 vParam1, int iParam4)
{
	if (*iParam4 != 0)
	{
		return 1;
	}
	*iParam4 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam0, vParam1, 13);
	return 1;
}

bool func_27(int iParam0, int iParam1)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::IS_MAP_ENTITY_PINNED(*iParam0))
	{
		return false;
	}
	*iParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(*iParam0));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

void func_28(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_50(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_53(*iParam4);
	}
}

void func_29(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_50(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_54(*iParam4);
	}
}

void func_30(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_50(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_55(vParam4) || !func_55(vParam7))
		{
			func_56(*iParam10, vParam4, vParam7);
		}
		func_57(*iParam10, bParam11, iParam12, iParam15);
	}
}

int func_31(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;

	if (!func_44(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar5, &Var0);
	if (iVar5 == joaat("SCENARIO_TYPE_INVALID"))
	{
		iVar5 = 0;
	}
	return iVar5;
}

void func_32(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

int func_33(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!func_58(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_59(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_60(bParam0, bParam2);
	iVar2 = 0;
	if (func_49(bParam0, 0, 0) == 0)
	{
		if (func_61(bParam0))
		{
			iVar5 = func_62(bParam0);
			iVar6 = func_63(iVar5);
			iVar7 = func_64(iVar6) + 1;
			func_65(iVar5);
			if (func_66(38))
			{
				func_67(483, 0);
			}
			else
			{
				func_67(482, 0);
			}
			if (iVar7 == func_68(iVar6))
			{
				func_33(func_69(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_40() && func_70(4))
				{
					if (func_40() && (func_71(38) || func_66(38)))
					{
						func_73(38, func_69(iVar6), 0, 0, func_72(), 0, -1, 0);
						func_74(2);
					}
					else
					{
						func_73(38, func_69(iVar6), 0, 0, func_72(), 0, -1, 0);
						func_74(1);
					}
				}
			}
			else if (func_40() && func_70(4))
			{
				if (func_40() && (func_71(38) || func_66(38)))
				{
					func_73(38, 0, 0, 0, func_72(), 0, -1, 0);
					func_74(2);
				}
				else
				{
					func_73(38, 0, 0, 0, func_72(), 0, -1, 0);
					func_74(1);
				}
			}
			if (func_40() && func_70(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_40() && (func_71(38) || func_66(38)))
					{
						func_75(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_75(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_47(bParam0) == joaat("CLOTHING"))
	{
		if ((!func_76(bParam0, 866047851) && !func_76(bParam0, -1979000645)) && !func_76(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_77(bParam0, 8388608) && !func_78(28))
	{
		func_79(28);
	}
	if (!bVar3)
	{
		if (func_76(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_80(bParam0) == -1447088266)
			{
				bVar1 = func_82(func_81(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_1() == -1)
					{
						func_83(bVar1);
					}
					if (func_84(0) && func_85(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_86(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
				if (WEAPON::_IS_AMMO_VALID(bVar1))
				{
					if (func_1() == -1)
					{
						func_83(bParam0);
					}
					if (func_84(0) && func_85(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_86(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_47(bParam0) == joaat("WEAPON"))
		{
			if (!func_87(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_47(bParam0) == joaat("AMMO") && func_88(bParam0))
		{
			if (!func_89(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_76(bParam0, 866047851))
		{
			func_90(bParam0);
		}
		else if (func_76(bParam0, 2000026003))
		{
			func_91(bParam0);
		}
		else if (func_76(bParam0, -103750053))
		{
			func_93(func_92(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (bParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_93(func_94(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_76(bParam0, -121341956) && !func_76(bParam0, 606799272))
		{
			if (bParam0 != joaat("WEAPON_KIT_DETECTOR") && bParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_95(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_67(498, 0);
				}
			}
			if (func_76(bParam0, -2017733358) || func_76(bParam0, -1369131378))
			{
				func_96(bParam0);
			}
		}
		else if (func_76(bParam0, -136654233))
		{
			if (func_76(bParam0, -1021472396))
			{
			}
		}
		else if (func_76(bParam0, -1466706512) && func_76(bParam0, 1147021565))
		{
			func_67(484, 0);
		}
		else if (func_76(bParam0, 1147021565) && func_76(bParam0, -524514947))
		{
		}
		else if (func_76(bParam0, 554195525))
		{
		}
		else if (func_76(bParam0, 589988438))
		{
			if (func_97())
			{
				func_98(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_76(bParam0, 787083290) && func_76(bParam0, 949916894))
		{
			func_99(bParam0);
		}
		else if (func_76(bParam0, -1718133314))
		{
			func_100(bParam0);
		}
		else if (func_76(bParam0, -1738650224))
		{
			func_101(bParam0);
		}
		else if (func_76(bParam0, -1112814642) && func_76(bParam0, 949916894))
		{
			func_102(bParam0);
		}
		else if (bParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_76(bParam0, 1841149704))
		{
			func_103();
		}
		else if (func_76(bParam0, 606799272))
		{
			func_104(bParam0, iParam1);
			func_105(bParam0);
		}
		else if (func_76(bParam0, -1112814642) && func_76(bParam0, -1697809989))
		{
			func_106(bParam0, 0, 0, 0);
		}
		else if (func_76(bParam0, -2017733358) || func_76(bParam0, -1369131378))
		{
			func_96(bParam0);
		}
		else if (func_76(bParam0, -1921346699))
		{
			if (func_1() != -1)
			{
				return 0;
			}
			func_107(bParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_76(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_20(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_33(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_20(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_33(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_20(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_33(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_20(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_33(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_20(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_33(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_20(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_33(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_76(bParam0, -839724752) && func_77(bParam0, 4))
		{
			if (!func_66(42))
			{
				func_108(bParam0);
			}
		}
		else if (func_76(bParam0, 1399091007))
		{
			func_109(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_76(bParam0, 1248798204))
		{
			bVar8 = false;
			switch (bParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					bVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					bVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					bVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					bVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					bVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					bVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					bVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (bVar8 != 0)
			{
				func_33(bVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (bParam0)
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
				func_79(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_110(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_111(&bVar9, 0))
				{
					func_85(bVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_1() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_110(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_67(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_112();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_113();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_114();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_115();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_116();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_117(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_118(499813453, 0);
				func_119(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_117(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_118(499813453, 0);
				func_119(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_117(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_118(499813453, 0);
				func_119(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_117(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_118(666607663, 0);
				func_120(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_117(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_118(666607663, 0);
				func_120(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_117(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_118(666607663, 0);
				func_120(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_117(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_118(-220219788, 0);
				func_121(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_117(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_118(-220219788, 0);
				func_121(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_117(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_118(-220219788, 0);
				func_121(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_117(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_118(218622660, 0);
				func_122(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_117(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_118(218622660, 0);
				func_122(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_117(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_118(390004462, 0);
				func_123(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_117(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_118(390004462, 0);
				func_123(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_117(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_118(390004462, 0);
				func_123(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_117(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_118(6410548, 0);
				func_124(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_117(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_118(6410548, 0);
				func_124(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_117(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_118(6410548, 0);
				func_124(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_117(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_118(6410548, 0);
				func_124(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_126(242, func_125(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_126(240, func_125(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_126(241, func_125(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_127(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_127(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_127(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_127(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_127(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_127(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_67(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_67(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_67(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_33(func_128(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_33(func_129(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_78(1))
				{
					func_67(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_67(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_1() == -1)
				{
					bParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_67(496, 0);
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
		bVar10 = bParam0;
		func_130(&bVar10);
		if (!func_131(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_84(0))
		{
			return 1;
		}
		if (func_47(bParam0) == joaat("CLOTHING"))
		{
			func_132(bParam0);
		}
		if (func_76(bParam0, -1979000645))
		{
			func_133(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_84(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_33(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_134(iVar2, 0);
		}
	}
	Var35 = { func_135(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_136(bParam0);
	if (fParam6 > 0f)
	{
		if (func_76(bParam0, -839724752))
		{
			func_137(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_138(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_34(int iParam0, bool bParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	if (bParam1)
	{
		func_139(48);
	}
}

void func_35(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_140(&Global_0, 8);
	}
	if (!func_40() || func_1() != -1)
	{
		return;
	}
	func_140(&Global_0, 1);
}

void func_36(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
		{
			uParam0->f_10 = OBJECT::CREATE_OBJECT(uParam0->f_9, func_25(iLocal_34, 28), true, true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_10, true);
		}
	}
}

bool func_37(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_141(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_38(var uParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_35))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_35, func_14(iLocal_34, 11)))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_35, func_14(iLocal_34, 11)))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_35, func_14(iLocal_34, 11), 0);
			}
		}
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_35, func_14(iLocal_34, 11)))
	{
		return true;
	}
	return false;
}

bool func_39()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_40()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_41()
{
	if (!func_95(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_95(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_95(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_95(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_95(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_95(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_95(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_42(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_43(iParam0))
	{
		*iParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_43(iParam0))
		{
		}
	}
}

bool func_43(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

bool func_44(int iParam0, var uParam1)
{
	if (!func_142(iParam0))
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

char* func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_46(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_47(bool bParam0)
{
	vector3 vVar0;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_48(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_143(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_144("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_145(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_146(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_147(iVar1);
				return true;
			}
			iVar3++;
		}
		func_147(iVar1);
	}
	return false;
}

int func_49(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_47(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_143(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_148(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_149(bParam2), bParam0, 0);
	return iVar2;
}

int func_50(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, iParam5, 1f, 0, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_0xEA31F199A73801D3(iParam4))
		{
			iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_51(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
	}
}

bool func_52(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_1() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_150(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

void func_53(int iParam0)
{
	int iVar0;
	char cVar1[16];
	struct<2> /*16*/ sVar3;
	struct<2> /*16*/ sVar5;

	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_empty");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
	}
	StringCopy(&cVar1, "loot_ammo", 16);
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		Var3 = { cVar1 };
		Var5 = { cVar1 };
		StringIntConCat(&Var3, iVar0, 16);
		StringIntConCat(&Var5, iVar0, 16);
		StringConCat(&Var3, "_type", 16);
		StringConCat(&Var5, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var3))
		{
			DECORATOR::DECOR_REMOVE(iParam0, &Var3);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var5))
		{
			DECORATOR::DECOR_REMOVE(iParam0, &Var5);
		}
		iVar0++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
	}
}

void func_54(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("EMPTY"));
	}
}

bool func_55(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_56(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_57(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0) && ENTITY::IS_ENTITY_A_PED(bParam0))
	{
		iVar0 = func_151(bParam0);
		func_152(bParam0, bParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type1", bParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(bParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_type2", bParam1);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(bParam0, "loot_item_model2", iParam3);
		return;
	}
}

bool func_58(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_1() == -1)
	{
		if (func_153(bParam0) && func_154(bParam0))
		{
			func_155(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (bParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_59(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_156(bParam0, iParam1);
	Var0 = { func_157(bParam0, 0, 1) };
	iVar5 = func_158(bParam0, &Var0, 0, 0);
	iVar6 = func_159(bParam0, 0);
	if ((iVar5 > 1 && !func_160()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_76(bParam0, -2051813666))
		{
			func_67(583, 1);
		}
		else
		{
			func_67(582, 0);
		}
	}
	if (func_161(bParam0, &Var0, *iParam1, 0, 0))
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

void func_60(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_162(bParam0, -949239683))
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
			Global_1935496.f_59.f_1 = bParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_61(bool bParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_62(bParam0) != 0;
}

int func_62(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_163())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_164(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_63(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_163())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_63(iVar0))
		{
			if (func_20(func_164(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_65(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_139(48);
	func_35(0, -1);
}

bool func_66(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_95(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_67(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_165(iParam0, &iVar0, &iVar1);
	if (!func_166(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_167(iVar0, iVar1);
}

int func_68(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_69(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_70(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	return func_95(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_71(int iParam0)
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_168(iParam0))
	{
		return false;
	}
	return func_169(Global_1347702[iParam0 /*49*/].f_15);
}

int func_72()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_20(func_170(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_73(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_40() && (func_71(38) || func_66(38)))
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
			if (func_40() && (func_71(39) || func_66(39)))
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
			iVar9 = func_171(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_40() && (func_71(41) || func_66(41)))
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
			if (func_40() && (func_71(49) || func_66(49)))
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
			iVar9 = func_171(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_172(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_173(iParam0, iVar13, iVar14))
	{
	}
	if (func_174(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_175(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_176(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_177(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_178(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_74(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_40() && (func_71(38) || func_66(38)))
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
			if (func_40() && (func_71(39) || func_66(39)))
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
			if (func_40() && (func_71(49) || func_66(49)))
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
		if (func_40() && (func_71(38) || func_66(38)))
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
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_181(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_180(func_69(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_40() && (func_71(39) || func_66(39)))
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
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_40() && (func_71(49) || func_66(49)))
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
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_179(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_76(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

bool func_77(bool bParam0, int iParam1)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

bool func_78(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_183(iParam0);
}

void func_79(int iParam0)
{
	if (!func_182(iParam0))
	{
		return;
	}
	func_184(iParam0);
	func_185(iParam0);
}

int func_80(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_81(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_46(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_186(bVar0) || func_187(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_82(bool bParam0, bool bParam1)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_83(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_146(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_84(bool bParam0)
{
	if (func_1() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_149(bParam0));
}

bool func_85(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
	{
		Var0 = { func_157(bParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_188((398 + iVar28), 1);
			if (func_189(bParam0, &Var0, iVar5, 0))
			{
				if (func_190(bParam0, &Var6, iVar5))
				{
					Var29 = { func_191(bParam0, Var0, iVar5, 0) };
					func_192(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_84(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
					{
						return false;
					}
					func_86(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
					func_193(bParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_86(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_88(bParam0))
	{
		return false;
	}
	if (!func_84(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, bParam0, iParam1, iParam2);
	return true;
}

bool func_87(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;
	bool bVar8;

	bVar0 = func_82(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_1() == -1)
		{
			func_83(bVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_194(bVar0);
			}
		}
		if (!func_161(bParam0, &uVar1, 1, 0, 0))
		{
			func_155(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_195(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_85(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_FISHINGROD") || bVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_85(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == joaat("WEAPON_LASSO"))
			{
				func_85(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_196())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_197(bVar0))
				{
					func_85(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_85(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_198(Global_35, 2, 0, 1);
				if ((((func_146(bVar7) && !Global_43891) && bVar7 != bVar0) && !func_78(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, bVar7);
				}
				bVar8 = true;
				if (func_146(bVar7) && func_78(24))
				{
					if (!func_85(bVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_85(bVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_85(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_67(480, 1);
	}
	return true;
}

bool func_88(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_89(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_88(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_146(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_20(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_126(func_199(bParam0), func_125(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_1() == -1)
		{
			if (func_95(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_67(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_84(0))
	{
		if (func_86(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_131(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_90(bool bParam0)
{
	var uVar0;

	if ((bParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_200()) || bParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_201(Global_35, bParam0, &uVar0))
		{
			func_110(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_116();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_116();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_116();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_114();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_112();
			break;
	}
}

void func_91(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_112();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_113();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_114();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_115();
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
			func_116();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_202();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_203();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> /*16*/ func_92(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0.f_1 = iParam0;
	return Var0;
}

void func_93(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

struct<2> /*16*/ func_94(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

bool func_95(int iParam0, bool bParam1)
{
	switch (func_204(iParam0))
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

void func_96(bool bParam0)
{
	bool bVar0;

	bVar0 = func_76(bParam0, -2017733358);
	if (func_205() < 3)
	{
		if (bVar0)
		{
			if (func_207(func_206(bParam0), bParam0))
			{
				func_126(79, func_125(func_206(bParam0)), 1);
			}
			else
			{
				func_126(78, func_125(func_206(bParam0)), 1);
			}
		}
		else
		{
			func_126(80, func_125(func_208(bParam0)), 1);
		}
	}
}

bool func_97()
{
	if (((((func_209(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_209(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_209(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_209(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_209(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_209(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_98(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_210(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_211(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_212(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_99(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_75(51, 0, 0, 0, 0, -1, 0);
			func_213(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_75(51, 0, 0, 0, 0, -1, 0);
			func_213(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_73(39, 0, 0, 0, 0, 0, 1, 0);
			func_75(39, 0, 0, 0, 0, -1, 0);
			func_214(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_73(41, 0, 0, 0, 0, 0, 1, 0);
			func_75(41, 0, 0, 0, 0, -1, 0);
			func_215(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_73(49, 0, 0, 0, 0, 0, 1, 0);
			func_75(49, 0, 0, 0, 0, -1, 0);
			func_216(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_73(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_217(1), 0, -1, 0);
			func_218(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_73(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_217(2), 0, -1, 0);
			func_218(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_73(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_217(4), 0, -1, 0);
			func_218(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_73(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_217(8), 0, -1, 0);
			func_218(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_73(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_217(16), 0, -1, 0);
			func_218(16);
			break;
	}
}

void func_100(bool bParam0)
{
	if (func_219() == 1)
	{
		if (func_66(39))
		{
			func_67(342, 0);
		}
		else
		{
			func_67(343, 0);
			func_214(1);
		}
	}
	if (func_219() >= 30)
	{
		func_67(344, 0);
	}
	func_73(39, 0, 0, 0, 0, 0, -1, 0);
	func_75(39, 0, 0, func_219(), 30, 1, 0);
}

void func_101(bool bParam0)
{
	if (func_220() == 1)
	{
		if (func_66(49))
		{
			func_67(409, 0);
		}
		else
		{
			func_67(410, 0);
			func_216(1);
		}
	}
	if (func_220() >= 10)
	{
		func_67(411, 0);
	}
	func_73(49, 0, 0, 0, 0, 0, -1, 0);
	func_75(49, 0, 0, func_220(), 10, 1, 0);
}

void func_102(bool bParam0)
{
	char* sVar0;

	switch (bParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_67(437, 0);
			func_67(440, 0);
			func_221(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_75(51, 0, 0, sVar0, func_171(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_213(1);
			func_222(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_221(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_75(51, 0, 0, sVar0, func_171(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_213(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_221(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_75(51, 0, 0, sVar0, func_171(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_213(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_221(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_75(51, 0, 0, sVar0, func_171(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_213(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_67(438, 0);
			func_221(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_73(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_75(51, 0, 0, sVar0, func_171(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_213(32768);
			break;
		default:
			func_67(439, 0);
			break;
	}
}

void func_103()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_104(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_1() == -1)
	{
		if (!func_66(43))
		{
			if (bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_67(348, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_67(350, 0);
			}
			else if (bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_67(352, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_67(400, 0);
			}
		}
		else if (func_76(bParam0, 412399755))
		{
			func_223(joaat("EXOTIC_STAGE_01"));
			if (func_224() == 0)
			{
				func_35(0, 10);
				iVar1 = func_225(bParam0, iParam1, 1);
				if (((bParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || bParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || bParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_66(44))
		{
			if (bParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_67(354, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_67(399, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_67(401, 0);
			}
		}
		else if (func_76(bParam0, 709057512))
		{
			func_223(joaat("EXOTIC_STAGE_02"));
			if (func_224() == 1)
			{
				func_35(0, 10);
				iVar1 = func_225(bParam0, iParam1, 2);
				if ((bParam0 == joaat("PROVISION_HERON_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || bParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_66(45))
		{
			if (bParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_67(359, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_67(394, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_67(395, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_67(398, 0);
			}
		}
		else if (func_76(bParam0, -1478961327))
		{
			func_223(joaat("EXOTIC_STAGE_03"));
			if (func_224() == 2)
			{
				func_35(0, 10);
				iVar1 = func_225(bParam0, iParam1, 4);
				if (bParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_228(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_229(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_139(48);
					}
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || bParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || bParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_66(46))
		{
			if (bParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_67(356, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_67(402, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_67(404, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_67(406, 0);
			}
		}
		else if (func_76(bParam0, -1238404098))
		{
			func_223(joaat("EXOTIC_STAGE_04"));
			if (func_224() == 3)
			{
				func_35(0, 10);
				iVar1 = func_225(bParam0, iParam1, 8);
				if (((bParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || bParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || bParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_66(47))
		{
			if (bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_67(396, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_67(397, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_67(405, 0);
			}
			else if (bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_67(403, 0);
			}
		}
		else if (func_76(bParam0, 1160548794))
		{
			func_223(joaat("EXOTIC_STAGE_05"));
			if (func_224() == 4)
			{
				func_35(0, 10);
				iVar1 = func_225(bParam0, iParam1, 16);
				if (((bParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || bParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || bParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || bParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_226(bParam0) < func_227(bParam0))
					{
						func_73(43, bParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_75(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_105(bool bParam0)
{
	int iVar0;

	if (bParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_228(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_229(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_139(48);
		}
	}
}

void func_106(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_20(func_16(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_230(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_231(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_107(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_98(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_98(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_98(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_98(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_98(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_98(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_98(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_98(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_98(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_98(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_98(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_98(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_98(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_232())
			{
				func_98(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_98(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_98(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_98(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_98(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_98(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_98(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_98(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_98(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_98(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_98(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_98(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_98(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_98(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

void func_108(bool bParam0)
{
	if (func_66(41))
	{
		func_67(363, 0);
	}
	else
	{
		func_67(362, 0);
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_01"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_02"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_03"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_04"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_05"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_06"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_07"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_08"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_09"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_10"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_11"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_12"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_13"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_35(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_233(joaat("LEGENDARY_FISH_14"));
			func_234(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_235(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_109(bool bParam0, int iParam1)
{
	var uVar0;

	func_236(bParam0, iParam1, &uVar0);
}

int func_110(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_157(bParam1, 1, 0) };
		iParam3 = func_237(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_239(bParam1, iParam2, func_238(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_240(1, (func_1() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && bParam1 != Global_1946054.f_57[func_238(iParam3, 1) /*11*/])
			{
				func_241(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_242(32768) && bParam1 != Global_1946054.f_57[func_238(iParam3, 1) /*11*/])
			{
				func_243();
				func_241(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_241(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_244(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_241(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_245(0);
			func_246(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_241(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_111(int iParam0, bool bParam1)
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
	iVar18 = func_198(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_198(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_144("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_145(&Var3, iVar2, iVar0, iVar1))
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
						func_147(iVar0);
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

void func_112()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_113()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_114()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_115()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_116()
{
	func_247();
	func_248();
	func_249();
}

void func_117(int iParam0, int iParam1, bool bParam2)
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

void func_118(int iParam0, bool bParam1)
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
	func_179(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_119(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_120(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_121(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_122(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_123(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_124(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_125(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_126(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_165(iParam0, &iVar0, &iVar1);
	if (!func_166(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_250(iParam0, 1024))
	{
		return;
	}
	func_167(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_127(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_165(iParam0, &iVar0, &iVar1);
	if (!func_166(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_250(iParam0, 1024))
	{
		return;
	}
	func_167(iVar0, iVar1);
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

bool func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_163())
	{
		return func_129();
	}
	iVar4 = (func_163() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_163())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_251(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_164(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return false;
}

bool func_129()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_163());
	return func_164(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_130(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_131(bool bParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_157(bParam0, 0, 1) };
	Var5 = { func_191(bParam0, Var0, Var0.f_4, 0) };
	return func_252(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_132(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_1() != -1)
	{
		return;
	}
	switch (func_80(bParam0))
	{
		case 81053684:
			if (bParam0 == joaat("KIT_BANDANA") && func_253(81053684, 0) <= 0)
			{
				func_241(32, bParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (bParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || bParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_241(32, bParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_254(bParam0);
			if (func_255(iVar0))
			{
				func_256(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_241(30, bParam0, 0, 0, 0);
			}
			if (func_257() == -2125499975 || func_257() == -449205311)
			{
				switch (bParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_241(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_257() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_241(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_258(-525676072, 0))
			{
				if (func_259(-525676072, &bVar1))
				{
					func_241(33, bVar1, 0, 0, 0);
				}
			}
			func_241(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == joaat("CLOTHING_SP_OFFHAND_000") || bParam0 == -1515874150) || bParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_260(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_110(Global_35, bParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_79(24);
		if (func_111(&bVar2, 0))
		{
			func_85(bVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_133(bool bParam0)
{
	if (func_76(bParam0, 943695443))
	{
		func_261(0, bParam0);
	}
	else if (func_76(bParam0, -2096528786))
	{
		func_261(1, bParam0);
	}
	else if (func_76(bParam0, -1094167013))
	{
		func_261(2, bParam0);
	}
	else if (func_76(bParam0, 1936654645))
	{
		func_261(3, bParam0);
	}
	else if (func_76(bParam0, 1306489306))
	{
		func_261(4, bParam0);
	}
	else if (func_76(bParam0, 435762317))
	{
		func_261(5, bParam0);
	}
	else if (func_76(bParam0, 1259363210))
	{
		func_261(6, bParam0);
	}
	else if (func_76(bParam0, 881398259))
	{
		func_261(7, bParam0);
	}
	else if (func_76(bParam0, -541549214))
	{
		func_261(8, bParam0);
	}
	else if (func_76(bParam0, 130796156))
	{
		func_261(-1, bParam0);
	}
}

int func_134(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	Var4.f_1 = 10;
	func_262(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_263(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> /*16*/ func_135(bool bParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_46(bParam0, 0))
	{
		return Var0;
	}
	if (func_76(bParam0, -305066475))
	{
		if (func_1() == -1)
		{
			if (func_76(bParam0, -537818634))
			{
				return func_264(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_264(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_76(bParam0, -537818634))
	{
		return func_264(joaat("MEDICINE_ITEMS"));
	}
	if (func_76(bParam0, 2084895747))
	{
		return func_264(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_136(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_1() == -1)
			{
				if (func_95(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_67(109, 1);
				}
			}
			break;
	}
}

void func_137(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_266(func_265(0));
	func_268(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_267(bParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_138(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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

	if (bParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_46(bParam0, 0))
	{
		return;
	}
	if (bParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_269())
	{
		func_270(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_271(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_271(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_77(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_47(bParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && bParam0 != joaat("AMMO_HATCHET")) && bParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_272(bParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
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
	sVar15 = func_273(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_125(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_76(bParam0, 1443104131)) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || bParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_125(bParam0));
	}
	func_268(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_139(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_1() != -1)
	{
		return;
	}
	iVar0 = func_274(iParam0);
	fVar1 = func_275(iParam0);
	if ((Global_1347477.f_117 || !func_78(31)) || !func_276(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_277(iVar0) >= 7)
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
	func_278(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_268(MISC::VAR_STRING(6, func_279(iParam0), fVar1), "itemtype_textures", func_280(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_140(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

float func_141(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_142(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

bool func_143(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_46(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_47(bParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_76(bParam0, 1399091007))
	{
		func_236(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_144(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_149(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_145(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_146(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_147(int iParam0)
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

int func_148(bool bParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_281(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_283(&Var0, func_282(0));
	}
	if (!func_284(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_147(iVar18);
	return iVar19;
}

int func_149(bool bParam0)
{
	if (func_1() == -1)
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

bool func_150(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
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

int func_151(bool bParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(bParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_152(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = bParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(bParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_153(bool bParam0)
{
	return func_47(bParam0) == joaat("WEAPON");
}

bool func_154(bool bParam0)
{
	var uVar0;

	if (func_1() != -1)
	{
		return false;
	}
	if (func_77(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_161(bParam0, &uVar0, 1, 0, 0);
	}
	return func_20(bParam0, 1, 0);
}

void func_155(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_47(bParam0) != joaat("WEAPON"))
	{
		return;
	}
	bVar0 = func_82(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_187(bVar0))
	{
		if (func_1() == -1)
		{
			func_83(bVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, false) && func_49(bParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_138(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_156(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_76(bParam0, 58855631))
	{
		func_285(bParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> /*40*/ func_157(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_286(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_47(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0 = { func_191(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_282(bParam1) };
			if (bParam2 && func_287(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_189(bParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_189(bParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_190(bParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_288(bParam1) };
			switch (func_80(bParam0))
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
			if (func_289(bParam0, -1823706425))
			{
				Var0 = { func_191(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_289(bParam0, -1483207246))
			{
				Var0 = { func_191(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_290(Var0, &Var27, bParam1, 0))
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
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_158(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	if (!func_84(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_291(bParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_149(bParam3), bParam0);
}

int func_159(bool bParam0, bool bParam1)
{
	if (func_88(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_149(bParam1), bParam0, 0);
}

bool func_160()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (!func_40())
	{
		return false;
	}
	if (!func_95(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_95(Global_1835011[2 /*74*/].f_1, 1) && func_95(Global_1347702[120 /*49*/].f_15, 1)) && !func_95(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_95(Global_1835011[37 /*74*/].f_1, 1) && !func_95(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_95(Global_1835011[57 /*74*/].f_1, 1) && !func_95(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_95(Global_1835011[26 /*74*/].f_1, 1) && !func_95(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_95(Global_1835011[62 /*74*/].f_1, 1) && func_95(Global_1835011[63 /*74*/].f_1, 1)) && !func_95(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_95(Global_1835011[75 /*74*/].f_1, 1) && !func_95(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_95(Global_1835011[76 /*74*/].f_1, 1) && !func_95(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_95(Global_1835011[40 /*74*/].f_1, 1) && func_95(Global_1835011[41 /*74*/].f_1, 1)) && !func_95(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_95(Global_1835011[62 /*74*/].f_1, 1) && func_95(Global_1835011[63 /*74*/].f_1, 1)) && !func_95(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_95(Global_1835011[65 /*74*/].f_1, 1) && func_95(Global_1835011[66 /*74*/].f_1, 1)) && !func_95(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_161(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_292(&bParam0);
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (!func_84(0))
	{
		bParam3 = true;
	}
	if (func_153(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
		{
			Var0 = { func_282(0) };
			Var4.f_9 = -1591664384;
			if (!func_189(bParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_190(bParam0, &Var4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_287(bParam0, 1))
			{
				if (!func_189(bParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_190(bParam0, &Var4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_293(bParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_158(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_291(bParam0))
	{
		iVar28 = func_294(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_149(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_162(bool bParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
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

int func_163()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_164(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_295(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_296(iParam0))
	{
		return false;
	}
	if (func_297(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_250(iParam0, 1)) || func_298(32768))
	{
		if (!func_250(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_299())
	{
		return false;
	}
	return true;
}

void func_167(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_168(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_169(int iParam0)
{
	int iVar0;

	iVar0 = func_204(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_170(int iParam0)
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
	return false;
}

int func_171(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_44(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_172(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_72() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_300(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_301(), 12);
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
			else if (func_219() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_302(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_219(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_303(), 13);
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
			else if (func_220() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_304(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_220(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_171(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_173(int iParam0, int iParam1, int iParam2)
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

bool func_174(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_175(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_176(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			bVar2 = func_305(iVar0);
			if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_20(bVar2, 1, 0) || func_307(func_306(bVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_180(func_305(iVar0))), func_180(func_305(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_219() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_308(iVar0)), func_308(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_302() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_308(iVar0)), func_308(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_308(iVar0)), func_308(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			bVar2 = func_16(iParam3, func_309(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_226(bVar2) - iParam7) >= func_171(iParam3, func_310(iVar0));
				}
				else
				{
					bVar1 = func_226(bVar2) >= func_171(iParam3, func_310(iVar0));
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = (func_226(bVar2) + iParam7) >= func_171(iParam3, func_310(iVar0));
			}
			else
			{
				bVar1 = func_226(bVar2) >= func_171(iParam3, func_310(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_311(bVar2)), func_311(bVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_312(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_313(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_313(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_220() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_304() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_314(iVar0)), func_314(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			bVar2 = func_16(iParam3, func_309(iVar0));
			if (bParam9)
			{
				if (bParam4 == bVar2)
				{
					bVar1 = (func_226(bVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_315(bVar2);
				}
			}
			else if (bParam4 == bVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_315(bVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_316(bVar2)), func_316(bVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_177(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_303() >= 13)
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

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_318(func_317(0)) && ((func_319(0) == 1 || func_319(0) == 8) || func_319(0) == 6))
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

var func_179(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_180(bool bParam0)
{
	switch (bParam0)
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

var func_181(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_182(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_184(int iParam0)
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

void func_185(int iParam0)
{
	bool bVar0;

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
			func_320(1);
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
			func_321(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_321(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_321(3);
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
			func_322(1);
			break;
		case 34:
			func_323(1);
			break;
		case 35:
			func_324(1);
			break;
		case 36:
			break;
		case 37:
			func_325(0);
			break;
		case 38:
			func_326(0);
			break;
		case 39:
			func_327(0);
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
			if ((!Global_1879534 && func_40()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_181("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_67(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_40()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_181("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_67(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_40()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_181("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_67(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_40()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_181("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_67(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_1() == -1)
			{
				if (!func_260(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_328(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_196())
					{
						bVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_20(bVar0, 1, 0))
					{
						func_131(bVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_110(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_1() == -1)
			{
				if (!func_20(1013902307, 1, 0))
				{
					func_131(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_1() == -1)
			{
				if (!func_20(1013902307, 1, 0))
				{
					func_131(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_20(142640135, 1, 0))
				{
					func_131(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_1() == -1)
			{
				if (!func_20(786809402, 1, 0))
				{
					func_131(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_1() == -1)
			{
				if (!func_20(786809402, 1, 0))
				{
					func_131(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_20(-518019409, 1, 0))
				{
					func_131(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_329();
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

bool func_186(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

bool func_187(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
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

int func_188(int iParam0, int iParam1)
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

bool func_189(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_294(bParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_190(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_330(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_191(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_46(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_149(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_192(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_331(bParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_290(*uParam1, &Var0, bParam6, 0))
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
	if (!func_84(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_149(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_193(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar1 = func_332(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_194(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_333();
	func_334(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_195(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_335(bParam0))
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
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
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

bool func_196()
{
	if (func_1() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_197(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_198(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_199(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_78(50))
			{
				if (!func_78(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_78(51))
			{
				if (!func_78(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_200()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_201(int iParam0, bool bParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_46(bParam1, 0))
	{
		return false;
	}
	if (func_47(bParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_1() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_80(bParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_336(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_76(bParam1, 866047851))
	{
		iVar5 = func_238(iVar4, 1);
		if (func_337(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(bVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_80(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_76(bParam1, -1638171711))
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
			if (func_338(1868067663, &uVar0))
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
				iVar10 = func_339(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_339(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_80(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_76(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (bParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_340(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_202()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_203()
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

int func_204(int iParam0)
{
	if (!func_318(iParam0))
	{
		return -1;
	}
	return func_341(iParam0);
}

int func_205()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_20(func_342(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_206(bool bParam0)
{
	switch (bParam0)
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
	return false;
}

bool func_207(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (bParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				bVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				bVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (bParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				bVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				bVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (bParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (bParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				bVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				bVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (bParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				bVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (bParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				bVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				bVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_20(bVar0, 1, 0) && func_20(bVar1, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_208(bool bParam0)
{
	switch (bParam0)
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
	return false;
}

bool func_209(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_343(iParam0);
	if (iVar0 != -15)
	{
		func_334(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_344(iVar0, 1);
	}
	return false;
}

int func_210(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	bool bVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_20(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			bVar25 = Var1.f_1[iVar24];
			if (func_46(bVar25, 0) && func_76(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_211(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_268(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_212(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_345())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_268(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_346(iVar0);
			func_347(iVar0, 0, 0);
		}
		func_268(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_93(func_264(joaat("CAREER_CASH")), iVar1);
	}
}

void func_213(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_214(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_215(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_216(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_217(int iParam0)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_226(bVar9);
	iVar2 = func_226(bVar10);
	iVar3 = func_226(bVar11);
	iVar5 = func_227(bVar9);
	iVar6 = func_227(bVar10);
	iVar7 = func_227(bVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_226(bVar12);
		iVar8 = func_227(bVar12);
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

void func_218(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_219()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_348(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_220()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_221(int iParam0, bool bParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (bParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				bVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				bVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				bVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				bVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_315(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_315(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_315(bVar0))
		{
			*sParam2++;
		}
		if (func_315(bVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_315(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_315(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_315(bVar0))
		{
			*sParam2++;
		}
		if (func_315(bVar1))
		{
			*sParam2++;
		}
		if (func_315(bVar0) && func_315(bVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_315(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_315(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_315(bVar0))
		{
			*sParam2++;
		}
		if (func_315(bVar1))
		{
			*sParam2++;
		}
		if (func_315(bVar2))
		{
			*sParam2++;
		}
		if ((func_315(bVar0) && func_315(bVar1)) && func_315(bVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_315(bParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_315(bParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_315(bVar0))
		{
			*sParam2++;
		}
		if (func_315(bVar1))
		{
			*sParam2++;
		}
		if (func_315(bVar2))
		{
			*sParam2++;
		}
		if (func_315(bVar3))
		{
			*sParam2++;
		}
		if (((func_315(bVar0) && func_315(bVar1)) && func_315(bVar2)) && func_315(bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_222(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_349(1497516462);
			func_350(2016141805);
			func_350(1010885152);
			func_350(-502324015);
			break;
		case 2016141805:
			func_350(1497516462);
			func_349(2016141805);
			func_350(1010885152);
			func_350(-502324015);
			break;
		case 1010885152:
			func_350(1497516462);
			func_350(2016141805);
			func_349(1010885152);
			func_350(-502324015);
			break;
		case -502324015:
			func_350(1497516462);
			func_350(2016141805);
			func_350(1010885152);
			func_349(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_350(-538889627);
			func_350(-538880323);
			func_350(-1056767524);
			func_349(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_351();
			func_349(iParam0);
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
			func_352();
			func_349(iParam0);
			break;
		case 2019386373:
			func_350(-664252410);
			func_350(2109952320);
			func_349(2019386373);
			break;
		case -664252410:
			func_350(2019386373);
			func_350(2109952320);
			func_349(-664252410);
			break;
		case 2109952320:
			func_350(2019386373);
			func_350(-664252410);
			func_349(2109952320);
			break;
		case -1674179981:
			func_350(-1835851517);
			func_350(-1838352012);
			func_349(-1674179981);
			break;
		case -1835851517:
			func_350(-1674179981);
			func_350(-1838352012);
			func_349(-1835851517);
			break;
		case -1838352012:
			func_350(-1674179981);
			func_350(-1835851517);
			func_349(-1838352012);
			break;
		case -1717960576:
			func_350(210001842);
			func_349(-1717960576);
			break;
		case 210001842:
			func_350(-1717960576);
			func_349(210001842);
			break;
		case -150493654:
			func_350(-1271608261);
			func_350(1846061697);
			func_350(-1145519186);
			func_349(-150493654);
			break;
		case -1271608261:
			func_350(-150493654);
			func_350(1846061697);
			func_350(-1145519186);
			func_349(-1271608261);
			break;
		case 1846061697:
			func_350(-150493654);
			func_350(-1271608261);
			func_350(-1145519186);
			func_349(1846061697);
			break;
		case -1145519186:
			func_350(-150493654);
			func_350(-1271608261);
			func_350(1846061697);
			func_349(-1145519186);
			Jump @2851; //curOff = 1113
			func_350(280705402);
			func_350(1926308480);
			func_349(1766284049);
			Jump @2851; //curOff = 1143
			func_350(1766284049);
			func_350(1926308480);
			func_349(280705402);
			Jump @2851; //curOff = 1173
			func_350(1766284049);
			func_350(280705402);
			func_349(1926308480);
			Jump @2851; //curOff = 1203
			if (bParam1)
			{
				func_350(439465264);
				func_349(1609506757);
			}
			else
			{
				func_350(1609506757);
				func_350(439465264);
			}
			Jump @2851; //curOff = 1250
			if (func_353(1609506757))
			{
				if (bParam1)
				{
					func_349(439465264);
				}
				else
				{
					func_350(439465264);
				}
			}
			Jump @2851; //curOff = 1291
			func_350(-1612662716);
			func_349(1822001510);
			Jump @2851; //curOff = 1312
			func_350(1822001510);
			func_349(-1612662716);
			Jump @2851; //curOff = 1333
			func_350(1952610440);
			func_350(-223469678);
			func_350(-404698347);
			func_350(1517904467);
			func_349(1306158345);
			Jump @2851; //curOff = 1381
			func_350(1306158345);
			func_350(-223469678);
			func_350(-404698347);
			func_350(1517904467);
			func_349(1952610440);
			Jump @2851; //curOff = 1429
			func_350(1306158345);
			func_350(1952610440);
			func_350(-404698347);
			func_350(1517904467);
			func_349(-223469678);
			Jump @2851; //curOff = 1477
			func_350(1306158345);
			func_350(1952610440);
			func_350(-223469678);
			func_350(1517904467);
			func_349(-404698347);
			Jump @2851; //curOff = 1525
			func_350(1306158345);
			func_350(1952610440);
			func_350(-223469678);
			func_350(-404698347);
			func_349(1517904467);
			Jump @2851; //curOff = 1573
			func_350(931649776);
			func_350(-434590080);
			func_350(1743048395);
			func_350(449774763);
			func_349(1376646519);
			Jump @2851; //curOff = 1621
			func_350(1376646519);
			func_350(-434590080);
			func_350(1743048395);
			func_350(449774763);
			func_349(931649776);
			Jump @2851; //curOff = 1669
			func_350(1376646519);
			func_350(931649776);
			func_350(1743048395);
			func_350(449774763);
			func_349(-434590080);
			Jump @2851; //curOff = 1717
			func_350(1376646519);
			func_350(931649776);
			func_350(-434590080);
			func_350(449774763);
			func_349(1743048395);
			Jump @2851; //curOff = 1765
			func_350(1376646519);
			func_350(931649776);
			func_350(-434590080);
			func_350(1743048395);
			func_349(449774763);
			Jump @2851; //curOff = 1813
			func_350(38162571);
			func_350(1350391819);
			func_350(54073871);
			func_349(-1414537028);
			Jump @2851; //curOff = 1852
			func_350(-1414537028);
			func_350(1350391819);
			func_350(54073871);
			func_349(38162571);
			Jump @2851; //curOff = 1891
			func_350(-1414537028);
			func_350(38162571);
			func_350(54073871);
			func_349(1350391819);
			Jump @2851; //curOff = 1930
			func_350(-1414537028);
			func_350(38162571);
			func_350(1350391819);
			func_349(54073871);
			Jump @2851; //curOff = 1969
			func_349(198200492);
			func_350(-1124061431);
			func_350(52706132);
			func_350(-259123672);
			Jump @2851; //curOff = 2008
			func_350(198200492);
			func_349(-1124061431);
			func_350(52706132);
			func_350(-259123672);
			Jump @2851; //curOff = 2047
			func_350(198200492);
			func_350(-1124061431);
			func_349(52706132);
			func_350(-259123672);
			Jump @2851; //curOff = 2086
			func_350(198200492);
			func_350(-1124061431);
			func_350(52706132);
			func_349(-259123672);
			Jump @2851; //curOff = 2125
			func_349(-919512195);
			func_350(-1925798111);
			func_350(420709909);
			func_350(1703426636);
			Jump @2851; //curOff = 2164
			func_349(-1925798111);
			func_350(-919512195);
			func_350(420709909);
			func_350(1703426636);
			Jump @2851; //curOff = 2203
			func_349(420709909);
			func_350(-919512195);
			func_350(-1925798111);
			func_350(1703426636);
			Jump @2851; //curOff = 2242
			func_349(1703426636);
			func_350(-919512195);
			func_350(-1925798111);
			func_350(420709909);
			Jump @2851; //curOff = 2281
			func_349(-1223121209);
			func_350(630808005);
			Jump @2851; //curOff = 2302
			func_349(630808005);
			func_350(-1223121209);
			Jump @2851; //curOff = 2323
			func_349(1453909576);
			func_350(1643531967);
			Jump @2851; //curOff = 2344
			func_349(1643531967);
			func_350(1453909576);
			Jump @2851; //curOff = 2365
			func_349(0);
			func_350(473295046);
			func_350(-1738165526);
			Jump @2851; //curOff = 2391
			func_349(473295046);
			func_350(0);
			func_350(-1738165526);
			Jump @2851; //curOff = 2417
			func_349(-1738165526);
			func_350(0);
			func_350(473295046);
			Jump @2851; //curOff = 2443
			func_349(932909855);
			func_350(2051822093);
			Jump @2851; //curOff = 2464
			func_349(2051822093);
			func_350(932909855);
			Jump @2851; //curOff = 2485
			func_349(405586984);
			func_350(1509509592);
			func_350(-959357075);
			func_350(-1311865656);
			Jump @2851; //curOff = 2524
			func_349(1509509592);
			func_350(405586984);
			func_350(-959357075);
			func_350(-1311865656);
			Jump @2851; //curOff = 2563
			func_349(-959357075);
			func_350(1509509592);
			func_350(405586984);
			func_350(-1311865656);
			Jump @2851; //curOff = 2602
			func_349(-1311865656);
			func_350(1509509592);
			func_350(-959357075);
			func_350(405586984);
			Jump @2851; //curOff = 2641
			if (bParam1)
			{
				func_349(-524145696);
			}
			else
			{
				func_350(-524145696);
			}
			func_350(1626481264);
			func_350(282809459);
			Jump @2851; //curOff = 2688
			func_349(282809459);
			func_350(1626481264);
			func_350(-524145696);
			Jump @2851; //curOff = 2718
			func_349(1626481264);
			func_350(-524145696);
			func_350(282809459);
			Jump @2851; //curOff = 2748
			if (bParam1)
			{
				func_349(885203519);
			}
			else
			{
				func_350(885203519);
			}
			Jump @2851; //curOff = 2777
			if (bParam1)
			{
				func_349(-1080627546);
			}
			else
			{
				func_350(-1080627546);
			}
			Jump @2851; //curOff = 2806
			if (bParam1)
			{
				if (!func_353(iParam0))
				{
					func_349(iParam0);
				}
			}
			else if (func_353(iParam0))
			{
				func_350(iParam0);
			}
		}

void func_223(int iParam0)
{
	if (!func_354(iParam0))
	{
		func_356(func_355(iParam0));
	}
}

int func_224()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_354(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_225(bool bParam0, int iParam1, int iParam2)
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
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			bVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			bVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			bVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			bVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			bVar9 = joaat("PROVISION_HERON_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			bVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			bVar9 = joaat("PROVISION_GATOR_EGG");
			bVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			bVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			bVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			bVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			bVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			bVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			bVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			bVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			bVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			bVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_226(bVar9);
	iVar2 = func_226(bVar10);
	iVar3 = func_226(bVar11);
	iVar5 = func_227(bVar9);
	iVar6 = func_227(bVar10);
	iVar7 = func_227(bVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_226(bVar12);
		iVar8 = func_227(bVar12);
	}
	if (bParam0 == bVar9)
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
	if (bParam0 == bVar10)
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
	if (bParam0 == bVar11)
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
		if (bParam0 == bVar12)
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

int func_226(bool bParam0)
{
	int iVar0;

	if (func_20(bParam0, 1, 0))
	{
		iVar0 = func_49(bParam0, 0, 0);
	}
	return iVar0;
}

int func_227(bool bParam0)
{
	switch (bParam0)
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

int func_228(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_229(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

void func_230(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((bParam0 == func_16(iParam1, 5) || bParam0 == func_16(iParam1, 6)) || bParam0 == func_16(iParam1, 7)) || bParam0 == func_16(iParam1, 8)) || bParam0 == func_16(iParam1, 9))
	{
		func_221(iParam1, bParam0, &sParam2, 0, iParam3, bParam4);
		func_73(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_75(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_231(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((bParam0 == func_16(iParam1, 5) || bParam0 == func_16(iParam1, 6)) || bParam0 == func_16(iParam1, 7)) || bParam0 == func_16(iParam1, 8)) || bParam0 == func_16(iParam1, 9))
	{
		if (func_221(iParam1, bParam0, &iVar0, 0, 0, 0))
		{
			func_73(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_75(51, 0, 0, iVar0, func_171(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_73(51, bParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_75(51, 0, 0, iVar0, func_171(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_232()
{
	if (func_169(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_233(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_234(int iParam0)
{
	if (!func_357(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_235(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_236(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
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

int func_237(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_358(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_238(int iParam0, int iParam1)
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

bool func_239(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_359();
	if (iParam2 == 39)
	{
		Var0 = { func_157(bParam0, 1, 0) };
		iParam2 = func_238(func_237(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_76(bParam0, 866047851) && func_337(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_242(32768) && iParam2 == 10) && bParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_360(func_358(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_361(iParam2);
	func_362(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_363(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_363(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_364(&(Global_1946054.f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = bParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_365(bParam0, iParam2, iParam1, func_1() != -1);
	if (bParam4)
	{
		func_366(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_366(&(Global_1946054.f_1378), 1, 0);
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
				func_367(func_358(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_240(bool bParam0, bool bParam1, bool bParam2)
{
	func_368(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_241(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_369(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_370(Var0);
}

bool func_242(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_243()
{
	func_371(&(Global_1946054.f_2776));
	func_372(32768);
	func_367(1108822547, 8, 6);
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_238(iParam0, 1);
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

void func_245(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_373(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_374(Var0);
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_374(Var0);
}

float func_247()
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

	if (func_375())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_376(2);
	}
	if (Global_1347477.f_119)
	{
		return func_376(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_377();
	fVar2 = func_378();
	fVar3 = func_379();
	fVar4 = func_380();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_381()));
	fVar7 = (func_376(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_382(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_383(3, fVar9, fVar9 > 100f);
	return func_384(fVar7, -100f, 100f);
}

float func_248()
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

	if (func_375())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_376(1);
	}
	if (Global_1347477.f_119)
	{
		return func_376(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_377();
	fVar2 = func_378();
	fVar3 = func_379();
	fVar4 = func_380();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_381()));
	fVar7 = (func_376(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_382(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_383(2, fVar9, fVar9 > 100f);
	return func_384(fVar7, -100f, 100f);
}

float func_249()
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

	if (func_375())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_376(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_385())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_386())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_376(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_377();
	fVar2 = func_378();
	fVar3 = func_379();
	fVar4 = func_380();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_381()));
	fVar7 = (func_376(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_382(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_383(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_376(0);
	}
	return func_384(fVar7, -100f, 100f);
}

bool func_250(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_251(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_252(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_46(bParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_161(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_84(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_149(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_253(int iParam0, bool bParam1)
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
				return func_387();
			}
			break;
	}
	return 0;
}

int func_254(bool bParam0)
{
	switch (bParam0)
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

bool func_255(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_256(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (!func_255(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		return;
	}
	if (!func_389(iParam0))
	{
		func_390(iParam0, 1, 0);
	}
	bVar0 = func_391(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_392(iParam0, 512))
		{
			func_241(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_393() && !bParam1) && !func_394(0, 0, 1))
	{
		func_395(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_396(iParam0, 6);
	if (bParam2)
	{
		if (!func_394(0, 0, 1))
		{
			func_35(1, 4);
		}
	}
}

int func_257()
{
	return Global_1946054.f_1;
}

bool func_258(int iParam0, bool bParam1)
{
	return func_253(iParam0, 0) < func_397(iParam0, bParam1);
}

bool func_259(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_80(bVar1) == iParam0)
		{
			*iParam1 = bVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_260(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_238(iParam0, 1) /*3*/] != Global_1946054.f_57[func_238(iParam0, 1) /*11*/];
}

void func_261(int iParam0, bool bParam1)
{
	if (func_76(bParam1, 130796156))
	{
		func_398(bParam1, 0);
	}
	else if (func_76(bParam1, 930141731))
	{
		func_398(bParam1, 1);
		func_399(iParam0);
	}
}

void func_262(var uParam0, int iParam1)
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

int func_263(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_400(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_401(uParam2, iParam0, Var1);
	return 1;
}

struct<2> /*16*/ func_264(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_265(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_266(int iParam0)
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

int func_267(bool bParam0)
{
	var uVar0;

	if (!func_402(bParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_268(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_403(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_269()
{
	return !Global_1911774;
}

void func_270(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = bParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_271(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_272(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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

char* func_273(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_274(int iParam0)
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

float func_275(int iParam0)
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
			return func_404(iParam0);
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
			return func_404(iParam0);
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
			return func_404(iParam0);
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

bool func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_78(18);
		case 2:
			return func_78(20);
		case 1:
			return func_78(19);
		default:
			break;
	}
	return true;
}

int func_277(int iParam0)
{
	return func_405(Global_40.f_11095.f_11[iParam0]);
}

void func_278(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_1() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_78(31))
	{
		return;
	}
	iVar0 = func_277(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_277(iParam0);
	if (func_406(iParam0) && func_407(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_408(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_409(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_67(func_410(iParam0), 0);
					}
					func_411(iParam0, iVar2, iVar3);
					func_412(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_279(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_280(int iParam0)
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

struct<18> /*144*/ func_281(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (bParam0 != 0)
	{
		Var0 = bParam0;
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

struct<4> /*32*/ func_282(bool bParam0)
{
	int iVar0;

	iVar0 = func_149(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_191(923904168, func_286(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_191(923904168, func_286(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_191(923904168, func_286(bParam0), -740156546, 0);
}

void func_283(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_284(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_149(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_285(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
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

struct<4> /*32*/ func_286(bool bParam0)
{
	return func_191(joaat("CHARACTER"), func_413(), -1591664384, bParam0);
}

bool func_287(bool bParam0, bool bParam1)
{
	if (func_80(bParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_78(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_288(bool bParam0)
{
	int iVar0;

	iVar0 = func_149(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_191(271701509, func_286(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_191(271701509, func_286(bParam0), 12999093, 0);
}

bool func_289(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_80(bParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_290(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_149(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_291(bool bParam0)
{
	if (func_414(bParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_292(bool bParam0)
{
	if (!func_46(*bParam0, 0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_293(bool bParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_46(bParam0, 0))
	{
		return false;
	}
	Var0 = { func_157(bParam0, 0, 1) };
	iVar5 = joaat("SLOTID_WEAPON_0");
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_188((398 + iVar29), 1);
		if (func_189(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_190(bParam0, &Var6, iVar5);
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

int func_294(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_46(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_191(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_149(bParam6), &Var0, 0);
	return uVar4;
}

bool func_295(int iParam0, int iParam1)
{
	if (func_1() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_296(int iParam0)
{
	if (func_1() != -1)
	{
		if (func_250(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_250(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_297(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_250(iParam0, 65536) && !func_250(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_250(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_250(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_298(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_299()
{
	return Global_1905944.f_5694;
}

int func_300()
{
	return func_415(Global_40.f_12019);
}

int func_301()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		bVar2 = func_170(iVar1);
		if (func_20(bVar2, 1, 0) || func_307(func_306(bVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_302()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_416(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_303()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_312(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_304()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

bool func_305(int iParam0)
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
	return false;
}

int func_306(bool bParam0)
{
	switch (bParam0)
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

bool func_307(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_308(int iParam0)
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

int func_309(int iParam0)
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

int func_310(int iParam0)
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

char* func_311(bool bParam0)
{
	switch (bParam0)
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

bool func_312(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_313(int iParam0)
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

char* func_314(int iParam0)
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

bool func_315(bool bParam0)
{
	if (func_417(bParam0) && func_20(bParam0, 1, 0))
	{
		return true;
	}
	else if (func_418(bParam0) && func_419(bParam0))
	{
		return true;
	}
	return false;
}

char* func_316(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_125(bParam0));
}

int func_317(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_318(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_319(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_320(bool bParam0)
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

void func_321(int iParam0)
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

void func_322(bool bParam0)
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

void func_323(bool bParam0)
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

void func_324(bool bParam0)
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

void func_325(bool bParam0)
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

void func_326(bool bParam0)
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

void func_327(bool bParam0)
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

int func_328(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_238(iParam0, 1) /*3*/];
}

void func_329()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_420();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_83(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_131(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_83(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_131(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_330(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_149(0);
	*uParam1 = { func_191(bParam0, func_282(0), iParam3, 0) };
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

bool func_331(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_332(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_333()
{
	return Global_1899515;
}

void func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_421(*iParam0);
	iVar1 = func_422(*iParam0);
	iVar2 = func_423(*iParam0);
	iVar3 = func_424(*iParam0);
	iVar4 = func_425(*iParam0);
	iVar5 = func_426(*iParam0);
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
	iVar6 = func_427(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_427(iVar1, iVar0);
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
	func_428(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_335(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

int func_336(bool bParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_157(bParam0, 1, 0) };
	return func_237(Var0.f_4);
}

int func_337(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_338(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_238(func_429(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		bVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_80(bVar0) == iParam0)
		{
			*uParam1 = bVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_339(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam0 == Global_1946054.f_57[func_238(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_242(524288))
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
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, joaat("BASE"), iParam2, bParam3));
	return iVar0;
}

bool func_340(bool bParam0)
{
	switch (bParam0)
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

int func_341(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_430(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_342(int iParam0)
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
	return false;
}

int func_343(int iParam0)
{
	return func_431(iParam0, -1);
}

bool func_344(int iParam0, bool bParam1)
{
	return func_432(func_333(), iParam0, bParam1);
}

bool func_345()
{
	if (func_200())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_346(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_433((Global_40.f_4283.f_325 + iParam0));
}

void func_347(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_345())
	{
		func_268(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_268(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_348(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_434(iParam0, 1);
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

void func_350(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_434(iParam0, 1);
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

void func_351()
{
	func_350(-939420910);
	func_350(-1187950766);
	func_350(356365161);
	func_350(753127042);
	func_350(-2038424081);
	func_350(1884271742);
	func_350(459290420);
}

void func_352()
{
	func_350(704802028);
	func_350(588987611);
	func_350(2008888900);
	func_350(1649996811);
	func_350(227918160);
	func_350(168171957);
	func_350(1193080109);
	func_350(-491981251);
	func_350(-639037538);
	func_350(-618620429);
}

bool func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_434(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_354(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_355(int iParam0)
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

void func_356(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_357(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_358(int iParam0, int iParam1)
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

void func_359()
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

void func_360(int iParam0)
{
	func_367(iParam0, 8, 6);
}

void func_361(int iParam0)
{
	func_435(&(Global_1946054.f_2589), iParam0);
}

void func_362(int iParam0, int iParam1)
{
	func_436(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_363(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_364(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_80(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_437(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_362(iVar1, iVar3);
		}
	}
	if (func_260(-1586649372) && func_437(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_362(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
					}
				}
			}
			func_438(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_438(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_362(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_438(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_438(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_438(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_438(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (bParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_80(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_340(bParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_80(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_76(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
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
						func_362(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_340(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_76(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_362(iVar1, iVar3);
					}
				}
			}
			switch (func_80(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_80(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_80(uParam0->f_1[iVar1 /*3*/]) || func_76(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_362(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_365(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_439(0);
	if (iParam2 != 0 && func_440(bParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_441(bParam0, func_358(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_366(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_1() != -1;
	iVar7 = func_439(0);
	if (func_242(32768))
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
			iVar5 = func_358(iVar0, 1);
			if (func_442(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_442(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_339(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_443(uParam0);
				if (iVar3 > 0)
				{
					if (!func_242(524288))
					{
						func_369(524288);
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
							iVar5 = func_358(iVar0, 1);
							if (func_442(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_442(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_339(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_362(iVar0, iParam2);
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
					func_372(524288);
				}
			}
		}
	}
}

void func_367(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_238(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_238(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_238(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_368(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_444(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_1() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_445(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_391(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_391(Global_40.f_7729);
				Global_1946054.f_1378 = func_391(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_446(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_447(0, 1);
	}
}

void func_369(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_370(struct<4> /*32*/ sParam0)
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
			if (func_448(Param0))
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
			func_449(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_369(8);
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
			if (func_448(Param0))
			{
				return;
			}
			func_449(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_369(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_246(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_371(var uParam0)
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

void func_372(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_373(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_374(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_448(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_448(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_449(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_369(8);
}

bool func_375()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_376(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_377()
{
	float fVar0;
	int iVar1;

	fVar0 = func_450(13);
	iVar1 = func_451(fVar0);
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

float func_378()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_379()
{
	if (func_200())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_380()
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

float func_381()
{
	return Global_1954815.f_3;
}

void func_382(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_452(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_383(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_452(iParam0, 2, 0, 0);
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

float func_384(float fParam0, float fParam1, float fParam2)
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

bool func_385()
{
	return func_450(12) <= -99f;
}

bool func_386()
{
	return func_450(12) >= 99f;
}

int func_387()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_80(bVar1) == -999503751)
		{
			if (func_453() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_388(int iParam0)
{
	if (!func_255(iParam0))
	{
		return false;
	}
	if (func_392(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_389(int iParam0)
{
	if (!func_255(iParam0))
	{
		return false;
	}
	if (func_392(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_390(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_255(iParam0))
	{
		return;
	}
	if (!func_389(iParam0))
	{
		func_396(iParam0, 2);
		if (bParam2)
		{
			if (!func_394(0, 0, 1))
			{
				func_35(1, 4);
			}
		}
		if ((!func_393() && !bParam1) && !func_394(0, 0, 1))
		{
			func_395(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_454(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_391(int iParam0)
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

bool func_392(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_393()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_394(int iParam0, bool bParam1, bool bParam2)
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
		if (func_455())
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
		iVar0 = func_456(Global_1898164.f_1[0 /*5*/]);
		if (func_168(iVar0) && func_457(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_318(Global_1898164.f_1[0 /*5*/]))
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

var func_395(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_396(int iParam0, int iParam1)
{
	if (!func_255(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_397(int iParam0, bool bParam1)
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

void func_398(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_458(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_79(50);
			}
			else
			{
				func_79(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_79(51);
			}
			else
			{
				func_79(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_459(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_112();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_112();
			}
			break;
		case 3:
			func_79(24);
			if (bParam1)
			{
				if (!func_459(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_112();
				}
			}
			break;
	}
}

void func_399(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_460(0))
			{
				iVar0++;
			}
			if (func_460(2))
			{
				iVar0++;
			}
			if (func_460(4))
			{
				iVar0++;
			}
			if (!func_461(16))
			{
				if (iVar0 == 1)
				{
					func_462();
					func_67(456, 1);
					func_463(16);
				}
			}
			if (!func_461(32))
			{
				if (iVar0 >= 3)
				{
					func_462();
					func_67(456, 1);
					func_463(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_460(1))
			{
				iVar0++;
			}
			if (func_460(3))
			{
				iVar0++;
			}
			if (func_460(7))
			{
				iVar0++;
			}
			if (!func_461(1))
			{
				if (iVar0 == 1)
				{
					func_464();
					func_67(457, 1);
					func_463(1);
				}
			}
			if (!func_461(2))
			{
				if (iVar0 >= 3)
				{
					func_464();
					func_67(457, 1);
					func_463(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_460(5))
			{
				iVar0++;
			}
			if (func_460(6))
			{
				iVar0++;
			}
			if (func_460(8))
			{
				iVar0++;
			}
			if (!func_461(4))
			{
				if (iVar0 == 1)
				{
					func_465();
					func_67(455, 1);
					func_463(4);
				}
			}
			if (!func_461(8))
			{
				if (iVar0 >= 3)
				{
					func_465();
					func_67(455, 1);
					func_463(8);
				}
			}
			break;
	}
}

void func_400(var uParam0)
{
	func_262(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_262(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_262(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_401(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_466(uParam0))
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

bool func_402(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
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

void func_403(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

float func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_274(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_405(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_467(iVar6) - func_467(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_405(float fParam0)
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

int func_406(int iParam0)
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

int func_407(int iParam0)
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

int func_408(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_405(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_467(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_467(iVar0 + 1));
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

int func_409(int iParam0)
{
	int iVar0;

	if (func_468(iParam0, &iVar0))
	{
		return func_467(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_469())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_469())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_469())
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

int func_410(int iParam0)
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

void func_411(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_470(iParam0));
	sVar4 = func_472(func_471(iVar3, iParam2));
	sVar6 = func_473(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_474(iParam0));
	iVar8 = func_475(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_476(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_179(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_477(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_412(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

struct<4> /*32*/ func_413()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_414(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(bParam0, iParam1);
}

int func_415(int iParam0)
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

bool func_416(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_417(bool bParam0)
{
	switch (bParam0)
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

int func_418(bool bParam0)
{
	switch (bParam0)
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

int func_419(bool bParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_478(&iVar0, 0, iVar95, &Var1) && !func_478(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_479(iVar0, &Var1);
			if (func_46(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_420()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_480(Global_35, &iVar0);
	Var30 = { func_286(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_481(0);
	func_482(7);
	func_483(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_257() == 1160113249)
	{
		func_483(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_483(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_484(Global_35, &iVar0);
}

int func_421(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_485(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_422(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_423(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_424(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_425(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_426(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_427(int iParam0, int iParam1)
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

void func_428(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_486(iParam0, iParam6);
	func_487(iParam0, iParam5);
	func_488(iParam0, iParam4);
	func_489(iParam0, iParam3);
	func_490(iParam0, iParam2);
	func_491(iParam0, iParam1);
}

int func_429(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_237(iVar0);
}

int func_430(int iParam0)
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

int func_431(int iParam0, int iParam1)
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
		iParam1 = func_149(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_486(&uVar6, iVar0);
	func_487(&uVar6, iVar1);
	func_488(&uVar6, iVar2);
	func_489(&uVar6, iVar3);
	func_490(&uVar6, iVar4);
	func_491(&uVar6, iVar5);
	return uVar6;
}

bool func_432(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_492(iParam1) || !func_492(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_433(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_264(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_434(int iParam0, int iParam1)
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

void func_435(var uParam0, int iParam1)
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
			if ((func_493(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_493(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_494(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_436(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_495(uParam0, 1))
	{
		func_496(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_437(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_438(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_362(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_362(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_362(iVar2, iVar0);
		}
	}
}

int func_439(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_257();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_440(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(bParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(bParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_441(bool bParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_442(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_238(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_443(var uParam0)
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

void func_444(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_1() == -1)
	{
		func_497(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_498(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_445(int iParam0, int iParam1)
{
	if (func_1() == -1)
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

void func_446(int iParam0, bool bParam1, int iParam2)
{
	func_499(&(Global_1946054.f_1378), iParam0);
	func_500(2, iParam0, 6);
	if (bParam1)
	{
		func_447(0, 1);
	}
}

void func_447(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_501(0);
	}
	if (bParam0)
	{
		func_369(8);
		func_369(512);
	}
	else
	{
		func_369(8);
		func_369(16);
	}
}

bool func_448(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_449(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_450(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_451(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_452(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_271(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_271(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_453()
{
	return Global_1946054.f_1497;
}

char* func_454(int iParam0)
{
	bool bVar0;

	bVar0 = func_391(iParam0);
	if (bVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_316(bVar0);
}

bool func_455()
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

int func_456(int iParam0)
{
	if (!func_318(iParam0))
	{
		return -1;
	}
	return func_503(func_502(iParam0));
}

bool func_457(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_458(bool bParam0)
{
	int iVar0;

	if (func_504(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_505(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_506(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_507(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_459(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_20(func_508(iVar0, iParam0), 1, 0))
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

bool func_460(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_20(func_509(iVar0, iParam0), 1, 0))
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

bool func_461(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_462()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_131(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_277(1);
	func_411(1, iVar0, 0);
}

void func_463(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_464()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_131(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_277(2);
	func_411(2, iVar0, 0);
}

void func_465()
{
	int iVar0;

	if (func_1() != -1)
	{
		return;
	}
	func_131(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_277(0);
	func_411(0, iVar0, 0);
}

bool func_466(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_467(int iParam0)
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

bool func_468(int iParam0, int iParam1)
{
	return false;
}

bool func_469()
{
	return false;
}

int func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_149(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_149(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_149(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> /*32*/ func_471(int iParam0, int iParam1)
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

char* func_472(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_473(int iParam0)
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

char* func_474(int iParam0)
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

int func_475(int iParam0)
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

int func_476(int iParam0)
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

int func_477(int iParam0)
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

bool func_478(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_510(iParam1) && !func_511(iParam1))
	{
		bVar0 = func_512(iParam1);
	}
	else
	{
		return false;
	}
	func_513(uParam3);
	iVar5 = func_514(iParam2);
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

void func_479(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_515(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_516(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_480(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	bool bVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		bVar31 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar31, false, iVar30, true);
		if (func_146(bVar31))
		{
			(*iParam1)[iVar30] = bVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_481(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = Global_1946054.f_2657[iVar0];
		if (func_46(bVar1, 0))
		{
			func_517(bVar1, 0, bParam0);
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

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_1() == -1)
	{
		func_518(352481484);
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
		bVar2 = Global_1946054.f_2657[iVar0];
		if (func_80(bVar2) != -999503751)
		{
			func_519(&(Global_1946054.f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_520(bVar2, 0))
		{
			func_521(bVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_483(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_522(bParam0))
	{
		return;
	}
	iVar0 = func_80(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_523(bParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_524(0))
	{
		func_525(bParam0, 1);
		if (func_257() == 1160113249)
		{
			func_525(func_524(-2125499975), 0);
		}
		else
		{
			func_525(func_524(1160113249), 0);
		}
	}
	func_526();
	if (func_527(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_149(0), bParam0, 0);
	}
	func_521(bParam0, bParam3);
	if (bParam2)
	{
		func_447(0, 0);
	}
}

void func_484(int iParam0, int iParam1)
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
				if (func_187((*iParam1)[iVar0]))
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

int func_485(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_486(int iParam0, int iParam1)
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

void func_487(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_422(*iParam0);
	iVar1 = func_421(*iParam0);
	if (iParam1 < 1 || iParam1 > func_427(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_489(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_490(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_491(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_492(int iParam0)
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
	iVar0 = func_426(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_425(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_424(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_421(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_422(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_423(iParam0);
	if (iVar5 < 1 || iVar5 > func_427(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_493(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_495(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_496(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_497(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_498(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_499(var uParam0, int iParam1)
{
	int iVar0;

	if (func_1() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_497(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_498(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	if (func_1() == -1)
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

void func_501(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

int func_502(int iParam0)
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

int func_503(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_504(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_505(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_506(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_507(bool bParam0)
{
	if (!func_46(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_508(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_528(iParam0);
		case 1:
			return func_529(iParam0);
		case 2:
			return func_530(iParam0);
		case 3:
			return func_531(iParam0);
	}
	return 0;
}

int func_509(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_532(iParam0);
		case 1:
			return func_533(iParam0);
		case 2:
			return func_534(iParam0);
		case 3:
			return func_535(iParam0);
		case 4:
			return func_536(iParam0);
		case 5:
			return func_537(iParam0);
		case 6:
			return func_538(iParam0);
		case 7:
			return func_539(iParam0);
		case 8:
			return func_540(iParam0);
	}
	return 0;
}

bool func_510(int iParam0)
{
	iParam0 = func_541(iParam0);
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

bool func_511(int iParam0)
{
	int iVar0;

	iParam0 = func_541(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_510(iParam0))
	{
		return false;
	}
	iVar0 = func_512(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_512(int iParam0)
{
	iParam0 = func_541(iParam0);
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

void func_513(var uParam0)
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

int func_514(int iParam0)
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

void func_515(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_516(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_517(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_80(bParam0))
	{
		case -2061583405:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_542(bParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_526();
	}
	if (bParam1)
	{
		func_447(0, 0);
	}
}

void func_518(int iParam0)
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
	Var2 = { func_281(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_284(&Var2, &iVar0, &iVar1, 0))
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
		func_147(iVar0);
	}
}

void func_519(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_543(iParam2, *uParam0);
	func_544(&(uParam0->f_1[*uParam0 /*5*/]), bParam1, -1, 1, 0);
	*uParam0++;
}

bool func_520(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_157(bParam0, 0, 0) };
	Var5 = { func_191(bParam0, Var0, Var0.f_4, 0) };
	if (func_294(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_149(0), &Var5, iParam1);
	return true;
}

void func_521(bool bParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_157(bParam0, 0, 0) };
	Var5 = { func_191(bParam0, Var0, Var0.f_4, 0) };
	if (func_294(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_149(0), &Var5, bParam1);
}

bool func_522(bool bParam0)
{
	if (func_1() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (bParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_523(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_545(bVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_520(bParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = bVar1;
	if (func_80(bParam0) != -999503751)
	{
		func_519(&(Global_1946054.f_2657.f_26.f_26), bParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

bool func_524(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_257();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_525(bool bParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_157(bParam0, 0, 0) };
	Var5 = { func_191(bParam0, Var0, Var0.f_4, 0) };
	if (func_294(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_149(0), &Var5);
	return 1;
}

void func_526()
{
	int iVar0;

	if (func_1() == -1)
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

bool func_527(int iParam0)
{
	return func_547(func_546(iParam0));
}

int func_528(int iParam0)
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

int func_529(int iParam0)
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

int func_530(int iParam0)
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

int func_531(int iParam0)
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

int func_532(int iParam0)
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

int func_533(int iParam0)
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

int func_534(int iParam0)
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

int func_535(int iParam0)
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

int func_536(int iParam0)
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

int func_537(int iParam0)
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

int func_538(int iParam0)
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

int func_539(int iParam0)
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

int func_540(int iParam0)
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

int func_541(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_542(bool bParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (!func_545(bVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_80(bParam0) != -999503751)
		{
			func_548(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19 = (Global_1946054.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_80(bParam0) != -999503751)
	{
		func_548(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_520(bParam0, 1);
	return 1;
}

void func_543(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_544(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_549(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_238(func_336(bParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = bParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_550(uParam0);
	}
}

bool func_545(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (bParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_546(int iParam0)
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

bool func_547(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_548(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_551(iParam1);
	func_552(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_553(&(uParam0->f_26), iVar1);
		if (func_554(uParam0->f_26, &iVar0))
		{
			func_555(iVar0, iVar1);
		}
	}
}

void func_549(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_556(&(uParam0->f_3));
}

void func_550(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_557(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_551(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_552(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_553(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_549(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_554(int iParam0, int iParam1)
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

void func_555(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_556(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_557(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_558(func_257());
	if (*uParam0)
	{
		func_556(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_1() != -1, iParam2);
	*uParam0 = 1;
}

int func_558(int iParam0)
{
	if (func_1() == -1)
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

