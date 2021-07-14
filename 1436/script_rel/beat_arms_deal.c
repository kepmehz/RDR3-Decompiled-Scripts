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
	struct<4> /*32*/ sLocal_15[4];
	char* sLocal_32 = NULL;
	char* sLocal_33 = NULL;
	int iLocal_34 = 0;
	int iLocal_35[4] = { 0, 0, 0, 0 };
	var uLocal_40[4] = { 0, 0, 0, 0 };
	var uLocal_45[4] = { 0, 0, 0, 0 };
	int iLocal_50 = 0;
	struct<193> /*1544*/ sLocal_51 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_244 = 0;
	struct<32> /*256*/ sLocal_245[4];
	struct<32> /*256*/ sLocal_374[4];
	struct<12> /*96*/ sLocal_503[2];
	struct<5> /*40*/ sLocal_528 = { -1, -1, -1, 0, 0 } ;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 100;
	var uLocal_538 = -1082130432;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 5;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 15;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
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
	struct<2> /*16*/ sLocal_670[15];
	struct<23> /*184*/ sLocal_701 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	struct<23> /*184*/ sLocal_726 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751[4] = { 0, 0, 0, 0 };
	var uLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	var uLocal_767 = 0;
	int iLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 1176256512;
	struct<2> /*16*/ sLocal_772 = { 0, 0 } ;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	char[] cLocal_787[8] = 0;
	int iLocal_788[4] = { 0, 0, 0, 0 };
	bool bLocal_793 = false;
	bool bLocal_794 = false;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	bool bLocal_797 = false;
	int iLocal_798 = 0;
	bool bLocal_799 = false;
	bool bLocal_800 = false;
	int iLocal_801 = 0;
	bool bLocal_802 = false;
	int iLocal_803 = 0;
	bool bLocal_804 = false;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	var uLocal_817[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_828 = 0f;
	float fLocal_829 = 0f;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	int iLocal_834 = 0;
	float fLocal_835 = 0f;
	int iLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = -1;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 1097859072;
	var uLocal_855 = 1000;
	var uLocal_856 = 1067450368;
	var uLocal_857 = 5000;
	var uLocal_858 = 42;
	var uLocal_859 = 1103626240;
	var uLocal_860 = 1077936128;
	var uLocal_861 = 1106247680;
	var uLocal_862 = 1103101952;
	var uLocal_863 = 1097859072;
	var uLocal_864 = 1103626240;
	int iLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = -1;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 1097859072;
	var uLocal_885 = 1000;
	var uLocal_886 = 1067450368;
	var uLocal_887 = 5000;
	var uLocal_888 = 42;
	var uLocal_889 = 1103626240;
	var uLocal_890 = 1077936128;
	var uLocal_891 = 1106247680;
	var uLocal_892 = 1103101952;
	var uLocal_893 = 1097859072;
	var uLocal_894 = 1103626240;
	var uLocal_895[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	int iLocal_935 = 0;
	struct<75> /*600*/ sLocal_936[4];
	int iLocal_1237[4] = { 0, 0, 0, 0 };
	var uLocal_1242[4] = { 0, 0, 0, 0 };
	int iLocal_1247 = 0;
	int iLocal_1248 = 0;
	int iLocal_1249 = 0;
	int iLocal_1250 = 0;
	int iLocal_1251 = 0;
	int iLocal_1252 = 0;
	int iLocal_1253 = 0;
	var uLocal_1254[4] = { 0, 0, 0, 0 };
	var uLocal_1259[4] = { 0, 0, 0, 0 };
	var uLocal_1264[4] = { 0, 0, 0, 0 };
	var uLocal_1269[4] = { 0, 0, 0, 0 };
	int iLocal_1274 = 0;
	int iLocal_1275 = 0;
	int iLocal_1276 = 0;
	int iLocal_1277 = 0;
	int iLocal_1278 = 0;
	struct<23> /*184*/ sLocal_1279[4];
	int iLocal_1372 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion

void main()
{
	bool bVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_32 = "";
	sLocal_33 = "";
	iLocal_759 = 1;
	cLocal_787 = "ARMS";
	iLocal_808 = joaat("PG_RE_ARMSDEAL01X");
	iLocal_809 = joaat("PG_TEAMSTER_WAGON02X_LIGHTUPGRADE1");
	fLocal_828 = 0f;
	fLocal_835 = 5f;
	iLocal_904 = joaat("WAGON02X");
	iLocal_1278 = 6;
	iLocal_1372 = -1;
	Local_51.f_3 = func_1(&vScriptParam_0);
	Local_51.f_161 = func_2(vScriptParam_0.z, 2);
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		func_3(&Local_51, 1);
		iLocal_14 = func_4(Local_51.f_3, 2, 0);
		func_5(&(Local_51.f_5));
		func_6(&uLocal_867);
		if (iLocal_14 == 1)
		{
			func_7(&(Local_51.f_5), 1);
			func_8(&(Local_51.f_5), 500);
			func_9(&(Local_51.f_5), 1);
		}
	}
	while (true)
	{
		if (bVar0)
		{
			func_11(bVar0, 1360, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_759)
			{
				case 1:
					if (func_12(&Local_51, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_51, &iLocal_785, &iLocal_786);
						Local_51.f_51.f_4 = iLocal_786;
						func_15(&Local_51, iLocal_785, 2007);
						func_16();
						iLocal_759 = 0;
					}
					else if (Local_51.f_160)
					{
						func_10();
					}
					break;
				case 0:
					if (func_17())
					{
						PROPSET::_REQUEST_PROP_SET_2(joaat("PG_RE_ARMSDEAL01X"));
						iLocal_759 = 3;
					}
					break;
				case 3:
					if (func_18())
					{
						if (func_19())
						{
							func_20(&(uLocal_895[0]), Local_51.f_51, 6f, 0, 0);
							func_21(&(uLocal_895[1]), Local_51.f_51, 4f);
							func_20(&(uLocal_895[2]), func_22(iLocal_785, Local_51.f_51.f_4), 2f, 0, 1);
							switch (iLocal_786)
							{
								case 1:
									func_20(&(uLocal_895[3]), 1316.457f, -1631.233f, 65.43966f, 1f, 0, 0);
									func_20(&(uLocal_895[4]), 1317.823f, -1627.908f, 65.15807f, 1f, 0, 0);
									func_20(&(uLocal_895[5]), 1313.625f, -1631.687f, 65.5304f, 1f, 0, 0);
									func_20(&(uLocal_895[6]), 1314.432f, -1630.339f, 65.42619f, 1f, 0, 0);
									func_20(&(uLocal_895[7]), 1315.583f, -1625.064f, 65.0082f, 1f, 0, 0);
									break;
								case 4:
									func_20(&(uLocal_895[3]), 1408.471f, -1706.774f, 66.32634f, 1f, 0, 0);
									func_20(&(uLocal_895[4]), 1397.019f, -1701.414f, 66.21142f, 1f, 0, 0);
									func_20(&(uLocal_895[5]), 1403.413f, -1700.891f, 65.93549f, 1f, 0, 0);
									func_20(&(uLocal_895[6]), 1379.213f, -1685.438f, 66.61638f, 1f, 0, 0);
									break;
							}
							func_23(Local_51.f_51, &Local_503, 0f, 1, 0, -1, 0);
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
							{
								if (PROPSET::_HAS_PROP_SET_LOADED(iLocal_808))
								{
									PROPSET::_ADD_LIGHT_PROP_SET_TO_VEHICLE(iLocal_34, iLocal_809);
								}
								if (iLocal_14 != 1)
								{
									if (PROPSET::_HAS_PROP_SET_LOADED(iLocal_808) && PROPSET::_HAS_PROP_SET_LOADED_2(joaat("PG_RE_ARMSDEAL01X")))
									{
										PROPSET::_0xD80FAF919A2E56EA(iLocal_34, iLocal_808);
									}
								}
							}
							func_24(iLocal_785, iLocal_786);
							func_25(iLocal_785, iLocal_786);
							func_26();
							func_27();
							iLocal_759 = 4;
						}
					}
					break;
				case 4:
					if ((!func_28(512) && func_29(Local_51.f_51, 1) < 30f) && iLocal_758 < 4)
					{
						func_30(Local_51.f_51, &iLocal_831, -89429847, 0, 0, 0);
						func_31(512);
					}
					if (func_32(&Local_51, &iLocal_35, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_51.f_50 = 1;
						func_10();
					}
					if (func_33())
					{
						iVar1 = 0;
						while (iVar1 < 4)
						{
							if (func_34(iLocal_35[iVar1], 0, 0))
							{
								func_35(iLocal_35[iVar1], 30f, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_35[iVar1], false);
							}
							iVar1++;
						}
						Local_51.f_50 = 1;
						func_10();
					}
					if (!func_36(&Local_51, &iLocal_35, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_31(-2147483648);
						func_10();
					}
					break;
			}
			BUILTIN::WAIT(Local_51.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_3(var uParam0, bool bParam1)
{
	func_37(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_38("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

int func_4(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return (func_39(iParam0) % iParam1);
	}
	return (func_40(iParam0) % iParam1);
}

void func_5(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 0);
	func_41(iParam0, 0);
	func_42(iParam0, 1);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

void func_6(int iParam0)
{
	func_45(iParam0);
	func_46(iParam0, 0);
	func_47(iParam0, 0);
	func_42(iParam0, 0);
	func_48(iParam0, 1);
	func_49(iParam0, 1);
	func_44(iParam0, 0);
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 8);
	}
	else
	{
		func_51(&(iParam0->f_1), 8);
	}
}

void func_8(int iParam0, int iParam1)
{
	iParam0->f_18 = iParam1;
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(uParam0->f_1), 1024);
	}
	else
	{
		func_51(&(uParam0->f_1), 1024);
	}
}

void func_10()
{
	int iVar0;

	func_52();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			if (!Local_51.f_46 && !func_53(iVar0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iVar0], joaat("REL_NO_RELATIONSHIP"));
			}
			if (func_28(524288))
			{
				PED::_0xE737D5F14304A2EC(iLocal_35[iVar0], PLAYER::PLAYER_ID(), 120000);
			}
			PED::_0x24C82EF607105FAA(iLocal_35[iVar0], joaat("AGGRESSIVE"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iVar0], 6, true);
			func_54(&(iLocal_35[iVar0]), &(Local_936[iVar0 /*75*/]), &(Local_936[iVar0 /*75*/].f_21), 1, 1);
		}
		iVar0++;
	}
	func_55();
	func_56();
	func_57();
	if (bLocal_793)
	{
		func_58(1);
	}
	if (!Local_51.f_44)
	{
		Local_51.f_45 = 0;
	}
	func_59(&Local_51, &iLocal_35, &uLocal_40, iLocal_14, iLocal_785, iLocal_786, 0, 1, 0, 1);
	func_60(&Local_503);
	func_61(&uLocal_45);
	func_62(&uLocal_40);
	func_63(&iLocal_831);
	func_64(iLocal_834);
	func_65(&(Local_772.f_1));
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_66(&(uLocal_895[iVar0]), 1);
		iVar0++;
	}
	func_67(&Local_528);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_11(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_68(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_69(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_70(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_71(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_72(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_73(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 11;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*iParam2 = 2;
			break;
		case 3:
			*iParam1 = 11;
			*iParam2 = 3;
			break;
		case 4:
			*iParam1 = 11;
			*iParam2 = 4;
			break;
		case 5:
			*iParam1 = 11;
			*iParam2 = 5;
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 85.68f;
				case 1:
					return 0f, 0f, -174.24f;
				case 2:
					return 0f, 0f, 98.64f;
				case 3:
					return 0f, 0f, -97.92f;
				case 4:
					return 0f, 0f, 261.02f;
				case 5:
					return 0f, 0f, 10.08f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_15(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	Stack.Push(iParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

void func_16()
{
	PED::_0x9851DE7AEC10B4E1(Local_51.f_51, fLocal_835, 1, 0);
	func_74(Local_51.f_51, fLocal_835, 0, 0, 1, 1, 0);
	if (Local_51.f_161)
	{
		MISC::CLEAR_AREA(Local_51.f_51, 30f, 65536);
		PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(Local_51.f_51, fLocal_835);
	}
}

bool func_17()
{
	switch (iLocal_757)
	{
		case 0:
			if (func_75(&Local_51))
			{
				func_76(iLocal_785);
				func_77(&Local_245);
				func_77(&Local_374);
				func_78();
				func_79(&Local_503);
				func_80();
				func_81();
				func_82();
				STREAMING::REQUEST_MODEL(iLocal_904, false);
				PROPSET::_REQUEST_PROP_SET(iLocal_808);
				PROPSET::_REQUEST_PROP_SET(iLocal_809);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(func_83(iLocal_785, iLocal_786));
				}
				iLocal_757 = 1;
			}
			break;
		case 1:
			if (!func_84(&uLocal_756, cLocal_787))
			{
				return false;
			}
			if (!func_85(&uLocal_549))
			{
				return false;
			}
			if (!func_86(&Local_503))
			{
				return false;
			}
			if (!func_87(&Local_245))
			{
				return false;
			}
			if (!func_87(&Local_374))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_904))
			{
				return false;
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROP_SET_LOADED(iLocal_808))
			{
				return false;
			}
			if (!PROPSET::_HAS_PROP_SET_LOADED(iLocal_809))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)))
			{
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_18()
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;

	switch (iLocal_768)
	{
		case 0:
			iLocal_768 = 1;
			break;
		case 1:
			if (!func_88(Local_51.f_51, 0f, &Local_245, &iLocal_35, 0, 0, -1, 1))
			{
				return false;
			}
			iLocal_768 = 4;
			break;
		case 4:
			if (Local_374[2 /*32*/].f_1 == 0 || Local_374[3 /*32*/].f_1 == 0)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			vVar0 = { func_14(iLocal_785, iLocal_786) };
			vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_51.f_51, vVar0.z, 0f, 5.15f, 0f) };
			iLocal_34 = func_89(iLocal_904, vVar3, vVar0.z, 1, 1, bVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				func_90(iLocal_34, &Local_51, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_34, false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_34, false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_34, true);
				func_91(iLocal_34);
				if (iLocal_14 == 1)
				{
					AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_34, 0, 1, -1);
				}
				if (iLocal_14 == 1)
				{
					func_92(&iLocal_34, 3);
				}
				else
				{
					func_92(&iLocal_34, 1);
				}
				iLocal_768 = 5;
			}
			break;
		case 5:
			if (!func_88(Local_51.f_51, 0f, &Local_374, &uLocal_45, 0, 0, -1, 1))
			{
				return false;
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_34) && ENTITY::DOES_ENTITY_EXIST(uLocal_45[2])) && ENTITY::DOES_ENTITY_EXIST(uLocal_45[3])) && !ENTITY::IS_ENTITY_DEAD(iLocal_34)) && !ENTITY::IS_ENTITY_DEAD(uLocal_45[2])) && !ENTITY::IS_ENTITY_DEAD(uLocal_45[3]))
			{
				VEHICLE::_0x316CDB5B6E8F4110(uLocal_45[2], iLocal_34, 0);
				VEHICLE::_0x316CDB5B6E8F4110(uLocal_45[3], iLocal_34, 1);
			}
			iLocal_768 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_19()
{
	int iVar0;

	switch (iLocal_760)
	{
		case 0:
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_LEMOYNE_RAIDERS", &iLocal_765))
			{
			}
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_DEALERS", &iLocal_766))
			{
			}
			if (PED::ADD_RELATIONSHIP_GROUP("REL_REAMD_JOINT", &uLocal_767))
			{
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_766, iLocal_765);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_766, joaat("REL_PLAYER_LIKE"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_765, iLocal_766);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_765, joaat("REL_PLAYER_LIKE"));
			func_93(&iLocal_760, 1);
			break;
		case 1:
			iVar0 = iLocal_816;
			func_94(iVar0);
			iLocal_816++;
			if (iLocal_816 > 3)
			{
				func_93(&iLocal_760, 2);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[0]))
			{
				func_35(uLocal_45[0], 1088421888 /* Float: 7f */, 0, 0);
				Local_1279[0 /*23*/].f_1[0] = joaat("MONEY_COINSACK");
				Local_1279[0 /*23*/].f_12[0] = 1;
				Local_1279[0 /*23*/] = 1;
				Local_1279[1 /*23*/].f_1[0] = joaat("AMMO_REVOLVER");
				Local_1279[1 /*23*/].f_12[0] = 1;
				Local_1279[1 /*23*/] = 1;
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[0], &(Local_1279[0 /*23*/]), 205298116, 128, 2, 0);
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[0], &(Local_1279[1 /*23*/]), 205298116, 128, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[1]))
			{
				func_35(uLocal_45[1], 1088421888 /* Float: 7f */, 0, 0);
				Local_1279[2 /*23*/].f_1[0] = joaat("MONEY_ONE_DOLLAR");
				Local_1279[2 /*23*/].f_12[0] = 2;
				Local_1279[2 /*23*/] = 2;
				Local_1279[3 /*23*/].f_1[0] = joaat("PROVISION_NECKLACE");
				Local_1279[3 /*23*/].f_12[0] = 1;
				Local_1279[3 /*23*/] = 1;
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[1], &(Local_1279[2 /*23*/]), 205298116, 128, 2, 0);
				ENTITY::_0xA88E215CEB0435C0(uLocal_45[1], &(Local_1279[3 /*23*/]), 205298116, 128, 2, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[2]))
			{
				func_35(uLocal_45[2], 1088421888 /* Float: 7f */, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_45[3]))
			{
				func_35(uLocal_45[3], 1088421888 /* Float: 7f */, 0, 0);
			}
			func_95(&(Local_51.f_5), uLocal_45[0], 0);
			func_95(&(Local_51.f_5), uLocal_45[1], 0);
			func_95(&(Local_51.f_5), uLocal_45[2], 0);
			func_95(&(Local_51.f_5), uLocal_45[3], 0);
			func_98(uLocal_45[0], func_96(0, iLocal_785, iLocal_786), func_97(0, iLocal_785, iLocal_786), 2, 1073741824 /* Float: 2f */);
			func_98(uLocal_45[1], func_96(1, iLocal_785, iLocal_786), func_97(1, iLocal_785, iLocal_786), 2, 1073741824 /* Float: 2f */);
			func_99(&(uLocal_45[0]), 1);
			func_99(&(uLocal_45[1]), 1);
			func_93(&iLocal_760, 3);
			break;
		case 3:
			if (func_100(2, 0))
			{
				func_101(-2147483648);
			}
			return true;
	}
	return false;
}

void func_20(var uParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_102(uParam0, vParam1, fParam4, 1, iVar0, 0);
}

void func_21(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = 258;
	func_102(uParam0, vParam1, fParam4, 2, iVar0, 0);
}

Vector3 func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1843.289f, -382.0404f, 42.29816f;
				case 1:
					return 1315.223f, -1643.497f, 65.99081f;
				case 2:
					return 780.0723f, -904.9696f, 50.11354f;
				case 3:
					return 863.2411f, -535.3668f, 88.32434f;
				case 4:
					return 1388.234f, -1699.7f, 66.7458f;
				case 5:
					return 1567.932f, -1164.354f, 44.73336f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_23(vector3 vParam0, int iParam3, float fParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = 1;
	if (iParam7 < 0 || iParam7 >= *iParam3)
	{
		iParam7 = (*iParam3 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if (bParam8 && ENTITY::DOES_ENTITY_EXIST((iParam3[iVar0 /*12*/])->f_8))
		{
		}
		else if ((iParam3[iVar0 /*12*/])->f_7 != 0 && !func_103((iParam3[iVar0 /*12*/])->f_11, 16))
		{
			if (!STREAMING::HAS_MODEL_LOADED((iParam3[iVar0 /*12*/])->f_7))
			{
				iVar4 = 0;
			}
			else
			{
				if ((iParam3[iVar0 /*12*/])->f_9 != -1)
				{
					iVar8 = (iParam3[iVar0 /*12*/])->f_9;
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((iParam3[iVar8 /*12*/])->f_8, *(iParam3[iVar0 /*12*/])) };
					if (func_103((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY((iParam3[iVar0 /*12*/])->f_8, (iParam3[iVar8 /*12*/])->f_8, 0, *(iParam3[iVar0 /*12*/]), (iParam3[iVar0 /*12*/])->f_4, false, false, false, false, 2, true, false, false);
				}
				else
				{
					if (!func_103((iParam3[iVar0 /*12*/])->f_11, 8))
					{
						vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam4, *(iParam3[iVar0 /*12*/])) };
					}
					else
					{
						vVar5 = { *(iParam3[iVar0 /*12*/]) };
					}
					if (!func_103((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						func_104(&vVar5, (iParam3[iVar0 /*12*/])->f_10);
					}
					if (func_103((iParam3[iVar0 /*12*/])->f_11, 64))
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT_NO_OFFSET((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false);
					}
					else
					{
						(iParam3[iVar0 /*12*/])->f_8 = OBJECT::CREATE_OBJECT((iParam3[iVar0 /*12*/])->f_7, vVar5, true, true, false, false, true);
					}
					if (func_105((iParam3[iVar0 /*12*/])->f_4))
					{
						vVar1 = { 0f, 0f, (iParam3[iVar0 /*12*/])->f_3 };
					}
					else
					{
						vVar1 = { (iParam3[iVar0 /*12*/])->f_4 };
					}
					if (func_103((iParam3[iVar0 /*12*/])->f_11, 4))
					{
						vVar1.f_2 = func_106((vVar1.z + fParam4));
					}
					ENTITY::SET_ENTITY_ROTATION((iParam3[iVar0 /*12*/])->f_8, vVar1, 2, true);
					if (!func_103((iParam3[iVar0 /*12*/])->f_11, 128))
					{
						if ((iParam3[iVar0 /*12*/])->f_10)
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY((iParam3[iVar0 /*12*/])->f_8, false);
						}
					}
				}
				if (func_103((iParam3[iVar0 /*12*/])->f_11, 2))
				{
					ENTITY::FREEZE_ENTITY_POSITION((iParam3[iVar0 /*12*/])->f_8, true);
				}
				if (func_103((iParam3[iVar0 /*12*/])->f_11, 32))
				{
					ENTITY::SET_ENTITY_VISIBLE((iParam3[iVar0 /*12*/])->f_8, false);
				}
				if (bParam5)
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((iParam3[iVar0 /*12*/])->f_8, 1);
					PHYSICS::ACTIVATE_PHYSICS((iParam3[iVar0 /*12*/])->f_8);
				}
				ENTITY::_SET_ENTITY_FADE_IN((iParam3[iVar0 /*12*/])->f_8);
				vVar9 = { ENTITY::GET_ENTITY_COORDS((iParam3[iVar0 /*12*/])->f_8, true, false) };
			}
		}
		iVar0++;
	}
	return iVar4;
}

void func_24(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	func_107(&(Local_51.f_51), 50, 10, 0);
	vVar0 = { func_14(iParam0, iParam1) };
	vVar3 = { Local_51.f_51 };
	func_107(&vVar3, 50, 10, 0);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_528.f_1, vVar3, vVar0, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "dealerA", iLocal_35[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "dealerb", iLocal_35[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "confeda", iLocal_35[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "confedb", iLocal_35[3], 0);
		if (iLocal_14 == 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_528.f_1, "FLAG_LOOP", false, false);
		ANIMSCENE::START_ANIM_SCENE(Local_528.f_1);
	}
}

void func_25(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
	{
		iVar1 = 12;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iVar0 != 0 && VEHICLE::DOES_EXTRA_EXIST(iLocal_34, iVar0))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_34, iVar0, true);
			}
			iVar0++;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_503[0 /*12*/].f_8))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_503[0 /*12*/].f_8, iLocal_34, 0, Local_503[0 /*12*/], 0f, 0f, Local_503[0 /*12*/].f_3, true, false, true, false, 2, true, true, false);
		}
	}
}

void func_26()
{
	switch (iLocal_14)
	{
		case 1:
			func_108(&uLocal_817, 1f, 1f, 0f, 1f, 1f, 0.5812f, 0.7438f, 1065353216 /* Float: 1f */, 0.8411f, 1065353216 /* Float: 1f */);
			break;
		case 0:
			func_108(&uLocal_817, 0.1f, 0.603f, 0f, 0.457f, 0.883f, 1f, 1f, 0.899f, 1064514355 /* Float: 0.95f */, 0.788f);
			break;
	}
}

void func_27()
{
	VOLUME::_SET_VOLUME_SCALE(Local_51.f_171, 30f, 30f, 6f);
}

bool func_28(int iParam0)
{
	return func_103(iLocal_806, iParam0);
}

float func_29(vector3 vParam0, int iParam3)
{
	return func_109(Global_35, vParam0, iParam3);
}

