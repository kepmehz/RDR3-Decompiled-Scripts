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
	struct<530> /*4240*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 1, 1, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232348144, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1064514355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	vector3 vLocal_546 = { 0f, 0f, 0f };
	var uLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	bool bLocal_552 = false;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	bool bLocal_559 = false;
	int iLocal_560 = 0;
	bool bLocal_561 = false;
	bool bLocal_562 = false;
	bool bLocal_563 = false;
	bool bLocal_564 = false;
	bool bLocal_565 = false;
	bool bLocal_566 = false;
	bool bLocal_567 = false;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	char* sLocal_571 = NULL;
	int iLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 24;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	bool bLocal_688 = false;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	var uLocal_714 = 0;
#endregion

void main()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_552 = joaat("CS_TOWNCRIER");
	iLocal_555 = joaat("P_BELL05X");
	iLocal_556 = joaat("P_CS_PAMPHLET03X");
	iLocal_557 = joaat("P_CS_STACKCHOLERA01X");
	sLocal_571 = "spatc_walk";
	func_1(&(Local_14.f_146));
	func_2(&Local_14);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_3(&Local_14);
	}
	while (true)
	{
		func_4(&Local_14);
		func_5(&Local_14, Local_14);
		switch (Local_14.f_144)
		{
			case 0:
				if (func_6(&Local_14))
				{
					func_7(&Local_14, 1);
				}
				break;
			case 1:
				if (func_8(&Local_14))
				{
					func_7(&Local_14, 2);
				}
				break;
			case 2:
				if (func_9(&Local_14))
				{
					func_7(&Local_14, 3);
				}
				if (Local_14.f_505 && ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
				{
					if (Local_14.f_143)
					{
						func_10(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
				}
				break;
			case 3:
				if (Local_14.f_143)
				{
					func_10(&Local_14);
				}
				func_13(&Local_14);
				if ((func_14(&Local_14) || func_15(Local_14, Local_14.f_3, 1, 1)) && Local_14.f_527 == 0)
				{
					if (!func_16(&(Local_14.f_146), 8))
					{
						func_17(&(Local_14.f_146), 8, 0);
					}
				}
				else if (func_16(&(Local_14.f_146), 8))
				{
					func_18(&(Local_14.f_146), 8);
				}
				if ((func_16(&(Local_14.f_146), 2) || (Local_14.f_146.f_353 && func_16(&(Local_14.f_146), 1))) || Local_14.f_146.f_349 != 5)
				{
					if (func_19(Local_14, Local_14.f_1, &(Local_14.f_3), &(Local_14.f_4), &(Local_14.f_529), 0, 1097859072 /* Float: 15f */, 0))
					{
						func_20(&Local_14);
					}
					if (Local_14.f_504)
					{
						func_11(&Local_14);
					}
					else
					{
						func_12(&Local_14);
					}
					func_21(&Local_14);
					func_22(&Local_14);
					if (func_23(&Local_14, 1))
					{
						func_7(&Local_14, 4);
					}
				}
				else if (func_23(&Local_14, 0))
				{
					func_7(&Local_14, 4);
				}
				break;
			case 4:
				func_3(&Local_14);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_357 = 2626;
	func_25(&(uParam0->f_181));
	func_25(&(uParam0->f_209));
	func_25(&(uParam0->f_237));
	func_25(&(uParam0->f_265));
	func_25(&(uParam0->f_293));
}

void func_2(var uParam0)
{
	func_26();
	func_27();
	uParam0->f_10 = 120;
	func_28(&(uParam0->f_506));
	func_29(&(Local_14.f_11), 1);
	func_30(&(Local_14.f_11), 1);
	func_31(&(Local_14.f_11), 1);
	func_32(&(Local_14.f_11), 0);
	func_33(&(Local_14.f_11), 1, 1, 1);
	func_34(&(Local_14.f_11), 0);
	func_35(&(Local_14.f_11), 0);
	func_36(&(Local_14.f_11), 0);
	func_37(&(Local_14.f_11), 1);
	func_38(&(Local_14.f_11), 1);
	func_39(&(Local_14.f_11), 1);
	func_40(&(Local_14.f_11), 1);
	func_41(&(Local_14.f_11), 1);
	func_42(&(Local_14.f_11), 1);
	func_43(&(Local_14.f_11), 0);
	func_44(&(Local_14.f_11), 1);
	func_45(&(Local_14.f_11), 1);
	func_46(&(Local_14.f_11), 0);
	func_47(&(Local_14.f_11), 1);
	func_48(&Local_14, 1);
}

void func_3(int iParam0)
{
	func_49(iParam0);
	func_50(&(iParam0->f_146));
	ITEMSET::DESTROY_ITEMSET(iParam0->f_104);
	func_51(iParam0->f_102);
	func_51(iParam0->f_105);
	func_52(&(iParam0->f_506));
	func_53(*iParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uParam0->f_3, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uParam0->f_3, 0.35f, 0, -1082130432 /* Float: -1f */, 0);
		}
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uParam0->f_3, 0, 1);
	}
	if (iLocal_580 != 1 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_102, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DROP"), false);
	}
	if (func_54(&uLocal_708) && func_55(&uLocal_708, 2f))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(Local_14.f_3, &uVar0));
	}
}

void func_5(int iParam0, var uParam1)
{
	if (func_56(iParam0))
	{
		func_3(iParam0);
	}
	if (!func_57(Global_35, 0))
	{
		func_3(iParam0);
	}
	if (func_58(*iParam0, iParam0->f_1, &(iParam0->f_506), iParam0->f_3))
	{
		iParam0->f_527 = 1;
	}
	if (func_59(iParam0))
	{
		if (!func_54(&(iParam0->f_7)))
		{
			func_60(&(iParam0->f_7), 0);
		}
		else if (func_61(&(iParam0->f_7)) > 10f)
		{
			func_62(&(iParam0->f_7));
			func_3(iParam0);
		}
	}
	else if (func_54(&(iParam0->f_7)))
	{
		func_62(&(iParam0->f_7));
	}
}

bool func_6(var uParam0)
{
	if (func_63(uParam0))
	{
		uParam0->f_104 = ITEMSET::CREATE_ITEMSET(true);
		return true;
	}
	return false;
}

void func_7(int iParam0, int iParam1)
{
	iParam0->f_144 = iParam1;
}

bool func_8(var uParam0)
{
	if (func_64(uParam0))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0)
{
	if (func_65(uParam0))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		uParam0->f_142 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_11(int iParam0)
{
	if (((func_66(iParam0) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !Global_1935630.f_12) && ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0)))
	{
		if (func_68(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
				func_71(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
				if (iParam0->f_528)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
				if (!func_74(iParam0, 2))
				{
					func_75(&(iParam0->f_3));
					func_76(&(iParam0->f_41[iParam0->f_101 /*59*/].f_21), 0, 0, 1, 0);
				}
			}
		}
	}
	else
	{
		func_77(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
		func_75(&(iParam0->f_3));
		func_71(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
		func_76(&(iParam0->f_41[iParam0->f_101 /*59*/].f_21), 0, 0, 1, 0);
	}
}

void func_12(int iParam0)
{
	if (func_66(iParam0))
	{
		if (func_78(iParam0, iParam0->f_101) > -1)
		{
			if (func_69(iParam0))
			{
				func_70(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
				func_75(&(iParam0->f_3));
				func_71(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
				func_76(&(iParam0->f_41[iParam0->f_101 /*59*/].f_21), 0, 0, 1, 0);
				if (iParam0->f_528)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				}
				func_72(*iParam0, &(iParam0->f_3), &(iParam0->f_134), iParam0->f_135);
				func_73(iParam0, iParam0->f_101, -1);
			}
		}
	}
	else
	{
		func_70(&(iParam0->f_41[iParam0->f_101 /*59*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_3))
		{
			MISC::_0xE98D55C5983F2509(iParam0->f_3);
		}
	}
}

void func_13(var uParam0)
{
	bool bVar0;

	if (func_79(uParam0))
	{
		if (uParam0->f_531)
		{
			bVar0 = func_80(&(uParam0->f_11), &(uParam0->f_39), &(uParam0->f_3), &(uParam0->f_530), 1101004800 /* Float: 20f */);
		}
		else
		{
			bVar0 = func_81(uParam0->f_3, 0, &(uParam0->f_11), &(uParam0->f_39), 0, 0);
		}
		if (bVar0)
		{
			if (func_82(uParam0))
			{
				func_17(&(uParam0->f_146), 2, 1);
			}
		}
	}
}

int func_14(var uParam0)
{
	if (!func_83(Global_35, bLocal_566, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (func_84())
		{
			return 1;
		}
	}
	if (!PED::IS_PED_INJURED(bParam1))
	{
		if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(bParam1, true, false)) < 18f || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam1))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (func_85(0) == 7 || func_86())
		{
			return 1;
		}
	}
	if (func_87(&(Global_1396257[iParam0 /*638*/].f_626), 1024))
	{
		return 1;
	}
	return 0;
}

bool func_16(var uParam0, int iParam1)
{
	return func_88(uParam0->f_352, iParam1);
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_352 = 0;
		func_89(&(uParam0->f_352), iParam1);
	}
	else
	{
		func_89(&(uParam0->f_352), iParam1);
	}
}

void func_18(var uParam0, int iParam1)
{
	func_90(&(uParam0->f_352), iParam1);
}

bool func_19(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	if (*uParam4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam2) || Global_1935630.f_12)
	{
		return false;
	}
	if (bParam7)
	{
		if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam2))
		{
			Global_40.f_11623[iParam0 /*8*/].f_5++;
			Global_40.f_11623[iParam0 /*8*/].f_2 = func_91();
			*uParam4 = 1;
			return true;
		}
	}
	if (fParam5 == 0f)
	{
		if (!func_92(Global_35, *uParam2, fParam6, 1))
		{
			return false;
		}
	}
	else if (fParam5 > fParam6)
	{
		return false;
	}
	if (!func_54(uParam3))
	{
		func_93(uParam3, 0f);
	}
	else if (func_61(uParam3) >= 2f)
	{
		if (!func_94(Global_40.f_11623[iParam0 /*8*/].f_2))
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return true;
		}
		else
		{
			func_95(iParam0);
			*uParam4 = 1;
			func_62(uParam3);
			return true;
		}
	}
	return false;
}

void func_20(int iParam0)
{
}

void func_21(int iParam0)
{
	if (!func_96(iParam0) || func_97(iParam0->f_134, iParam0->f_136))
	{
		return;
	}
	if (iParam0->f_137 < 2)
	{
		if (func_98(&(iParam0->f_3), 249295937))
		{
			func_99(iParam0);
			func_100(&(iParam0->f_134), iParam0->f_136);
		}
	}
}

void func_22(int iParam0)
{
	if (func_101(iParam0))
	{
		func_102(&(iParam0->f_104), iParam0->f_105, &(iParam0->f_3), &(iParam0->f_106), &(iParam0->f_131), 5000);
	}
}

bool func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return true;
		}
	}
	func_104(&(iParam0->f_146));
	return false;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_2.f_1 = -1;
	uParam0->f_4 = -1;
	uParam0->f_4.f_1 = -1;
	uParam0->f_6 = -1;
	uParam0->f_6.f_1 = -1;
	uParam0->f_8 = -1;
	uParam0->f_8.f_1 = -1;
	uParam0->f_10 = -1;
	uParam0->f_10.f_1 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_23 = 13725;
	uParam0->f_24 = 13734;
	uParam0->f_25 = 13743;
	uParam0->f_20 = 0;
	uParam0->f_21 = 2;
	uParam0->f_22 = 0.95f;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

void func_26()
{
	Local_14 = 2;
	Local_14.f_1 = func_108(2);
	Local_14.f_2 = func_110(Local_14, Local_14.f_1, 9, func_109(Local_14));
	iLocal_553 = iLocal_556;
	iLocal_554 = iLocal_557;
	iLocal_551 = func_110(Local_14, 0, 9, func_109(Local_14));
	if (func_111(iLocal_551))
	{
		iLocal_550 = func_112(iLocal_551);
	}
	vLocal_546 = { func_113(Local_14, Local_14.f_1, Global_1396257[Local_14 /*638*/].f_633) };
	func_114();
	func_115(&(Local_14.f_146), 0);
	Local_14.f_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "volTalkTrigger");
	Local_14.f_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 6.378f, 6.378f, 3.212f, "volLookIK");
	Local_14.f_135 = 2;
	Local_14.f_136 = 4;
	Local_14.f_146.f_357 = 18305;
	Local_14.f_528 = 0;
}

void func_27()
{
	bLocal_562 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 12.378f, 12.378f, 6.212f, "m_volTrigger");
	bLocal_564 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 11.794f, 11.794f, 13.097f, "m_volSpeechArea");
	bLocal_565 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 60.561f, 60.561f, 12.56f, "m_volCalloverArea");
	bLocal_563 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 2.243f, 2.243f, 3.65f, "m_volStayAway");
	bLocal_561 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_546, 0f, 0f, 0f, 50f, 50f, 50f, "m_volRandomEventBlock");
	bLocal_566 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3667.189f, -2599.147f, -14.66374f, 0f, 0f, 0f, 108.3022f, 88.25834f, 15.55599f, "m_volGoIdleLimits");
	bLocal_567 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_546, 0f, 0f, 0f, 1.85f, 1.85f, 10f);
	VOLUME::_0x5B23DFF8E0948BB2(bLocal_567, 0);
	VOLUME::_0xBE551C2CC421185D(bLocal_567, 1);
}

void func_28(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 1;
	uParam0->f_8 = 1;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16384);
	}
	else
	{
		func_118(&(uParam0->f_1), 16384);
	}
}

void func_30(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2048);
	}
	else
	{
		func_118(&(uParam0->f_1), 2048);
	}
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 16);
	}
	else
	{
		func_117(uParam0, 67108864);
		func_117(uParam0, 16);
	}
}

void func_32(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 524288);
	}
	else
	{
		func_117(uParam0, 524288);
	}
}

void func_33(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_118(uParam0, 268435456);
	}
	else
	{
		func_117(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_118(uParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_117(uParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_118(uParam0, 536870912);
	}
	else
	{
		func_117(uParam0, 536870912);
	}
}

void func_34(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 131072);
	}
	else
	{
		func_118(&(uParam0->f_1), 131072);
	}
}

void func_35(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 4);
	}
	else
	{
		func_117(uParam0, 4);
	}
}

void func_36(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 2);
	}
	else
	{
		func_117(uParam0, 2);
	}
}

void func_37(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 2);
	}
	else
	{
		func_118(&(uParam0->f_1), 2);
	}
}

void func_38(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 8);
	}
	else
	{
		func_118(&(uParam0->f_1), 8);
	}
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 128);
	}
	else
	{
		func_117(uParam0, 128);
	}
}

void func_40(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 8);
	}
	else
	{
		func_117(uParam0, 8);
	}
}

void func_41(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 32);
	}
	else
	{
		func_117(uParam0, 32);
	}
}

void func_42(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 4);
	}
	else
	{
		func_118(&(uParam0->f_1), 4);
	}
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 1024);
	}
	else
	{
		func_118(&(uParam0->f_1), 1024);
	}
}

void func_44(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 524288);
	}
	else
	{
		func_118(&(uParam0->f_1), 524288);
	}
}

void func_45(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 1048576);
	}
	else
	{
		func_117(uParam0, 1048576);
	}
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 262144);
	}
	else
	{
		func_117(uParam0, 262144);
	}
}

void func_47(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_117(&(uParam0->f_1), 16);
	}
	else
	{
		func_118(&(uParam0->f_1), 16);
	}
}

void func_48(int iParam0, int iParam1)
{
	iParam0->f_143 = iParam1;
}

int func_49(int iParam0)
{
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_713))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_713);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_711))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_711);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_712))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_712);
	}
	func_119(0);
	func_120(&uLocal_690);
	func_121(&(Local_14.f_3), &uLocal_689, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 25f, 1);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierBubble");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierConvo");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
	func_122();
	func_123(Local_14.f_3);
	func_124();
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
	if (VOLUME::DOES_VOLUME_EXIST(bLocal_561))
	{
		func_125(bLocal_561);
	}
	func_51(bLocal_562);
	func_51(bLocal_561);
	func_51(bLocal_565);
	func_51(bLocal_563);
	func_51(bLocal_564);
	func_51(bLocal_566);
	func_51(bLocal_567);
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_3));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_558))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_558);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_559))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&bLocal_559);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_560))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_560);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_571);
	return 1;
}

void func_50(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

void func_51(bool bParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_DELETE_VOLUME(bParam0);
	}
}

void func_52(var uParam0)
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
	if (func_54(&(uParam0->f_13)))
	{
		func_62(&(uParam0->f_13));
	}
}

void func_53(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	}
	if (Global_1396257[iParam0 /*638*/].f_631)
	{
		func_126(0, -1);
	}
	func_127();
	Global_1396257[iParam0 /*638*/].f_631 = 0;
	Global_1415398.f_2 = (Global_1415398.f_2 - 1);
	Global_1935183.f_28 = 0;
}

bool func_54(var uParam0)
{
	return func_128(*uParam0, 1);
}

bool func_55(var uParam0, float fParam1)
{
	if (func_129(uParam0, fParam1))
	{
		func_62(uParam0);
		return true;
	}
	return false;
}

bool func_56(var uParam0)
{
	return false;
}