void func_30(vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::BLIP_ADD_FOR_COORDS(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

void func_31(int iParam0)
{
	if (!func_28(iParam0))
	{
		func_110(&iLocal_806, iParam0);
	}
}

bool func_32(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_111())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_112(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_71(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_71(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_71(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_113(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_113(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

bool func_33()
{
	vector3 vVar0;
	int iVar3;

	func_114();
	if (iLocal_758 > 1)
	{
		func_115();
		func_116();
		func_117();
		func_118();
		func_119();
		func_120();
		func_121();
		func_122();
		func_123();
		func_124();
		func_125();
		func_126();
		if (!func_127(8))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_34, true, false) };
			if (func_128(iLocal_14, vVar0, &uLocal_832, &uLocal_833))
			{
				func_101(8);
			}
		}
	}
	switch (iLocal_758)
	{
		case 0:
			if (func_129())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_32))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_528.f_1, sLocal_32, true);
					func_130(&iLocal_758, 1);
				}
			}
			break;
		case 1:
			if (func_132(&Local_51, &uLocal_769, 0.5f, 60f, func_131(iLocal_785, iLocal_786), 1500, 1.25f, 1.25f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_33))
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_528.f_1, sLocal_33, true);
				}
				func_133(0);
				func_133(1);
				func_133(2);
				func_133(3);
				func_134(&Local_772, iLocal_785, iLocal_786);
				func_41(&(Local_51.f_5), 1);
				func_130(&iLocal_758, 2);
			}
			break;
		case 2:
			switch (iLocal_813)
			{
				case 0:
					func_135(&(Local_936[0 /*75*/]), &(Local_936[0 /*75*/].f_21), &(uLocal_1242[0]), 0);
					break;
				case 1:
					func_135(&(Local_936[1 /*75*/]), &(Local_936[1 /*75*/].f_21), &(uLocal_1242[1]), 0);
					break;
				case 2:
					func_135(&(Local_936[2 /*75*/]), &(Local_936[2 /*75*/].f_21), &(uLocal_1242[2]), 0);
					break;
				case 3:
					func_135(&(Local_936[3 /*75*/]), &(Local_936[3 /*75*/].f_21), &(uLocal_1242[3]), 0);
					break;
				default:
					if (iLocal_14 == 1)
					{
						func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 0, 0);
						func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 0, 0);
						func_137(&(Local_936[1 /*75*/]), 0);
						func_137(&(Local_936[3 /*75*/]), 0);
						func_138(&(Local_936[1 /*75*/].f_21), 1, 0);
						func_138(&(Local_936[3 /*75*/].f_21), 1, 0);
					}
					func_130(&iLocal_758, 3);
					break;
			}
			iLocal_813++;
			break;
		case 3:
			func_139();
			func_140();
			func_141();
			func_142();
			func_143();
			if (!func_127(256))
			{
				if (func_144())
				{
					func_101(256);
				}
			}
			if (!func_127(512))
			{
				if (func_145())
				{
					func_101(256);
				}
			}
			if (iLocal_14 == 1 && func_146())
			{
				func_63(&iLocal_831);
				func_147(&(Local_51.f_5));
				func_130(&iLocal_758, 9);
			}
			else if (func_28(32))
			{
				func_148();
				func_63(&iLocal_831);
				func_31(134217728);
				func_31(268435456);
				func_147(&(Local_51.f_5));
				func_130(&iLocal_758, 9);
			}
			else if (func_127(256) || func_127(512))
			{
				func_63(&iLocal_831);
				func_149();
				func_150(iLocal_35[1], (35f + 10f), 0);
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_147(&(Local_51.f_5));
				if (func_151())
				{
					func_148();
				}
				func_130(&iLocal_758, 12);
			}
			break;
		case 4:
			if (func_152())
			{
				func_130(&iLocal_758, 12);
			}
			break;
		case 7:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_150(iLocal_35[3], (35f + 10f), 0);
				func_148();
				func_156();
				func_63(&iLocal_831);
				func_130(&iLocal_758, 8);
			}
			break;
		case 8:
			func_153();
			if (func_157())
			{
				if (func_158(&uLocal_923))
				{
					if (func_159(&uLocal_923) > 2f)
					{
						func_31(8388608);
						func_160(2097152, 0);
						func_160(2097152, 1);
						func_161(0, 1);
						func_162(&(Local_51.f_5));
						func_130(&iLocal_758, 12);
					}
				}
				else
				{
					func_163(&uLocal_923);
				}
			}
			break;
		case 9:
			func_153();
			func_154(1);
			if (func_155())
			{
				func_150(iLocal_35[1], (35f + 10f), 0);
				func_150(iLocal_35[2], (35f + 10f), 0);
				func_148();
				func_156();
				func_63(&iLocal_831);
				func_130(&iLocal_758, 10);
			}
			break;
		case 10:
			func_153();
			func_154(1);
			if (func_127(4096) && !func_127(8192))
			{
				if (func_164() || func_157())
				{
					Local_51.f_46 = 1;
					func_101(8192);
					func_130(&iLocal_758, 9);
				}
			}
			if (!func_127(16384))
			{
				if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_34))
				{
					iVar3 = 0;
					while (iVar3 < 4)
					{
						if (func_165(1073741824 /* Float: 2f */, iVar3))
						{
							func_160(1073741824 /* Float: 2f */, iVar3);
							if (!PED::IS_PED_DEAD_OR_DYING(iLocal_35[iVar3], true))
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_35[iVar3], 100f, 0, 0);
							}
						}
						iVar3++;
					}
					func_101(16384);
					func_166(&iLocal_34);
				}
			}
			if ((!func_28(134217728) || func_164()) && (!func_28(268435456) || func_157()))
			{
				func_163(&uLocal_932);
				func_130(&iLocal_758, 11);
			}
			break;
		case 11:
			if (!func_28(134217728) || !func_28(268435456))
			{
				func_167(&uLocal_932);
				func_130(&iLocal_758, 12);
			}
			else if (func_168(&uLocal_932, 3f))
			{
				func_169(Global_35, 0, 536870912, -417894478);
				func_130(&iLocal_758, 12);
			}
			break;
		case 12:
			if (func_170(&iLocal_806))
			{
				return false;
			}
			if (!Local_51.f_46)
			{
				if (!func_171(1073741824 /* Float: 2f */))
				{
					if (func_158(&uLocal_923))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
						{
							func_163(&uLocal_923);
						}
						else if (func_28(262144) || func_29(Local_51.f_51, 1) > 45f)
						{
							func_167(&uLocal_923);
						}
						else if (func_168(&uLocal_923, 3f))
						{
							func_169(Global_35, 0, 1073741824 /* Float: 2f */, -417894478);
						}
					}
					else if (!func_28(262144))
					{
						if (func_29(Local_51.f_51, 1) < 45f)
						{
							func_163(&uLocal_923);
						}
					}
				}
			}
			if (func_28(33554432))
			{
				if (func_172(iLocal_1372))
				{
					if (func_158(&uLocal_929))
					{
						if (func_173(&uLocal_929) > 7000)
						{
							func_174(iLocal_1372, 580546400);
							func_167(&uLocal_929);
						}
						else
						{
							return false;
						}
					}
				}
				else if (func_175(Global_35, iLocal_34, 0))
				{
					iLocal_1372 = func_177(69, 24, func_176());
					if (func_172(iLocal_1372))
					{
						func_178(iLocal_1372, 580546400);
						func_163(&uLocal_929);
					}
				}
			}
			else if (!func_127(16384))
			{
				if ((func_179(18) && func_157()) && func_164())
				{
					if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_34))
					{
						func_101(16384);
						func_166(&iLocal_34);
					}
					else if (func_180(&iLocal_34))
					{
						func_181("RE_AMD_OBJ_HELP", 10000, 0, 0, 0, 1);
						func_31(33554432);
					}
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && !func_127(4)) && func_109(iLocal_34, Local_51.f_51, 1) > 65f)
			{
				return true;
			}
			else if (func_29(Local_51.f_51, 1) > 80f)
			{
				func_182();
				return true;
			}
			break;
	}
	return false;
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_183(iParam0, iParam1);
}

int func_35(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::_0xE98D55C5983F2509(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "INTERACT_LOCKON", fParam1, 0f, 0, 0f, 0f, 0, false, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_184(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_185(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_186(&(uParam0->f_5));
			}
			func_51(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_187(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_190(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_191(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_71(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_192(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_37(int iParam0)
{
	func_193(iParam0, 0);
	func_194(iParam0, 0);
	func_42(iParam0, 1);
	func_43(iParam0, 1);
	func_195(iParam0, 0);
	func_196(iParam0, 1);
	func_197(iParam0, 1, 1, 1);
}

var func_38(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_198(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_199(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_198(sVar0, iParam1, 0, 0, 1, 1);
}

int func_39(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

int func_40(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/];
}

void func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 16);
	}
	else
	{
		func_51(&(iParam0->f_1), 16);
	}
}

void func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 256);
	}
	else
	{
		func_51(&(iParam0->f_1), 256);
	}
}

void func_43(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 16);
	}
	else
	{
		func_50(iParam0, 67108864);
		func_50(iParam0, 16);
	}
}

void func_44(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 262144);
	}
	else
	{
		func_50(iParam0, 262144);
	}
}

void func_45(var uParam0)
{
	func_201(uParam0, (func_200(uParam0) - 6f));
	func_202(uParam0, 1);
}

void func_46(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(uParam0->f_1), 2);
	}
	else
	{
		func_51(&(uParam0->f_1), 2);
	}
}

void func_47(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 4);
	}
	else
	{
		func_51(&(iParam0->f_1), 4);
	}
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(uParam0->f_1), 131072);
	}
	else
	{
		func_51(&(uParam0->f_1), 131072);
	}
}

void func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 4);
	}
	else
	{
		func_50(iParam0, 4);
	}
}

void func_50(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_51(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_52()
{
	if (func_203(2, 2))
	{
		return;
	}
	if (func_28(2))
	{
		func_204(2, 2);
	}
}

bool func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return true;
		case 2:
			return false;
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

void func_54(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_205(uParam0);
		func_206(iParam1, uParam2);
	}
	func_207(*uParam0, 1, bParam4);
}

void func_55()
{
	vector3 vVar0;

	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_34) && ENTITY::IS_ENTITY_DEAD(iLocal_34)) && !VOLUME::DOES_VOLUME_EXIST(iLocal_834))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_34, false, false) };
		func_208(&iLocal_834, vVar0, 0f, 0f, 0f, 4f, 4f, 2f, "REAMD_VOL_VEHICLE_AVOID");
		POPULATION::_0xB56D41A694E42E86(iLocal_834, 0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_834, 0, 0, 0, -1, -1, 0);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (func_209(iLocal_34, 1, 1) > 150f)
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_34(iLocal_35[iVar0], 0, 1))
				{
					PED::_0x39A2FC5AF55A52B1(iLocal_35[iVar0], -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_45[iVar0]))
				{
					PED::_0x39A2FC5AF55A52B1(uLocal_45[iVar0], -1);
				}
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_503[iVar0 /*12*/].f_8))
				{
					func_210(Local_503[iVar0 /*12*/].f_8, 1, 1);
					OBJECT::DELETE_OBJECT(&(Local_503[iVar0 /*12*/].f_8));
				}
				iVar0++;
			}
			if (PROPSET::DOES_PROP_SET_EXIST(iLocal_830))
			{
				PROPSET::_DELETE_PROP_SET(iLocal_830, true, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_34);
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false))
		{
			if (PROPSET::DOES_PROP_SET_EXIST(iLocal_830))
			{
				PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(iLocal_830);
			}
			if (!Local_51.f_48 || func_28(-2147483648))
			{
				iVar1 = func_211(&iLocal_35);
				if (func_34(iLocal_35[iVar1], 0, 1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, -1, 2f, 1, 0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 524311, 0, 2056, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					}
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
					func_212(iLocal_35[iVar1], &iVar2, 0, 0, 1, 1);
					func_213(8388608, iVar1);
					PED::SET_PED_KEEP_TASK(iLocal_35[iVar1], true);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_34);
		}
	}
}

void func_57()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!Local_51.f_48 || func_28(-2147483648))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_34(iLocal_35[iVar2], 0, 1))
			{
				if (!func_165(8388608, iVar2) && !func_165(16777216, iVar2))
				{
					if (!bVar0 && !ENTITY::IS_ENTITY_DEAD(uLocal_45[0]))
					{
						iVar4 = uLocal_45[0];
						bVar0 = true;
					}
					else if (!bVar1 && !ENTITY::IS_ENTITY_DEAD(uLocal_45[1]))
					{
						iVar4 = uLocal_45[1];
						bVar1 = true;
					}
					else
					{
						iVar4 = 0;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_MOUNT_ANIMAL(0, iVar4, -1, -1, 2f, 1, 0, 0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						func_212(iLocal_35[iVar2], &iVar3, 0, 0, 1, 1);
						func_213(16777216, iVar2);
						PED::SET_PED_KEEP_TASK(iLocal_35[iVar2], true);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_58(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 2, !bParam0);
}

void func_59(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_214(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_215(uParam0->f_3, 524288);
		}
	}
	if (func_34(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_34((*iParam1)[iVar0], 0, 0))
			{
				func_216((*iParam1)[iVar0], bVar3);
				if (func_217(uParam0, iParam1[iVar0]))
				{
					func_218(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_34((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], false, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_220((*iParam1)[iVar0], 1073741824 /* Float: 2f */, func_219(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_221(uParam0);
	}
	func_222(uParam0);
	if (!uParam0->f_186)
	{
		func_184(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_223(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_224(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_60(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*12*/])->f_8))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&((uParam0[iVar0 /*12*/])->f_8));
		}
		iVar0++;
	}
}

void func_61(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_216((*uParam0)[iVar0], 0);
		iVar0++;
	}
}

void func_62(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_63(uParam0[iVar0]);
		iVar0++;
	}
}

void func_63(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_64(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_65(var uParam0)
{
	if (*uParam0 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(*uParam0);
		*uParam0 = 0;
	}
}

void func_66(var uParam0, int iParam1)
{
	if (func_225(uParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(uParam0, iParam1);
	}
}

void func_67(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

bool func_68(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_226(iVar0))
	{
		return false;
	}
	if (func_227(iVar0, 1) || func_227(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_69(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_228(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_229(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_187(iParam0, 128))
			{
				if (!func_230(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_231(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_232(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_105(*uParam1))
				{
					return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_234(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_229(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_235(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_236(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_237(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_187(iParam0, 128))
			{
				if (!func_238(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_231(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_235(uParam1))
					{
						return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_239(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_229(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_233(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_38("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_38("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)
{
	if (func_71(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_241(iParam1, func_240(uParam0), &(uParam0->f_172)))
		{
			if (func_34(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_71(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

void func_72(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_71(uParam0->f_3, 1) && !func_71(uParam0->f_3, 32))
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_71(uParam0->f_3, 2) && !func_71(uParam0->f_3, 32))
	{
		func_208(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_243(uParam0->f_171, 1);
	}
	if (func_71(uParam0->f_3, 1))
	{
		func_208(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, VOLUME::_GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_244(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_0x7C00CFC48A782DC0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_73(vector3 vParam0)
{
	vector3 vVar0;

	vVar0 = { Global_36 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

void func_74(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_75(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_245(uParam0->f_3);
	iVar1 = func_246(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_76(int iParam0)
{
	Local_245[0 /*32*/] = 22;
	Local_245[1 /*32*/] = 22;
	Local_245[2 /*32*/] = 22;
	Local_245[3 /*32*/] = 22;
	Local_245[0 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
	Local_245[1 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
	Local_245[2 /*32*/].f_1 = joaat("G_M_O_UNIEXCONFEDS_01");
	Local_245[3 /*32*/].f_1 = joaat("G_M_O_UNIEXCONFEDS_01");
	Local_245[0 /*32*/].f_6 = { -2.5f, 4f, 0f };
	Local_245[1 /*32*/].f_6 = { -3f, 4f, 0f };
	Local_245[2 /*32*/].f_6 = { -2.5f, 3f, 0f };
	Local_245[3 /*32*/].f_6 = { -3f, 3f, 0f };
	func_247(&(Local_245[0 /*32*/].f_22));
	func_247(&(Local_245[1 /*32*/].f_22));
	func_247(&(Local_245[2 /*32*/].f_22));
	func_247(&(Local_245[3 /*32*/].f_22));
	switch (iLocal_14)
	{
		case 0:
			StringCopy(&(Local_245[0 /*32*/].f_23), "0920_A_M_M_Civ_Poor_White_AVOID_03", 64);
			StringCopy(&(Local_245[1 /*32*/].f_23), "0926_A_M_M_Civ_Poor_White_AVOID_09", 64);
			StringCopy(&(Local_245[2 /*32*/].f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
			StringCopy(&(Local_245[3 /*32*/].f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
			Local_245[0 /*32*/].f_3 = -853749714;
			Local_245[1 /*32*/].f_3 = 2136061081;
			Local_245[2 /*32*/].f_3 = -1701454806;
			Local_245[3 /*32*/].f_3 = -73982421;
			break;
		default:
			StringCopy(&(Local_245[0 /*32*/].f_23), "0923_A_M_M_Civ_Poor_White_AVOID_06", 64);
			StringCopy(&(Local_245[1 /*32*/].f_23), "0907_A_M_M_Civ_Poor_White_AGGRESSIVE_07", 64);
			StringCopy(&(Local_245[2 /*32*/].f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
			StringCopy(&(Local_245[3 /*32*/].f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
			Local_245[0 /*32*/].f_3 = -1399124181;
			Local_245[1 /*32*/].f_3 = -556829805;
			Local_245[2 /*32*/].f_3 = 779191267;
			Local_245[3 /*32*/].f_3 = -1666457514;
			break;
	}
	Local_374[0 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	Local_374[1 /*32*/].f_1 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
	Local_374[2 /*32*/].f_1 = joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT");
	Local_374[3 /*32*/].f_1 = joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL");
	Local_374[0 /*32*/].f_6 = { -4f, 4f, 0f };
	Local_374[1 /*32*/].f_6 = { -3f, 4f, 0f };
	Local_374[2 /*32*/].f_6 = { -2f, 4f, 0f };
	Local_374[3 /*32*/].f_6 = { -1f, 4f, 0f };
	func_248(&Local_51, 2);
}

void func_77(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_249(&((iParam0[iVar0 /*32*/])->f_1));
		func_249(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_78()
{
	switch (iLocal_14)
	{
		case 1:
			Local_503[1 /*12*/].f_7 = joaat("S_INV_MONEYCLIP01X");
			Local_503[1 /*12*/] = { 0f, 0f, 0f };
			Local_503[1 /*12*/].f_3 = 0f;
			Local_503[1 /*12*/].f_10 = 0;
			Local_503[0 /*12*/].f_7 = joaat("P_TNTARMSWAGON01X");
			Local_503[0 /*12*/] = { 0f, -0.5f, 0.15f };
			Local_503[0 /*12*/].f_3 = 0f;
			Local_503[0 /*12*/].f_10 = 0;
			break;
	}
}

void func_79(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			STREAMING::REQUEST_MODEL((uParam0[iVar0 /*12*/])->f_7, false);
		}
		iVar0++;
	}
}

void func_80()
{
	Local_670[0 /*2*/] = "script_re@arms_deal";
	Local_670[0 /*2*/].f_1 = "BREAKOUT_A_PED02";
	Local_670[1 /*2*/] = "script_re@arms_deal";
	Local_670[1 /*2*/].f_1 = "BREAKOUT_B_CON02";
	Local_670[2 /*2*/] = "script_re@arms_deal";
	Local_670[2 /*2*/].f_1 = "ACTION_B_PED02";
	Local_670[3 /*2*/] = "script_re@arms_deal";
	Local_670[3 /*2*/].f_1 = "ACTION_B_CON02";
	Local_670[4 /*2*/] = "script_re@arms_deal";
	Local_670[4 /*2*/].f_1 = "ACTION_C_PED02";
	Local_670[5 /*2*/] = "script_re@arms_deal";
	Local_670[5 /*2*/].f_1 = "ACTION_C_CON02";
	Local_670[6 /*2*/] = "script_re@arms_deal";
	Local_670[6 /*2*/].f_1 = "THANKS_D_PED01";
	Local_670[7 /*2*/] = "script_re@arms_deal";
	Local_670[7 /*2*/].f_1 = "THANKS_B_PED02";
	Local_670[8 /*2*/] = "script_re@arms_deal";
	Local_670[8 /*2*/].f_1 = "THANKS_C_CON01";
	Local_670[9 /*2*/] = "script_re@arms_deal";
	Local_670[9 /*2*/].f_1 = "THANKS_A_CON02";
	func_250(Local_670[9 /*2*/], &uLocal_549);
	Local_670[10 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[10 /*2*/].f_1 = "breakout_quick_front";
	Local_670[11 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[11 /*2*/].f_1 = "breakout_quick_backleft";
	Local_670[12 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[12 /*2*/].f_1 = "breakout_quick_backright";
	Local_670[13 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[13 /*2*/].f_1 = "breakout_quick_left";
	Local_670[14 /*2*/] = "ai_react@breakouts@gen_male@kneel@bknee_down@generic@quick";
	Local_670[14 /*2*/].f_1 = "breakout_quick_right";
	func_250(Local_670[14 /*2*/], &uLocal_549);
}

void func_81()
{
	switch (iLocal_14)
	{
		case 1:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@inspectSuccess";
			sLocal_32 = func_251(0);
			sLocal_33 = func_251(1);
			break;
		case 0:
			Local_528.f_4 = "script@beat@wilderness@armsDeal@ambush";
			sLocal_32 = func_251(4);
			sLocal_33 = func_251(5);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_528.f_4))
	{
		Local_528.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_528.f_4, 64, 0, false, true);
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_528.f_1);
		}
	}
}

void func_82()
{
	Local_701 = { 0f, 0f, 0f };
	Local_701.f_3 = Global_35;
	Local_701.f_8 = 4;
	Local_701.f_19 = 4;
	Local_701.f_20 = 4;
	Local_701.f_21 = 4;
	Local_701.f_22 = 4;
	Local_701.f_17 = 3;
	Local_701.f_18 = 3;
	Local_701.f_7 = 0;
	Local_726 = { 0f, 0f, 0f };
	Local_726.f_3 = Global_35;
	Local_726.f_8 = 3;
	Local_726.f_19 = 3;
	Local_726.f_20 = 3;
	Local_726.f_21 = 3;
	Local_726.f_22 = 3;
	Local_726.f_17 = 2;
	Local_726.f_18 = 2;
	Local_726.f_7 = 0;
}

char* func_83(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "re_arms_deal_scm_00";
		case 1:
			return "re_arms_deal_scm_01";
		case 2:
			return "re_arms_deal_scm_02";
		case 3:
			return "re_arms_deal_scm_03";
		case 4:
			return "re_arms_deal_scm_04";
		case 5:
			return "re_arms_deal_scm_05";
		default:
			break;
	}
	return "";
}

bool func_84(var uParam0, char* sParam1)
{
	return true;
}

bool func_85(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*8*/]))
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*8*/]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_86(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((uParam0[iVar0 /*12*/])->f_7 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((uParam0[iVar0 /*12*/])->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_87(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_252(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_88(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_253() || !func_254(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_89(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, vParam1, fParam4, bParam5, bParam6, bParam7, false);
	ENTITY::_SET_ENTITY_FADE_IN(iVar0);
	return iVar0;
}

int func_90(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_255(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_91(int iParam0)
{
	char* sVar0;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		sVar0 = "wagon_block_honor";
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, sVar0, true);
		}
	}
}

void func_92(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		DECORATOR::DECOR_SET_INT(*iParam0, "wagonFenceValue", iParam1);
	}
}

void func_93(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_94(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		func_256(&(iLocal_35[iParam0]));
		func_257(iLocal_35[iParam0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 277, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 6, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_35[iParam0], 250, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_35[iParam0], true, true);
		func_259(iLocal_35[iParam0], func_258(iParam0), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_AMMO_IN_CLIP(iLocal_35[iParam0], func_258(iParam0), -1);
		switch (iParam0)
		{
			case 0:
			case 1:
				func_260(&(Local_51.f_5), iLocal_35[iParam0], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iParam0], iLocal_766);
				break;
			default:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_35[iParam0], iLocal_765);
				break;
		}
		if (iParam0 != 1)
		{
			func_90(iLocal_35[iParam0], &Local_51, 0);
		}
		if (iParam0 == 2)
		{
			func_262(iLocal_35[iParam0], func_261(joaat("REWARD_BEAT_LARGE"), 0, -1));
		}
		if (iLocal_14 == 1 && (iParam0 == 3 || iParam0 == 1))
		{
			func_150(iLocal_35[iParam0], (35f + 10f), 1);
		}
	}
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
	DECORATOR::DECOR_SET_INT(iParam1, "HorseScriptCreator", SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
}

Vector3 func_96(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1849.925f, -372.9819f, 42.48963f;
						case 1:
							return 1313.032f, -1633.066f, 65.66283f;
						case 2:
							return 789.1741f, -895.3729f, 50.49248f;
						case 3:
							return 853.8925f, -540.4401f, 87.58936f;
						case 4:
							return 1375.436f, -1681.776f, 66.682f;
						case 5:
							return 1575.729f, -1165.941f, 44.7604f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 1851.821f, -372.0927f, 42.44438f;
						case 1:
							return 1311.263f, -1631.586f, 65.56376f;
						case 2:
							return 791.3358f, -893.1277f, 50.59101f;
						case 3:
							return 852.2385f, -542.253f, 87.28247f;
						case 4:
							return 1378.482f, -1684.875f, 66.6328f;
						case 5:
							return 1577.251f, -1167.564f, 44.6889f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_97(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 88.35f;
						case 1:
							return 168.73f;
						case 2:
							return 91.42f;
						case 3:
							return -84.78f;
						case 4:
							return 322f;
						case 5:
							return 5f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 11:
					switch (iParam2)
					{
						case 0:
							return 76.31f;
						case 1:
							return 162.57f;
						case 2:
							return 89.34f;
						case 3:
							return -92.82f;
						case 4:
							return 333f;
						case 5:
							return 0f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_98(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == func_263(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_264(iParam0))
	{
		if (func_265(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (func_103(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_98(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_103(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_103(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_103(iParam5, 129))
	{
		if (func_103(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_103(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_103(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_103(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_264(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!func_103(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_103(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_99(var uParam0, bool bParam1)
{
	if (func_34(*uParam0, 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 277, bParam1);
	}
}

bool func_100(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_266(iParam0, 1))
	{
		return false;
	}
	if (iParam1 >= 0 && iParam1 <= 100)
	{
		iVar0 = iParam1;
	}
	else if (iParam1 > 100)
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = func_267(iParam0);
	}
	bVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0;
	return bVar1;
}

void func_101(int iParam0)
{
	if (!func_127(iParam0))
	{
		func_110(&iLocal_807, iParam0);
	}
}

void func_102(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_225(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_225(uParam0))
		{
		}
	}
}

bool func_103(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_104(var uParam0, bool bParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + 5f);
	if (bParam1)
	{
		if (!func_107(&vVar0, 50, 10, 0))
		{
		}
		else
		{
			*uParam0 = { vVar0 };
		}
	}
}

bool func_105(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_106(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

bool func_107(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_268(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_108(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, float fParam9, int iParam10)
{
	(*uParam0)[0] = fParam1;
	(*uParam0)[1] = fParam2;
	(*uParam0)[2] = fParam3;
	(*uParam0)[3] = fParam4;
	(*uParam0)[4] = fParam5;
	(*uParam0)[5] = fParam6;
	(*uParam0)[6] = fParam7;
	(*uParam0)[7] = iParam8;
	(*uParam0)[8] = fParam9;
	(*uParam0)[9] = iParam10;
}

float func_109(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_110(int iParam0, int iParam1)
{
	func_269(iParam0, iParam1);
}

bool func_111()
{
	if (!func_270(Global_1395482.f_1))
	{
		return false;
	}
	return func_271(Global_1395482.f_1, 32);
}

bool func_112(int iParam0)
{
	if (func_71(iParam0, 1))
	{
		return false;
	}
	return (1 == func_272(iParam0) || 2 == func_272(iParam0));
}

float func_113(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_114()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (Local_51.f_46)
	{
		bVar2 = func_273();
		if (!func_28(268435456))
		{
			if (func_274(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_811, 2, 3, 1) || (bVar2 && !func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(268435456);
				func_101(8192);
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				func_130(&iLocal_758, 9);
				func_277(&(Local_51.f_5), &iLocal_836);
			}
		}
		if (!func_28(134217728))
		{
			if (func_274(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_812, 0, 1, 1) || (bVar2 && func_28(8388608)))
			{
				func_275(0, 0, 0, 0);
				func_31(134217728);
				func_101(8192);
				func_276(iLocal_35[0], 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_800 = true;
				}
				func_130(&iLocal_758, 9);
				func_277(&(Local_51.f_5), &iLocal_836);
			}
			if (func_279(&iLocal_34))
			{
				func_275(0, 0, 0, 0);
				func_276(iLocal_35[0], 16777216, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_799 = true;
				}
				func_31(268435456);
				func_31(134217728);
				func_31(1073741824 /* Float: 2f */);
				func_101(8192);
				func_130(&iLocal_758, 9);
				return;
			}
		}
		return;
	}
	if (!func_28(1073741824 /* Float: 2f */))
	{
		if ((iLocal_14 == 1 || func_127(256)) || func_127(512))
		{
			if (func_279(&iLocal_34))
			{
				Local_51.f_46 = 1;
				func_275(0, 0, 0, 0);
				func_276(iLocal_35[2], 16777216, iLocal_35[3], 16777216, iLocal_35[0], 16777216, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_101(8192);
				if (iLocal_14 != 1)
				{
					func_31(134217728);
				}
				func_31(1073741824 /* Float: 2f */);
				func_130(&iLocal_758, 9);
				return;
			}
		}
	}
	if (func_164())
	{
		iVar0 = 2;
		iVar1 = 3;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 3;
	}
	if (func_273() || func_274(&iLocal_35, &(Local_51.f_5), &iLocal_836, &uLocal_810, iVar0, iVar1, 1))
	{
		Local_51.f_46 = 1;
		bVar3 = false;
		bVar4 = false;
		if (Local_51.f_5.f_10 == iLocal_35[2] || Local_51.f_5.f_10 == iLocal_35[3])
		{
			bVar3 = true;
		}
		if (func_28(67108864))
		{
			if (iLocal_1248 == 2 || iLocal_1248 == 3)
			{
				bVar3 = true;
			}
		}
		if (iLocal_836 == 1024)
		{
			bVar3 = false;
		}
		func_275(0, 0, 0, 0);
		if (iLocal_14 == 1)
		{
			if (bVar3)
			{
				if (!func_280(&Local_51, 0, 40f) || !func_280(&Local_51, 1, 40f))
				{
					func_31(268435456);
					func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				}
				else
				{
					bVar4 = true;
				}
			}
			else if (!func_280(&Local_51, 2, 40f) || !func_280(&Local_51, 3, 40f))
			{
				func_31(134217728);
				func_276(iLocal_35[0], 67108864, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
					bLocal_800 = true;
				}
			}
			else
			{
				bVar4 = true;
			}
		}
		else
		{
			bVar4 = true;
			if (func_281(iLocal_35[0]) || func_281(iLocal_35[1]))
			{
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
				func_31(268435456);
				func_282(&(Local_51.f_5));
				func_277(&(Local_51.f_5), &iLocal_836);
				func_148();
				func_130(&iLocal_758, 7);
				return;
			}
		}
		if (bVar4)
		{
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			if (iLocal_836 == 1024)
			{
				func_31(536870912);
				func_284(iLocal_35[1], Global_35, func_283(8388608, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (bVar3)
			{
				func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, iLocal_35[0], 67108864, iLocal_35[1], 1048576, -1, -1, -1, -1);
			}
			else
			{
				func_276(iLocal_35[0], 67108864, iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, -1, -1, -1, -1);
				if (!bLocal_794)
				{
					func_278(iLocal_35[1], 1);
				}
			}
		}
		func_277(&(Local_51.f_5), &iLocal_836);
		func_147(&(Local_51.f_5));
		func_130(&iLocal_758, 9);
	}
	if ((func_28(128) && !ENTITY::IS_ENTITY_DEAD(iLocal_34)) && func_29(Local_51.f_51, 1) < 7f)
	{
		Local_51.f_46 = 1;
		func_31(268435456);
		func_31(134217728);
		func_101(8192);
		func_276(iLocal_35[2], 67108864, iLocal_35[3], 524288, 0, 0, 0, 0, -1, -1, -1, -1);
		func_277(&(Local_51.f_5), &iLocal_836);
		func_147(&(Local_51.f_5));
		func_130(&iLocal_758, 9);
	}
}

void func_115()
{
	float fVar0;
	float fVar1;

	if ((func_28(262144) || func_28(1048576)) || Local_51.f_46)
	{
		return;
	}
	if (iLocal_786 == 4)
	{
		if (func_29(Local_51.f_51, 1) > 55f)
		{
			return;
		}
	}
	else if (func_29(Local_51.f_51, 1) > 35f)
	{
		return;
	}
	fVar0 = 20f;
	if (!func_28(65536))
	{
		if ((func_28(4096) && func_34(iLocal_35[iLocal_1250], 0, 0)) && func_285(iLocal_35[iLocal_1250], iLocal_1250))
		{
			fVar1 = func_286(&Local_51, iLocal_1250);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_31(65536);
				func_287(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(131072))
	{
		if ((func_28(8192) && func_34(iLocal_35[iLocal_1251], 0, 0)) && func_285(iLocal_35[iLocal_1251], iLocal_1251))
		{
			fVar1 = func_286(&Local_51, iLocal_1251);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_31(131072);
				func_287(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(16384))
	{
		if ((func_28(1024) && func_34(iLocal_35[iLocal_1248], 0, 0)) && func_285(iLocal_35[iLocal_1248], iLocal_1248))
		{
			fVar1 = func_286(&Local_51, iLocal_1248);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_31(16384);
				func_287(32768);
			}
		}
	}
	if (!func_28(32768))
	{
		if ((func_28(2048) && func_34(iLocal_35[iLocal_1249], 0, 0)) && func_285(iLocal_35[iLocal_1249], iLocal_1249))
		{
			fVar1 = func_286(&Local_51, iLocal_1249);
			if (fVar1 < fVar0 || fVar1 == fVar0)
			{
				fVar0 = fVar1;
				func_287(65536);
				func_287(131072);
				func_287(16384);
				func_31(32768);
			}
		}
	}
	if (iLocal_14 == 1)
	{
		if (func_28(2048))
		{
			if (!func_288(iLocal_35[3], iLocal_35[1]))
			{
				func_287(32768);
			}
		}
	}
}

void func_116()
{
	int iVar0;

	if ((!func_28(4096) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1250])) || func_165(2097152, iLocal_1250))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iLocal_1276) && func_28(65536))
		{
			func_31(262144);
			func_290(&iLocal_1276, 9, iLocal_1250);
		}
	}
	if (iLocal_1276 > 0)
	{
		if (func_291(iLocal_1250))
		{
			if (func_165(65536, iLocal_1250))
			{
				func_292(iLocal_1250);
				func_130(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1276)
	{
		case 0:
			if (func_165(16384, iLocal_1250) || func_165(16384, iLocal_1251))
			{
				func_293(iLocal_1250, 0, 0, 0);
				func_290(&iLocal_1276, 10, iLocal_1251);
				return;
			}
			func_294(iLocal_1250, 0, func_28(2097152));
			func_293(iLocal_1250, func_28(2097152), 1, 1);
			func_290(&iLocal_1276, 4, iLocal_1250);
			break;
		case 2:
			func_295(iLocal_1250, uLocal_45[0], 0, 1f, 0);
			func_290(&iLocal_1276, 4, iLocal_1250);
			break;
		case 4:
			if (PED::IS_PED_ON_MOUNT(iLocal_35[iLocal_1250]))
			{
				func_290(&iLocal_1276, 6, iLocal_1250);
			}
			break;
		case 6:
			if (PED::IS_PED_FULLY_ON_MOUNT(iLocal_35[iLocal_1251], false))
			{
				func_294(iLocal_1250, 0, func_28(2097152));
				func_293(iLocal_1250, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(iLocal_785, iLocal_786), 1.75f, -1, 0.25f, 1, 40000f);
				TASK::TASK_MOVE_IN_TRAFFIC(0, 2f, 0, 0);
				func_212(iLocal_35[iLocal_1250], &iVar0, 0, 0, 1, 1);
				iVar0 = 0;
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_296(iLocal_785, iLocal_786), 1.75f, -1, 0.25f, 1, 40000f);
				func_212(iLocal_35[iLocal_1251], &iVar0, 0, 0, 1, 1);
				func_290(&iLocal_1276, 5, iLocal_1250);
				iLocal_801 = MISC::GET_GAME_TIMER();
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_801) < 3500)
			{
			}
			else
			{
				if (!PED::DOES_GROUP_EXIST(iLocal_935))
				{
					iLocal_935 = PED::CREATE_GROUP(2);
					PED::SET_GROUP_FORMATION(iLocal_935, 3);
				}
				if (!PED::_IS_PED_GROUP_LEADER(iLocal_35[iLocal_1250], iLocal_935))
				{
					PED::SET_PED_AS_GROUP_LEADER(iLocal_35[iLocal_1250], iLocal_935, false);
				}
				func_290(&iLocal_1276, 7, iLocal_1250);
				Jump @769; //curOff = 649
				if ((!func_28(524288) && func_28(262144)) && func_28(131072))
				{
					TASK::TASK_STAND_STILL(iLocal_35[iLocal_1250], -1);
					func_290(&iLocal_1276, 8, iLocal_1250);
				}
				Jump @769; //curOff = 714
				if (func_28(524288))
				{
					func_290(&iLocal_1276, 2, iLocal_1250);
				}
				Jump @769; //curOff = 739
				if (func_297(iLocal_1250, iLocal_1251))
				{
					func_290(&iLocal_1276, 2, iLocal_1250);
				}
			}
			default:
				break;
	}
}

void func_117()
{
	if ((!func_28(8192) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1251])) || func_165(2097152, iLocal_1251))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_289(iLocal_1277) && func_28(131072))
		{
			func_31(262144);
			func_290(&iLocal_1277, 9, iLocal_1251);
		}
	}
	if (iLocal_1277 > 0)
	{
		if (func_291(iLocal_1251))
		{
			if (func_165(65536, iLocal_1251))
			{
				func_292(iLocal_1251);
				func_130(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1277)
	{
		case 0:
			if (func_165(16384, iLocal_1250) || func_165(16384, iLocal_1251))
			{
				func_293(iLocal_1251, 0, 0, 0);
				func_290(&iLocal_1277, 10, iLocal_1251);
				return;
			}
			func_63(&(uLocal_40[iLocal_1251]));
			func_294(iLocal_1251, 1, (func_28(2097152) || func_165(131072, iLocal_1251)));
			func_293(iLocal_1251, func_28(2097152), 1, 1);
			func_290(&iLocal_1277, 4, iLocal_1251);
			break;
		case 2:
			func_295(iLocal_1251, uLocal_45[1], 0, 1f, 0);
			func_290(&iLocal_1277, 4, iLocal_1251);
			break;
		case 4:
			if (PED::IS_PED_FULLY_ON_MOUNT(iLocal_35[iLocal_1251], false))
			{
				func_294(iLocal_1251, 1, (func_28(2097152) || func_165(131072, iLocal_1251)));
				func_293(iLocal_1251, 0, 1, 1);
				func_290(&iLocal_1277, 5, iLocal_1251);
			}
			break;
		case 5:
			if (PED::DOES_GROUP_EXIST(iLocal_935))
			{
				TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1251], true, false);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_35[iLocal_1251], iLocal_935);
				PED::SET_PED_CONFIG_FLAG(iLocal_35[iLocal_1251], 279, true);
				func_298(iLocal_35[iLocal_1251]);
				func_290(&iLocal_1277, 7, iLocal_1251);
			}
			break;
		case 7:
			break;
		case 9:
			if (func_297(iLocal_1251, iLocal_1250))
			{
				func_290(&iLocal_1277, 2, iLocal_1251);
			}
			break;
	}
}

void func_118()
{
	int iVar0;

	if ((!func_28(1024) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1248])) || (func_165(2097152, iLocal_1248) && !func_165(4194304, iLocal_1248)))
	{
		return;
	}
	if (!func_28(262144))
	{
		if (func_299(iLocal_1274) && func_28(16384))
		{
			func_110(&iLocal_806, 262144);
			func_300(&iLocal_1274, 9, iLocal_1248);
		}
	}
	if (iLocal_1274 > 0)
	{
		if (func_291(iLocal_1248))
		{
			if (func_165(65536, iLocal_1248))
			{
				func_292(iLocal_1248);
				func_130(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1274)
	{
		case 0:
			if (func_165(16384, iLocal_1248) || func_165(16384, iLocal_1249))
			{
				func_293(iLocal_1248, 0, 0, 0);
				func_300(&iLocal_1274, 13, iLocal_1248);
				return;
			}
			func_294(iLocal_1248, 2, func_28(4194304));
			func_293(iLocal_1248, func_28(4194304), 1, 1);
			if (func_28(8388608) && func_29(Local_51.f_51, 1) < 35f)
			{
				if (iLocal_1248 == 1)
				{
					iLocal_1278 = 7;
				}
				TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iLocal_35[iLocal_1248], Local_670[iLocal_1278 /*2*/], Local_670[iLocal_1278 /*2*/].f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
				func_300(&iLocal_1274, 2, iLocal_1248);
			}
			else
			{
				func_300(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35[iLocal_1248], Local_670[iLocal_1278 /*2*/], Local_670[iLocal_1278 /*2*/].f_1, 1))
			{
				func_300(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 3:
			if (iLocal_1248 == 0)
			{
				func_284(iLocal_35[0], iLocal_35[iLocal_1249], func_283(32768, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_301(32768);
			}
			if ((iLocal_1248 == 2 && !func_171(4096)) && func_28(32))
			{
				func_284(iLocal_35[2], 0, func_283(4096, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				func_301(4096);
			}
			func_302(iLocal_35[iLocal_1248], -1, 131072);
			func_300(&iLocal_1274, 4, iLocal_1248);
			break;
		case 4:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1248], iLocal_34, false)) && func_303(iLocal_35[iLocal_1248], iLocal_34, -1))
			{
				func_300(&iLocal_1274, 6, iLocal_1248);
			}
			if (!func_304(iLocal_35[iLocal_1248], 242628503) && !func_304(iLocal_35[iLocal_1248], -1794415470))
			{
				func_302(iLocal_35[iLocal_1248], -1, 131072);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && (((!func_28(2048) || !ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1249])) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1249])) || PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1249], iLocal_34, false)))
			{
				func_294(iLocal_1248, 2, func_28(4194304));
				func_293(iLocal_1248, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_83(iLocal_785, iLocal_786)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_83(iLocal_785, iLocal_786)))
				{
					func_101(64);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 524311, 0, 3080, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				}
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
				func_212(iLocal_35[iLocal_1248], &iVar0, 0, 0, 1, 1);
				func_300(&iLocal_1274, 7, iLocal_1248);
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_34, 0))
				{
					if (func_109(iLocal_34, func_305(iLocal_785, iLocal_786), 1) < 5f)
					{
						func_101(128);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_35[iLocal_1248], iLocal_34, 3f, 524295);
						func_300(&iLocal_1274, 10, iLocal_1248);
					}
				}
			}
			if (func_306(Global_35, iLocal_35[iLocal_1248]) < 15f)
			{
				IK::_0x66F9EB44342BB4C5(iLocal_35[iLocal_1248], &Local_726);
			}
			if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
			{
				if (!func_171(262144))
				{
					func_169(iLocal_35[iLocal_1248], Global_35, 262144, 291934926);
				}
			}
			break;
		case 8:
			if (func_28(524288))
			{
				func_300(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 9:
			if (func_297(iLocal_1248, iLocal_1249))
			{
				func_300(&iLocal_1274, 3, iLocal_1248);
			}
			break;
		case 10:
			break;
		case 11:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, false, false))
			{
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				func_300(&iLocal_1274, 13, iLocal_1248);
			}
			else if (!func_127(128) && func_175(iLocal_35[iLocal_1248], iLocal_34, 1))
			{
				func_101(64);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_34, func_83(iLocal_785, iLocal_786), 0, 0, 2056, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_34, 3f, 524295);
				func_212(iLocal_35[iLocal_1248], &iVar0, 0, 0, 1, 1);
				func_300(&iLocal_1274, 12, iLocal_1248);
				PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
				bLocal_802 = true;
			}
			else
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iLocal_1248], 6, true);
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
				func_300(&iLocal_1274, 13, iLocal_1248);
			}
			break;
		case 12:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, false, false))
			{
				func_307(iLocal_1248, iLocal_788[iLocal_1248]);
				func_160(4194304, iLocal_1248);
				func_300(&iLocal_1274, 13, iLocal_1248);
			}
			else
			{
				if (bLocal_802)
				{
					if (func_308(iLocal_35[iLocal_1248], 0) == joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iLocal_1248], func_258(iLocal_1248), false, 0, false, false);
					}
					TASK::TASK_COMBAT_HATED_TARGETS(iLocal_35[iLocal_1248], -1f);
				}
				if (func_127(64))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_34, 0))
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_34, 5f);
						if (func_109(iLocal_34, func_305(iLocal_785, iLocal_786), 1) < 10f)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_35[iLocal_1248], 6, true);
							func_307(iLocal_1248, iLocal_788[iLocal_1248]);
							func_160(4194304, iLocal_1248);
							PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1248], true);
							func_300(&iLocal_1274, 10, iLocal_1248);
						}
					}
				}
				else
				{
					func_307(iLocal_1248, iLocal_788[iLocal_1248]);
					func_160(4194304, iLocal_1248);
					func_300(&iLocal_1274, 13, iLocal_1248);
				}
			}
			break;
	}
}

void func_119()
{
	int iVar0;

	if ((!func_28(2048) || ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1249])) || func_165(2097152, iLocal_1249))
	{
		return;
	}
	if ((func_28(1024) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1248])) && ENTITY::IS_ENTITY_DEAD(iLocal_35[iLocal_1248]))
	{
		func_309(iLocal_1249, 0, 1.5f, 0);
		func_287(2048);
	}
	if (!func_28(262144))
	{
		if (func_310(iLocal_1275) && func_28(32768))
		{
			func_31(262144);
			func_300(&iLocal_1275, 9, iLocal_1249);
		}
	}
	if (iLocal_1275 > 0)
	{
		if (func_291(iLocal_1249))
		{
			if (func_165(65536, iLocal_1249))
			{
				func_292(iLocal_1249);
				func_130(&iLocal_758, 9);
			}
		}
	}
	switch (iLocal_1275)
	{
		case 0:
			if (func_165(16384, iLocal_1248) || func_165(16384, iLocal_1249))
			{
				func_293(iLocal_1249, 0, 0, 0);
				func_300(&iLocal_1275, 13, iLocal_1249);
				return;
			}
			func_63(&(uLocal_40[iLocal_1249]));
			func_294(iLocal_1249, 3, (func_28(4194304) || func_165(131072, iLocal_1249)));
			func_293(iLocal_1249, func_28(4194304), 1, 1);
			func_300(&iLocal_1275, 3, iLocal_1249);
			break;
		case 3:
			func_302(iLocal_35[iLocal_1249], 0, 262144);
			PED::SET_PED_KEEP_TASK(iLocal_35[iLocal_1249], true);
			func_300(&iLocal_1275, 4, iLocal_1249);
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iLocal_1249], iLocal_34, false))
			{
				func_294(iLocal_1249, 3, (func_28(4194304) || func_165(131072, iLocal_1249)));
				func_293(iLocal_1249, 0, 1, 1);
				func_300(&iLocal_1275, 6, iLocal_1249);
			}
			if (!func_304(iLocal_35[iLocal_1249], 242628503) && !func_304(iLocal_35[iLocal_1249], -1794415470))
			{
				func_302(iLocal_35[iLocal_1249], 0, 262144);
			}
			break;
		case 6:
			if (func_306(Global_35, iLocal_35[iLocal_1249]) < 15f)
			{
				IK::_0x66F9EB44342BB4C5(iLocal_35[iLocal_1249], &Local_726);
			}
			else if (func_304(iLocal_35[iLocal_1249], 242628503))
			{
				TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1249], true, false);
			}
			if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
			{
				if (!func_304(iLocal_35[iLocal_1249], 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (func_308(iLocal_35[iLocal_1249], 0) == joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iLocal_1249], func_258(iLocal_1249), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					func_212(iLocal_35[iLocal_1249], &iVar0, 0, 0, 1, 1);
				}
			}
			break;
		case 9:
			if (func_297(iLocal_1249, iLocal_1248))
			{
				func_300(&iLocal_1275, 3, iLocal_1249);
			}
			break;
	}
}

void func_120()
{
	if (func_311(Global_35, 0))
	{
		func_312(&Local_936);
	}
	else
	{
		func_313(&Local_936);
	}
}

void func_121()
{
	int iVar0;

	if (!bLocal_794)
	{
		return;
	}
	if (func_311(Global_35, 0))
	{
		return;
	}
	bLocal_794 = false;
	if (func_34(iLocal_795, 0, 1))
	{
		if (bLocal_797)
		{
			bLocal_797 = false;
			func_316(iLocal_35[iLocal_798], func_314(iLocal_14, iLocal_798, 0, bLocal_800, bLocal_799), 1744022339, 0, 1, &(Local_245[iLocal_798 /*32*/].f_23), func_315(iLocal_14, iLocal_798, 0, bLocal_800, bLocal_799), 1);
			bLocal_800 = false;
			bLocal_799 = false;
		}
		else
		{
			switch (iLocal_798)
			{
				case 2:
					switch (iLocal_796)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
				case 3:
					switch (iLocal_796)
					{
						case 1024:
							iVar0 = 1;
							break;
						case 2048:
							iVar0 = 2;
							break;
					}
					break;
			}
			func_284(iLocal_795, Global_35, func_283(iLocal_796, 2), 0, -1082130432 /* Float: -1f */, iVar0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_122()
{
	func_317(0);
	func_317(1);
	func_317(2);
	func_317(3);
}

void func_123()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		if (!bLocal_793)
		{
			func_58(0);
			bLocal_793 = true;
		}
	}
	if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false) == iLocal_34)
	{
		if (bLocal_793)
		{
			func_58(1);
			bLocal_793 = false;
		}
	}
	else if (bLocal_793)
	{
		if (func_29(Local_51.f_51, 1) >= 30f)
		{
			func_58(1);
			bLocal_793 = false;
		}
	}
	else if (func_29(Local_51.f_51, 1) < 30f)
	{
		func_58(0);
		bLocal_793 = true;
	}
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[iVar0]))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			return;
		}
		if (PED::IS_PED_HOGTIED(iLocal_35[iVar0]))
		{
			func_318(&(iLocal_35[iVar0]), 1, 1, 1);
			iLocal_35[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_125()
{
	int iVar0;
	int iVar1;

	if (Local_51.f_46)
	{
		return;
	}
	if (bLocal_804)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_803) > 3000)
		{
			Local_51.f_46 = 1;
			func_275(500, 350, 600, 200);
			func_31(134217728);
			func_31(268435456);
			func_101(8192);
			func_130(&iLocal_758, 9);
			func_276(iLocal_35[2], 1024, iLocal_35[3], 1024, 0, 0, 0, 0, 3, 2, -1, -1);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
	{
		VEHICLE::GET_DRAFT_ANIMAL_COUNT(iLocal_34, &iVar0, &iVar1);
		if (iVar0 != iVar1)
		{
			bLocal_804 = true;
			iLocal_803 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_51.f_46)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_45[iVar0]))
		{
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_45[iVar0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_45[iVar0], Global_35, 1, 1))
		{
		}
		else
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_45[iVar0], Global_35, 1, 1))
			{
				iVar1 = Global_35;
			}
			else
			{
				iVar1 = PED::GET_PED_SOURCE_OF_DEATH(uLocal_45[iVar0]);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
				}
				else
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (Global_35 == iVar2 || Global_1935630.f_40 == iVar2)
					{
						Local_51.f_46 = 1;
						func_275(400, 200, 600, 500);
						func_31(134217728);
						func_31(268435456);
						func_101(8192);
						func_276(iLocal_35[2], 2048, iLocal_35[3], 2048, 0, 0, 0, 0, 3, 2, -1, -1);
						func_130(&iLocal_758, 9);
					}
				}
				iVar0++;
			}
		}
	}
}

bool func_127(int iParam0)
{
	return func_103(iLocal_807, iParam0);
}

bool func_128(int iParam0, vector3 vParam1, var uParam4, var uParam5)
{
	int iVar0;

	if (iParam0 == 1)
	{
		return true;
	}
	if (func_105(vParam1))
	{
		return false;
	}
	else if (TASK::DOES_SCENARIO_POINT_EXIST(*uParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
		{
			iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(*uParam4);
			func_319(joaat("P_TRUNK06X"), vParam1, &iVar0, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"));
			func_320(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REPEATER_AMMOBOX"), 24, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
			func_320(joaat("P_TRUNK06X"), vParam1, &iVar0, joaat("AMMO_REVOLVER_AMMOBOX"), 18, *uParam5, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 0);
			return true;
		}
		else
		{
			*uParam4 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(*uParam5);
		}
	}
	else
	{
		*uParam5 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 5f, 1, false);
	}
	return false;
}

bool func_129()
{
	switch (iLocal_763)
	{
		case 0:
			iLocal_763 = 1;
			break;
		case 1:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_528.f_1, true, false))
			{
				return false;
			}
			else
			{
				iLocal_763 = 2;
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_32))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_528.f_1, sLocal_32);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_33))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_528.f_1, sLocal_33);
			}
			iLocal_763 = 3;
			break;
		case 3:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_32) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_32))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_33) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_528.f_1, sLocal_33))
			{
				return false;
			}
			iLocal_763 = 4;
			break;
		case 4:
			return true;
	}
	return false;
}

void func_130(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

float func_131(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 45f;
				case 1:
					return 45f;
				case 2:
					return 45f;
				case 3:
					return 55f;
				case 4:
					return 45f;
				case 5:
					return 55f;
				default:
					break;
			}
			break;
	}
	return 45f;
}

bool func_132(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_321(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (func_322(uParam1, iParam5))
	{
		if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_323(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_133(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Curious");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Shocked");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Angry");
		if (func_53(iParam0) && iLocal_14 == 1)
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_35[iParam0], "Default_Panic");
		}
	}
}

void func_134(var uParam0, int iParam1, int iParam2)
{
	func_328(uParam0, func_324(), "", func_325(iParam1, iParam2, Local_51.f_51), 0, func_326(), func_327(iParam1, iParam2), func_327(iParam1, iParam2), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0);
}

void func_135(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_330(uParam1[0 /*17*/], func_329(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_330(uParam1[1 /*17*/], func_329(10), 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	func_137(uParam0, 0);
	func_138(uParam1, bParam3, 0);
	*uParam2 = func_331(1, 0, 0) | 64 | 128;
}

void func_136(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (iParam1 == 1)
	{
		sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
		if (bParam3)
		{
			sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
		}
		func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_POS", "RE_AMD_LWL_V2_GREET_NEG", 0);
	}
	else
	{
		func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", 0);
	}
}

void func_137(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_167(&(iParam0->f_18));
}

void func_138(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_333(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

void func_139()
{
	if (!Local_51.f_46)
	{
		switch (iLocal_14)
		{
			case 1:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
				{
					switch (iLocal_814)
					{
						case 0:
							if (func_334(iLocal_35[0], iLocal_35[2], 1, 291934926))
							{
								func_335(1891783641, iLocal_35[0], 1);
								iLocal_814++;
							}
							break;
						case 1:
							if (func_334(iLocal_35[2], iLocal_35[0], 2, 291934926))
							{
								PED::_0xF9CBD46433E36713(Global_35, iLocal_35[2], 0f, 0f, 0f, 10f, 40f, 100f, 100f, "ARMS_DEAL");
								func_335(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 2:
							if (func_334(iLocal_35[0], iLocal_35[2], 4, 291934926))
							{
								func_335(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 3:
							if (func_334(iLocal_35[2], iLocal_35[0], 8, 291934926))
							{
								iLocal_814++;
							}
							break;
						case 4:
							if (func_334(iLocal_35[0], iLocal_35[2], 16, 291934926))
							{
								iLocal_814++;
							}
							break;
						case 5:
							if (func_334(iLocal_35[2], iLocal_35[0], 32, 291934926))
							{
								iLocal_814++;
							}
							break;
					}
				}
				break;
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
				{
					switch (iLocal_814)
					{
						case 0:
							if (func_334(iLocal_35[0], iLocal_35[2], 1, 1744022339))
							{
								func_335(1891783641, iLocal_35[0], 1);
								iLocal_814++;
							}
							break;
						case 1:
							if (func_334(iLocal_35[2], iLocal_35[0], 64, 1744022339))
							{
								func_335(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 2:
							if (func_334(iLocal_35[2], iLocal_35[0], 128, 1744022339))
							{
								func_335(1891783641, iLocal_35[2], 1);
								iLocal_814++;
							}
							break;
						case 3:
							if (func_334(iLocal_35[3], iLocal_35[0], 512, 1744022339))
							{
								func_335(1891783641, iLocal_35[3], 1);
								iLocal_814++;
							}
							break;
						case 4:
							if (func_334(iLocal_35[3], iLocal_35[0], 16384, 1744022339))
							{
								iLocal_814++;
							}
							break;
						case 5:
							if (func_334(iLocal_35[1], iLocal_35[2], 8192, 1744022339))
							{
								iLocal_814++;
							}
							break;
						case 6:
							if (func_334(iLocal_35[2], iLocal_35[3], 32768, 291934926))
							{
								iLocal_814++;
							}
							break;
					}
				}
				break;
		}
	}
}

void func_140()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_528.f_1, false))
	{
		fLocal_829 = -1f;
		return;
	}
	fLocal_829 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_528.f_1);
}

void func_141()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			func_336(iVar0);
			if (func_165(2, iVar0) || (func_28(1) && iLocal_1252 == iVar0))
			{
			}
			else if (func_337(iVar0, "ENDSINWALK", 1))
			{
				func_338(iVar0, 1);
				func_213(2, iVar0);
			}
		}
		iVar0++;
	}
	switch (iLocal_14)
	{
		case 1:
			if (func_28(1) && iLocal_1252 == 3)
			{
			}
			else if (func_339(iLocal_35[3], "ENDSINSTAND") && !func_165(2, 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				PED::FORCE_PED_MOTION_STATE(0, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				TASK::TASK_STAND_STILL(0, 250);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, 0, 1f, 262145, 0);
				func_212(iLocal_35[3], &iVar1, 0, 0, 1, 1);
				func_31(2048);
				func_213(32, 3);
				iLocal_1249 = 3;
				func_213(1, 3);
				func_213(2, 3);
			}
			if (func_337(2, "cashGrab", 134217728))
			{
			}
			else if (func_337(2, "cashExchange", 268435456))
			{
				func_262(iLocal_35[2], func_261(joaat("REWARD_BEAT_SMALL"), 0, -1));
				func_262(iLocal_35[0], func_261(joaat("REWARD_BEAT_LARGE"), 0, -1));
			}
			else if (func_337(0, "cashDrop", 536870912))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*12*/].f_8))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8);
					OBJECT::DELETE_OBJECT(&(Local_503[1 /*12*/].f_8));
				}
				func_31(16);
			}
			break;
		case 0:
			if (!func_28(256))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[0], -1145714767))
				{
					func_31(256);
					func_340(&iLocal_765, &iLocal_766, 1, 0, 0);
				}
			}
			if (func_337(2, "fireGun", 67108864))
			{
				func_335(1066055203, iLocal_35[2], 1);
			}
			if (func_337(3, "fireGun", 67108864))
			{
				func_154(0);
				func_335(1066055203, iLocal_35[3], 1);
			}
			break;
	}
}

void func_142()
{
	float fVar0;
	bool bVar1;

	if (iLocal_14 == 0 && !func_165(2, 3))
	{
		if (func_341(9))
		{
			if (func_342(iLocal_35[2], Global_35, 0, 20f, 0) || func_342(iLocal_35[3], Global_35, 0, 20f, 0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[3]), iLocal_35[3]);
				iLocal_1249 = 3;
				func_31(2048);
				func_31(32768);
				func_213(32, 3);
				func_213(2, 3);
			}
		}
	}
	if (!func_28(32) && iLocal_14 != 1)
	{
		if ((func_341(1) && iLocal_14 == 0) || (func_341(8) && iLocal_14 == 1))
		{
			return;
		}
		fVar0 = func_29(Local_51.f_51, 1);
		bVar1 = false;
		if (fVar0 < 3f)
		{
			bVar1 = true;
		}
		else if (fVar0 < 7f)
		{
			if (func_158(&uLocal_926))
			{
				if (func_173(&uLocal_926) > 2000)
				{
					bVar1 = true;
					func_167(&uLocal_926);
				}
			}
			else
			{
				func_163(&uLocal_926);
			}
		}
		else if (func_158(&uLocal_926))
		{
			func_167(&uLocal_926);
		}
		if (bVar1)
		{
			func_31(32);
			func_101(4096);
			func_344(0);
			func_284(iLocal_35[2], iLocal_35[0], func_283(4194304, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

void func_143()
{
	if (iLocal_14 == 1)
	{
		return;
	}
	if (!iLocal_788[3])
	{
		iLocal_788[3] = 1;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[2], joaat("GUNEQUIPPED")) && !iLocal_788[2])
	{
		iLocal_788[2] = 1;
	}
}

bool func_144()
{
	if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_528.f_1, false)) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_528.f_1, false))
	{
		return true;
	}
	return false;
}

bool func_145()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(iLocal_35[iVar0], 0, 1))
		{
			if (!func_165(2, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	if (((Local_51.f_46 || func_127(256)) || func_127(512)) || func_165(2, iLocal_1252))
	{
		return false;
	}
	fVar2 = func_29(Local_51.f_51, 1);
	if (func_291(1))
	{
		if (func_165(8192, 1))
		{
			if (iLocal_761 < 1)
			{
				func_345(1, 0, 3);
				func_346(&iLocal_761, 2);
			}
			else if (func_165(131072, 1) && !func_165(524288, 1))
			{
				func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 1, 0);
				func_293(1, 0, 1, 1);
				func_213(524288, 1);
			}
		}
		else if (func_165(65536, 1))
		{
			func_346(&iLocal_761, 7);
		}
	}
	if (func_291(3))
	{
		if (func_165(8192, 3))
		{
			if (iLocal_761 < 1)
			{
				func_345(3, 1, 0);
				func_346(&iLocal_761, 2);
			}
			else if (func_165(131072, 3) && !func_165(524288, 3))
			{
				func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 1, 0);
				func_293(3, 0, 1, 1);
				func_213(524288, 3);
			}
		}
		else if (func_165(65536, 3))
		{
			func_346(&iLocal_761, 7);
		}
	}
	switch (iLocal_761)
	{
		case 0:
			if (fVar2 < 16f)
			{
				iLocal_815++;
				if (iLocal_815 > 3)
				{
					iLocal_815 = 0;
				}
				if (func_347(iLocal_35[iLocal_815], &uLocal_867, &uLocal_866, 0))
				{
					if (func_341(8))
					{
						func_346(&iLocal_761, 8);
					}
					else
					{
						func_348(&uLocal_837);
						func_346(&iLocal_761, 1);
					}
				}
			}
			break;
		case 1:
			func_148();
			fVar0 = func_286(&Local_51, 1);
			fVar1 = func_286(&Local_51, 3);
			if (fVar1 < fVar0)
			{
				func_345(3, 1, 0);
			}
			else
			{
				func_345(1, 0, 3);
			}
			func_346(&iLocal_761, 2);
			break;
		case 2:
			if (func_127(-2147483648))
			{
				func_345(3, 1, 0);
				func_346(&iLocal_761, 7);
				return false;
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iLocal_1252]), iLocal_35[iLocal_1252]);
			TASK::CLEAR_PED_TASKS(iLocal_35[iLocal_1252], true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 1000, -1f, -1f, -1f);
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_670[iLocal_50 /*2*/], Local_670[iLocal_50 /*2*/].f_1, Global_35, -1, 4f, -4f, 67125760, 0f, false, false, -1f, "UpperbodyFixup_filter", 65538, -1f);
			func_212(iLocal_35[iLocal_1252], &iVar4, 0, 0, 1, 1);
			fLocal_828 = func_286(&Local_51, iLocal_1252);
			func_163(&uLocal_905);
			func_31(1);
			func_63(&iLocal_831);
			func_213(131072, iLocal_1252);
			func_160(8192, iLocal_1252);
			if (func_53(iLocal_1252))
			{
				func_294(iLocal_1252, 1, 0);
			}
			else
			{
				func_294(iLocal_1252, 3, 0);
			}
			func_293(iLocal_1252, 0, 1, 0);
			func_346(&iLocal_761, 3);
			break;
		case 3:
			if (func_103(iLocal_805, 65536))
			{
				if ((!func_127(2048) && !func_165(16384, iLocal_1252)) && func_159(&uLocal_911) > 2f)
				{
					if (func_53(iLocal_1252))
					{
						func_294(iLocal_1252, 1, 1);
					}
					else
					{
						func_294(iLocal_1252, 3, 1);
					}
					func_293(iLocal_1252, 1, 1, 0);
					func_101(2048);
				}
			}
			else if (func_339(iLocal_35[iLocal_1252], "RE_AD_WARN"))
			{
				func_163(&uLocal_911);
				func_284(iLocal_35[iLocal_1252], Global_35, func_283(65536, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_349(iLocal_35[iLocal_1252], &(uLocal_40[iLocal_1252]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				func_110(&iLocal_805, 65536);
			}
			if (fVar2 < 3.5f || func_350(iLocal_35[iLocal_1252], 0, &uLocal_837, &iLocal_865, 0, 0))
			{
				func_346(&iLocal_761, 7);
			}
			if (fLocal_828 != 0f)
			{
				if (fVar2 > (fLocal_828 + 10f))
				{
					func_346(&iLocal_761, 6);
				}
				else if (func_165(524288, iLocal_1252) && fVar2 > (fLocal_828 + 1f))
				{
					func_346(&iLocal_761, 6);
				}
			}
			if (func_159(&uLocal_905) > 4f && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_35[iLocal_1252], Local_670[iLocal_50 /*2*/], Local_670[iLocal_50 /*2*/].f_1, 1))
			{
				func_346(&iLocal_761, 4);
			}
			if (func_28(16))
			{
				func_130(&iLocal_758, 4);
			}
			break;
		case 4:
			fVar3 = func_351(func_286(&Local_51, iLocal_1252), 0f, 8f);
			PED::_0x8ACC0506743A8A5C(iLocal_35[iLocal_1252], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			if ((iLocal_1252 == 3 && !func_352(iLocal_35[iLocal_1252])) || (iLocal_1252 == 1 && func_352(iLocal_35[iLocal_1252])))
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, (fVar3 * 0.95f), (fVar3 * 0.95f), 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_353(iLocal_785, iLocal_786, iLocal_1252), Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
			func_212(iLocal_35[iLocal_1252], &iVar4, 0, 0, 1, 1);
			iLocal_788[iLocal_1252] = 1;
			func_163(&uLocal_905);
			func_346(&iLocal_761, 5);
			break;
		case 5:
			if (fVar2 < 3.5f || func_350(iLocal_35[iLocal_1252], 0, &uLocal_837, &iLocal_865, 0, 0))
			{
				func_346(&iLocal_761, 7);
			}
			if (fLocal_828 != 0f)
			{
				if (fVar2 > (fLocal_828 + 10f))
				{
					func_346(&iLocal_761, 6);
				}
				else if (func_165(524288, iLocal_1252) && fVar2 > (fLocal_828 + 1f))
				{
					func_346(&iLocal_761, 6);
				}
			}
			if (func_159(&uLocal_905) > 5f)
			{
				if (!func_341(5) || func_341(6))
				{
					func_346(&iLocal_761, 7);
				}
			}
			if (func_28(16))
			{
				func_130(&iLocal_758, 4);
			}
			break;
		case 6:
			if (func_34(iLocal_35[iLocal_1252], 0, 1) && func_34(iLocal_35[iLocal_1253], 0, 1))
			{
				iLocal_788[iLocal_1252] = 0;
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[iLocal_1252], iLocal_35[iLocal_1253], 0, -1f, -1f, -1f);
				func_346(&iLocal_761, 8);
				PED::_0x78815FC52832B690(iLocal_35[iLocal_1252], 1);
			}
			break;
		case 7:
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			Local_51.f_46 = 1;
			func_31(64);
			func_163(&uLocal_905);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_35[0], 700);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_35[2], 700);
			if (iLocal_865 == 1024)
			{
				func_31(536870912);
				func_284(iLocal_35[1], Global_35, func_283(8388608, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (func_127(-2147483648))
			{
				func_284(iLocal_35[iLocal_1252], Global_35, func_283(134217728, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				func_278(iLocal_35[iLocal_1252], iLocal_1252);
			}
			return true;
		case 8:
			if (fVar2 < 3.5f)
			{
				func_346(&iLocal_761, 7);
			}
			if (func_28(1))
			{
				if (fVar2 < 9f)
				{
					func_346(&iLocal_761, 7);
				}
			}
			break;
	}
	return false;
}

void func_147(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 500);
	func_41(iParam0, 1);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_355(iParam0, 1);
	func_356(iParam0, 8000);
	func_44(iParam0, 0);
}

void func_148()
{
	Local_51.f_44 = 1;
	Local_51.f_45 = 1;
	if (!func_203(2, 2))
	{
		if (func_357(iLocal_35[2]) == 2 || func_357(iLocal_35[3]) == 2)
		{
			func_31(2);
		}
	}
}

void func_149()
{
	if (iLocal_1252 == 3)
	{
		func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
	}
	else if (iLocal_1252 == 1)
	{
		func_359(1, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_150(int iParam0, float fParam1, bool bParam2)
{
	if (func_34(iParam0, 0, 0))
	{
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, bParam2, fParam1);
	}
}

bool func_151()
{
	if (func_29(Local_51.f_51, 1) > 30f)
	{
		return false;
	}
	return true;
}

bool func_152()
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_35[iLocal_1252]))
	{
		return false;
	}
	if (iLocal_762 < 10)
	{
		if (func_291(1))
		{
			if (func_165(65536, 1))
			{
				func_360(&iLocal_762, 10);
			}
		}
		if (func_291(3))
		{
			if (func_165(65536, 3))
			{
				func_360(&iLocal_762, 10);
			}
		}
	}
	switch (iLocal_762)
	{
		case 0:
			func_31(1048576);
			func_31(128);
			func_136(&(Local_936[1 /*75*/].f_21), iLocal_14, 1, 1);
			func_293(1, 1, 1, 0);
			func_136(&(Local_936[3 /*75*/].f_21), iLocal_14, 1, 1);
			func_293(3, 1, 1, 0);
			func_361(iLocal_1252, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_31(64);
			func_360(&iLocal_762, 1);
			break;
		case 1:
			func_344(0);
			func_163(&uLocal_911);
			func_169(iLocal_35[uLocal_1269[0]], Global_35, 2097152, 1744022339);
			if (func_362(iLocal_35[uLocal_1269[0]], Local_528.f_1))
			{
				func_213(2, uLocal_1269[0]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[0]]), iLocal_35[uLocal_1269[0]]);
			}
			func_363(iLocal_35[uLocal_1269[0]], func_258(uLocal_1269[0]), 0);
			func_163(&uLocal_914);
			func_360(&iLocal_762, 2);
			break;
		case 2:
			if (func_173(&uLocal_914) > 250)
			{
				if (func_362(iLocal_35[uLocal_1269[1]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[1]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[1]]), iLocal_35[uLocal_1269[1]]);
				}
				func_363(iLocal_35[uLocal_1269[1]], func_258(uLocal_1269[1]), 1);
				func_163(&uLocal_914);
				func_360(&iLocal_762, 3);
			}
			break;
		case 3:
			if (func_173(&uLocal_914) > 450)
			{
				if (func_362(iLocal_35[uLocal_1269[2]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[2]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[2]]), iLocal_35[uLocal_1269[2]]);
				}
				func_363(iLocal_35[uLocal_1269[2]], func_258(uLocal_1269[2]), 1);
				func_163(&uLocal_914);
				func_360(&iLocal_762, 4);
			}
			break;
		case 4:
			if (func_173(&uLocal_914) > 450)
			{
				if (func_362(iLocal_35[uLocal_1269[3]], Local_528.f_1))
				{
					func_213(2, uLocal_1269[3]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[uLocal_1269[3]]), iLocal_35[uLocal_1269[3]]);
				}
				func_363(iLocal_35[uLocal_1269[3]], func_258(uLocal_1269[3]), 1);
				func_167(&uLocal_914);
				func_163(&uLocal_917);
				func_360(&iLocal_762, 5);
			}
			break;
		case 5:
			fVar0 = func_286(&Local_51, iLocal_1252);
			if (fVar0 > 15f)
			{
				func_360(&iLocal_762, 6);
			}
			else if (((func_159(&uLocal_917) > 2f && fVar0 < 7f) || (func_159(&uLocal_917) > 5f && fVar0 < 15f)) || func_280(&Local_51, iLocal_1252, 5f))
			{
				func_275(0, 0, 0, 0);
				func_169(iLocal_35[3], Global_35, 524288, 291934926);
				func_360(&iLocal_762, 10);
			}
			break;
		case 6:
			if (func_364(-3f, 1, 0, 0))
			{
				func_163(&uLocal_914);
				func_309(2, 0, 1065353216 /* Float: 1f */, 0);
				func_360(&iLocal_762, 7);
			}
			break;
		case 7:
			if (func_173(&uLocal_914) > 300)
			{
				func_163(&uLocal_914);
				func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
				func_360(&iLocal_762, 8);
			}
			break;
		case 8:
			if (func_173(&uLocal_914) > 400)
			{
				func_163(&uLocal_914);
				func_365(0, 0, 1065353216 /* Float: 1f */, 0);
				if (!func_103(iLocal_805, 16))
				{
					func_169(iLocal_35[0], iLocal_35[2], 16, 291934926);
				}
				func_360(&iLocal_762, 9);
			}
			break;
		case 9:
			if (func_173(&uLocal_914) > 450)
			{
				func_167(&uLocal_914);
				func_359(1, 0, 1065353216 /* Float: 1f */, 0);
				func_360(&iLocal_762, 11);
			}
			break;
		case 10:
			func_63(&iLocal_831);
			func_354(&uLocal_1254);
			func_31(134217728);
			func_31(268435456);
			func_147(&(Local_51.f_5));
			func_130(&iLocal_758, 9);
			break;
		case 11:
			return true;
	}
	return false;
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iVar0]))
		{
			func_336(iVar0);
		}
		iVar0++;
	}
}

void func_154(bool bParam0)
{
	int iVar0;

	if (func_28(8))
	{
		return;
	}
	if (bParam0)
	{
		if ((((func_34(iLocal_35[0], 0, 0) && func_366(iLocal_35[0])) || (func_34(iLocal_35[1], 0, 0) && func_366(iLocal_35[1]))) || (func_34(iLocal_35[2], 0, 0) && func_366(iLocal_35[2]))) || (func_34(iLocal_35[3], 0, 0) && func_366(iLocal_35[3])))
		{
			return;
		}
	}
	if (func_34(uLocal_45[0], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(uLocal_45[0], true, false);
		if (PED::_GET_RIDER_OF_MOUNT(uLocal_45[0], true) == 0)
		{
			TASK::TASK_FLEE_COORD(uLocal_45[0], Local_51.f_51, 3, 0, -1f, -1, 0);
		}
		else
		{
			TASK::TASK_HORSE_ACTION(uLocal_45[0], 5, iLocal_34, 0);
		}
		PED::SET_PED_KEEP_TASK(uLocal_45[0], true);
	}
	if (func_34(uLocal_45[1], 0, 1))
	{
		TASK::CLEAR_PED_TASKS(uLocal_45[1], true, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::_GET_RIDER_OF_MOUNT(uLocal_45[1], true) == 0)
		{
			TASK::TASK_FLEE_COORD(0, Local_51.f_51, 3, 0, -1f, -1, 0);
		}
		else
		{
			TASK::TASK_HORSE_ACTION(0, 5, iLocal_34, 0);
		}
		func_212(uLocal_45[1], &iVar0, 0.2f, 0.25f, 1, 1);
		PED::SET_PED_KEEP_TASK(uLocal_45[1], true);
	}
	func_110(&iLocal_806, 8);
}

bool func_155()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1) || func_127(512))
	{
		func_367();
		if (func_28(8388608))
		{
			func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		else if (iLocal_14 == 1)
		{
			func_368(&iLocal_35, &uLocal_767);
		}
		else
		{
			func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
		}
		return true;
	}
	switch (iLocal_764)
	{
		case 0:
			func_367();
			if (func_28(8388608))
			{
				func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			else if (iLocal_14 == 1)
			{
				func_368(&iLocal_35, &uLocal_767);
			}
			else if (func_127(4096))
			{
				func_340(&iLocal_765, &iLocal_766, 1, 0, 0);
			}
			else
			{
				func_340(&iLocal_765, &iLocal_766, 1, func_28(268435456), func_28(134217728));
			}
			func_354(&uLocal_1254);
			func_369();
			func_361(iLocal_1252, &iLocal_35, &uLocal_1269, &uLocal_1259);
			func_370(&uLocal_1269, &uLocal_1264);
			func_371(&iLocal_764, 1);
			break;
		case 1:
			func_337(uLocal_1269[0], "onKneesBreakout", 33554432);
			if (!func_165(8, uLocal_1269[0]))
			{
				func_372(uLocal_1269[0], uLocal_1259[0], uLocal_1264[0], 50);
				func_213(2, uLocal_1269[0]);
			}
			func_163(&uLocal_914);
			func_371(&iLocal_764, 2);
			break;
		case 2:
			func_337(uLocal_1269[1], "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > uLocal_1254[1] || !func_34(iLocal_35[uLocal_1269[1]], 0, 1)) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_35[uLocal_1269[1]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[1]))
				{
					func_372(uLocal_1269[1], uLocal_1259[1], uLocal_1264[1], 100);
					func_213(2, uLocal_1269[1]);
				}
				func_163(&uLocal_914);
				func_371(&iLocal_764, 3);
			}
			break;
		case 3:
			func_337(uLocal_1269[2], "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > uLocal_1254[2] || !func_34(iLocal_35[uLocal_1269[2]], 0, 1)) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_35[uLocal_1269[2]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[2]))
				{
					func_372(uLocal_1269[2], uLocal_1259[2], uLocal_1264[2], 150);
					func_213(2, uLocal_1269[2]);
				}
				func_163(&uLocal_914);
				func_371(&iLocal_764, 4);
			}
			break;
		case 4:
			func_337(uLocal_1269[3], "onKneesBreakout", 33554432);
			if ((func_173(&uLocal_914) > uLocal_1254[3] || !func_34(iLocal_35[uLocal_1269[3]], 0, 1)) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_35[uLocal_1269[3]], Local_528.f_1))
			{
				if (!func_165(8, uLocal_1269[3]))
				{
					func_372(uLocal_1269[3], uLocal_1259[3], uLocal_1264[3], 200);
					func_213(2, uLocal_1269[3]);
				}
				func_167(&uLocal_914);
				func_371(&iLocal_764, 6);
			}
			break;
		case 5:
			func_373(Local_528.f_1);
			break;
		case 6:
			return true;
	}
	return false;
}

void func_156()
{
	if (func_28(268435456))
	{
		func_340(&iLocal_765, &iLocal_766, 0, 1, 0);
		if (!func_165(2097152, 2) && !func_165(8, 2))
		{
			func_213(2097152, 2);
			func_349(iLocal_35[2], &(uLocal_40[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(2))
			{
				func_213(1073741824 /* Float: 2f */, 2);
				func_375(2, &(uLocal_40[2]));
			}
			else
			{
				func_307(2, iLocal_788[2]);
			}
		}
		if (!func_165(2097152, 3) && !func_165(8, 3))
		{
			func_213(2097152, 3);
			func_349(iLocal_35[3], &(uLocal_40[3]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(3))
			{
				func_213(1073741824 /* Float: 2f */, 3);
				func_375(3, &(uLocal_40[3]));
			}
			else
			{
				func_307(3, iLocal_788[3]);
			}
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[2]))
		{
			func_349(iLocal_35[2], &(uLocal_40[2]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[3])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[3]))
		{
			func_349(iLocal_35[3], &(uLocal_40[3]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
	}
	if (func_28(134217728))
	{
		func_340(&iLocal_765, &iLocal_766, 0, 0, 1);
		if (!func_165(2097152, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[0]))
		{
			func_213(2097152, 0);
			func_349(iLocal_35[0], &(uLocal_40[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(0))
			{
				func_213(1073741824 /* Float: 2f */, 0);
				func_375(0, &(uLocal_40[0]));
			}
			else
			{
				func_307(0, iLocal_788[0]);
			}
		}
		if (!func_165(2097152, 1) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[1]))
		{
			func_213(2097152, 1);
			func_349(iLocal_35[1], &(uLocal_40[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			if (func_374(1))
			{
				func_213(1073741824 /* Float: 2f */, 1);
				func_375(1, &(uLocal_40[1]));
			}
			else
			{
				func_307(1, iLocal_788[1]);
			}
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[0]))
		{
			func_349(iLocal_35[0], &(uLocal_40[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
		if ((!MAP::DOES_BLIP_EXIST(uLocal_40[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_35[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_35[1]))
		{
			func_349(iLocal_35[1], &(uLocal_40[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
		}
	}
}

bool func_157()
{
	if (!func_34(iLocal_35[2], 0, 1) && !func_34(iLocal_35[3], 0, 1))
	{
		return true;
	}
	if (func_165(8, 2) && func_165(8, 3))
	{
		return true;
	}
	return false;
}

bool func_158(var uParam0)
{
	return func_376(*uParam0, 1);
}

float func_159(var uParam0)
{
	if (!func_158(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_377(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_378() - uParam0->f_1);
}

void func_160(int iParam0, int iParam1)
{
	if (func_165(iParam0, iParam1))
	{
		func_379(&(uLocal_751[iParam1]), iParam0);
	}
}

void func_161(int iParam0, int iParam1)
{
	if (func_34(iLocal_35[iParam0], 0, 1))
	{
		func_309(iParam0, 0, 1065353216 /* Float: 1f */, 0);
		func_358(iParam1, 0, 1065353216 /* Float: 1f */, 0, 1);
	}
	else
	{
		func_309(iParam1, 0, 1065353216 /* Float: 1f */, 0);
	}
}

void func_162(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 1500);
	func_41(iParam0, 1);
	func_47(iParam0, 1);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

void func_163(var uParam0)
{
	func_380(uParam0, 0f);
}

bool func_164()
{
	if (!func_34(iLocal_35[0], 0, 1) && !func_34(iLocal_35[1], 0, 1))
	{
		return true;
	}
	if (func_165(8, 0) && func_165(8, 1))
	{
		return true;
	}
	return false;
}

bool func_165(int iParam0, int iParam1)
{
	return func_103(uLocal_751[iParam1], iParam0);
}

void func_166(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		DECORATOR::DECOR_REMOVE(*iParam0, "wagonFenceValue");
	}
}

void func_167(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_168(var uParam0, float fParam1)
{
	if (func_381(uParam0, fParam1))
	{
		func_167(uParam0);
		return true;
	}
	return false;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	func_284(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, iParam3, 1, 0, 0);
	func_301(iParam2);
}

bool func_170(int iParam0)
{
	if (!func_103(*iParam0, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_34))
		{
			if (func_382(iLocal_34) == 0)
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_34))
				{
					func_383(iLocal_34);
					func_110(iParam0, 4);
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_171(int iParam0)
{
	return func_103(iLocal_805, iParam0);
}

bool func_172(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

int func_173(var uParam0)
{
	if (!func_158(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000f));
	}
	if (func_377(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000f));
	}
	return (func_384() - BUILTIN::ROUND((uParam0->f_1 * 1000f)));
}

void func_174(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

bool func_175(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				return PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

Vector3 func_176()
{
	return 1410.669f, 271.409f, 89.4489f;
}

int func_177(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_105(vParam2))
	{
		return -1;
	}
	iVar2 = func_385(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_386(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_386(iVar0) == iParam1 && func_387(iVar0) == iParam0) && iVar2 == func_388(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_178(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		MAP::BLIP_ADD_MODIFIER(Global_36308[iParam0], iParam1);
	}
}

bool func_179(int iParam0)
{
	return !func_389(iParam0, 1);
}

bool func_180(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (Global_1430231.f_4)
	{
		return false;
	}
	if (func_390(iVar0))
	{
		func_92(iParam0, func_391(iVar0));
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "wagonFenceValue") && DECORATOR::DECOR_GET_INT(*iParam0, "wagonFenceValue") != 0)
	{
		return true;
	}
	return false;
}

var func_181(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_182()
{
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && func_34(iLocal_35[iLocal_1248], 0, 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iLocal_1248], -258271821, true) != 1)
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_35[iLocal_1248], iLocal_34, 3f, 524295);
	}
}

bool func_183(int iParam0, int iParam1)
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
	if (func_103(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_103(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_103(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_103(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_184(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_392(uParam0) };
	iVar3 = func_223(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_185(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_186(int iParam0)
{
	func_42(iParam0, 1);
	func_393(iParam0, 20);
}

bool func_187(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

void func_188(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_242(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_394())
	{
		func_395(1);
	}
	func_396(iParam2, uParam0->f_43);
	func_397(iParam2, 0, 0, 0, 0);
	if (func_398(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_214(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_399(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_189(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

void func_190(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 && func_400())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_187(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_401(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_402(uParam0, bVar0);
		func_403(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (func_404(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_189(&(uParam0->f_121));
		}
	}
}

bool func_191(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30f;
	fVar1 = 150f;
	if (func_71(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_405())
			{
				fVar0 = 15f;
			}
		}
		if (func_406(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_407(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_406(uParam2, fVar1))
		{
			if (!func_408(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_409(uParam2->f_3, 2) && func_410(2))
		{
			return false;
		}
		if (func_71(iParam0, 4194304) || func_71(iParam0, 33554432))
		{
			if (func_411(1))
			{
				return false;
			}
		}
	}
	if (func_412(Global_35))
	{
		return false;
	}
	if (func_413(0, 1, 1) && !func_414(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_71(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_415(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_407(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_416())
		{
			return false;
		}
		iVar2 = func_418(func_417());
		if (func_419(iVar2))
		{
			if (func_420(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_421(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_422(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_192(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_423(uParam0->f_51))
	{
		func_424(uParam0->f_51, 0);
		fVar0 = func_425(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_426());
		bVar1 = func_219(!func_71(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_428(iVar2, func_427(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 16384);
	}
	else
	{
		func_51(&(iParam0->f_1), 16384);
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 2048);
	}
	else
	{
		func_51(&(iParam0->f_1), 2048);
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(&(iParam0->f_1), 128);
	}
	else
	{
		func_51(&(iParam0->f_1), 128);
	}
}

void func_196(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 256);
	}
	else
	{
		func_50(iParam0, 256);
	}
}

void func_197(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_51(iParam0, 268435456);
	}
	else
	{
		func_50(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_51(iParam0, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_50(iParam0, 1073741824 /* Float: 2f */);
	}
	if (!bParam3)
	{
		func_51(iParam0, 536870912);
	}
	else
	{
		func_50(iParam0, 536870912);
	}
}

var func_198(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	uVar15 = UIFEED::_SHOW_OBJECTIVE(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_199(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_429(sParam1));
}

float func_200(int iParam0)
{
	return iParam0->f_24;
}

void func_201(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 1);
	}
	else
	{
		func_50(iParam0, 1);
	}
}

bool func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_430(iParam1);
	if (func_431(iVar0, iParam0))
	{
		return true;
	}
	return false;
}

void func_204(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_430(iParam1);
	if (!func_432(iParam0))
	{
		func_433(iParam0, 0);
	}
	if (!func_431(iVar0, iParam0))
	{
		func_434(iVar0, iParam0);
	}
}

void func_205(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_206(int* iParam0, var uParam1)
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
	func_435(iParam0, uParam1, 1);
	func_436(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

void func_207(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

void func_208(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

float func_209(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_437(Global_35, iParam0, bParam1, bParam2);
}

void func_210(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

int func_211(int iParam0)
{
	if (func_34((*iParam0)[2], 0, 1))
	{
		return 2;
	}
	else if (func_34((*iParam0)[3], 0, 1))
	{
		return 3;
	}
	else if (func_34((*iParam0)[0], 0, 1))
	{
		return 0;
	}
	else if (func_34((*iParam0)[1], 0, 1))
	{
		return 1;
	}
	return 2;
}

void func_212(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_213(int iParam0, int iParam1)
{
	if (!func_165(iParam0, iParam1))
	{
		func_110(&(uLocal_751[iParam1]), iParam0);
	}
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_215(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 || iParam1);
}

void func_216(int iParam0, bool bParam1)
{
	if (func_34(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_35(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

bool func_217(var uParam0, var uParam1)
{
	if (func_71(uParam0->f_3, 16777216))
	{
		if (func_357(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_218(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_219(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_220(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_34(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_219(fParam2 >= 0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_438(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_0x39A2FC5AF55A52B1(iVar1, -1);
				}
				PED::_0x39A2FC5AF55A52B1(iParam0, -1);
			}
		}
	}
}

void func_221(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_439(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_440(uParam0);
	func_441(uParam0);
	func_442(uParam0);
	if (!func_443(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		func_424(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_444();
	}
	if (!func_445(uParam0->f_3) && !func_71(uParam0->f_3, 256))
	{
		func_446(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_64(uParam0->f_173);
	func_64(uParam0->f_172);
}

void func_222(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_223(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_447() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_225(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_226(int iParam0)
{
	if (((func_227(iParam0, 1) && func_227(iParam0, 2)) && func_227(iParam0, 8)) && func_227(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_227(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

Vector3 func_228(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_242(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_448(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_449(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_229(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (func_71(iParam0, 32))
	{
		if (func_450(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_451(Global_35, &(uParam1->f_12)) };
				if (!func_105(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_452(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_425(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_426());
		if (func_453(Global_1310750[iParam0 /*111*/], 33554432))
		{
			func_428(iVar0, func_427(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			func_428(iVar0, func_427(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (func_71(iParam0, 1))
		{
			func_454(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_455(iParam0);
}

bool func_230(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_456(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_187(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180f);
		fVar2 = BUILTIN::TO_FLOAT(func_457(iParam0));
		fVar1 = 60f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65f);
		fVar2 = BUILTIN::TO_FLOAT(func_457(iParam0));
		fVar1 = 60f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10f));
	TASK::_0x8F8C84363810691A(*uParam1, 7f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_231(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_458(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_71(iParam0, 1))
			{
				if (func_187(iParam0, 2))
				{
				}
			}
			func_459(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_460(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_460(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_112(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_232(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_448(iParam1))
	{
		if (!func_461(iParam1, iVar0))
		{
			vVar4 = { func_228(iParam1, iVar0) };
			if (!func_105(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_237(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_462(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_105(vVar4))
	{
	}
	return vVar1;
}

int func_233(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_38("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_234(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_448(iParam0))
	{
		vVar1 = { func_228(iParam0, iVar0) };
		if (func_463(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_235(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_236(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;

	vVar2 = { *uParam0 };
	func_321(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (func_322(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_105(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_464(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_233(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_237(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_231(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_71(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_238(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_239(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_465(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_466(iParam0, uParam2))
	{
		return false;
	}
	if (!func_467(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_468(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_240(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_241(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = VOLUME::_CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

bool func_242(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_243(int iParam0, int iParam1)
{
	if (func_469(iParam0))
	{
		return;
	}
	if (func_470(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

void func_244(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_50(&iParam1, 8192);
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_246(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_471(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_472(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_472(), iVar3);
		if (func_473(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_247(int iParam0)
{
	func_110(iParam0, 256);
}

void func_248(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_249(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

void func_250(char* sParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1[iVar0 /*8*/]))
		{
			StringCopy(uParam1[iVar0 /*8*/], sParam0, 64);
			STREAMING::REQUEST_ANIM_DICT(uParam1[iVar0 /*8*/]);
			return;
		}
		iVar0++;
	}
}

char* func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblSuccessMain";
		case 1:
			return "pblSuccessSkip";
		case 2:
			return "pblAmbushDealers";
		case 3:
			return "pblAmbushDealersSkip";
		case 4:
			return "pblAmbushConfeds";
		case 5:
			return "pblAmbushConfedsSkip";
		case 6:
			return "pblActionB";
		case 7:
			return "pblActionB";
		case 8:
			return "pblActionC";
		case 9:
			return "pblActionC";
		default:
			break;
	}
	return "INVALID PBL";
}

bool func_252(var uParam0)
{
	if (!func_474(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_474(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_0x610438375E5D1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

bool func_253()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_254(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> /*32*/ sVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { func_475(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_476(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_477(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_478(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_257(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_475(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_476(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_479(&(uParam0->f_22)));
					Var2 = { func_475(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_476(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_477(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_480(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_481(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_255(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_256(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	PED::_0x8ACC0506743A8A5C(*uParam0, joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_482(iParam1));
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

int func_258(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("WEAPON_REPEATER_CARBINE");
	}
	return joaat("WEAPON_REVOLVER_CATTLEMAN");
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_483(iParam3, 1);
	bVar1 = func_483(iParam3, 2);
	bVar2 = !func_483(iParam3, 4);
	bVar3 = func_483(iParam3, 8);
	bVar4 = !func_483(iParam3, 16);
	bVar5 = func_483(iParam3, 32);
	bVar6 = func_483(iParam3, 64);
	return func_484(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_260(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

int func_261(int iParam0, bool bParam1, int iParam2)
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
	if (bParam1 && func_485(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
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
			if (func_486(iVar25, 0) && func_487(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

bool func_262(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_488(iParam0);
		return func_489(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

int func_263(var uParam0)
{
	return uParam0;
}

bool func_264(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_265(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_266(int iParam0, bool bParam1)
{
	if (!func_490(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 75;
		case 2:
			return 50;
		case 1:
			return 50;
		case 3:
			return 35;
		case 4:
			return 35;
		case 5:
			return 50;
		default:
			break;
	}
	return 0;
}

bool func_268(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_269(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_270(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_271(int iParam0, int iParam1)
{
	if (!func_270(iParam0))
	{
		return false;
	}
	return (Global_1395482.f_2[iParam0] && iParam1) != 0;
}

int func_272(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_273()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_34))
	{
		return false;
	}
	if (func_28(1024) && (iLocal_1274 == 7 || iLocal_1274 == 10))
	{
		if (VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_35) || VEHICLE::_0xA9E185D498B9AC67(iLocal_34, Global_1935630.f_40))
		{
			if (!func_158(&uLocal_920))
			{
				func_163(&uLocal_920);
			}
			else if (func_377(&uLocal_920))
			{
				func_491(&uLocal_920);
			}
			else if (func_159(&uLocal_920) > 6f)
			{
				func_31(67108864);
				return true;
			}
		}
		else if (func_158(&uLocal_920) && !func_377(&uLocal_920))
		{
			func_492(&uLocal_920);
		}
	}
	return false;
}

bool func_274(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_493(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_350((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_275(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_344(0);
	func_494(iLocal_35[0], iParam0);
	func_494(iLocal_35[1], iParam1);
	func_494(iLocal_35[2], iParam2);
	func_494(iLocal_35[3], iParam3);
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bLocal_794)
	{
	}
	if (func_34(iParam2, 0, 1) && iParam3 != 0)
	{
		if (func_171(iParam3))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam2;
		iLocal_796 = iParam3;
		if (iParam9 != -1)
		{
			iLocal_798 = iParam9;
		}
	}
	else if (func_34(iParam0, 0, 1))
	{
		if (func_171(iParam1))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam0;
		iLocal_796 = iParam1;
		if (iParam8 != -1)
		{
			iLocal_798 = iParam8;
		}
	}
	else if (func_34(iParam6, 0, 1) && iParam7 != 0)
	{
		if (func_171(iParam7))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam6;
		iLocal_796 = iParam7;
		if (iParam11 != -1)
		{
			iLocal_798 = iParam11;
		}
	}
	else if (func_34(iParam4, 0, 1) && iParam5 != 0)
	{
		if (func_171(iParam5))
		{
			return;
		}
		bLocal_794 = true;
		iLocal_795 = iParam4;
		iLocal_796 = iParam5;
		if (iParam10 != -1)
		{
			iLocal_798 = iParam10;
		}
	}
}

void func_277(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630.f_30 = 0;
		Global_1935630.f_31 = 0;
		Global_1935630.f_25 = 0;
		Global_1935630.f_39 = 0;
		iParam0->f_8 = func_384();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_495(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_278(int iParam0, int iParam1)
{
	if (bLocal_797)
	{
	}
	if (bLocal_794)
	{
		return;
	}
	bLocal_797 = true;
	bLocal_794 = true;
	iLocal_795 = iParam0;
	iLocal_798 = iParam1;
}

bool func_279(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, *iParam0, false))
	{
		return true;
	}
	if (AITRANSPORT::_0x619E63980BFC0096(Global_35, *iParam0, 0))
	{
		iVar0 = PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(Global_35);
		switch (iVar0)
		{
			case -1:
				return true;
			case 0:
				return true;
			default:
				break;
		}
	}
	else
	{
		return PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, *iParam0);
	}
	return false;
}

bool func_280(var uParam0, int iParam1, float fParam2)
{
	return func_286(uParam0, iParam1) <= fParam2;
}

int func_281(int iParam0)
{
	if (func_34(iParam0, 0, 1))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, -1145714767))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_282(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 1500);
	func_41(iParam0, 0);
	func_47(iParam0, 0);
	func_42(iParam0, 0);
	func_43(iParam0, 0);
	func_44(iParam0, 0);
}

char* func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			return func_497("AMD", "LWL", "CHECK", func_496(iLocal_14));
		case 2:
			return func_497("AMD", "LWL", "MANAGE", func_496(iLocal_14));
		case 4:
			return func_497("AMD", "LWL", "DONT_ASK", func_496(iLocal_14));
		case 8:
			return func_497("AMD", "LWL", "AGREED", func_496(iLocal_14));
		case 16:
			return func_497("AMD", "LWL", "FELLERS", func_496(iLocal_14));
		case 32:
			return func_497("AMD", "LWL", "CRIMES", func_496(iLocal_14));
		case 64:
			return func_497("AMD", "LWL", "DISAPPOINTED", func_496(iLocal_14));
		case 128:
			return func_497("AMD", "LWL", "CRAP", func_496(iLocal_14));
		case 512:
			return func_497("AMD", "LWL", "HANDS_UP", func_496(iLocal_14));
		case 1024:
			return "PROPERTY_STOLEN";
		case 2048:
			switch (iParam1)
			{
				case 2:
					return "ARRIVAL_COMBAT_RAID_MALE";
				case 3:
					return "CALLOUT_JUST_KILL_EM_MALE";
				default:
					break;
			}
			break;
		case 4096:
			return func_497("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 8192:
			return func_497("AMD", "LWL", "MOURN", func_496(iLocal_14));
		case 16384:
			return func_497("AMD", "LWL", "BED", func_496(iLocal_14));
		case 32768:
			return func_497("AMD", "LWL", "FLEE", func_496(iLocal_14));
		case 65536:
			return func_497("AMD", "LWL", "WARN", func_496(iLocal_14));
		case 131072:
			return func_497("AMD", "LWL", "THREATEN", func_496(iLocal_14));
		case 262144:
			return "BLOCKED_GENERIC";
		case 524288:
			return func_497("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 1048576:
			return func_497("AMD", "LWL", "AGGRO", func_496(iLocal_14));
		case 2097152:
			return func_497("AMD", "LWL", "WARN_AGGRO", func_496(iLocal_14));
		case 4194304:
			return func_497("AMD", "LWL", "GUNFIGHT_EARLY", func_496(iLocal_14));
		case 8388608:
			return func_497("AMD", "LWL", "AGGRO_MOUNT", func_496(iLocal_14));
		case 16777216:
			return func_497("AMD", "LWL", "AGGRO_WAGON", func_496(iLocal_14));
		case 33554432:
			return func_497("AMD", "LWL", "AGGRO_STEAL", func_496(iLocal_14));
		case 67108864:
			return func_497("AMD", "LWL", "AGGRO_POST_SHOOTOUT", func_496(iLocal_14));
		case 134217728:
			return func_497("AMD", "LWL", "FEUD", func_496(iLocal_14));
		case 256:
			return func_497("AMD", "LWL", "RIP", func_496(iLocal_14));
		case 268435456:
			return func_497("AMD", "LWL", "EXIT_WAGON", func_496(iLocal_14));
		case 536870912:
			return func_497("AMD", "LWL", "PLYFINAL_KILLED", func_496(iLocal_14));
		case 1073741824:
			return func_497("AMD", "LWL", "PLYFINAL_WATCHED", func_496(iLocal_14));
	}
	return "INVALID DIALOGUE STRING";
}

bool func_284(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_498(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	if (!func_342(iParam0, Global_35, 0, 20f, 0))
	{
		return false;
	}
	if (PED::_0x2DD4E0E26DFAD97D(iParam0, Global_35, 1110704128 /* Float: 45f */))
	{
		return false;
	}
	if (!PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		return false;
	}
	return true;
}

float func_286(var uParam0, int iParam1)
{
	return uParam0->f_98[iParam1];
}

void func_287(int iParam0)
{
	if (func_28(iParam0))
	{
		func_379(&iLocal_806, iParam0);
	}
}

bool func_288(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	else if (!func_34(iParam1, 0, 1))
	{
		return true;
	}
	if (func_209(iParam0, 1, 1) < func_209(iParam1, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_289(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 10)
	{
		return true;
	}
	return false;
}

void func_290(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam1;
}

int func_291(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 1:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 2:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		case 3:
			return func_499(iParam0, &(Local_936[iParam0 /*75*/]));
		default:
			break;
	}
	return 0;
}

void func_292(int iParam0)
{
	if (func_53(iParam0))
	{
		func_31(134217728);
	}
	else
	{
		func_31(268435456);
	}
}

void func_293(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	Local_15[iParam0 /*4*/][0] = bParam1;
	Local_15[iParam0 /*4*/][1] = iParam2;
	Local_15[iParam0 /*4*/][2] = iParam3;
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_165(524288, 1) || func_165(524288, 3))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 0:
			func_500(&(Local_936[iParam0 /*75*/].f_21), bParam2, bVar0);
			break;
		case 1:
			func_501(&(Local_936[iParam0 /*75*/].f_21), bParam2, bVar0);
			break;
		case 2:
			func_502(&(Local_936[iParam0 /*75*/].f_21), iLocal_14, bParam2, bVar0);
			break;
		case 3:
			func_503(&(Local_936[iParam0 /*75*/].f_21), iLocal_14, bParam2, bVar0);
			break;
	}
}

void func_295(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_528.f_1, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iParam0]), iLocal_35[iParam0]);
	}
	if (bParam2)
	{
		PED::FORCE_PED_MOTION_STATE(iLocal_35[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (func_34(iParam1, 0, 1))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (bParam4)
		{
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", uLocal_1259[iParam0], 0, 4);
		}
		TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, fParam3, 1, 0, 0);
		func_212(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
	}
	else
	{
		func_504(iLocal_35[iParam0], 2, Global_35, 0);
	}
	PED::SET_PED_KEEP_TASK(iLocal_35[iParam0], true);
}

Vector3 func_296(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1883.499f, -353.6361f, 42.99891f;
				case 1:
					return 1323.799f, -1621.197f, 65.34177f;
				case 2:
					return 803.399f, -868.0172f, 52.29998f;
				case 3:
					return 822.8569f, -565.3245f, 80.48996f;
				case 4:
					return 1345.24f, -1757.963f, 69.7615f;
				case 5:
					return 1556.001f, -1115.632f, 42.5987f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_297(int iParam0, int iParam1)
{
	if (func_28(1048576))
	{
		return false;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return false;
	}
	else if (!func_28(262144))
	{
		return false;
	}
	switch (iLocal_1247)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && AITRANSPORT::_0x619E63980BFC0096(iLocal_35[iParam0], iLocal_34, 1))
			{
			}
			else if (PED::IS_PED_ON_MOUNT(iLocal_35[iParam0]) && !PED::IS_PED_FULLY_ON_MOUNT(iLocal_35[iParam0], true))
			{
			}
			else
			{
				func_148();
				func_163(&uLocal_908);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_35[iParam0], false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_35[iParam0], Global_35, 2000, -1f, -1f, -1f);
				}
				func_505(iLocal_35[iParam0]);
				func_506(&iLocal_1247, 1);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
			{
				func_334(iLocal_35[iParam0], Global_35, 131072, 291934926);
			}
			if ((!func_304(iLocal_35[iParam0], 242628503) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], joaat("ENDSINSTAND"))) || func_159(&uLocal_908) > 7.5f)
			{
				if (iParam0 == iLocal_1250)
				{
					func_31(2097152);
					func_294(iParam0, 0, 1);
					if ((func_28(8192) && func_34(iLocal_35[iLocal_1251], 0, 1)) && iLocal_1277 < 5)
					{
						func_294(iLocal_1251, 1, 1);
						func_293(iLocal_1251, 1, 1, 1);
					}
				}
				else if (iParam0 == iLocal_1251)
				{
					func_31(2097152);
					func_294(iParam0, 1, 1);
					if ((func_28(4096) && func_34(iLocal_35[iLocal_1250], 0, 1)) && iLocal_1277 < 7)
					{
						func_294(iLocal_1250, 0, 1);
						func_293(iLocal_1250, 1, 1, 1);
					}
				}
				else if (iParam0 == iLocal_1248)
				{
					func_31(4194304);
					func_294(iParam0, 2, 1);
					if ((func_28(2048) && func_34(iLocal_35[iLocal_1249], 0, 1)) && iLocal_1275 < 6)
					{
						func_294(iLocal_1249, 3, 1);
						func_293(iLocal_1249, 1, 1, 1);
					}
				}
				else
				{
					func_31(4194304);
					func_294(iParam0, 3, 1);
					if ((func_28(1024) && func_34(iLocal_35[iLocal_1248], 0, 1)) && iLocal_1274 < 7)
					{
						func_294(iLocal_1248, 2, 1);
						func_293(iLocal_1248, 1, 1, 1);
					}
				}
				if (!func_165(16384, iParam0))
				{
					func_293(iParam0, 1, 1, 1);
				}
				func_506(&iLocal_1247, 2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
			{
				func_334(iLocal_35[iParam0], Global_35, 131072, 291934926);
			}
			IK::_0x66F9EB44342BB4C5(iLocal_35[iParam0], &Local_701);
			if ((iParam1 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam1])) && func_165(2, iParam1))
			{
				IK::_0x66F9EB44342BB4C5(iLocal_35[iParam1], &Local_726);
			}
			func_163(&uLocal_911);
			if ((func_103(iLocal_805, 131072) && func_364(-3f, 1, 0, 0)) || func_159(&uLocal_908) > 4f)
			{
				func_507(&(Local_51.f_5), &iLocal_836);
				func_163(&uLocal_908);
				func_506(&iLocal_1247, 3);
			}
			break;
		case 3:
			if (!func_280(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				func_167(&uLocal_908);
				func_506(&iLocal_1247, 7);
			}
			else if (func_159(&uLocal_908) > 6f)
			{
				func_507(&(Local_51.f_5), &iLocal_836);
				func_505(iLocal_35[iParam0]);
				func_284(iLocal_35[iParam0], Global_35, func_283(2097152, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				func_506(&iLocal_1247, 4);
			}
			break;
		case 4:
			IK::_0x66F9EB44342BB4C5(iLocal_35[iParam0], &Local_701);
			if ((iParam1 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam1])) && func_165(2, iParam1))
			{
				IK::_0x66F9EB44342BB4C5(iLocal_35[iParam1], &Local_726);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], joaat("ENDSINSTAND")) || func_364(5f, 1, 0, 0))
			{
				func_163(&uLocal_908);
				func_506(&iLocal_1247, 5);
			}
			break;
		case 5:
			if (!func_280(&Local_51, iParam0, 2f))
			{
				func_31(524288);
				func_167(&uLocal_908);
				func_506(&iLocal_1247, 7);
			}
			else if (func_159(&uLocal_908) > 4f)
			{
				Local_51.f_46 = 1;
				if (func_53(iParam0))
				{
					func_31(134217728);
				}
				else
				{
					func_31(268435456);
				}
				func_130(&iLocal_758, 9);
				func_506(&iLocal_1247, 6);
			}
			break;
		case 6:
			break;
		case 7:
			return true;
	}
	return false;
}

void func_298(int iParam0)
{
	if (func_34(iParam0, 0, 1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
	}
}

bool func_299(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if (iParam0 > 0)
	{
		if (iParam0 < 6)
		{
			return true;
		}
		else if (!func_28(2048))
		{
			if ((((iParam0 != 9 && iParam0 != 13) && iParam0 != 10) && iParam0 != 11) && iParam0 != 12)
			{
				return true;
			}
		}
	}
	return false;
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam1;
}

void func_301(int iParam0)
{
	if (!func_171(iParam0))
	{
		func_110(&iLocal_805, iParam0);
	}
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	if (!func_175(iParam0, iLocal_34, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503, true) != 1)
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_34, -1, iParam1, 1.5f, iParam2, 0);
		}
	}
}

bool func_303(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_304(int iParam0, int iParam1)
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

Vector3 func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1813.695f, -446.8831f, 41.97974f;
				case 1:
					return 1343.588f, -1643.199f, 65.68797f;
				case 2:
					return 810.393f, -941.4841f, 51.06862f;
				case 3:
					return 829.9801f, -564.2598f, 81.84518f;
				case 4:
					return 1477.644f, -1698.715f, 61.6944f;
				case 5:
					return 1494.094f, -1042.356f, 50.65789f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_306(int iParam0, int iParam1)
{
	return func_437(iParam0, iParam1, 1, 1);
}

void func_307(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_34(iLocal_35[iParam0], 0, 0))
	{
		return;
	}
	func_508(&(iLocal_35[iParam0]));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam1)
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 33554432, 0);
	}
	else
	{
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 0, 0);
	}
	func_212(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
}

int func_308(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

void func_309(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (func_34(iLocal_35[iParam0], 0, 1))
	{
		func_509(iParam0, -1, bParam1, fParam2, 0, 131073, bParam3, 0);
		func_31(1024);
		func_213(32, iParam0);
		iLocal_1248 = iParam0;
	}
}

bool func_310(int iParam0)
{
	if (Local_51.f_46)
	{
		return false;
	}
	else if (func_127(32768))
	{
		return false;
	}
	else if ((iParam0 > 0 && iParam0 != 9) && iParam0 != 13)
	{
		return true;
	}
	return false;
}

bool func_311(int iParam0, bool bParam1)
{
	if (func_34(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

void func_312(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			func_333(&((uParam0[iVar0 /*75*/])->f_21[iVar1 /*17*/]), 0, 0);
			iVar1++;
		}
		iVar0++;
	}
}

void func_313(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iVar1 = iVar0;
		func_510(&((uParam0[iVar0 /*75*/])->f_21), iVar1);
		iVar0++;
	}
}

char* func_314(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "RESPONSE_IDLING";
					case 1:
						return "SCARED_COMMUNICATE";
					case 2:
						return "HEADS_UP_WILDERNESS";
					case 3:
						return "HEADS_UP_WILDERNESS";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "OPENS_FIRE";
					case 1:
						return "OPENS_FIRE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return "LEAVE_NOW";
					case 1:
						return "MELEE_AGGRO_TRANSITION";
					case 2:
						return "HEADS_UP_THREATEN";
					case 3:
						return "HEADS_UP_CONFRONT";
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "FIGHT_RESPONSE";
					case 2:
						return "OPENS_FIRE";
					case 3:
						return "OPENS_FIRE";
					case 1:
						if (bParam4)
						{
							return "GENERIC_ANGRY_REACTION";
						}
						else if (bParam3)
						{
							return "GENERIC_INSULT_HIGH_MALE";
						}
						else
						{
							return "FIGHT";
						}
						break;
				}
			}
			break;
	}
	return "OPENS_FIRE";
}

int func_315(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	switch (iParam0)
	{
		case 1:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 1:
						return 2;
					case 2:
						return 2;
					case 3:
						return 1;
					default:
						break;
				}
			}
			break;
		default:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						return 1;
					case 1:
						return 1;
					case 2:
						return 1;
					case 3:
						return 1;
					default:
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return 2;
					case 2:
						return 2;
					case 3:
						return 2;
					case 1:
						if (bParam4)
						{
							return 2;
						}
						else if (bParam3)
						{
							return 1;
						}
						else
						{
							return 1;
						}
						break;
				}
			}
			break;
	}
	return 0;
}

bool func_316(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_511(iParam0, &Var0);
}

void func_317(int iParam0)
{
	if (func_165(1048576, iParam0))
	{
		return;
	}
	iLocal_1237[iParam0] = func_512(&(iLocal_35[iParam0]), &(Local_936[iParam0 /*75*/]), 30f, &(Local_936[iParam0 /*75*/].f_21), &(Local_51.f_192), 0f, 1, 0, 0, uLocal_1242[iParam0], 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
}

void func_318(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_319(int iParam0, vector3 vParam1, int iParam4, var uParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = func_513(iParam0, vParam1, uParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		func_514(*iParam4);
	}
}

void func_320(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	func_515(iParam0, vParam1, 0f, 0f, 0f, 0f, 0f, 0f, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9);
}

void func_321(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_219(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_468(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_384();
			iParam4->f_2 = func_109(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_468(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_384();
		iParam4->f_2 = func_109(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_322(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_384() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_323(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_402(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_400())
	{
		bVar1 = true;
		fVar3 = func_219(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_403(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_403(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (func_404(&(uParam0->f_121), iParam4, fParam1))
		{
			func_189(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_223(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_188(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_189(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_223(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_324()
{
	switch (iLocal_14)
	{
		case 0:
			return joaat("EVENT_SHOCKING_BEAT_DANGEROUS");
		default:
			break;
	}
	return joaat("EVENT_SHOCKING_BEAT_DISTURBING");
	return joaat("EVENT_SHOCKING_BEAT_DANGEROUS");
}

Vector3 func_325(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 1852.195f, -384.1873f, 41.85531f;
				case 2:
					return 781.9018f, -906.9106f, 50.12431f;
				case 4:
					return 1389.215f, -1694.26f, 66.361f;
				default:
					break;
			}
			break;
	}
	return vParam2;
}

float func_326()
{
	switch (iLocal_14)
	{
		case 0:
			return 23f;
		case 1:
			return 35f;
		default:
			break;
	}
	return -1f;
}

float func_327(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 30f;
				case 1:
					return 35f;
				case 2:
					return 35f;
				case 3:
					return 15f;
				case 4:
					return 30f;
				default:
					break;
			}
			break;
	}
	return 15f;
}

void func_328(var uParam0, int iParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, bool bParam13)
{
	struct<4> /*32*/ sVar0;
	char cVar4[32];

	func_516(uParam0, 1);
	uParam0->f_12 = sParam2;
	uParam0->f_5 = fParam8;
	uParam0->f_6 = fParam9;
	*uParam0 = iParam1;
	uParam0->f_8 = fParam7;
	StringCopy(&cVar4, sParam2, 32);
	Var0 = { cVar4 };
	if (!func_105(vParam3))
	{
	}
	if (fParam8 > 0f)
	{
		StringConCat(&Var0, "Vis", 32);
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, fParam8, fParam8, fParam8, &Var0);
	}
	else
	{
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, 1f, 1f, 3f, &cVar4);
	}
	if (fParam9 > 0f && fParam9 != fParam8)
	{
		Var0 = { cVar4 };
		StringConCat(&Var0, "Aud", 32);
		uParam0->f_3 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam3, 0f, 0f, 0f, fParam9, fParam9, fParam9, &Var0);
	}
	if (!func_105(vParam3))
	{
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iParam1, vParam3, fParam7, fParam8, fParam9, fParam10, fParam11, -1, -1);
	}
	else
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_2, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_3))
		{
			PED::_0x7C00CFC48A782DC0(uParam0->f_3, iParam6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		}
		uParam0->f_1 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(iParam1, iParam6, fParam7, fParam8, fParam9, fParam10, fParam11, fParam12, bParam13, false, -1, -1);
	}
}

char* func_329(int iParam0)
{
	if (func_517(iParam0))
	{
		switch (iParam0)
		{
			case 0:
				return "GREET_POS";
			case 1:
				return "GREET_NEG";
			case 2:
				return "GREET_SPOS";
			case 3:
				return "GREET_SNEG";
			case 4:
				return "GREET_ACC";
			case 5:
				return "GREET_REJ";
			case 6:
				return "BEAT_GRT_NEG";
			case 7:
				return "INTERACT_GREET";
			case 8:
				return "INTERACT_DEFUSE";
			case 9:
				return "INTERACT_LET_GO";
			case 10:
				return "INTERACT_INSULT";
			case 11:
				return "INTERACT_THREATEN";
			case 12:
				return "INTERACT_ROB";
			case 13:
				return "INTERACT_ROB_GRAPPLE_LET_GO";
			case 14:
				return "INTERACT_ROB_ACCEPT";
			case 15:
				return "INTERACT_ROB_REJECT_MELEE";
			case 16:
				return "INTERACT_STOP_WITNESS";
			case 17:
				return "INTERACT_STOP_VEHICLE";
			case 18:
				return "INTERACT_STOP_HORSE";
			case 19:
				return "INTERACT_REQUEST_RIDE";
			case 20:
				return "INTERACT_STEAL_HORSE";
			case 21:
				return "INTERACT_STEAL_VEHICLE";
			case 22:
				return "INTERACT_HORSE";
			case 23:
				return "INTERACT_CALLOUT";
			case 24:
				return "INTERACT_QUESTION";
			case 25:
				return "INTERACT_ENCOURAGE";
			case 26:
				return "INTERACT_INTERVENE";
			case 27:
				return "INTERACT_CONFRONT";
			case 28:
				return "RE_INTER_TRUTH";
			case 29:
				return "RE_INTER_LIE";
			case 30:
				return "INTERACT_QUIT";
			case 31:
				return "RE_INTER_DIRECT";
			case 32:
				return "INTERACT_SCOLD";
			case 33:
				return "INTERACT_PRAISE";
			case 34:
				return "INTERACT_ASSIST";
			case 35:
				return "INTERACT_MISLEAD";
			case 36:
				return "INTERACT_ASK";
			case 37:
				return "INTERACT_DEMAND";
			default:
				break;
		}
	}
	return "PED_INTERACT_PROMPT_LABEL_ERROR";
}

void func_330(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_518(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_519(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_520(iParam0->f_6, iParam0->f_5, 0);
			}
			func_521(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_522(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

int func_331(int iParam0, int iParam1, int iParam2)
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

void func_332(var uParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	if (bParam1)
	{
		func_330(uParam0[0 /*17*/], func_329(8), sParam2, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	else
	{
		func_330(uParam0[0 /*17*/], func_329(7), sParam3, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_330(uParam0[2 /*17*/], func_329(12), sParam5, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 0, 0);
	}
	func_330(uParam0[1 /*17*/], func_329(10), sParam4, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
}

void func_333(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_523(iParam0, 13))
	{
		func_524(iParam0, 0);
	}
	else
	{
		func_525(iParam0, 0);
	}
	if (func_518(iParam0->f_6))
	{
		if (bParam2)
		{
			func_526(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_334(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, func_527(iParam2)))
	{
		func_284(iParam0, iParam1, func_283(iParam2, 2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, iParam3, 1, 0, 0);
		func_301(iParam2);
		return true;
	}
	return false;
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_2(iParam0, iParam1);
}

void func_336(int iParam0)
{
	int iVar0;

	iVar0 = func_528(iParam0);
	if (func_165(8, iParam0))
	{
		if (func_337(iParam0, "onGround", 16))
		{
			func_529(iLocal_35[iParam0], 1, 0);
		}
	}
	else if (iVar0 != iParam0 && func_337(iVar0, "fireGun", 4))
	{
		func_213(8, iParam0);
	}
}

bool func_337(int iParam0, char* sParam1, int iParam2)
{
	if (func_165(iParam2, iParam0))
	{
		return false;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_35[iParam0], MISC::GET_HASH_KEY(sParam1)))
	{
		func_213(iParam2, iParam0);
		return true;
	}
	return false;
}

void func_338(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]) || func_165(2, iParam0))
	{
		return;
	}
	switch (iLocal_14)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					func_365(0, bParam1, 1065353216 /* Float: 1f */, 0);
					if (func_28(1) && iLocal_1252 == 1)
					{
						func_213(2, 1);
						func_359(1, 0, 1065353216 /* Float: 1f */, 0);
					}
					break;
				case 1:
					func_359(1, bParam1, 1065353216 /* Float: 1f */, 0);
					break;
				case 2:
					func_309(2, bParam1, 1065353216 /* Float: 1f */, 0);
					if (func_28(1) && iLocal_1252 == 3)
					{
						func_213(2, 3);
						func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
					}
					break;
				case 3:
					func_358(3, 0, 1065353216 /* Float: 1f */, 0, 0);
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 2:
					func_309(2, bParam1, 1065353216 /* Float: 1f */, 0);
					break;
				case 3:
					func_358(3, bParam1, 1065353216 /* Float: 1f */, 0, 0);
					break;
			}
			break;
	}
}

bool func_339(int iParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, MISC::GET_HASH_KEY(sParam1));
}

void func_340(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam2)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, *iParam0);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, *iParam1);
	}
	if (bParam4)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam1, joaat("REL_PLAYER_LIKE"));
	}
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *iParam0, joaat("REL_PLAYER_LIKE"));
	}
}

bool func_341(int iParam0)
{
	if (fLocal_829 == -1f)
	{
		return false;
	}
	else if (fLocal_829 > uLocal_817[iParam0])
	{
		return true;
	}
	return false;
}

bool func_342(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_530(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_531(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::CAN_PED_SEE_PED_CACHED(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), false) == 1;
	}
	return PED::CAN_PED_SEE_ENTITY(iParam0, iParam1, bParam2, false) == 1;
}

char* func_343(int iParam0)
{
	if (iParam0 == iLocal_35[0])
	{
		return "dealerA";
	}
	if (iParam0 == iLocal_35[1])
	{
		return "dealerb";
	}
	if (iParam0 == iLocal_35[2])
	{
		return "confeda";
	}
	if (iParam0 == iLocal_35[3])
	{
		return "confedb";
	}
	return "INVALID PED";
}

void func_344(int iParam0)
{
	func_167(&uLocal_0);
	func_532(1, iParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
	func_533();
}

void func_345(int iParam0, int iParam1, int iParam2)
{
	iLocal_1252 = iParam0;
	iLocal_50 = iParam1;
	iLocal_1253 = iParam2;
}

void func_346(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

bool func_347(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_534(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_535(iParam1, 4000))
				{
					if ((func_536(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && func_537(iParam1, iParam0)) && func_538(iParam1, iParam0))
					{
						func_539();
						*uParam2 = 2;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (func_535(iParam1, 4000))
				{
					if ((func_536(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && func_537(iParam1, iParam0)) && func_538(iParam1, iParam0))
					{
						func_539();
						*uParam2 = 2;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (func_541(iParam0, Global_1935630.f_41))
							{
								func_539();
								*uParam2 = 2;
								func_540(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (func_541(iParam0, Global_1935630.f_41))
						{
							func_539();
							*uParam2 = 2;
							func_540(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (func_542())
					{
						if (func_541(iParam0, Global_1935630.f_42))
						{
							func_539();
							*uParam2 = 2;
							func_540(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_543(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_544(Global_35, iParam0, iParam1))
					{
						func_539();
						*uParam2 = 4;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_545(Global_35, iParam0, iParam1))
					{
						func_539();
						*uParam2 = 256;
						func_540(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (func_546(iParam0, iParam1))
			{
				func_539();
				*uParam2 = 131072;
				func_540(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_547(iParam0, iParam1))
			{
				func_539();
				*uParam2 = 262144;
				func_540(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_348(int iParam0)
{
	func_37(iParam0);
	func_7(iParam0, 1);
	func_8(iParam0, 250);
	func_44(iParam0, 0);
}

void func_349(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

bool func_350(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_534(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_548(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_540(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_549(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_550(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_551(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_407(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_540(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_543(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_544(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_545(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_552(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_552(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_540(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_553(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (func_554(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_535(iParam2, 4000))
				{
					if ((func_536(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_537(iParam2, iParam0)) && func_538(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_536(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_537(iParam2, iParam0)) && func_538(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_541(iParam0, Global_1935630.f_41))
							{
								func_539();
								*iParam3 = 2;
								func_540(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & 131072 == 0)
					{
						if (func_541(iParam0, Global_1935630.f_41))
						{
							func_539();
							*iParam3 = 2;
							func_540(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_555(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_384() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_539();
						*iParam3 = 2;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_542())
					{
						if (func_541(iParam0, Global_1935630.f_42))
						{
							func_539();
							*iParam3 = 2;
							func_540(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_556(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_540(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_557(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_558(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_559(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_560(iParam2, 4000))
				{
					if (func_561(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_540(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_562(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_540(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_563(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_540(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

float func_351(float fParam0, float fParam1, float fParam2)
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

bool func_352(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_34) || !func_34(iParam0, 0, 0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_34, 0f, 10f, 0f) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (func_564(Global_36, vVar3, vVar0))
	{
		return true;
	}
	return false;
}

Vector3 func_353(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam2)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 1849.682f, -382.4103f, 42.2056f;
						case 1:
							return 1313.553f, -1637.015f, 65.96715f;
						case 2:
							return 784.8195f, -907.0717f, 50.172f;
						case 3:
							return 857.6899f, -535.2601f, 87.88438f;
						case 4:
							return 1383.435f, -1695.935f, 66.69115f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 1848.532f, -379.2958f, 42.28083f;
						case 1:
							return 1311.495f, -1638.225f, 66.04156f;
						case 2:
							return 784.6487f, -902.4513f, 50.2746f;
						case 3:
							return 858.7761f, -538.0076f, 87.85596f;
						case 4:
							return 1382.318f, -1700.524f, 66.80943f;
						case 5:
							return 1572.125f, -1169.729f, 44.98163f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_354(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 300;
	(*uParam0)[2] = 600;
	(*uParam0)[3] = 900;
}

void func_355(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 1024);
	}
	else
	{
		func_50(iParam0, 1024);
	}
}

void func_356(int iParam0, int iParam1)
{
	iParam0->f_20 = iParam1;
}

int func_357(int iParam0)
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

void func_358(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (func_34(iLocal_35[iParam0], 0, 1))
	{
		func_509(iParam0, 0, bParam1, fParam2, 0, 262145, bParam3, bParam4);
		func_31(2048);
		func_213(32, iParam0);
		iLocal_1249 = iParam0;
	}
}

void func_359(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (func_34(iLocal_35[iParam0], 0, 1))
	{
		func_295(iParam0, uLocal_45[1], bParam1, fParam2, bParam3);
		func_31(8192);
		func_213(32, iParam0);
		iLocal_1251 = iParam0;
	}
}

void func_360(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_361(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	(*uParam3)[0] = 0.5f;
	(*uParam3)[1] = 0.5f;
	(*uParam3)[2] = 0.5f;
	(*uParam3)[3] = 0.5f;
	iVar1 = 0;
	fVar3 = 9999f;
	switch (iParam0)
	{
		case 1:
			(*uParam2)[0] = 1;
			if (func_209((*iParam1)[0], 1, 1) < func_209((*iParam1)[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 3;
			break;
		case 3:
			(*uParam2)[0] = 3;
			if (func_209((*iParam1)[0], 1, 1) < func_209((*iParam1)[2], 1, 1))
			{
				(*uParam2)[1] = 0;
				(*uParam2)[2] = 2;
			}
			else
			{
				(*uParam2)[1] = 2;
				(*uParam2)[2] = 0;
			}
			(*uParam2)[3] = 1;
			break;
		default:
			iVar0 = 0;
			while (iVar0 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0]))
				{
					fVar2 = func_209((*iParam1)[iVar0], 1, 1);
					if (fVar2 < fVar3)
					{
						fVar3 = fVar2;
						iVar1 = iVar0;
					}
				}
				iVar0++;
			}
			iVar4 = iVar1;
			(*uParam2)[0] = iVar4;
			switch (iVar4)
			{
				case 0:
					if (func_209((*iParam1)[1], 1, 1) < func_209((*iParam1)[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 2;
					break;
				case 1:
					if (func_209((*iParam1)[0], 1, 1) < func_209((*iParam1)[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 3;
					break;
				case 2:
					if (func_209((*iParam1)[1], 1, 1) < func_209((*iParam1)[3], 1, 1))
					{
						(*uParam2)[1] = 1;
						(*uParam2)[2] = 3;
					}
					else
					{
						(*uParam2)[1] = 3;
						(*uParam2)[2] = 1;
					}
					(*uParam2)[3] = 0;
					break;
				case 3:
					if (func_209((*iParam1)[0], 1, 1) < func_209((*iParam1)[2], 1, 1))
					{
						(*uParam2)[1] = 0;
						(*uParam2)[2] = 2;
					}
					else
					{
						(*uParam2)[1] = 2;
						(*uParam2)[2] = 0;
					}
					(*uParam2)[3] = 1;
					break;
			}
			break;
	}
}

bool func_362(int iParam0, int iParam1)
{
	if (!func_34(iParam0, 0, 1))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iParam1, true, false) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam1, false))
	{
		return false;
	}
	return ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, iParam1);
}

void func_363(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, 0, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		TASK::TASK_REACT(0, Global_35, Global_36, "Default_Curious", 0.7f, 0, 4);
	}
	if (func_308(iParam0, 0) == joaat("WEAPON_UNARMED"))
	{
		TASK::TASK_SWAP_WEAPON(0, 1, 1, 0, 0);
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
	func_212(iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_364(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_311(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_565(fParam0))
	{
		return false;
	}
	return true;
}

void func_365(int iParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (func_34(iLocal_35[iParam0], 0, 1))
	{
		func_295(iParam0, uLocal_45[0], bParam1, fParam2, bParam3);
		func_31(4096);
		func_213(32, iParam0);
		iLocal_1250 = iParam0;
	}
}

bool func_366(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return ((PED::IS_EVENT_IN_QUEUE(iParam0, joaat("EVENT_SHOT_FIRED")) || PED::IS_EVENT_IN_QUEUE(iParam0, joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"))) || PED::IS_EVENT_IN_QUEUE(iParam0, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")));
}

void func_367()
{
	func_566(0);
	func_566(1);
	func_566(2);
	func_566(3);
}

void func_368(int iParam0, var uParam1)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[0], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[1], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[2], *uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH((*iParam0)[3], *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, *uParam1, joaat("PLAYER"));
}

void func_369()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_528.f_1, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*12*/].f_8))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, "Cash", Local_503[1 /*12*/].f_8);
		}
	}
}

void func_370(var uParam0, var uParam1)
{
	(*uParam1)[(*uParam0)[0]] = "Default_Shocked";
	(*uParam1)[(*uParam0)[1]] = "Default_Shocked";
	(*uParam1)[(*uParam0)[2]] = "Default_Angry";
	(*uParam1)[(*uParam0)[3]] = "Default_Angry";
}

void func_371(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_372(int iParam0, float fParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_528.f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_567(iParam0), iLocal_35[iParam0]);
	}
	if (func_342(iLocal_35[iParam0], Global_35, 0, 35f, 1))
	{
		func_213(2048, iParam0);
	}
	bVar0 = func_28(268435456);
	if (func_53(iParam0))
	{
		bVar0 = func_28(134217728);
	}
	bVar1 = func_568();
	bVar2 = func_569();
	func_213(2097152, iParam0);
	func_256(&(iLocal_35[iParam0]));
	func_570(iParam0, &(uLocal_40[iParam0]), 100f, iParam2, iLocal_788[iParam0], bVar0, func_28(64), iParam3, 1, fParam1, func_165(33554432, iParam0), (bVar1 && bVar2), bVar2);
}

void func_373(int iParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
		}
	}
}

bool func_374(int iParam0)
{
	if (!func_28(1024) || iLocal_1248 != iParam0)
	{
		return false;
	}
	else if ((ENTITY::IS_ENTITY_DEAD(iLocal_34) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_34, true, false)) || !PED::IS_PED_IN_VEHICLE(iLocal_35[iParam0], iLocal_34, true))
	{
		return false;
	}
	else if (PED::IS_PED_ON_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false))
	{
		return false;
	}
	func_213(4194304, iParam0);
	func_300(&iLocal_1274, 11, iLocal_1248);
	return true;
}

void func_375(int iParam0, int* iParam1)
{
	if (!func_34(iLocal_35[iParam0], 0, 1))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam1))
	{
		func_349(iLocal_35[iParam0], iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_35[iParam0], -2117564886, true) == 0)
	{
		return;
	}
	if (func_308(iLocal_35[iParam0], 0) == joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iParam0], func_258(iParam0), false, 0, false, false);
	}
	TASK::TASK_COMBAT_HATED_TARGETS(iLocal_35[iParam0], -1f);
}

bool func_376(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_377(var uParam0)
{
	return func_376(*uParam0, 2);
}

float func_378()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_379(int iParam0, int iParam1)
{
	func_571(iParam0, iParam1);
}

void func_380(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_378() - fParam1);
	func_572(uParam0, 1);
	func_573(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_381(var uParam0, float fParam1)
{
	if (!func_158(uParam0))
	{
		return false;
	}
	if (func_159(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_382(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_383(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_382(iParam0) == 0)
		{
			VEHICLE::_0x04F0579DBDD32F34(iParam0);
		}
	}
}

int func_384()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_385(struct<2> /*16*/ sParam0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		iVar0 |= 1073741824;
	}
	if (Param0.f_1 > 0f)
	{
		iVar0 |= -2147483648;
	}
	return iVar0;
}

int func_386(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

int func_387(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_388(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

bool func_389(int iParam0, int iParam1)
{
	if (!func_574(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

bool func_390(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("WAGON03X"):
		case joaat("BUGGY03"):
		case joaat("COACH5"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("STAGECOACH006X"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("OILWAGON01X"):
		case joaat("STAGECOACH005X"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("STAGECOACH003X"):
		case joaat("CART08"):
		case joaat("WAGON02X"):
		case joaat("COACH3"):
		case joaat("CART07"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CART06"):
		case joaat("CART05"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("STAGECOACH002X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return true;
		default:
			break;
	}
	return false;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CART02"):
		case joaat("BUGGY03"):
		case joaat("CART03"):
		case joaat("BUGGY01"):
		case joaat("BUGGY02"):
		case joaat("CART01"):
		case joaat("CART04"):
		case joaat("CART08"):
		case joaat("CART07"):
		case joaat("CART06"):
		case joaat("CART05"):
			return 1;
		case joaat("COACH5"):
		case joaat("LOGWAGON"):
		case joaat("COACH6"):
		case joaat("COACH3"):
		case joaat("COACH4"):
		case joaat("WAGONDAIRY01X"):
		case joaat("CHUCKWAGON000X"):
		case joaat("COACH2"):
		case joaat("CHUCKWAGON002X"):
			return 2;
		case joaat("WAGON03X"):
		case joaat("WAGON05X"):
		case joaat("SUPPLYWAGON"):
		case joaat("STAGECOACH006X"):
		case joaat("STAGECOACH005X"):
		case joaat("STAGECOACH003X"):
		case joaat("WAGON02X"):
		case joaat("UTILLIWAG"):
		case joaat("WAGON06X"):
		case joaat("STAGECOACH002X"):
		case joaat("WAGON04X"):
		case joaat("STAGECOACH001X"):
			return 3;
		case joaat("OILWAGON01X"):
			return 4;
		default:
			break;
	}
	return 0;
}

Vector3 func_392(var uParam0)
{
	return uParam0->f_51;
}

void func_393(int iParam0, int iParam1)
{
	iParam0->f_21 = iParam1;
}

bool func_394()
{
	return Global_1935436 == 2;
}

void func_395(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_396(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_71(iParam0, 2))
	{
		func_576(iParam0, func_575(iParam1));
	}
	else
	{
		func_578(iParam0, func_577());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_579(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_580(iParam0, 0);
	func_581(iParam0);
	func_582(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_71(iParam0, 16))
	{
		func_397(iParam0, 0, 0, 0, 0);
	}
}

void func_397(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_583() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_242(iVar1) && !func_71(iVar1, iParam2)) && (!bParam3 || !func_414(iVar1))) && (!bParam4 || !func_584(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_585(iVar0);
			}
		}
		iVar0++;
	}
}

int func_398(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_399(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_453(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (func_71(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_586(2, -1, 0, 0, 0);
			}
			else
			{
				func_586(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_586(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_431(1, uParam0->f_177))
				{
					func_587(16, uParam0->f_177);
					func_434(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_588(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_586(8, -1, 0, 0, 0);
	}
}

int func_400()
{
	if (func_589(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_590())
		{
			return 1;
		}
	}
	return 0;
}

bool func_401(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

float func_402(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1f)
	{
		if (func_71(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_71(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_71(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_71(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_71(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_71(uParam0->f_3, 1))
		{
		}
		else if (func_71(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_403(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_0x5102307CE88798EB(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_591(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_0x164CECC59E70DF86(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_0xC8CCDB712FBCBA92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_592(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_378() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_404(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_189(uParam0);
	return true;
}

bool func_405()
{
	return (Global_1894899 & 1 != 0 && func_417() != -1);
}

bool func_406(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_407(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_593(bParam1, bParam2, bParam3);
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

bool func_408(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_595(func_594());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_409(int iParam0, int iParam1)
{
	return (func_398(iParam0) && iParam1) != 0;
}

bool func_410(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_596(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_597(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_598(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_599(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_600(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_601(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_602(iVar3))
	{
		return true;
	}
	return false;
}

bool func_411(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_603(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_412(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
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
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == joaat("PROP_PLAYER_SLEEP_TENT_MALE_A"))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_413(int iParam0, bool bParam1, bool bParam2)
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
		if (func_604())
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
		iVar0 = func_605(Global_1898164.f_1[0 /*5*/]);
		if (func_606(iVar0) && func_607(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_608(Global_1898164.f_1[0 /*5*/]))
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

bool func_414(int iParam0)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	if (func_609(64) && func_610(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_415(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_611(iVar0) || func_612(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_416()
{
	return Global_1894899 & 4 != 0;
}

int func_417()
{
	return Global_1894899.f_2;
}

int func_418(int iParam0)
{
	if (!func_613(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_419(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_420(vector3 vParam0, int iParam3)
{
	if (!func_419(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_421(vector3 vParam0)
{
	float fVar0;

	if (func_105(vParam0))
	{
		return false;
	}
	fVar0 = func_219(func_405(), 6f, 22f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, 16384);
}

bool func_422(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_163(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_163(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_158(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_381(uParam0, fParam2))
		{
			return true;
		}
		if (func_158(uParam0))
		{
			func_167(uParam0);
		}
	}
	return false;
}

bool func_423(vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, 16384);
}

void func_424(vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_105(vParam0))
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
			if (func_463(vVar2, vParam0, 2f, 1))
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

float func_425(int iParam0)
{
	if (!func_242(iParam0))
	{
		return 0f;
	}
	if (!func_614(iParam0))
	{
		return 0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_426()
{
	return "unnamed";
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_428(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_454(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

char* func_429(char* sParam0)
{
	return sParam0;
}

int func_430(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_615(iVar0);
}

bool func_431(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

bool func_432(int iParam0)
{
	if (!func_490(iParam0, 0))
	{
		return false;
	}
	if (func_431(1, iParam0))
	{
		return true;
	}
	if (func_616(16, iParam0))
	{
		return true;
	}
	if (func_617(iParam0) >= 4)
	{
		if (PED::_0x336B3D200AB007CB(Global_35, Global_36, 150f, 512) <= 0)
		{
			return true;
		}
	}
	return false;
}

void func_433(int iParam0, int iParam1)
{
	if (!func_431(1, iParam0))
	{
		if (!func_490(iParam0, 0))
		{
		}
		func_587(16, iParam0);
		func_434(1, iParam0);
	}
}

void func_434(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] = (Global_40.f_9571[iParam1 /*10*/] || iParam0);
}

void func_435(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_526(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_137(iParam0, 0);
		}
	}
}

void func_436(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_518((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_526(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

float func_437(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

void func_438(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 0);
	}
	PED::DELETE_PED(iParam0);
}

void func_439(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

void func_440(var uParam0)
{
	if (func_518(uParam0->f_162))
	{
		func_526(&(uParam0->f_162), 1, 1);
	}
	if (func_518(uParam0->f_163))
	{
		func_526(&(uParam0->f_163), 1, 1);
	}
	if (func_518(uParam0->f_164))
	{
		func_526(&(uParam0->f_164), 1, 1);
	}
	if (func_518(uParam0->f_165))
	{
		func_526(&(uParam0->f_165), 1, 1);
	}
}

void func_441(var uParam0)
{
	if (uParam0->f_170)
	{
		func_618();
	}
}

void func_442(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_619(32);
		func_446(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_443(var uParam0)
{
	if (func_620(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_621(uParam0->f_3);
		func_399(uParam0, 0, 1);
		func_622(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_623(0, 0);
		return true;
	}
	return false;
}

void func_444()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_445(int iParam0)
{
	if (!func_242(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_446(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_272(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_447() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

int func_447()
{
	return Global_1572887.f_12;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_450(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_451(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_105(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

void func_452(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(-1702907713, *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, 580546400);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, 1, 0);
			func_38("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100f, 1, 0);
	}
}

bool func_453(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_454(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_105(vParam0))
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
		if (func_423(vParam0))
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
	func_624(iVar0, bParam8);
	return iVar0;
}

void func_455(int iParam0)
{
	if (!func_242(iParam0))
	{
		return;
	}
	func_625(iParam0);
}

void func_456(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_457(int iParam0)
{
	if (func_187(iParam0, 2))
	{
		return 200;
	}
	if (func_187(iParam0, 4))
	{
		return 70;
	}
	if (func_187(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_458(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_71(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_577() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_71(iParam0, 2);
		bVar1 = func_71(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_405())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_459(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_187(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_460(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_187(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110f));
	}
	else if (func_187(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_461(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_449(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_462(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_105(vParam1))
	{
		return false;
	}
	if (func_465(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_112(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_463(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

int func_464(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_105(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_465(int iParam0, vector3 vParam1)
{
	int iVar0;

	if (!func_71(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_626(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_71(iParam0, 33554432))
	{
		if (func_627(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_466(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_187(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_71(iParam0, 1) && !func_71(iParam0, 2))
	{
		if (func_71(iParam0, 4096) || func_71(iParam0, 2048))
		{
			if (func_628(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_467(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_1(&uParam0);
	if (!func_629())
	{
		return false;
	}
	return true;
}

bool func_468(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_630(vVar0, vParam0) > func_630(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_469(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_470(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_471(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_571(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_472()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_473(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_447() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_474(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_475(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, bParam3, vParam4);
}

float func_476(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_106((fParam0 + fParam1));
}

int func_477(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_631(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_632(uParam1))
	{
		iVar0 = PED::_0xEAF682A14F8E5F53(uParam1->f_5, vParam2, bParam5, true, true, iParam9, iParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_633(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_633(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_264(iVar0))
		{
			func_481(iVar0, &(uParam1->f_23), 0);
		}
		if (func_264(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_634(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_635(&(uParam1->f_22)));
			func_529(iVar0, func_636(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_637(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_638(&(uParam1->f_22)))
		{
			func_639(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_640(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_103(uParam1->f_22, 8192))
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, true);
		}
		if (!func_264(iVar0))
		{
			func_642(iVar0, !func_641(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_643(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_644(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_644(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_478(int iParam0, int iParam1)
{
	if (func_645(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_479(var uParam0)
{
	return func_103(*uParam0, 32);
}

int func_480(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (PED::GET_MOUNT(iParam0) != iParam1)
	{
		PED::SET_PED_ONTO_MOUNT(iParam0, iParam1, iParam3, bParam4);
		PED::SET_PED_CAN_BE_TARGETTED(iParam1, bParam2);
	}
	return 1;
}

void func_481(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_34(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

int func_482(int iParam0)
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

bool func_483(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_484(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_589(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_589(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_447() == -1 && !func_646(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_646(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_589(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_647(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_648(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_649(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_485(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_486(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_650(iParam0);
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
		if (!func_651(iParam0, 1))
		{
			return false;
		}
	}
	return func_652(iParam0, 0, bParam2) >= iParam1;
}

bool func_486(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_487(int iParam0, int iParam1)
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

int func_488(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
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

var func_489(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_0xA88E215CEB0435C0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_490(int iParam0, bool bParam1)
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

void func_491(var uParam0)
{
	if (!func_158(uParam0))
	{
	}
	if (func_377(uParam0))
	{
		uParam0->f_1 = (func_378() - uParam0->f_2);
		uParam0->f_2 = 0f;
		func_573(uParam0, 2);
	}
}

void func_492(var uParam0)
{
	if (!func_158(uParam0))
	{
	}
	if (!func_377(uParam0))
	{
		uParam0->f_2 = (func_378() - uParam0->f_1);
		func_572(uParam0, 2);
	}
}

int func_493(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_494(var uParam0, int iParam1)
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam0, iParam1);
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0, iParam1);
}

void func_495(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_51(iParam0, 134217728);
	}
	else
	{
		func_50(iParam0, 134217728);
	}
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		default:
			break;
	}
	return 2;
	return -1;
}

var func_497(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_653(cVar0);
}

int func_498(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	iParam1 = iParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_405())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (func_209(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_437(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_163(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_654(iParam0, iParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(Var3.f_7), 3);
					MISC::SET_BIT(&(Var3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_655(func_316(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

int func_499(int iParam0, int* iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]) || func_165(65536, iParam0))
	{
		return 0;
	}
	if (func_165(8192, iParam0))
	{
		if (!func_311(Global_35, 0))
		{
			func_160(8192, iParam0);
			func_213(32768, iParam0);
			func_293(iParam0, 0, 1, 1);
		}
		return 1;
	}
	else if (func_165(16384, iParam0))
	{
		if (!func_311(Global_35, 0))
		{
			func_316(iLocal_35[iParam0], func_314(iLocal_14, iParam0, 0, 0, 0), 1744022339, 0, 1, &(Local_245[iParam0 /*32*/].f_23), func_315(iLocal_14, iParam0, 0, 0, 0), 1);
			func_213(65536, iParam0);
		}
		return 1;
	}
	else if (func_656(iParam1) && iLocal_1237[iParam0] != -1)
	{
		switch (iLocal_1237[iParam0])
		{
			case 0:
				func_213(8192, iParam0);
				break;
			case 1:
			case 2:
				func_101(4);
				func_101(32768);
				func_213(16384, iParam0);
				break;
		}
		if (!Local_51.f_44)
		{
			func_148();
		}
		func_293(iParam0, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_500(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_501(var uParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
	if (bParam2)
	{
		sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
	}
	func_332(uParam0, bParam1, sVar0, "RE_AMD_LWL_V2_GREET_DEALER_POS", "RE_AMD_LWL_V2_GREET_DEALER_NEG", "RE_AMD_LWL_V2_ROB_DEALERS");
}

void func_502(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			if (func_657())
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V1_GREET_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			else
			{
				func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			}
			break;
	}
}

void func_503(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	switch (iParam1)
	{
		case 1:
			if (bParam3)
			{
				sVar0 = "RE_AMD_LWL_V1_GREET_DEFUSE";
			}
			else
			{
				sVar0 = "RE_AMD_LWL_V2_GREET_DEFUSE";
			}
			func_332(uParam0, bParam2, sVar0, "RE_AMD_LWL_V2_GREET_RAIDER_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V2_ROB_RAIDERS");
			break;
		default:
			func_332(uParam0, bParam2, "RE_AMD_LWL_V1_GREET_DEFUSE", "RE_AMD_LWL_V1_GREET_POS", "RE_AMD_LWL_V2_GREET_RAIDER_NEG", "RE_AMD_LWL_V1_ROB_RAIDERS");
			break;
	}
}

int func_504(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ITEMSET::IS_IN_ITEMSET(iParam0, Global_1396084))
		{
			return 1;
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_1396084);
		DECORATOR::DECOR_SET_BOOL(iParam0, "pedRoam_bInPedRoam", true);
		func_658(iParam0, 0);
		func_659(iParam0, iParam1);
		func_660(iParam0, iParam2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
			if (!func_661(iVar0))
			{
				DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_hashKey", iVar0);
			}
		}
		return 1;
	}
	return 0;
}

void func_505(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (!func_34(iParam0, 0, 1))
	{
		return;
	}
	sVar0 = Local_670[0 /*2*/];
	sVar1 = Local_670[0 /*2*/].f_1;
	if (iParam0 == iLocal_35[3])
	{
		sVar0 = Local_670[1 /*2*/];
		sVar1 = Local_670[1 /*2*/].f_1;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_34) && func_662(iParam0, iLocal_34, 0)) && func_663(iParam0, iLocal_34) == -1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperBodyNoArms_filter", false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iParam0, sVar0, sVar1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, "UpperbodyFixup_filter", false);
	}
}

void func_506(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_507(var uParam0, int iParam1)
{
	*iParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

void func_508(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 170, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 340, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 54, true);
}

void func_509(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_34) && PED::IS_PED_IN_VEHICLE(iLocal_35[iParam0], iLocal_34, false))
	{
		return;
	}
	else
	{
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_35[iParam0], -1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iParam0]), iLocal_35[iParam0]);
		}
		if (bParam2)
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_35[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
		}
		func_664(&(iLocal_35[iParam0]));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_34))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (bParam6)
			{
				TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", uLocal_1259[iParam0], 0, 4);
			}
			if (iParam4 > 0)
			{
				TASK::TASK_STAND_STILL(0, iParam4);
			}
			vVar0 = { func_665(iParam5, bParam7) };
			if (!func_105(vVar0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vVar0, 1f, -1, 40000f, 1056964608 /* Float: 0.5f */, 1);
			}
			TASK::TASK_ENTER_VEHICLE(0, iLocal_34, -1, iParam1, fParam3, iParam5, 0);
			func_212(iLocal_35[iParam0], &iVar3, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(iLocal_35[iParam0], true);
		}
	}
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (func_666(uParam0[iVar1 /*17*/], 1, 0) != Local_15[iParam1 /*4*/][iVar1])
		{
			func_333(uParam0[iVar1 /*17*/], Local_15[iParam1 /*4*/][iVar1], 0);
		}
		iVar0++;
	}
}

bool func_511(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_512(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam9;
	func_667(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_668(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_669(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!func_670(558))
				{
					func_671(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

int func_513(int iParam0, vector3 vParam1, int iParam4, int iParam5)
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

void func_514(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "scripted_loot_only", true);
		ENTITY::_0x8C03CD6B5E0E85E8(iParam0, joaat("EMPTY"));
	}
}

void func_515(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_513(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_105(vParam4) || !func_105(vParam7))
		{
			func_672(*iParam10, vParam4, vParam7);
		}
		func_673(*iParam10, iParam11, iParam12, iParam15);
	}
}

void func_516(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
	if (uParam0->f_1 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	func_64(uParam0->f_2);
	func_64(uParam0->f_3);
	uParam0->f_5 = -1f;
	uParam0->f_6 = -1f;
	uParam0->f_8 = -1f;
	uParam0->f_12 = "";
	func_163(&(uParam0->f_9));
	func_167(&(uParam0->f_9));
	*uParam0 = 0;
}

bool func_517(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

bool func_518(int iParam0)
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

void func_519(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_520(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

void func_521(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (bParam1)
	{
		func_675(iParam0, 4);
		func_676(iVar0, 1);
		func_677(iVar0, 1);
	}
	else
	{
		func_678(iParam0, 4);
		func_677(iVar0, 0);
	}
}

void func_522(int* iParam0, char* sParam1)
{
	if (func_518(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_520(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_525(iParam0, 1);
}

bool func_523(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_524(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_525(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_526(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_518(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_674(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_679(iVar0);
	*uParam0 = 0;
}

int func_527(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 790744141;
		case 2:
			return 149614342;
		case 4:
			return -559356470;
		case 8:
			return 1852049024;
		case 16:
			return 1809661801;
		case 32:
			return -1897899944;
		case 64:
			return 2022786542;
		case 128:
			return 141905997;
		case 512:
			return -267673205;
		case 1024:
			return -2040233953;
		case 2048:
			return 1043694409;
		case 4096:
			return -114482302;
		case 8192:
			return -1095289676;
		case 16384:
			return -161854579;
		case 32768:
			return -114482302;
		case 65536:
			return joaat("RE_AD_WARN");
		case 131072:
			return joaat("RE_AD_WARN");
		case 524288:
			return 1468736574;
		case 1048576:
			return 1468736574;
		case 2097152:
			return -120771809;
		case 4194304:
			return 591173485;
		case 8388608:
			return 1787256768;
		case 16777216:
			return -256271136;
		case 33554432:
			return 1613587293;
		case 67108864:
			return -852328799;
		case 134217728:
			return 2015887348;
		default:
			break;
	}
	return -1;
}

int func_528(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 2;
				case 0:
					return 3;
				default:
					break;
			}
			break;
	}
	return iParam0;
}

void func_529(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_530(int iParam0, int iParam1, float fParam2)
{
	return func_680(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

bool func_531(int iParam0, int iParam1, float fParam2, bool bParam3)
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

void func_532(int iParam0, int iParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, iParam1, iParam2);
}

void func_533()
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(4, 1, 0);
}

void func_534(int iParam0, bool bParam1, int iParam2)
{
	func_681(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_682(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_51(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_411(1))
						{
							func_51(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_411(1) || *iParam0 & 8192 != 0))
				{
					func_50(iParam0, 33554432);
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
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_683(iParam0))
			{
				iParam0->f_15 = func_384();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_384() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_684(iParam0);
}

bool func_535(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_536(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_685(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_686(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_0xD0B7AEB56229D317(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_537(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_538(int iParam0, int iParam1)
{
	if (func_687(iParam0))
	{
		return true;
	}
	if (PED::_0x29FCE825613FEFCA(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

void func_539()
{
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_688(iParam2, 1, 1, 1, 0))
	{
		func_51(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_495(iParam1, 1);
	func_444();
}

bool func_541(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_437(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_542()
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
	if ((func_384() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_543(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_544(var uParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_689(iParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
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
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::_0x285D36C5C72B0569(uParam0) <= fVar2)
		{
			if (func_538(iParam2, iParam1))
			{
				func_495(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_545(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_690(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_538(iParam2, iParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_495(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_546(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_691(iParam1);
	if (iParam1->f_12 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_692(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar2, -1f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5f)
				{
					if (func_693())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_412(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & 2097152 != 0)
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, iVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*iParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8f) && *iParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_548(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			iVar1 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar0, 0, 0);
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
			if (!func_694(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_306(iParam0, iVar2) <= func_695(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_549(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_696(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_697(iParam1);
			if (func_698(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_699(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_495(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_495(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_550(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_700(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_697(iParam2);
		if (func_698(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_699(iParam2)
				{
					func_495(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_551(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
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
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_694(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_699(iParam1)
		{
			fVar3 = func_697(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_552(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_701(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_702(iParam1, vVar0, vVar4))
					{
						func_495(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_495(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_702(iParam1, vVar0, vVar7))
					{
						func_495(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_553(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_694(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_703(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_704(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_705(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_706(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_707(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_554(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_0x796EECFF0C6D39BE(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_0x822A001BCEA5BD81(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_0x38497F139981C5C9(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_555(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_708(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_384();
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
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_109(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_384();
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

bool func_556(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_695(iParam0);
	if (iParam0->f_12 > func_200(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_709(iParam1);
	iVar1 = func_710(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_557(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_711(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_558(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_712(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_0x796EECFF0C6D39BE(iParam0, 0, 0);
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
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_0x88AD6CC10D8D35B2(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_0x822A001BCEA5BD81(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_0x38497F139981C5C9(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::_0x06087579E7AA85A9(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!func_713(iParam1, iParam0))
					{
						if (func_109(iVar4, Global_36, 1) < 7f)
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

bool func_559(int iParam0, int iParam1)
{
	if (!func_714(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_560(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_384();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_561(int iParam0, int iParam1)
{
	return PED::_0xE33F98BD76490ABC(*iParam0, PLAYER::PLAYER_ID(), 0);
}

int func_562(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_384();
	}
	else if (func_384() - iParam1->f_4) > func_715(iParam1)
	{
		return func_716(iParam0, iParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_563(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
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

bool func_564(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_565(float fParam0)
{
	if (func_717(1))
	{
		return true;
	}
	if (func_158(&uLocal_0) && !func_168(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

void func_566(int iParam0)
{
	func_436(&(Local_936[iParam0 /*75*/].f_21), 0, 0, 1, 0);
	func_160(8192, iParam0);
	func_160(16384, iParam0);
	func_160(32768, iParam0);
	func_160(65536, iParam0);
}

char* func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dealerA";
		case 1:
			return "dealerb";
		case 2:
			return "confeda";
		case 3:
			return "confedb";
		default:
			break;
	}
	return "INVALID ENTITY";
}

int func_568()
{
	if (func_127(4096))
	{
		return 0;
	}
	if (iLocal_14 != 1)
	{
		return 0;
	}
	return 1;
}

bool func_569()
{
	return ((func_589(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) && PED::_0x285D36C5C72B0569(Global_35) < 2f);
}

void func_570(int iParam0, int* iParam1, float fParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_34(iLocal_35[iParam0], 0, 0))
	{
		return;
	}
	func_508(&(iLocal_35[iParam0]));
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_35[iParam0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(iLocal_35[iParam0]), -1) == iLocal_35[iParam0])
	{
		func_375(iParam0, iParam1);
		func_213(1073741824 /* Float: 2f */, iParam0);
		return;
	}
	if (bParam5)
	{
		func_349(iLocal_35[iParam0], iParam1, joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	}
	func_99(&(iLocal_35[iParam0]), 0);
	iVar0 = 0;
	if (!bParam8)
	{
		iVar0 |= 16384;
	}
	if (bParam4)
	{
		iVar0 |= 33554432;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (bParam10)
	{
		switch (func_718(iLocal_35[iParam0], Global_35, 1060437492 /* Float: 0.707f */))
		{
			case 0:
				iVar2 = 10;
				break;
			case 2:
				iVar2 = 14;
				break;
			case 3:
				iVar2 = 13;
				break;
			case 1:
				switch (func_718(iLocal_35[iParam0], Global_35, 1f))
				{
					case 3:
						iVar2 = 11;
						break;
					default:
						iVar2 = 12;
						break;
				}
				break;
		}
		TASK::TASK_PLAY_ANIM(0, Local_670[iVar2 /*2*/], Local_670[iVar2 /*2*/].f_1, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (!bParam4)
	{
		if (bParam11)
		{
			TASK::TASK_REACT(0, Global_35, Global_36, iParam3, fParam9, 0, 4);
		}
		else if (bParam12)
		{
			TASK::TASK_REACT(0, func_719(iParam0), func_720(func_719(iParam0)), iParam3, fParam9, 0, 4);
		}
	}
	if (bParam6 && iParam7 > -1)
	{
		if (func_308(iLocal_35[iParam0], 0) == joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_35[iParam0], func_258(iParam0), false, 0, false, false);
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, iParam7, bParam4, 1);
	}
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam2, iVar0, 0);
	func_212(iLocal_35[iParam0], &iVar1, 0, 0, 1, 1);
}

void func_571(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_572(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_573(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_574(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

int func_575(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_721(1);
	}
	else
	{
		iVar0 = func_722(iParam0);
	}
	return iVar0;
}

void func_576(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_723(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_724(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_577()
{
	return Global_1897952.f_41;
}

void func_578(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_187(iParam0, 8192))
	{
		iVar0 = func_724(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_579(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_446(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_580(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_71(iParam0, 262144))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_725(262144, iVar0, 0, 1);
		}
	}
	if (func_71(iParam0, 128))
	{
		func_725(128, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 524288))
	{
		func_725(524288, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 536870912))
	{
		func_725(536870912, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 4194304))
	{
		func_725(4194304, iVar0, 0, 1);
	}
	else if (func_71(iParam0, 8388608))
	{
		func_725(8388608, iVar0, 0, 1);
	}
}

void func_581(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_582(bool bParam0)
{
	if (!bParam0 && func_726(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_583()
{
	return Global_1310750.f_16037;
}

bool func_584(int iParam0)
{
	if (!func_242(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_585(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_242(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_727(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_586(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_728(&Global_1393447, 1);
	func_729();
	func_730();
	func_731((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_384() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		func_732();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_725(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_725(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_725(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_733(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_734(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_734((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

void func_587(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 = (Global_1392050[iParam1 /*14*/].f_1 - (Global_1392050[iParam1 /*14*/].f_1 && iParam0));
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_589(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_590()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_591(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_592(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_591(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_378() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_593(bool bParam0, bool bParam1, bool bParam2)
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

int func_594()
{
	return Global_1899515;
}

int func_595(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_596(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_597(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_598(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_599(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_600(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_601(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_602(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_603(bool bParam0, int iParam1, int iParam2)
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

bool func_604()
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

int func_605(int iParam0)
{
	if (!func_608(iParam0))
	{
		return -1;
	}
	return func_736(func_735(iParam0));
}

bool func_606(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_607(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_608(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_609(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_610(int iParam0)
{
	return func_71(iParam0, Global_1310750.f_16072 | 64);
}

int func_611(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_612(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::_GET_INTERIOR_INFO(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("Q0304_TUNNEL_ENT"):
			case joaat("J_10P_TUNNEL_1A_INT"):
			case joaat("BAC_TUNNELCURVE_INT"):
			case joaat("Q0304_TUNNEL_INT"):
			case joaat("L_08_TRAIN_TUNNEL2_INT"):
			case joaat("BAC_TUNNELEXIT_INT"):
			case joaat("BAC_TUNNELENT_INT"):
			case joaat("J_14_TUNNEL01_INT"):
			case 653987431:
			case joaat("BAC_TUNNEL_INT"):
			case joaat("HEA_TUNNEL_01"):
			case joaat("HEA_TUNNEL_02"):
			case joaat("Q0304_TUNNEL_EXIT"):
			case joaat("J_16_TUNNEL_INT"):
				return 1;
		}
	}
	return 0;
}

bool func_613(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_614(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

int func_615(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 8;
			break;
		case 4:
			iVar0 = 16;
			break;
		case 5:
			iVar0 = 32;
			break;
		case 6:
			iVar0 = 512;
			break;
		default:
			return 0;
	}
	return iVar0;
}

bool func_616(int iParam0, int iParam1)
{
	return (Global_1392050[iParam1 /*14*/].f_1 && iParam0) != 0;
}

int func_617(int iParam0)
{
	if (func_490(iParam0, 0))
	{
		return Global_40.f_9571[iParam0 /*10*/].f_2;
	}
	return -1;
}

void func_618()
{
	func_737(23);
}

void func_619(int iParam0)
{
	Global_1310750.f_16035 = (Global_1310750.f_16035 || iParam0);
}

int func_620(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_621(int iParam0)
{
	int iVar0;

	iVar0 = func_738(iParam0);
	if (iVar0 != 0)
	{
		func_739(-1, 24, 0, iVar0);
	}
}

void func_622(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_741(func_740(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_71(iParam0, 2))
	{
		func_742(iParam0, func_575(iParam3));
	}
	if (func_71(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_577();
		}
		func_743(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_187(iParam0, 65536))
	{
		func_744(iParam0, iParam1);
		func_745(iParam0, func_228(iParam0, iParam1));
		func_619(128);
	}
	func_579(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216 /* Float: 1f */, 0, 0);
	func_580(iParam0, 1);
	if (!bParam2)
	{
		func_619(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_746(524288);
	}
	if (func_747(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_747(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_623(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_748(&Global_0, 8);
	}
	if (!func_749() || func_447() != -1)
	{
		return;
	}
	func_748(&Global_0, 1);
}

int func_624(int iParam0, bool bParam1)
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

void func_625(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

bool func_626(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_105(vParam0))
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

bool func_627(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_105(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_628(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_105(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_113(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_629()
{
	int iVar0;
	int iVar1;

	iVar0 = func_750(func_417());
	if (iVar0 == 8)
	{
		iVar1 = func_418(func_417());
		if (func_420(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_751(func_721(0)))
	{
		return false;
	}
	if (func_752())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_630(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_631(var uParam0, var uParam1)
{
	vector3 vVar0;

	vVar0 = { *uParam0 };
	if (func_753(&uParam1))
	{
		return 1;
	}
	if (!func_107(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_632(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_0x610438375E5D1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_633(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_754(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_634(var uParam0)
{
	return func_103(*uParam0, 4);
}

bool func_635(var uParam0)
{
	return func_103(*uParam0, 64);
}

bool func_636(var uParam0)
{
	return func_103(*uParam0, 8);
}

bool func_637(var uParam0)
{
	return func_103(*uParam0, 128);
}

bool func_638(var uParam0)
{
	return func_103(*uParam0, 2048);
}

void func_639(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_640(var uParam0)
{
	return func_103(*uParam0, 1024);
}

bool func_641(var uParam0)
{
	return func_103(*uParam0, 256);
}

void func_642(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_643(var uParam0)
{
	return func_103(*uParam0, 512);
}

bool func_644(var uParam0)
{
	return func_103(*uParam0, 4096);
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

bool func_646(int iParam0)
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

int func_647(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_755(iParam0, 0, 1) };
		iVar5 = joaat("SLOTID_WEAPON_0");
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_756((398 + iVar28), 1);
			if (func_757(iParam0, &Var0, iVar5, 0))
			{
				if (func_758(iParam0, &Var6, iVar5))
				{
					Var29 = { func_759(iParam0, Var0, iVar5, 0) };
					func_760(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_761(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_762(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_763(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}
}

void func_648(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_649(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_650(int iParam0)
{
	vector3 vVar0;

	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_651(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_486(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_764(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_765("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_766(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_589(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_767(iVar1);
				return true;
			}
			iVar3++;
		}
		func_767(iVar1);
	}
	return false;
}

int func_652(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_764(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_768(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_769(bParam2), iParam0, 0);
	return iVar2;
}

var func_653(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_654(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

int func_655(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_656(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_657()
{
	if (func_447() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_658(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_state", iParam1);
}

void func_659(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_behavior", iParam1);
}

void func_660(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_INT(iParam0, "pedRoam_target", iParam1);
}

bool func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1396084))
	{
		return false;
	}
	iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1396084);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1396084);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar1))
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar1, "pedRoam_hashKey"))
			{
				if (DECORATOR::DECOR_GET_INT(iVar1, "pedRoam_hashKey") == iParam0)
				{
					return true;
				}
			}
		}
		iVar2++;
	}
	return false;
}

bool func_662(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return true;
			}
		}
	}
	return false;
}

int func_663(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_664(var uParam0)
{
	if (!func_34(*uParam0, 0, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 252, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 255, true);
}

Vector3 func_665(int iParam0, bool bParam1)
{
	if (func_2(iParam0, 131072))
	{
		return func_770();
	}
	if (func_2(iParam0, 262144))
	{
		return func_771(bParam1);
	}
	return 0f, 0f, 0f;
}

int func_666(var uParam0, bool bParam1, bool bParam2)
{
	if (!bParam1 || func_518(uParam0->f_6))
	{
		if (MISC::IS_BIT_SET(*uParam0, 0))
		{
			if (!bParam2)
			{
				return 1;
			}
			if (func_772(uParam0->f_6, bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_668(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_667(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_219(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_163(&(iParam1->f_13));
		}
		if (func_773(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_774(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_668(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_205(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_775(*uParam0, 1, 1);
						}
					}
					else if (func_776(iParam1, 22))
					{
						func_775(*uParam0, 0, 1);
					}
				}
				if (func_777(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_778(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_779(iParam8);
					if (func_780(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_781(uParam3);
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
					func_782(iParam1, uParam3, fVar8);
					if (func_783(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_436(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_784(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_777(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_785(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_780(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_778(uParam0, func_777(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_779(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_436(uParam3, 0, 0, 1, 1);
					}
					func_786(iParam1, 1);
				}
				func_782(iParam1, uParam3, fVar8);
				if (func_784(uParam0, iParam1, fParam4, bVar6))
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
			func_206(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_669(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;

	iVar0 = func_787(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		iVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			func_284(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_670(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_447() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_671(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_788(iParam0, &iVar0, &iVar1);
	if (!func_789(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_790(iVar0, iVar1);
}

void func_672(int iParam0, vector3 vParam1, vector3 vParam4)
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

void func_673(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_488(iParam0);
		func_489(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_674(int iParam0)
{
	return iParam0;
}

void func_675(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 - (Global_1945188[iParam0 /*18*/].f_1 && iParam1));
}

void func_676(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_791(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_677(int iParam0, bool bParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_678(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 = (Global_1945188[iParam0 /*18*/].f_1 || iParam1);
}

void func_679(int iParam0)
{
	if (!func_792(iParam0))
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

bool func_680(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

void func_681(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_793();
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
			func_794(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_682(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_683(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_447() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_795(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_795(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_710(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_684(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_796(iParam0);
	}
}

bool func_685(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
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

bool func_686(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_797(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_687(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_688(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

float func_689(int iParam0)
{
	return iParam0->f_23;
}

int func_690(int iParam0)
{
	return iParam0->f_21;
}

float func_691(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_200(iParam0);
	}
	if (GRAPHICS::_0x25CA89B2A39DCC69() > 0.833f)
	{
		return func_798(iParam0);
	}
	return func_200(iParam0);
}

float func_692(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_693()
{
	int iVar0;
	int iVar1;

	iVar0 = func_595(func_594());
	iVar1 = func_799(func_594());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_694(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_710(iParam2);
	}
	else
	{
		iVar1 = func_709(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_710(iParam0);
	}
	else
	{
		iVar0 = func_709(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
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

float func_695(int iParam0)
{
	return iParam0->f_26;
}

bool func_696(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
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
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_437(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_308(iVar0, 0)))
		{
			if (func_800(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_697(int iParam0)
{
	return iParam0->f_17;
}

bool func_698(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::_0x06087579E7AA85A9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_699(int iParam0)
{
	return iParam0->f_18;
}

bool func_700(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
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
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_308(iVar0, 0)))
		{
			if (func_801(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_701(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_702(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_680(iParam0, vParam4, 0.5f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
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

int func_703(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
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
	if (func_802(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_704(int iParam0)
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

bool func_705(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_412(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_706(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_412(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_707(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_412(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1935630.f_34[iParam3], 17))
		{
			if (PED::_0x06087579E7AA85A9(iParam1, Global_1935630.f_34[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_708(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_109(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_709(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_710(int iParam0)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_711(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1935630.f_40 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1935630.f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_685(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_0x29FCE825613FEFCA(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_437(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_437(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_712(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_603(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_713(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_713(iParam1, iVar1))
				{
					if (func_109(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_713(int iParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
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

int func_714(int iParam0)
{
	if (func_657())
	{
		return 0;
	}
	return func_803(Global_1347702[58 /*49*/].f_15, 1);
}

int func_715(int iParam0)
{
	return iParam0->f_20;
}

int func_716(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
	{
		if (PED::_0x06087579E7AA85A9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_717(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_718(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_804(iParam0, vVar0, iParam2);
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return iLocal_35[2];
		case 1:
			return iLocal_35[3];
		case 2:
			return iLocal_35[0];
		case 3:
			return iLocal_35[1];
		default:
			break;
	}
	return 0;
}

Vector3 func_720(int iParam0)
{
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, 1f, 0f);
}

int func_721(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_805(1, 0, 0);
	}
	else
	{
		iVar0 = func_417();
	}
	return func_722(iVar0);
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_723(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_724(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_725(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_453(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_445(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_806(iVar0) < func_807(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_579(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_808(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_727(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
	{
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;
	}
	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_728(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_729()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_809(iVar0, 128))
		{
			func_810(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_730()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_809(iVar0, 128) && func_809(iVar0, 1))
		{
			func_810(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_731(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_732()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_71(iVar0, 16777216))
		{
			if (!func_811(iVar0))
			{
				func_812(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_733(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_446(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_446(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_446(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_446(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_446(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_446(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_446(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_734(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_378();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_735(int iParam0)
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

int func_736(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

void func_737(int iParam0)
{
	int iVar0;

	if (func_447() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_183(func_813(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_813(iVar0), func_472(), 1))
			{
				func_814(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_739(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_815() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_815();
					}
					func_816(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_50(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> /*16*/ func_740(int iParam0)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	return Var0;
}

void func_741(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_742(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_723(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_724(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_743(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_187(iParam0, 8192))
	{
		iVar0 = func_724(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_744(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_449(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_745(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_71(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_105(vParam1))
	{
		return;
	}
	if (!func_242(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] };
		if (func_105(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_463(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] };
			}
			iVar0++;
		}
	}
}

void func_746(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_812(iVar0, iParam0);
		iVar0++;
	}
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_748(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_749()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_750(int iParam0)
{
	if (!func_613(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_751(int iParam0)
{
	return (Global_1310750.f_16074 && iParam0) != 0;
}

bool func_752()
{
	return Global_1894899 & 2 != 0;
}

bool func_753(var uParam0)
{
	return func_103(*uParam0, 1);
}

void func_754(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (func_817(iParam1))
		{
			func_818(iParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_0x899A04AFCC725D04(iParam0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_819(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_SET_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_820(iParam0, 0);
			bVar0 = true;
		}
		func_821(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

struct<5> /*40*/ func_755(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	Var0 = { func_822(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_650(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { func_759(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { func_823(bParam1) };
			if (bParam2 && func_824(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_757(iParam0, &Var0, joaat("SLOTID_WEAPON_0"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_757(iParam0, &Var0, joaat("SLOTID_WEAPON_1"), 0))
				{
					Var0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_758(iParam0, &Var5, joaat("SLOTID_WEAPON_0")))
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
			Var0 = { func_825(bParam1) };
			switch (func_826(iParam0))
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
			if (func_827(iParam0, -1823706425))
			{
				Var0 = { func_759(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_827(iParam0, -1483207246))
			{
				Var0 = { func_759(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
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
				if (!func_828(Var0, &Var27, bParam1, 0))
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

int func_756(int iParam0, int iParam1)
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

bool func_757(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_829(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_758(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_830(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> /*32*/ func_759(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_486(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_769(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_760(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_831(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_828(*uParam1, &Var0, bParam6, 0))
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
	if (!func_761(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_769(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_761(bool bParam0)
{
	if (func_447() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_769(bParam0));
}

int func_762(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_832(iParam0))
	{
		return 0;
	}
	if (!func_761(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_763(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_493(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

int func_764(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_650(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_487(iParam0, 1399091007))
	{
		func_833(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_765(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_769(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_766(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_767(int iParam0)
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

int func_768(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_834(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_835(&Var0, func_823(0));
	}
	if (!func_836(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_767(iVar18);
	return iVar19;
}

int func_769(bool bParam0)
{
	if (func_447() == -1)
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

Vector3 func_770()
{
	switch (iLocal_786)
	{
		case 0:
			return 1840.723f, -383.8766f, 42.28694f;
		case 1:
			return 1317.383f, -1645.26f, 65.98895f;
		case 2:
			return 777.8688f, -907.4637f, 50.04131f;
		case 3:
			return 865.792f, -533.5311f, 88.01648f;
		case 4:
			return 1391.055f, -1697.967f, 66.39729f;
		case 5:
			return 1565.515f, -1162.214f, 44.4227f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_771(bool bParam0)
{
	if (bParam0)
	{
		switch (iLocal_786)
		{
			case 0:
				return 1844.086f, -379.4138f, 42.30054f;
			case 1:
				return 1313.056f, -1642.984f, 65.99541f;
			case 2:
				return 779.8592f, -902.8204f, 50.11404f;
			case 3:
				return 862.6526f, -537.3989f, 88.02016f;
			case 4:
				return 1386.838f, -1701.266f, 66.62038f;
			case 5:
				return 1571.346f, -1163.179f, 44.60621f;
			default:
				break;
		}
	}
	switch (iLocal_786)
	{
		case 0:
			return 1841.088f, -379.9351f, 42.30015f;
		case 1:
			return 1313.127f, -1645.996f, 65.99552f;
		case 2:
			return 777.3195f, -903.2181f, 50.04406f;
		case 3:
			return 865.1678f, -537.7794f, 87.93773f;
		case 4:
			return 1390.038f, -1701.856f, 66.50535f;
		case 5:
			return 1569.393f, -1161.886f, 44.47321f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_772(int iParam0, bool bParam1)
{
	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	return !func_791(iParam0, 4);
}

bool func_773(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_837(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_436(uParam2, 0, 0, 1, 0);
				func_51(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_838(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_50(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_774(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_2(iParam4, 32);
		func_435(iParam1, uParam2, 0);
		iVar5 = func_839(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_436(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_776(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_776(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
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
				iParam6 = func_840(uParam0);
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
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_841(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_842(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_776(iParam1, 23))
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
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_775(*uParam0, 1, 1);
			}
			else
			{
				func_775(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_775(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_776(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_777(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_843(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_778(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_844(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_779(int iParam0)
{
	if (func_2(iParam0, 4))
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
	if (func_2(iParam0, 16384))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_2(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_780(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_845(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_846(Global_35)) || func_847(Global_35)) || func_848(Global_35));
	fVar12 = -1f;
	if (func_158(&(iParam1->f_13)))
	{
		fVar12 = func_159(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_518((uParam4[iVar0 /*17*/])->f_6);
		func_849(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_850(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_851(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_436(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_138(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_435(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_852(iParam1, fParam6, iParam1->f_9))
					{
						func_163(&(iParam1->f_18));
						if (bVar6)
						{
							func_138(uParam4, 0, 0);
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
		func_853(iParam1, fParam2);
	}
	return bVar5;
}

void func_781(var uParam0)
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

void func_782(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_854(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_853(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_783(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_855(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_856(iParam1, 0);
				func_435(iParam1, uParam2, func_776(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_784(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_163(&(iParam1->f_18));
			return false;
		}
		else if (func_158(&(iParam1->f_18)))
		{
			func_167(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_158(&(iParam1->f_18)))
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
	return func_168(&(iParam1->f_18), fParam2);
	return true;
}

void func_785(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_849(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_786(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_787(int* iParam0)
{
	if (func_776(iParam0, 0))
	{
		if (func_656(iParam0))
		{
			func_786(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_788(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_789(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_857(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_858(iParam0))
	{
		return false;
	}
	if (func_859(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_860(iParam0, 1)) || func_861(32768))
	{
		if (!func_860(iParam0, 262144) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_862())
	{
		return false;
	}
	return true;
}

void func_790(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_791(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

bool func_792(int iParam0)
{
	return func_791(iParam0, 2);
}

bool func_793()
{
	if (func_863())
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

void func_794(var uParam0, var uParam1)
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

int func_795(int iParam0)
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
	if (iParam0->f_6 == 3)
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

void func_796(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_50(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_51(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

int func_797(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("WEAPON_UNARMED");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

var func_798(int iParam0)
{
	return iParam0->f_25;
}

int func_799(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_800(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_801(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_801(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_802(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("WEAPON_MELEE_KNIFE"))
				{
					if (WEAPON::_0x9E2D5D6BC97A5F1E(iParam0, Global_1935630.f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_803(int iParam0, bool bParam1)
{
	switch (func_864(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_804(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_865(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_564(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_805(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_866(iVar2))
				{
					vVar3 = { VOLUME::_GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_806(int iParam0)
{
	if (func_242(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_807(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_808(int iParam0, int iParam1)
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

bool func_809(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

void func_810(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 = (Global_1393237.f_11[iParam0 /*30*/].f_10 || iParam1);
}

bool func_811(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_812(int iParam0, int iParam1)
{
	if (!func_242(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 = (Global_1310750[iParam0 /*111*/].f_1 - (Global_1310750[iParam0 /*111*/].f_1 && iParam1));
}

int func_813(int iParam0)
{
	if (!func_867(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_814(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_868(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_815()
{
	return Global_1899515;
}

void func_816(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_869(*uParam0);
	iVar1 = func_870(*uParam0);
	iVar2 = func_871(*uParam0);
	iVar3 = func_595(*uParam0);
	iVar4 = func_799(*uParam0);
	iVar5 = func_872(*uParam0);
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
	iVar6 = func_873(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_873(iVar1, iVar0);
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
	func_874(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_817(int iParam0)
{
	switch (iParam0)
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

void func_818(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_875(iParam0, iParam1))
		{
			if (func_876(iParam0, iParam1))
			{
				if (func_877(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_878(iParam0);
				}
			}
			else
			{
				PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
				PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
			}
			PED::_0xE3144B932DFDFF65(iParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 9);
		}
	}
}

void func_819(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::REMOVE_TAG_FROM_META_PED(iParam0, joaat("HATS"), 1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_820(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_SET_PED_BODY_COMPONENT(iParam0, joaat("META_HORSE_SADDLE_ONLY"));
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_821(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1f);
	}
}

struct<4> /*32*/ func_822(bool bParam0)
{
	return func_759(joaat("CHARACTER"), func_879(), -1591664384, bParam0);
}

struct<4> /*32*/ func_823(bool bParam0)
{
	int iVar0;

	iVar0 = func_769(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_759(923904168, func_822(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_759(923904168, func_822(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_759(923904168, func_822(bParam0), -740156546, 0);
}

bool func_824(int iParam0, bool bParam1)
{
	if (func_826(iParam0) == 1779021115)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_880(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_825(bool bParam0)
{
	int iVar0;

	iVar0 = func_769(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_759(271701509, func_822(bParam0), 12999093, 0) };
		}
		return Global_1223204;
	}
	return func_759(271701509, func_822(bParam0), 12999093, 0);
}

int func_826(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_827(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_826(iParam0);
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

bool func_828(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_769(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_829(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	var uVar4;

	if (!func_486(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_759(iParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_769(bParam6), &Var0, 0);
	return uVar4;
}

bool func_830(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_769(0);
	*uParam1 = { func_759(iParam0, func_823(0), iParam3, 0) };
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

bool func_831(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_832(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_833(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_834(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_835(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_836(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_769(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_837(int iParam0, int* iParam1)
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
		if (PED::IS_PED_IN_COMBAT(iParam0, func_881((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_838(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_854(uParam0[iVar0 /*17*/]))
		{
			func_524(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_839(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_882(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_518((uParam2[iVar0 /*17*/])->f_6))
		{
			func_524(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_840(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_357(*uParam0);
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

int func_841(var uParam0, int iParam1)
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

void func_842(int* iParam0, int* iParam1)
{
	if (!func_776(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_524(iParam1, 19);
			func_856(iParam0, 23);
			func_883(iParam1, 2);
		}
	}
}

bool func_843(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_884(16))
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
					func_885(16);
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

void func_844(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_882(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_845(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_846(int iParam0)
{
	return (func_886(iParam0, 4) || func_886(iParam0, 5));
}

int func_847(int iParam0)
{
	return func_886(iParam0, 7);
}

int func_848(int iParam0)
{
	return func_886(iParam0, 6);
}

void func_849(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_854(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_882(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_850(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_887(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_772(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_521(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_521(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_888(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_851(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_889(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_890(iParam1, 1))
	{
		func_891(iParam1, 1);
		return true;
	}
	return false;
}

bool func_852(int* iParam0, float fParam1, bool bParam2)
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

void func_853(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_854(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_855(int iParam0)
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

void func_856(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_857(int iParam0, int iParam1)
{
	if (func_447() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_858(int iParam0)
{
	if (func_447() != -1)
	{
		if (func_860(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_860(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_859(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_860(iParam0, 65536) && !func_860(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_860(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_860(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_860(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_861(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_862()
{
	return Global_1905944.f_5694;
}

bool func_863()
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

int func_864(int iParam0)
{
	if (!func_608(iParam0))
	{
		return -1;
	}
	return func_892(iParam0);
}

float func_865(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_866(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

bool func_867(int iParam0)
{
	return iParam0 > -1;
}

bool func_868(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_869(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_655(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_870(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_871(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_872(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_873(int iParam0, int iParam1)
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

void func_874(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_893(uParam0, iParam6);
	func_894(uParam0, iParam5);
	func_895(uParam0, iParam4);
	func_896(uParam0, iParam3);
	func_897(uParam0, iParam2);
	func_898(uParam0, iParam1);
}

bool func_875(int iParam0, int iParam1)
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

bool func_876(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_877(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
	if (!func_875(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	return PED::_0x610438375E5D1801(iVar1);
}

void func_878(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> /*32*/ func_879()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_880(int iParam0)
{
	if (!func_899(iParam0))
	{
		return false;
	}
	return func_900(iParam0);
}

int func_881(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_882(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_518(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_526(&(iParam1->f_6), 0, 1);
	}
	if (!func_518(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_854(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_901(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_518(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_888(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_902(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_903(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_519(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_902(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_521(iParam1->f_6, 0, 1);
				}
				else
				{
					func_521(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_883(int* iParam0, int iParam1)
{
	if (!func_523(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_524(iParam0, 14);
		}
	}
}

bool func_884(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_885(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_886(int iParam0, int iParam1)
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

bool func_887(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

void func_888(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	func_902(iParam0, 18, 0, 1);
	func_902(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UIPROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_889(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	iVar0 = func_674(iParam0);
	if (HUD::_UIPROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_890(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_518(iParam0))
	{
		return false;
	}
	iVar0 = func_674(iParam0);
	return HUD::_UIPROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_891(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	HUD::_UIPROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

int func_892(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_904(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_893(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_894(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_895(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_870(*uParam0);
	iVar1 = func_869(*uParam0);
	if (iParam1 < 1 || iParam1 > func_873(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_896(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_897(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_898(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_899(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_900(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_901(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_791(iVar0, 2))
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
				func_905(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, bParam10, iParam11, bParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_902(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

void func_903(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_518(iParam0))
	{
		return;
	}
	iVar0 = func_674(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

int func_904(int iParam0)
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

void func_905(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, bool bParam16, int iParam17, bool bParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_676(iParam0, 1);
	func_677(iParam0, 1);
	func_678(iParam0, 128);
}