bool func_57(int iParam0, int iParam1)
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
	if (func_88(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_88(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_88(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_58(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((func_85(0) == 1 || func_85(0) == 2) || func_85(0) == 8) || func_130(Global_1935630, 2048))
			{
				func_89(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (func_85(0) == 11)
			{
				func_89(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (func_85(0) == 6)
			{
				func_89(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				func_89(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(func_131(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_131(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = func_91();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (func_131(iVar2) > func_131(iVar1))
				{
					if (func_131(iVar0) > func_131(iVar2) + 1 || func_131(iVar0) < func_131(iVar1))
					{
						func_89(iParam2, 32);
					}
				}
				else if (func_131(iVar0) > func_131(iVar2) + 1 && func_131(iVar0) < func_131(iVar1))
				{
					func_89(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((func_132(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_132(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || func_133(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || func_133(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!func_134(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						func_89(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (func_135(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || func_136(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!func_54(&(iParam2->f_13)))
					{
						func_93(&(iParam2->f_13), 0f);
					}
					else if (func_137(&(iParam2->f_13)) >= iParam2->f_16)
					{
						func_62(&(iParam2->f_13));
						func_89(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_54(&(iParam2->f_13)))
					{
						func_62(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (func_138())
			{
				func_89(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (func_139())
			{
				func_89(iParam2, 2048);
			}
		}
		if (func_130(Global_1935630, 16384) || Global_1430231.f_4)
		{
			func_89(iParam2, 128);
		}
		if (func_87(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			func_89(iParam2, 256);
		}
	}
	if ((((((((((func_88(*iParam2, 2) || func_88(*iParam2, 4)) || func_88(*iParam2, 8)) || func_88(*iParam2, 16)) || func_88(*iParam2, 32)) || func_88(*iParam2, 64)) || func_88(*iParam2, 128)) || func_88(*iParam2, 256)) || func_88(*iParam2, 512)) || func_88(*iParam2, 1024)) || func_88(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0)
{
	if ((func_140(iParam0) || (func_141(iParam0->f_40, 1) && !func_83(Global_35, Global_1396257[*iParam0 /*638*/][iParam0->f_1 /*48*/].f_47, 0, 1))) || (func_142(iParam0->f_10) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_143(iParam0->f_10), true, 0)))
	{
		return true;
	}
	return false;
}

void func_60(var uParam0, bool bParam1)
{
	if (bParam1 || !func_54(uParam0))
	{
		func_144(uParam0);
	}
}

float func_61(var uParam0)
{
	if (!func_54(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_145(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_146() - uParam0->f_1);
}

void func_62(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_63(var uParam0)
{
	HUD::TEXT_BLOCK_REQUEST("SPAH");
	HUD::TEXT_BLOCK_REQUEST("SPDEF");
	HUD::TEXT_BLOCK_REQUEST("SPATCAU");
	STREAMING::REQUEST_MODEL(bLocal_552, false);
	STREAMING::REQUEST_MODEL(iLocal_553, false);
	STREAMING::REQUEST_MODEL(iLocal_554, false);
	STREAMING::REQUEST_MODEL(iLocal_555, false);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_571);
	func_147(bLocal_561, "SP_ArmadilloTownCrier_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0xB56D41A694E42E86(bLocal_563, 2500607, 0, 0, -1, -1, 10);
	PED::_RESERVE_AMBIENT_PEDS(1);
	return true;
}

bool func_64(var uParam0)
{
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPAH"))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPDEF"))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("SPATCAU"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(bLocal_552))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_553))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_554))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_555))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_571))
	{
		return false;
	}
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() != 1)
	{
		return false;
	}
	return true;
}

bool func_65(var uParam0)
{
	var uVar0;
	vector3 vVar1;

	if ((func_148(&(Local_14.f_3), bLocal_552, &uVar0, vLocal_546, vLocal_546.f_3, 0, 0, 1) && func_149(&iLocal_560, iLocal_555, &uVar0, vLocal_546)) && func_149(&iLocal_558, iLocal_554, &uVar0, vLocal_546))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_14.f_3, "special_ped_group", 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, true);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_14.f_3, 0.75f);
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, true);
		func_150(Local_14.f_3, 2);
		PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Local_14.f_3, true, false), 7f, 1, 0);
		vVar1 = { 0f, 0f, 0f };
		PED::_0x7C00CFC48A782DC0(bLocal_562, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_565, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_564, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_563, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(Local_14.f_102, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(Local_14.f_105, Local_14.f_3, vVar1, vVar1, 2, 1);
		PED::_0x7C00CFC48A782DC0(bLocal_567, Local_14.f_3, vVar1, vVar1, 2, 1);
		func_151(&(Local_14.f_3), &uLocal_689, joaat("EVENT_SHOCKING_BEAT_INSIGNIFICANT_NEW"), 25f, -1082130432 /* Float: -1f */);
		func_152();
		if (Local_14.f_1 == 0)
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		else
		{
			iLocal_580 = 0;
			func_116(&(Local_14.f_146.f_181), func_153(0), func_154(6), &(Local_14.f_146.f_209));
		}
		func_155(&(Local_14.f_146), 1, 1);
		Local_14.f_504 = 1;
		func_156(&Local_14, 0);
		func_157(&Local_14, 0, 0, "SPD_UC_GRT", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0);
		func_157(&Local_14, 0, 1, "SPD_UC_ANT", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0);
		func_159(&Local_14, 0, func_158(3, 0, 0), 0);
		func_160(&Local_14, 0, 0);
		func_89(&(Local_14.f_134), 64);
		func_161(&uLocal_584, Local_14.f_3, "ARM_TOWN_CRIER", 0);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_14.f_3, "SPECIAL_PED_LIGHTWEIGHT_1_1", 0f, 0f, 0f, false, "CrierBubble");
		return true;
	}
	return false;
}

bool func_66(int iParam0)
{
	if ((func_88(Local_14.f_134, 64) && !func_88(Local_14.f_134, 67108864)) && !func_88(Local_14.f_134, 32768))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	if (func_162(iParam0) <= 15f)
	{
		return true;
	}
	return false;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	iVar0 = func_163(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 2, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, iParam0->f_41[iParam1 /*59*/].f_56, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (func_164(iParam0))
	{
		func_77(&(iParam0->f_41[iParam1 /*59*/]), 1);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_77(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_69(int iParam0)
{
	int iVar0;

	if (!func_88(Local_14.f_134, 524288))
	{
		if (func_165(iParam0, 0, &iVar0))
		{
			func_166();
			func_89(&(Local_14.f_134), 524288);
			func_90(&(Local_14.f_134), 64);
			func_89(&(Local_14.f_134), 67108864);
			func_90(&(Local_14.f_134), 2097152);
			func_17(&(Local_14.f_146), 4, 0);
			func_167(iVar0);
		}
	}
	return true;
}

void func_70(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_169(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_170(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_169(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_170(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

void func_71(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_62(&(iParam0->f_18));
}

void func_72(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (func_97(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && func_172(func_171(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		func_173(func_171(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = func_91();
	func_100(uParam2, uParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 1)
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_58 = iParam2;
}

bool func_74(int iParam0, int iParam1)
{
	return func_88(iParam0->f_138, iParam1);
}

void func_75(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_76(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_174((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_175(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
					if (bParam2)
					{
						(uParam0[iVar0 /*17*/])->f_7 = 0;
						(*uParam0)[iVar0 /*17*/] = 0;
						(uParam0[iVar0 /*17*/])->f_5 = "";
						(uParam0[iVar0 /*17*/])->f_14 = 0;
						(uParam0[iVar0 /*17*/])->f_13 = "";
						(uParam0[iVar0 /*17*/])->f_15 = 0;
						(uParam0[iVar0 /*17*/])->f_11 = "";
						(uParam0[iVar0 /*17*/])->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_77(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		sVar1 = func_168(uParam0->f_21[iVar0 /*17*/].f_5);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (bParam1 && !func_169(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_170(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
			else if (!bParam1 && func_169(&(uParam0->f_21[iVar0 /*17*/]), 1, 0))
			{
				func_170(&(uParam0->f_21[iVar0 /*17*/]), bParam1, 0);
			}
		}
		iVar0++;
	}
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (iParam1 < 0 || iParam1 >= 1)
	{
		return iVar0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return iVar0;
	}
	iVar1 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_103))
	{
		iVar1 = iParam0->f_103;
	}
	if ((VOLUME::DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || func_67(iParam0))
	{
		func_70(&(iParam0->f_41[iParam1 /*59*/]), 1);
		iVar0 = func_163(&(iParam0->f_3), &(iParam0->f_41[iParam1 /*59*/]), 15f, &(iParam0->f_41[iParam1 /*59*/].f_21), 0f, 3, iParam0->f_41[iParam1 /*59*/].f_57, iVar1, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			iParam0->f_41[iParam1 /*59*/].f_58 = iVar0;
		}
		return iParam0->f_41[iParam1 /*59*/].f_58;
	}
	else
	{
		func_70(&(iParam0->f_41[iParam1 /*59*/]), 0);
	}
	return iVar0;
}

bool func_79(var uParam0)
{
	if (!func_88(Local_14.f_134, 32768))
	{
		return true;
	}
	return false;
}

int func_80(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*uParam2, true))
	{
		*uParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (func_81(*uParam2, 0, uParam0, uParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*uParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*uParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*uParam2))
			{
				*uParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *uParam2, 1000))
			{
				*uParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*uParam2, false, true), fParam4))
			{
				*uParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

bool func_81(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_176(uParam2, 1, iVar0);
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
			if (func_177(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_178(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_179(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_180(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_181(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_182(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_178(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_183(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_184(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_185(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_186(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_186(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_178(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_187(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_188(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_189(uParam2, 4000))
				{
					if ((func_190(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_191(uParam2, bParam0)) && func_192(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_190(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_191(uParam2, bParam0)) && func_192(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_193(bParam0, Global_1935630.f_41))
							{
								func_194();
								*uParam3 = 2;
								func_178(bParam0, uParam2, *uParam3);
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
						if (func_193(bParam0, Global_1935630.f_41))
						{
							func_194();
							*uParam3 = 2;
							func_178(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_195(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_196() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_194();
						*uParam3 = 2;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_197())
					{
						if (func_193(bParam0, Global_1935630.f_42))
						{
							func_194();
							*uParam3 = 2;
							func_178(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_198(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_178(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_199(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_200(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_201(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_202(uParam2, 4000))
				{
					if (func_203(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_178(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_204(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_178(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_205(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_178(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_82(var uParam0)
{
	bool bVar0;

	switch (uParam0->f_39)
	{
		case 32:
		case 64:
		case 128:
		case 4096:
		case 8192:
		case 16384:
		case 524288:
			func_89(&(Local_14.f_134), 1073741824 /* Float: 2f */);
			bVar0 = true;
			break;
		case 2:
		case 4:
		case 8:
		case 512:
			bVar0 = true;
			break;
		case 16:
			bVar0 = true;
			break;
		default:
			bVar0 = true;
			break;
	}
	if (bVar0)
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		if (func_206(Local_14.f_3, 1))
		{
			func_207(&Local_14);
		}
		return true;
	}
	else
	{
		return false;
	}
	return true;
}

bool func_83(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, bParam1, true, 0);
}

bool func_84()
{
	int iVar0;

	if (func_208() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_209(Global_1392915[iVar0 /*12*/].f_4))
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

int func_85(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_86()
{
	return Global_1310750.f_16077 != 0;
}

bool func_87(var uParam0, int iParam1)
{
	return func_141(*uParam0, iParam1);
}

bool func_88(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_89(int iParam0, int iParam1)
{
	func_100(iParam0, iParam1);
}

void func_90(var uParam0, int iParam1)
{
	func_210(uParam0, iParam1);
}

int func_91()
{
	return Global_1899515;
}

bool func_92(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_93(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_146() - fParam1);
	func_211(uParam0, 1);
	func_212(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_94(int iParam0)
{
	return iParam0 != -15;
}

void func_95(int iParam0)
{
	Global_40.f_11623[iParam0 /*8*/].f_5++;
	Global_40.f_11623[iParam0 /*8*/].f_2 = func_91();
}

bool func_96(int iParam0)
{
	return false;
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_98(var uParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *uParam0);
		return true;
	}
	return false;
}

void func_99(int iParam0)
{
}

void func_100(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_101(int iParam0)
{
	if (func_83(Global_35, bLocal_562, 0, 1))
	{
		return true;
	}
	return false;
}

void func_102(var uParam0, bool bParam1, var uParam2, int iParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];

	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!func_54(uParam4))
	{
		func_93(uParam4, 0f);
	}
	else if (func_137(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, bParam1, true, 0))
		{
			if (func_213(uParam0, &uVar0, &uVar2, 5, bParam1, 0, 0, -1) > 0)
			{
				iParam3->f_3 = uVar0[0];
				func_93(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			iParam3->f_3 = Global_35;
			func_93(uParam4, 0f);
		}
	}
	*iParam3 = { 0f, 0f, 0f };
	iParam3->f_4 = 21030;
	iParam3->f_8 = 4;
	iParam3->f_17 = 2;
	iParam3->f_18 = 1;
	iParam3->f_19 = 3;
	iParam3->f_20 = 1;
	iParam3->f_21 = 3;
	iParam3->f_22 = 1;
	iParam3->f_13 = 3;
	iParam3->f_7 = iParam5;
	IK::_0x66F9EB44342BB4C5(*uParam2, iParam3);
}

bool func_103(int iParam0)
{
	func_214(Local_14.f_3, &(Local_14.f_134), 4096, 2, 0);
	if (func_16(&(Local_14.f_146), 2) || func_215(&Local_14) == 4)
	{
		func_89(&(Local_14.f_134), 1024);
	}
	func_216(Local_14.f_3, &(Local_14.f_134), 4194304, 8388608, 16777216, "SPECIAL_PED_LIGHTWEIGHT_1_1", "SPECIAL_PED_GENERIC_INTERACT_FOCUS", "CrierBubble", "CrierConvo");
	func_217(Local_14.f_134, 33554432, 1, 1);
	if (func_215(&Local_14) == 0)
	{
		if (func_88(Local_14.f_134, 1024) && !func_88(Local_14.f_134, 512))
		{
			func_89(&(Local_14.f_134), 512);
			func_218(1);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
		AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
		return true;
	}
	else if (!func_88(Local_14.f_134, 512))
	{
		if (!func_83(Global_35, Local_14.f_102, 0, 1))
		{
			if (func_219(&(Local_14.f_3), &uLocal_682, &uLocal_683, &uLocal_686, 4, 0, 7000, 0))
			{
			}
		}
		if (iLocal_580 == 1 && func_86())
		{
			func_218(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
			AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
			return true;
		}
	}
	if (func_220(117) && !func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 32768);
		func_90(&(Local_14.f_134), 64);
		func_89(&(Local_14.f_134), 1024);
		func_95(2);
		func_89(&(Local_14.f_134), -2147483648);
		func_17(&(Local_14.f_146), 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3) || ENTITY::IS_ENTITY_DEAD(Local_14.f_3))
	{
		return true;
	}
	if (Local_14.f_527 && func_221(&(Local_14.f_506)))
	{
		return true;
	}
	return false;
}

void func_104(var uParam0)
{
	switch (uParam0->f_349)
	{
		case 1:
			if (func_222(uParam0, &(uParam0->f_181), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_181.f_6);
					Stack.Push(uParam0->f_181.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_181.f_10);
					Stack.Push(uParam0->f_181.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 4))
				{
					Stack.Push(&(uParam0->f_265));
					Stack.Push(uParam0->f_181.f_8);
					Stack.Push(uParam0->f_181.f_8.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 3, 1);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_181.f_4);
					Stack.Push(uParam0->f_181.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 2, 1);
				}
				else
				{
					Stack.Push(&(uParam0->f_181));
					Stack.Push(uParam0->f_181.f_2);
					Stack.Push(uParam0->f_181.f_2.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 2:
			if (func_222(uParam0, &(uParam0->f_237), uParam0->f_349))
			{
				if (!uParam0->f_353)
				{
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_237.f_6);
						Stack.Push(uParam0->f_237.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 4, 1);
					}
					else if (func_16(uParam0, 8))
					{
						Stack.Push(&(uParam0->f_321));
						Stack.Push(uParam0->f_237.f_10);
						Stack.Push(uParam0->f_237.f_10.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 5, 0);
					}
					else if (func_16(uParam0, 4))
					{
						Stack.Push(&(uParam0->f_265));
						Stack.Push(uParam0->f_237.f_8);
						Stack.Push(uParam0->f_237.f_8.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 3, 1);
					}
					else
					{
						if (func_223(uParam0->f_237.f_2))
						{
							Stack.Push(&(uParam0->f_181));
							Stack.Push(uParam0->f_237.f_2);
							Stack.Push(uParam0->f_237.f_2.f_1);
							Stack.Push(&(uParam0->f_209));
							Call_Loc(uParam0->f_357);
						}
						func_155(uParam0, 1, 1);
					}
				}
				else if (uParam0->f_354)
				{
					if (uParam0->f_355)
					{
						func_155(uParam0, 6, 1);
					}
					else
					{
						func_155(uParam0, 0, 1);
					}
				}
				else
				{
					if (func_223(uParam0->f_237.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_237.f_2);
						Stack.Push(uParam0->f_237.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 3:
			if (func_222(uParam0, &(uParam0->f_265), uParam0->f_349))
			{
				if (func_16(uParam0, 2))
				{
					Stack.Push(&(uParam0->f_293));
					Stack.Push(uParam0->f_265.f_6);
					Stack.Push(uParam0->f_265.f_6.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 4, 1);
				}
				else if (uParam0->f_353 && func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else if (func_16(uParam0, 8))
				{
					Stack.Push(&(uParam0->f_321));
					Stack.Push(uParam0->f_265.f_10);
					Stack.Push(uParam0->f_265.f_10.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 5, 0);
				}
				else if (func_16(uParam0, 1))
				{
					Stack.Push(&(uParam0->f_237));
					Stack.Push(uParam0->f_265.f_4);
					Stack.Push(uParam0->f_265.f_4.f_1);
					Stack.Push(&(uParam0->f_209));
					Call_Loc(uParam0->f_357);
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 2, 1);
				}
				else
				{
					if (func_223(uParam0->f_265.f_2))
					{
						Stack.Push(&(uParam0->f_181));
						Stack.Push(uParam0->f_265.f_2);
						Stack.Push(uParam0->f_265.f_2.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
					}
					func_155(uParam0, 1, 1);
				}
			}
			break;
		case 4:
			if (func_222(uParam0, &(uParam0->f_293), uParam0->f_349))
			{
				if (uParam0->f_355)
				{
					func_155(uParam0, 6, 1);
				}
				else
				{
					func_155(uParam0, 0, 1);
				}
			}
			break;
		case 5:
			if (!uParam0->f_356)
			{
				if (func_222(uParam0, &(uParam0->f_321), uParam0->f_349))
				{
					uParam0->f_356 = 1;
					if (func_16(uParam0, 2))
					{
						Stack.Push(&(uParam0->f_293));
						Stack.Push(uParam0->f_321.f_6);
						Stack.Push(uParam0->f_321.f_6.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 4, 0);
					}
					else if (uParam0->f_353 && func_16(uParam0, 1))
					{
						Stack.Push(&(uParam0->f_237));
						Stack.Push(uParam0->f_321.f_4);
						Stack.Push(uParam0->f_321.f_4.f_1);
						Stack.Push(&(uParam0->f_209));
						Call_Loc(uParam0->f_357);
						uParam0->f_356 = 0;
						func_155(uParam0, 2, 0);
					}
					else if (func_16(uParam0, 8))
					{
					}
					else
					{
						uParam0->f_356 = 0;
						func_155(uParam0, 1, 0);
					}
				}
			}
			else if (func_16(uParam0, 2))
			{
				Stack.Push(&(uParam0->f_293));
				Stack.Push(uParam0->f_321.f_6);
				Stack.Push(uParam0->f_321.f_6.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 4, 0);
			}
			else if (uParam0->f_353 && func_16(uParam0, 1))
			{
				Stack.Push(&(uParam0->f_237));
				Stack.Push(uParam0->f_321.f_4);
				Stack.Push(uParam0->f_321.f_4.f_1);
				Stack.Push(&(uParam0->f_209));
				Call_Loc(uParam0->f_357);
				uParam0->f_356 = 0;
				func_155(uParam0, 2, 0);
			}
			else if (func_16(uParam0, 8))
			{
			}
			else
			{
				uParam0->f_356 = 0;
				func_155(uParam0, 1, 0);
			}
			break;
		case 6:
			func_224(uParam0);
			func_155(uParam0, 0, 1);
			break;
		case 0:
			break;
	}
}

int func_105(var uParam0)
{
	return 1;
}

int func_106(var uParam0)
{
	return 1;
}

int func_107(var uParam0)
{
	return 1;
}

var func_108(int iParam0)
{
	return Global_40.f_11623[iParam0 /*8*/];
}

int func_109(int iParam0)
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

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_225())
	{
		iVar2 = func_225();
	}
	iVar5 = func_226(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_227(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_227(iVar6) == 0)
			{
				return func_228(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_228(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_111(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_112(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_229(iParam0);
}

struct<4> /*32*/ func_113(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
					switch (iParam2)
					{
						case 0:
							Var0 = { 1992.478f, -370.7957f, 40.79723f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { 2015.352f, -327.9001f, 40.61312f };
							Var0.f_3 = 0f;
							break;
						case 2:
							Var0 = { 2048.973f, -308.3546f, 40.71767f };
							Var0.f_3 = 0f;
							break;
						case 3:
							Var0 = { 1988.401f, -327.9046f, 40.52593f };
							Var0.f_3 = 0f;
							break;
						case 4:
							Var0 = { 2043.473f, -299.7293f, 40.62843f };
							Var0.f_3 = 0f;
							break;
					}
					break;
				case 5:
					Var0 = { 2008.711f, -330.3677f, 40.6611f };
					Var0.f_3 = 0f;
					break;
			}
			break;
		case 1:
			Var0 = { 2434.052f, -1224.941f, 45.8519f };
			Var0.f_3 = -118f;
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Var0 = { -3704.056f, -2618.024f, -14.9192f };
					Var0.f_3 = 23.3026f;
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 1:
							Var0 = { -3644.674f, -2615.925f, -14.8451f };
							Var0.f_3 = 349.841f;
							break;
						case 2:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
						case 3:
							Var0 = { -3704.056f, -2618.024f, -14.9192f };
							Var0.f_3 = 23.3026f;
							break;
					}
					break;
			}
			break;
		case 3:
			Var0 = { -1791.806f, -422.4149f, 154.8645f };
			Var0.f_3 = 205.9765f;
			break;
		case 4:
			switch (func_230(4))
			{
				case 3:
					Var0 = { 502.0502f, 1284.979f, 181.4051f };
					Var0.f_3 = 114.5882f;
					break;
				case 9:
					Var0 = { 414.5646f, 412.7333f, 107.6299f };
					Var0.f_3 = 352.4153f;
					break;
				case 10:
					Var0 = { 2794.157f, 1406.62f, 82.3539f };
					Var0.f_3 = 65.0766f;
					break;
				case 13:
					Var0 = { -5342.929f, -2947.815f, 0.80696f };
					Var0.f_3 = 20.08f;
					break;
				case 4:
					Var0 = { -1208.554f, -1229.683f, 74.7918f };
					Var0.f_3 = 19.5942f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					Var0 = { 888.6843f, 1276.612f, 234.0975f };
					Var0.f_3 = 321.3007f;
					break;
				case 1:
					Var0 = { 865.601f, 1248.82f, 179.7602f };
					Var0.f_3 = 321.3007f;
					break;
			}
			break;
		case 7:
			Var0 = { 2016.26f, 623.0106f, 158.6706f };
			Var0.f_3 = -167.98f;
			break;
		case 5:
			Var0 = { -1502.098f, 2458.125f, 417.4865f };
			Var0.f_3 = 160.0872f;
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
				case 1:
					Var0 = { 2547.377f, -1216.046f, 52.3168f };
					Var0.f_3 = 87.45f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					Var0 = { -326.079f, 765.2856f, 121.6327f };
					Var0.f_3 = 352.3531f;
					break;
			}
			break;
		case 10:
			Var0 = { 2673.46f, -1391.259f, 47.50816f };
			Var0.f_3 = 316.45f;
			break;
		case 11:
			switch (func_231(11))
			{
				case 105:
					Var0 = { 1423.438f, -1381.801f, 80.8106f };
					Var0.f_3 = 352.6983f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
					switch (func_230(11))
					{
						case 12:
							Var0 = { -2338.21f, -1271.362f, 147.062f };
							Var0.f_3 = 356.6931f;
							break;
						case 11:
							Var0 = { 1295.802f, -200.3015f, 99.0642f };
							Var0.f_3 = 1.8815f;
							break;
						case 10:
							Var0 = { 2428.864f, 1015.729f, 85.6131f };
							Var0.f_3 = 304.652f;
							break;
						case 15:
							Var0 = { -3157.477f, -2981.991f, 4.6224f };
							Var0.f_3 = 86.239f;
							break;
					}
					Jump @3114; //curOff = 1587
					switch (iParam1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
							Var0 = { 1702.736f, 2168.096f, 318.9191f };
							Var0.f_3 = 180.6669f;
							break;
					}
					Jump @3114; //curOff = 1653
					switch (iParam1)
					{
						case 0:
							Var0 = { -312.9856f, 808.8508f, 117.9822f };
							Var0.f_3 = 197.2573f;
							break;
					}
					Jump @3114; //curOff = 1701
					Var0 = { 1320.745f, -1291.739f, 75.14026f };
					Var0.f_3 = 68.748f;
					Jump @3114; //curOff = 1732
					switch (func_230(15))
					{
						case 7:
						case 9:
							Var0 = { -727.395f, 686.1953f, 58.2244f };
							Var0.f_3 = 177.0399f;
							break;
						case 13:
							Var0 = { -6122.201f, -3803.751f, -35.2455f };
							Var0.f_3 = 181.815f;
							break;
						case 10:
							Var0 = { 2183.348f, 1502.819f, 83.6009f };
							Var0.f_3 = 0f;
							break;
						case 1:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
						default:
							Var0 = { -1891.265f, -289.866f, 176.457f };
							Var0.f_3 = 266.9828f;
							break;
					}
					Jump @3114; //curOff = 1928
					Var0 = { 2636.429f, -1229.537f, 52.3795f };
					Var0.f_3 = 358.7895f;
					Jump @3114; //curOff = 1959
					Var0 = { 2943.588f, 1336.999f, 43.22713f };
					Var0.f_3 = 76.2778f;
					Jump @3114; //curOff = 1990
					switch (iParam1)
					{
						case 0:
							Var0 = { -1812.186f, -367.3066f, 161.8834f };
							Var0.f_3 = 167.5016f;
							break;
						case 1:
							Var0 = { -1807.89f, -371.5062f, 161.8662f };
							Var0.f_3 = 167.5016f;
							break;
						case 2:
							Var0 = { -1800.857f, -357.3966f, 162.9631f };
							Var0.f_3 = 167.5016f;
							break;
					}
					Jump @3114; //curOff = 2112
					switch (iParam2)
					{
						case 0:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
						case 1:
							Var0 = { -192.9274f, 625.6254f, 113.5786f };
							Var0.f_3 = 145.05f;
							break;
						default:
							Var0 = { -256.365f, 753.5781f, 116.0851f };
							Var0.f_3 = 284.0192f;
							break;
					}
					Jump @3114; //curOff = 2228
					Var0 = { -2725.277f, 709.9713f, 173.0266f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2259
					Var0 = { 2706.282f, 2369.827f, 170.2336f };
					Var0.f_3 = 359.6814f;
					Jump @3114; //curOff = 2290
					switch (iParam1)
					{
						case 0:
							Var0 = { -5511.039f, -2929.552f, -3.278f };
							Var0.f_3 = -131.907f;
							break;
						case 1:
							Var0 = { -5497.666f, -2957.426f, -1.708f };
							Var0.f_3 = 12.912f;
							break;
						case 2:
							Var0 = { -5493.435f, -2940.703f, -1.471f };
							Var0.f_3 = 124.069f;
							break;
					}
					Jump @3114; //curOff = 2412
					switch (func_230(23))
					{
						case 0:
							Var0 = { 1784.089f, -946.648f, 40.7225f };
							Var0.f_3 = 254.7072f;
							break;
						case 2:
							Var0 = { 2445.841f, -463.2956f, 41.1018f };
							Var0.f_3 = 126.5562f;
							break;
					}
					Jump @3114; //curOff = 2501
					switch (iParam1)
					{
						case 0:
							Var0 = { -2233.602f, -2850.517f, 62.7628f };
							Var0.f_3 = 208.7791f;
							break;
						case 1:
							Var0 = { -3198.999f, -2538.554f, 66.5911f };
							Var0.f_3 = 292.1099f;
							break;
						case 2:
							Var0 = { -2927.12f, -2860.494f, 85.7312f };
							Var0.f_3 = 123.2795f;
							break;
						case 3:
							Var0 = { -3267.86f, -3416.677f, 39.5041f };
							Var0.f_3 = 332.5893f;
							break;
						case 4:
							Var0 = { -3572.794f, -3565.222f, 33.505f };
							Var0.f_3 = 260.2986f;
							break;
						case 5:
							Var0 = { -4399.393f, -3606.746f, 48.6452f };
							Var0.f_3 = 348.5519f;
							break;
						case 6:
							Var0 = { -4988.676f, -4060.992f, 1.0884f };
							Var0.f_3 = 163.9257f;
							break;
						case 7:
							Var0 = { -5333.317f, -3534.569f, 2.0586f };
							Var0.f_3 = 306.198f;
							break;
						case 8:
							Var0 = { -5374.994f, -4053.294f, -6.2292f };
							Var0.f_3 = 170.3096f;
							break;
						case 9:
							Var0 = { -5413.131f, -2606.156f, 2.5597f };
							Var0.f_3 = 255.0981f;
							break;
						case 10:
							Var0 = { -4956.249f, -3198.202f, 26.3575f };
							Var0.f_3 = 292.8281f;
							break;
						case 11:
							Var0 = { -4594.695f, -3045.041f, 6.5776f };
							Var0.f_3 = 4.7478f;
							break;
					}
					Jump @3114; //curOff = 2956
					Var0 = { 2368.588f, -859.9452f, 42.0223f };
					Var0.f_3 = 198.7042f;
					Jump @3114; //curOff = 2987
					Var0 = { -345.2797f, 794.6578f, 115.1777f };
					Var0.f_3 = 28.0552f;
					Jump @3114; //curOff = 3018
					Var0 = { 2644.443f, -1207.946f, 52.3368f };
					Var0.f_3 = 199.0776f;
					Jump @3114; //curOff = 3049
					Var0 = { 3025.557f, 1779.699f, 83.2056f };
					Var0.f_3 = 142.8609f;
					Jump @3114; //curOff = 3080
					Var0 = { 2778.292f, -1313.274f, 45.89664f };
					Var0.f_3 = 216.3798f;
					return Var0;
				}

void func_114()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, vLocal_546.f_3 };
	func_232(&(Local_14.f_146[0 /*36*/]), "script@specialped@pdatc_town_crier@ig@ig_1@pdatc_ig1_callout", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(&(Local_14.f_146[1 /*36*/]), "script@specialped@pdatc_town_crier@ig@ig_2@pdatc_ig2_cnv1", vLocal_546, vVar0, "pl_IG2_PDATC_CNV1_HeyPartner", 0, 0, 0, 0, 0);
	func_232(&(Local_14.f_146[2 /*36*/]), "script@specialped@pdatc_town_crier@ig@ig_3@pdatc_ig3_cnv2", vLocal_546, vVar0, "pl_IG3_PDATC_CNV2_HeyFriend", 0, 0, 0, 0, 0);
	func_232(&(Local_14.f_146[3 /*36*/]), "script@specialped@pdatc_town_crier@ig@ig_6@pdatc_ig6_linger", vLocal_546, vVar0, "PL_IG1_PDATC_CALLOUT_Idle", 0, 0, 0, 0, 0);
	func_232(&(Local_14.f_146[4 /*36*/]), "script@specialped@pdatc_town_crier@ig@ig_7@pdatc_ig7_aggro", vLocal_546, vVar0, "pl_IG7_PDATC_AGGRO_HeyImTrying", 0, 0, 0, 0, 0);
}

void func_115(var uParam0, int iParam1)
{
	uParam0->f_355 = iParam1;
}

int func_116(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_233(iParam1);
	iVar1 = func_234(iParam2);
	func_25(uParam0);
	if (func_235(iVar1))
	{
		func_89(&(Local_14.f_134), 64);
	}
	else
	{
		func_90(&(Local_14.f_134), 64);
	}
	func_90(&(Local_14.f_134), 2097152);
	func_236(iVar1 == 4);
	switch (iVar0)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_239(uParam0, 36949);
					break;
				case 1:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37247);
					break;
				case 2:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37011);
					func_243(uParam0, 37078);
					func_239(uParam0, 37284);
					break;
				case 3:
					func_237(uParam0, "", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "", 0, "", "", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 37321);
					break;
				case 4:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 37459);
					break;
				case 5:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 6:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(0), func_154(5), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_243(uParam0, 37592);
					func_239(uParam0, 36949);
					func_89(&(Local_14.f_134), 2097152);
					break;
				case 7:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Plague", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Plague", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 8:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "pl_IG1_PDATC_CALLOUT_TownIsSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 9:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlagueInTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlagueInTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 10:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_StayAway", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_StayAway", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 11:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Cholera", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Cholera", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 12:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_PlaceUnwell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PlaceUnwell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 13:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_TownIsSick02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_TownIsSick02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 14:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetOuttaHere", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetOuttaHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 15:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_BeCareful", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_BeCareful", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 16:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_GetTheHell", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_GetTheHell", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 17:
					func_237(uParam0, "pl_IG1_PDATC_CLLOUT_ArmadilloSick", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CLLOUT_ArmadilloSick", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 18:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_SicknessTown", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_SicknessTown", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 19:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFever", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFever", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 20:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_ScarletFev02", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_ScarletFev02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 21:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(22), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet01", "s_IG1_PDATC_CALLOUT_PamphletIdle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 22:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph01Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphletTakeInspect", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 23:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(24), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamphlet02", "s_IG1_PDATC_CALLOUT_PamphIdle02", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 24:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph02Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake02", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 25:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Offer", func_153(iVar0), func_154(iVar1), func_153(0), func_154(26), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_Pamplet03", "s_IG1_PDATC_CALLOUT_PamphIdle03", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37654);
					func_243(uParam0, 37744);
					func_239(uParam0, 37826);
					func_89(&(Local_14.f_134), 32);
					break;
				case 26:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Pamph03Take", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_CALLOUT_PamphTake03", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38179);
					func_239(uParam0, 38314);
					break;
				case 27:
					func_237(uParam0, "pl_IG1_PDATC_CALLOUT_Refuse", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "b_breakout", 0, "s_IG1_PDATC_Refuse", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_243(uParam0, 38410);
					func_239(uParam0, 38314);
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 28:
					func_237(uParam0, "pl_IG2_PDATC_CNV1_HeyPartner", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG2_PDATC_CNV1_HeyPartner", "s_IG2_PDATC_CNV1_HeyPartner", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 29:
					func_237(uParam0, "pl_IG3_PDATC_CNV2_HeyFriend", func_153(iVar0), func_154(iVar1), func_153(0), func_154(6), 0, "", 0, "", 0, "s_IG3_PDATC_CNV2_HeyFriend", "s_IG3_PDATC_CNV2_HeyFriend", 3, 0.85f);
					func_241(uParam0, 37011);
					func_243(uParam0, 38491);
					func_239(uParam0, 38548);
					func_258(1);
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 30:
					func_237(uParam0, "PL_IG1_PDATC_CALLOUT_Idle", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG1_PDATC_CALLOUT_Idle", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					func_239(uParam0, 36949);
					break;
				case 31:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_AreYouHearing", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_AreYouHearing", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 32:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_DontStayHere", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_DontStayHere", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 33:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_LeaveGo", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_LeaveGo", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 34:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_PleaseSir", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_PleaseSir", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
				case 35:
					func_237(uParam0, "PL_IG6_PDATC_LINGER_UShouldLeave", func_153(iVar0), func_154(iVar1), func_153(3), func_154(30), 0, "", 0, "b_breakout", 0, "S_IG6_PDATC_LINGER_UShouldLeave", "S_IG1_PDATC_CALLOUT_Idle", 2, 1064514355 /* Float: 0.95f */);
					func_241(uParam0, 37566);
					break;
			}
			break;
		case 4:
			if (func_88(Local_14.f_134, 262144))
			{
				switch (iVar1)
				{
					case 36:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_HeyImTrying", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_HeyImTrying", "s_IG7_PDATC_AGGRO_HeyImTrying", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 37:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_TheFeversTaken", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_TheFeversTaken", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
					case 38:
						func_237(uParam0, "pl_IG7_PDATC_AGGRO_ThisIsTheThank", func_153(iVar0), func_154(iVar1), func_153(-1), func_154(-1), 0, "", 0, "", 0, "s_IG7_PDATC_AGGRO_ThisIsTheThank", "s_IG7_PDATC_AGGRO_TheFeversTaken", 3, 0.95f);
						func_241(uParam0, 38750);
						break;
				}
			}
			else
			{
				func_237(uParam0, "", func_153(-1), func_154(-1), func_153(-1), func_154(-1), 0, "", 0, "b_breakout", 1, "", "", 3, 1064514355 /* Float: 0.95f */);
				func_241(uParam0, 38750);
			}
			break;
	}
	if ((func_223(iParam1) && func_260(iParam2)) && iVar1 < 36)
	{
		func_261(uParam0, func_153(0), func_154(5));
		if (func_262(iVar1))
		{
			if (!func_263())
			{
				if (Local_14.f_1 == 0)
				{
					func_264(uParam0, func_153(2), func_154(29));
				}
				else
				{
					func_264(uParam0, func_153(1), func_154(28));
				}
			}
			else if (!func_88(Local_14.f_134, 32) && !func_265())
			{
				func_266(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_119(bool bParam0)
{
	bool bVar0;

	bVar0 = func_267();
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		if (bParam0)
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 1);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, bVar0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(bVar0, Global_35, true);
		}
		else
		{
			PATHFIND::_0x6DAD6630AE4A74CB(bVar0, 0);
		}
	}
}

void func_120(var uParam0)
{
	if (uParam0->f_3)
	{
		if (func_174(uParam0->f_5))
		{
			func_175(&(uParam0->f_5), 1, 1);
		}
		if (func_174(uParam0->f_6))
		{
			func_175(&(uParam0->f_6), 1, 1);
		}
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_9 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_10 = 0;
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_7 = "";
		uParam0->f_8 = "";
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
		uParam0->f_13 = -1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_STOP("MissionChoice");
		}
		uParam0->f_2 = 0;
		AUDIO::_0x9428447DED71FC7E("player_decision_moment_scenes");
		HUD::_UIPROMPT_CLEAR_HORIZONTAL_ORIENTATION(uParam0->f_15);
	}
}

void func_121(var uParam0, var uParam1, int iParam2, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return;
		}
		if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
		{
			return;
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(*uParam1);
}

void func_122()
{
	func_268(&(Local_14.f_3), &(Local_14.f_41[0 /*59*/]), &(Local_14.f_41[0 /*59*/].f_21), 1, 1);
}

void func_123(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 7, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 3, 2, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bParam0, 4, 2, true);
}

void func_124()
{
	if (HUD::IS_RADAR_HIDDEN())
	{
		MAP::DISPLAY_RADAR(true);
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_125(int iParam0)
{
	vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
	func_269(vVar0, 0);
}

void func_126(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_270(&Global_0, 8);
	}
	if (!func_271() || func_208() != -1)
	{
		return;
	}
	func_270(&Global_0, 1);
}

void func_127()
{
	AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
}

bool func_128(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_129(var uParam0, float fParam1)
{
	if (!func_54(uParam0))
	{
		return false;
	}
	if (func_61(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_131(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_132(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_209(Global_1835011[iParam0 /*74*/].f_1);
}

int func_133(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_272(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_134(int iParam0)
{
	int iVar0;

	iVar0 = func_273();
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

bool func_135(var uParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (func_274(iParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_136(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
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
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!func_275(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
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
		if (!func_206(iVar1, 0))
		{
			func_276(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

int func_137(var uParam0)
{
	if (!func_54(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_145(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_196() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

bool func_138()
{
	return Global_1392040.f_6;
}

bool func_139()
{
	if (Global_1914319.f_18941.f_17)
	{
		return true;
	}
	return false;
}

bool func_140(int iParam0)
{
	return false;
}

bool func_141(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_142(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_143(int iParam0)
{
	if (!func_142(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_144(var uParam0)
{
	func_93(uParam0, 0f);
}

bool func_145(var uParam0)
{
	return func_128(*uParam0, 2);
}

float func_146()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_147(bool bParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return 0;
	}
	vVar0 = { VOLUME::_GET_VOLUME_COORDS(bParam0) };
	vVar3 = { VOLUME::_GET_VOLUME_SCALE(bParam0) };
	iVar6 = func_277(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_148(var uParam0, bool bParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	if (!bParam8)
	{
		*uParam0 = func_278(bParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = func_278(bParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

bool func_149(int iParam0, int iParam1, int iParam2, vector3 vParam3)
{
	if (*iParam2)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam3, true, true, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam2 = 1;
		return true;
	}
	return false;
}

void func_150(int iParam0, int iParam1)
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

void func_151(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(iParam2, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), fParam3))
	{
		return;
	}
	*uParam1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam2, *uParam0, fParam4, fParam3, fParam3, -1f, -1f, 180f, false, false, -1, -1);
}

void func_152()
{
	func_279(&(Local_14.f_146[0 /*36*/]), Local_14.f_3, "CS_TOWNCRIER", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(&(Local_14.f_146[1 /*36*/]), Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(&(Local_14.f_146[2 /*36*/]), Local_14.f_3, "IG_TownCrier", Global_35, "JOHN", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(&(Local_14.f_146[3 /*36*/]), Local_14.f_3, "TownCrier", Global_35, "ARTHUR", "ARTHUR", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
	func_279(&(Local_14.f_146[4 /*36*/]), Local_14.f_3, "IG_TownCrier", Global_35, "player_zero", "player_zero", 0, 0, 0, 0, 0, 0, iLocal_558, "p_cs_stackScarlet01x", iLocal_560, "p_bell05x", 0, 0);
}

int func_153(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 100)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_155(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_349 = iParam1;
	func_280(uParam0, 0, 1);
	if (bParam2)
	{
		func_281(uParam0);
	}
}

void func_156(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	iParam0->f_101 = iParam1;
}

void func_157(int iParam0, int iParam1, int iParam2, char[4] cParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!func_282(iParam1))
	{
		return;
	}
	if (!func_283(iParam2))
	{
		return;
	}
	func_284(&(iParam0->f_41[iParam1 /*59*/].f_21[iParam2 /*17*/]), cParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		func_285(&(iParam0->f_41[iParam1 /*59*/]), iParam2, 1);
	}
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		func_286(iParam0, iParam1);
	}
	iParam0->f_41[iParam1 /*59*/].f_56 = iParam2;
}

void func_160(int iParam0, int iParam1, int iParam2)
{
	if (!func_282(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_57 = iParam2;
}

void func_161(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_287(uParam0, iParam1, sParam2))
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

float func_162(int iParam0)
{
	return iParam0->f_142;
}

int func_163(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_288(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_289(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_144(&(iParam1->f_13));
		}
		if (func_290(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_291(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_163(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_75(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_292(*uParam0, 1, 1);
						}
					}
					else if (func_293(iParam1, 22))
					{
						func_292(*uParam0, 0, 1);
					}
				}
				if (func_294(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_295(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
					if (func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_298(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_299(iParam1, uParam3, fVar8);
					if (func_300(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_76(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_294(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_302(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_297(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_295(uParam0, func_294(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_296(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_76(uParam3, 0, 0, 1, 1);
					}
					func_303(iParam1, 1);
				}
				func_299(iParam1, uParam3, fVar8);
				if (func_301(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			func_304(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_164(int iParam0)
{
	if ((((!(VOLUME::DOES_VOLUME_EXIST(iParam0->f_102) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0->f_102, true, 0)) || !PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f)) || (func_263() && func_265())) || iLocal_580 == 1) || bLocal_688)
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != func_158(3, 0, 0))
			{
				func_159(&Local_14, 0, func_158(3, 0, 0), 1);
			}
		}
		return false;
	}
	if ((((((func_88(Local_14.f_134, 64) && func_88(Local_14.f_134, 2097152)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) && !PED::IS_PED_ON_MOUNT(Global_35)) && !func_135(&(iParam0->f_3), &iLocal_712, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !func_307(&(iParam0->f_3), &iLocal_711, 1071644672 /* Float: 1.75f */, 1074790400 /* Float: 2.25f */)) && !func_308())
	{
		if (func_305(&Local_14) == 0)
		{
			if (func_306(&Local_14, 0) != 1)
			{
				func_159(&Local_14, 0, 1, 1);
			}
		}
		return true;
	}
	else if (func_305(&Local_14) == 0)
	{
		if (func_306(&Local_14, 0) != func_158(3, 0, 0))
		{
			func_159(&Local_14, 0, func_158(3, 0, 0), 1);
		}
	}
	return false;
}

bool func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_282(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1 /*59*/].f_58;
	if (!func_283(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

void func_166()
{
	if (!func_88(Local_14.f_134, 33554432))
	{
		func_89(&(Local_14.f_134), 33554432);
	}
	if (!func_88(Local_14.f_134, 8388608))
	{
		func_89(&(Local_14.f_134), 4194304);
		func_89(&(Local_14.f_134), 8388608);
	}
}

void func_167(int iParam0)
{
	if (iParam0 == 0)
	{
		if (func_309())
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
		else
		{
			func_310(Global_35, "GREET_GENERAL", -417894478, Local_14.f_3, 1, 0, 0, 1);
		}
	}
	else if (iParam0 == 1)
	{
		if (func_309())
		{
			if (Local_14.f_1 == 0)
			{
				func_310(Global_35, "INSULT_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
			else
			{
				func_310(Global_35, "INSULT_TIMID_MALE_CONV_PART1", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 2, 1);
			}
		}
		else
		{
			func_310(Global_35, "INSULT_MALE_CONV_PART2", -417894478, Local_14.f_3, 1, 0, 7, 1);
		}
	}
}

char* func_168(var uParam0)
{
	return uParam0;
}

bool func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_174(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return true;
			}
			if (func_311(uParam0->f_6, bParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_170(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_312(iParam0, 13))
	{
		func_313(iParam0, 0);
	}
	else
	{
		func_314(iParam0, 0);
	}
	if (func_174(iParam0->f_6))
	{
		if (bParam2)
		{
			func_175(&(iParam0->f_6), 0, 1);
		}
	}
}

struct<2> /*16*/ func_171(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

int func_172(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_173(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_174(int iParam0)
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

void func_175(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_174(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_315(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_316(iVar0);
	*uParam0 = 0;
}

void func_176(var uParam0, bool bParam1, int iParam2)
{
	func_317(iParam2);
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
		uParam0->f_13 = func_318(0);
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
							func_118(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_319(1))
						{
							func_118(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_319(1) || *uParam0 & 8192 != 0))
				{
					func_117(uParam0, 33554432);
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
			if (func_320(uParam0))
			{
				uParam0->f_15 = func_196();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_196() - uParam0->f_15) > 500)
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
	func_321(uParam0);
}

bool func_177(bool bParam0, var uParam1)
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
			if (!func_322(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_323(bParam0, iVar2) <= func_324(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_178(bool bParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = bParam0;
	}
	if (func_325(iParam2, 1, 1, 1, 0))
	{
		func_118(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_326(uParam1, 1);
	func_327();
}

bool func_179(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_328(bParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_329(uParam1);
			if (func_330(uParam1, bParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_2);
				iVar3 = func_331(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_326(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_326(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_180(bool bParam0, bool bParam1, var uParam2)
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
	if (func_332(bParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_329(uParam2);
		if (func_330(uParam2, bParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2) > func_331(uParam2)
				{
					func_326(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_181(bool bParam0, var uParam1)
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
	if (func_322(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_331(uParam1)
		{
			fVar3 = func_329(uParam1);
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

int func_182(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_333(bParam1, bParam2, bParam3);
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

bool func_183(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_184(var uParam0, bool bParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_334(uParam2);
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
			if (func_192(uParam2, bParam1))
			{
				func_326(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_185(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_12 < IntToFloat(func_335(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_192(uParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_326(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_186(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_336(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, uParam2->f_22))
				{
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, uParam2->f_27))
				{
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar4, false, false);
					if (func_337(bParam1, vVar0, vVar4))
					{
						func_326(uParam2, 1);
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
					func_326(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), uParam2->f_26, &vVar7, false, false);
					if (func_337(bParam1, vVar0, vVar7))
					{
						func_326(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_187(bool bParam0, var uParam1)
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
		if (!func_322(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_338(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_339(Global_1935630.f_34[iVar0]))
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
			if (func_340(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_341(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_342(uParam1, bParam0, fVar1, iVar0))
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

bool func_188(bool bParam0, var uParam1)
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

bool func_189(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_190(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_343(bVar0, &iVar2))
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
	if (func_344(bVar0, bParam0))
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

int func_191(var uParam0, bool bParam1)
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

bool func_192(var uParam0, bool bParam1)
{
	if (func_345(uParam0))
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

bool func_193(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_346(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_194()
{
}

bool func_195(var uParam0, bool bParam1)
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
		if (func_347(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_196();
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
						if (func_348(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_196();
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

int func_196()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_197()
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
	if ((func_196() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_198(var uParam0, bool bParam1)
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
	fVar0 = func_324(uParam0);
	if (uParam0->f_12 > func_349(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_350(bParam1);
	iVar1 = func_351(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_199(bool bParam0, bool bParam1, var uParam2)
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
	return func_352(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_200(bool bParam0, var uParam1)
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
		if (func_353(bParam0, uParam1, 1))
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
					if (!func_354(uParam1, bParam0))
					{
						if (func_348(bVar4, Global_36, 1) < 7f)
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

bool func_201(bool bParam0, var uParam1)
{
	if (!func_355(0))
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

bool func_202(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_196();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_203(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_204(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_196();
	}
	else if (func_196() - uParam1->f_4) > func_356(uParam1)
	{
		return func_357(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_205(var uParam0, bool bParam1)
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

bool func_206(int iParam0, bool bParam1)
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

void func_207(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam0->f_146)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0->f_146[iVar0 /*36*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam0->f_146[iVar0 /*36*/], true, false))
		{
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_14) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_13)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_14, false) == iParam0->f_146[iVar0 /*36*/].f_13)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_14, iParam0->f_146[iVar0 /*36*/].f_13);
				func_358(iParam0->f_146[iVar0 /*36*/].f_13, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_16) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_15)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_16, false) == iParam0->f_146[iVar0 /*36*/].f_15)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_16, iParam0->f_146[iVar0 /*36*/].f_15);
				func_358(iParam0->f_146[iVar0 /*36*/].f_15, 1, 1);
			}
			if ((!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_146[iVar0 /*36*/].f_18) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_146[iVar0 /*36*/].f_17)) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_18, false) == iParam0->f_146[iVar0 /*36*/].f_17)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_146[iVar0 /*36*/], iParam0->f_146[iVar0 /*36*/].f_18, iParam0->f_146[iVar0 /*36*/].f_17);
				func_358(iParam0->f_146[iVar0 /*36*/].f_17, 1, 1);
			}
		}
		iVar0++;
	}
}

int func_208()
{
	return Global_1572887.f_12;
}

bool func_209(int iParam0)
{
	int iVar0;

	iVar0 = func_359(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_210(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_213(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(bParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			bVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(bVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (func_360(bVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(bVar1, "bIgnoreThisPed"))
				{
					if (!func_361(bVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(bVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = bVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_214(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = func_362(iParam3);
	if (fParam4 == 0f)
	{
		if (func_92(iParam0, Global_35, 15f, 1))
		{
			if (!func_97(*iParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					func_100(iParam1, iParam2);
				}
			}
		}
		else if (func_97(*iParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			func_210(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!func_97(*iParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				func_100(iParam1, iParam2);
			}
		}
	}
	else if (func_97(*iParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		func_210(iParam1, iParam2);
	}
}

int func_215(int iParam0)
{
	return iParam0->f_146.f_349;
}

void func_216(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!func_97(*iParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (func_97(*iParam1, iParam3))
	{
		if (!func_97(*iParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), bParam0, sParam6, 0f, 0f, 0f, false, sParam8);
			}
			func_100(iParam1, iParam4);
		}
	}
	else if (func_97(*iParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), bParam0, sParam5, 0f, 0f, 0f, false, sParam7);
		}
		func_210(iParam1, iParam4);
	}
}

void func_217(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_97(uParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		if (bParam3)
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		}
		func_363();
		HUD::_0xC9CAEAEEC1256E54(724769646);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		}
		if (bParam2)
		{
			func_364();
		}
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_218(bool bParam0)
{
	func_207(&Local_14);
	if (bParam0)
	{
		if (!func_88(Local_14.f_134, -2147483648))
		{
			func_365();
		}
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3, false);
	AUDIO::STOP_PED_SPEAKING(Local_14.f_3, false);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	if (!func_88(Local_14.f_134, -2147483648))
	{
		TASK::TASK_FLEE_PED(Local_14.f_3, Global_35, 3, 0, 6000f, -1, false);
	}
	else
	{
		TASK::TASK_FLEE_PED(Local_14.f_3, false, 3, 0, 6000f, -1, false);
	}
	PED::SET_PED_KEEP_TASK(Local_14.f_3, true);
}

bool func_219(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*uParam3 >= iParam4)
	{
		return false;
	}
	if (*uParam1)
	{
		if (!func_54(uParam2))
		{
			func_93(uParam2, 0f);
			return false;
		}
		else if (func_137(uParam2) > iParam6)
		{
			func_62(uParam2);
			*uParam3++;
			*uParam1 = 0;
			return false;
		}
		else
		{
			return false;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return false;
			}
			fParam7 = func_346(*uParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *uParam0);
		*uParam1 = 1;
		return true;
	}
	return false;
}

bool func_220(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_221(var uParam0)
{
	if (((((func_88(*uParam0, 2) || func_88(*uParam0, 4)) || func_88(*uParam0, 16)) || func_88(*uParam0, 128)) || func_88(*uParam0, 1024)) || func_88(*uParam0, 2048))
	{
		return true;
	}
	return false;
}

bool func_222(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_350)
	{
		case 0:
			func_280(uParam0, func_366(uParam0, uParam1), 1);
			break;
		case 1:
			func_280(uParam0, func_367(uParam0, uParam1), 1);
			break;
		case 2:
			func_280(uParam0, func_368(uParam0, uParam1), 1);
			break;
		case 3:
			if (func_369(uParam0, uParam1))
			{
				func_280(uParam0, 4, 1);
			}
			break;
		case 4:
			if (!func_370(uParam0, 2))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_23);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 2);
				}
			}
			else
			{
				func_280(uParam0, 5, 1);
			}
			break;
		case 5:
			if (!func_370(uParam0, 4))
			{
				if (func_372(uParam0, uParam1, iParam2))
				{
					func_371(uParam0, 4);
				}
			}
			if (!func_370(uParam0, 8))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_24);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 8);
				}
			}
			if (func_370(uParam0, 4) && func_370(uParam0, 8))
			{
				func_280(uParam0, 6, 1);
			}
			break;
		case 6:
			if (!func_370(uParam0, 16))
			{
				if (func_373(uParam0, uParam1))
				{
					func_371(uParam0, 16);
				}
			}
			if (!func_370(uParam0, 32))
			{
				Stack.Push(((iParam2 == 5 || (func_16(uParam0, 2) && iParam2 != 4)) || ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)));
				Stack.Push(uParam1);
				Call_Loc(uParam1->f_25);
				if (StackVal || StackVal)
				{
					func_371(uParam0, 32);
				}
			}
			if (func_370(uParam0, 16) && func_370(uParam0, 32))
			{
				func_280(uParam0, 0, 1);
				return true;
			}
			break;
	}
	return false;
}

bool func_223(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

void func_224(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

int func_225()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_227(int iParam0)
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

int func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_374(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_225())
	{
		return -1;
	}
	iVar0 = func_226(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_375(iVar1, 0);
	func_376(iVar1, 0);
	func_377(iVar1, 0);
	func_378(iVar1, 0);
	func_379(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_380(iVar1, iParam4);
	}
	return iVar1;
}

int func_229(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_381())
			{
				case 2:
					return 2;
				case 0:
					return 0;
				case 11:
					return 11;
				case 10:
					return 10;
				default:
					break;
			}
			return -1;
		case 1:
			return 0;
		case 2:
			return 15;
		case 3:
			return 1;
		case 4:
			switch (func_381())
			{
				case 3:
					return 3;
				case 9:
					return 9;
				case 10:
					return 10;
				case 4:
					return 4;
				case 13:
					return 13;
				default:
					break;
			}
			return -1;
		case 6:
			switch (func_381())
			{
				case 3:
					return 3;
				case 6:
					return 6;
				default:
					break;
			}
			return -1;
		case 7:
			return 10;
		case 5:
			return 7;
		case 8:
			return 0;
		case 9:
			return 9;
		case 10:
			return 0;
		case 11:
			switch (func_381())
			{
				case 12:
					return 12;
				case 10:
					return 10;
				case 15:
					return 15;
				case 11:
					return 11;
				case 16:
					return 16;
				case 1:
					return 1;
				case 0:
					return 0;
				default:
					break;
			}
			return -1;
		case 12:
			return 6;
		case 13:
			return 9;
		case 14:
			return 11;
		case 15:
			switch (func_381())
			{
				case 9:
					return 9;
				case 7:
					return 7;
				case 13:
					return 13;
				case 10:
					return 10;
				case 1:
					return 1;
				default:
					break;
			}
			return -1;
		case 16:
			return 0;
		case 17:
			return 10;
		case 18:
			return 1;
		case 19:
			return 9;
		case 20:
			return 1;
		case 21:
			return 10;
		case 22:
			return 13;
		case 23:
			switch (func_381())
			{
				case 0:
					return 0;
				case 2:
					return 2;
				default:
					break;
			}
			return -1;
		case 24:
			switch (func_381())
			{
				case 15:
					return 15;
				case 13:
					return 13;
				case 14:
					return 14;
				case 16:
					return 16;
				default:
					break;
			}
			return -1;
		case 25:
			return 0;
		case 26:
			return 9;
		case 27:
			return 0;
		case 28:
			return 10;
		case 29:
			return 0;
	}
	return -1;
}

int func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 5;
		case 2:
			return 120;
		case 3:
			return 26;
		case 4:
			return -1;
		case 6:
			return -1;
		case 7:
			return -1;
		case 5:
			return -1;
		case 8:
			return 5;
		case 9:
			return 76;
		case 10:
			return 5;
		case 11:
			switch (func_382())
			{
				case 105:
					return 105;
				case 38:
					return 38;
				case 126:
					return 126;
				case 5:
					return 5;
				default:
					break;
			}
			return -1;
		case 12:
			return -1;
		case 13:
			return 76;
		case 14:
			return 105;
		case 15:
			return -1;
		case 16:
			return 5;
		case 17:
			return 78;
		case 18:
			return 26;
		case 19:
			return 76;
		case 20:
			return -1;
		case 21:
			return -1;
		case 22:
			return 115;
		case 23:
			return -1;
		case 24:
			return -1;
		case 25:
			return -1;
		case 26:
			return 76;
		case 27:
			return 5;
		case 28:
			return -1;
		case 29:
			return 5;
	}
	return -1;
}

void func_232(var uParam0, char* sParam1, vector3 vParam2, vector3 vParam5, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		uParam0->f_35 = 1;
		return;
	}
	uParam0->f_1 = sParam1;
	if (!MISC::IS_STRING_NULL(sParam8))
	{
		uParam0->f_2 = sParam8;
	}
	uParam0->f_19 = iParam10;
	uParam0->f_20 = iParam11;
	uParam0->f_21 = iParam12;
	uParam0->f_22 = iParam13;
	uParam0->f_25 = { vParam2 };
	uParam0->f_28 = { vParam5 };
	uParam0->f_31 = iParam9;
	uParam0->f_35 = 0;
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 39)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

bool func_235(int iParam0)
{
	if (func_383(iParam0))
	{
		return true;
	}
	return false;
}

void func_236(bool bParam0)
{
	if (bParam0)
	{
		iLocal_579 = 2;
	}
	else
	{
		iLocal_579 = (iLocal_579 - 1);
		if (iLocal_579 < 0)
		{
			iLocal_579 = 0;
		}
	}
}

void func_237(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, char* sParam9, int iParam10, char* sParam11, char* sParam12, int iParam13, int iParam14)
{
	func_25(uParam0);
	uParam0->f_12 = sParam1;
	*uParam0 = iParam2;
	uParam0->f_1 = iParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_2.f_1 = iParam5;
	uParam0->f_13 = iParam6;
	uParam0->f_14 = sParam7;
	uParam0->f_15 = iParam8;
	uParam0->f_16 = sParam9;
	uParam0->f_17 = iParam10;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		uParam0->f_18 = "s_base";
	}
	else
	{
		uParam0->f_18 = sParam11;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
	{
		uParam0->f_19 = "s_base_end";
	}
	else
	{
		uParam0->f_19 = sParam12;
	}
	uParam0->f_20 = 0;
	uParam0->f_21 = iParam13;
	uParam0->f_22 = iParam14;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
}

int func_238(var uParam0)
{
	switch (iLocal_580)
	{
		case 1:
			return func_384(uParam0);
		default:
			return func_385(uParam0);
	}
	return 1;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_25 = iParam1;
}

int func_240(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		func_386();
		if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_241(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

int func_242(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_PAUSE(Local_14.f_3, 0, 0, 0);
	}
	if (!func_387(Local_14.f_3, Global_35, 0.8f))
	{
		if (!func_388(Local_14.f_3, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_14.f_3, Global_35, 0, -1f, -1f, -1f);
		}
	}
	if (func_386() && func_387(Local_14.f_3, Global_35, 0.8f))
	{
		func_89(&(Local_14.f_134), 134217728);
		return 1;
	}
	return 0;
}

void func_243(var uParam0, int iParam1)
{
	uParam0->f_24 = iParam1;
}

int func_244(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_266(uParam0, 0);
		return 1;
	}
	return 0;
}

int func_245(var uParam0)
{
	if (!func_388(Local_14.f_3, -875674219))
	{
		func_389(uParam0);
		return 1;
	}
	return 0;
}

int func_246(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_RESUME(Local_14.f_3, false, -1, 0);
	}
	else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_14.f_3, sLocal_571, 0, 1058316, -1, 1, 0, -1);
		iLocal_580 = 1;
		if (VOLUME::DOES_VOLUME_EXIST(bLocal_561))
		{
			func_125(bLocal_561);
			VOLUME::_DELETE_VOLUME(bLocal_561);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "CrierBubble");
		PED::SET_PED_CONFIG_FLAG(Local_14.f_3, 153, false);
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_247(var uParam0)
{
	if (!func_88(Local_14.f_134, 536870912) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		func_390();
		func_89(&(Local_14.f_134), 536870912);
	}
	else if (func_88(Local_14.f_134, 536870912) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_14.f_3))
	{
		func_90(&(Local_14.f_134), 536870912);
		return 1;
	}
	return 0;
}

int func_248(var uParam0)
{
	if (func_54(&uLocal_581))
	{
		func_62(&uLocal_581);
	}
	return 1;
}

int func_249(var uParam0)
{
	if (!func_54(&uLocal_581))
	{
		func_144(&uLocal_581);
	}
	if (func_391(&Local_14))
	{
		func_62(&uLocal_581);
		return 1;
	}
	if (func_55(&uLocal_581, 7f))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0)
{
	int iVar0;
	var uVar1;

	if (!func_392(*uParam0, &iVar0))
	{
		return 1;
	}
	if (func_149(&bLocal_559, iLocal_553, &uVar1, vLocal_546 - Vector(20f, 0f, 0f)))
	{
		ENTITY::SET_ENTITY_VISIBLE(bLocal_559, false);
		func_393(&(Local_14.f_146[iVar0 /*36*/]), 0, 0, 0, 0, bLocal_559, "p_cs_pamphlet02x", 1);
		return 1;
	}
	return 0;
}

int func_251(var uParam0)
{
	if ((!ENTITY::IS_ENTITY_VISIBLE(bLocal_559) && func_394(&Local_14)) && func_395(&Local_14) >= 0.05f)
	{
		ENTITY::SET_ENTITY_VISIBLE(bLocal_559, true);
	}
	if (func_370(&(Local_14.f_146), 4))
	{
		func_90(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_252(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!func_88(Local_14.f_134, 8192))
	{
		func_396(&uLocal_690, "SPAH_TAKE", "SPAH_DECLINE", 0, 2, 25000, 0, -1, -1);
		if (func_397(&uLocal_690))
		{
			if (func_398(&uLocal_690))
			{
				if (func_399(&uLocal_690))
				{
					func_89(&(Local_14.f_134), 128);
					func_89(&(Local_14.f_134), 8192);
					func_310(Global_35, "ROB_AGAIN_ACCEPT_OFFER", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					bLocal_688 = true;
					func_120(&uLocal_690);
				}
				else if (func_400(&uLocal_690))
				{
					func_90(&(Local_14.f_134), 64);
					func_90(&(Local_14.f_134), 2097152);
					func_89(&(Local_14.f_134), 8192);
					func_89(&(Local_14.f_134), 256);
					func_310(Global_35, "REJECT_PROSTITUTE_POS", -417894478, Local_14.f_3, 1, "JOHN_PLAYER", 1, 1);
					bLocal_688 = true;
					func_120(&uLocal_690);
					func_401(uParam0, func_153(0), func_154(27));
					return 1;
				}
			}
		}
	}
	else if (func_88(Local_14.f_134, 128))
	{
		bVar1 = WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		if (func_402())
		{
			if (!func_88(Local_14.f_134, 131072))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				func_89(&(Local_14.f_134), 131072);
			}
		}
		else if (iVar0 == joaat("WEAPON_UNARMED") && bVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_253(var uParam0)
{
	if (!func_88(Local_14.f_134, 2048))
	{
		if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
		{
			func_404(joaat("DOCUMENT_PAMPHLET_CHOLERA"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			func_89(&(Local_14.f_134), 2048);
			func_405(1);
			func_119(0);
			func_406();
			func_156(&Local_14, 0);
			func_90(&(Local_14.f_134), 67108864);
			func_89(&(Local_14.f_134), 64);
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0)
{
	int iVar0;

	if (!func_392(*uParam0, &iVar0))
	{
		return func_407(uParam0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_14.f_146[iVar0 /*36*/]) && ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_14.f_146[iVar0 /*36*/], true, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_14.f_146[iVar0 /*36*/], "p_cs_newspaper_03x", bLocal_559);
	}
	OBJECT::DELETE_OBJECT(&bLocal_559);
	return func_407(uParam0);
}

int func_255(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
		return 1;
	}
	return 0;
}

int func_256(var uParam0)
{
	if (!func_88(Local_14.f_134, 134217728))
	{
		if (func_386())
		{
			func_89(&(Local_14.f_134), 134217728);
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_257(var uParam0)
{
	if (func_394(&Local_14) && func_395(&Local_14) >= func_403(uParam0->f_1))
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	if (!func_265() && !func_88(Local_14.f_134, 32))
	{
		func_266(uParam0, 0);
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_258(bool bParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_89(&iLocal_550, 4);
	}
	else
	{
		func_89(&iLocal_550, 8);
	}
	func_408(iLocal_551, iLocal_550);
	func_409(bParam0);
}

int func_259(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_14.f_3))
	{
		TASK::WAYPOINT_PLAYBACK_PAUSE(Local_14.f_3, 0, 0, 0);
	}
	return 1;
}

bool func_260(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 100)
	{
		return false;
	}
	return true;
}

void func_261(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_10 = iParam1;
	uParam0->f_10.f_1 = iParam2;
}

bool func_262(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 20)
	{
		return true;
	}
	return false;
}

bool func_263()
{
	if (Local_14.f_1 == 0 && func_88(iLocal_550, 4))
	{
		return true;
	}
	else if (Local_14.f_1 == 1 && func_88(iLocal_550, 8))
	{
		return true;
	}
	return false;
}

void func_264(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_8.f_1 = iParam2;
}

bool func_265()
{
	if (func_88(iLocal_550, 32))
	{
		return true;
	}
	return false;
}

void func_266(var uParam0, bool bParam1)
{
	if (Local_14.f_1 == 0)
	{
		if (!bParam1)
		{
			func_401(uParam0, func_153(0), func_154(25));
		}
		else
		{
			func_264(uParam0, func_153(0), func_154(25));
		}
	}
	else if (!bParam1)
	{
		func_401(uParam0, func_153(0), func_154(25));
	}
	else
	{
		func_264(uParam0, func_153(0), func_154(25));
	}
}

bool func_267()
{
	return Global_1900383.f_393;
}

void func_268(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_75(uParam0);
		func_304(iParam1, uParam2);
	}
	func_410(*uParam0, 1, bParam4);
}

void func_269(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_411(vParam0))
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
			if (func_412(vVar2, vParam0, 2f, 1))
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

void func_270(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_271()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_272(int iParam0)
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
		iVar0 = func_413(iParam0);
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

int func_273()
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

bool func_274(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, bParam4, *iParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*iParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

bool func_275(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(*iParam0))
	{
		*iParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, bParam6, *iParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (func_414(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*iParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*iParam0);
	return false;
}

void func_276(int iParam0, vector3 vParam1, float fParam4)
{
	if (!func_388(*iParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*iParam0, true, false);
		TASK::TASK_FLEE_COORD(*iParam0, vParam1, 6, 0, fParam4, -1, 0);
	}
}

int func_277(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_411(vParam0))
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
		if (func_415(vParam0))
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
	func_416(iVar0, bParam8);
	return iVar0;
}

bool func_278(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_417(bVar0, bParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

void func_279(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, char* sParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (func_309())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = sParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_280(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_350 = iParam1;
	if (bParam2)
	{
		func_418(uParam0);
	}
}

void func_281(var uParam0)
{
	uParam0->f_352 = 0;
}

bool func_282(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 1)
	{
		return false;
	}
	return true;
}

bool func_283(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	return true;
}

void func_284(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_174(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_419(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_420(iParam0->f_6, iParam0->f_5, 0);
			}
			func_421(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_422(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

void func_285(int* iParam0, int iParam1, bool bParam2)
{
	if (iParam1 > -1)
	{
		iParam0->f_3 = iParam1;
		iParam0->f_7 = 0f;
		iParam0->f_8 = 0f;
		func_423(iParam0, 5);
		if (bParam2)
		{
			func_423(iParam0, 6);
		}
		else
		{
			func_303(iParam0, 6);
		}
	}
}

void func_286(int iParam0, int iParam1)
{
	if (!func_282(iParam1))
	{
		return;
	}
	func_71(&(iParam0->f_41[iParam1 /*59*/]), 0);
}

bool func_287(var uParam0, int iParam1, char* sParam2)
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

void func_288(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

float func_289(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_290(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_424(iParam0, iParam1))
		{
			if (!func_141(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_76(uParam2, 0, 0, 1, 0);
				func_118(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_141(iParam1->f_10, 1))
		{
			func_425(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_117(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_291(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = func_141(iParam4, 32);
		func_426(iParam1, uParam2, 0);
		iVar5 = func_427(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_76(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_141(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_141(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_141(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_141(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_141(iParam4, 8388608) || func_141(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_141(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_141(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_293(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_293(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_141(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, false, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_428(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (func_141(iParam4, 268435456))
			{
				iVar8 = func_429(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_430(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_293(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (func_141(iParam4, 2) || func_141(iParam4, 16))
			{
				func_292(*uParam0, 1, 1);
			}
			else
			{
				func_292(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_292(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_293(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_294(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = (!VOLUME::DOES_VOLUME_EXIST(iParam2) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_431(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_295(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;

	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_432(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_141(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_296(int iParam0)
{
	if (func_141(iParam0, 4))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), true);
	}
	if (func_141(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_141(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_297(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;

	iVar1 = func_433(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_434(Global_35)) || func_435(Global_35)) || func_436(Global_35));
	fVar12 = -1f;
	if (func_54(&(iParam1->f_13)))
	{
		fVar12 = func_61(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_174((uParam4[iVar0 /*17*/])->f_6);
		func_437(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_438(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_439(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_76(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_440(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_426(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_441(iParam1, fParam6, iParam1->f_9))
					{
						func_144(&(iParam1->f_18));
						if (bVar6)
						{
							func_440(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_442(iParam1, fParam2);
	}
	return bVar5;
}

void func_298(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 20))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 21))
			{
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 20);
				MISC::CLEAR_BIT(uParam0[iVar0 /*17*/], 21);
			}
		}
		iVar0++;
	}
}

void func_299(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_443(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_442(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_300(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_444(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_423(iParam1, 0);
				func_426(iParam1, uParam2, func_293(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_301(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_144(&(iParam1->f_18));
			return false;
		}
		else if (func_54(&(iParam1->f_18)))
		{
			func_62(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_54(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return func_55(&(iParam1->f_18), fParam2);
	return true;
}

void func_302(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_437(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_303(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_304(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> /*136*/ sVar1;
	struct<10> /*80*/ sVar22;

	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_426(iParam0, uParam1, 1);
	func_76(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_305(int iParam0)
{
	return iParam0->f_101;
}

int func_306(int iParam0, int iParam1)
{
	return iParam0->f_41[iParam1 /*59*/].f_56;
}

bool func_307(var uParam0, int iParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (func_275(iParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_308()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_445())
	{
		return true;
	}
	return false;
}

bool func_309()
{
	if (func_208() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_310(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_446(iParam0, &Var0);
}

bool func_311(int iParam0, bool bParam1)
{
	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	return !func_447(iParam0, 4);
}

bool func_312(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_313(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_314(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_315(int iParam0)
{
	return iParam0;
}

void func_316(int iParam0)
{
	if (!func_448(iParam0))
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

void func_317(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_449();
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
			func_450(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_318(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_319(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_451(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_320(var uParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_208() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_452(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_452(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_351(iVar0) == -1)
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

void func_321(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_453(uParam0);
	}
}

bool func_322(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_351(bParam2);
	}
	else
	{
		iVar1 = func_350(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_351(bParam0);
	}
	else
	{
		iVar0 = func_350(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_141(*uParam1, 8388608))
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

float func_323(bool bParam0, bool bParam1)
{
	return func_346(bParam0, bParam1, 1, 1);
}

float func_324(var uParam0)
{
	return uParam0->f_26;
}

bool func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_326(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(uParam0, 134217728);
	}
	else
	{
		func_117(uParam0, 134217728);
	}
}

void func_327()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_328(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_346(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_454(bVar0, 0)))
		{
			if (func_455(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_329(var uParam0)
{
	return uParam0->f_17;
}

bool func_330(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_141(*uParam0, 4194304))
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

int func_331(var uParam0)
{
	return uParam0->f_18;
}

bool func_332(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_454(bVar0, 0)))
		{
			if (func_456(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_333(bool bParam0, bool bParam1, bool bParam2)
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

float func_334(var uParam0)
{
	return uParam0->f_23;
}

int func_335(var uParam0)
{
	return uParam0->f_21;
}

int func_336(var uParam0)
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

bool func_337(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_457(bParam0, vParam4, 0.5f))
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

int func_338(bool bParam0)
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
	if (func_458(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_339(int iParam0)
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

bool func_340(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_459(bParam1))
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

bool func_341(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_459(bParam1))
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

bool func_342(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_459(bParam1))
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

bool func_343(bool bParam0, int iParam1)
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

bool func_344(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_460(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_345(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_346(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_347(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_348(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_348(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

float func_349(var uParam0)
{
	return uParam0->f_24;
}

int func_350(bool bParam0)
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

int func_351(bool bParam0)
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

int func_352(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_343(Global_35, &iVar1))
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
		fVar2 = func_346(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_346(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_353(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_451(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_354(uParam1, bVar0))
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
				if (!bParam2 || !func_354(uParam1, bVar1))
				{
					if (func_348(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_354(var uParam0, bool bParam1)
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

bool func_355(int iParam0)
{
	if (func_309())
	{
		return false;
	}
	return func_461(Global_1347702[58 /*49*/].f_15, 1);
}

int func_356(var uParam0)
{
	return uParam0->f_20;
}

int func_357(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

void func_358(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

int func_359(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_413(iParam0);
}

bool func_360(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (!bParam5 && !PED::IS_PED_HUMAN(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(bParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
		{
			return false;
		}
	}
	if (bParam3 && func_462(bParam0))
	{
		return false;
	}
	if (bParam4)
	{
		if (PED::IS_PED_ON_MOUNT(bParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (func_463(bParam0, 0) != -1)
		{
			return false;
		}
	}
	return true;
}

bool func_361(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (bParam0 == (*uParam1)[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_362(int iParam0)
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

void func_363()
{
	Global_1905944.f_5695 = 1;
}

void func_364()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	CAM::_0x8370D34BD2E60B73();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (Global_1935689.f_1)
	{
		func_464(0);
	}
}

void func_365()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar0)
	{
		case 0:
			func_466(&uLocal_584, func_465("SPATC_IG7_1"), 0, -1, 0, 0);
			break;
		case 1:
			func_466(&uLocal_584, func_465("SPATC_IG7_2"), 0, -1, 0, 0);
			break;
		case 2:
			func_466(&uLocal_584, func_465("SPATC_IG7_3"), 0, -1, 0, 0);
			break;
	}
}

int func_366(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	uParam1->f_27 = 0;
	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			func_468(uParam0[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			func_468(uParam0[iVar1 /*36*/], 0);
		}
		return 2;
	}
	return 1;
}

int func_367(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], uParam1->f_12);
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_2);
		}
	}
	return 2;
}

int func_368(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return 4;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return 4;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		func_469(uParam0[iVar1 /*36*/]);
		return 3;
	}
	return 4;
}

bool func_369(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	if (func_467(uParam0, uParam1, 0))
	{
		return true;
	}
	uVar0 = *uParam1;
	if (!func_392(uVar0, &iVar1))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true))
	{
		func_470(uParam0[iVar1 /*36*/]);
		return true;
	}
	return false;
}

bool func_370(var uParam0, int iParam1)
{
	return func_88(uParam0->f_351, iParam1);
}

void func_371(var uParam0, int iParam1)
{
	func_89(&(uParam0->f_351), iParam1);
}

bool func_372(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;

	uVar0 = *uParam1;
	if (func_467(uParam0, uParam1, 0))
	{
		return true;
	}
	if (!func_392(uVar0, &iVar1))
	{
		return true;
	}
	if (uParam1->f_20 >= 5)
	{
		if (func_16(uParam0, 2) && iParam2 != 4)
		{
			func_471(uParam0, uParam1);
			return true;
		}
		else if ((uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
		{
			func_471(uParam0, uParam1);
			return true;
		}
		if (iParam2 != 5)
		{
			if ((!uParam0->f_353 && func_16(uParam0, 1)) && iParam2 != 2)
			{
				func_471(uParam0, uParam1);
				return true;
			}
			if (func_16(uParam0, 4) && iParam2 != 3)
			{
				if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING((uParam0[iVar1 /*36*/])->f_3))
				{
					func_471(uParam0, uParam1);
					return true;
				}
			}
		}
	}
	switch (uParam1->f_20)
	{
		case 0:
			if ((uParam0[iVar1 /*36*/])->f_32)
			{
				uParam1->f_20 = 1;
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				uParam1->f_20 = 2;
			}
			return false;
		case 1:
			if (func_472(Global_35, (*uParam0)[iVar1 /*36*/], (uParam0[iVar1 /*36*/])->f_33, uParam1->f_12, &((uParam0[iVar1 /*36*/])->f_34), 1065353216 /* Float: 1f */, 1, 0, 1))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING((*uParam0)[iVar1 /*36*/], false))
				{
					ANIMSCENE::START_ANIM_SCENE((*uParam0)[iVar1 /*36*/]);
				}
				else
				{
					uParam1->f_20 = 2;
				}
			}
			return false;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12) && !ANIMSCENE::_0x0DF57F86FE71DBE5((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12);
			}
			uParam1->f_20 = 3;
			return false;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				uParam1->f_20 = 4;
			}
			return false;
		case 4:
			if (!ANIMSCENE::_0x1F0E401031E20146((*uParam0)[iVar1 /*36*/], uParam1->f_12))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST((*uParam0)[iVar1 /*36*/], uParam1->f_12, true);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_14))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_14, uParam1->f_13, false);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL((*uParam0)[iVar1 /*36*/], uParam1->f_16, uParam1->f_15, false);
				}
			}
			uParam1->f_20 = 5;
			return false;
		case 5:
			func_471(uParam0, uParam1);
			uParam1->f_20 = 6;
			return false;
		case 6:
			if (iParam2 != 5)
			{
				switch (uParam1->f_21)
				{
					case 0:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 1:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 2:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true))
						{
							return true;
						}
						break;
					case 3:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
					case 4:
						if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true))
						{
							return true;
						}
						break;
					case 5:
						if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_19, true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION((*uParam0)[iVar1 /*36*/], uParam1->f_18, true)) && ANIMSCENE::GET_ANIM_SCENE_PHASE((*uParam0)[iVar1 /*36*/]) >= uParam1->f_22)
						{
							return true;
						}
						break;
				}
				if (ANIMSCENE::IS_ANIM_SCENE_FINISHED((*uParam0)[iVar1 /*36*/], false) || ANIMSCENE::_0x34A0671BE613D3D0((*uParam0)[iVar1 /*36*/]))
				{
					return true;
				}
			}
			else if (!func_16(uParam0, 8))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_373(var uParam0, var uParam1)
{
	func_473(uParam1, &(uParam0->f_209));
	return true;
}

bool func_374(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_375(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_474(iParam0);
	}
	else
	{
		func_475(iParam0, iParam1);
	}
	func_476();
}

void func_376(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_377(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_378(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_379(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_380(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_381()
{
	return Global_1897952.f_41;
}

int func_382()
{
	return Global_1894899.f_2;
}

bool func_383(int iParam0)
{
	if ((((func_262(iParam0) || (iParam0 >= 28 && iParam0 <= 35)) || iParam0 == 21) || iParam0 == 23) || iParam0 == 25)
	{
		return true;
	}
	return false;
}

int func_384(var uParam0)
{
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 1.5f) && !func_479(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_14.f_3, 0))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_83(Global_35, bLocal_565, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_481(uParam0);
		}
		else
		{
			func_481(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(0));
	}
	return 1;
}

int func_385(var uParam0)
{
	if ((((func_88(Local_14.f_134, 32) || func_265()) && func_263()) && iLocal_577 >= 5) || (((Local_14.f_527 && func_482(&(Local_14.f_506))) && !func_221(&(Local_14.f_506))) && !func_16(&(Local_14.f_146), 4)))
	{
		func_401(uParam0, func_153(0), func_154(3));
		return 1;
	}
	if (func_477())
	{
		func_401(uParam0, func_153(0), func_154(4));
		return 1;
	}
	if (((func_478(1) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 1.5f) && !func_479(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (func_263())
		{
			if (!func_88(Local_14.f_134, 32) && !func_265())
			{
			}
			else if (func_263())
			{
				if (!func_54(&uLocal_568))
				{
					func_144(&uLocal_568);
				}
				else if (func_55(&uLocal_568, 6f))
				{
					func_480(uParam0);
					return 1;
				}
			}
		}
	}
	if (func_83(Global_35, bLocal_565, 0, 1))
	{
		if (Local_14.f_1 == 0)
		{
			func_483(uParam0);
		}
		else
		{
			func_483(uParam0);
		}
	}
	else
	{
		func_401(uParam0, func_153(0), func_154(6));
	}
	return 1;
}

bool func_386()
{
	func_484(&(Local_14.f_102), &iLocal_713, &uLocal_714);
	func_119(1);
	return func_485(Local_14.f_3, &uLocal_687, 1.65f, 0.5f, 12000, 0, 1, 256, 0, 1);
}

bool func_387(int iParam0, int iParam1, float fParam2)
{
	return func_457(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_388(bool bParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (!PED::IS_PED_INJURED(bParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(bParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_389(var uParam0)
{
	if (Local_14.f_1 == 0)
	{
		func_401(uParam0, func_153(2), func_154(29));
	}
	else
	{
		func_401(uParam0, func_153(1), func_154(28));
	}
	return 1;
}

void func_390()
{
	int iVar0;

	iVar0 = func_486(1, 3, iLocal_578);
	iVar0 = func_487(iVar0, 1, 2);
	iLocal_578 = iVar0;
	func_310(Local_14.f_3, "PLAYER_LOITERING", -417894478, Global_35, 1, "ARM_TOWN_CRIER", iVar0, 1);
}

bool func_391(var uParam0)
{
	if (((func_16(&(uParam0->f_146), 2) || func_16(&(uParam0->f_146), 4)) || func_16(&(uParam0->f_146), 1)) || func_16(&(uParam0->f_146), 8))
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0, int iParam1)
{
	if (func_223(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

void func_393(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;

	if (uParam0->f_35)
	{
		return;
	}
	bVar0 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		uParam0->f_13 = iParam1;
		uParam0->f_14 = sParam2;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		uParam0->f_15 = iParam3;
		uParam0->f_16 = sParam4;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		uParam0->f_17 = iParam5;
		uParam0->f_18 = sParam6;
		if ((bVar0 && bVar1) && bParam7)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
		}
	}
}

bool func_394(var uParam0)
{
	int iVar0;

	iVar0 = -1;
	if (func_488(uParam0, &iVar0, 1))
	{
		return ANIMSCENE::_0x1F0E401031E20146(iVar0, func_489(uParam0));
	}
	return false;
}

float func_395(var uParam0)
{
	int iVar0;

	switch (uParam0->f_146.f_349)
	{
		case 1:
			iVar0 = uParam0->f_146[uParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			iVar0 = uParam0->f_146[uParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			iVar0 = uParam0->f_146[uParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			iVar0 = uParam0->f_146[uParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0f;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return 0f;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
	{
		return ANIMSCENE::GET_ANIM_SCENE_PHASE(iVar0);
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			func_491(uParam0->f_5, 1);
		}
		func_492(uParam0->f_5, 17, 1, 1);
		func_492(uParam0->f_6, 17, 1, 1);
		func_493(uParam0->f_5, 6, 1);
		func_493(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_UIPROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

bool func_397(var uParam0)
{
	return uParam0->f_3;
}

bool func_398(var uParam0)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;

	if (*uParam0 == 0)
	{
		if (!func_174(uParam0->f_5) || !func_174(uParam0->f_6))
		{
			return false;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945188[uParam0->f_5 /*18*/].f_3) && func_494(uParam0->f_5, 1)) || func_495(uParam0->f_5, 1))
		{
			if (func_496(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return true;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945188[uParam0->f_6 /*18*/].f_3) && func_494(uParam0->f_6, 1)) || func_495(uParam0->f_6, 1))
		{
			if (func_496(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return true;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945188[uParam0->f_5 /*18*/].f_3))
				{
					fVar2 = func_497(uParam0->f_6, 1);
					fVar3 = func_497(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						func_175(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							bVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, bVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						func_175(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							func_491(uParam0->f_5, 1);
						}
						func_493(uParam0->f_5, 6, 1);
						func_493(uParam0->f_6, 6, 1);
						func_492(uParam0->f_5, 17, 1, 1);
						func_492(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945188[uParam0->f_6 /*18*/].f_3))
			{
				fVar2 = func_497(uParam0->f_5, 1);
				fVar3 = func_497(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					func_175(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						bVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, bVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = func_490(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					func_175(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = func_490(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						func_491(uParam0->f_5, 1);
					}
					func_493(uParam0->f_5, 6, 1);
					func_493(uParam0->f_6, 6, 1);
					func_492(uParam0->f_5, 17, 1, 1);
					func_492(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return false;
	}
	return true;
}

bool func_399(var uParam0)
{
	return *uParam0 == 1;
}

bool func_400(var uParam0)
{
	return *uParam0 == 2;
}

void func_401(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = iParam1;
	uParam0->f_2.f_1 = iParam2;
}

bool func_402()
{
	if (Global_1935630.f_44 != 0 && Global_1935630.f_44 != joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

float func_403(var uParam0)
{
	int iVar0;

	iVar0 = func_234(uParam0);
	switch (iVar0)
	{
		case 22:
			return 0.806f;
		case 24:
			return 0.697f;
		case 26:
			return 0.69f;
		case 27:
			return 0.331f;
		case 28:
			return 0.966f;
		case 29:
			return 0.902f;
		default:
			break;
	}
	return 1f;
}

int func_404(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!func_499(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_500(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_501(iParam0, bParam2);
	iVar2 = 0;
	if (func_502(iParam0, 0, 0) == 0)
	{
		if (func_503(iParam0))
		{
			iVar5 = func_504(iParam0);
			iVar6 = func_505(iVar5);
			iVar7 = func_506(iVar6) + 1;
			func_507(iVar5);
			if (func_508(38))
			{
				func_509(483, 0);
			}
			else
			{
				func_509(482, 0);
			}
			if (iVar7 == func_510(iVar6))
			{
				func_404(func_511(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_271() && func_512(4))
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(2);
					}
					else
					{
						func_515(38, func_511(iVar6), 0, 0, func_514(), 0, -1, 0);
						func_516(1);
					}
				}
			}
			else if (func_271() && func_512(4))
			{
				if (func_271() && (func_513(38) || func_508(38)))
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(2);
				}
				else
				{
					func_515(38, 0, 0, 0, func_514(), 0, -1, 0);
					func_516(1);
				}
			}
			if (func_271() && func_512(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_271() && (func_513(38) || func_508(38)))
					{
						func_517(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_517(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_518(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_519(iParam0, 866047851) && !func_519(iParam0, -1979000645)) && !func_519(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_520(iParam0, 8388608) && !func_521(28))
	{
		func_522(28);
	}
	if (!bVar3)
	{
		if (func_519(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_523(iParam0) == -1447088266)
			{
				iVar1 = func_525(func_524(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_208() == -1)
					{
						func_526(iVar1);
					}
					if (func_527(0) && func_528(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(iParam0, iVar0, iParam5);
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
					if (func_208() == -1)
					{
						func_526(iParam0);
					}
					if (func_527(0) && func_528(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_529(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_518(iParam0) == joaat("WEAPON"))
		{
			if (!func_530(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_518(iParam0) == joaat("AMMO") && func_531(iParam0))
		{
			if (!func_532(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_519(iParam0, 866047851))
		{
			func_533(iParam0);
		}
		else if (func_519(iParam0, 2000026003))
		{
			func_534(iParam0);
		}
		else if (func_519(iParam0, -103750053))
		{
			func_173(func_535(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_173(func_536(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_519(iParam0, -121341956) && !func_519(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_461(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_509(498, 0);
				}
			}
			if (func_519(iParam0, -2017733358) || func_519(iParam0, -1369131378))
			{
				func_537(iParam0);
			}
		}
		else if (func_519(iParam0, -136654233))
		{
			if (func_519(iParam0, -1021472396))
			{
			}
		}
		else if (func_519(iParam0, -1466706512) && func_519(iParam0, 1147021565))
		{
			func_509(484, 0);
		}
		else if (func_519(iParam0, 1147021565) && func_519(iParam0, -524514947))
		{
		}
		else if (func_519(iParam0, 554195525))
		{
		}
		else if (func_519(iParam0, 589988438))
		{
			if (func_538())
			{
				func_539(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_519(iParam0, 787083290) && func_519(iParam0, 949916894))
		{
			func_540(iParam0);
		}
		else if (func_519(iParam0, -1718133314))
		{
			func_541(iParam0);
		}
		else if (func_519(iParam0, -1738650224))
		{
			func_542(iParam0);
		}
		else if (func_519(iParam0, -1112814642) && func_519(iParam0, 949916894))
		{
			func_543(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_519(iParam0, 1841149704))
		{
			func_544();
		}
		else if (func_519(iParam0, 606799272))
		{
			func_545(iParam0, iParam1);
			func_546(iParam0);
		}
		else if (func_519(iParam0, -1112814642) && func_519(iParam0, -1697809989))
		{
			func_547(iParam0, 0, 0, 0);
		}
		else if (func_519(iParam0, -2017733358) || func_519(iParam0, -1369131378))
		{
			func_537(iParam0);
		}
		else if (func_519(iParam0, -1921346699))
		{
			if (func_208() != -1)
			{
				return 0;
			}
			func_548(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_519(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_549(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_404(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_549(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_404(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_549(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_404(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_549(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_404(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_549(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_404(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_549(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_404(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_519(iParam0, -839724752) && func_520(iParam0, 4))
		{
			if (!func_508(42))
			{
				func_550(iParam0);
			}
		}
		else if (func_519(iParam0, 1399091007))
		{
			func_551(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_519(iParam0, 1248798204))
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
				func_404(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
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
				func_522(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_552(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_553(&iVar9, 0))
				{
					func_528(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_208() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_552(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_509(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_555();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_556();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_557();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_558();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_559(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_560(499813453, 0);
				func_561(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_559(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_560(499813453, 0);
				func_561(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_559(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_560(499813453, 0);
				func_561(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_559(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_560(666607663, 0);
				func_562(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_559(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_560(666607663, 0);
				func_562(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_559(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_560(666607663, 0);
				func_562(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_559(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_560(-220219788, 0);
				func_563(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_559(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_560(-220219788, 0);
				func_563(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_559(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_560(-220219788, 0);
				func_563(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_559(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_560(218622660, 0);
				func_564(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_559(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_560(218622660, 0);
				func_564(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_559(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_560(390004462, 0);
				func_565(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_559(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_560(390004462, 0);
				func_565(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_559(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_560(390004462, 0);
				func_565(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_559(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_560(6410548, 0);
				func_566(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_559(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_560(6410548, 0);
				func_566(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_559(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_560(6410548, 0);
				func_566(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_559(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_560(6410548, 0);
				func_566(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_568(242, func_567(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_568(240, func_567(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_568(241, func_567(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_569(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
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
					func_569(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
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
					func_569(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_569(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
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
					func_569(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_569(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_509(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_509(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_509(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_404(func_570(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_404(func_571(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_521(1))
				{
					func_509(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_509(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_208() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_509(496, 0);
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
		iVar10 = iParam0;
		func_572(&iVar10);
		if (!func_573(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_527(0))
		{
			return 1;
		}
		if (func_518(iParam0) == joaat("CLOTHING"))
		{
			func_574(iParam0);
		}
		if (func_519(iParam0, -1979000645))
		{
			func_575(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_527(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_404(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_576(iVar2, 0);
		}
	}
	Var35 = { func_577(iParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	func_578(iParam0);
	if (fParam6 > 0f)
	{
		if (func_519(iParam0, -839724752))
		{
			func_579(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_580(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_405(bool bParam0)
{
	func_89(&iLocal_550, 32);
	func_408(iLocal_551, iLocal_550);
	func_409(bParam0);
}

void func_406()
{
	if (func_88(Local_14.f_134, 8388608))
	{
		func_90(&(Local_14.f_134), 8388608);
		func_90(&(Local_14.f_134), 33554432);
	}
}

int func_407(var uParam0)
{
	if (!func_263())
	{
		if (Local_14.f_1 == 0)
		{
			func_401(uParam0, func_153(2), func_154(29));
		}
		else
		{
			func_401(uParam0, func_153(1), func_154(28));
		}
	}
	else
	{
		func_119(0);
		func_406();
		func_156(&Local_14, 0);
		func_90(&(Local_14.f_134), 67108864);
		func_89(&(Local_14.f_134), 64);
	}
	return 1;
}

void func_408(int iParam0, int iParam1)
{
	if (!func_111(iParam0))
	{
		return;
	}
	func_377(iParam0, iParam1);
}

void func_409(bool bParam0)
{
	if (!func_88(Local_14.f_134, 65536))
	{
		switch (Local_14.f_1)
		{
			case 0:
				func_144(&uLocal_708);
				func_581(2, 1);
				break;
			case 1:
				func_581(2, 12);
				break;
		}
		func_89(&(Local_14.f_134), 65536);
	}
	if (bParam0)
	{
		func_582(2);
	}
}

void func_410(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

bool func_411(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_412(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_413(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_414(int iParam0, int iParam1, bool bParam2)
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

bool func_415(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

int func_416(int iParam0, bool bParam1)
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

void func_417(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_584(bParam1))
		{
			func_585(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_586(bParam0, 0, 1);
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
			func_587(bParam0, 0);
			bVar0 = true;
		}
		func_588(bParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

void func_418(var uParam0)
{
	uParam0->f_351 = 0;
}

void func_419(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_420(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_421(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (bParam1)
	{
		func_589(iParam0, 4);
		func_590(iVar0, 1);
		func_591(iVar0, 1);
	}
	else
	{
		func_592(iParam0, 4);
		func_591(iVar0, 0);
	}
}

void func_422(int* iParam0, char* sParam1)
{
	if (func_174(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_420(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_314(iParam0, 1);
}

void func_423(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_424(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_593((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_425(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_443(uParam0[iVar0 /*17*/]))
		{
			func_313(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_426(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_175(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_71(iParam0, 0);
		}
	}
}

int func_427(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_594(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_174((uParam2[iVar0 /*17*/])->f_6))
		{
			func_313(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_428(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_595(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337; /* GXTEntry: "Lemoyne Raider" */
			break;
		case 1:
			iVar1 = 768137552; /* GXTEntry: "Murfree Brood" */
			break;
		case 0:
			iVar1 = 1415388528; /* GXTEntry: "O\'Driscoll Boy" */
			break;
		case 4:
			iVar1 = 1449436544; /* GXTEntry: "Laramie" */
			break;
		case 3:
			iVar1 = -1807204482; /* GXTEntry: "Skinner Brother" */
			break;
		case 5:
			iVar1 = -1096701282; /* GXTEntry: "Del Lobo" */
			break;
	}
	return iVar1;
}

int func_429(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*17*/])->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_430(int* iParam0, int* iParam1)
{
	if (!func_293(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_313(iParam1, 19);
			func_423(iParam0, 23);
			func_596(iParam1, 2);
		}
	}
}

bool func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_597(16))
	{
		return Global_1935630.f_58 == iParam0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam2, bParam3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					func_598(16);
					Global_1935630.f_58 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (Global_1935630.f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_432(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_594(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_433(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_434(int iParam0)
{
	return (func_599(iParam0, 4) || func_599(iParam0, 5));
}

int func_435(int iParam0)
{
	return func_599(iParam0, 7);
}

int func_436(int iParam0)
{
	return func_599(iParam0, 6);
}

void func_437(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_443(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_594(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_438(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_600(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_311(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_421(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_421(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_601(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_439(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_494(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_602(iParam1, 1))
	{
		func_603(iParam1, 1);
		return true;
	}
	return false;
}

void func_440(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_170(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_441(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_442(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_443(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
			{
				case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
					if (SCRIPTS::GET_EVENT_DATA(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (ENTITY::IS_ENTITY_A_PED(vVar3.z))
								{
									if (iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_445()
{
	if (func_604(Global_35) || func_605(Global_35))
	{
		return true;
	}
	return false;
}

bool func_446(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_447(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_448(int iParam0)
{
	return func_447(iParam0, 2);
}

bool func_449()
{
	if (func_606())
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

void func_450(var uParam0, var uParam1)
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

bool func_451(bool bParam0, int iParam1, int iParam2)
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

int func_452(var uParam0)
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

void func_453(var uParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_117(uParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_118(uParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_454(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_455(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_456(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_456(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_457(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_458(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_459(bool bParam0)
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

int func_460(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_461(int iParam0, bool bParam1)
{
	switch (func_359(iParam0))
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

bool func_462(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_GROUP_MEMBER(bParam0, func_607(), 1))
	{
		return true;
	}
	return false;
}

int func_463(bool bParam0, bool bParam1)
{
	return func_608(bParam0, Global_1894899.f_2, bParam1);
}

void func_464(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

Vector3 func_465(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_466(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_609(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_467(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam1;
	if (bParam2)
	{
		if (func_16(uParam0, 2))
		{
			return true;
		}
		if (func_16(uParam0, 1))
		{
			return true;
		}
	}
	if (!func_392(iVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

int func_468(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, sParam1, false, true);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, uParam0->f_2, false, true);
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(uParam0->f_1, uParam0->f_31, 0, false, true);
	}
	return 1;
}

int func_469(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false);
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(*uParam0, false);
	if (bVar0 || bVar1)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		return 0;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return 0;
}

int func_470(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return 1;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_6, uParam0->f_5, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_4, uParam0->f_3, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_8, uParam0->f_7, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_10, uParam0->f_9, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_12))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_12, uParam0->f_11, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_13) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_14, uParam0->f_13, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_15) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_16))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_16, uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, uParam0->f_18, uParam0->f_17, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_20, uParam0->f_19, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_22))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_22, uParam0->f_21, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam0, uParam0->f_24, uParam0->f_23, false);
	}
	if (!func_411(uParam0->f_25) || !func_411(uParam0->f_28))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_25, uParam0->f_28, 2);
	}
	return 1;
}

int func_471(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_209.f_1;
	iVar1 = uParam1->f_1;
	iVar2 = uParam0->f_209;
	iVar3 = *uParam1;
	if (iVar2 != iVar3)
	{
		return func_610(uParam0, iVar2, &(uParam1->f_27));
	}
	if (iVar0 != iVar1)
	{
		return func_611(uParam0);
	}
	return 1;
}

bool func_472(bool bParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(bParam0))
				{
					vVar0 = { func_612(bParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_411(vVar0))
					{
						if (func_613(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), ENTITY::GET_ENTITY_COORDS(bParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(bParam0, iVar5, 0, 0, 0, false);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					if (PED::IS_PED_CARRYING_SOMETHING(bParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(bParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_614(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(bParam0))
				{
					bVar3 = PED::_GET_LAST_MOUNT(bParam0);
					if (!ENTITY::IS_ENTITY_DEAD(bVar3))
					{
						TASK::TASK_FLEE_PED(bVar3, bParam0, 6, 0, 4f, -1, false);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					func_614(bParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(bParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_388(bParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(bParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(bParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_473(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = uParam0->f_2;
	uParam1->f_2.f_1 = uParam0->f_2.f_1;
	uParam1->f_4 = uParam0->f_4;
	uParam1->f_4.f_1 = uParam0->f_4.f_1;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_6.f_1 = uParam0->f_6.f_1;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_8.f_1 = uParam0->f_8.f_1;
	uParam1->f_10 = uParam0->f_10;
	uParam1->f_10.f_1 = uParam0->f_10.f_1;
	uParam1->f_12 = uParam0->f_12;
	uParam1->f_13 = uParam0->f_13;
	uParam1->f_14 = uParam0->f_14;
	uParam1->f_15 = uParam0->f_15;
	uParam1->f_16 = uParam0->f_16;
	uParam1->f_17 = uParam0->f_17;
	uParam1->f_18 = uParam0->f_18;
	uParam1->f_19 = uParam0->f_19;
	uParam1->f_23 = uParam0->f_23;
	uParam1->f_24 = uParam0->f_24;
	uParam1->f_25 = uParam0->f_25;
	uParam1->f_20 = uParam0->f_20;
	uParam1->f_21 = uParam0->f_21;
	uParam1->f_22 = uParam0->f_22;
	uParam1->f_26 = uParam0->f_26;
	uParam1->f_27 = uParam0->f_27;
}

int func_474(int iParam0)
{
	int iVar0;

	iVar0 = func_583(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_615(iVar0);
}

int func_475(int iParam0, int iParam1)
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
			func_616(iVar2);
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

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_477()
{
	if (iLocal_579 <= 0 && func_162(&Local_14) < 1.9f)
	{
		return true;
	}
	return false;
}

bool func_478(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (bParam0)
		{
			if (func_162(&Local_14) > 5f)
			{
				return false;
			}
		}
		if (func_83(Global_35, bLocal_562, 0, 1) && PED::IS_PED_FACING_PED(Local_14.f_3, Global_35, 120f))
		{
			return true;
		}
	}
	return false;
}

bool func_479(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_480(var uParam0)
{
	int iVar0;

	iVar0 = func_486(1, 6, iLocal_576);
	iLocal_576 = iVar0;
	switch (iVar0)
	{
		case 1:
			func_401(uParam0, func_153(3), func_154(31));
			break;
		case 2:
			func_401(uParam0, func_153(3), func_154(32));
			break;
		case 3:
			func_401(uParam0, func_153(3), func_154(33));
			break;
		case 4:
			func_401(uParam0, func_153(3), func_154(34));
			break;
		case 5:
			func_401(uParam0, func_153(3), func_154(35));
			break;
	}
}

void func_481(var uParam0)
{
	int iVar0;

	if (!func_309())
	{
		iVar0 = func_486(0, 4, iLocal_572);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
		}
	}
	else
	{
		iVar0 = func_486(0, 6, iLocal_572);
		iLocal_572 = iVar0;
		switch (iVar0)
		{
			case 0:
				func_401(uParam0, func_153(0), func_154(18));
				break;
			case 1:
				func_401(uParam0, func_153(0), func_154(12));
				break;
			case 2:
				func_401(uParam0, func_153(0), func_154(16));
				break;
			case 3:
				func_401(uParam0, func_153(0), func_154(13));
				break;
			case 4:
				func_401(uParam0, func_153(0), func_154(14));
				break;
			case 5:
				func_401(uParam0, func_153(0), func_154(17));
				break;
		}
	}
}

int func_482(var uParam0)
{
	if ((((func_88(*uParam0, 32) || func_88(*uParam0, 64)) || func_88(*uParam0, 512)) || func_88(*uParam0, 256)) || func_88(*uParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_483(var uParam0)
{
	int iVar0;

	iVar0 = func_486(0, 7, iLocal_574);
	iLocal_574 = iVar0;
	switch (iVar0)
	{
		case 0:
			func_401(uParam0, func_153(0), func_154(7));
			break;
		case 1:
			func_401(uParam0, func_153(0), func_154(10));
			break;
		case 2:
			func_401(uParam0, func_153(0), func_154(11));
			break;
		case 3:
			func_401(uParam0, func_153(0), func_154(8));
			break;
		case 4:
			func_401(uParam0, func_153(0), func_154(9));
			break;
		case 5:
			func_401(uParam0, func_153(0), func_154(12));
			break;
		case 6:
			func_401(uParam0, func_153(0), func_154(13));
			break;
	}
	iLocal_577++;
}

void func_484(var uParam0, int iParam1, var uParam2)
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

	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
	{
		*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		*uParam2 = 0;
	}
	if (!*uParam2)
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = ENTITY::_0x886171A12F400B89(*uParam0, iVar0, 1);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
				iVar2 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar1);
				if (ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					ITEMSET::ADD_TO_ITEMSET(iVar1, *iParam1);
				}
				iVar4++;
			}
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		*uParam2 = 1;
	}
	if (*uParam2)
	{
		iVar7 = ITEMSET::GET_ITEMSET_SIZE(*iParam1);
		if (iVar7 > 0)
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, *iParam1);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_35, iVar6, true);
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, Global_35, true);
				iVar8++;
			}
		}
	}
}

int func_485(int iParam0, var uParam1, float fParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (bParam9)
	{
		if (func_618(func_617(Global_35, 0, 1, 0)) || func_618(func_617(Global_35, 1, 1, 0)))
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_35, true, false, true, false);
			return 0;
		}
	}
	if (!bParam8)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * Vector(fParam2, fParam2, fParam2) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + func_619(ENTITY::GET_ENTITY_COORDS(Global_35, true, false) - ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam2) };
	}
	if (((!func_620(Global_35, vVar0, fParam3, 1, 1) && !func_387(Global_35, iParam0, 1f)) && !func_387(iParam0, Global_35, 1f)) || !*uParam1)
	{
		if (!func_388(Global_35, 242628503))
		{
			if (bParam5)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam7, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, iParam4, fParam3, 0, (ENTITY::GET_ENTITY_HEADING(iParam0) - 180f));
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
			PED::SET_PED_KEEP_TASK(Global_35, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			*uParam1 = 1;
		}
	}
	else if (!func_388(Global_35, 242628503))
	{
		if (bParam5 && bParam6)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, iParam7, false);
		}
		*uParam1 = 0;
		return 1;
	}
	return 0;
}

int func_486(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_621())
		{
			iVar0 = (iVar0 - 1);
		}
		else
		{
			iVar0++;
		}
		if (iVar0 < iParam0)
		{
			iVar0 = iParam0;
		}
		else if (iVar0 >= iParam1)
		{
			iVar0 = (iParam1 - 1);
		}
		if (iVar0 == iParam0 && iParam0 == iParam2)
		{
			iVar0++;
		}
		else if (iVar0 == (iParam1 - 1) && (iParam1 - 1) == iParam2)
		{
			iVar0 = (iVar0 - 1);
		}
		if (iVar0 < iParam0 || iVar0 >= iParam1)
		{
			iVar0 = func_622(func_621(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

int func_487(int iParam0, int iParam1, int iParam2)
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

bool func_488(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!ANIMSCENE::IS_ANIM_SCENE_LOADED(*iParam1, true, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(*iParam1, false)) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_489(var uParam0)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			return uParam0->f_146.f_181.f_12;
		case 2:
			return uParam0->f_146.f_237.f_12;
		case 3:
			return uParam0->f_146.f_265.f_12;
		case 4:
			return uParam0->f_146.f_293.f_12;
	}
	return "";
}

int func_490(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_623(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, bParam4, iParam5, bParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_491(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iVar0 /*18*/].f_3, !bParam1);
}

void func_492(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_493(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_0xF4A5C4509BF923B1(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

bool func_494(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_495(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_496(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945188[iVar0 /*18*/].f_4);
	}
	return HUD::_UIPROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[iVar0 /*18*/].f_3);
}

float func_497(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return 0f;
	}
	iVar0 = func_315(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_498(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_499(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_208() == -1)
	{
		if (func_624(iParam0) && func_625(iParam0))
		{
			func_626(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_500(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_627(iParam0, iParam1);
	Var0 = { func_628(iParam0, 0, 1) };
	iVar5 = func_629(iParam0, &Var0, 0, 0);
	iVar6 = func_630(iParam0, 0);
	if ((iVar5 > 1 && !func_631()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_519(iParam0, -2051813666))
		{
			func_509(583, 1);
		}
		else
		{
			func_509(582, 0);
		}
	}
	if (func_632(iParam0, &Var0, *iParam1, 0, 0))
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

void func_501(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_633(iParam0, -949239683))
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

int func_502(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_634(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_635(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_636(bParam2), iParam0, 0);
	return iVar2;
}

bool func_503(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_504(iParam0) != 0;
}

int func_504(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_638(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_505(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_506(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_637())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_505(iVar0))
		{
			if (func_549(func_638(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_507(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_639(48);
	func_126(0, -1);
}

bool func_508(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_461(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_509(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_642(iVar0, iVar1);
}

int func_510(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

int func_511(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

bool func_512(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	return func_461(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_513(int iParam0)
{
	if (func_208() != -1)
	{
		return false;
	}
	if (!func_643(iParam0))
	{
		return false;
	}
	return func_209(Global_1347702[iParam0 /*49*/].f_15);
}

int func_514()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_549(func_644(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_515(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_271() && (func_513(38) || func_508(38)))
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
			if (func_271() && (func_513(39) || func_508(39)))
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
			iVar9 = func_645(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_271() && (func_513(41) || func_508(41)))
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
			if (func_271() && (func_513(49) || func_508(49)))
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
			iVar9 = func_645(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_646(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_647(iParam0, iVar13, iVar14))
	{
	}
	if (func_648(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_649(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_650(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_651(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_652(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_516(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_271() && (func_513(38) || func_508(38)))
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
			if (func_271() && (func_513(39) || func_508(39)))
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
			if (func_271() && (func_513(49) || func_508(49)))
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
		if (func_271() && (func_513(38) || func_508(38)))
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
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_655(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_654(func_511(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_271() && (func_513(39) || func_508(39)))
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
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_271() && (func_513(49) || func_508(49)))
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
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_653(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_518(int iParam0)
{
	vector3 vVar0;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_519(int iParam0, int iParam1)
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

bool func_520(int iParam0, int iParam1)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

bool func_521(int iParam0)
{
	if (!func_656(iParam0))
	{
		return false;
	}
	return func_657(iParam0);
}

void func_522(int iParam0)
{
	if (!func_656(iParam0))
	{
		return;
	}
	func_658(iParam0);
	func_659(iParam0);
}

int func_523(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_524(int iParam0, bool bParam1)
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
	if (func_498(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_660(iVar0) || func_661(iVar0))
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

int func_525(int iParam0, bool bParam1)
{
	if (!func_498(iParam0, 0))
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

void func_526(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_618(iParam0))
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

bool func_527(bool bParam0)
{
	if (func_208() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_636(bParam0));
}

bool func_528(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_628(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_662((398 + iVar28), 1);
			if (func_663(iParam0, &Var0, iVar5, 0))
			{
				if (func_664(iParam0, &Var6, iVar5))
				{
					Var29 = { func_665(iParam0, Var0, iVar5, 0) };
					func_666(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_527(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_529(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_667(iParam0, iParam1);
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

bool func_529(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_531(iParam0))
	{
		return false;
	}
	if (!func_527(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_530(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_525(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_208() == -1)
		{
			func_526(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_668(iVar0);
			}
		}
		if (!func_632(iParam0, &uVar1, 1, 0, 0))
		{
			func_626(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_669(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_528(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_528(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_528(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_309())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_670(iVar0))
				{
					func_528(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_528(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_617(Global_35, 2, 0, 1);
				if ((((func_618(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_521(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_618(iVar7) && func_521(24))
				{
					if (!func_528(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_528(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_528(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_509(480, 1);
	}
	return true;
}

bool func_531(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_532(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_531(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_618(iVar4))
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
	if (func_549(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
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
		func_568(func_671(iParam0), func_567(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_208() == -1)
		{
			if (func_461(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_509(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_527(0))
	{
		if (func_529(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_573(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_533(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_672()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_673(Global_35, iParam0, &uVar0))
		{
			func_552(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_558();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_554();
			break;
	}
}

void func_534(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_554();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_555();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_556();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_557();
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
			func_558();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_674();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_675();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> /*16*/ func_535(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> /*16*/ func_536(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_537(int iParam0)
{
	bool bVar0;

	bVar0 = func_519(iParam0, -2017733358);
	if (func_676() < 3)
	{
		if (bVar0)
		{
			if (func_678(func_677(iParam0), iParam0))
			{
				func_568(79, func_567(func_677(iParam0)), 1);
			}
			else
			{
				func_568(78, func_567(func_677(iParam0)), 1);
			}
		}
		else
		{
			func_568(80, func_567(func_679(iParam0)), 1);
		}
	}
}

bool func_538()
{
	if (((((func_680(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_680(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_680(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_539(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_681(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_682(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_683(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_540(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(8192);
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_517(51, 0, 0, 0, 0, -1, 0);
			func_684(524288);
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_515(39, 0, 0, 0, 0, 0, 1, 0);
			func_517(39, 0, 0, 0, 0, -1, 0);
			func_685(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_515(41, 0, 0, 0, 0, 0, 1, 0);
			func_517(41, 0, 0, 0, 0, -1, 0);
			func_686(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_515(49, 0, 0, 0, 0, 0, 1, 0);
			func_517(49, 0, 0, 0, 0, -1, 0);
			func_687(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_515(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_688(1), 0, -1, 0);
			func_689(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_515(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_688(2), 0, -1, 0);
			func_689(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_515(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_688(4), 0, -1, 0);
			func_689(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_515(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_688(8), 0, -1, 0);
			func_689(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_515(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_688(16), 0, -1, 0);
			func_689(16);
			break;
	}
}

void func_541(int iParam0)
{
	if (func_690() == 1)
	{
		if (func_508(39))
		{
			func_509(342, 0);
		}
		else
		{
			func_509(343, 0);
			func_685(1);
		}
	}
	if (func_690() >= 30)
	{
		func_509(344, 0);
	}
	func_515(39, 0, 0, 0, 0, 0, -1, 0);
	func_517(39, 0, 0, func_690(), 30, 1, 0);
}

void func_542(int iParam0)
{
	if (func_691() == 1)
	{
		if (func_508(49))
		{
			func_509(409, 0);
		}
		else
		{
			func_509(410, 0);
			func_687(1);
		}
	}
	if (func_691() >= 10)
	{
		func_509(411, 0);
	}
	func_515(49, 0, 0, 0, 0, 0, -1, 0);
	func_517(49, 0, 0, func_691(), 10, 1, 0);
}

void func_543(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			func_509(437, 0);
			func_509(440, 0);
			func_692(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_684(1);
			func_693(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_692(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_684(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_692(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_684(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_692(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_684(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			func_509(438, 0);
			func_692(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			func_515(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			func_517(51, 0, 0, sVar0, func_645(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_684(32768);
			break;
		default:
			func_509(439, 0);
			break;
	}
}

void func_544()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_545(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_208() == -1)
	{
		if (!func_508(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_509(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_509(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_509(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_509(400, 0);
			}
		}
		else if (func_519(iParam0, 412399755))
		{
			func_694(joaat("EXOTIC_STAGE_01"));
			if (func_695() == 0)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_508(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_509(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_509(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_509(401, 0);
			}
		}
		else if (func_519(iParam0, 709057512))
		{
			func_694(joaat("EXOTIC_STAGE_02"));
			if (func_695() == 1)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_508(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_509(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_509(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_509(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_509(398, 0);
			}
		}
		else if (func_519(iParam0, -1478961327))
		{
			func_694(joaat("EXOTIC_STAGE_03"));
			if (func_695() == 2)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_699(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_700(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_639(48);
					}
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_508(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_509(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_509(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_509(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_509(406, 0);
			}
		}
		else if (func_519(iParam0, -1238404098))
		{
			func_694(joaat("EXOTIC_STAGE_04"));
			if (func_695() == 3)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_508(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_509(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_509(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_509(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_509(403, 0);
			}
		}
		else if (func_519(iParam0, 1160548794))
		{
			func_694(joaat("EXOTIC_STAGE_05"));
			if (func_695() == 4)
			{
				func_126(0, 10);
				iVar1 = func_696(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_697(iParam0) < func_698(iParam0))
					{
						func_515(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_517(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_546(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_699(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_700(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_639(48);
		}
	}
}

void func_547(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_549(func_701(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_702(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_703(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_548(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_208() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_539(0, 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_539(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_539(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_539(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_539(joaat("REWARD_BILLFOLD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_539(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_539(joaat("REWARD_BILLSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_539(joaat("REWARD_COIN"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_539(joaat("REWARD_COINPURSE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_539(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_539(joaat("REWARD_COINS"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_539(joaat("REWARD_MONEYCLIP"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_539(joaat("REWARD_MONEYSTACK"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_704())
			{
				func_539(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_539(joaat("REWARD_COINCUP_SM"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_539(joaat("REWARD_COINCUP_LG"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_539(joaat("REWARD_BILL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_539(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_539(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_539(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_539(joaat("REWARD_RARE_FISH"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_539(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_539(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_539(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_539(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_539(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_539(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_549(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_498(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_518(iParam0);
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
		if (!func_705(iParam0, 1))
		{
			return false;
		}
	}
	return func_502(iParam0, 0, bParam2) >= iParam1;
}

void func_550(int iParam0)
{
	if (func_508(41))
	{
		func_509(363, 0);
	}
	else
	{
		func_509(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_01"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_02"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_03"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_04"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_05"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_06"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_07"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_08"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_09"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_10"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_11"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_12"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_13"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_126(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_706(joaat("LEGENDARY_FISH_14"));
			func_707(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_708(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_551(int iParam0, int iParam1)
{
	var uVar0;

	func_709(iParam0, iParam1, &uVar0);
}

int func_552(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == -358215195)
	{
		Var0 = { func_628(iParam1, 1, 0) };
		iParam3 = func_710(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_712(iParam1, iParam2, func_711(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_713(1, (func_208() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946054.f_57[func_711(iParam3, 1) /*11*/])
			{
				func_714(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_715(32768) && iParam1 != Global_1946054.f_57[func_711(iParam3, 1) /*11*/])
			{
				func_716();
				func_714(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_714(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_717(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_714(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_718(0);
			func_719(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_714(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_553(int iParam0, bool bParam1)
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
	iVar18 = func_617(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_617(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_720("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_721(&Var3, iVar2, iVar0, iVar1))
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
						func_722(iVar0);
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

void func_554()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_555()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_556()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_557()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_558()
{
	func_723();
	func_724();
	func_725();
}

void func_559(int iParam0, int iParam1, bool bParam2)
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

void func_560(int iParam0, bool bParam1)
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
	func_653(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_561(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_562(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_563(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_564(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_565(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_566(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_567(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_569(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_640(iParam0, &iVar0, &iVar1);
	if (!func_641(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_726(iParam0, 1024))
	{
		return;
	}
	func_642(iVar0, iVar1);
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

int func_570()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_637())
	{
		return func_571();
	}
	iVar4 = (func_637() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_637())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_727(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_638(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_571()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_637());
	return func_638(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_572(int iParam0)
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

int func_573(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_628(iParam0, 0, 1) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	return func_728(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_574(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_208() != -1)
	{
		return;
	}
	switch (func_523(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && func_729(81053684, 0) <= 0)
			{
				func_714(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_714(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_730(iParam0);
			if (func_731(iVar0))
			{
				func_732(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_714(30, iParam0, 0, 0, 0);
			}
			if (func_733() == -2125499975 || func_733() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_714(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_733() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						func_714(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_734(-525676072, 0))
			{
				if (func_735(-525676072, &iVar1))
				{
					func_714(33, iVar1, 0, 0, 0);
				}
			}
			func_714(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_736(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_552(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_522(24);
		if (func_553(&iVar2, 0))
		{
			func_528(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_575(int iParam0)
{
	if (func_519(iParam0, 943695443))
	{
		func_737(0, iParam0);
	}
	else if (func_519(iParam0, -2096528786))
	{
		func_737(1, iParam0);
	}
	else if (func_519(iParam0, -1094167013))
	{
		func_737(2, iParam0);
	}
	else if (func_519(iParam0, 1936654645))
	{
		func_737(3, iParam0);
	}
	else if (func_519(iParam0, 1306489306))
	{
		func_737(4, iParam0);
	}
	else if (func_519(iParam0, 435762317))
	{
		func_737(5, iParam0);
	}
	else if (func_519(iParam0, 1259363210))
	{
		func_737(6, iParam0);
	}
	else if (func_519(iParam0, 881398259))
	{
		func_737(7, iParam0);
	}
	else if (func_519(iParam0, -541549214))
	{
		func_737(8, iParam0);
	}
	else if (func_519(iParam0, 130796156))
	{
		func_737(-1, iParam0);
	}
}

int func_576(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	Var4.f_1 = 10;
	func_738(&Var4, joaat("LOOT_TYPE_NORMAL"));
	return func_739(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> /*16*/ func_577(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_498(iParam0, 0))
	{
		return Var0;
	}
	if (func_519(iParam0, -305066475))
	{
		if (func_208() == -1)
		{
			if (func_519(iParam0, -537818634))
			{
				return func_171(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_171(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_519(iParam0, -537818634))
	{
		return func_171(joaat("MEDICINE_ITEMS"));
	}
	if (func_519(iParam0, 2084895747))
	{
		return func_171(joaat("LOCK_BREAKER_ITEMS"));
	}
	return Var2;
}

void func_578(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_208() == -1)
			{
				if (func_461(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_509(109, 1);
				}
			}
			break;
	}
}

void func_579(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_741(func_740(0));
	func_743(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_742(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_580(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_498(iParam0, 0))
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
	if (!func_744())
	{
		func_745(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_746(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_520(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_518(iParam0);
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
	else if (!func_747(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_748(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_567(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_519(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_567(iParam0));
	}
	func_743(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_581(int iParam0, int iParam1)
{
	if (Global_40.f_11623[iParam0 /*8*/] != iParam1)
	{
		Global_40.f_11623[iParam0 /*8*/] = iParam1;
	}
}

void func_582(int iParam0)
{
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_583(int iParam0)
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

bool func_584(bool bParam0)
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

void func_585(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_749(bParam0, iParam1))
		{
			if (func_750(bParam0, iParam1))
			{
				if (func_751(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_752(bParam0);
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

void func_586(bool bParam0, int iParam1, bool bParam2)
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

void func_587(bool bParam0, bool bParam1)
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

void func_588(bool bParam0, bool bParam1)
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

void func_589(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_590(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_447(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_591(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_592(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

int func_593(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_594(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_174(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_175(&(iParam1->f_6), 0, 1);
	}
	if (!func_174(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_443(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_753(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_174(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_601(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_492(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_754(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_419(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_492(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_421(iParam1->f_6, 0, 1);
				}
				else
				{
					func_421(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_595(int iParam0)
{
	int iVar0;

	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0);
	switch (iVar0)
	{
		case joaat("REL_GANG_SKINNER_BROTHERS"):
			return 3;
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
			return 2;
		case joaat("REL_GANG_ODRISCOLL"):
			return 0;
		case joaat("REL_GANG_MURFREE_BROOD"):
			return 1;
		case joaat("REL_GANG_LARAMIE_GANG"):
			return 4;
		case joaat("REL_GANG_SMUGGLERS"):
			return 5;
		default:
			break;
	}
	return -1;
}

void func_596(int* iParam0, int iParam1)
{
	if (!func_312(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_313(iParam0, 14);
		}
	}
}

bool func_597(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_598(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_599(int iParam0, int iParam1)
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

bool func_600(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bool bVar0;
	bool bVar1;

	bVar0 = (MISC::IS_BIT_SET(*iParam1, 0) && !MISC::IS_BIT_SET(*iParam1, 4));
	if (MISC::IS_BIT_SET(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (MISC::IS_BIT_SET(*iParam1, 20))
		{
			if (!MISC::IS_BIT_SET(*iParam0, 25))
			{
				MISC::SET_BIT(iParam0, 24);
			}
			return true;
		}
	}
	if (MISC::IS_BIT_SET(*iParam1, 9))
	{
		MISC::CLEAR_BIT(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (MISC::IS_BIT_SET(*iParam1, 6))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(*iParam1, 5))
	{
		return true;
	}
	if (MISC::IS_BIT_SET(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 18))
	{
		if (MISC::IS_BIT_SET(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(*iParam1, 2))
	{
		if (MISC::IS_BIT_SET(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

void func_601(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_174(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_492(iParam0, 18, 0, 1);
	func_492(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_602(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return false;
	}
	iVar0 = func_315(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_603(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

int func_604(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(bParam0, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	if (iVar1 == 0)
	{
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	iVar9 = 0;
	while (iVar9 < 4)
	{
		iVar2 = func_755(iVar9);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var3, bParam0, iVar2, 0))
		{
		}
		else
		{
			iVar7 = Var3.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar7))
				{
				}
				iVar8 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar7);
				if (iVar8 == joaat("CARRIABLE_SADDLE") || iVar8 == joaat("CARRIABLE_SADDLE_BUNDLE"))
				{
					return 1;
				}
			}
		}
		iVar9++;
	}
	return 0;
}

int func_605(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = func_267();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return 0;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(bVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

bool func_606()
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

int func_607()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_608(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!func_756(iParam1, &uVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return func_757(bParam0, uVar0, iVar1, bParam2);
}

void func_609(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
			{
				AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			}
		}
		iVar0++;
	}
}

int func_610(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (*uParam2)
	{
		return 1;
	}
	if (!func_392(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

int func_611(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_209;
	if (uParam0->f_209.f_27)
	{
		return 1;
	}
	if (func_392(iVar0, &iVar1))
	{
		if (func_758(uParam0[iVar1 /*36*/], uParam0->f_209.f_12) || uParam0->f_209.f_26 == 1)
		{
			uParam0->f_209.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

Vector3 func_612(bool bParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(bParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_613(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_614(bool bParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(bParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

int func_615(int iParam0)
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

int func_616(int iParam0)
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

int func_617(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_618(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

Vector3 func_619(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_620(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_759(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_621()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_622(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_623(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, bParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, bParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, bParam16, iParam17);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, bParam18, iParam19);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), bParam18, 0f, iParam19);
			break;
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_590(iParam0, 1);
	func_591(iParam0, 1);
	func_592(iParam0, 128);
}

bool func_624(int iParam0)
{
	return func_518(iParam0) == joaat("WEAPON");
}

bool func_625(int iParam0)
{
	var uVar0;

	if (func_208() != -1)
	{
		return false;
	}
	if (func_520(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_632(iParam0, &uVar0, 1, 0, 0);
	}
	return func_549(iParam0, 1, 0);
}

void func_626(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_518(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_525(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_661(iVar0))
	{
		if (func_208() == -1)
		{
			func_526(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_502(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_580(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_627(int iParam0, int iParam1)
{
	int iVar0;

	if (func_519(iParam0, 58855631))
	{
		func_760(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

struct<5> /*40*/ func_628(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_761(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_518(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_665(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_762(bParam1) };
			if (bParam2 && func_763(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_663(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_663(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_664(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_764(bParam1) };
			switch (func_523(iParam0))
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
			if (func_765(iParam0, -1823706425))
			{
				Var0 = { func_665(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_765(iParam0, -1483207246))
			{
				Var0 = { func_665(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_766(Var0, &Var27, bParam1, 0))
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

int func_629(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_767(iParam0))
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_636(bParam3), iParam0);
}

int func_630(int iParam0, bool bParam1)
{
	if (func_531(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_636(bParam1), iParam0, 0);
}

bool func_631()
{
	if (func_208() != -1)
	{
		return false;
	}
	if (!func_271())
	{
		return false;
	}
	if (!func_461(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_461(Global_1835011[2 /*74*/].f_1, 1) && func_461(Global_1347702[120 /*49*/].f_15, 1)) && !func_461(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_461(Global_1835011[37 /*74*/].f_1, 1) && !func_461(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_461(Global_1835011[57 /*74*/].f_1, 1) && !func_461(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_461(Global_1835011[26 /*74*/].f_1, 1) && !func_461(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_461(Global_1835011[62 /*74*/].f_1, 1) && func_461(Global_1835011[63 /*74*/].f_1, 1)) && !func_461(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_461(Global_1835011[75 /*74*/].f_1, 1) && !func_461(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_461(Global_1835011[76 /*74*/].f_1, 1) && !func_461(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_461(Global_1835011[40 /*74*/].f_1, 1) && func_461(Global_1835011[41 /*74*/].f_1, 1)) && !func_461(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_461(Global_1835011[62 /*74*/].f_1, 1) && func_461(Global_1835011[63 /*74*/].f_1, 1)) && !func_461(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_461(Global_1835011[65 /*74*/].f_1, 1) && func_461(Global_1835011[66 /*74*/].f_1, 1)) && !func_461(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_632(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_768(&iParam0);
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (!func_527(0))
	{
		bParam3 = true;
	}
	if (func_624(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { func_762(0) };
			Var4.f_9 = -1591664384;
			if (!func_663(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_664(iParam0, &Var4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_763(iParam0, 1))
			{
				if (!func_663(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_664(iParam0, &Var4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_769(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_629(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_767(iParam0))
	{
		iVar28 = func_770(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_636(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_633(int iParam0, int iParam1)
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

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_518(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_519(iParam0, 1399091007))
	{
		func_709(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_635(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_771(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_772(&Var0, func_762(0));
	}
	if (!func_773(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_722(iVar18);
	return iVar19;
}

int func_636(bool bParam0)
{
	if (func_208() == -1)
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

int func_637()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

int func_638(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_639(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_208() != -1)
	{
		return;
	}
	iVar0 = func_774(iParam0);
	fVar1 = func_775(iParam0);
	if ((Global_1347477.f_117 || !func_521(31)) || !func_776(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_777(iVar0) >= 7)
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
	func_778(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_743(MISC::VAR_STRING(6, func_779(iParam0), fVar1), "itemtype_textures", func_780(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_640(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_641(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_781(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_782(iParam0))
	{
		return false;
	}
	if (func_783(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_726(iParam0, 1)) || func_784(32768))
	{
		if (!func_726(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_785())
	{
		return false;
	}
	return true;
}

void func_642(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_643(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_644(int iParam0)
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

int func_645(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_786(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_646(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_514() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_787(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_788(), 12);
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
			else if (func_690() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_789(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_690(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_790(), 13);
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
			else if (func_691() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_791(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_691(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_645(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_647(int iParam0, int iParam1, int iParam2)
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

bool func_648(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_649(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_650(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_792(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_549(iVar2, 1, 0) || func_794(func_793(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_654(func_792(iVar0))), func_654(func_792(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_690() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_795(iVar0)), func_795(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_789() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_795(iVar0)), func_795(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_795(iVar0)), func_795(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_701(iParam3, func_796(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_697(iVar2) - iParam7) >= func_645(iParam3, func_797(iVar0));
				}
				else
				{
					bVar1 = func_697(iVar2) >= func_645(iParam3, func_797(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_697(iVar2) + iParam7) >= func_645(iParam3, func_797(iVar0));
			}
			else
			{
				bVar1 = func_697(iVar2) >= func_645(iParam3, func_797(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_798(iVar2)), func_798(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_799(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_800(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_800(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_691() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_801(iVar0)), func_801(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_791() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_801(iVar0)), func_801(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_801(iVar0)), func_801(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_701(iParam3, func_796(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_697(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_802(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_802(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_803(iVar2)), func_803(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_651(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_790() >= 13)
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

bool func_652(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_111(func_804(0)) && ((func_85(0) == 1 || func_85(0) == 8) || func_85(0) == 6))
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

var func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_654(int iParam0)
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

var func_655(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

bool func_656(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_657(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_658(int iParam0)
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

void func_659(int iParam0)
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
			func_805(1);
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
			func_806(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_806(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_806(3);
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
			func_807(1);
			break;
		case 34:
			func_808(1);
			break;
		case 35:
			func_809(1);
			break;
		case 36:
			break;
		case 37:
			func_810(0);
			break;
		case 38:
			func_811(0);
			break;
		case 39:
			func_812(0);
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
			if ((!Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_509(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_509(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_509(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_271()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_655("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_509(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_208() == -1)
			{
				if (!func_736(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_813(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_309())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_549(iVar0, 1, 0))
					{
						func_573(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_552(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_208() == -1)
			{
				if (!func_549(1013902307, 1, 0))
				{
					func_573(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_549(142640135, 1, 0))
				{
					func_573(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_208() == -1)
			{
				if (!func_549(786809402, 1, 0))
				{
					func_573(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_549(-518019409, 1, 0))
				{
					func_573(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_814();
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

bool func_660(int iParam0)
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

bool func_661(int iParam0)
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

int func_662(int iParam0, int iParam1)
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

bool func_663(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_770(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_664(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_815(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_665(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_498(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_636(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_666(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_816(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_766(*uParam1, &Var0, bParam6, 0))
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
	if (!func_527(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_636(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_667(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_817(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_668(int iParam0)
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
	iVar2 = func_91();
	func_818(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_669(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_819(iParam0))
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

bool func_670(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_671(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_521(50))
			{
				if (!func_521(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_521(51))
			{
				if (!func_521(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_672()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_673(int iParam0, int iParam1, var uParam2)
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

	if (!func_498(iParam1, 0))
	{
		return false;
	}
	if (func_518(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_208() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_523(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_820(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_519(iParam1, 866047851))
	{
		iVar5 = func_711(iVar4, 1);
		if (func_821(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
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
			iVar3 = func_523(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_519(iParam1, -1638171711))
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
			if (func_822(1868067663, &uVar0))
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
				iVar10 = func_823(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_823(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_523(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_519(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_824(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
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

void func_674()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_675()
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

int func_676()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_549(func_825(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_677(int iParam0)
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

bool func_678(int iParam0, int iParam1)
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
	if (func_549(iVar0, 1, 0) && func_549(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_679(int iParam0)
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

bool func_680(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_826(iParam0);
	if (iVar0 != -15)
	{
		func_818(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_827(iVar0, 1);
	}
	return false;
}

int func_681(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_549(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_498(iVar25, 0) && func_519(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_682(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_743(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_683(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_828())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_743(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_829(iVar0);
			func_830(iVar0, 0, 0);
		}
		func_743(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_173(func_171(joaat("CAREER_CASH")), iVar1);
	}
}

void func_684(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_685(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_686(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_687(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_688(int iParam0)
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
	iVar1 = func_697(iVar9);
	iVar2 = func_697(iVar10);
	iVar3 = func_697(iVar11);
	iVar5 = func_698(iVar9);
	iVar6 = func_698(iVar10);
	iVar7 = func_698(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_697(iVar12);
		iVar8 = func_698(iVar12);
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

void func_689(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_690()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_831(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_691()
{
	return COLLECTION::_0x5461C821D00FE15A(joaat("ROCK_CARVINGS"), 0);
}

bool func_692(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_802(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_802(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_802(iVar0))
		{
			*sParam2++;
		}
		if (func_802(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_802(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_802(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_802(iVar0))
		{
			*sParam2++;
		}
		if (func_802(iVar1))
		{
			*sParam2++;
		}
		if (func_802(iVar0) && func_802(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_802(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_802(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_802(iVar0))
		{
			*sParam2++;
		}
		if (func_802(iVar1))
		{
			*sParam2++;
		}
		if (func_802(iVar2))
		{
			*sParam2++;
		}
		if ((func_802(iVar0) && func_802(iVar1)) && func_802(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_802(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_802(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_802(iVar0))
		{
			*sParam2++;
		}
		if (func_802(iVar1))
		{
			*sParam2++;
		}
		if (func_802(iVar2))
		{
			*sParam2++;
		}
		if (func_802(iVar3))
		{
			*sParam2++;
		}
		if (((func_802(iVar0) && func_802(iVar1)) && func_802(iVar2)) && func_802(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_693(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_832(1497516462);
			func_833(2016141805);
			func_833(1010885152);
			func_833(-502324015);
			break;
		case 2016141805:
			func_833(1497516462);
			func_832(2016141805);
			func_833(1010885152);
			func_833(-502324015);
			break;
		case 1010885152:
			func_833(1497516462);
			func_833(2016141805);
			func_832(1010885152);
			func_833(-502324015);
			break;
		case -502324015:
			func_833(1497516462);
			func_833(2016141805);
			func_833(1010885152);
			func_832(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_833(-538889627);
			func_833(-538880323);
			func_833(-1056767524);
			func_832(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_834();
			func_832(iParam0);
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
			func_835();
			func_832(iParam0);
			break;
		case 2019386373:
			func_833(-664252410);
			func_833(2109952320);
			func_832(2019386373);
			break;
		case -664252410:
			func_833(2019386373);
			func_833(2109952320);
			func_832(-664252410);
			break;
		case 2109952320:
			func_833(2019386373);
			func_833(-664252410);
			func_832(2109952320);
			break;
		case -1674179981:
			func_833(-1835851517);
			func_833(-1838352012);
			func_832(-1674179981);
			break;
		case -1835851517:
			func_833(-1674179981);
			func_833(-1838352012);
			func_832(-1835851517);
			break;
		case -1838352012:
			func_833(-1674179981);
			func_833(-1835851517);
			func_832(-1838352012);
			break;
		case -1717960576:
			func_833(210001842);
			func_832(-1717960576);
			break;
		case 210001842:
			func_833(-1717960576);
			func_832(210001842);
			break;
		case -150493654:
			func_833(-1271608261);
			func_833(1846061697);
			func_833(-1145519186);
			func_832(-150493654);
			break;
		case -1271608261:
			func_833(-150493654);
			func_833(1846061697);
			func_833(-1145519186);
			func_832(-1271608261);
			break;
		case 1846061697:
			func_833(-150493654);
			func_833(-1271608261);
			func_833(-1145519186);
			func_832(1846061697);
			break;
		case -1145519186:
			func_833(-150493654);
			func_833(-1271608261);
			func_833(1846061697);
			func_832(-1145519186);
			break;
		case 1766284049:
			func_833(280705402);
			func_833(1926308480);
			func_832(1766284049);
			break;
		case 280705402:
			func_833(1766284049);
			func_833(1926308480);
			func_832(280705402);
			break;
		case 1926308480:
			func_833(1766284049);
			func_833(280705402);
			func_832(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_833(439465264);
				func_832(1609506757);
			}
			else
			{
				func_833(1609506757);
				func_833(439465264);
			}
			break;
		case 439465264:
			if (func_836(1609506757))
			{
				if (bParam1)
				{
					func_832(439465264);
				}
				else
				{
					func_833(439465264);
				}
			}
			break;
		case 1822001510:
			func_833(-1612662716);
			func_832(1822001510);
			break;
		case -1612662716:
			func_833(1822001510);
			func_832(-1612662716);
			break;
		case 1306158345:
			func_833(1952610440);
			func_833(-223469678);
			func_833(-404698347);
			func_833(1517904467);
			func_832(1306158345);
			break;
		case 1952610440:
			func_833(1306158345);
			func_833(-223469678);
			func_833(-404698347);
			func_833(1517904467);
			func_832(1952610440);
			break;
		case -223469678:
			func_833(1306158345);
			func_833(1952610440);
			func_833(-404698347);
			func_833(1517904467);
			func_832(-223469678);
			break;
		case -404698347:
			func_833(1306158345);
			func_833(1952610440);
			func_833(-223469678);
			func_833(1517904467);
			func_832(-404698347);
			break;
		case 1517904467:
			func_833(1306158345);
			func_833(1952610440);
			func_833(-223469678);
			func_833(-404698347);
			func_832(1517904467);
			break;
		case 1376646519:
			func_833(931649776);
			func_833(-434590080);
			func_833(1743048395);
			func_833(449774763);
			func_832(1376646519);
			break;
		case 931649776:
			func_833(1376646519);
			func_833(-434590080);
			func_833(1743048395);
			func_833(449774763);
			func_832(931649776);
			break;
		case -434590080:
			func_833(1376646519);
			func_833(931649776);
			func_833(1743048395);
			func_833(449774763);
			func_832(-434590080);
			break;
		case 1743048395:
			func_833(1376646519);
			func_833(931649776);
			func_833(-434590080);
			func_833(449774763);
			func_832(1743048395);
			break;
		case 449774763:
			func_833(1376646519);
			func_833(931649776);
			func_833(-434590080);
			func_833(1743048395);
			func_832(449774763);
			break;
		case -1414537028:
			func_833(38162571);
			func_833(1350391819);
			func_833(54073871);
			func_832(-1414537028);
			break;
		case 38162571:
			func_833(-1414537028);
			func_833(1350391819);
			func_833(54073871);
			func_832(38162571);
			break;
		case 1350391819:
			func_833(-1414537028);
			func_833(38162571);
			func_833(54073871);
			func_832(1350391819);
			break;
		case 54073871:
			func_833(-1414537028);
			func_833(38162571);
			func_833(1350391819);
			func_832(54073871);
			break;
		case 198200492:
			func_832(198200492);
			func_833(-1124061431);
			func_833(52706132);
			func_833(-259123672);
			break;
		case -1124061431:
			func_833(198200492);
			func_832(-1124061431);
			func_833(52706132);
			func_833(-259123672);
			break;
		case 52706132:
			func_833(198200492);
			func_833(-1124061431);
			func_832(52706132);
			func_833(-259123672);
			break;
		case -259123672:
			func_833(198200492);
			func_833(-1124061431);
			func_833(52706132);
			func_832(-259123672);
			break;
		case -919512195:
			func_832(-919512195);
			func_833(-1925798111);
			func_833(420709909);
			func_833(1703426636);
			break;
		case -1925798111:
			func_832(-1925798111);
			func_833(-919512195);
			func_833(420709909);
			func_833(1703426636);
			break;
		case 420709909:
			func_832(420709909);
			func_833(-919512195);
			func_833(-1925798111);
			func_833(1703426636);
			break;
		case 1703426636:
			func_832(1703426636);
			func_833(-919512195);
			func_833(-1925798111);
			func_833(420709909);
			break;
		case -1223121209:
			func_832(-1223121209);
			func_833(630808005);
			break;
		case 630808005:
			func_832(630808005);
			func_833(-1223121209);
			break;
		case 1453909576:
			func_832(1453909576);
			func_833(1643531967);
			break;
		case 1643531967:
			func_832(1643531967);
			func_833(1453909576);
			break;
		case 0:
			func_832(0);
			func_833(473295046);
			func_833(-1738165526);
			break;
		case 473295046:
			func_832(473295046);
			func_833(0);
			func_833(-1738165526);
			break;
		case -1738165526:
			func_832(-1738165526);
			func_833(0);
			func_833(473295046);
			break;
		case 932909855:
			func_832(932909855);
			func_833(2051822093);
			break;
		case 2051822093:
			func_832(2051822093);
			func_833(932909855);
			break;
		case 405586984:
			func_832(405586984);
			func_833(1509509592);
			func_833(-959357075);
			func_833(-1311865656);
			break;
		case 1509509592:
			func_832(1509509592);
			func_833(405586984);
			func_833(-959357075);
			func_833(-1311865656);
			break;
		case -959357075:
			func_832(-959357075);
			func_833(1509509592);
			func_833(405586984);
			func_833(-1311865656);
			break;
		case -1311865656:
			func_832(-1311865656);
			func_833(1509509592);
			func_833(-959357075);
			func_833(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_832(-524145696);
			}
			else
			{
				func_833(-524145696);
			}
			func_833(1626481264);
			func_833(282809459);
			break;
		case 282809459:
			func_832(282809459);
			func_833(1626481264);
			func_833(-524145696);
			break;
		case 1626481264:
			func_832(1626481264);
			func_833(-524145696);
			func_833(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_832(885203519);
			}
			else
			{
				func_833(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_832(-1080627546);
			}
			else
			{
				func_833(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_836(iParam0))
				{
					func_832(iParam0);
				}
			}
			else if (func_836(iParam0))
			{
				func_833(iParam0);
			}
			break;
	}
}

void func_694(int iParam0)
{
	if (!func_837(iParam0))
	{
		func_839(func_838(iParam0));
	}
}

int func_695()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_837(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_696(int iParam0, int iParam1, int iParam2)
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
			Jump @198; //curOff = 164
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			iVar1 = func_697(iVar9);
			iVar2 = func_697(iVar10);
			iVar3 = func_697(iVar11);
			iVar5 = func_698(iVar9);
			iVar6 = func_698(iVar10);
			iVar7 = func_698(iVar11);
			if (iParam2 != 2)
			{
				iVar4 = func_697(iVar12);
				iVar8 = func_698(iVar12);
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

int func_697(int iParam0)
{
	int iVar0;

	if (func_549(iParam0, 1, 0))
	{
		iVar0 = func_502(iParam0, 0, 0);
	}
	return iVar0;
}

int func_698(int iParam0)
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

int func_699(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_700(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_701(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_786(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_702(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_701(iParam1, 5) || iParam0 == func_701(iParam1, 6)) || iParam0 == func_701(iParam1, 7)) || iParam0 == func_701(iParam1, 8)) || iParam0 == func_701(iParam1, 9))
	{
		func_692(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_515(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_517(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_703(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_701(iParam1, 5) || iParam0 == func_701(iParam1, 6)) || iParam0 == func_701(iParam1, 7)) || iParam0 == func_701(iParam1, 8)) || iParam0 == func_701(iParam1, 9))
	{
		if (func_692(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_515(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_515(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_517(51, 0, 0, iVar0, func_645(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_704()
{
	if (func_209(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

bool func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_634(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_720("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_721(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_618(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_722(iVar1);
				return true;
			}
			iVar3++;
		}
		func_722(iVar1);
	}
	return false;
}

void func_706(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_707(int iParam0)
{
	if (!func_840(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_708(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

void func_709(int iParam0, int iParam1, var uParam2)
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

int func_710(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_841(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_711(int iParam0, int iParam1)
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

bool func_712(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_842();
	if (iParam2 == 39)
	{
		Var0 = { func_628(iParam0, 1, 0) };
		iParam2 = func_711(func_710(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_519(iParam0, 866047851) && func_821(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_715(32768) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_843(func_841(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_844(iParam2);
	func_845(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_846(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_846(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_847(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_848(iParam0, iParam2, iParam1, func_208() != -1);
	if (bParam4)
	{
		func_849(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_849(&(Global_1946054.f_1378), 1, 0);
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
				func_850(func_841(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_713(bool bParam0, bool bParam1, bool bParam2)
{
	func_851(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_714(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_852(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_853(Var0);
}

bool func_715(int iParam0)
{
	return (Global_1946054 && iParam0) != 0;
}

void func_716()
{
	func_854(&(Global_1946054.f_2776));
	func_855(32768);
	func_850(1108822547, 8, 6);
}

int func_717(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_711(iParam0, 1);
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

void func_718(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_856(iParam0, 4096))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_857(Var0);
}

void func_719(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_857(Var0);
}

bool func_720(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_636(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_721(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_722(int iParam0)
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

float func_723()
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

	if (func_858())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_859(2);
	}
	if (Global_1347477.f_119)
	{
		return func_859(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_860();
	fVar2 = func_861();
	fVar3 = func_862();
	fVar4 = func_863();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_864()));
	fVar7 = (func_859(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_865(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_866(3, fVar9, fVar9 > 100f);
	return func_867(fVar7, -100f, 100f);
}

float func_724()
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

	if (func_858())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_859(1);
	}
	if (Global_1347477.f_119)
	{
		return func_859(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_860();
	fVar2 = func_861();
	fVar3 = func_862();
	fVar4 = func_863();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_864()));
	fVar7 = (func_859(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_865(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_866(2, fVar9, fVar9 > 100f);
	return func_867(fVar7, -100f, 100f);
}

float func_725()
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

	if (func_858())
	{
		return 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_859(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_868())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_869())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477.f_119)
	{
		return func_859(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_860();
	fVar2 = func_861();
	fVar3 = func_862();
	fVar4 = func_863();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_864()));
	fVar7 = (func_859(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_865(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_866(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_859(0);
	}
	return func_867(fVar7, -100f, 100f);
}

bool func_726(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_727(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_728(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_498(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_632(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_527(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_636(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_729(int iParam0, bool bParam1)
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
				return func_870();
			}
			break;
	}
	return 0;
}

int func_730(int iParam0)
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

bool func_731(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_732(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_731(iParam0))
	{
		return;
	}
	if (func_871(iParam0))
	{
		return;
	}
	if (!func_872(iParam0))
	{
		func_873(iParam0, 1, 0);
	}
	iVar0 = func_874(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_875(iParam0, 512))
		{
			func_714(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_876() && !bParam1) && !func_877(0, 0, 1))
	{
		func_878(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_879(iParam0, 6);
	if (bParam2)
	{
		if (!func_877(0, 0, 1))
		{
			func_126(1, 4);
		}
	}
}

int func_733()
{
	return Global_1946054.f_1;
}

bool func_734(int iParam0, bool bParam1)
{
	return func_729(iParam0, 0) < func_880(iParam0, bParam1);
}

bool func_735(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_523(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_736(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_711(iParam0, 1) /*3*/] != Global_1946054.f_57[func_711(iParam0, 1) /*11*/];
}

void func_737(int iParam0, int iParam1)
{
	if (func_519(iParam1, 130796156))
	{
		func_881(iParam1, 0);
	}
	else if (func_519(iParam1, 930141731))
	{
		func_881(iParam1, 1);
		func_882(iParam0);
	}
}

void func_738(var uParam0, int iParam1)
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

int func_739(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_883(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_884(uParam2, iParam0, Var1);
	return 1;
}

int func_740(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_741(int iParam0)
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

int func_742(int iParam0)
{
	var uVar0;

	if (!func_885(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

var func_743(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_886(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_744()
{
	return !Global_1911774;
}

void func_745(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_746(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_747(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_748(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_749(bool bParam0, int iParam1)
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

bool func_750(bool bParam0, int iParam1)
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

bool func_751(bool bParam0, int iParam1)
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
	if (!func_749(bParam0, iVar0))
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

void func_752(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_753(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_447(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945188[iVar0 /*18*/].f_11 && iParam1 == Global_1945188[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945188[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_623(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_754(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_174(iParam0))
	{
		return;
	}
	iVar0 = func_315(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
	}
	return 0;
}

bool func_756(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_208() != -1;
	switch (iParam0)
	{
		case 76:
			*uParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*uParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*uParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*uParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*uParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*uParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*uParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*uParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*uParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*uParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*uParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*uParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*uParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*uParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*uParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*uParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*uParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*uParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*uParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*uParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*uParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*uParam1 = 715;
			}
			else
			{
				*uParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*uParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*uParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*uParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*uParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*uParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*uParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*uParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*uParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*uParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*uParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*uParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*uParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*uParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*uParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*uParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*uParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*uParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*uParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*uParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*uParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*uParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*uParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*uParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*uParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*uParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*uParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*uParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*uParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*uParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

int func_757(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(bParam0) && !bParam3)
	{
		return -1;
	}
	iVar0 = PERSCHAR::_0x32A1E3B83D501096(bParam0);
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar1 = iParam1;
	while (iVar1 <= iParam2)
	{
		iVar2 = iVar1;
		if (func_887(iVar2) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_888(iVar2)))
		{
			if (func_888(iVar2) == iVar0)
			{
				return iVar2;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_758(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(*uParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return true;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(*uParam0, sParam1);
	}
	return false;
}

float func_759(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_760(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_498(iParam0, 0))
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

struct<4> /*32*/ func_761(bool bParam0)
{
	return func_665(joaat("CHARACTER"), func_889(), -1591664384, bParam0);
}

struct<4> /*32*/ func_762(bool bParam0)
{
	int iVar0;

	iVar0 = func_636(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_665(923904168, func_761(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_665(923904168, func_761(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_665(923904168, func_761(bParam0), -740156546, 0);
}

bool func_763(int iParam0, bool bParam1)
{
	if (func_523(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_521(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_764(bool bParam0)
{
	int iVar0;

	iVar0 = func_636(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_665(271701509, func_761(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_665(271701509, func_761(bParam0), 12999093, 0);
}

bool func_765(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_523(iParam0);
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

bool func_766(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_636(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_767(int iParam0)
{
	if (func_890(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_768(int iParam0)
{
	if (!func_498(*iParam0, 0))
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

bool func_769(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_498(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_628(iParam0, 0, 1) };
	iVar5 = joaat("SLOTID_WEAPON_0");
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_662((398 + iVar29), 1);
		if (func_663(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_664(iParam0, &Var6, iVar5);
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

int func_770(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_498(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_665(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_636(bParam6), &Var0, 0);
	return uVar4;
}

struct<18> /*144*/ func_771(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_772(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_773(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_636(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_774(int iParam0)
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

float func_775(int iParam0)
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
			return func_891(iParam0);
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
			return func_891(iParam0);
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
			return func_891(iParam0);
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

bool func_776(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_521(18);
		case 2:
			return func_521(20);
		case 1:
			return func_521(19);
		default:
			break;
	}
	return true;
}

int func_777(int iParam0)
{
	return func_892(Global_40.f_11095.f_11[iParam0]);
}

void func_778(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_208() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_521(31))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_777(iParam0);
	if (func_893(iParam0) && func_894(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_895(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_896(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_509(func_897(iParam0), 0);
					}
					func_898(iParam0, iVar2, iVar3);
					func_899(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_779(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_780(int iParam0)
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

bool func_781(int iParam0, int iParam1)
{
	if (func_208() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_782(int iParam0)
{
	if (func_208() != -1)
	{
		if (func_726(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_726(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_783(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_726(iParam0, 65536) && !func_726(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_726(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_726(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_784(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_785()
{
	return Global_1905944.f_5694;
}

bool func_786(int iParam0, var uParam1)
{
	if (!func_900(iParam0))
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

int func_787()
{
	return func_901(Global_40.f_12019);
}

int func_788()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_644(iVar1);
		if (func_549(iVar2, 1, 0) || func_794(func_793(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_789()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_902(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_790()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_799(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_791()
{
	return COLLECTION::_0x3A65F4844913A047(joaat("ROCK_CARVINGS"), 0);
}

int func_792(int iParam0)
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

int func_793(int iParam0)
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

bool func_794(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_795(int iParam0)
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

int func_796(int iParam0)
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

int func_797(int iParam0)
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

char* func_798(int iParam0)
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

bool func_799(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_800(int iParam0)
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

char* func_801(int iParam0)
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

bool func_802(int iParam0)
{
	if (func_903(iParam0) && func_549(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_904(iParam0) && func_905(iParam0))
	{
		return true;
	}
	return false;
}

char* func_803(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_567(iParam0));
}

int func_804(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_805(bool bParam0)
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

void func_806(int iParam0)
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

void func_807(bool bParam0)
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

void func_808(bool bParam0)
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

void func_809(bool bParam0)
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

void func_810(bool bParam0)
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

void func_811(bool bParam0)
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

void func_812(bool bParam0)
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

int func_813(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_711(iParam0, 1) /*3*/];
}

void func_814()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_906();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_526(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_573(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_526(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_573(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_815(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_636(0);
	*uParam1 = { func_665(iParam0, func_762(0), iParam3, 0) };
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

bool func_816(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_817(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_907(*iParam0);
	iVar1 = func_908(*iParam0);
	iVar2 = func_909(*iParam0);
	iVar3 = func_131(*iParam0);
	iVar4 = func_910(*iParam0);
	iVar5 = func_911(*iParam0);
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
	iVar6 = func_912(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_912(iVar1, iVar0);
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
	func_913(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_819(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_820(int iParam0)
{
	struct<5> /*40*/ sVar0;

	Var0 = { func_628(iParam0, 1, 0) };
	return func_710(Var0.f_4);
}

int func_821(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_822(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_711(func_914(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_523(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_823(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_711(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_715(524288))
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

bool func_824(int iParam0)
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

int func_825(int iParam0)
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

int func_826(int iParam0)
{
	return func_915(iParam0, -1);
}

bool func_827(int iParam0, bool bParam1)
{
	return func_916(func_91(), iParam0, bParam1);
}

bool func_828()
{
	if (func_672())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_829(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_917((Global_40.f_4283.f_325 + iParam0));
}

void func_830(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_828())
	{
		func_743(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_743(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_831(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_832(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_918(iParam0, 1);
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

void func_833(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_918(iParam0, 1);
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

void func_834()
{
	func_833(-939420910);
	func_833(-1187950766);
	func_833(356365161);
	func_833(753127042);
	func_833(-2038424081);
	func_833(1884271742);
	func_833(459290420);
}

void func_835()
{
	func_833(704802028);
	func_833(588987611);
	func_833(2008888900);
	func_833(1649996811);
	func_833(227918160);
	func_833(168171957);
	func_833(1193080109);
	func_833(-491981251);
	func_833(-639037538);
	func_833(-618620429);
}

bool func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_918(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_837(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_838(int iParam0)
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

void func_839(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

bool func_840(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_841(int iParam0, int iParam1)
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

void func_842()
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

void func_843(int iParam0)
{
	func_850(iParam0, 8, 6);
}

void func_844(int iParam0)
{
	func_919(&(Global_1946054.f_2589), iParam0);
}

void func_845(int iParam0, int iParam1)
{
	func_920(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_846(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_847(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_523(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_921(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_845(iVar1, iVar3);
		}
	}
	if (func_736(-1586649372) && func_921(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_845(iVar1, iVar3);
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
						func_845(iVar1, iVar3);
					}
				}
			}
			func_922(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_922(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_845(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_922(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						func_845(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						func_845(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_922(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_922(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_845(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_922(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_845(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_845(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_523(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_845(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_824(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && -923693316 == func_523(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_845(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_519(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_845(iVar1, iVar3);
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
						func_845(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_824(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_519(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_845(iVar1, iVar3);
					}
				}
			}
			switch (func_523(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_523(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_845(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_523(uParam0->f_1[iVar1 /*3*/]) || func_519(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_845(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_848(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_923(0);
	if (iParam2 != 0 && func_924(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_925(iParam0, func_841(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_849(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_208() != -1;
	iVar7 = func_923(0);
	if (func_715(32768))
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
			iVar5 = func_841(iVar0, 1);
			if (func_926(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_926(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_823(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_927(uParam0);
				if (iVar3 > 0)
				{
					if (!func_715(524288))
					{
						func_852(524288);
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
							iVar5 = func_841(iVar0, 1);
							if (func_926(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_926(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_823(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_845(iVar0, iParam2);
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
					func_855(524288);
				}
			}
		}
	}
}

void func_850(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_711(iParam0, 1) /*11*/].f_10 = (Global_1946054.f_57[func_711(iParam0, 1) /*11*/].f_10 - (Global_1946054.f_57[func_711(iParam0, 1) /*11*/].f_10 && iParam1));
}

void func_851(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_928(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_208() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_929(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_874(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946054.f_1497 = func_874(Global_40.f_7729);
				Global_1946054.f_1378 = func_874(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_930(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_931(0, 1);
	}
}

void func_852(int iParam0)
{
	Global_1946054 = (Global_1946054 || iParam0);
}

void func_853(struct<4> /*32*/ sParam0)
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
			if (func_932(Param0))
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
			func_933(Param0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { Param0 };
			Global_1946054.f_850++;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1 % 25);
			func_852(8);
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
			if (func_932(Param0))
			{
				return;
			}
			func_933(Param0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { Param0 };
			Global_1946054.f_851++;
			func_852(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_719(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

void func_854(var uParam0)
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

void func_855(int iParam0)
{
	Global_1946054 = (Global_1946054 - (Global_1946054 && iParam0));
}

bool func_856(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_857(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_932(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == Param0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == Param0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == Param0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == Param0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_932(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_933(Param0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { Param0 };
	Global_1946054.f_852++;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1 % 20);
	func_852(8);
}

bool func_858()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_859(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_860()
{
	float fVar0;
	int iVar1;

	fVar0 = func_934(13);
	iVar1 = func_935(fVar0);
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

float func_861()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_862()
{
	if (func_672())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_863()
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

float func_864()
{
	return Global_1954815.f_3;
}

void func_865(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_936(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_866(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_936(iParam0, 2, 0, 0);
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

float func_867(float fParam0, float fParam1, float fParam2)
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

bool func_868()
{
	return func_934(12) <= -99f;
}

bool func_869()
{
	return func_934(12) >= 99f;
}

int func_870()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_523(iVar1) == -999503751)
		{
			if (func_937() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_871(int iParam0)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	if (func_875(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_872(int iParam0)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	if (func_875(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_873(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_731(iParam0))
	{
		return;
	}
	if (!func_872(iParam0))
	{
		func_879(iParam0, 2);
		if (bParam2)
		{
			if (!func_877(0, 0, 1))
			{
				func_126(1, 4);
			}
		}
		if ((!func_876() && !bParam1) && !func_877(0, 0, 1))
		{
			func_878(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_938(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_874(int iParam0)
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

bool func_875(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

bool func_876()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_877(int iParam0, bool bParam1, bool bParam2)
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
		if (func_939())
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
		iVar0 = func_940(Global_1898164.f_1[0 /*5*/]);
		if (func_643(iVar0) && func_941(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_111(Global_1898164.f_1[0 /*5*/]))
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

var func_878(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_879(int iParam0, int iParam1)
{
	if (!func_731(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

int func_880(int iParam0, bool bParam1)
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

void func_881(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_942(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_522(50);
			}
			else
			{
				func_522(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_522(51);
			}
			else
			{
				func_522(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_943(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_554();
			}
			break;
		case 3:
			func_522(24);
			if (bParam1)
			{
				if (!func_943(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_554();
				}
			}
			break;
	}
}

void func_882(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_944(0))
			{
				iVar0++;
			}
			if (func_944(2))
			{
				iVar0++;
			}
			if (func_944(4))
			{
				iVar0++;
			}
			if (!func_945(16))
			{
				if (iVar0 == 1)
				{
					func_946();
					func_509(456, 1);
					func_947(16);
				}
			}
			if (!func_945(32))
			{
				if (iVar0 >= 3)
				{
					func_946();
					func_509(456, 1);
					func_947(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_944(1))
			{
				iVar0++;
			}
			if (func_944(3))
			{
				iVar0++;
			}
			if (func_944(7))
			{
				iVar0++;
			}
			if (!func_945(1))
			{
				if (iVar0 == 1)
				{
					func_948();
					func_509(457, 1);
					func_947(1);
				}
			}
			if (!func_945(2))
			{
				if (iVar0 >= 3)
				{
					func_948();
					func_509(457, 1);
					func_947(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_944(5))
			{
				iVar0++;
			}
			if (func_944(6))
			{
				iVar0++;
			}
			if (func_944(8))
			{
				iVar0++;
			}
			if (!func_945(4))
			{
				if (iVar0 == 1)
				{
					func_949();
					func_509(455, 1);
					func_947(4);
				}
			}
			if (!func_945(8))
			{
				if (iVar0 >= 3)
				{
					func_949();
					func_509(455, 1);
					func_947(8);
				}
			}
			break;
	}
}

void func_883(var uParam0)
{
	func_738(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_738(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_738(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_884(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_950(uParam0))
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

bool func_885(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_886(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_887(int iParam0)
{
	if (!func_951(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

int func_888(int iParam0)
{
	if (!func_951(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

struct<4> /*32*/ func_889()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

int func_890(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

float func_891(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_774(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_892(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_952(iVar6) - func_952(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1f;
}

int func_892(float fParam0)
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

int func_893(int iParam0)
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

int func_894(int iParam0)
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

int func_895(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_892(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_952(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_952(iVar0 + 1));
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

int func_896(int iParam0)
{
	int iVar0;

	if (func_953(iParam0, &iVar0))
	{
		return func_952(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_954())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_954())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_954())
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

int func_897(int iParam0)
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

void func_898(int iParam0, int iParam1, int iParam2)
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
	iVar3 = (iVar3 + func_955(iParam0));
	sVar4 = func_957(func_956(iVar3, iParam2));
	sVar6 = func_958(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_959(iParam0));
	iVar8 = func_960(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_961(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_653(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_962(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_899(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_900(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_901(int iParam0)
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

bool func_902(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

bool func_903(int iParam0)
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

int func_904(int iParam0)
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

int func_905(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_963(&iVar0, 0, iVar95, &Var1) && !func_963(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_964(iVar0, &Var1);
			if (func_498(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_906()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_965(Global_35, &iVar0);
	Var30 = { func_761(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_966(0);
	func_967(7);
	func_968(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_733() == 1160113249)
	{
		func_968(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_968(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	func_969(Global_35, &iVar0);
}

int func_907(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_622(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_908(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_909(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_910(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_911(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_912(int iParam0, int iParam1)
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

void func_913(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_970(iParam0, iParam6);
	func_971(iParam0, iParam5);
	func_972(iParam0, iParam4);
	func_973(iParam0, iParam3);
	func_974(iParam0, iParam2);
	func_975(iParam0, iParam1);
}

int func_914(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_710(iVar0);
}

int func_915(int iParam0, int iParam1)
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
		iParam1 = func_636(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_970(&uVar6, iVar0);
	func_971(&uVar6, iVar1);
	func_972(&uVar6, iVar2);
	func_973(&uVar6, iVar3);
	func_974(&uVar6, iVar4);
	func_975(&uVar6, iVar5);
	return uVar6;
}

bool func_916(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_976(iParam1) || !func_976(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_917(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_171(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_918(int iParam0, int iParam1)
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

void func_919(var uParam0, int iParam1)
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
			if ((func_977(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_977(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_978(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_920(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_979(uParam0, 1))
	{
		func_980(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_921(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1) != 0;
}

void func_922(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_845(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_845(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_845(iVar2, iVar0);
		}
	}
}

int func_923(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_924(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_925(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_926(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_711(iParam0, 1) /*11*/].f_10 && iParam1) != 0;
}

int func_927(var uParam0)
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

void func_928(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_208() == -1)
	{
		func_981(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_982(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_929(int iParam0, int iParam1)
{
	if (func_208() == -1)
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

void func_930(int iParam0, bool bParam1, int iParam2)
{
	func_983(&(Global_1946054.f_1378), iParam0);
	func_984(2, iParam0, 6);
	if (bParam1)
	{
		func_931(0, 1);
	}
}

void func_931(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_985(0);
	}
	if (bParam0)
	{
		func_852(8);
		func_852(512);
	}
	else
	{
		func_852(8);
		func_852(16);
	}
}

bool func_932(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_933(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_934(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_935(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

char* func_936(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_746(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_746(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_937()
{
	return Global_1946054.f_1497;
}

char* func_938(int iParam0)
{
	int iVar0;

	iVar0 = func_874(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_803(iVar0);
}

bool func_939()
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

int func_940(int iParam0)
{
	if (!func_111(iParam0))
	{
		return -1;
	}
	return func_986(func_227(iParam0));
}

bool func_941(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_942(int iParam0)
{
	int iVar0;

	if (func_987(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_988(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_989(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_990(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_549(func_991(iVar0, iParam0), 1, 0))
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

bool func_944(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_549(func_992(iVar0, iParam0), 1, 0))
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

bool func_945(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_946()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_777(1);
	func_898(1, iVar0, 0);
}

void func_947(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_948()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_777(2);
	func_898(2, iVar0, 0);
}

void func_949()
{
	int iVar0;

	if (func_208() != -1)
	{
		return;
	}
	func_573(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_777(0);
	func_898(0, iVar0, 0);
}

bool func_950(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_951(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_952(int iParam0)
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

bool func_953(int iParam0, int iParam1)
{
	return false;
}

bool func_954()
{
	return false;
}

int func_955(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), joaat("UPGRADE_HEALTH_TANK_1"), 0);
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), joaat("UPGRADE_STAMINA_TANK_1"), 0);
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_636(0), joaat("UPGRADE_DEADEYE_TANK_1"), 0);
	}
	return 0;
}

struct<4> /*32*/ func_956(int iParam0, int iParam1)
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

char* func_957(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_958(int iParam0)
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

char* func_959(int iParam0)
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

int func_960(int iParam0)
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

int func_961(int iParam0)
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

int func_962(int iParam0)
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

bool func_963(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_993(iParam1) && !func_994(iParam1))
	{
		bVar0 = func_995(iParam1);
	}
	else
	{
		return false;
	}
	func_996(uParam3);
	iVar5 = func_997(iParam2);
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

void func_964(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		func_998(bVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_999(&(iParam1->f_1), bVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_965(int iParam0, int* iParam1)
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
		if (func_618(iVar31))
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

void func_966(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_498(iVar1, 0))
		{
			func_1000(iVar1, 0, bParam0);
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

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_208() == -1)
	{
		func_1001(352481484);
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
		if (func_523(iVar2) != -999503751)
		{
			func_1002(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1003(iVar2, 0))
		{
			func_1004(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_968(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1005(iParam0))
	{
		return;
	}
	iVar0 = func_523(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1006(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1007(0))
	{
		func_1008(iParam0, 1);
		if (func_733() == 1160113249)
		{
			func_1008(func_1007(-2125499975), 0);
		}
		else
		{
			func_1008(func_1007(1160113249), 0);
		}
	}
	func_1009();
	if (func_1010(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_636(0), iParam0, 0);
	}
	func_1004(iParam0, bParam3);
	if (bParam2)
	{
		func_931(0, 0);
	}
}

void func_969(int iParam0, int iParam1)
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
				if (func_661((*iParam1)[iVar0]))
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

void func_970(int iParam0, int iParam1)
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

void func_971(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_972(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_908(*iParam0);
	iVar1 = func_907(*iParam0);
	if (iParam1 < 1 || iParam1 > func_912(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_973(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_974(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_975(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_976(int iParam0)
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
	iVar0 = func_911(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_910(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_131(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_907(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_908(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_909(iParam0);
	if (iVar5 < 1 || iVar5 > func_912(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_977(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_978(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_979(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_980(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_981(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_982(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = (Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_983(var uParam0, int iParam1)
{
	int iVar0;

	if (func_208() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_981(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_982(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_984(int iParam0, int iParam1, int iParam2)
{
	if (func_208() == -1)
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

void func_985(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

int func_986(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_987(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_988(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_989(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, 363491182))
	{
		return true;
	}
	return false;
}

bool func_990(int iParam0)
{
	if (!func_498(iParam0, 0))
	{
		return false;
	}
	if (func_519(iParam0, 1406113494))
	{
		return true;
	}
	return false;
}

int func_991(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1011(iParam0);
		case 1:
			return func_1012(iParam0);
		case 2:
			return func_1013(iParam0);
		case 3:
			return func_1014(iParam0);
	}
	return 0;
}

int func_992(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_1015(iParam0);
		case 1:
			return func_1016(iParam0);
		case 2:
			return func_1017(iParam0);
		case 3:
			return func_1018(iParam0);
		case 4:
			return func_1019(iParam0);
		case 5:
			return func_1020(iParam0);
		case 6:
			return func_1021(iParam0);
		case 7:
			return func_1022(iParam0);
		case 8:
			return func_1023(iParam0);
	}
	return 0;
}

bool func_993(int iParam0)
{
	iParam0 = func_1024(iParam0);
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

bool func_994(int iParam0)
{
	int iVar0;

	iParam0 = func_1024(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_993(iParam0))
	{
		return false;
	}
	iVar0 = func_995(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_995(int iParam0)
{
	iParam0 = func_1024(iParam0);
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

void func_996(var uParam0)
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

int func_997(int iParam0)
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

void func_998(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_999(int iParam0, bool bParam1, int iParam2, int iParam3)
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

void func_1000(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_523(iParam0))
	{
		case -2061583405:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1025(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1009();
	}
	if (bParam1)
	{
		func_931(0, 0);
	}
}

void func_1001(int iParam0)
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
	Var2 = { func_771(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_773(&Var2, &iVar0, &iVar1, 0))
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
		func_722(iVar0);
	}
}

void func_1002(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1026(iParam2, *uParam0);
	func_1027(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1003(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_770(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(func_636(0), &Var5, iParam1);
	return true;
}

void func_1004(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_770(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_636(0), &Var5, bParam1);
}

bool func_1005(int iParam0)
{
	if (func_208() == -1)
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

int func_1006(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1028(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1003(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_523(iParam0) != -999503751)
	{
		func_1002(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1007(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_733();
	}
	if (iParam0 == 1160113249)
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1008(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	Var0 = { func_628(iParam0, 0, 0) };
	Var5 = { func_665(iParam0, Var0, Var0.f_4, 0) };
	if (func_770(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_636(0), &Var5);
	return 1;
}

void func_1009()
{
	int iVar0;

	if (func_208() == -1)
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

bool func_1010(int iParam0)
{
	return func_1030(func_1029(iParam0));
}

int func_1011(int iParam0)
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

int func_1012(int iParam0)
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

int func_1013(int iParam0)
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

int func_1014(int iParam0)
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

int func_1015(int iParam0)
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

int func_1016(int iParam0)
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

int func_1017(int iParam0)
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

int func_1018(int iParam0)
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

int func_1019(int iParam0)
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

int func_1020(int iParam0)
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

int func_1021(int iParam0)
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

int func_1022(int iParam0)
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

int func_1023(int iParam0)
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

int func_1024(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_1025(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1028(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_523(iParam0) != -999503751)
		{
			func_1031(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19 = (Global_1946054.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_523(iParam0) != -999503751)
	{
		func_1031(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_1003(iParam0, 1);
	return 1;
}

void func_1026(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1027(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_1032(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_711(func_820(iParam1), 1);
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
		func_1033(uParam0);
	}
}

bool func_1028(int iParam0, int iParam1)
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

int func_1029(int iParam0)
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

bool func_1030(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 && iParam0) != 0;
}

void func_1031(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1034(iParam1);
	func_1035(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1036(&(uParam0->f_26), iVar1);
		if (func_1037(uParam0->f_26, &iVar0))
		{
			func_1038(iVar0, iVar1);
		}
	}
}

void func_1032(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1039(&(uParam0->f_3));
}

void func_1033(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1040(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_1034(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1035(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1036(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_1032(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
}

bool func_1037(int iParam0, int iParam1)
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

void func_1038(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1039(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1040(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1041(func_733());
	if (*uParam0)
	{
		func_1039(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, iParam1, 0, func_208() != -1, iParam2);
	*uParam0 = 1;
}

int func_1041(int iParam0)
{
	if (func_208() == -1)
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

