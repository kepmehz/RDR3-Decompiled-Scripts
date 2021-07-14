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
	int iLocal_9 = 0;
	bool bLocal_10 = false;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	struct<27> /*216*/ sLocal_14 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 24;
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
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 1;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 1065353216;
	var uLocal_182 = 1119092736;
	var uLocal_183 = 1092616192;
	var uLocal_184 = 1085276160;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	struct<45> /*360*/ sLocal_188[11];
	bool bLocal_684 = false;
	int iLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = -1;
	var uLocal_694 = 0;
	char* sLocal_695 = NULL;
	int iLocal_696 = 0;
	var uLocal_697 = 0;
	bool bLocal_698 = false;
	bool bLocal_699 = false;
	int iLocal_700 = 0;
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	int iLocal_703 = 0;
	bool bLocal_704 = false;
	bool bLocal_705 = false;
	bool bLocal_706 = false;
	bool bLocal_707 = false;
	bool bLocal_708 = false;
	bool bLocal_709 = false;
	bool bLocal_710 = false;
	bool bLocal_711 = false;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	bool bLocal_714 = false;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	bool bLocal_717 = false;
	int iLocal_718 = 0;
	bool bLocal_719 = false;
	bool bLocal_720 = false;
	bool bLocal_721 = false;
	bool bLocal_722 = false;
	bool bLocal_723 = false;
	int iLocal_724 = 0;
	bool bLocal_725 = false;
	bool bLocal_726 = false;
	bool bLocal_727 = false;
	bool bLocal_728 = false;
	int iLocal_729 = 0;
	bool bLocal_730 = false;
	bool bLocal_731 = false;
	int iLocal_732 = 0;
	bool bLocal_733 = false;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	bool bLocal_736 = false;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	bool bLocal_739 = false;
	bool bLocal_740 = false;
	bool bLocal_741 = false;
	bool bLocal_742 = false;
	bool bLocal_743 = false;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	bool bLocal_747 = false;
	bool bLocal_748 = false;
	bool bLocal_749 = false;
	bool bLocal_750 = false;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	bool bLocal_777 = false;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	bool bLocal_783 = false;
	var uLocal_784 = 0;
	var uLocal_785 = -1;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = -1;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	bool bLocal_824 = false;
	bool bLocal_825 = false;
	bool bLocal_826 = false;
	int iLocal_827 = 0;
	bool bLocal_828 = false;
	int iLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	vector3 vLocal_836 = { 0f, 0f, 0f };
	int iLocal_839 = 0;
	int iLocal_840[4] = { 0, 0, 0, 0 };
	bool bLocal_845 = false;
	int iLocal_846 = 0;
	bool bLocal_847 = false;
	bool bLocal_848 = false;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void main()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_685 = -1;
	sLocal_695 = "beat_gang_camp_reminder";
	iLocal_696 = 23;
	vLocal_836 = { -277.3855f, 805.2767f, 119.1796f };
	iLocal_839 = joaat("UI_BOOK_VALENTINE_JAIL_LEDGER");
	iLocal_846 = -1;
	iLocal_849 = 20000;
	iLocal_852 = vScriptParam_0.x;
	iLocal_850 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_851 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_851)
		{
			iLocal_851 = 0;
			func_4(iLocal_852, &iLocal_850);
			switch (iLocal_850)
			{
				case 0:
					iLocal_850 = 1;
					break;
				case 1:
					func_5(iLocal_852);
					if (func_7(func_6(iLocal_852)))
					{
						func_8(func_6(iLocal_852), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), func_9(iLocal_852));
					iVar1 = func_10(iLocal_852);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_853 = (MISC::GET_GAME_TIMER() + iLocal_849);
					iLocal_850 = 2;
					break;
				case 2:
					if (func_11() || iLocal_853 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_852);
						iLocal_853 = (MISC::GET_GAME_TIMER() + iLocal_849);
						iLocal_850 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_852) || iLocal_853 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_852);
						iLocal_853 = (iLocal_849 + MISC::GET_GAME_TIMER());
						iLocal_850 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_852) || iLocal_853 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_852);
						iLocal_853 = (iLocal_849 + MISC::GET_GAME_TIMER());
						iLocal_850 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_852)))
					{
						if (func_17(func_6(iLocal_852), 4) && !iLocal_853 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_852) || iLocal_853 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_852, 4);
								iLocal_853 = (iLocal_849 + MISC::GET_GAME_TIMER());
								iLocal_850 = 7;
							}
							Jump @897; //curOff = 548
							if (iLocal_853 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260.f_3790))
							{
								func_21(iLocal_852);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_852);
								func_28(iLocal_852);
								func_29();
								func_30();
								iLocal_850 = 8;
							}
							Jump @897; //curOff = 652
							func_31(iLocal_852);
							func_32();
							iLocal_850 = 9;
							Jump @897; //curOff = 671
							func_33(&Global_1898004);
							func_34(iLocal_852, &Global_1898004);
							iLocal_850 = 10;
							Jump @897; //curOff = 698
							func_35(iLocal_852);
							if (func_20() == -1)
							{
								HUD::_DISPLAY_HUD_COMPONENT(1833957607);
							}
							func_19(iLocal_852, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_850 = 11;
							Jump @897; //curOff = 768
							if (func_38(iLocal_852))
							{
								iLocal_851 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(&Global_1898004, iLocal_852);
							func_40(iLocal_852);
							func_19(iLocal_852, 8);
							if (func_41())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_852 /*35*/].f_10);
							if (Global_1888801[iLocal_852 /*35*/].f_11 > 0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_852 /*35*/].f_11);
							}
							Jump @897; //curOff = 878
							func_42(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (Global_1888801[iLocal_852 /*35*/].f_12 != 0)
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[iLocal_852 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	int iVar0;

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
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	if (((!func_43(-515561750) && func_20() == -1) && !STREAMING::IS_IPL_ACTIVE_HASH(1186533019)) && !STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_44(-892659042);
		func_45();
	}
}

bool func_3()
{
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899.f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_46(iParam0))
	{
		Global_1894899.f_7 = 0;
		func_37(16);
		return;
	}
	if (func_47(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_48(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_47(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_48(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_47(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_48(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_47(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_48(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_47(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_48(1);
			*iParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
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

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] = (Global_1897952[iParam0 /*2*/] || iParam1);
}

int func_9(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 38:
			iVar0 = joaat("BLACKWATER_RESIDENTS");
			break;
		case 82:
			iVar0 = joaat("BUTCHERCREEK_RESIDENTS");
			break;
		case 69:
			iVar0 = joaat("EMERALDRANCH_RESIDENTS");
			break;
		case 61:
			iVar0 = joaat("MANICATO_RESIDENTS");
			break;
		case 110:
			iVar0 = joaat("MANZANITAPOST_RESIDENTS");
			break;
		case 5:
			iVar0 = joaat("SAINTDENIS_RESIDENTS");
			break;
		case 35:
			iVar0 = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
		case 105:
			iVar0 = joaat("RHODES_RESIDENTS");
			break;
		case 26:
			iVar0 = joaat("STRAWBERRY_RESIDENTS");
			break;
		case 76:
			iVar0 = joaat("VALENTINE_RESIDENTS");
			break;
		case 92:
			iVar0 = joaat("VANHORNPOST_RESIDENTS");
			break;
		case 56:
			iVar0 = joaat("WAPITI_RESIDENTS");
			break;
		case 78:
			iVar0 = joaat("ANNESBURG_RESIDENTS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_11()
{
	bLocal_698 = Global_1888801[76 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(bLocal_698, 19);
	func_49();
	func_50();
	func_51();
	func_52();
	bLocal_725 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHorseShopStables");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_725, -369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 5.892247f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_725, -367.6902f, 770.4435f, 116.8526f, 0f, 0f, 4.150415f, 26.09184f, 5.747657f, 4.724637f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_725, -391.6759f, 778.7041f, 116.8526f, 0f, 0f, 4.150415f, 23.39705f, 25.94251f, 4.724637f);
	bLocal_726 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volAuctionStables");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_726, -257.2065f, 634.5588f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_726, -221.2732f, 673.6355f, 114.0751f, 0f, 0f, 49.48943f, 11.4594f, 25.36694f, 3.427747f);
	bLocal_723 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-369.4457f, 786.6935f, 115.9904f, 0f, 0f, 3.414876f, 13.87923f, 13.7288f, 6.241f, "Valentine - m_volHorseShop");
	if (!func_53(15))
	{
		iLocal_724 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-361.3393f, 787.48f, 116.4301f, 0f, 0f, 3.999999f, 3.741607f, 3.652877f, 5.744031f, "Valentine - m_volHorseShopOutsideDoor");
		func_54(9, iLocal_724);
	}
	VOLUME::_0xB469CFD9E065EB99(bLocal_723, 10067);
	bLocal_783 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-280.6662f, 915.7495f, 133.066f, 0f, 0f, 0f, 23.88504f, 24.41234f, 15.89547f, "Valentine - m_volGuardDogOwner");
	bLocal_730 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-269.754f, 785.441f, 118.489f, 0f, 0f, 0f, 3.185f, 2.036f, 2.693f, "Valentine - newspaper boy");
	bLocal_731 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotel Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_731, -325.0124f, 767.5158f, 119.4827f, 0f, 0f, -170.2021f, 8.15436f, 18.38504f, 9.051786f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_731, -317.872f, 761.7268f, 118.0002f, 0f, 0f, 11.41397f, 4.27525f, 4.046098f, 2.733858f);
	iLocal_732 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-326.9005f, 777.8173f, 117.6158f, 0f, 0f, -171.616f, 8.5f, 3.390837f, 2.634366f, "Valentine - m_volHotelPorch");
	bLocal_733 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.7273f, 774.2453f, 117.7346f, 0f, 0f, -171.616f, 2.732852f, 1.390837f, 2.634366f, "Valentine - m_volHotelPrompt");
	iLocal_734 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.6349f, 772.4476f, 117.7346f, 0f, 0f, -171.616f, 1.740315f, 1.864735f, 2.634366f, "Valentine - m_volHotelOfflimits");
	iLocal_735 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volHotelMuteAgg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_735, -325.298f, 767.432f, 122.368f, 0f, 0f, -171.616f, 9.71f, 19.745f, 3.774f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_735, -317.643f, 761.773f, 118f, 0f, 0f, 11.414f, 4.574f, 4.322f, 2.734f);
	bLocal_777 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.3821f, 771.3976f, 119.9888f, 0f, 0f, 10.06205f, 10.22391f, 17.49704f, 4.699401f, "Valentine - m_volBank");
	iLocal_778 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.2203f, 776.1706f, 118.8547f, 0f, 0f, 7.323684f, 1.907036f, 1.483034f, 2.606343f, "Valentine - m_volBankPrompt");
	iLocal_779 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volBankShopOfflimits Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_779, -302.2217f, 769.743f, 118.8547f, 0f, 0f, 10.50366f, 2.072344f, 8.025318f, 2.606343f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_779, -309.0788f, 772.8509f, 118.8547f, 0f, 0f, 8.049957f, 5.213456f, 4.413345f, 3.353561f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_779, -311.414f, 775.411f, 118.8547f, 0f, 0f, 8.049957f, 1.633f, 1.085f, 3.354f);
	VOLUME::_0xB469CFD9E065EB99(bLocal_777, 10058);
	bLocal_727 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-339.5029f, 767.1139f, 116.61f, 0f, 0f, -171.616f, 9.604842f, 7.286813f, 4.891439f, "Valentine - m_volButcher");
	bLocal_728 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-341.169f, 767.2f, 116.816f, 0f, 0f, -171.203f, 1.376f, 2.537f, 2.48f, "Valentine - m_volButcherPrompt");
	iLocal_729 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-338.5402f, 767.6559f, 116.5175f, 0f, 0f, -171.2032f, 2.147837f, 2.102079f, 2.480459f, "Valentine - m_volButcherOfflimits");
	VOLUME::_0xB469CFD9E065EB99(bLocal_727, 10061);
	bLocal_705 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.5829f, 812.947f, 118.7894f, 0f, 0f, 100.1415f, 6.023165f, 3.919236f, 2.442381f, "Valentine - m_volBarberOwner");
	bLocal_704 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.1545f, 812.8f, 118.9254f, 0f, 0f, 100.923f, 4.783854f, 2.636788f, 1.990557f, "Valentine - m_volBarberPrompt");
	VOLUME::_0xB469CFD9E065EB99(bLocal_705, 10059);
	bLocal_706 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.4f, 813.5f, 118.83f, 0f, 0f, 11f, 1.9f, 2.3f, 2.195668f, "Valentine - m_volBarberAvoidance");
	POPULATION::_0xB56D41A694E42E86(bLocal_706, 0, 0, 0, -1, -1, 0);
	bLocal_750 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_750, -176.659f, 629.779f, 114.438f, 0f, 0f, -34.98428f, 3.47f, 6.531f, 2.881f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_750, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_750, -174.048f, 633.669f, 114.545f, 0f, 0f, -34.84247f, 1.996f, 2.553f, 2.881f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_750, -179.166f, 626.498f, 114.545f, 0f, 0f, -34.84247f, 2.314f, 2.553f, 2.881f);
	iLocal_751 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_751, -178.982f, 626.715f, 114.531f, 0f, 0f, -34.84247f, 1.767f, 1.396f, 2.881f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_751, -174.439f, 633.098f, 114.4684f, 0f, 0f, -34.84247f, 1.746f, 1.385f, 2.881f);
	iLocal_752 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volPostOfficeOfflimits Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_752, -176.4711f, 629.9696f, 114.5366f, 0f, 0f, -34.98428f, 3.19526f, 6.32671f, 2.880646f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_752, -175.5493f, 627.7673f, 114.545f, 0f, 0f, -34.84247f, 1.351312f, 3.832321f, 2.880646f);
	VOLUME::_0xB469CFD9E065EB99(bLocal_750, 10068);
	bLocal_707 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 21.384f, 11.9942f, 3.513f, "Valentine - m_volBartenderOwner");
	bLocal_708 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-313.4598f, 806.1182f, 118.3f, 0f, 0f, 15.4f, 1.391205f, 4.438885f, 2.6f, "Valentine - m_volBartenderBlocking");
	bLocal_709 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-238.893f, 770.575f, 117.168f, 0f, 0f, 110.026f, 3.985781f, 1.312562f, 1.206507f, "Valentine - m_volKeaBartenderBlocking");
	bLocal_719 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-312.9f, 799f, 119.3f, 0f, 0f, 97.7f, 2.9f, 1.2f, 2.6f, "Valentine - m_volPianoPlayerOwner");
	bLocal_720 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-278.0329f, 807.903f, 119.4f, 0f, 0f, -79.7f, 11.40093f, 8.344561f, 10.8f, "Valentine - m_volSheriffOwner");
	bLocal_722 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volSheriffStation Agg");
	VOLUME::_0x6E0D3C3F828DA773(bLocal_722, bLocal_720);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_722, -272.7689f, 809.2057f, 120.423f, 0f, 0f, -79.7f, 8.085273f, 4.505096f, 4.33611f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_722, -277.0814f, 800.534f, 119.4f, 0f, 0f, -79.7f, 3.711809f, 7.095345f, 4f);
	bLocal_721 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-277.2282f, 807.1215f, 119.472f, 0f, 0f, 9.89185f, 5.00473f, 8.940674f, 2.321479f, "Valentine - m_volSheriffStation Agg");
	VOLUME::_0x3EFABB21E14A6BD1(bLocal_721, 5, 1);
	bLocal_740 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-230.464f, 817.354f, 126.643f, 0f, 0f, -34.207f, 19.604f, 29.858f, 13.22f, "BRL_VALENTINE - m_volChurch");
	iLocal_827 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-290.7f, 728.9f, 118.8f, 100f, 2.5f, 2.5f, 0, 6f, 10f, 25f, 7.5f);
	func_55();
	func_56();
	iLocal_780 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.1926f, 698.6607f, 117.8f, 0f, 0f, 14.96148f, 7.556051f, 14.13844f, 5f, "Valentine - m_VolMagicLantern");
	iLocal_782 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-436.7751f, 497.4727f, 98.05497f, 0f, 0f, 0f, 150f, 150f, 120f, "Valentine - m_volCastors");
	bLocal_847 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volBankWindowBlocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_847, -305.0354f, 780.8205f, 118.3766f, 0f, 0f, 9.999997f, 3f, 0.5f, 2.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_847, -311.0379f, 779.762f, 118.3766f, 0f, 0f, 9.999997f, 3f, 0.5f, 2.5f);
	bLocal_848 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDocWindowBlocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_848, -281.8028f, 805.8524f, 119.1915f, 0f, 0f, -78f, 1.5f, 0.5f, 4f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_848, -287.733f, 801.902f, 118.901f, 0f, 0f, -168f, 1.5f, 2.34f, 3f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_848, -285.112f, 802.48f, 118.901f, 0f, 0f, -168f, 1.5f, 2.135f, 3f);
	return true;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

bool func_13(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_14(int iParam0)
{
	int iVar0[2];
	int iVar3[4];

	iParam0 = iParam0;
	func_57(joaat("P_CHURCHBELL01X"), "props_misc@church_bells", "enter", "loop", "exit", -230.157f, 797.476f, 135.255f, "VAL_SINGLE_TOLL");
	func_58(9, 0, 0);
	func_58(12, 0, 0);
	func_58(19, 0, 0);
	iVar0[0] = joaat("DOOR_VAL_JAIL_CELL_03");
	iVar0[1] = joaat("DOOR_VAL_JAIL_CELL_02");
	func_59(76, &iVar0, 2);
	func_60(iVar0[0], 1, 0, 0, 0, 0, 0, 0);
	func_60(iVar0[1], 1, 0, 0, 0, 0, 0, 0);
	func_60(joaat("DOOR_VAL_JAIL_CELL_01"), 1, 0, 0, 0, 0, 0, 0);
	func_60(joaat("DOOR_VAL_JAIL_SIDE"), 1, 0, 0, 0, 0, 0, 0);
	iVar3[0] = 0;
	func_61(31, 3, iLocal_780, &iVar3, -1, 50);
	func_61(32, 3, iLocal_780, &iVar3, -1, 50);
	func_61(33, 3, iLocal_780, &iVar3, -1, 50);
	func_61(34, 3, iLocal_780, &iVar3, -1, 50);
	func_61(35, 3, iLocal_780, &iVar3, -1, 50);
	func_62();
	func_63(3);
	func_64(&uLocal_784, 944, 13, "", joaat("CART05"), -392.7913f, 762.7368f, 115.6382f, 105.82f, 0, 0);
	func_64(&uLocal_804, 948, 14, "", joaat("SUPPLYWAGON"), -335.9515f, 828.2098f, 117.1725f, 126.14f, 0, 0);
}

bool func_15(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	if (!func_65("VALRGAU"))
	{
		bVar0 = false;
	}
	if (!func_65("SCVTAUD"))
	{
		bVar0 = false;
	}
	if (!func_65("SCVTFAU"))
	{
		bVar0 = false;
	}
	if (!func_65("SVSFAUD"))
	{
		bVar0 = false;
	}
	if (!func_65("RELDAUD"))
	{
		bVar0 = false;
	}
	if (!func_65("REDDVAL"))
	{
		bVar0 = false;
	}
	if (!func_65("REDJAUD"))
	{
		bVar0 = false;
	}
	if (!func_65("VALRDAU"))
	{
		bVar0 = false;
	}
	if (!func_65("MUD2AUD"))
	{
		bVar0 = false;
	}
	if (!func_65("SRVDAUD"))
	{
		bVar0 = false;
	}
	TXD::REQUEST_STREAMED_TXD(iLocal_839, false);
	if (bVar0)
	{
		func_66();
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return false;
	}
	else
	{
		func_44(1777348822);
	}
	return bVar0;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] && iParam1) != 0;
}

int func_18(int iParam0)
{
	return func_67(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
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

int func_20()
{
	return Global_1572887.f_12;
}

void func_21(int iParam0)
{
}

void func_22()
{
	func_68(2, bLocal_777);
	func_69(2);
	func_60(-1951221163, 1, 0, 0, 0, 0, 0, 0);
	func_60(576950805, 1, 0, 0, 0, 0, 0, 0);
	func_60(-1987052564, 1, 0, 0, 0, 0, 0, 0);
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_70(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_71(5000))
		{
			return true;
		}
	}
	switch (func_72(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & 512 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_24()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_73(3);
	if (!func_43(-1329135070))
	{
		func_74(32, &vVar0, 1);
		func_75(&vVar0, 1, 1);
	}
	if (!func_43(2639906))
	{
		func_74(19, &vVar0, 1);
		func_75(&vVar0, 1, 1);
	}
}

void func_25()
{
}

void func_26()
{
	func_76(-534215902, 0, 0);
	func_77(0, -308.9729f, 807.0829f, 117.9797f, iLocal_737, 76);
	func_77(1, -241.294f, 770f, 118.14f, iLocal_738, 76);
}

void func_27(int iParam0)
{
	func_78(0, 11, bLocal_710, iParam0, bLocal_701, iLocal_713, 12, -1082130432 /* Float: -1f */, 0, 0);
	func_79(0, -706941207, 0, 0);
	func_80(0, -287.5711f, 810.3007f, 118.3859f, 186.325f);
	func_81(0, iLocal_712);
	func_82(0, bLocal_711);
	func_60(joaat("DOOR_VAL_DOC_BACK"), 1, 0f, 0, 0, 0, 0, 0);
	func_60(joaat("DOOR_VAL_DOC_BACK_RM"), 1, 0f, 0, 0, 0, 0, 0);
	func_78(3, 10, bLocal_714, iParam0, bLocal_702, iLocal_716, 12, -1082130432 /* Float: -1f */, 0, 0);
	func_79(3, 706990067, 0, 0);
	func_79(3, -290089884, 0, 0);
	func_83(3, iLocal_703);
	func_80(3, -327.153f, 801.3516f, 118.8644f, 21.1882f);
	func_81(3, iLocal_715);
	func_78(6, 9, bLocal_717, iParam0, bLocal_699, iLocal_700, 20, 35f, 0, 0);
	func_79(6, 475159788, 0, 0);
	func_79(6, 2042647667, 0, 0);
	func_80(6, -275.8225f, 774.3359f, 117.8408f, 49.7447f);
	func_81(6, iLocal_718);
	func_78(2, 5, bLocal_750, iParam0, bLocal_750, iLocal_752, 491520, -1082130432 /* Float: -1f */, 0, 0);
	func_78(8, 8, bLocal_705, iParam0, bLocal_704, 0, 4098, -1082130432 /* Float: -1f */, 0, 0);
	func_78(10, 6, bLocal_727, iParam0, bLocal_728, iLocal_729, 460, -1082130432 /* Float: -1f */, 0, 0);
	func_84(iParam0);
	func_78(22, 32, bLocal_730, iParam0, 0, 0, 4, -1082130432 /* Float: -1f */, 0, 0);
	func_85();
	if (func_86())
	{
		func_87(80, 1);
	}
	else
	{
		func_87(80, 0);
	}
	func_78(20, 16, bLocal_731, iParam0, bLocal_733, iLocal_734, 2, -1082130432 /* Float: -1f */, 0, 0);
	func_80(20, -324.3324f, 770.0899f, 119.8233f, 99.8103f);
	func_81(20, iLocal_732);
	func_83(20, iLocal_735);
	VOLUME::_0xB469CFD9E065EB99(bLocal_731, 10118);
	func_78(9, 45, bLocal_723, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
	func_88(9, 1);
	func_88(9, 16384);
	func_89(9, 1);
	func_79(9, joaat("VAL_03_STABLE_FRONT_LEFT"), -1f, 1);
	func_79(9, joaat("VAL_03_STABLE_FRONT_RIGHT"), 1f, 1);
	func_79(9, 1876749464, 0, 0);
	func_79(9, 1331491364, 0, 0);
	func_90(&uLocal_753, 12, bLocal_777, iLocal_778, iLocal_779);
	if (func_91())
	{
		func_60(1988748538, 1, 0, 0, 0, 0, 0, 0);
		func_60(joaat("DOOR_VAL_JAIL_SIDE"), 1, 0, 0, 0, 0, 0, 0);
		func_60(395506985, 1, 0, 0, 0, 0, 0, 0);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1864042599))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1864042599, false);
		}
		bLocal_828 = true;
	}
	else
	{
		func_60(1988748538, 0, 0, 0, 1, 0, 0, 0);
		func_60(395506985, 0, 0, 0, 1, 0, 0, 0);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1864042599))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1864042599, true);
		}
		bLocal_828 = false;
	}
	if (func_92(395506985))
	{
		if (!func_93(395506985))
		{
			func_60(395506985, 1, 0, 0, 0, 0, 0, 0);
		}
	}
	func_60(-166133302, 1, 0, 0, 0, 0, 0, 0);
	func_60(131573063, 1, 0, 0, 0, 0, 0, 0);
	func_60(1949728259, 1, 0, 0, 0, 0, 0, 0);
	func_60(-196411862, 1, 0, 0, 0, 0, 0, 0);
	func_60(-1088187428, 1, 0, 0, 0, 0, 0, 0);
	func_60(-790743215, 1, 0, 0, 0, 0, 0, 0);
	func_60(435440000, 1, 0, 0, 0, 0, 0, 0);
	func_60(-1719547751, 1, 0, 0, 0, 0, 0, 0);
	func_88(9, 8192);
	func_94(joaat("DOOR_VAL_TRAIN_BOOTHS"), 1);
	func_94(1876749464, 1);
	func_94(1331491364, 1);
}

void func_28(int iParam0)
{
	if (func_95(1, bLocal_707, 1))
	{
		VOLUME::_0x4A8FEFC43FD8AC9B(bLocal_707, 1, 1);
	}
	func_95(14, bLocal_719, 1);
	func_95(3, bLocal_720, 1);
	func_95(45, bLocal_725, 1);
	func_95(18, bLocal_725, 0);
	func_95(19, bLocal_725, 0);
	func_95(7, bLocal_726, 1);
	func_95(20, bLocal_726, 0);
	func_95(27, bLocal_726, 0);
	func_95(28, bLocal_726, 0);
	if (func_95(37, bLocal_783, 1))
	{
		func_95(51, bLocal_783, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(bLocal_783, 3, 1);
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(51)))
		{
			VOLUME::_0x53D05D60E5F5B40C(bLocal_783, 3, 1, func_96(51));
		}
	}
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_97(0.8f, 0.2f, 0f, 0f);
	func_98(iParam0, 0);
}

void func_32()
{
	if (!Global_1894899.f_186)
	{
		VEHICLE::_0xF5FFB08976911B50(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_34(int iParam0, var uParam1)
{
	func_99(uParam1, bLocal_698, 1);
	func_99(uParam1, bLocal_717, 2);
	func_99(uParam1, bLocal_710, 2);
	func_99(uParam1, bLocal_714, 2);
	func_99(uParam1, bLocal_720, 11);
	func_99(uParam1, bLocal_736, 3);
	func_99(uParam1, bLocal_740, 6);
	func_99(uParam1, bLocal_750, 10);
}

void func_35(int iParam0)
{
	if (!func_100(iParam0))
	{
		return;
	}
	func_101();
	func_102(8, joaat("ANIMALS_PIGS"));
	func_102(0, joaat("VAL_CIVILIANS"));
	func_102(1, joaat("HRT_HORSE_RIDERS"));
	func_102(2, joaat("VAL_LAW_DEPUTIES"));
}

bool func_36(int iParam0)
{
	return (Global_1894899 && iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 = (Global_1894899 - (Global_1894899 && iParam0));
}

bool func_38(int iParam0)
{
	bool bVar0;

	func_103();
	func_104();
	if (Global_12106[14 /*7*/].f_1 != 3 && Global_12106[14 /*7*/].f_1 != 4)
	{
		func_105();
	}
	bVar0 = func_106();
	if (!bVar0)
	{
		func_107(&Local_188);
	}
	else if (func_108(3, 73) && func_109(73, 1))
	{
		func_110(76, 2, 32);
	}
	if (bVar0)
	{
		if (!func_111(Global_1935630, 4194304))
		{
			if (iLocal_829 >= 3)
			{
				func_112(0);
			}
		}
		else
		{
			return false;
		}
	}
	func_113();
	switch (iLocal_829)
	{
		case 0:
			func_114();
			func_112(1);
			break;
		case 1:
			func_98(iParam0, 1);
			func_112(2);
			break;
		case 2:
			if (!bVar0)
			{
				func_115();
			}
			if (bVar0)
			{
				func_112(0);
			}
			else
			{
				func_112(3);
			}
			break;
		case 3:
			func_116(76);
			func_112(4);
			break;
		case 4:
			func_117();
			func_112(5);
			break;
		case 5:
			if (((!STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_43(-515561750)) && !STREAMING::IS_IPL_ACTIVE_HASH(1186533019)) && !func_118(-892659042))
			{
				if (func_119(72) && func_120(72) == 1)
				{
					if (func_43(1250636944))
					{
						func_121(1250636944);
					}
					func_122();
				}
				else
				{
					if (!func_43(1250636944))
					{
						func_123(1250636944);
					}
					func_45();
				}
			}
			func_112(6);
			break;
		case 6:
			func_124();
			if (func_125(22, &bLocal_824))
			{
				func_126(bLocal_824);
			}
			func_112(7);
			break;
		case 7:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE() && !func_43(-515561750))
			{
				if (!func_118(1573766063))
				{
					if (func_119(74) && func_120(74) == 1)
					{
						if (func_43(-75024673))
						{
							func_121(-75024673);
						}
					}
					else if (!func_43(-75024673))
					{
						func_123(-75024673);
					}
				}
			}
			if (func_127())
			{
				func_112(8);
			}
			else
			{
				func_112(9);
			}
			break;
		case 8:
			func_128();
			func_112(9);
			break;
		case 9:
			func_129();
			func_112(0);
			break;
	}
	func_130(&uLocal_784);
	func_130(&uLocal_804);
	func_131();
	func_132();
	func_133(&uLocal_753);
	func_134(bLocal_847);
	func_134(bLocal_848);
	return false;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0f, 0f, 0f) <= 5f || func_111(Global_1935630, 16384)) || func_111(Global_1935630, 8388608))
	{
		return;
	}
	if (func_135(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_136();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_137(uParam0[iVar3 /*3*/], 1) && func_138(iParam1)) && !func_139(iParam1, 16))
							{
								func_141(iParam1, func_140(), -1, 0, -1, 0);
								func_142(uParam0[iVar3 /*3*/], 1);
							}
							func_143(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_20() == -1)
	{
		if (func_144() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_145();
			func_146(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	func_147(bVar0);
	if (func_20() == -1)
	{
		func_149((iParam1 == func_148() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_41()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_150(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_151();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_852, 2048);
		if (func_7(func_140()))
		{
			func_8(func_140(), 8);
		}
		func_152(iLocal_852, 4);
		func_152(iLocal_852, 8);
		func_147(0);
		if (func_20() == -1)
		{
			func_149(0);
		}
		func_153(iLocal_852);
		func_32();
		return false;
	}
	else
	{
		func_154(iLocal_852);
		func_155(iLocal_852);
		func_156(iLocal_852);
		if (!func_157(iLocal_852, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_43(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_158(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_44(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_45()
{
	if (iLocal_846 == -1)
	{
		iLocal_846 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-333.337f, 770.839f, 115.29f, 6.066f, 0.65f, 5.228f, func_159(99.798f), false, 7);
	}
}

bool func_46(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	return func_160(iParam0, 8);
}

bool func_47(int iParam0)
{
	return (Global_1894899.f_7 && iParam0) != 0;
}

void func_48(int iParam0)
{
	Global_1894899.f_7 = (Global_1894899.f_7 - (Global_1894899.f_7 && iParam0));
}

void func_49()
{
	bLocal_701 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.803f, 805.0234f, 119.5f, 0f, 0f, 9.527998f, 1.792473f, 2.89884f, 2.223762f, "Valentine - m_volDoctorPrompt");
	bLocal_710 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShop Agg");
	bLocal_711 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-286.4778f, 815.4984f, 119.8f, 0f, 0f, -80.4f, 4.936636f, 10.4535f, 2.819574f, "Valentine - m_volDoctorBackroom");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_710, -286.6589f, 808.6324f, 119.8f, 0f, 0f, -80.4f, 10.38628f, 7.7f, 2.8f);
	VOLUME::_0x6E0D3C3F828DA773(bLocal_710, bLocal_711);
	iLocal_713 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volDoctorShopOff Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_713, -288.5862f, 804.4559f, 119.5f, 0f, 0f, 9.527998f, 1.8573f, 2.649464f, 2.223762f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_713, -289.418f, 811.402f, 119.5f, 0f, 0f, 9.528f, 3.349f, 3.978f, 2.224f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_713, -287.157f, 810.98f, 119.5f, 0f, 0f, 9.528f, 1.762f, 2.396f, 2.224f);
	iLocal_712 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.485f, 801.6973f, 119.458f, 0f, 0f, 10.32594f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volDoctorPORCH");
	VOLUME::_0xB469CFD9E065EB99(bLocal_710, 10064);
}

void func_50()
{
	bLocal_714 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralShop Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_714, -323.731f, 801.595f, 118.2f, 0f, 0f, 99.9f, 10.817f, 8.418f, 4.843f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_714, -323.7844f, 801.5854f, 117.6888f, 0f, 0f, 99.89999f, 10.968f, 8.698736f, 5.80101f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(bLocal_714, -323.4476f, 799.6556f, 116.5133f, 0f, 0f, 99.89999f, 6.387919f, 8.698736f, 12.47566f);
	iLocal_715 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralPORCH Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_715, -322.9185f, 794.5805f, 117.8986f, 0f, 0f, 10.32594f, 9f, 3.558567f, 2.381096f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_715, -326.9613f, 807.4636f, 118.0324f, 0f, 0f, 8.726971f, 2.76311f, 2.301893f, 4.510351f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_715, -329.273f, 799.3444f, 118.0324f, 0f, 0f, 8.72697f, 3f, 14.5f, 4.510351f);
	bLocal_702 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.0786f, 803.658f, 117.7309f, 0f, 0f, 8.710198f, 2.1f, 3.644517f, 1.698559f, "Valentine - m_volGeneralPrompt");
	iLocal_716 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.8168f, 803.7786f, 117.7309f, 0f, 0f, 10.4864f, 2.206109f, 1.908514f, 1.698559f, "Valentine - m_volGeneralCounterOff");
	iLocal_703 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGeneralCounterMute");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_703, -327.309f, 801.647f, 120.068f, 0f, 0f, 10.4864f, 2.206f, 5.596f, 6.414f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_703, -326.547f, 797.528f, 121.542f, 0f, 0f, 10.4864f, 2.206f, 3.398f, 3.708f);
	VOLUME::_0xB469CFD9E065EB99(bLocal_714, 10065);
}

void func_51()
{
	bLocal_699 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-281.686f, 781.058f, 119.929f, 0f, 0f, 0f, 2.382f, 1.711f, 2.813f, "Valentine - m_volGunsmith - PROMPT");
	bLocal_717 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-279.9107f, 780.475f, 119.8105f, 0f, 0f, 179.9f, 8.518225f, 7.656958f, 2.7f, "Valentine - m_volGunsmithShop");
	iLocal_718 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-280.124f, 786.2109f, 119.6072f, 0f, 0f, 0f, 7.936f, 3.558567f, 2.381096f, "Valentine - m_volGunsmithPORCH");
	iLocal_700 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Valentine - m_volGunsmithCounterOff Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_700, -279.9358f, 778.0059f, 119.7747f, 0f, 0f, 0f, 8.469496f, 2.69515f, 2.516554f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_700, -277.336f, 778.941f, 119.775f, 0f, 0f, 0f, 3.326f, 4.079f, 2.517f);
	VOLUME::_0xB469CFD9E065EB99(bLocal_717, 10066);
}

void func_52()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_781))
	{
		iLocal_781 = VOLUME::_CREATE_VOLUME_BOX(-325.2049f, 760.376f, 121.764f, 0f, 0f, 10.24361f, 5.77748f, 4.490859f, 2.289593f);
	}
	func_161(8, -324.5534f, 760.3503f, 120.6335f, 0f, iLocal_781);
}

bool func_53(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_162(Global_1835011[iParam0 /*74*/].f_1);
}

void func_54(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_32 = iParam1;
}

void func_55()
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

	bLocal_736 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.4941f, 809.1079f, 122.1578f, 0f, 0f, 10.47275f, 12.236f, 27.58529f, 9.179325f, "Valentine - m_volSaloonSmith");
	bLocal_741 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.2447f, 794.5436f, 118.2722f, 0f, 0f, 12.47275f, 15.63692f, 5.292129f, 4.462742f, "Valentine - volMuster");
	bLocal_742 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.3434f, 799.5107f, 120.3475f, 0f, 0f, 12.47275f, 15.63692f, 25.95621f, 11.77894f, "Valentine - volMusterTrigger");
	bLocal_743 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-278.4223f, 780.4918f, 119.1488f, 0f, 0f, 179.9f, 10.80282f, 14.18014f, 3.877091f, "Valentine - volGunSmithComp");
	bLocal_744 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.3039f, 798.7211f, 117.4371f, 0f, 0f, -79.44261f, 14.53232f, 9.127385f, 6.699043f, "Valentine - volGeneralStoreComp");
	bLocal_745 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-285.4544f, 803.0476f, 118.7046f, 0f, 0f, -168.9688f, 8.444459f, 12.54634f, 4.54561f, "Valentine - volDoctorComp");
	bLocal_739 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-242.293f, 770.493f, 119.697f, 0f, 0f, 109.243f, 11.12521f, 13.01104f, 7.987384f, "Valentine - volSaloonKeanesComp");
	bLocal_746 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-306.1782f, 769.7928f, 118.4643f, 0f, 0f, 10.06204f, 10.40922f, 21.46974f, 5.961294f, "Valentine - volBankComp");
	bLocal_747 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-177.4061f, 632.5018f, 116.4897f, 0f, 0f, -35.02556f, 14.93716f, 28.02779f, 4.25f, "Valentine - volPostOfficeComp");
	bLocal_748 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-177.4061f, 632.5018f, 116.4897f, 0f, 0f, -35.02556f, 14.93716f, 28.02779f, 4.25f, "Valentine - volTrainStationComp");
	bLocal_749 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.9436f, 772.7791f, 117.927f, 0f, 0f, -171.616f, 8.731f, 7.675f, 3.555f, "Valentine - volHotelComp");
	iVar0 = 0;
	func_163(&iVar0, 5);
	func_163(&iVar0, 0);
	func_163(&iVar0, 8);
	iVar1 = 0;
	func_163(&iVar1, 5);
	func_163(&iVar1, 0);
	func_163(&iVar1, 12);
	iVar2 = 0;
	func_163(&iVar2, 5);
	func_163(&iVar2, 0);
	func_163(&iVar2, 7);
	iVar3 = 0;
	func_163(&iVar3, 5);
	func_163(&iVar3, 0);
	func_163(&iVar3, 10);
	iVar4 = 0;
	func_163(&iVar4, 5);
	func_163(&iVar4, 0);
	func_163(&iVar4, 6);
	iVar5 = 0;
	func_163(&iVar5, 0);
	func_163(&iVar5, 18);
	iVar6 = 0;
	func_163(&iVar6, 0);
	func_163(&iVar6, 3);
	iVar7 = 0;
	func_163(&iVar7, 0);
	func_163(&iVar7, 3);
	iVar8 = 0;
	func_163(&iVar8, 0);
	func_163(&iVar8, 3);
	iVar9 = 0;
	func_163(&iVar9, 4);
	func_163(&iVar9, 5);
	func_163(&iVar9, 0);
	func_163(&iVar9, 15);
	iVar10 = 0;
	func_163(&iVar10, 0);
	func_163(&iVar10, 16);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_714, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_717, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_710, 2, iVar3);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_698, 2, iVar5);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_736, 2, iVar4);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_739, 2, iVar4);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_708, 4, iVar6);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_709, 4, iVar6);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_741, 2, iVar9);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_742, 2, iVar10);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_743, 2, iVar2);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_744, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_745, 2, iVar0);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_746, 2, iVar1);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_747, 2, iVar7);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_748, 2, iVar8);
	COMPANION::_0x3CAAD93FA5B9579A(bLocal_749, 2, iVar0);
}

void func_56()
{
	iLocal_737 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.3924f, 808.4083f, 119.378f, 0f, 0f, 99.71499f, 22.62186f, 12.374f, 8.647388f, "volSaloonSmithfieldsInterior");
	iLocal_738 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 9.286f, 8.345f, 5f, "volSaloonKeanesInterior");
}

void func_57(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_164(vParam5))
	{
		return;
	}
	Local_14 = iParam0;
	Local_14.f_6 = sParam1;
	Local_14.f_7 = sParam2;
	Local_14.f_8 = sParam3;
	Local_14.f_9 = sParam4;
	Local_14.f_11 = { vParam5 };
	Local_14.f_10 = sParam8;
	Local_14.f_15 = 1;
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_14.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_165(&iVar0, iParam0);
	func_166(&iVar0, iParam1);
	func_167(&iVar0, iParam2);
	func_168(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_14.f_5 - 1))
	{
		func_168(&(Local_14.f_1[iVar1]));
		if (Local_14.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_14.f_1[Local_14.f_5] = iVar0;
	Local_14.f_5++;
	func_169(&(Local_14.f_1), Local_14.f_5);
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_170(iParam0, iVar1);
			if (Global_40.f_9829[iVar0 /*4*/].f_1 != 0)
			{
				if (iVar2 != 0)
				{
					PERSCHAR::_0x8BC555034A5A5E8C(iVar2, Global_40.f_9829[iVar0 /*4*/].f_1);
				}
			}
			func_171(iVar0, (*iParam1)[iVar1]);
			func_172(iVar0);
			iVar1++;
		}
		iVar0++;
	}
	iVar3 = (iParam2 - iVar1);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_9829)
		{
			if (Global_40.f_9829[iVar0 /*4*/] == -1)
			{
				Global_40.f_9829[iVar0 /*4*/] = iParam0;
				iVar2 = func_170(iParam0, iVar1);
				func_171(iVar0, (*iParam1)[iVar1]);
				func_172(iVar0);
				iVar1++;
				iVar3 = (iVar3 - 1);
				if (iVar3 <= 0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_60(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_173(iParam0, 0, 0);
	if (func_174(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_175(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_176(iParam0, 1);
			}
			else
			{
				func_177(iParam0, 1);
			}
		}
		else
		{
			func_178(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_179())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!func_180(iParam0))
	{
		return;
	}
	if (func_164(func_181(iParam1)))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	if (!func_183(func_182(iParam1)))
	{
		return;
	}
	if (*iParam3 > 4)
	{
		return;
	}
	Global_1394141.f_7[iParam0 /*31*/] = 0;
	Global_1394141.f_7[iParam0 /*31*/].f_1 = { func_181(iParam1) };
	Global_1394141.f_7[iParam0 /*31*/].f_4 = iParam2;
	Global_1394141.f_7[iParam0 /*31*/].f_5 = func_182(iParam1);
	Global_1394141.f_7[iParam0 /*31*/].f_28 = iParam5;
	Global_1394141.f_7[iParam0 /*31*/].f_12 = iParam4;
	Global_1394141.f_7[iParam0 /*31*/].f_13 = func_184(iParam0);
	iVar0 = 0;
	while (iVar0 <= (*iParam3 - 1))
	{
		Global_1394141.f_7[iParam0 /*31*/].f_7[iVar0] = (*iParam3)[iVar0];
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	int iVar1[5];
	var uVar7;
	var uVar13;
	var uVar19;
	var uVar25;
	var uVar31;
	var uVar37;
	var uVar43;
	var uVar49;
	var uVar55;

	iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 3.713f, "m_volSaloon");
	iVar1[0] = 1;
	func_185(&Local_188, 3, &iVar1, 1, 1);
	Local_188[1 /*45*/].f_43 = 36505;
	Local_188[1 /*45*/].f_44 = 36984;
	uVar7 = 5;
	func_185(&Local_188, 8, &uVar7, 2, 0);
	Local_188[2 /*45*/].f_43 = 37173;
	Local_188[2 /*45*/].f_44 = 36984;
	func_189(&(Local_188[2 /*45*/]), 512);
	uVar13 = 5;
	func_185(&Local_188, 10, &uVar13, 3, 0);
	Local_188[3 /*45*/].f_43 = 37718;
	Local_188[3 /*45*/].f_44 = 36984;
	func_189(&(Local_188[3 /*45*/]), 512);
	uVar19 = 5;
	func_185(&Local_188, 9, &uVar19, 4, 0);
	Local_188[4 /*45*/].f_43 = 38130;
	Local_188[4 /*45*/].f_44 = 36984;
	func_189(&(Local_188[4 /*45*/]), 512);
	uVar25 = 5;
	func_185(&Local_188, 11, &uVar25, 5, 0);
	Local_188[5 /*45*/].f_43 = 39172;
	Local_188[5 /*45*/].f_44 = 36984;
	func_189(&(Local_188[5 /*45*/]), 512);
	uVar31 = 5;
	func_185(&Local_188, 2, &uVar31, 6, 0);
	Local_188[6 /*45*/].f_43 = 39673;
	Local_188[6 /*45*/].f_44 = 36984;
	func_189(&(Local_188[6 /*45*/]), 512);
	uVar37 = 5;
	func_185(&Local_188, 1, &uVar37, 7, 0);
	Local_188[7 /*45*/].f_43 = 40402;
	Local_188[7 /*45*/].f_44 = 36984;
	Local_188[7 /*45*/].f_38 = iVar0;
	func_189(&(Local_188[7 /*45*/]), 256);
	func_189(&(Local_188[7 /*45*/]), 512);
	uVar43 = 5;
	func_185(&Local_188, 16, &uVar43, 8, 0);
	Local_188[8 /*45*/].f_43 = 41242;
	Local_188[8 /*45*/].f_44 = 36984;
	func_189(&(Local_188[8 /*45*/]), 512);
	uVar49 = 5;
	func_185(&Local_188, 45, &uVar49, 9, 0);
	Local_188[9 /*45*/].f_43 = 41436;
	Local_188[9 /*45*/].f_44 = 36984;
	func_189(&(Local_188[9 /*45*/]), 512);
	uVar55 = 5;
	func_185(&Local_188, 5, &uVar55, 10, 0);
	Local_188[10 /*45*/].f_43 = 41541;
	Local_188[10 /*45*/].f_44 = 36984;
	func_189(&(Local_188[10 /*45*/]), 512);
}

void func_63(int iParam0)
{
	struct<16> /*128*/ sVar0;

	if (func_20() == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (func_198(45))
			{
				return;
			}
			else
			{
				StringCopy(&(Var0.f_10), "town_secrets_sd_trelawny", 32);
			}
			break;
		case 2:
			StringCopy(&(Var0.f_10), "town_secrets_er_daughter", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_10), "town_secrets_val_moira", 32);
			break;
		default:
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Var0.f_10))) > 0)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_10)))
	{
		Var0.f_14 = 1024;
		Var0.f_15 = 1;
		func_199(Var0, 0);
	}
}

void func_64(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, int iParam10)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = iParam2;
	uParam0->f_3 = { func_200(sParam3) };
	uParam0->f_12 = iParam4;
	uParam0->f_13 = { vParam5 };
	uParam0->f_16 = fParam8;
	uParam0->f_17 = iParam9;
	uParam0->f_18 = iParam10;
}

bool func_65(char* sParam0)
{
	HUD::TEXT_BLOCK_REQUEST(sParam0);
	if (!HUD::TEXT_BLOCK_IS_LOADED(sParam0))
	{
		HUD::TEXT_BLOCK_REQUEST(sParam0);
		return false;
	}
	return true;
}

void func_66()
{
	func_201(&uLocal_154);
}

int func_67(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_100(iParam0))
	{
		return 1;
	}
	if (func_160(iParam0, 16))
	{
		return 1;
	}
	if (func_202(iParam0) && !func_203(iParam0))
	{
	}
	if (func_204(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_183(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_183(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_202(iParam0) || func_203(iParam0)) || func_205(Global_1897950))
			{
				func_206(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_68(int iParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		Global_1934182[iParam0 /*18*/].f_7 = bParam1;
		if (!func_207(iParam0))
		{
			func_208(iParam0);
		}
		func_209(16);
		func_209(32);
	}
	Global_1934182.f_75 = 0;
}

void func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_210(0, 0, -1477943109);
			func_210(0, 1, 2089945615);
			func_210(0, 2, -2136681514);
			func_210(0, 3, 1733501235);
			break;
		case 3:
			func_210(3, 0, 531022111);
			break;
		case 2:
			func_210(2, 0, -408139633);
			func_210(2, 1, -1652509687);
			break;
		case 1:
			func_210(1, 0, -977211145);
			func_210(1, 1, -1206757990);
			break;
	}
}

bool func_70(int iParam0)
{
	return (Global_1935630 && iParam0) != 0;
}

bool func_71(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_72(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_73(int iParam0)
{
	if (!func_211(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_7854), iParam0);
}

int func_74(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848.f_3 < 0 || Global_1899848.f_3 >= 6)
			{
				Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			}
			if (Global_1899848.f_3 == 0 || Global_1899848.f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848.f_3 == 2 || Global_1899848.f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_75(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_212())
	{
		return -1;
	}
	if (!func_213(uParam0->f_1))
	{
		return -1;
	}
	if (func_202(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_214(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_215(&iVar2))
		{
			return -1;
		}
	}
	func_216(*uParam0, iVar2);
	bVar1 = func_217(uParam0->f_1, 131072);
	func_218(uParam0->f_1);
	iVar3 = func_219(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_220(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_220(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_220(uParam0->f_1, 131072);
	}
	if (func_221(iVar3) || (!func_222(iVar3) && func_223(0) != iVar3))
	{
		iVar0 = func_224(iVar3);
		if (iVar0 == -1)
		{
			func_225(iVar3);
		}
	}
	return iVar2;
}

void func_76(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_123(1497516462);
			func_121(2016141805);
			func_121(1010885152);
			func_121(-502324015);
			break;
		case 2016141805:
			func_121(1497516462);
			func_123(2016141805);
			func_121(1010885152);
			func_121(-502324015);
			break;
		case 1010885152:
			func_121(1497516462);
			func_121(2016141805);
			func_123(1010885152);
			func_121(-502324015);
			break;
		case -502324015:
			func_121(1497516462);
			func_121(2016141805);
			func_121(1010885152);
			func_123(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_121(-538889627);
			func_121(-538880323);
			func_121(-1056767524);
			func_123(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_226();
			func_123(iParam0);
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
			func_227();
			func_123(iParam0);
			break;
		case 2019386373:
			func_121(-664252410);
			func_121(2109952320);
			func_123(2019386373);
			break;
		case -664252410:
			func_121(2019386373);
			func_121(2109952320);
			func_123(-664252410);
			break;
		case 2109952320:
			func_121(2019386373);
			func_121(-664252410);
			func_123(2109952320);
			break;
		case -1674179981:
			func_121(-1835851517);
			func_121(-1838352012);
			func_123(-1674179981);
			break;
		case -1835851517:
			func_121(-1674179981);
			func_121(-1838352012);
			func_123(-1835851517);
			break;
		case -1838352012:
			func_121(-1674179981);
			func_121(-1835851517);
			func_123(-1838352012);
			break;
		case -1717960576:
			func_121(210001842);
			func_123(-1717960576);
			break;
		case 210001842:
			func_121(-1717960576);
			func_123(210001842);
			break;
		case -150493654:
			func_121(-1271608261);
			func_121(1846061697);
			func_121(-1145519186);
			func_123(-150493654);
			break;
		case -1271608261:
			func_121(-150493654);
			func_121(1846061697);
			func_121(-1145519186);
			func_123(-1271608261);
			break;
		case 1846061697:
			func_121(-150493654);
			func_121(-1271608261);
			func_121(-1145519186);
			func_123(1846061697);
			break;
		case -1145519186:
			func_121(-150493654);
			func_121(-1271608261);
			func_121(1846061697);
			func_123(-1145519186);
			break;
		case 1766284049:
			func_121(280705402);
			func_121(1926308480);
			func_123(1766284049);
			break;
		case 280705402:
			func_121(1766284049);
			func_121(1926308480);
			func_123(280705402);
			break;
		case 1926308480:
			func_121(1766284049);
			func_121(280705402);
			func_123(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_121(439465264);
				func_123(1609506757);
			}
			else
			{
				func_121(1609506757);
				func_121(439465264);
			}
			break;
		case 439465264:
			if (func_43(1609506757))
			{
				if (bParam1)
				{
					func_123(439465264);
				}
				else
				{
					func_121(439465264);
				}
			}
			break;
		case 1822001510:
			func_121(-1612662716);
			func_123(1822001510);
			break;
		case -1612662716:
			func_121(1822001510);
			func_123(-1612662716);
			break;
		case 1306158345:
			func_121(1952610440);
			func_121(-223469678);
			func_121(-404698347);
			func_121(1517904467);
			func_123(1306158345);
			break;
		case 1952610440:
			func_121(1306158345);
			func_121(-223469678);
			func_121(-404698347);
			func_121(1517904467);
			func_123(1952610440);
			break;
		case -223469678:
			func_121(1306158345);
			func_121(1952610440);
			func_121(-404698347);
			func_121(1517904467);
			func_123(-223469678);
			break;
		case -404698347:
			func_121(1306158345);
			func_121(1952610440);
			func_121(-223469678);
			func_121(1517904467);
			func_123(-404698347);
			break;
		case 1517904467:
			func_121(1306158345);
			func_121(1952610440);
			func_121(-223469678);
			func_121(-404698347);
			func_123(1517904467);
			break;
		case 1376646519:
			func_121(931649776);
			func_121(-434590080);
			func_121(1743048395);
			func_121(449774763);
			func_123(1376646519);
			break;
		case 931649776:
			func_121(1376646519);
			func_121(-434590080);
			func_121(1743048395);
			func_121(449774763);
			func_123(931649776);
			break;
		case -434590080:
			func_121(1376646519);
			func_121(931649776);
			func_121(1743048395);
			func_121(449774763);
			func_123(-434590080);
			break;
		case 1743048395:
			func_121(1376646519);
			func_121(931649776);
			func_121(-434590080);
			func_121(449774763);
			func_123(1743048395);
			break;
		case 449774763:
			func_121(1376646519);
			func_121(931649776);
			func_121(-434590080);
			func_121(1743048395);
			func_123(449774763);
			break;
		case -1414537028:
			func_121(38162571);
			func_121(1350391819);
			func_121(54073871);
			func_123(-1414537028);
			break;
		case 38162571:
			func_121(-1414537028);
			func_121(1350391819);
			func_121(54073871);
			func_123(38162571);
			break;
		case 1350391819:
			func_121(-1414537028);
			func_121(38162571);
			func_121(54073871);
			func_123(1350391819);
			break;
		case 54073871:
			func_121(-1414537028);
			func_121(38162571);
			func_121(1350391819);
			func_123(54073871);
			break;
		case 198200492:
			func_123(198200492);
			func_121(-1124061431);
			func_121(52706132);
			func_121(-259123672);
			break;
		case -1124061431:
			func_121(198200492);
			func_123(-1124061431);
			func_121(52706132);
			func_121(-259123672);
			break;
		case 52706132:
			func_121(198200492);
			func_121(-1124061431);
			func_123(52706132);
			func_121(-259123672);
			break;
		case -259123672:
			func_121(198200492);
			func_121(-1124061431);
			func_121(52706132);
			func_123(-259123672);
			break;
		case -919512195:
			func_123(-919512195);
			func_121(-1925798111);
			func_121(420709909);
			func_121(1703426636);
			break;
		case -1925798111:
			func_123(-1925798111);
			func_121(-919512195);
			func_121(420709909);
			func_121(1703426636);
			break;
		case 420709909:
			func_123(420709909);
			func_121(-919512195);
			func_121(-1925798111);
			func_121(1703426636);
			break;
		case 1703426636:
			func_123(1703426636);
			func_121(-919512195);
			func_121(-1925798111);
			func_121(420709909);
			break;
		case -1223121209:
			func_123(-1223121209);
			func_121(630808005);
			break;
		case 630808005:
			func_123(630808005);
			func_121(-1223121209);
			break;
		case 1453909576:
			func_123(1453909576);
			func_121(1643531967);
			break;
		case 1643531967:
			func_123(1643531967);
			func_121(1453909576);
			break;
		case 0:
			func_123(0);
			func_121(473295046);
			func_121(-1738165526);
			break;
		case 473295046:
			func_123(473295046);
			func_121(0);
			func_121(-1738165526);
			break;
		case -1738165526:
			func_123(-1738165526);
			func_121(0);
			func_121(473295046);
			break;
		case 932909855:
			func_123(932909855);
			func_121(2051822093);
			break;
		case 2051822093:
			func_123(2051822093);
			func_121(932909855);
			break;
		case 405586984:
			func_123(405586984);
			func_121(1509509592);
			func_121(-959357075);
			func_121(-1311865656);
			break;
		case 1509509592:
			func_123(1509509592);
			func_121(405586984);
			func_121(-959357075);
			func_121(-1311865656);
			break;
		case -959357075:
			func_123(-959357075);
			func_121(1509509592);
			func_121(405586984);
			func_121(-1311865656);
			break;
		case -1311865656:
			func_123(-1311865656);
			func_121(1509509592);
			func_121(-959357075);
			func_121(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_123(-524145696);
			}
			else
			{
				func_121(-524145696);
			}
			func_121(1626481264);
			func_121(282809459);
			break;
		case 282809459:
			func_123(282809459);
			func_121(1626481264);
			func_121(-524145696);
			break;
		case 1626481264:
			func_123(1626481264);
			func_121(-524145696);
			func_121(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_123(885203519);
			}
			else
			{
				func_121(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_123(-1080627546);
			}
			else
			{
				func_121(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_43(iParam0))
				{
					func_123(iParam0);
				}
			}
			else if (func_43(iParam0))
			{
				func_121(iParam0);
			}
			break;
	}
}

void func_77(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_164(vParam1))
	{
		return;
	}
	func_228(iParam0);
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { vParam1 };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = func_229(iParam5, iParam0);
}

void func_78(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_230(iParam3, iParam0);
	vVar1 = { func_231(iVar0) };
	vVar4 = { func_232(iVar0) };
	if (func_164(vVar1))
	{
		return;
	}
	if (!func_233(19, 16384))
	{
		if (!func_183(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_234(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	if (func_164(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = bParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = bParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (func_235(iVar0) || func_236(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = func_237(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1393529.f_220[iParam0] = 0f;
	Global_1393529.f_569[iParam0] = 0;
	StringCopy(&(Global_1393529.f_288[iParam0 /*8*/]), "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = func_238(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!func_239(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_240(iParam3);
			break;
		case 10:
			func_84(iParam3);
			break;
		case 18:
			func_241();
			break;
		case 9:
			func_242();
			break;
		case 22:
			func_85();
			break;
	}
	func_243(Global_1914319.f_3[iParam0 /*446*/].f_10);
	func_244(iParam0, 16);
	func_245(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_246(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_408++;
}

void func_80(int iParam0, vector3 vParam1, float fParam4)
{
	Global_1393529.f_114[iParam0 /*3*/] = { vParam1 };
	Global_1393529.f_220[iParam0] = fParam4;
}

void func_81(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_30 = iParam1;
}

void func_82(int iParam0, bool bParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_31 = bParam1;
}

void func_83(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_33 = iParam1;
}

void func_84(int iParam0)
{
	if (iParam0 == 76)
	{
		StringCopy(&(Global_1393529.f_288[10 /*8*/]), "1025_U_M_M_ValButcher_01", 64);
	}
	else if (iParam0 == 115)
	{
		StringCopy(&(Global_1393529.f_288[10 /*8*/]), "1086_U_M_M_TumButcher_01", 64);
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0842_S_M_M_UniButchers_01_WHITE_01", 64);
				break;
			case 1:
			case 4:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0843_S_M_M_UniButchers_01_WHITE_02", 64);
				break;
			case 2:
			case 5:
				StringCopy(&(Global_1393529.f_288[10 /*8*/]), "0844_S_M_M_UniButchers_01_WHITE_03", 64);
				break;
		}
	}
}

void func_85()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0829_S_M_Y_NewspaperBoy_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0830_S_M_Y_NewspaperBoy_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(Global_1393529.f_288[22 /*8*/]), "0831_S_M_Y_NewspaperBoy_01_WHITE_03", 64);
			break;
	}
}

bool func_86()
{
	if (func_247(0) > 0 || func_247(1) > 0)
	{
		return true;
	}
	return false;
}

void func_87(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_249(iParam0, 1);
	}
	else
	{
		func_250(iParam0, 1);
	}
	func_252(func_251(iParam0), bParam1);
}

void func_88(int iParam0, int iParam1)
{
	func_253(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

void func_89(int iParam0, int iParam1)
{
	func_253(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

void func_90(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	uParam0->f_3 = iParam1;
	uParam0->f_5 = bParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

bool func_91()
{
	if (!func_254())
	{
		return false;
	}
	if (func_255(68))
	{
		return false;
	}
	if (func_256(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (((!func_257(7) && !func_53(7)) && !func_258(7)) && !func_222(Global_1835011[7 /*74*/].f_1))
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0)
{
	return iParam0 != 0;
}

bool func_93(int iParam0)
{
	func_173(iParam0, 0, 0);
	if (func_174(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

void func_94(int iParam0, int iParam1)
{
	func_60(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

bool func_95(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return false;
	}
	if (!func_259(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam1))
	{
		return false;
	}
	iVar0 = func_96(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(bParam1, iVar0, bParam2);
	return true;
}

int func_96(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_97(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899.f_182 = fParam0;
	Global_1894899.f_183 = fParam1;
	Global_1894899.f_184 = fParam2;
	Global_1894899.f_185 = fParam3;
}

void func_98(int iParam0, bool bParam1)
{
	struct<16> /*128*/ sVar0;

	if (func_20() != -1)
	{
		return;
	}
	if (PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (Global_1415404)
	{
		if (!func_260("region_town_lockdown_generic"))
		{
			Global_1415404 = SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("REGION_TOWN_LOCKDOWN_GENERIC")) > 0;
		}
		return;
	}
	if (Global_1935630.f_22 || Global_1934266.f_61)
	{
		return;
	}
	if (func_261(iParam0))
	{
		if (!bParam1)
		{
		}
		Global_1415404 = 1;
		StringCopy(&(Var0.f_10), "region_town_lockdown_generic", 32);
		Var0.f_15 = 1;
		Var0 = iParam0;
		Var0.f_3 = bParam1;
		Var0.f_14 = 1024;
		func_199(Var0, 0);
	}
}

void func_99(var uParam0, bool bParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(bParam1))
	{
		return;
	}
	if (!func_262(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = bParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_100(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_101()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_263(iVar0))
		{
			Global_1898130[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_102(int iParam0, int iParam1)
{
	if (!func_263(iParam0))
	{
		return;
	}
	if (!func_264(iParam1))
	{
		return;
	}
	Global_1898130[iParam0] = iParam1;
}

void func_103()
{
	if (func_265(-367.15f, 788.29f, 116f, 1) < 300f)
	{
		func_266();
		bLocal_845 = true;
	}
	else if (bLocal_845)
	{
		func_267();
		bLocal_845 = false;
	}
}

void func_104()
{
	int iVar0;
	bool bVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = 14;
	bVar1 = func_268(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar1))
	{
		if (bLocal_826)
		{
			bLocal_826 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		if (((!bLocal_826 && !func_269(iVar0, 0)) && AUDIO::_0xBE28DB99556FF8D9(bVar1) != 0) && PED::IS_PED_USING_SCENARIO_HASH(bVar1, joaat("PROP_HUMAN_PIANO")))
		{
			AUDIO::_0x8E901B65206C2D3E(bVar1);
			AUDIO::_0xB93A769B8B726950(bVar1, 1949731019);
			AUDIO::_0xC4CFCE4C656EF480(bVar1);
			bLocal_826 = true;
		}
		else if (bLocal_826 && !PED::IS_PED_USING_SCENARIO_HASH(bVar1, joaat("PROP_HUMAN_PIANO")))
		{
			bLocal_826 = false;
		}
	}
}

void func_105()
{
	if (!Local_14.f_15)
	{
		return;
	}
	if (Local_14.f_26 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_14.f_17) && Local_14.f_14 > 1) && Local_14 != 0)
	{
		if (func_270() && func_271(Global_36, Local_14.f_11) < 100f)
		{
			if (Local_14.f_18 == 0)
			{
				Local_14.f_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_14, Local_14.f_11, 11);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(Local_14.f_18))
			{
				Local_14.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_14.f_18));
			}
		}
		Local_14.f_26 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_14.f_14)
	{
		case 0:
			func_272();
			Local_14.f_14 = 1;
			break;
		case 1:
			if (func_273())
			{
				Local_14.f_14 = 2;
			}
			break;
		case 2:
			if (func_274())
			{
				Local_14.f_14 = 3;
				Local_14.f_24 = 0;
				Local_14.f_21 = 0;
				Local_14.f_22 = func_276(func_275());
				if (Local_14.f_22 > 12)
				{
					Local_14.f_22 = (Local_14.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_14.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_14.f_17))
				{
					Local_14.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_7, Local_14.f_6, 1000f, false, true, false, 0f, 0);
					Local_14.f_14 = 4;
				}
			}
			if (Local_14.f_21 >= Local_14.f_22)
			{
				Local_14.f_14 = 2;
			}
			break;
		case 4:
			if (func_277(Local_14.f_17, Local_14.f_6, Local_14.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_8, Local_14.f_6, 1000f, true, true, false, 0f, 0);
				Local_14.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_14.f_14 = 5;
			}
			break;
		case 5:
			if (Local_14.f_24 < MISC::GET_GAME_TIMER())
			{
				Local_14.f_21++;
				Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			}
			if (Local_14.f_21 >= Local_14.f_22 && func_277(Local_14.f_17, Local_14.f_6, Local_14.f_8, 0.02f))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_14.f_17, Local_14.f_9, Local_14.f_6, 8f, false, false, false, 0f, 0);
				Local_14.f_14 = 2;
			}
			break;
	}
	if (Local_14.f_25 && Local_14.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_14.f_10, "CHURCH_BELL_SOUNDS") && Local_14.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_14.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(Local_14.f_10, Local_14.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_14.f_21++;
		}
	}
}

bool func_106()
{
	return Global_1898164.f_163;
}

void func_107(var uParam0)
{
	if (func_20() == -1)
	{
		if (!func_278())
		{
			func_279(&uLocal_154);
			if (iLocal_187 >= 11)
			{
				func_280(&uLocal_151);
				iLocal_187 = 0;
				return;
			}
			if ((uParam0[iLocal_187 /*45*/])->f_29 == 1)
			{
				if (func_281(uParam0[iLocal_187 /*45*/], 1, 1))
				{
					func_282(uParam0[iLocal_187 /*45*/]);
				}
			}
			iLocal_187++;
		}
	}
}

bool func_108(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_284(iParam1))
	{
		return false;
	}
	return func_285(Global_1914319.f_3[iParam0 /*446*/].f_10, 1024);
}

bool func_109(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15768[iParam0] && iParam1) != 0;
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_286(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_253(&(Global_23118.f_1651[iVar1]), iParam2);
}

bool func_111(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0)
{
	iLocal_829 = iParam0;
}

void func_113()
{
	if (func_287(func_10(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
	{
		bLocal_825 = func_268(8);
		if (!func_288(bLocal_825, 0))
		{
			return;
		}
		if (PED::GET_PED_CONFIG_FLAG(bLocal_825, 130, false))
		{
			PED::SET_PED_CONFIG_FLAG(bLocal_825, 130, false);
			PED::SET_PED_CONFIG_FLAG(bLocal_825, 315, false);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bLocal_825, 3, 1, false);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bLocal_825, 4, 1, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), bLocal_825, 7, 1, true);
		}
	}
}

void func_114()
{
	if (!func_289(76))
	{
		return;
	}
	func_290(76);
	func_291(76);
	func_292();
}

void func_115()
{
	vector3 vVar0;

	if (((!func_293(Global_1392194[1 /*10*/].f_1, 1) && !func_294(16)) && !func_294(2)) && !func_294(1))
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1898092.f_26.f_5))
		{
			if (func_295(Global_35, iLocal_782, 1, 0))
			{
				Global_1898092.f_26.f_1 = 76;
				Global_1898092.f_26.f_2 = 1;
				vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_782) };
				vVar0 = { vVar0 + Vector(15f, 15f, 15f) };
				Global_1898092.f_26.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(VOLUME::_GET_VOLUME_COORDS(iLocal_782), VOLUME::_GET_VOLUME_ROTATION(iLocal_782), vVar0, "Event Area - volShutdown");
				func_296(16);
			}
		}
	}
}

void func_116(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	if (Global_1396116.f_139)
	{
		Global_1396116.f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_297(iParam0, iVar1);
			iVar3 = func_268(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!func_298(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146, true);
					func_299(iVar0, 2);
					func_300(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				func_301(iVar0, 2);
				if (BUILTIN::VDIST(func_302(iVar2), Global_36) < 45f)
				{
					if (!Global_1396116.f_140)
					{
						if (func_303(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116.f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_117()
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_287(func_10(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
	{
		if (func_304(69))
		{
			func_87(69, 0);
		}
		if (func_305(32))
		{
			func_306(32, 1);
		}
	}
	else
	{
		if (!func_304(69))
		{
			func_87(69, 1);
		}
		if ((!func_305(32) && !func_307(5)) && !func_308(5))
		{
			func_74(32, &vVar0, 1);
			func_75(&vVar0, 1, 1);
		}
	}
}

bool func_118(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(iParam0, Global_36);
}

bool func_119(int iParam0)
{
	if (func_285(iParam0, 32768) || func_285(iParam0, 16384))
	{
		return true;
	}
	return false;
}

int func_120(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1914319.f_19001[iParam0 /*3*/].f_1;
}

void func_121(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_158(iParam0, 1);
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

void func_122()
{
	if (iLocal_846 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&iLocal_846);
		iLocal_846 = -1;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_158(iParam0, 1);
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

void func_124()
{
	func_309(32);
}

bool func_125(int iParam0, bool bParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
		{
			*bParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		*bParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

void func_126(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_310(bParam0)))
	{
		return;
	}
	if (func_311(bParam0, 0))
	{
		return;
	}
	if (!PED::IS_PED_USING_SCENARIO_HASH(bParam0, joaat("WORLD_HUMAN_SELL_PAPER")))
	{
		return;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(bParam0, 0))
	{
		return;
	}
	if (bLocal_10)
	{
		return;
	}
	switch (iLocal_9)
	{
		case 0:
			iLocal_13 = func_312(func_212());
			iLocal_12 = func_313(iLocal_13);
			iLocal_9 = 1;
			break;
		case 1:
			if (STREAMING::IS_MODEL_VALID(iLocal_12))
			{
				STREAMING::REQUEST_MODEL(iLocal_12, false);
				iLocal_9 = 2;
			}
			break;
		case 2:
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_12))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(func_310(bParam0)))
			{
				return;
			}
			iLocal_11 = PED::_0x4D0D2E3D8BC000EB(bParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
			{
				iLocal_11 = PED::_0x4D0D2E3D8BC000EB(bParam0, "p_cs_newspaper_02x_noanim_PH_L_HAND", 1);
				OBJECT::DELETE_OBJECT(&iLocal_11);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					iLocal_11 = OBJECT::CREATE_OBJECT(iLocal_12, ENTITY::GET_ENTITY_COORDS(bParam0, false, false) + Vector(3f, 0f, 0f), true, true, false, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_11))
				{
					if (PED::_0x3BBDD6143FF16F98(bParam0, iLocal_11, "p_cs_newspaper_02x_noanim_PH_L_HAND", "WORLD_HUMAN_SELL_PAPER", "WORLD_HUMAN_SELL_PAPER_MALE_A", 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_12);
						iLocal_9 = 3;
					}
				}
			}
			else
			{
				return;
			}
			break;
		case 3:
			bLocal_10 = true;
			break;
	}
}

bool func_127()
{
	if (func_314())
	{
		return false;
	}
	if (!func_315(&uLocal_830) || func_316(&uLocal_830, 3f))
	{
		func_317(&uLocal_830);
		return true;
	}
	return false;
}

void func_128()
{
	int iVar0;

	if (func_127())
	{
		if (func_318())
		{
			iVar0 = Global_1914319.f_16855;
			if (func_283(iVar0))
			{
				func_319(iVar0);
			}
		}
	}
}

void func_129()
{
	int iVar0;

	iVar0 = func_268(52);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (func_320(iVar0))
	{
		return;
	}
	if (func_321(iVar0))
	{
		return;
	}
	func_322(iVar0, 76);
}

void func_130(var uParam0)
{
	if (!uParam0->f_18 && func_23(269, 0))
	{
		if (*uParam0 < 7)
		{
			*uParam0 = 8;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_164(uParam0->f_13))
			{
				*uParam0 = 9;
			}
			if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(PERSCHAR::_0x112DDF56300BC6E5(func_323(uParam0->f_1))))
			{
				*uParam0 = 9;
			}
			*uParam0 = 1;
			break;
		case 1:
			if (uParam0->f_19 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				PED::_UNRESERVE_AMBIENT_PEDS(2);
				uParam0->f_19 = 0;
			}
			if (!func_324(uParam0))
			{
				return;
			}
			if (uParam0->f_12 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			else
			{
				*uParam0 = 9;
				return;
			}
			if (uParam0->f_17 != 0)
			{
				PROPSET::_REQUEST_PROP_SET(uParam0->f_17);
			}
			*uParam0 = 2;
			break;
		case 2:
			if (func_325(uParam0))
			{
				*uParam0 = 3;
			}
			break;
		case 3:
			if (func_324(uParam0))
			{
				if (func_326(uParam0))
				{
					*uParam0 = 9;
					return;
				}
				if (!uParam0->f_19)
				{
					PED::_RESERVE_AMBIENT_PEDS_TOTAL(2);
					uParam0->f_19 = 1;
				}
				*uParam0 = 4;
			}
			break;
		case 4:
			if (!func_325(uParam0))
			{
				*uParam0 = 1;
				return;
			}
			if (func_327(uParam0))
			{
				*uParam0 = 5;
			}
			break;
		case 5:
			if (func_328(uParam0))
			{
				func_329(uParam0);
				*uParam0 = 1;
			}
			if (func_330(uParam0))
			{
				*uParam0 = 7;
			}
			break;
		case 7:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
			{
				PERSCHAR::_0x187D65F3AEC5D679(func_323(uParam0->f_1), &(uParam0->f_3));
			}
			if (ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(PERSCHAR::_0x112DDF56300BC6E5(func_323(uParam0->f_1)))))
			{
				*uParam0 = 6;
			}
			else
			{
				*uParam0 = 9;
			}
			break;
		case 6:
			if (PERSCHAR::_0xF8DE7154F7D1458F(PERSCHAR::_0x112DDF56300BC6E5(func_323(uParam0->f_1))) == uParam0->f_11)
			{
				*uParam0 = 9;
			}
			else
			{
				PERSCHAR::_0x669C25840C6F7AE2(PERSCHAR::_0x112DDF56300BC6E5(func_323(uParam0->f_1)), uParam0->f_11);
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
			{
				*uParam0 = 9;
				return;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_329(uParam0);
				*uParam0 = 9;
				return;
			}
			if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false), 3f))
			{
				func_329(uParam0);
				*uParam0 = 9;
			}
			break;
		case 9:
			if (func_331(uParam0))
			{
				*uParam0 = 10;
			}
			break;
		case 10:
			return;
	}
}

void func_131()
{
	if (!bLocal_828)
	{
		return;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("LAW_ARREST")) > 0 || !func_91())
	{
		if (func_332(1988748538))
		{
			func_60(1988748538, 0, 0, 0, 1, 0, 0, 0);
			if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1864042599))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1864042599, true);
			}
		}
	}
	else if (func_333(1988748538))
	{
		if (func_334(0, 0, 1))
		{
			return;
		}
		if (func_335(bLocal_720, Global_36))
		{
			return;
		}
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1864042599))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1864042599, false);
		}
		func_60(1988748538, 1, 0, 0, 0, 0, 0, 0);
	}
}

void func_132()
{
	if (BUILTIN::VDIST2(Global_36, vLocal_836) > 100f)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_834))
	{
		func_336(&iLocal_835, joaat("P_CS_BOOKHARDCV02X"), vLocal_836);
		if (ENTITY::IS_MAP_ENTITY_PINNED(iLocal_835))
		{
			iLocal_834 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_835));
		}
	}
	else
	{
		func_337(&uLocal_833, &iLocal_834, vLocal_836, iLocal_839, joaat("DOCUMENT_LEDGER_VALENTINE_JAIL"));
		TASK::_0xA6A76D666A281F2D(iLocal_834, joaat("DOCUMENT_LEDGER_VALENTINE_JAIL"));
	}
}

void func_133(var uParam0)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;

	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_6))
	{
		return;
	}
	if (uParam0->f_17 > 0)
	{
		if (func_106())
		{
			uParam0->f_17 = 4;
		}
		if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_5, Global_36) && func_338(uParam0, 8, 0, 1))
		{
			uParam0->f_17 = 4;
		}
		if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_7, Global_36))
		{
			if (func_338(uParam0, 65536, 0, 1))
			{
				func_339(uParam0, 1);
				uParam0->f_17 = 3;
			}
		}
		if (func_340(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && func_338(uParam0, 4096, 0, 1))
		{
			func_339(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_341(Global_35, uParam0->f_5) && func_338(uParam0, 2048, 0, 1))
		{
			func_339(uParam0, 1);
			uParam0->f_17 = 3;
		}
		if (func_342(&uVar0) && func_338(uParam0, 256, 0, 1))
		{
			func_339(uParam0, 1);
			uParam0->f_17 = 3;
		}
	}
	switch (uParam0->f_17)
	{
		case 0:
			if (func_256(PLAYER::PLAYER_ID(), 1, 0, 1) || func_106())
			{
				return;
			}
			if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_5, Global_36))
			{
				if (!func_183(uParam0->f_3))
				{
					return;
				}
				if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(uParam0->f_3)))
				{
					return;
				}
				uParam0->f_4 = func_268(uParam0->f_3);
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
				{
					return;
				}
				func_343(uParam0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, true);
				PED::_0x85F500F4E24CA43E(uParam0->f_4, 0f);
				PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, 0f);
				uParam0->f_17 = 1;
			}
			break;
		case 1:
			bVar2 = false;
			if ((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_6, Global_36) && !func_344(uParam0)) && func_345(uParam0, -1))
			{
				if (func_346(0) && func_338(uParam0, 128, 0, 1))
				{
					bVar2 = true;
				}
				else if (func_342(&uVar1) && func_338(uParam0, 256, 0, 1))
				{
					uParam0->f_17 = 3;
				}
				else if (func_338(uParam0, 64, 0, 1))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				uParam0->f_17 = 2;
			}
			break;
		case 2:
			if (!VOLUME::IS_POINT_IN_VOLUME(uParam0->f_6, Global_36))
			{
				if (func_345(uParam0, 30))
				{
					if (func_338(uParam0, 16, 0, 1))
					{
					}
				}
			}
			break;
		case 3:
			if (func_256(PLAYER::PLAYER_ID(), 1, 0, 1) || func_341(Global_35, uParam0->f_5))
			{
				if (!func_347(Global_35, 474215631))
				{
					TASK::TASK_COWER(uParam0->f_4, -1, Global_35, 0);
				}
				if (func_338(uParam0, 1048576, 0, 1))
				{
				}
				uParam0->f_17 = 4;
			}
			else if ((VOLUME::IS_POINT_IN_VOLUME(uParam0->f_7, Global_36) == 0 && func_340(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED")) && !func_342(&uVar1))
			{
				bVar3 = false;
				if (func_338(uParam0, 8192, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_338(uParam0, 16384, 0, 0))
				{
					bVar3 = true;
				}
				else if (func_338(uParam0, 32768, 0, 0))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					func_348(uParam0, 65536);
					func_348(uParam0, 256);
					func_348(uParam0, 4096);
					func_339(uParam0, 0);
					uParam0->f_17 = 0;
				}
			}
			break;
		case 4:
			PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 130, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_4, false);
			PED::_0x85F500F4E24CA43E(uParam0->f_4, -1f);
			PED::_0x9B9B9FA0EA283E3D(uParam0->f_4, -1f);
			func_349(uParam0);
			uParam0->f_17 = 0;
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_134(bool bParam0)
{
	if (func_335(bParam0, Global_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		}
	}
}

bool func_135(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_136()
{
	return func_111(Global_1935630, 4096);
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_138(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_350(iParam0));
}

bool func_139(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 && iParam1) != 0;
}

int func_140()
{
	return Global_1897952.f_41;
}

void func_141(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_351())
	{
		return;
	}
	sVar1 = func_352(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_353(iParam4))
	{
		if (func_100(iParam0))
		{
			iParam4 = func_354(func_6(iParam0));
		}
		else
		{
			iParam4 = func_354(iParam1);
		}
	}
	if (func_353(iParam4))
	{
		iVar3 = func_355(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_357(func_356(iParam2));
	}
	else if ((func_358(iParam1, 2) || func_359(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_100(iParam0) && func_160(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_276(func_275());
		iVar5 = func_360(func_275());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_361(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_362(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_362(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_361(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_362(&cVar6, joaat("COLOR_PURE_WHITE")), func_362(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_363(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_142(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_143(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_20() == 0)
	{
		return;
	}
	if (func_364(128))
	{
		return;
	}
	if (!func_365(iParam0))
	{
		return;
	}
	if (func_160(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_366(&Global_1935630, 8192);
	func_368(func_367(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_368(func_367(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_368(func_367(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_368(func_367(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_368(func_367(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_368(func_367(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_368(func_367(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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
		func_19(iParam0, 64);
	}
}

bool func_144()
{
	return (Global_1894899 & 1 != 0 && func_212() != -1);
}

void func_145()
{
	if (!func_369(Global_1327479))
	{
		return;
	}
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
	{
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		{
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));
		}
	}
	func_370(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
}

void func_146(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_371() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_369(iVar1) && !func_372(iVar1, iParam2)) && (!bParam3 || !func_373(iVar1))) && (!bParam4 || !func_374(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_375(iVar0);
			}
		}
		iVar0++;
	}
}

void func_147(bool bParam0)
{
	bool bVar0;

	bVar0 = Global_1894899 & 1 != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_148()
{
	return Global_40.f_4283.f_1;
}

void func_149(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 = (Global_1894899 - Global_1894899 & 2);
	}
}

bool func_150(int iParam0)
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

void func_151()
{
}

void func_152(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] = (Global_23118[iParam0 /*11*/] - (Global_23118[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] = (Global_1058888.f_40545[iParam0 /*11*/] - (Global_1058888.f_40545[iParam0 /*11*/] && iParam1));
}

void func_153(int iParam0)
{
	func_97(0.775f, 0.2f, 0.025f, 0f);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_827);
	MISC::_CLEAR_TACTICAL_ANALYSIS_POINTS();
	func_376(iLocal_781);
	func_377();
	func_378(&Local_188);
	func_379("VALRGAU");
	func_379("SCVTAUD");
	func_379("SCVTFAU");
	func_379("SVSFAUD");
	func_379("RELDAUD");
	func_379("REDDVAL");
	func_379("REDJAUD");
	func_379("VALRDAU");
	func_379("MUD2AUD");
	func_379("SRVDAUD");
	func_380();
	func_121(-75024673);
	func_121(1250636944);
	func_331(&uLocal_784);
	func_331(&uLocal_804);
	func_381(&iLocal_835);
	func_382(3);
	func_267();
	func_122();
}

void func_154(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_228(iVar0);
		}
		iVar0++;
	}
}

void func_155(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319.f_3[iVar0 /*446*/].f_9 == iParam0)
		{
			func_234(iVar0);
		}
		iVar0++;
	}
}

void func_156(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_383(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_384(Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1]);
		Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_157(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return true;
	}
	if (!func_100(iParam0))
	{
		return true;
	}
	if (func_204(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_385(Global_1897950.f_1, 16))
			{
				func_386(Global_1897950.f_1, 0);
			}
			Global_1897950.f_1++;
			iVar2++;
			if (Global_1897950.f_1 > iVar1)
			{
				Global_1897950.f_1 = -1;
				return true;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

int func_158(int iParam0, int iParam1)
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

float func_159(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

bool func_160(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] && iParam1) != 0;
}

void func_161(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (!func_387(iParam0))
	{
		return;
	}
	if (func_164(vParam1))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_15 = { vParam1 };
	Global_1395601.f_5[iParam0 /*28*/].f_18 = fParam4;
	Global_1395601.f_5[iParam0 /*28*/].f_23 = iParam5;
	if (VOLUME::DOES_VOLUME_EXIST(iParam5))
	{
	}
	if (!func_334(242, 1, 1))
	{
		func_388(iParam0, 1);
	}
	func_389(iParam0);
	func_390(iParam0, 1);
	Global_40.f_9384[iParam0 /*2*/].f_1 = func_275();
}

bool func_162(int iParam0)
{
	int iVar0;

	iVar0 = func_391(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_163(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

bool func_164(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_165(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_166(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_167(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_168(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_275();
	func_393(iParam0, func_392(iVar0));
	func_395(iParam0, func_394(iVar0));
	func_397(iParam0, func_396(iVar0));
}

void func_169(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if ((*uParam0)[iVar2] > (*uParam0)[iVar2 + 1])
				{
					uVar3 = (*uParam0)[iVar2];
					(*uParam0)[iVar2] = (*uParam0)[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

int func_170(int iParam0, int iParam1)
{
	return func_323(func_297(iParam0, iParam1));
}

void func_171(int iParam0, var uParam1)
{
	Global_1396116.f_98[iParam0 /*2*/] = uParam1;
}

void func_172(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	Global_1396116.f_98[iParam0 /*2*/].f_1 = func_275();
}

int func_173(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

bool func_174(int iParam0)
{
	if (func_92(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_175(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_174(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_176(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_177(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_178(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_179()
{
	return true;
}

bool func_180(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 41);
}

Vector3 func_181(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -789.869f, -1362.602f, 43.687f;
		case 1:
		case 2:
			return 2686.483f, -1362.37f, 48.2681f;
		case 0:
			return 2541.448f, -1281.873f, 49.26815f;
		case 3:
			return -354.8969f, 705.4585f, 116.9782f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 525;
		case 1:
		case 2:
			return 284;
		case 0:
			return 283;
		case 3:
			return 33;
		default:
			break;
	}
	return -1;
}

bool func_183(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_184(int iParam0)
{
	if (!func_180(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
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
			return 0;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
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
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 1;
	}
	return -1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	(uParam0[iParam3 /*45*/])->f_25 = 64f;
	(uParam0[iParam3 /*45*/])->f_26 = 16f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	func_398(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*iParam2)[iVar0];
			iVar0++;
		}
		func_189(uParam0[iParam3 /*45*/], 128);
	}
	if (!func_315(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		func_399(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	func_189(uParam0[iParam3 /*45*/], 32768);
	func_189(uParam0[iParam3 /*45*/], 1024);
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

Vector3 func_186(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_400(uParam0, 4))
	{
		return func_401("");
	}
	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 1;
	if (func_402(uParam0, 76, iVar1, 64, 9))
	{
		return func_401("VALRG_GUN_SAL1");
	}
	if (func_402(uParam0, 76, iVar1, 32, 10))
	{
		return func_401("VALRG_GUN_REV1");
	}
	if (func_402(uParam0, 76, iVar1, 16, 25))
	{
		return func_401("VALRG_GUN_MUD3B");
	}
	if (func_402(uParam0, 76, iVar1, 8, 6))
	{
		return func_401("VALRG_GUN_MUD3A");
	}
	if (func_402(uParam0, 76, iVar1, 4, 7))
	{
		return func_401("VALRG_GUN_BOU1");
	}
	if (func_403(uParam0, 76, iVar1, 2, 94))
	{
		return func_401("VALRG_GUN_HMR0");
	}
	if (func_404(73, 1, 1) && func_405(76, iVar1, 128, 1))
	{
		return func_401("VALRG_GUN_SRDOC");
	}
	if (func_404(74, 1, 0) && func_405(76, iVar1, 256, 1))
	{
		return func_401("VALRG_GUN_SRGEN");
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	switch (uParam0->f_21)
	{
		case 0:
			if (func_406(3))
			{
				if (uParam0->f_3[uParam0->f_21 /*3*/].f_1 < 4)
				{
					uParam0->f_3[uParam0->f_21 /*3*/].f_1++;
					switch ((uParam0->f_3[uParam0->f_21 /*3*/].f_1 - 1))
					{
						case 0:
							return func_401("VALRG_FBARSHR_A");
						case 1:
							return func_401("VALRG_FBARSHR_B");
						case 2:
							return func_401("VALRG_FBARSHR_C");
						default:
							break;
					}
				}
			}
			break;
	}
	return func_401("");
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 11:
			return "VAL_Doctor";
		case 1:
			return "VAL_Bartender";
		case 5:
			return "VAL_Train_Clerk";
		case 16:
			return "VAL_Hotel_Owner";
		case 10:
			return "VAL_General_Store";
		case 7:
			return "VAL_AUCTIONEER";
		case 9:
			return "VAL_Gunsmith";
		case 3:
			return "VAL_Sheriff";
		case 2:
			return "VAL_Bartender_Slums";
		case 8:
			return "VAL_Barber";
		case 6:
			return "VAL_Butcher";
		case 19:
			return "VAL_Livery";
		case 18:
			return "VAL_Blacksmith";
		default:
			break;
	}
	return "";
}

Vector3 func_188(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (func_400(uParam0, 4))
	{
		return func_401("");
	}
	bVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0) || ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return func_401("");
	}
	iVar1 = 2;
	if (func_402(uParam0, 76, iVar1, 16, 6))
	{
		return func_401("VALRG_BRB_MUD3");
	}
	if (func_403(uParam0, 76, iVar1, 4, 94))
	{
		return func_401("VALRG_BRB_HMR0");
	}
	if (func_403(uParam0, 76, iVar1, 2, 62))
	{
		return func_401("VALRG_BRB_DWN");
	}
	if (func_404(73, 1, 1) && func_405(76, iVar1, 32, 1))
	{
		return func_401("VALRG_BRB_SRDOC");
	}
	if (func_404(74, 1, 0) && func_405(76, iVar1, 64, 1))
	{
		return func_401("VALRG_BRB_SRGEN");
	}
	if (func_404(75, 1, 0) && func_405(76, iVar1, 128, 1))
	{
		return func_401("VALRG_BRB_SRGUN");
	}
	if (func_407())
	{
		if (!func_400(uParam0, 16))
		{
			if (func_408(uParam0))
			{
				if (func_405(76, iVar1, 256, 0))
				{
					if (func_409() == 1 && func_258(9))
					{
						func_189(uParam0, 16);
						uParam0->f_21 = -1;
						func_110(76, iVar1, 256);
						return func_401("BARB_SAL1");
					}
					else
					{
						if (func_405(76, iVar1, 512, 0))
						{
							if ((func_409() == 1 && func_258(5)) && !func_410(2))
							{
								func_189(uParam0, 16);
								uParam0->f_21 = -1;
								func_110(76, iVar1, 512);
								return func_401("BARB_MUD2");
							}
						}
						if (func_402(uParam0, 76, iVar1, 8, 5))
						{
							return func_401("VALRG_BRB_MUD2");
						}
					}
				}
			}
		}
	}
	if (func_411(bVar0, joaat("WORLD_HUMAN_STRAW_BROOM_WORKING")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar0, 0))
	{
		uParam0->f_21 = -1;
		return func_401("BARB_BAR2K");
	}
	return func_401("");
}

void func_189(var uParam0, int iParam1)
{
	func_253(&(uParam0->f_19), iParam1);
}

Vector3 func_190(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 3;
	if (func_407())
	{
		if (func_400(uParam0, 4))
		{
			return func_401("");
		}
		if (!func_410(4))
		{
			if (func_412(uParam0, iVar1))
			{
				return func_401("VALRG_SHOSICK");
			}
			if (func_402(uParam0, 76, iVar1, 32, 10))
			{
				return func_401("VALRG_GEN_REV1");
			}
			if (func_402(uParam0, 76, iVar1, 16, 14))
			{
				return func_401("VALRG_GEN_MUD4");
			}
			if (func_402(uParam0, 76, iVar1, 8, 5))
			{
				return func_401("VALRG_GEN_MUD2");
			}
			if (func_403(uParam0, 76, iVar1, 4, 94))
			{
				return func_401("VALRG_GEN_HMR0");
			}
			if (func_403(uParam0, 76, iVar1, 2, 62))
			{
				return func_401("VALRG_GEN_DWN");
			}
			if (func_404(75, 1, 0) && func_405(76, iVar1, 64, 1))
			{
				return func_401("VALRG_GEN_SRGUN");
			}
			if (func_409() == 1)
			{
				if (func_258(9) && func_405(76, iVar1, 128, 1))
				{
					uParam0->f_21 = -1;
					return func_401("VALRG_SHO_SAL1");
				}
				if ((func_258(5) && func_258(6)) && func_405(76, iVar1, 256, 1))
				{
					uParam0->f_21 = -1;
					return func_401("VALRG_SHO_MUD23");
				}
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	return func_401("");
}

Vector3 func_191(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 4;
	if (func_412(uParam0, iVar1))
	{
		return func_401("VALRG_GUNSICK");
	}
	if (func_407())
	{
		if (func_400(uParam0, 4))
		{
			return func_401("");
		}
		if (func_405(76, iVar1, 2, 0))
		{
			if ((func_258(14) && !func_258(26)) && !func_410(4))
			{
				uParam0->f_21 = -1;
				func_110(76, iVar1, 2);
				return func_401("VALRG_GUNMUD4_A");
			}
		}
		if (func_405(76, iVar1, 4, 0))
		{
			if ((func_258(5) && func_409() == 1) && !func_410(2))
			{
				uParam0->f_21 = -1;
				func_110(76, iVar1, 4);
				return func_401("VALRG_GUNMUD2");
			}
		}
		if (func_403(uParam0, 76, iVar1, 256, 94))
		{
			return func_401("VALRG_GUN_HMR0");
		}
		if (func_402(uParam0, 76, iVar1, 128, 9))
		{
			return func_401("VALRG_GUN_SAL1");
		}
		if (func_402(uParam0, 76, iVar1, 64, 10))
		{
			return func_401("VALRG_GUN_REV1");
		}
		if (func_402(uParam0, 76, iVar1, 32, 25))
		{
			return func_401("VALRG_GUN_MUD3B");
		}
		if (func_402(uParam0, 76, iVar1, 16, 6))
		{
			return func_401("VALRG_GUN_MUD3A");
		}
		if (func_402(uParam0, 76, iVar1, 8, 7))
		{
			return func_401("VALRG_GUN_BOU1");
		}
		if (func_404(74, 1, 0) && func_405(76, iVar1, 512, 1))
		{
			return func_401("VALRG_GUN_SRGEN");
		}
		if (func_404(73, 1, 0) && func_405(76, iVar1, 2048, 1))
		{
			return func_401("VALRG_GUN_SRDOC");
		}
	}
	if (func_411(Global_35, joaat("TS_VAL_INSPECT_PLACED_ARTIFACT")))
	{
		if (func_407())
		{
			if (func_405(76, iVar1, 4096, 1))
			{
				uParam0->f_21 = -1;
				return func_401("TSVAL_GUNS_1A");
			}
			else if (func_405(76, iVar1, 8192, 1))
			{
				uParam0->f_21 = -1;
				return func_401("TSVAL_GUNS_2A");
			}
			else if (func_405(76, iVar1, 16384, 1))
			{
				uParam0->f_21 = -1;
				return func_401("TSVAL_GUNS_2A");
			}
		}
		else if (func_405(76, iVar1, 32768, 1))
		{
			uParam0->f_21 = -1;
			return func_401("TSVAL_GUNS_1J");
		}
		else if (func_405(76, iVar1, 65536, 1))
		{
			uParam0->f_21 = -1;
			return func_401("TSVAL_GUNS_2J");
		}
		else if (func_405(76, iVar1, 131072, 1))
		{
			uParam0->f_21 = -1;
			return func_401("TSVAL_GUNS_2J");
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	switch (uParam0->f_21)
	{
		case 0:
			if (func_295(iVar0, uParam0->f_39, 1, 0))
			{
				if (uParam0->f_3[uParam0->f_21 /*3*/].f_1 < 4)
				{
					uParam0->f_3[uParam0->f_21 /*3*/].f_1++;
					switch ((uParam0->f_3[uParam0->f_21 /*3*/].f_1 - 1))
					{
						case 0:
							return func_401("VALRG_GUNSHR_A");
						case 1:
							return func_401("VALRG_GUNSHR_B");
						case 2:
							return func_401("VALRG_GUNSHR_C");
						default:
							break;
					}
				}
			}
			break;
		case 1:
			if (func_295(iVar0, uParam0->f_38, 1, 0) && (func_406(4) || func_406(8)))
			{
				if (uParam0->f_3[uParam0->f_21 /*3*/].f_1 < 4)
				{
					uParam0->f_3[uParam0->f_21 /*3*/].f_1++;
					switch ((uParam0->f_3[uParam0->f_21 /*3*/].f_1 - 1))
					{
						case 0:
							return func_401("VALRG_GUNBAR_A");
						case 1:
							return func_401("VALRG_GUNBAR_B");
						case 2:
							return func_401("VALRG_GUNBAR_C");
						default:
							break;
					}
				}
			}
			break;
	}
	return func_401("");
}

Vector3 func_192(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_400(uParam0, 4))
	{
		return func_401("");
	}
	if (func_410(4))
	{
		return func_401("");
	}
	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 11;
	if (func_412(uParam0, iVar1))
	{
		return func_401("VALRG_DOCSICK");
	}
	if (func_407())
	{
		if (func_402(uParam0, 76, iVar1, 4, 5))
		{
			return func_401("VALRG_DOC_MUD2");
		}
		if (func_402(uParam0, 76, iVar1, 8, 6))
		{
			return func_401("VALRG_DOC_MUD3");
		}
		if (func_403(uParam0, 76, iVar1, 64, 62))
		{
			return func_401("VALRG_DOC_DWN");
		}
		if (func_402(uParam0, 76, iVar1, 32, 24))
		{
			return func_401("VALRG_DOC_MUD5");
		}
		if (func_402(uParam0, 76, iVar1, 16, 14))
		{
			return func_401("VALRG_DOC_MUD4");
		}
		if (func_404(74, 1, 0) && func_405(76, iVar1, 128, 1))
		{
			return func_401("VALRG_DOC_SRGEN");
		}
		if (func_404(73, 1, 0) && func_405(76, iVar1, 256, 1))
		{
			return func_401("VALRG_DOC_SRGEN");
		}
	}
	if (!func_400(uParam0, 4))
	{
		if (func_404(73, 0, 1) && func_405(76, iVar1, 2048, 1))
		{
			func_189(uParam0, 4);
			if (func_405(76, iVar1, 512, 1))
			{
				if (func_407())
				{
					return func_401("SRVD_RETURN_2A");
				}
				else
				{
					return func_401("SRVD_RETURN_2J");
				}
			}
			if (func_405(76, iVar1, 2048, 1))
			{
				if (func_407())
				{
					return func_401("SRVD_RETURN_3A");
				}
				else
				{
					return func_401("SRVD_RETURN_3J");
				}
			}
		}
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	return func_401("");
}

Vector3 func_193(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	if (!func_413(6))
	{
		return func_401("");
	}
	iVar1 = 6;
	if (func_412(uParam0, iVar1))
	{
		return func_401("VALRG_SBARSICK");
	}
	if (!func_400(uParam0, 16))
	{
		if (func_414(98, 2097152) > 0)
		{
			if (func_405(76, iVar1, 4, 1))
			{
				uParam0->f_21 = -1;
				return func_401("VALS_LD_CNV_A");
			}
			else if (func_405(76, iVar1, 2, 1))
			{
				uParam0->f_21 = -1;
				return func_401("VALS_LD_CNV_B");
			}
			func_189(uParam0, 16);
		}
	}
	if (func_405(76, iVar1, 8, 0))
	{
		if (func_258(14) && !func_410(4))
		{
			func_110(76, iVar1, 8);
			uParam0->f_21 = -1;
			return func_401("VALRG_SBAR_MUD4");
		}
	}
	if (func_405(76, iVar1, 16, 0))
	{
		if (func_255(26) && !func_410(4))
		{
			func_110(76, iVar1, 16);
			uParam0->f_21 = -1;
			return func_401("VALRG_SBAR_CAL1");
		}
	}
	if (func_405(76, iVar1, 32, 0))
	{
		if (func_255(28) && !func_410(4))
		{
			func_110(76, iVar1, 32);
			uParam0->f_21 = -1;
			return func_401("VALRG_SBAR_CAL2");
		}
	}
	switch (func_414(111, 2097152))
	{
		case 0:
			if (func_405(76, iVar1, 64, 1))
			{
				uParam0->f_23++;
				return func_401("VALS_CNV_A");
			}
			break;
		case 1:
			if (func_405(76, iVar1, 128, 0))
			{
				switch (uParam0->f_23)
				{
					case 0:
						func_189(uParam0, 2048);
						uParam0->f_23++;
						return func_401("VALS_CNV_DA");
					case 1:
						uParam0->f_23++;
						if (func_407())
						{
							return func_401("VALS_CNV_D_APOS");
						}
						return func_401("VALS_CNV_D_JPOS");
					case 2:
						uParam0->f_23++;
						return func_401("VALS_CNV_DB");
					case 3:
						func_415(uParam0, 2048);
						uParam0->f_23 = 0;
						func_110(76, iVar1, 128);
						return func_401("");
					default:
						break;
				}
			}
			break;
		case 2:
			if (func_405(76, iVar1, 256, 1))
			{
				uParam0->f_23++;
				return func_401("VALS_CNV_B");
			}
			break;
		case 3:
			if (func_405(76, iVar1, 512, 1))
			{
				uParam0->f_23++;
				return func_401("VALS_CNV_C");
			}
			break;
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	return func_401("");
}

Vector3 func_194(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	if (!func_413(5))
	{
		return func_401("");
	}
	func_416(uParam0, 33);
	iVar1 = 7;
	if (func_405(76, iVar1, 4, 0))
	{
		if (func_417(106) > 0)
		{
			func_110(76, iVar1, 4);
			uParam0->f_21 = -1;
			return func_401("REDJ_CNV_B");
		}
	}
	if ((func_405(76, iVar1, 16, 0) && func_418(88, 0) == 3) && func_410(8))
	{
		if (func_400(uParam0, 8192))
		{
			switch (uParam0->f_23)
			{
				case 0:
					func_419(70, 1);
					func_189(uParam0, 2048);
					uParam0->f_23++;
					return func_401("REDD_CNV_A");
				case 1:
					uParam0->f_23++;
					if (func_407())
					{
						return func_401("REDD_CNV_APOS");
					}
					return func_401("REDD_CNV_JPOS");
				case 2:
					uParam0->f_23++;
					if (func_405(76, iVar1, 2048, 0))
					{
						uParam0->f_23++;
					}
					return func_401("REDD_CNV_B");
				case 3:
					func_415(uParam0, 2048);
					uParam0->f_23 = 0;
					func_419(70, 0);
					func_415(uParam0, 8192);
					func_110(76, iVar1, 16);
					return func_401("");
				default:
					break;
			}
		}
	}
	if (func_405(76, iVar1, 512, 0))
	{
		if (func_414(108, 2097152) > 0)
		{
			uParam0->f_21 = -1;
			func_110(76, iVar1, 512);
			return func_401("RD_VAL_CNV_A");
		}
	}
	if (func_405(76, iVar1, 4096, 0) && func_414(108, 2097152) > 1)
	{
		if (func_400(uParam0, 8192))
		{
			switch (uParam0->f_23)
			{
				case 0:
					func_419(70, 1);
					func_189(uParam0, 2048);
					uParam0->f_21 = -1;
					uParam0->f_23++;
					return func_401("RD_VAL_CNV_BA");
				case 1:
					uParam0->f_23++;
					if (func_407())
					{
						return func_401("RD_VAL_CNV_B_A");
					}
					return func_401("RD_VAL_CNV_B_J");
				case 2:
					uParam0->f_23++;
					return func_401("RD_VAL_CNV_BB");
				case 3:
					func_415(uParam0, 2048);
					func_419(70, 0);
					uParam0->f_23 = 0;
					func_110(76, iVar1, 4096);
					return func_401("");
				default:
					break;
			}
		}
	}
	if (func_407())
	{
		if ((func_405(76, iVar1, 2, 0) && func_409() == 1) && func_258(5))
		{
			if (!func_400(uParam0, 4))
			{
				if (func_410(2) && func_405(76, iVar1, 8192, 1))
				{
					func_189(uParam0, 4);
					uParam0->f_21 = -1;
					return func_401("MUD2_NOMORE");
				}
				func_110(76, iVar1, 2);
				uParam0->f_21 = -1;
				return func_401("VALRG_FBAR_MUD2");
			}
		}
	}
	if (func_412(uParam0, iVar1))
	{
		return func_401("VALRG_FBARSICK");
	}
	if (uParam0->f_21 < 0)
	{
		return func_401("");
	}
	return func_401("");
}

Vector3 func_195(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 8;
	if (func_407())
	{
		if (func_412(uParam0, iVar1))
		{
			return func_401("VALRG_HOTSICK");
		}
		if (func_405(76, iVar1, 2, 0))
		{
			if (func_409() == 1 && func_258(6))
			{
				func_420(79);
				func_419(79, 1);
				func_189(uParam0, 2048);
				uParam0->f_24 = 20;
				func_189(uParam0, 4096);
				if (func_408(uParam0))
				{
					func_110(76, iVar1, 2);
					uParam0->f_21 = -1;
					return func_401("VALRG_HOT_MUD3");
				}
			}
		}
	}
	return func_401("");
}

Vector3 func_196(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	StringCopy(&cVar1, func_421(uParam0, "VALRG_LIVSICK_1", "VALRG_LIVSICK_2", "VALRG_LIVSICK_3"), 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_422(cVar1)))
	{
		return func_401(&cVar1);
	}
	return func_401("");
}

Vector3 func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_401("");
	}
	iVar1 = 10;
	if (func_407())
	{
		sVar2 = func_423(Global_1393529.f_288[1 /*8*/]);
		iVar3 = MISC::GET_HASH_KEY(sVar2);
		if (iVar3 == joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"))
		{
			if (func_402(uParam0, 76, iVar1, 2, 29))
			{
				uParam0->f_37 = "0834_TRAINWORKER";
				return func_401("VALRG_TW2_MOB3");
			}
			if (func_402(uParam0, 76, iVar1, 8, 3))
			{
				uParam0->f_37 = "0834_TRAINWORKER";
				return func_401("VALRG_TW2_WNT4");
			}
		}
		if (iVar3 == joaat("0833_S_M_M_TRAINSTATIONWORKER_01_WHITE_02"))
		{
			if (func_402(uParam0, 76, iVar1, 4, 25))
			{
				uParam0->f_37 = "0833_TRIANWORKER";
				return func_401("VALRG_TW1_MUD3B");
			}
		}
		if (func_412(uParam0, iVar1))
		{
			switch (iVar3)
			{
				case joaat("0832_S_M_M_TRAINSTATIONWORKER_01_WHITE_01"):
					uParam0->f_37 = "0832_TRAINWORKER";
					return func_401("VALRG_TSW3SICK");
				case joaat("0833_S_M_M_TRAINSTATIONWORKER_01_WHITE_02"):
					uParam0->f_37 = "0833_TRAINWORKER";
					return func_401("VALRG_TSW2SICK");
				case joaat("0834_S_M_M_TRAINSTATIONWORKER_01_WHITE_03"):
					uParam0->f_37 = "0834_TRAINWORKER";
					return func_401("VALRG_TSW1SICK");
				default:
					break;
			}
		}
	}
	return func_401("");
}

bool func_198(int iParam0)
{
	if (!func_424(iParam0))
	{
		return false;
	}
	return func_425(iParam0);
}

void func_199(struct<16> /*128*/ sParam0, int iParam16)
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
	if (!func_426(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_260(&(Param0.f_10)))
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
			func_427(iParam16);
			return;
		}
		iVar0++;
	}
}

struct<8> /*64*/ func_200(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_201(var uParam0)
{
	uParam0->f_31 = 74204;
	uParam0->f_32 = 74470;
	uParam0->f_11 = 1;
}

bool func_202(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	return func_160(iParam0, 33554432);
}

bool func_203(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_204(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
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
			*iParam1 = 69;
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
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
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
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
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
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
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
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_205(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_206(int iParam0, bool bParam1)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (!func_385(iParam0, 2))
	{
		return 0;
	}
	if (func_385(iParam0, 32) && !bParam1)
	{
		func_430(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_323(iParam0)));
		if (func_20() == -1)
		{
			if (func_385(iParam0, 2048))
			{
				PERSCHAR::_0x49A8C2CD97815215(func_96(iParam0));
				func_431(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_96(iParam0));
		}
		return 0;
	}
	if (!func_432(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		func_431(iParam0, 128);
		return 1;
	}
	func_430(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_323(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_96(iParam0));
	if (func_385(iParam0, 2048))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_96(iParam0));
		func_431(iParam0, 2048);
	}
	return 1;
}

bool func_207(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_15;
}

void func_208(int iParam0)
{
	int iVar0;

	func_433(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_174(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
		{
			if (!func_333(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
			{
				func_60(Global_1934182[iParam0 /*18*/].f_8[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_209(int iParam0)
{
	Global_1934182.f_74 = (Global_1934182.f_74 - (Global_1934182.f_74 && iParam0));
}

void func_210(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	Global_1934182[iParam0 /*18*/].f_8[iParam1] = func_173(iParam2, NETWORK::NETWORK_IS_IN_SESSION(), 0);
}

bool func_211(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

int func_212()
{
	return Global_1894899.f_2;
}

bool func_213(int iParam0)
{
	if (!func_211(iParam0))
	{
		return false;
	}
	return (!func_254() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_214(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_215(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_434(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_216(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_217(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] && iParam1) != 0;
}

void func_218(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

int func_219(int iParam0, int iParam1)
{
	return func_237(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_435(iParam1)));
}

void func_220(int iParam0, int iParam1)
{
	if (!func_217(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] = (Global_1899528.f_3[iParam0] || iParam1);
}

bool func_221(int iParam0)
{
	return func_391(iParam0) == 0;
}

bool func_222(int iParam0)
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
		iVar0 = func_436(iParam0);
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

int func_223(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_224(int iParam0)
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

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_221(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_224(iParam0);
		if (iVar2 >= 0)
		{
			func_437(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { Var3 };
			func_438(iVar1, 1);
			func_437(iParam0, 1);
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
		iVar2 = func_224(iParam0);
		if (iVar2 >= 0)
		{
			func_437(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_439(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { Var3 };
					func_438(iVar0, 1);
					func_437(iParam0, 1);
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

void func_226()
{
	func_121(-939420910);
	func_121(-1187950766);
	func_121(356365161);
	func_121(753127042);
	func_121(-2038424081);
	func_121(1884271742);
	func_121(459290420);
}

void func_227()
{
	func_121(704802028);
	func_121(588987611);
	func_121(2008888900);
	func_121(1649996811);
	func_121(227918160);
	func_121(168171957);
	func_121(1193080109);
	func_121(-491981251);
	func_121(-639037538);
	func_121(-618620429);
}

void func_228(int iParam0)
{
	func_440(Global_1935369.f_5[iParam0 /*11*/].f_6, 1);
	func_441(Global_1935369.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_0xF6A8A652A6B186CD(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_0xFDFECC6EE4491E11(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}
	func_442(iParam0, 8192);
	func_442(iParam0, 16384);
	func_442(iParam0, 32768);
	func_442(iParam0, 131072);
	func_442(iParam0, 16777216);
	func_442(iParam0, 524288);
	func_442(iParam0, 1048576);
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
}

int func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_230(int iParam0, int iParam1)
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

Vector3 func_231(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 2:
			return 2939.063f, 1287.116f, 43.6529f;
		case 3:
			return 2932.97f, 1282.56f, 43.67f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 99:
			return -5227.357f, -3470.067f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 7:
			return -784.49f, -1321.95f, 42.88f;
		case 10:
			return -753.4219f, -1284.24f, 43.20049f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.03f, -1327.09f, 42.97f;
		case 15:
			return -875.02f, -1326.71f, 42.97f;
		case 17:
			return -762.0716f, -1293.549f, 42.8355f;
		case 12:
			return -813.6f, -1373.8f, 44.2f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1521.91f, 441.15f, 89.68f;
		case 21:
			return 1523.63f, 442.65f, 89.68f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.35f, -577.48f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1329.755f, -1294.218f, 76.0092f;
		case 29:
			return 1323.734f, -1321.775f, 77.8924f;
		case 30:
			return 1226.71f, -1295.08f, 75.9f;
		case 31:
			return 1230.34f, -1298.578f, 75.9027f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 36:
			return 2644.188f, -1292.507f, 51.2496f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2859.51f, -1202.16f, 48.59f;
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.97f, 52.68f;
			return 2842.45f, -1227.66f, 46.66f;
			return 2817.64f, -1325.011f, 47.00512f;
			return 2836.992f, -1305.805f, 45.6964f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return 2683.84f, -1399.642f, 45.37881f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -1773.314f, -393.9122f, 155.5647f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -272.7182f, 785.6115f, 117.4202f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return 0f, 0f, 0f;
		}

Vector3 func_232(int iParam0)
{
	if (!func_248(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 2:
			return 2936.9f, 1281.7f, 43.6529f;
		case 3:
			return 2931.596f, 1282.839f, 44.6783f;
		case 99:
			return -5227.45f, -3468.19f, -20.49293f;
		case 100:
			return -5228.75f, -3468.28f, -21.57f;
		case 10:
			return -753.4219f, -1285.01f, 43.20049f;
		case 7:
			return -785.1682f, -1324.179f, 46.3505f;
		case 9:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 17:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 18:
			return 1417.288f, 273.5687f, 88.4881f;
		case 20:
			return 1522.305f, 442.8598f, 89.6785f;
		case 21:
			return 1525.407f, 442.7721f, 90.6467f;
		case 22:
			return 2161.5f, -618.5f, 43f;
		case 23:
			return -1092.88f, -575.69f, 81.41f;
		case 24:
			return -1094.41f, -577.51f, 81.41f;
		case 25:
			return 1294.084f, -1303.102f, 76.0418f;
		case 26:
			return 1297.423f, -1278.412f, 75.65752f;
		case 27:
			return 1319.43f, -1142.08f, 81.41f;
		case 28:
			return 1327.036f, -1292.386f, 77.2488f;
		case 29:
			return 1326.268f, -1323.129f, 78.1929f;
		case 30:
			return 1228.508f, -1296.796f, 77.6347f;
		case 31:
			return 1232.206f, -1300.197f, 77.8496f;
		case 35:
			return 1209.053f, -193.1814f, 101.9785f;
		case 37:
			return 2657.466f, -1180.96f, 53.2785f;
		case 38:
			return 2819.495f, -1331.29f, 45.514f;
		case 39:
			return 2721.24f, -1231.66f, 49.37f;
		case 41:
			return 2851.2f, -1202.3f, 49.046f;
		case 42:
			return 2828.087f, -1315.179f, 47.4196f;
		case 43:
			return 2714.586f, -1286.893f, 50.3211f;
		case 44:
			return 2508.212f, -1449.654f, 48.41523f;
		case 45:
			return 2747.906f, -1397.089f, 47.1107f;
		case 46:
			return 2746.599f, -1394.278f, 46.918f;
		case 47:
			return 2554.144f, -1166.025f, 54.3474f;
		case 48:
			return 2842.45f, -1227.66f, 46.66f;
		case 49:
			return 2817.64f, -1325.011f, 47.00512f;
		case 50:
			return 2836.992f, -1305.805f, 45.6964f;
		case 55:
			return 2832.02f, -1225.563f, 46.6422f;
		case 54:
			return 2734.174f, -1119.755f, 50.10792f;
		case 60:
			return -1753.404f, -392.557f, 155.2576f;
		case 61:
			return -1792.444f, -385.412f, 160.6924f;
		case 62:
			return -1812.343f, -370.618f, 161.8814f;
		case 63:
			return -1819.88f, -561.8194f, 157.2323f;
		case 65:
			return -1763.78f, -385.1118f, 156.7401f;
		case 68:
			return -307.9643f, 773.6048f, 117.7031f;
		case 69:
			return -308.18f, 812.19f, 117.99f;
		case 70:
			return 0f, 0f, 0f;
		case 72:
			return -338.8647f, 767.4334f, 115.5628f;
		case 73:
			return -286.9307f, 809.6714f, 120.6565f;
		case 74:
			return -323.5066f, 799.6924f, 118.973f;
		case 75:
			return -279.273f, 781.7448f, 118.7954f;
		case 76:
			return -369.4457f, 786.6935f, 115.9904f;
		case 77:
			return -176.3f, 630.1f, 115.331f;
		case 78:
			return -174.0662f, 633.9207f, 115.109f;
		case 80:
			return -272.7182f, 785.6115f, 117.4202f;
		case 79:
			return -326.1232f, 771.9214f, 116.436f;
		case 1:
			return 2947.64f, 1344.901f, 43.899f;
		case 51:
			return 2683.84f, -1399.642f, 45.37881f;
		case 16:
			return -805.72f, -1330.5f, 42.67f;
		case 64:
			return -1773.314f, -393.9122f, 155.5647f;
		case 32:
			return 1332.55f, -1298.679f, 75.35602f;
		case 82:
			return 3023.859f, 561.206f, 46.7352f;
		case 86:
			return 2986.003f, 567.9055f, 45.337f;
		case 84:
			return 2967.273f, 796.7416f, 52.5948f;
		case 87:
			return -1302.951f, 394.6608f, 94.3817f;
		case 89:
			return -1300.283f, 400.4247f, 94.3817f;
		case 88:
			return -1299.608f, 401.5503f, 94.97269f;
		case 93:
			return -5518.071f, -2906.217f, -2.7513f;
		case 90:
			return -5488.293f, -2937.662f, 0.6299f;
		case 91:
			return -5506.691f, -2968.343f, -1.2586f;
		case 92:
			return -5509.019f, -2947.435f, -2.8934f;
		case 94:
			return -5520.701f, -3044.427f, -1.40419f;
		case 95:
			return -3684.342f, -2626.877f, -12.5497f;
		case 4:
			return -2842.211f, 137.3398f, 183.8268f;
		case 5:
			return -1005.934f, -540.8262f, 97.9502f;
		case 34:
			return 2076.835f, 1000.829f, 111.4973f;
		case 67:
			return -2251.034f, -1916.911f, 115.9488f;
		case 56:
			return -142.072f, -23.5242f, 95.0883f;
		case 57:
			return 675.3091f, -1251.233f, 43.0152f;
		case 58:
			return 1875.2f, -1859.182f, 41.8f;
		case 59:
			return 2366.084f, 1347.122f, 105.1305f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_233(int iParam0, int iParam1)
{
	return func_293(Global_1914319.f_3[iParam0 /*446*/].f_5, iParam1);
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_183(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_443(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_444(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0f, 0f, 0f };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;
	if (PED::_0x91A5F9CBEBB9D936(Global_1914319.f_3[iParam0 /*446*/].f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);
	}
	func_445(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_244(iParam0, 536870912);
	iVar1 = func_246(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_384(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = 0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
	{
		UIFEED::_0x2F901291EF177B02(Global_1914319.f_3[iParam0 /*446*/].f_440, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_446(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_447(iParam0, 0);
}

int func_235(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_237(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_448())
	{
		iVar2 = func_448();
	}
	iVar5 = func_449(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_450(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_450(iVar6) == 0)
			{
				return func_451(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_450(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_450(iVar6) == 0)
			{
				return func_451(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_451(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_238(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75f;
		case 9:
			return 25f;
		case 10:
			return 25f;
		case 22:
			return 55f;
	}
	return 12.5f;
}

bool func_239(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_233(iParam0, 16384) && !func_452(iParam0, 1))
	{
		return true;
	}
	if (!func_183(iParam1))
	{
		return false;
	}
	iVar0 = func_268(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		func_95(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		func_95(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 92:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0507_U_M_M_VhtStationClerk_01", 64);
			return;
		case 38:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0078_U_M_M_BlWTrainStationWorker_01", 64);
			return;
		case 26:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0442_U_M_M_StrFreightStationOwner_01", 64);
			return;
		case 105:
			StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0406_U_M_M_RhdTrainStationWorker_01", 64);
			StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0406_U_M_M_RhdTrainStationWorker_01", 64);
			return;
		case 76:
			if (!func_53(29))
			{
				if (func_258(29) && func_409() <= func_453(29))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_53(3))
			{
				if (func_258(3) && func_409() <= func_453(3))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
					return;
				}
			}
			if (!func_53(25))
			{
				if (func_258(25) && func_409() <= func_453(25))
				{
					StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0833_S_M_M_TrainStationWorker_01_WHITE_02", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0834_S_M_M_TrainStationWorker_01_WHITE_03", 64);
	}
	else
	{
		StringCopy(&(Global_1393529.f_288[2 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
		StringCopy(&(Global_1393529.f_288[1 /*8*/]), "0832_S_M_M_TrainStationWorker_01_WHITE_01", 64);
	}
}

void func_241()
{
	StringCopy(&(Global_1393529.f_288[18 /*8*/]), "1035_U_M_M_SDCUSTOMVENDOR_01", 64);
}

void func_242()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0825_S_M_M_LiveryWorker_01_WHITE_01", 64);
	}
	else if (iVar1 < 40)
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0826_S_M_M_LiveryWorker_01_WHITE_02", 64);
	}
	else
	{
		StringCopy(&(Global_1393529.f_288[9 /*8*/]), "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
	}
}

void func_243(int iParam0)
{
	if (!func_248(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_285(iParam0, 2))
			{
				func_250(iParam0, 2);
			}
			break;
	}
}

void func_244(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 - (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1));
}

void func_245(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 = (Global_1914319.f_3[iParam0 /*446*/].f_7 || iParam1);
}

int func_246(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

int func_247(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1430252 < (MISC::GET_FRAME_COUNT() - 30))
	{
		Global_1430252 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 3)
		{
			Global_1430252.f_1[iVar0] = 0;
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 <= 13)
		{
			if (Global_40.f_9479[iVar1 /*4*/] != -1)
			{
				Global_1430252.f_1[Global_40.f_9479[iVar1 /*4*/]]++;
			}
			iVar1++;
		}
	}
	return Global_1430252.f_1[iParam0];
}

bool func_248(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_249(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] - (Global_1914319.f_15614[iParam0] && iParam1));
}

void func_250(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] = (Global_1914319.f_15614[iParam0] || iParam1);
}

int func_251(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_252(int iParam0, bool bParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	if ((bParam1 && func_454(iParam0, 512)) || (!bParam1 && !func_454(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_245(iParam0, 512);
	}
	else
	{
		func_244(iParam0, 512);
	}
	if (func_455(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

void func_253(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_254()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_255(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_456(iParam0))
	{
		return false;
	}
	return func_457(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_256(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_458(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_12 != -1)
	{
		if (iParam0 == Global_1224589.f_5)
		{
			if (!Global_1224589.f_6)
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

bool func_257(int iParam0)
{
	int iVar0;

	if (!func_459(iParam0))
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
					case -2093459088:
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

bool func_258(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_457(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_259(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_183(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_268(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_96(iParam0));
}

bool func_260(char* sParam0)
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

bool func_261(int iParam0)
{
	if (((((!(func_160(iParam0, 8) || func_160(iParam0, 2)) || !func_295(Global_35, func_460(iParam0), 1, 0)) || !func_202(iParam0)) || func_461()) || Global_1934266.f_56) || ((iParam0 != 38 || func_198(45)) && (func_23(1, 0) || func_23(8, 0))))
	{
		return false;
	}
	return true;
}

bool func_262(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_263(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_264(int iParam0)
{
	return iParam0 != 0;
}

float func_265(vector3 vParam0, int iParam3)
{
	return func_462(Global_35, vParam0, iParam3);
}

void func_266()
{
	func_336(&(iLocal_840[0]), joaat("P_DOOR_VAL_BARN_L"), -361.6891f, 785.3472f, 115.2065f);
	func_336(&(iLocal_840[1]), joaat("P_DOOR_VAL_BARN_R"), -361.9032f, 789.568f, 115.2065f);
	func_336(&(iLocal_840[2]), joaat("P_DOOR_VAL_BARN_L"), -376.7099f, 784.3367f, 115.1714f);
	func_336(&(iLocal_840[3]), joaat("P_DOOR_VAL_BARN_R"), -376.9761f, 788.7846f, 115.1714f);
}

void func_267()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_840)
	{
		func_381(&(iLocal_840[iVar0]));
		iVar0++;
	}
}

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = func_96(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
}

bool func_269(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_183(iParam0))
	{
		return false;
	}
	if (!func_443(iParam0) && bParam1)
	{
		return false;
	}
	return func_385(iParam0, 1);
}

bool func_270()
{
	if (func_20() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_271(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_272()
{
	if (Local_14 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_14.f_6);
		STREAMING::REQUEST_MODEL(Local_14, false);
		Local_14.f_16 = 1;
	}
}

bool func_273()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_14.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6);
	}
	return true;
}

bool func_274()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_14.f_5 <= 0)
	{
		return false;
	}
	iVar1 = func_275();
	iVar2 = func_276(iVar1);
	iVar3 = func_360(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_14.f_5 - 1))
	{
		iVar4 = func_276(Local_14.f_1[iVar0]);
		iVar5 = func_360(Local_14.f_1[iVar0]);
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_275()
{
	return Global_1899515;
}

int func_276(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_277(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

bool func_278()
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	vector3 vVar3;
	int iVar6;

	if (!Global_1935183.f_28)
	{
		return false;
	}
	bVar0 = false;
	if (Global_1935183.f_29 == 3)
	{
		return true;
	}
	if (func_463(&bLocal_684))
	{
		if ((AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bLocal_684) || AUDIO::IS_ANY_SPEECH_PLAYING(bLocal_684)) || func_464(1))
		{
			return true;
		}
		switch (Global_1935183.f_29)
		{
			case 1:
				bVar1 = func_268(1);
				if (!ENTITY::DOES_ENTITY_EXIST(bVar1) || func_311(bVar1, 0))
				{
					return false;
				}
				sVar2 = "VAL_Bartender";
				iLocal_685 = func_465(0, 11, iLocal_685);
				switch (iLocal_685)
				{
					case 0:
						vVar3 = { func_401("GRIZZ_BARTEN_A") };
						iVar6 = 2;
						break;
					case 1:
						vVar3 = { func_401("GRIZZ_BARTEN_B") };
						iVar6 = 4;
						break;
					case 2:
						vVar3 = { func_401("GRIZZ_BARTEN_C") };
						iVar6 = 8;
						break;
					case 3:
						vVar3 = { func_401("GRIZZ_BARTEN_D") };
						iVar6 = 16;
						break;
					case 4:
						vVar3 = { func_401("GRIZZ_BARTEN_E") };
						iVar6 = 32;
						break;
					case 5:
						vVar3 = { func_401("GRIZZ_BARTEN_F") };
						iVar6 = 64;
						break;
					case 6:
						vVar3 = { func_401("GRIZZ_BARTEN_G") };
						iVar6 = 128;
						break;
					case 7:
						vVar3 = { func_401("GRIZZ_BARTEN_H") };
						iVar6 = 256;
						break;
					case 8:
						vVar3 = { func_401("GRIZZ_BARTEN_I") };
						iVar6 = 512;
						break;
					case 9:
						vVar3 = { func_401("GRIZZ_BARTEN_J") };
						iVar6 = 2048;
						break;
					case 10:
						vVar3 = { func_401("GRIZZ_BARTEN_K") };
						iVar6 = 4096;
						break;
				}
				if (func_405(76, 13, iVar6, 1))
				{
					bVar0 = true;
				}
				break;
			case 0:
				bVar1 = func_268(8);
				if (!ENTITY::DOES_ENTITY_EXIST(bVar1) || func_311(bVar1, 0))
				{
					return false;
				}
				sVar2 = "VAL_Barber";
				iLocal_685 = func_465(0, 12, iLocal_685);
				switch (iLocal_685)
				{
					case 0:
						vVar3 = { func_401("BARB_BAR7A") };
						iVar6 = 2;
						break;
					case 1:
						vVar3 = { func_401("BARB_BAR7B") };
						iVar6 = 4;
						break;
					case 2:
						vVar3 = { func_401("BARB_BAR7C") };
						iVar6 = 8;
						break;
					case 3:
						vVar3 = { func_401("BARB_BAR7D") };
						iVar6 = 16;
						break;
					case 4:
						vVar3 = { func_401("BARB_BAR7E") };
						iVar6 = 32;
						break;
					case 5:
						vVar3 = { func_401("BARB_BAR7F") };
						iVar6 = 64;
						break;
					case 6:
						vVar3 = { func_401("BARB_BAR7G") };
						iVar6 = 128;
						break;
					case 7:
						vVar3 = { func_401("BARB_BAR7H") };
						iVar6 = 256;
						break;
					case 8:
						vVar3 = { func_401("BARB_BAR7I") };
						iVar6 = 512;
						break;
					case 9:
						vVar3 = { func_401("BARB_BAR7J") };
						iVar6 = 2048;
						break;
					case 10:
						vVar3 = { func_401("BARB_BAR7K") };
						iVar6 = 4096;
						break;
					case 11:
						vVar3 = { func_401("BARB_BAR7L") };
						iVar6 = 8192;
						break;
				}
				if (func_405(76, 12, iVar6, 1))
				{
					bVar0 = true;
				}
				break;
			case 2:
				bVar1 = func_268(1);
				if (!ENTITY::DOES_ENTITY_EXIST(bVar1) || func_311(bVar1, 0))
				{
					return false;
				}
				sVar2 = "VAL_Bartender";
				vVar3 = { func_401("VALRG_FBAR_APOL") };
				bVar0 = true;
				break;
			case 4:
				Global_1935183.f_29 = 3;
				break;
		}
	}
	if (bVar0)
	{
		func_466(&uLocal_53, bLocal_684, "GRIZZLED_JON", 0);
		func_466(&uLocal_53, bVar1, sVar2, 0);
		func_468(&uLocal_53, vVar3, func_467(), 0, 0);
		Global_1935183.f_29 = 4;
		return true;
	}
	return false;
}

void func_279(var uParam0)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_8)
	{
		case 1:
			func_469(uParam0);
			uParam0->f_8 = 2;
			break;
		case 2:
			if ((func_470(2, 2) || func_470(1, 2)) || func_470(0, 2))
			{
				uParam0->f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1.25f, -1f, -1f) };
				uParam0->f_8 = 4;
			}
			break;
		case 4:
			if (func_471(uParam0))
			{
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal)
				{
					uParam0->f_8 = 32;
				}
				Jump @1358; //curOff = 175
			}
			else if (uParam0->f_10)
			{
				uParam0->f_3 = func_472();
				Stack.Push(uParam0->f_3 != 0);
				Stack.Push(uParam0);
				Call_Loc(uParam0->f_31);
				if (StackVal && StackVal)
				{
					PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
					STREAMING::REQUEST_MODEL(uParam0->f_3, false);
					uParam0->f_8 = 8;
				}
				else
				{
					uParam0->f_8 = 512;
				}
			}
			else
			{
				uParam0->f_8 = 512;
			}
			break;
		case 8:
			if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
			{
			}
			else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_3))
			{
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					Stack.Push(uParam0);
					Stack.Push(uParam0->f_3);
					Call_Loc(uParam0->f_32);
					if (StackVal)
					{
						uParam0->f_1 = func_473(uParam0->f_3, uParam0->f_4, ENTITY::GET_ENTITY_HEADING(Global_35), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
						PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, false);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, false);
						uParam0->f_8 = 16;
					}
					else
					{
						Jump @443; //curOff = 431
						uParam0->f_8 = 32;
						Jump @1358; //curOff = 440
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
						{
							uParam0->f_8 = 512;
						}
						Jump @1358; //curOff = 462
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(0, Global_35, -1.15f, -0.5f, 0f, 1f, -1, 0);
							TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 4f, 0f), 2000);
							TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, true, true);
							uParam0->f_8 = 32;
						}
						else
						{
							uParam0->f_8 = 256;
							Jump @1358; //curOff = 605
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
							}
							if (!func_474(uParam0->f_1))
							{
								if (func_475() && func_476(uParam0->f_1, 1))
								{
									if (func_477(uParam0, uParam0->f_15))
									{
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
										PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 130, false);
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 315, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, true);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, true);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 7, 1, false);
										func_478(&(uParam0->f_12));
										uParam0->f_8 = 64;
									}
									else
									{
										uParam0->f_8 = 256;
									}
								}
								else if (!func_315(&(uParam0->f_12)))
								{
									func_399(&(uParam0->f_12), 1);
								}
								else if (func_479(&(uParam0->f_12)) > 15f)
								{
									func_478(&(uParam0->f_12));
									uParam0->f_8 = 256;
								}
							}
							else
							{
								uParam0->f_8 = 256;
							}
							Jump @1358; //curOff = 861
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
								PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_18)))
							{
								uParam0->f_8 = 512;
							}
							else
							{
								if (!func_315(&(uParam0->f_12)))
								{
									func_399(&(uParam0->f_12), 1);
								}
								else if (func_479(&(uParam0->f_12)) > 3f)
								{
									uParam0->f_8 = 128;
								}
								Jump @1358; //curOff = 961
								if (!func_464(1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
									{
										TASK::TASK_LOOK_AT_ENTITY(Global_35, uParam0->f_1, 10000, 0, 51, 0);
										if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_1))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_1, Global_35, -1, -1f, -1f, -1f);
										}
										if (func_477(uParam0, uParam0->f_18))
										{
										}
									}
									uParam0->f_8 = 256;
								}
								Jump @1358; //curOff = 1063
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 49, true);
									PED::SET_PED_RESET_FLAG(uParam0->f_1, 184, true);
									if (func_474(uParam0->f_1))
									{
										func_480(1, 1, 1);
									}
									if (!func_464(1))
									{
										iVar1 = TASK::FIND_SCENARIO_OF_TYPE_HASH(func_481(), joaat("WORLD_HUMAN_LEAN_BACK_WALL_SMOKING_BAR_CA"), 3f, 1, false);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_CLEAR_LOOK_AT(0);
										TASK::TASK_STAND_STILL(0, 2000);
										if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
										{
											TASK::TASK_USE_SCENARIO_POINT(0, iVar1, 0, 0, true, false, 0, false, -1f, false);
										}
										else
										{
											TASK::TASK_SMART_FLEE_PED(0, Global_35, 50f, -1, 16768, 1f, false);
										}
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 3, 2, false);
										PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_1, 4, 2, false);
										func_482(&(uParam0->f_1), 1, 0, 1);
										if (uParam0->f_10)
										{
											PED::_UNRESERVE_AMBIENT_PEDS(1);
										}
										uParam0->f_8 = 512;
									}
								}
								else
								{
									uParam0->f_8 = 512;
								}
								Jump @1358; //curOff = 1305
								if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
								{
									func_478(&(uParam0->f_12));
									if (uParam0->f_10)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_3);
									}
									uParam0->f_1 = 0;
									uParam0->f_8 = 1024;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_280(var uParam0)
{
	char* sVar0;

	if (!uParam0->f_1)
	{
		func_483(uParam0);
	}
	if (Global_1935369.f_53 != 0)
	{
		if (func_295(Global_35, uParam0->f_2, 1, 0))
		{
			if (func_484(uParam0))
			{
				switch (Global_1935369.f_53)
				{
					case 2:
						sVar0 = "WIN_COMMENT";
						break;
					case 4:
						sVar0 = "LOSE_COMMENT";
						break;
					case 8:
						sVar0 = "BIG_BET_COMMENT";
						break;
				}
				func_485(*uParam0, sVar0, joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
				Global_1935369.f_53 = 0;
			}
			else
			{
				Global_1935369.f_53 = 0;
			}
		}
		else
		{
			Global_1935369.f_53 = 0;
		}
	}
}

bool func_281(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_268(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_400(uParam0, 65536) && func_486(Global_35, iVar0, 1) > 25f)
		{
			func_480(1, 1, 0);
		}
		if (func_487(uParam0, bParam2))
		{
			if (func_489(func_488()))
			{
				func_490(func_488());
			}
			func_491(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_400(uParam0, 64))
		{
			return false;
		}
		if (func_486(Global_35, iVar0, 1) < 49f)
		{
			if (func_492(uParam0, iVar0))
			{
				func_493();
				if (bParam1)
				{
					if (!func_487(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_282(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	bool bVar5;
	char* sVar6;
	bool bVar7;

	Stack.Push(uParam0);
	Call_Loc(uParam0->f_43);
	vVar0 = { StackVal, StackVal, StackVal };
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_494(&vVar0)))
	{
		return;
	}
	bVar3 = func_268(*uParam0);
	if (!func_288(bVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Push(*uParam0);
		Call_Loc(uParam0->f_44);
		uParam0->f_37 = StackVal;
	}
	func_466(&uLocal_53, bVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(bVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_400(uParam0, 65536))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_407())
			{
				func_466(&uLocal_53, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_466(&uLocal_53, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_400(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			bVar5 = func_268(uParam0->f_3[iVar4 /*3*/]);
			if (!func_288(bVar5, 0))
			{
				return;
			}
			Stack.Push(uParam0->f_3[iVar4 /*3*/]);
			Call_Loc(uParam0->f_44);
			sVar6 = StackVal;
			func_466(&uLocal_53, bVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(bVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = func_400(uParam0, 16384);
	if (func_468(&uLocal_53, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_495(func_488());
		uParam0->f_30 = 1;
	}
	func_496(uParam0);
}

bool func_283(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_284(int iParam0)
{
	bool bVar0;

	bVar0 = func_285(iParam0, 256);
	return bVar0;
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] && iParam1) != 0;
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 0;
		case 105:
			return 1;
		case 5:
			return 2;
		case 120:
			return 3;
		case 26:
			return 4;
		case 38:
			return 5;
		case 69:
			return 6;
		case 28:
			return 7;
		case 115:
			return 8;
		case 92:
			return 9;
		case 78:
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_287(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_497(iParam0))
	{
		return false;
	}
	if (!func_498(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		return func_499(iParam0, iParam1);
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

bool func_288(bool bParam0, int iParam1)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_500(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(bParam0))
		{
			return false;
		}
	}
	if (func_500(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(bParam0))
		{
			return false;
		}
	}
	if (func_500(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(bParam0, 11, false))
		{
			return false;
		}
	}
	if (func_500(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(bParam0) && !PED::IS_PED_IN_ANY_VEHICLE(bParam0, false))
		{
			return false;
		}
	}
	if (func_500(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(bParam0))
		{
			return false;
		}
	}
	if (func_500(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(bParam0))
		{
			return false;
		}
	}
	if (func_500(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(bParam0))
		{
			return false;
		}
	}
	if (func_500(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(bParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_289(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_160(iParam0, 8))
	{
		return false;
	}
	if (!func_295(Global_35, func_460(iParam0), 1, 0))
	{
		return false;
	}
	if (!func_256(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return false;
	}
	return true;
}

void func_290(int iParam0)
{
	if (!func_501(1, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(func_502(1)))
	{
		return;
	}
	if (func_334(0, 0, 1))
	{
		return;
	}
	if (func_248(func_230(iParam0, 3)))
	{
		if (func_462(Global_35, Global_1914319.f_3[3 /*446*/].f_11, 1) > 80f)
		{
			return;
		}
	}
	if (func_248(func_230(iParam0, 0)))
	{
		if (func_462(Global_35, Global_1914319.f_3[0 /*446*/].f_11, 1) > 100f)
		{
			return;
		}
	}
	func_503(1, iParam0);
}

void func_291(int iParam0)
{
	if (!func_501(6, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(func_502(6)))
	{
		return;
	}
	func_503(6, iParam0);
}

void func_292()
{
	if (!func_501(7, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(func_502(7)))
	{
		return;
	}
	if (func_334(0, 0, 1))
	{
		return;
	}
	if (!func_504(joaat("WEAPON_SNIPERRIFLE_CARCANO")))
	{
		return;
	}
	func_503(7, 76);
}

bool func_293(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_294(int iParam0)
{
	return (Global_1898092.f_1 && iParam0) != 0;
}

bool func_295(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_296(int iParam0)
{
	Global_1898092.f_1 = (Global_1898092.f_1 || iParam0);
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = 512;
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

bool func_298(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return func_293(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

void func_299(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_253(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), func_505(iParam0, iParam1), 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 1;
	func_199(Var10, 0);
}

void func_301(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_506(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

Vector3 func_302(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		return 0f, 0f, 0f;
	}
	return PERSCHAR::_0x5EE6FCCC9C832CA2(func_96(iParam0));
}

bool func_303(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0;
	int iVar3;

	if (!func_183(iParam0))
	{
		return false;
	}
	if (!func_507(func_323(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		func_206(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 };
	if (!func_259(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_508(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_164(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_96(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_96(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_0x0CADC3A977997472(func_96(iParam0), false);
	}
	if (!func_164(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_96(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

bool func_304(int iParam0)
{
	return !func_285(iParam0, 1);
}

bool func_305(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar2 = func_509(iVar0);
	if (iVar2 == -1)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < Global_1898330)
	{
		if (Global_1898330[iVar1] == iVar2)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_306(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_510(iParam0, 1);
	func_511(iVar0);
	if (bParam1)
	{
		func_512(&Global_1899778, iVar0);
	}
	func_513(iVar0);
	return 1;
}

bool func_307(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_222(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_308(int iParam0)
{
	int iVar0;

	if (!func_459(iParam0))
	{
		return false;
	}
	iVar0 = func_224(func_514(iParam0));
	if (!func_515(iVar0))
	{
		return false;
	}
	return func_516(iVar0, 4);
}

void func_309(int iParam0)
{
	int iVar0;

	iVar0 = func_96(iParam0);
	if (!func_86())
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			PERSCHAR::_0xB65E7F733956CF25(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x31C70A716CAE1FEE(iVar0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, false);
			}
		}
	}
	else if (!func_385(iParam0, 32))
	{
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iVar0);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(698203522) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(698203522))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(698203522, true);
		}
	}
}

bool func_310(bool bParam0)
{
	return bParam0;
}

bool func_311(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 26:
		case 38:
			return 0;
		case 5:
		case 105:
			return 2;
		case 76:
		case 78:
		case 92:
			return 1;
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("S_CS_BL_NEWSPAPER01X");
		case 1:
			return joaat("S_CS_NH_NEWSPAPER01X");
		case 2:
			return joaat("S_CS_SD_NEWSPAPER01X");
		default:
			return joaat("S_CS_SD_NEWSPAPER01X");
	}
	return joaat("S_CS_SD_NEWSPAPER01X");
}

bool func_314()
{
	return Global_1310750.f_16077 != 0;
}

bool func_315(var uParam0)
{
	return func_517(*uParam0, 1);
}

bool func_316(var uParam0, float fParam1)
{
	if (!func_315(uParam0))
	{
		return false;
	}
	if (func_479(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_317(var uParam0)
{
	func_518(uParam0, 0f);
}

bool func_318()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

void func_319(int iParam0)
{
	int iVar0;

	iVar0 = func_519(iParam0);
	if (func_369(iVar0))
	{
		func_520(iVar0, 0, Global_36, -1, 0, 0);
	}
}

bool func_320(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_521(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

void func_322(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

int func_323(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_324(var uParam0)
{
	float fVar0;

	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, uParam0->f_13);
	if (fVar0 < 5625f || fVar0 > 9025f)
	{
		return false;
	}
	if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_12, uParam0->f_13, false))
	{
		return false;
	}
	return true;
}

bool func_325(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
	{
		iVar0 = 0;
	}
	if (uParam0->f_17 != 0)
	{
		if (!PROPSET::_HAS_PROP_SET_LOADED(uParam0->f_17))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_326(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(func_323(uParam0->f_1));
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		vVar1 = { PERSCHAR::_0x94995829ED15A598(iVar0) };
		if (BUILTIN::VDIST2(uParam0->f_13, vVar1) < 9f)
		{
			return true;
		}
	}
	return false;
}

bool func_327(var uParam0)
{
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		func_522(uParam0->f_13, 3f, 1, 0);
		uParam0->f_11 = VEHICLE::CREATE_VEHICLE(uParam0->f_12, uParam0->f_13, uParam0->f_16, true, true, false, false);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(uParam0->f_11, false);
		VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 1);
		return false;
	}
	if (uParam0->f_17 != 0)
	{
		PROPSET::_0xD80FAF919A2E56EA(uParam0->f_11, uParam0->f_17);
	}
	return true;
}

bool func_328(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 6) != 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return false;
	}
	if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_11, true, false)) < 12100f)
	{
		return false;
	}
	return true;
}

void func_329(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_11))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_11, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
				}
				iVar0++;
			}
		}
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_11));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	}
}

bool func_330(var uParam0)
{
	if ((MISC::GET_FRAME_COUNT() % 15) != 0)
	{
		return false;
	}
	if (CLOCK::GET_CLOCK_HOURS() != uParam0->f_2)
	{
		return false;
	}
	return true;
}

bool func_331(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		if (ENTITY::_0x88AD6CC10D8D35B2(uParam0->f_11))
		{
			VEHICLE::_0x87B974E54C71BA7B(uParam0->f_11, 0);
			if (VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_11))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_11, iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
					}
					iVar0++;
				}
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_11));
		}
	}
	if (uParam0->f_19)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(2);
		uParam0->f_19 = 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12);
	return true;
}

bool func_332(int iParam0)
{
	func_173(iParam0, 0, 0);
	if (func_174(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1;
	}
	return false;
}

bool func_333(int iParam0)
{
	func_173(iParam0, 0, 0);
	if (func_174(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

bool func_334(int iParam0, bool bParam1, bool bParam2)
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
		if (func_523())
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
		iVar0 = func_524(Global_1898164.f_1[0 /*5*/]);
		if (func_456(iVar0) && func_525(Global_1347702[iVar0 /*49*/].f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_439(Global_1898164.f_1[0 /*5*/]))
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

bool func_335(bool bParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(bParam0, vParam1);
}

void func_336(int iParam0, int iParam1, vector3 vParam2)
{
	if (*iParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*iParam0 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam1, vParam2, 7);
		}
	}
}

int func_337(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6)
{
	if (func_526(Global_35, vParam2, 1) > 225f)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (!DECORATOR::DECOR_EXIST_ON(*iParam1, "letter_item"))
		{
			*uParam0 = 0;
		}
		else
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		TXD::REQUEST_STREAMED_TXD(iParam5, false);
		if (!TXD::HAS_STREAMED_TXD_LOADED(iParam5))
		{
			return 0;
		}
		if (!DECORATOR::DECOR_EXIST_ON(*iParam1, "letter_item"))
		{
			DECORATOR::DECOR_SET_INT(*iParam1, "letter_item", iParam6);
			return 0;
		}
		else
		{
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(*iParam1, iParam5, 0, 0);
			TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(iParam5);
			*uParam0 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_338(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	if (func_527(uParam0, iParam1))
	{
		return false;
	}
	if (func_345(uParam0, 5) || bParam3)
	{
		sVar0 = func_528(iParam1);
		if (func_529(uParam0, sVar0))
		{
			if (!bParam2)
			{
				func_530(uParam0, iParam1);
			}
			func_478(&(uParam0->f_18));
			return true;
		}
	}
	return false;
}

void func_339(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4) || func_311(uParam0->f_4, 0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = func_96(uParam0->f_3);
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0) && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_0x406808610220405B(iVar0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, false);
		TASK::TASK_PERFORM_SEQUENCE(uParam0->f_4, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	else
	{
		iVar2 = func_96(uParam0->f_3);
		if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar2) && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar2))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_4, true, false);
			PERSCHAR::_0xA2B18FF8D39F6D87(iVar2);
			TASK::TASK_PERSISTENT_CHARACTER(uParam0->f_4);
		}
	}
}

int func_340(bool bParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_341(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0))
	{
		return PED::IS_PED_SHOOTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
	}
	return false;
}

bool func_342(var uParam0)
{
	if (-1829635046 == func_531(81053684))
	{
		if (func_532(uParam0))
		{
			return true;
		}
	}
	else if (func_533(-525676072, uParam0))
	{
		if (func_532(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_343(var uParam0)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			StringCopy(&(uParam0->f_8), "0822_S_M_M_BankClerk_01_WHITE_01", 64);
			break;
		case 1:
		case 4:
			StringCopy(&(uParam0->f_8), "0823_S_M_M_BankClerk_01_WHITE_02", 64);
			break;
		case 2:
		case 5:
			StringCopy(&(uParam0->f_8), "0824_S_M_M_BankClerk_01_WHITE_03", 64);
			break;
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(uParam0->f_4, &(uParam0->f_8));
}

bool func_344(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x886171A12F400B89(uParam0->f_6, iVar0, 1);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
	}
	else
	{
		return false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return false;
	}
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (PED::IS_PED_HUMAN(iVar3))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else if (PED::IS_PED_A_PLAYER(iVar3))
				{
					iVar1 = (iVar1 - 1);
				}
				else
				{
					Jump @160; //curOff = 147
					ITEMSET::DESTROY_ITEMSET(iVar0);
					return false;
				}
				iVar2++;
				ITEMSET::DESTROY_ITEMSET(iVar0);
				return iVar1 > 0;
			}
		}
	}
}

bool func_345(var uParam0, int iParam1)
{
	if (func_534(uParam0->f_4))
	{
		return false;
	}
	if (!func_315(&(uParam0->f_18)))
	{
		func_399(&(uParam0->f_18), 1);
	}
	if (iParam1 < 0)
	{
		return true;
	}
	if (func_479(&(uParam0->f_18)) > IntToFloat(iParam1))
	{
		return true;
	}
	return false;
}

bool func_346(int iParam0)
{
	if (func_535())
	{
		return false;
	}
	return func_457(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_347(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_348(var uParam0, int iParam1)
{
	func_506(&(uParam0->f_16), iParam1);
}

void func_349(var uParam0)
{
	uParam0->f_16 = 1;
}

bool func_350(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_535())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_351()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_536())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_334(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_352(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_537(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_539(func_538(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_540(iParam0) || func_198(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_353(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_354(int iParam0)
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

int func_355(int iParam0)
{
	if (!func_353(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_358(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] && iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] && iParam1) != 0;
}

bool func_359(int iParam0, int iParam1)
{
	if (!func_353(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_360(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_361(float fParam0)
{
	return ((fParam0 * 1.8f) + 32f);
}

char* func_362(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_541(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_363(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> /*32*/ sVar0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar16 = UIFEED::_SHOW_LOCATION_NOTIFICATION(&Var0, &vVar13, iParam6, iParam7);
	return uVar16;
}

bool func_364(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_365(int iParam0)
{
	int iVar0;

	if (func_540(iParam0))
	{
		if (!func_198(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_254())
	{
		if (!func_457(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_366(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> /*16*/ func_367(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_368(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_369(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_370(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_371()
{
	return Global_1310750.f_16037;
}

bool func_372(int iParam0, int iParam1)
{
	if (!func_369(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] && iParam1) != 0;
}

bool func_373(int iParam0)
{
	if (!func_369(iParam0))
	{
		return false;
	}
	if (func_542(64) && func_543(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_374(int iParam0)
{
	if (!func_369(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_375(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_369(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_544(iParam0);
	Global_1310750.f_16037 = (Global_1310750.f_16037 - 1);
}

void func_376(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_DELETE_VOLUME(iParam0);
	}
}

void func_377()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, -1000f);
		}
	}
	if (Local_14.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_14.f_6);
		}
		Local_14.f_16 = 0;
	}
	if (Local_14.f_18 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(Local_14.f_18);
	}
}

void func_378(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_315(&((uParam0[iVar0 /*45*/])->f_34)))
		{
			func_478(&((uParam0[iVar0 /*45*/])->f_34));
		}
		func_376((uParam0[iVar0 /*45*/])->f_38);
		func_376((uParam0[iVar0 /*45*/])->f_39);
		iVar0++;
	}
}

void func_379(char* sParam0)
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(sParam0))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED(sParam0))
		{
			HUD::_TEXT_BLOCK_DELETE(sParam0);
		}
	}
}

void func_380()
{
	func_545(bLocal_707);
	func_545(bLocal_719);
	func_545(bLocal_720);
}

void func_381(int iParam0)
{
	if (*iParam0 == 0)
	{
		return;
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(*iParam0))
	{
		ENTITY::_UNPIN_MAP_ENTITY(*iParam0);
	}
}

void func_382(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_SD_TRELAWNY")) > 0)
			{
				SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(joaat("TOWN_SECRETS_SD_TRELAWNY"));
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_ER_DAUGHTER")) > 0)
			{
				SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(joaat("TOWN_SECRETS_ER_DAUGHTER"));
			}
			break;
		case 3:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("TOWN_SECRETS_VAL_MOIRA")) > 0)
			{
				SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(joaat("TOWN_SECRETS_VAL_MOIRA"));
			}
			break;
	}
}

int func_383(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240.f_1[iVar0 /*18*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_384(int iParam0)
{
	if (func_174(iParam0) && func_546())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_385(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_183(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] && iParam1) != 0;
}

int func_386(int iParam0, bool bParam1)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	if (!func_385(iParam0, 2))
	{
		return 0;
	}
	if (func_323(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		return 1;
	}
	if (func_385(iParam0, 1) && !bParam1)
	{
		func_547(iParam0, 128);
		return 1;
	}
	func_431(iParam0, 129);
	func_548(iParam0);
	PERSCHAR::_0xFC77C5B44D5FF7C0(func_96(iParam0));
	func_430(iParam0, 0);
	return 1;
}

bool func_387(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_388(int iParam0, bool bParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[iParam0 /*28*/].f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1395601.f_5[iParam0 /*28*/].f_23, true, 0))
	{
		return;
	}
	if (func_334(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_549(238680582, bParam1);
			break;
		case 9:
			func_549(1555588463, bParam1);
			func_549(1275780106, bParam1);
			func_549(-833560428, bParam1);
			func_549(-1601174253, bParam1);
			func_549(-1295111793, bParam1);
			break;
		case 11:
			func_549(-1482639045, bParam1);
			break;
		case 10:
			func_549(254520182, bParam1);
			break;
		case 12:
			func_549(1997650502, bParam1);
			break;
		case 13:
			func_549(1335986638, bParam1);
			break;
		case 14:
			func_549(joaat("DOOR_STR_WHORE_INT_2"), bParam1);
			break;
		case 16:
			func_549(-1335647241, bParam1);
			break;
		case 15:
			func_549(1731691513, !func_258(70));
			break;
	}
}

void func_389(int iParam0)
{
	if (!func_387(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_390(int iParam0, int iParam1)
{
	if (!func_387(iParam0))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_20 = iParam1;
}

int func_391(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_436(iParam0);
}

int func_392(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_394(*iParam0);
	iVar1 = func_396(*iParam0);
	if (iParam1 < 1 || iParam1 > func_550(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_394(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

void func_395(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

int func_396(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_551(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_397(int iParam0, int iParam1)
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

void func_398(var uParam0)
{
	uParam0->f_19 = 1;
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1 || !func_315(uParam0))
	{
		func_317(uParam0);
	}
}

bool func_400(var uParam0, int iParam1)
{
	return func_293(uParam0->f_19, iParam1);
}

Vector3 func_401(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_402(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_552(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (func_553(iParam4))
	{
		if (func_405(iParam1, iParam2, iParam3, 1))
		{
			func_189(uParam0, 4);
			return true;
		}
	}
	return false;
}

bool func_403(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_552(iParam1, iParam2, iParam3))
	{
		return false;
	}
	iVar0 = func_554(iParam4);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_555(iParam4))
	{
		if (func_255(iParam4) && func_409() <= iVar0)
		{
			if (func_405(iParam1, iParam2, iParam3, 1))
			{
				func_189(uParam0, 4);
				return true;
			}
		}
	}
	return false;
}

bool func_404(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_248(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_556(iParam0, 32768))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_556(iParam0, 1024))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_405(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_552(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_110(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

bool func_406(int iParam0)
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
	iVar0 = func_276(func_275());
	if (func_293(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_293(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_293(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_293(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_293(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_293(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_293(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_293(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_293(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_293(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_293(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_293(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_293(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_293(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_293(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_293(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_293(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_407()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_408(var uParam0)
{
	int iVar0;

	iVar0 = func_268(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_486(Global_35, iVar0, 1) < 9f)
		{
			return true;
		}
	}
	return false;
}

int func_409()
{
	if (!func_457(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_457(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_457(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_457(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_457(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_457(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_457(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_410(int iParam0)
{
	return func_293(iLocal_49, iParam0);
}

bool func_411(bool bParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(bParam0, iParam1);
}

bool func_412(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_407())
	{
		return false;
	}
	iVar0 = func_212();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!func_552(iVar0, iParam1, 1024))
	{
		if (func_408(uParam0) && func_346(0))
		{
			func_110(iVar0, iParam1, 1024);
			uParam0->f_21 = -1;
			return true;
		}
	}
	return false;
}

bool func_413(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_557(iParam0))
	{
		return false;
	}
	iVar0 = func_558(iParam0);
	iVar1 = func_559(iParam0);
	if (!func_100(iVar0))
	{
		return false;
	}
	if (!func_560(iVar1))
	{
		return false;
	}
	if (func_212() == iVar0)
	{
		if (func_561(iVar1))
		{
			return true;
		}
	}
	return false;
}

int func_414(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_562(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_563(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/];
	}
	return 0;
}

void func_415(var uParam0, int iParam1)
{
	func_506(&(uParam0->f_19), iParam1);
}

void func_416(var uParam0, int iParam1)
{
	if (func_400(uParam0, 4096))
	{
		return;
	}
	if (!func_400(uParam0, 8192))
	{
		if (func_564(Global_35, uParam0))
		{
			func_189(uParam0, 2048);
		}
	}
	if (func_408(uParam0))
	{
		uParam0->f_24 = iParam1;
		uParam0->f_21 = -1;
		func_189(uParam0, 8192);
		func_189(uParam0, 4096);
	}
}

int func_417(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return Global_17504.f_42[iParam0 /*8*/];
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_565(iParam0, iParam1);
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 0;
}

void func_419(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_566(iParam0))
		{
			func_250(iParam0, 67108864);
		}
	}
	else if (func_566(iParam0))
	{
		func_249(iParam0, 67108864);
	}
}

void func_420(int iParam0)
{
	func_250(iParam0, 134217728);
}

char* func_421(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char* sVar0;

	if (!func_400(uParam0, 2))
	{
		if (func_407() && !func_318())
		{
			if (func_346(0) && func_408(uParam0))
			{
				sVar0 = func_423(Global_1393529.f_288[9 /*8*/]);
				switch (MISC::GET_HASH_KEY(sVar0))
				{
					case joaat("0825_S_M_M_LIVERYWORKER_01_WHITE_01"):
						func_189(uParam0, 2);
						uParam0->f_37 = "0825_LIVERY";
						uParam0->f_21 = -1;
						return sParam1;
					case joaat("0826_S_M_M_LIVERYWORKER_01_WHITE_02"):
						uParam0->f_37 = "0826_LIVERY";
						uParam0->f_21 = -1;
						func_189(uParam0, 2);
						return sParam2;
					case joaat("0827_S_M_M_LIVERYWORKER_01_WHITE_03"):
						uParam0->f_37 = "0827_LIVERY";
						uParam0->f_21 = -1;
						func_189(uParam0, 2);
						return sParam3;
					default:
						break;
				}
				func_242();
			}
		}
	}
	return "";
}

char* func_422(char[4] cParam0, char[4] cParam1, char[4] cParam2)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_423(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_424(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_426(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_427(int iParam0)
{
	if (func_426(iParam0, 1))
	{
		func_567(1);
	}
}

int func_428(var uParam0)
{
	int iVar0;

	iVar0 = 5;
	if (func_405(76, iVar0, 2, 1))
	{
		StringCopy(&(uParam0->f_15), "SCVT_1057A", 24);
		StringCopy(&(uParam0->f_18), "SCVT_1057B", 24);
		uParam0->f_7 = "SALOON_1057";
		return 1;
	}
	if (func_413(5) && func_553(5))
	{
		if (func_405(76, iVar0, 4, 1))
		{
			StringCopy(&(uParam0->f_15), "SCVTF_1056A", 24);
			StringCopy(&(uParam0->f_18), "SCVTF_1056B", 24);
			uParam0->f_7 = "SALOON_1056";
			return 1;
		}
	}
	if (func_413(6))
	{
		if (func_405(76, iVar0, 8, 1))
		{
			StringCopy(&(uParam0->f_15), "SCVT_0976A", 24);
			StringCopy(&(uParam0->f_18), "SCVT_0976B", 24);
			uParam0->f_7 = "SALOON_0976";
			return 1;
		}
	}
	if (func_405(76, iVar0, 32, 1))
	{
		StringCopy(&(uParam0->f_15), "SCVT_0971A", 24);
		StringCopy(&(uParam0->f_18), "SCVT_0971B", 24);
		uParam0->f_7 = "SALOON_0971";
		return 1;
	}
	if (func_405(76, iVar0, 64, 1))
	{
		StringCopy(&(uParam0->f_15), "SCVT_0975A", 24);
		StringCopy(&(uParam0->f_18), "SCVT_0975B", 24);
		uParam0->f_7 = "SALOON_0975";
		return 1;
	}
	return 0;
}

int func_429(var uParam0, int iParam1)
{
	if (iParam1 == joaat("A_M_M_HTLROUGHTRAVELLERS_01") || iParam1 == joaat("G_M_M_UNICRIMINALS_01"))
	{
		uParam0->f_3 = iParam1;
		return 1;
	}
	return 0;
}

void func_430(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_431(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] - (Global_24887[iParam0 /*2*/] && iParam1));
}

bool func_432(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	if (!func_385(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_433(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (func_43(-1741667789))
				{
					func_121(-1741667789);
				}
			}
			else if (!func_43(-1741667789))
			{
				func_123(-1741667789);
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	GRAPHICS::_0xBFCB17895BB99E4E(iVar1, bParam1);
	if (GRAPHICS::_0x113857D66A9CABE6(iVar1))
	{
	}
	GRAPHICS::_0x67B0778C62E74423(!bParam1);
	GRAPHICS::_0x6C03118E9E5C1A14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (func_43(-1799960545))
			{
				func_121(-1799960545);
			}
		}
		else if (!func_43(-1799960545))
		{
			func_123(-1799960545);
		}
	}
}

bool func_434(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

char* func_435(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

int func_436(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_568(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_437(int iParam0, bool bParam1)
{
	if (!func_439(iParam0))
	{
		return;
	}
	if (!func_221(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_569(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_569(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_570(iParam0), func_524(iParam0), func_571(iParam0), func_569(iParam0), Global_36);
		}
	}
	func_572(iParam0, 1);
	bParam1 = bParam1;
}

void func_438(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_450(Global_1898330[iParam0]);
		func_573(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_439(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_440(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_441(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_442(int iParam0, int iParam1)
{
	func_506(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_443(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_444(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_183(iParam0))
	{
		return;
	}
	if (!func_385(iParam0, 1))
	{
		return;
	}
	if (!func_385(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_443(iParam0)) && func_574(iParam0))
	{
		return;
	}
	func_431(iParam0, 1);
	func_548(iParam0);
	if (func_507(func_323(iParam0)))
	{
		iVar0 = func_96(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_0x631CD2D77FDC0316(iVar0);
		}
		iVar1 = PERSCHAR::_0x31C70A716CAE1FEE(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
		}
		func_431(iParam0, 16);
	}
	if (func_385(iParam0, 128) && !bParam3)
	{
		func_386(iParam0, 0);
	}
}

void func_445(int iParam0, bool bParam1)
{
	if (!func_248(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_285(iParam0, 1024))
		{
			func_250(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_285(iParam0, 1024))
	{
		func_249(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_575(iParam0);
}

void func_446(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_447(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_283(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
}

int func_448()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_449(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5)) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15));
}

int func_450(int iParam0)
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

int func_451(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_576(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_448())
	{
		return -1;
	}
	iVar0 = func_449(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_577(iVar1, 0);
	func_578(iVar1, 0);
	func_579(iVar1, 0);
	func_580(iVar1, 0);
	func_581(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_582(iVar1, iParam4);
	}
	return iVar1;
}

bool func_452(int iParam0, int iParam1)
{
	return func_293(Global_1914319.f_3[iParam0 /*446*/].f_6, iParam1);
}

int func_453(int iParam0)
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

bool func_454(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 && iParam1) != 0;
}

bool func_455(int iParam0)
{
	if (func_318())
	{
		if (Global_1914319.f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_456(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_457(int iParam0, bool bParam1)
{
	switch (func_391(iParam0))
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

int func_458(bool bParam0, bool bParam1, bool bParam2)
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

bool func_459(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_460(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

bool func_461()
{
	if (func_20() == -1)
	{
		if (func_136() || func_583())
		{
			return true;
		}
	}
	else if (func_584(1, 255))
	{
		return true;
	}
	return false;
}

float func_462(bool bParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), vParam1, bParam4);
}

bool func_463(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_MATCHING_ENTITIES(false, iVar1, 1, 2, joaat("CS_GRIZZLEDJON"), 0);
	if (iVar0 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar1) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return false;
	}
	*bParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar1)));
	if (!ENTITY::IS_ENTITY_DEAD(*bParam0) && PED::IS_PED_HUMAN(*bParam0))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return true;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

bool func_464(int iParam0)
{
	return AUDIO::_0xA2CAC9DEF0195E6F(iParam0);
}

int func_465(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	if (iVar0 == iParam2)
	{
		if (func_585())
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
			iVar0 = func_551(func_585(), iParam0, (iParam1 - 1));
		}
	}
	return iVar0;
}

void func_466(var uParam0, bool bParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		return;
	}
	if (func_586(uParam0, bParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(bParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(bParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(bParam1, bParam3);
			}
		}
	}
}

Vector3 func_467()
{
	return 0f, 0f, 0f;
}

bool func_468(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7, int iParam8)
{
	bool bVar0;
	bool bVar1;

	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (func_587(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		bVar0 = (*uParam0)[0 /*4*/];
		bVar1 = (*uParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(bVar0) && !func_311(bVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(bVar1) && !func_311(bVar1, 0)))
		{
			if (!func_164(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(bVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(bVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::_SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(bVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(bVar0, Global_35, 4000, -1f, -1f, -1f);
			}
		}
		return true;
	}
	return false;
}

void func_469(var uParam0)
{
	func_478(&(uParam0->f_12));
}

bool func_470(int iParam0, int iParam1)
{
	return func_293(Global_1935369.f_5[iParam0 /*11*/].f_7, iParam1);
}

bool func_471(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (func_20() != -1)
	{
		return false;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	bVar4 = true;
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		bVar4 = false;
	}
	iVar0 = ENTITY::_0x59B57C4B06531E1E(func_588(PLAYER::PLAYER_ID()), 2.5f, iVar3, 1);
	if (iVar0 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar3) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar3);
		bVar4 = false;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3));
			bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			if (((!ENTITY::IS_ENTITY_DEAD(bVar1) && PED::IS_PED_HUMAN(bVar1)) && PED::IS_PED_MALE(bVar1)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 0))
			{
				Stack.Push(uParam0);
				Stack.Push(ENTITY::GET_ENTITY_MODEL(iVar2));
				Call_Loc(uParam0->f_32);
				if (StackVal)
				{
					if (!PED::IS_PED_A_PLAYER(bVar1))
					{
						if (TASK::IS_PED_ACTIVE_IN_SCENARIO(bVar1, 0) && !((TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING") || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS")) || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(bVar1) == joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_EATING_KNIFE_FORK")))
						{
							if (uParam0->f_1 != bVar1)
							{
								uParam0->f_1 = bVar1;
								uParam0->f_2 = iVar2;
								ITEMSET::DESTROY_ITEMSET(iVar3);
								return true;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
	uParam0->f_10 = 1;
	return false;
}

int func_472()
{
	switch (func_212())
	{
		case 76:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 92:
			return joaat("A_M_M_HTLROUGHTRAVELLERS_01");
		case 5:
			if (func_413(2))
			{
				if (!func_552(5, 5, 2))
				{
					return joaat("A_M_M_SDFANCYTRAVELLERS_01");
				}
				if (!func_552(5, 5, 4))
				{
					return joaat("A_M_M_RANCHER_01");
				}
				return joaat("A_M_O_SDUPPERCLASS_01");
			}
			else
			{
				if (!func_552(5, 5, 16))
				{
					return joaat("A_M_M_LOWERSDTOWNFOLK_02");
				}
				if (!func_552(5, 5, 32))
				{
					return joaat("A_M_M_SDSLUMS_02");
				}
				return joaat("G_M_M_UNICRIMINALS_02");
			}
			break;
		case 120:
			return joaat("A_M_M_ARMTOWNFOLK_01");
		case 115:
			if (!func_552(115, 5, 2))
			{
				return joaat("A_M_M_TUMTOWNFOLK_02");
			}
			return joaat("A_M_M_TUMTOWNFOLK_01");
		case 38:
			if (!func_552(38, 5, 2) && func_255(9))
			{
				return joaat("A_M_M_BIVROUGHTRAVELLERS_01");
			}
			if (!func_552(38, 5, 16))
			{
				return joaat("A_M_M_BLWFOREMAN_01");
			}
			return joaat("A_M_M_BLWTOWNFOLK_01");
		case 105:
			if (!func_552(105, 5, 4))
			{
				return joaat("A_M_M_RANCHER_01");
			}
			return joaat("G_M_M_UNIGRAYS_01");
	}
	return 0;
}

bool func_473(bool bParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	bool bVar0;

	bVar0 = PED::CREATE_PED(bParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return false;
	}
	func_589(bVar0, bParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return bVar0;
}

bool func_474(bool bParam0)
{
	if (Global_1914319.f_17371)
	{
		return true;
	}
	if (func_590(Global_35, 0))
	{
		return true;
	}
	if (func_314())
	{
		return true;
	}
	if (func_591(Global_35, bParam0, 1, 1) > 5f)
	{
		return true;
	}
	return false;
}

bool func_475()
{
	int iVar0;
	int iVar1;

	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		iVar0 = joaat("WORLD_HUMAN_BARCUSTOMER");
		iVar1 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_476(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || func_311(bParam0, 0))
	{
		return false;
	}
	if (func_592(bParam0))
	{
		func_478(&uLocal_50);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_315(&uLocal_50))
	{
		if (func_479(&uLocal_50) < 2f)
		{
			return false;
		}
	}
	else
	{
		func_399(&uLocal_50, 0);
		return false;
	}
	return true;
}

bool func_477(var uParam0, vector3 vParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vParam1))
	{
		func_466(&uLocal_53, uParam0->f_1, uParam0->f_7, 0);
		if (func_593(&uLocal_53, vParam1, uParam0->f_1, Global_35, 1077936128 /* Float: 3f */))
		{
			return true;
		}
	}
	return false;
}

void func_478(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_479(var uParam0)
{
	if (!func_315(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_594(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_595() - uParam0->f_1);
}

void func_480(int iParam0, bool bParam1, int iParam2)
{
	AUDIO::_0x36559148B78853B3(iParam0, bParam1, iParam2);
}

Vector3 func_481()
{
	switch (func_212())
	{
		case 76:
			if (func_561(2))
			{
				return -301.87f, 796.88f, 117.96f;
			}
			return -246.61f, 771.52f, 117.17f;
		case 92:
			return 3000.03f, 604.51f, 40.59f;
		case 5:
			if (func_561(2))
			{
				return 2635.1f, -1228.48f, 52.38f;
			}
			return 2803.22f, -1180.84f, 46.43f;
		case 120:
			return -3697.52f, -2589.47f, -11.29f;
		case 115:
			return -5523.76f, -2904.8f, -3.6f;
		case 38:
			return -816.94f, -1312.28f, 42.7f;
		case 105:
			return 1342.52f, -1371.6f, 83.3f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_482(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
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

void func_483(var uParam0)
{
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = VOLUME::_CREATE_VOLUME_BOX(-304.5192f, 801.1588f, 119.0438f, 0f, 0f, 7.519171f, 3.653174f, 4.387049f, 2.46598f);
	}
	uParam0->f_1 = 1;
}

bool func_484(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar2))
	{
		return false;
	}
	iVar0 = ENTITY::GET_MATCHING_ENTITIES(uParam0->f_2, iVar2, 1, 1, joaat("A_F_M_VALPROSTITUTE_01"), 0);
	if (iVar0 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar2);
		return false;
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar2) <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar2);
		return false;
	}
	iVar3 = 0;
	while (iVar3 < ITEMSET::GET_ITEMSET_SIZE(iVar2))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar2)));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_HUMAN(iVar1))
		{
			*uParam0 = iVar1;
			ITEMSET::DESTROY_ITEMSET(iVar2);
			return true;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return true;
}

bool func_485(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_596(iParam0, &Var0);
}

float func_486(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_597(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_487(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_183(*uParam0) && !func_259(*uParam0, 0))
	{
		return false;
	}
	if (func_269(*uParam0, 0))
	{
		return false;
	}
	bVar0 = func_268(*uParam0);
	iVar1 = func_488();
	if (func_248(iVar1))
	{
		if (func_598(iVar1))
		{
			func_599(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_566(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_251(iVar1);
		iVar3 = func_600(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_599(uParam0);
			return uParam0->f_30;
		}
		if (func_601(iVar2))
		{
			return false;
		}
	}
	if ((Global_1914319.f_17371 || func_602(func_268(*uParam0), 1, 1, 1, 0)) || PED::IS_PED_HOGTIED(func_268(*uParam0)))
	{
		func_599(uParam0);
		return uParam0->f_30;
	}
	if ((((func_256(PLAYER::PLAYER_ID(), 1, 0, 1) || func_603()) || LAW::_0xF46108C50A22B029()) || LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_1914319.f_3[uParam0->f_24 /*446*/].f_411)
	{
		return false;
	}
	if (func_590(Global_35, 0))
	{
		func_599(uParam0);
		return uParam0->f_30;
	}
	if (func_314())
	{
		if (func_604(101))
		{
			return false;
		}
	}
	if (func_334(178, 1, 1))
	{
		return false;
	}
	if (!func_476(bVar0, func_400(uParam0, 2048)))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_400(uParam0, 2048) && !func_400(uParam0, 32768))
		{
			if (!func_315(&(uParam0->f_34)))
			{
				func_399(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_400(uParam0, 1024))
			{
				if (func_479(&(uParam0->f_34)) < 5f)
				{
					return false;
				}
			}
			else if (func_479(&(uParam0->f_34)) < 25f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_488()
{
	if (func_318())
	{
		return Global_1914319.f_16855.f_1;
	}
	return -1;
}

bool func_489(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_285(iParam0, 1073741824 /* Float: 2f */);
}

void func_490(int iParam0)
{
	func_249(iParam0, 1073741824 /* Float: 2f */);
}

void func_491(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			uParam0->f_28 = 0;
		}
	}
	if (uParam0->f_2)
	{
		if (func_183(*uParam0))
		{
			iVar0 = func_268(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_183(uParam0->f_3[iVar1 /*3*/]) && uParam0->f_3[iVar1 /*3*/].f_2)
			{
				iVar2 = func_268(uParam0->f_3[iVar1 /*3*/]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar2, false);
					uParam0->f_3[iVar1 /*3*/].f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

bool func_492(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (func_400(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			bVar1 = func_268(uParam0->f_3[iVar0 /*3*/]);
			if (func_288(bVar1, 0) && func_591(bVar1, bParam1, 1, 1) <= 4f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_400(uParam0, 512) && !func_400(uParam0, 256))
	{
		return true;
	}
	if (func_400(uParam0, 512))
	{
		if (func_408(uParam0))
		{
			return true;
		}
	}
	if (func_400(uParam0, 256))
	{
		if (func_564(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_493()
{
	if (func_53(5))
	{
		func_605(2);
		func_605(4);
	}
	if ((((func_53(6) || func_53(14)) || func_53(26)) || func_53(9)) || func_53(21))
	{
		func_605(4);
	}
	if (((func_555(26) || func_555(27)) || func_555(28)) || func_555(29))
	{
		func_605(4);
	}
	if (((func_108(3, 61) || func_108(3, 29)) || func_108(3, 73)) || func_108(3, 43))
	{
		func_605(4);
	}
	if (func_314())
	{
		if (func_604(101) || func_604(79))
		{
			func_605(4);
		}
		if (((((func_604(88) || func_604(89)) || func_604(108)) || func_604(98)) || func_604(106)) || func_604(110))
		{
			func_605(8);
		}
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		func_605(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		func_605(4);
	}
}

var func_494(var uParam0)
{
	return uParam0;
}

void func_495(int iParam0)
{
	func_250(iParam0, 1073741824 /* Float: 2f */);
}

void func_496(var uParam0)
{
	int iVar0;
	bool bVar1;

	func_399(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_467() };
	uParam0->f_21 = -1;
	if (func_400(uParam0, 16384))
	{
		func_415(uParam0, 16384);
	}
	func_415(uParam0, 32768);
	func_415(uParam0, 1024);
	func_478(&uLocal_50);
	if (func_400(uParam0, 4096))
	{
		iVar0 = func_230(func_212(), uParam0->f_24);
		bVar1 = func_268(*uParam0);
		if (func_566(iVar0) && func_476(bVar1, 1))
		{
			func_419(iVar0, 0);
			func_415(uParam0, 8192);
			func_415(uParam0, 4096);
		}
	}
}

bool func_497(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

bool func_498(int iParam0)
{
	if (iParam0 != 0)
	{
		return true;
	}
	return false;
}

bool func_499(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_497(iParam0))
	{
		return false;
	}
	func_606(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1935183.f_73[iParam0 /*7*/][iVar0], iVar1);
}

bool func_500(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_501(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_607())
	{
		return false;
	}
	if (func_314())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL(func_608(iParam0)))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_256(PLAYER::PLAYER_ID(), 0, 0, 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415402, false))
	{
		return false;
	}
	return true;
}

int func_502(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 1;
			break;
		case 6:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 32;
			break;
		case 7:
			iVar0 = 16;
			break;
		case 8:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_503(int iParam0, int iParam1)
{
	SCRIPTS::REQUEST_SCRIPT(func_608(iParam0));
	if (SCRIPTS::HAS_SCRIPT_LOADED(func_608(iParam0)))
	{
		Global_1415402 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_608(iParam0), &iParam1, 1, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_608(iParam0));
	}
}

bool func_504(int iParam0)
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

char* func_505(int iParam0, int iParam1)
{
	if (Global_40.f_9829[iParam0 /*4*/].f_1 != 0)
	{
		switch (Global_40.f_9829[iParam0 /*4*/])
		{
			case 76:
				return "prisoner_val_1";
			case 105:
				return "prisoner_rhd_1";
			case 5:
				return "prisoner_std_1";
			case 26:
				return "prisoner_str_1";
			case 38:
				if (iParam1 == 0)
				{
					return "prisoner_blw_1";
				}
				break;
			case 115:
				return "prisoner_twd_1";
		}
	}
	return "prisoner";
}

void func_506(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_507(int iParam0)
{
	return iParam0 != 0;
}

bool func_508(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_96(iParam0)))
	{
		PERSCHAR::_0x49A8C2CD97815215(func_96(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_0x0CADC3A977997472(func_96(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

int func_509(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

int func_510(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar1 = func_609(iVar0);
	if (iVar1 == -1)
	{
		return 0;
	}
	if (func_610(iParam0))
	{
		return 1;
	}
	func_611(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::_DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	func_612(iVar0);
	iVar2 = func_224(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_613(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		func_614(iVar2, 0);
		return 1;
	}
	return 0;
}

void func_511(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_434(iParam0))
	{
		return;
	}
	if (func_439(Global_1392915[iParam0 /*12*/].f_4))
	{
		func_615(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_216(iVar0, -1);
}

void func_512(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_616(iVar0))
	{
		return;
	}
	if (func_617(uParam0->f_34[iVar0]))
	{
		func_618(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

void func_513(int iParam0)
{
	func_619(&(Global_1392915[iParam0 /*12*/]));
	func_620(&(Global_1392915.f_121[iParam0 /*20*/]));
}

int func_514(int iParam0)
{
	if (!func_459(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

bool func_515(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_516(int iParam0, int iParam1)
{
	return (func_515(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 && iParam1) != 0);
}

bool func_517(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_518(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_595() - fParam1);
	func_621(uParam0, 1);
	func_622(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_623(iParam0);
	if (iVar0 > 0)
	{
		iVar3 = -1;
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = func_624(iParam0, iVar1);
			if (func_625(iVar2, iVar3))
			{
				iVar3 = iVar2;
			}
			iVar1++;
		}
		return iVar3;
	}
	return -1;
}

void func_520(int iParam0, bool bParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_369(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750.f_16071 != -1 && !bParam6)
	{
		return;
	}
	func_145();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750.f_16103 = { vParam2 };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = iParam5;
	Global_1327479.f_10 = func_626(iParam0, vParam2);
	func_370(0);
	func_627(0, 0, 1);
	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		func_628(8);
		func_629(Global_36, 1137180672 /* Float: 400f */);
	}
	if (bParam7)
	{
		Global_1310750.f_16076 = 1;
	}
}

int func_521(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_522(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 1048576;
	if (bParam4)
	{
		iVar0 |= 131072;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_523()
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

int func_524(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_630(func_450(iParam0));
}

bool func_525(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_526(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_597(vVar0, vParam1);
}

bool func_527(var uParam0, int iParam1)
{
	return func_293(uParam0->f_16, iParam1);
}

char* func_528(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "END_SHIFT";
		case 4:
			return "EVERYBODY_OUT";
		case 8:
			return "FAREWELL_NO_SALE";
		case 64:
			return "WELCOME";
		case 128:
			return "WELCOME_SICK";
		case 256:
			return "WELCOME_MASK";
		case 512:
			return "WELCOME_MASK_ESCALATED";
		case 1024:
			return "WELCOME_WANTED";
		case 2048:
			return "NO_FIGHTING_HERE";
		case 4096:
			return "PUT_WEAPON_AWAY";
		case 8192:
			return "MISBEHAVING_LOW";
		case 16384:
			return "MISBEHAVING_MED";
		case 32768:
			return "MISBEHAVING_HIGH";
		case 65536:
			return "UNAUTHORIZED_AREA";
		case 16:
			return "HANGING_AROUND_NO_PURCHASE";
		case 131072:
			return "LAW_THREAT";
		case 524288:
			return "GET_OUT_SHOP";
		case 1048576:
			return "LOCKDOWN_BANK";
		case 2097152:
			return "GET_IN_BACKROOM";
		default:
			break;
	}
	return "";
	return "";
}

bool func_529(var uParam0, char* sParam1)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sVar0 = func_631(uParam0->f_8);
		if (func_485(uParam0->f_4, sParam1, joaat("SPEECH_PARAMS_FORCE_NORMAL"), 0, 1, sVar0, 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_530(var uParam0, int iParam1)
{
	func_253(&(uParam0->f_16), iParam1);
}

int func_531(int iParam0)
{
	int iVar0;

	iVar0 = func_633(func_632(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946054.f_1497.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_532(var uParam0)
{
	if (func_533(81053684, uParam0))
	{
		return true;
	}
	if (func_533(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_533(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_633(func_632(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_634(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

bool func_534(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || func_311(bParam0, 0))
	{
		return true;
	}
	return AUDIO::IS_ANY_SPEECH_PLAYING(bParam0);
}

bool func_535()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_536()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

char* func_537(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_538(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_635(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_540(int iParam0)
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

char* func_541(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_542(int iParam0)
{
	return (Global_1310750.f_16035 && iParam0) != 0;
}

bool func_543(int iParam0)
{
	return func_372(iParam0, Global_1310750.f_16072 | 64);
}

void func_544(int iParam0)
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

void func_545(bool bParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(bParam0))
	{
		VOLUME::_0x6D5F9E69BA1BE783(bParam0);
	}
}

bool func_546()
{
	return true;
}

void func_547(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] = (Global_24887[iParam0 /*2*/] || iParam1);
}

void func_548(int iParam0)
{
	int iVar0;

	if (!func_183(iParam0))
	{
		return;
	}
	iVar0 = func_268(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

void func_549(int iParam0, bool bParam1)
{
	if (func_92(iParam0))
	{
		if (bParam1)
		{
			if (!func_93(iParam0))
			{
				func_60(iParam0, 1, 0f, 0, 0, 1f, 0, 0);
			}
		}
		else if (func_93(iParam0))
		{
			func_636(iParam0, 1);
		}
	}
}

int func_550(int iParam0, int iParam1)
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

int func_551(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_552(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_286(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_293(Global_23118.f_1651[iVar1], iParam2);
}

bool func_553(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_453(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_53(iParam0) && func_258(iParam0))
	{
		if (func_409() <= iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_554(int iParam0)
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

bool func_555(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_456(iParam0))
	{
		return false;
	}
	return func_162(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_556(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] && iParam1) != 0;
}

bool func_557(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 9)
	{
		return false;
	}
	return true;
}

int func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 38;
		case 5:
			return 76;
		case 6:
			return 76;
		case 3:
			return 105;
		case 2:
			return 5;
		case 1:
			return 5;
		case 8:
			return 92;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_560(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_561(int iParam0)
{
	if (!func_560(iParam0))
	{
		return false;
	}
	return Global_1935369.f_5[iParam0 /*11*/];
}

int func_562(int iParam0)
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

int func_563(int iParam0, int iParam1)
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

bool func_564(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_38))
	{
		if (func_295(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_39))
	{
		if (func_295(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

int func_565(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_637(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

bool func_566(int iParam0)
{
	return func_285(iParam0, 67108864);
}

void func_567(int iParam0)
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

int func_568(int iParam0)
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

int func_569(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_570(int iParam0)
{
	if (!func_439(iParam0))
	{
		return 0;
	}
	return func_638(func_450(iParam0));
}

int func_571(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_639(func_450(iParam0));
}

void func_572(int iParam0, int iParam1)
{
	if (!func_439(iParam0))
	{
		return;
	}
	func_577(iParam0, iParam1);
}

void func_573(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_638(iParam0);
	*uParam1 = func_630(iParam0);
	*uParam2 = func_639(iParam0);
}

bool func_574(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_575(int iParam0)
{
	func_640(func_251(iParam0));
}

bool func_576(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_577(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_641(iParam0);
	}
	else
	{
		func_642(iParam0, iParam1);
	}
	func_643();
}

void func_578(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_579(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_580(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_581(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_582(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_583()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return true;
	}
	return false;
}

bool func_584(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_644(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_645())
	{
		return func_644(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_644(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_585()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
	{
		return true;
	}
	return false;
}

bool func_586(var uParam0, bool bParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = bParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = bParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

bool func_587(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_646(vParam1, uParam0);
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

Vector3 func_588(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_589(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_647(bParam1))
		{
			func_648(bParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_649(bParam0, 0, 1);
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
			func_650(bParam0, 0);
			bVar0 = true;
		}
		func_651(bParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, false);
	}
}

bool func_590(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_591(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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

bool func_592(bool bParam0)
{
	if (((func_464(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(bParam0))
	{
		return true;
	}
	return false;
}

bool func_593(var uParam0, vector3 vParam1, bool bParam4, bool bParam5, float fParam6)
{
	if (AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		return true;
	}
	else if (func_587(uParam0, vParam1, 0, -1, 0, 0))
	{
		TASK::_0xE7FA07624574B79A(bParam4, bParam5, 1, 1, fParam6, 1, false, 0, 0);
		if (bParam5 != Global_35)
		{
			TASK::_0xE7FA07624574B79A(bParam5, bParam4, 1, 1, fParam6, 1, false, 0, 0);
		}
		return true;
	}
	return false;
}

bool func_594(var uParam0)
{
	return func_517(*uParam0, 2);
}

float func_595()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_596(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_597(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_598(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return func_293(Global_1914319.f_18594[iParam0], 2);
}

void func_599(var uParam0)
{
	int iVar0;

	iVar0 = func_488();
	if (!func_248(iVar0))
	{
		return;
	}
	if (func_489(iVar0) && func_464(1))
	{
		func_480(1, 0, 1);
	}
	func_189(uParam0, 64);
}

int func_600(int iParam0)
{
	int iVar0;

	if (!func_125(iParam0, &iVar0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Global_1914319.f_18905[iParam0] = PED::_0x7CC2186C32D3540A(iVar0, PLAYER::PLAYER_ID());
		return Global_1914319.f_18905[iParam0];
	}
	return 0;
}

bool func_601(int iParam0)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	return func_454(iParam0, 8388608);
}

bool func_602(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_652(bVar0, 0)))
		{
			if (func_653(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_603()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_654(Global_35))
	{
		return true;
	}
	return false;
}

bool func_604(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

void func_605(int iParam0)
{
	func_253(&iLocal_49, iParam0);
}

int func_606(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_655(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_607()
{
	return Global_1894899 & 2 != 0;
}

int func_608(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = "region_law_town_mob";
			break;
		case 2:
			iVar0 = "region_law_patrol_creator";
			break;
		case 3:
			iVar0 = "region_law_roadblock_creator";
			break;
		case 4:
			iVar0 = "region_law_w_eliz_pinks";
			break;
		case 6:
			iVar0 = "region_law_bloodhound";
			break;
		case 7:
			iVar0 = "region_law_VAL_belltower_sniper";
			break;
		case 8:
			iVar0 = "region_law_RHO_law_swarm";
			break;
		case 9:
			iVar0 = "region_law_guama_fussar";
			break;
	}
	return iVar0;
}

int func_609(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_610(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_214(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_609(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

void func_611(int iParam0)
{
	int iVar0;

	if (func_20() != -1)
	{
		return;
	}
	if (!func_656(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

int func_612(int iParam0)
{
	if (func_657(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1744263063);
		func_658(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

void func_613(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> /*48*/ sVar2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_439(iParam0))
	{
		return;
	}
	if (func_222(iParam0))
	{
		func_615(iParam0, 0, 2);
	}
	iVar0 = func_224(iParam0);
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

void func_614(int iParam0, int iParam1)
{
	if (!func_515(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 = (Global_1898346[iParam0 /*6*/].f_1 || iParam1);
}

void func_615(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_439(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_162(iParam0) && !func_222(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_569(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_162(iParam0))
	{
		iParam2 = -1;
	}
	if (func_436(iParam0) == 3 || (func_436(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_569(iParam0))))
	{
		func_659(func_570(iParam0), func_569(iParam0), iParam2);
		if ((!func_439(Global_1572864.f_8) && !func_334(0, 1, 0)) && !func_111(Global_1935630, 32768))
		{
			iVar0 = func_660(iParam0);
			if (iVar0 != -1)
			{
				func_661(0);
			}
			else if (func_570(iParam0) == 8)
			{
				iVar0 = func_409();
				if (iVar0 != -1)
				{
					func_661(0);
				}
			}
		}
	}
	func_572(iParam0, 0);
	if (func_223(0) == iParam0)
	{
		func_662(1);
		func_663(0);
		func_664(1);
	}
	func_665(iParam0, 1);
	func_666(iParam0);
}

bool func_616(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 32)
	{
		return false;
	}
	return true;
}

bool func_617(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

void func_618(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_667(*uParam0, -1);
		func_668(*uParam0, 0);
		func_669(*uParam0, 0);
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

void func_619(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_11 = -1;
}

void func_620(var uParam0)
{
	if (func_657(uParam0->f_3))
	{
		func_658(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

void func_621(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_622(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 6:
			return 1;
		case 20:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 84;
				default:
					break;
			}
			break;
		case 6:
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					return 84;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_625(int iParam0, int iParam1)
{
	if (!func_369(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40)))
	{
		return false;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1310750[iParam0 /*111*/].f_40))) > 0)
	{
		return false;
	}
	if (func_670(iParam0, 2097152))
	{
		return false;
	}
	if (!func_671(iParam0))
	{
		return false;
	}
	if (func_604(iParam0))
	{
		return false;
	}
	if (func_672(iParam0, 1) && !func_673(iParam0))
	{
		return false;
	}
	if (func_369(iParam1))
	{
		func_674(iParam0, 1);
		if (Global_1310750[iParam0 /*111*/].f_54 < Global_1310750[iParam1 /*111*/].f_54)
		{
			return false;
		}
	}
	return true;
}

int func_626(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_675(iParam0))
	{
		vVar1 = { func_676(iParam0, iVar0) };
		if (func_677(vVar1, vParam1, 1056964608 /* Float: 0.5f */, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_627(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_678(iParam0, iParam1, bParam2);
}

void func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1f, 0, iParam0, 16384))
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1911670[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

void func_629(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16078)
	{
		iVar1 = Global_1310750.f_16078[iVar0];
		if (VOLUME::_0xF6A8A652A6B186CD(iVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(iVar1), vParam0) < fParam3)
			{
				VOLUME::_0xFDFECC6EE4491E11(iVar1);
				Global_1310750.f_16078[iVar0] = 0;
				Global_17504.f_2084[iVar0 /*5*/] = { 0f, 0f, 0f };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = -1;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = 0;
			}
		}
		iVar0++;
	}
}

int func_630(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

char* func_631(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_632(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_679(iVar0);
}

int func_633(int iParam0, int iParam1)
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

int func_634(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_635(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_681(iParam3, &vVar0, &Var3, &uVar6);
	if (func_682(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

void func_636(int iParam0, int iParam1)
{
	func_60(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_637(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_683(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_638(int iParam0)
{
	return iParam0 & 31;
}

int func_639(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

void func_640(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

int func_641(int iParam0)
{
	int iVar0;

	iVar0 = func_568(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_684(iVar0);
}

int func_642(int iParam0, int iParam1)
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
			func_685(iVar2);
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

void func_643()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_644(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_645()
{
	return Global_1109000.f_245;
}

void func_646(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_647(bool bParam0)
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

void func_648(bool bParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_686(bParam0, iParam1))
		{
			if (func_687(bParam0, iParam1))
			{
				if (func_688(bParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(bParam0, "metaped_outfit_request"), bParam0, true, false);
					func_689(bParam0);
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

void func_649(bool bParam0, int iParam1, bool bParam2)
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

void func_650(bool bParam0, bool bParam1)
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

void func_651(bool bParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(bParam0, 41611, 1f);
	}
}

var func_652(bool bParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(bParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_653(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_654(int iParam0)
{
	return (func_690(iParam0, 4) || func_690(iParam0, 5));
}

int func_655(int iParam0, int iParam1)
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

bool func_656(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = Global_1899528.f_11[iParam0];
	return *iParam1 != -1;
}

bool func_657(int iParam0)
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

void func_658(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_657(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_691(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_692(iVar0);
	*uParam0 = 0;
}

void func_659(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_660(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_570(iParam0))
	{
		case 1:
			iVar0 = func_524(iParam0);
			return func_453(iVar0);
		case 8:
			iVar1 = func_524(iParam0);
			if (func_525(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_554(iVar1);
			}
			break;
	}
	return -1;
}

void func_661(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_693(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_694();
		Global_1898077.f_9 = func_695(Global_1894899.f_2);
		func_696(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_662(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_697(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_366(&Global_1935630, 4194304);
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

int func_663(bool bParam0)
{
	if (!bParam0 && func_43(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_664(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_665(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_223(0) != iParam0)
	{
		return;
	}
	if (func_698(iParam0))
	{
		if (bParam1)
		{
			func_699(-525676072);
		}
		else
		{
			func_700(-525676072);
		}
	}
}

int func_666(int iParam0)
{
	return func_702(func_701(iParam0));
}

void func_667(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_668(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_669(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

bool func_670(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_562(iParam1);
	iVar1 = (17 + iVar0);
	return func_703(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[iVar1];
}

bool func_671(int iParam0)
{
	if (func_672(iParam0, 2048))
	{
		return true;
	}
	if (func_672(iParam0, 4096))
	{
		return Global_1327479.f_5 < MISC::GET_GAME_TIMER();
	}
	return Global_1327479.f_4 < MISC::GET_GAME_TIMER();
}

bool func_672(int iParam0, int iParam1)
{
	if (!func_369(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/].f_1 && iParam1) != 0;
}

bool func_673(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = func_140();
	switch (iParam0)
	{
		case 0:
			if (func_704(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return false;
				}
			}
			return true;
		case 2:
			if (func_257(11) && func_140() == 1)
			{
				return false;
			}
			if (func_407() && func_140() == 4)
			{
				return false;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (func_705(2) || func_706(2))
			{
				return false;
			}
			return true;
		case 76:
			if (func_255(19))
			{
				return false;
			}
			else if (!func_707(115, -1, 0))
			{
				return false;
			}
			if (func_255(68) && !func_258(59))
			{
				return false;
			}
			return true;
		case 6:
			if (iVar0 == -1)
			{
				return false;
			}
			if (iVar0 == 8)
			{
				if (func_307(39))
				{
					return false;
				}
			}
			else if (!func_504(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				return false;
			}
			return true;
		case 7:
			if (func_407())
			{
				if (!func_258(7))
				{
					return false;
				}
			}
			else if (func_535())
			{
				if (!func_258(69))
				{
					return false;
				}
			}
			return true;
		case 31:
			if (func_144() || func_708())
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 10:
			if (!func_535() && (func_418(10, 0) == 2 || func_418(10, 0) == 1))
			{
				return false;
			}
			if (func_535() && ((func_418(10, 1) == 2 || func_418(10, 0) == 1) || func_418(10, 1) == 1))
			{
				return false;
			}
			return true;
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				return false;
			}
			if (func_705(2) || func_706(2))
			{
				return false;
			}
			return true;
		case 12:
			if (func_417(12) < 3)
			{
				switch (func_140())
				{
					case 4:
					case 12:
						if (((!func_705(3) && !func_258(75)) && func_565(12, 1) != 2) && func_535())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!func_705(0) && func_565(12, 0) != 1) && !func_255(65)) && func_407())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!func_705(5) && func_565(12, 2) != 3) && func_535())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
				}
			}
			break;
		case 79:
			if (func_417(4) == 0 && func_417(45) == 0)
			{
				return false;
			}
			switch (func_212())
			{
				case 76:
					if ((func_565(45, 0) == 5 || func_565(45, 0) == 6) && func_565(45, 5) == 1)
					{
						if ((!func_535() && func_565(45, 3) == 1) || (func_535() && func_565(45, 3) == 2))
						{
							if (func_709(45, 0) == 3)
							{
								return false;
							}
							else if (func_710(45, 0, 1, 6))
							{
								if (func_711())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 26:
					if (func_565(4, 1) == 1)
					{
						if ((!func_535() && func_565(4, 4) == 1) || (func_535() && func_565(4, 4) == 2))
						{
							if (func_709(4, 1) == 3)
							{
								return false;
							}
							else if (func_710(4, 1, 1, 6))
							{
								if (func_711())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 105:
					if ((func_565(45, 2) == 5 || func_565(45, 2) == 6) && func_565(45, 6) == 1)
					{
						if ((!func_535() && func_565(45, 4) == 1) || (func_535() && func_565(45, 4) == 2))
						{
							if (func_709(45, 2) == 3)
							{
								return false;
							}
							else if (func_710(45, 2, 1, 6))
							{
								if (func_711())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 78:
					if (func_565(4, 0) == 1)
					{
						if ((!func_535() && func_565(4, 3) == 1) || (func_535() && func_565(4, 3) == 2))
						{
							if (func_709(4, 0) == 3)
							{
								return false;
							}
							else if (func_710(4, 0, 1, 6))
							{
								if (func_711())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
			}
			return false;
		case 82:
			if (func_346(0))
			{
				if (func_212() == 5 && func_565(82, 0) == 1)
				{
					return false;
				}
				if (func_212() == 38 && func_565(82, 1) == 1)
				{
					return false;
				}
			}
			return true;
		case 83:
			if (func_712(75) <= 0)
			{
				return false;
			}
			if (func_713())
			{
				return false;
			}
			return true;
		case 84:
			if (func_714(76, 1, 0))
			{
				return false;
			}
			if (func_287(func_10(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return false;
			}
			if (func_715(117, 0) || func_715(118, 0))
			{
				return false;
			}
			if (func_417(84) >= 2)
			{
				return false;
			}
			if (func_418(84, 0) == 2 || func_418(84, 1) == 2)
			{
				return false;
			}
			if (func_418(84, 0) == 3 || func_418(84, 1) == 3)
			{
				return false;
			}
			if (func_565(84, 2) == 1 && func_535())
			{
				return false;
			}
			if (func_407())
			{
				if (!func_258(7))
				{
					return false;
				}
			}
			if (func_307(69))
			{
				return false;
			}
			else if (func_307(9))
			{
				return false;
			}
			else if (func_307(5))
			{
				return false;
			}
			return true;
		case 15:
			if (func_565(15, 0) >= 1)
			{
				return false;
			}
			if (func_709(15, 1) >= 3)
			{
				return false;
			}
			if (func_565(15, 2) >= 1)
			{
				return false;
			}
			return true;
		case 86:
			if (func_212() != 78 && func_258(26))
			{
				return false;
			}
			return true;
		case 87:
			if (func_535())
			{
			}
			else if (func_417(87) >= 2)
			{
				return false;
			}
			return true;
		case 16:
			if (func_417(16) > 0)
			{
				return false;
			}
			if (!func_716(joaat("CONSUMABLE_WHISKEY"), 1, 0))
			{
				return false;
			}
			return true;
		case 90:
			iVar2 = func_212();
			iVar3 = func_717(func_302(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return false;
			}
			if (func_718() == 0)
			{
				return false;
			}
			return true;
		case 89:
			iVar4 = func_212();
			if (func_714(iVar4, 1, 0))
			{
				return false;
			}
			if (func_718() == 0)
			{
				return false;
			}
			if (func_712(101) >= 1)
			{
				return true;
			}
			return false;
		case 88:
			iVar5 = func_212();
			if (func_714(iVar5, 1, 0))
			{
				return false;
			}
			if (iVar5 == 76)
			{
				if (func_307(69))
				{
					return false;
				}
				else if (func_307(9))
				{
					return false;
				}
				else if (func_307(5))
				{
					return false;
				}
				else if (func_715(117, 0))
				{
					return false;
				}
				else if (func_715(118, 0))
				{
					return false;
				}
				if (func_413(5))
				{
					return false;
				}
			}
			iVar6 = func_717(func_302(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return false;
				}
				if (func_413(8))
				{
					return false;
				}
			}
			if (func_718() == 0)
			{
				return false;
			}
			return true;
		case 17:
			if (func_257(56))
			{
				return false;
			}
			if (func_140() == 11 || func_140() == 0)
			{
				if (func_202(3) || func_719(3))
				{
					return false;
				}
			}
			else if (func_202(69) || func_719(69))
			{
				return false;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::IS_PED_CARRYING_SOMETHING(Global_1935630.f_40))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
		case 18:
			if (func_705(2))
			{
				return false;
			}
			return true;
		case 91:
			if (func_712(75) <= 0)
			{
				return false;
			}
			return true;
		case 92:
			switch (func_140())
			{
				case 11:
					if (func_705(2) || func_706(2))
					{
						return false;
					}
					if (func_555(30))
					{
						return false;
					}
					return true;
				case 1:
				case 3:
				case 9:
					if (func_705(0))
					{
						return false;
					}
					return true;
			}
			return true;
		case 20:
			if (func_307(13))
			{
				return false;
			}
			return true;
		case 23:
			if (func_720() == 0)
			{
				return true;
			}
			return false;
		case 94:
			iVar7 = func_212();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (func_705(0))
					{
						return false;
					}
					if (!func_160(76, 2048))
					{
						return false;
					}
					if (func_604(99))
					{
						return false;
					}
					break;
				case 5:
				case 105:
					if (func_604(96))
					{
						return false;
					}
					if (func_604(77))
					{
						return false;
					}
					break;
			}
			return true;
		case 119:
			if (!func_255(152))
			{
				return false;
			}
			if (func_721())
			{
				return false;
			}
			if (func_722(iVar0))
			{
				return true;
			}
			break;
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				if (func_709(27, 0) == 3)
				{
					return false;
				}
				if (func_709(27, 1) == 3)
				{
					return false;
				}
				if (func_709(27, 2) == 3)
				{
					return false;
				}
				if (func_565(27, 0) >= 3)
				{
					return false;
				}
				if (func_565(27, 1) >= 3)
				{
					return false;
				}
				if (func_565(27, 2) >= 3)
				{
					return false;
				}
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
				{
					return false;
				}
				if (func_723(7) < 3)
				{
					return false;
				}
				if (func_140() == 3 || func_140() == 6)
				{
					if (func_258(56) && !func_258(60))
					{
						return false;
					}
				}
				if (func_140() == 11)
				{
					if (func_258(26) && !func_258(28))
					{
						return false;
					}
				}
				return true;
			}
			break;
		case 95:
			if (func_705(2))
			{
				return false;
			}
			return true;
		case 30:
			switch (func_140())
			{
				case 0:
				case 2:
					if (func_719(5) || func_202(5))
					{
						return false;
					}
					if (func_258(44))
					{
						if (!func_258(45) && !func_255(24))
						{
							if (func_704(30, 2) == 0 && func_704(30, 0) == 0)
							{
								return false;
							}
						}
					}
					if (func_108(0, 39))
					{
						return false;
					}
					if (func_724(0))
					{
						return false;
					}
					if (func_119(39))
					{
						return false;
					}
					if (func_725(0, 39, &uVar8))
					{
						return false;
					}
					return true;
			}
			return true;
		case 32:
			if (func_417(34) > 0 && func_417(33) > 0)
			{
				if (func_417(32) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 33:
			if (func_418(33, 0) == 16)
			{
				return false;
			}
			else if (func_140() == 1 && func_462(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200f)
			{
				if (func_715(49, 0))
				{
					return false;
				}
				if (func_715(101, 0))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
			return true;
		case 34:
			if (func_417(33) > 0)
			{
				if (func_417(34) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 37:
			switch (func_726(func_140()))
			{
				case 1:
					if (func_535())
					{
						if (func_565(37, 5) == 1)
						{
							return false;
						}
					}
					if (func_418(37, 0) == 2)
					{
						return false;
					}
					break;
				case 3:
					if (func_535())
					{
						if (func_565(37, 6) == 1)
						{
							return false;
						}
					}
					if (func_418(37, 1) == 2)
					{
						return false;
					}
					break;
			}
			return true;
		case 97:
			if (func_140() == 1 && func_307(11))
			{
				return false;
			}
			if (func_140() == 9 && !func_727(0))
			{
				return false;
			}
			return true;
		case 98:
			if (func_212() == 76 && func_565(98, 1) == 1)
			{
				return false;
			}
			if (func_212() == 92)
			{
				if (func_715(82, 0) || func_715(83, 0))
				{
					return false;
				}
			}
			return true;
		case 39:
			if (func_202(26) || func_719(26))
			{
				return false;
			}
			return true;
		case 28:
			if (func_258(22) && !func_258(27))
			{
				if (func_265(-1063.709f, -520.2658f, 82.0255f, 1) < 110f || func_265(-815.6782f, -520.9415f, 45.4979f, 1) < 110f)
				{
					return false;
				}
			}
			if (func_140() == 0 || func_140() == 11)
			{
				if (Global_1888801[0 /*35*/].f_1 > 0)
				{
					if (Global_1888801[0 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
			}
			if (func_140() == 1)
			{
				if (Global_1888801[17 /*35*/].f_1 > 0)
				{
					if (Global_1888801[17 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
				if (!func_535())
				{
					return false;
				}
			}
			return true;
		case 40:
			if (func_728())
			{
				if (func_729(func_140(), 1, 0) != 0)
				{
					return true;
				}
			}
			break;
		case 42:
			if (func_418(42, 0) == 2 || func_418(42, 1) == 2)
			{
				return false;
			}
			if (func_417(42) >= 2)
			{
				return false;
			}
			return true;
		case 77:
			if (func_604(94))
			{
				return false;
			}
			return true;
		case 96:
			if (func_604(94))
			{
				return false;
			}
			return true;
		case 99:
			if (func_712(99) >= 2)
			{
				return false;
			}
			if (func_604(94))
			{
				return false;
			}
			return true;
		case 100:
			switch (func_140())
			{
				case 1:
					if (func_418(100, 1) != 1 && func_535())
					{
						return true;
					}
					break;
				case 0:
				case 11:
					return false;
			}
			return false;
		case 44:
			if (func_604(57))
			{
				return false;
			}
			switch (func_140())
			{
				case 1:
				case 3:
				case 9:
					if (func_705(0) || func_535())
					{
						return false;
					}
					break;
				case 11:
					if (func_705(2) || func_706(2))
					{
						return false;
					}
					else if (func_265(1624.51f, -1818.45f, 49.6045f, 1) < 225f)
					{
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !func_730(65536, 2))
						{
							return false;
						}
					}
					break;
			}
			return true;
		case 101:
			if (func_705(2))
			{
				return false;
			}
			if (func_731(92, 65536) || func_732(92))
			{
				return true;
			}
			return false;
		case 102:
			switch (func_212())
			{
				case 76:
					if (func_418(102, 1) == 1 && func_418(102, 2) == 1)
					{
						return false;
					}
					break;
				case 26:
					if (func_418(102, 0) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 103:
			if (func_417(103) >= 2)
			{
				return false;
			}
			if (func_212() == 5)
			{
				if (!func_733(6, -1))
				{
					return false;
				}
				if (func_462(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < func_462(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (func_715(77, 0))
					{
						return false;
					}
				}
			}
			else if (func_212() == 92)
			{
				if (func_715(143, 0))
				{
					return false;
				}
			}
			return true;
		case 45:
			if (func_140() == 9)
			{
				if (func_418(45, 0) == 2)
				{
					return false;
				}
			}
			else if (func_140() == 11)
			{
				if (func_535())
				{
					if (func_565(45, 4) == 1)
					{
						return false;
					}
				}
				if (func_418(45, 2) == 2)
				{
					return false;
				}
			}
			return true;
		case 46:
			if (func_417(46) >= 4 || func_565(46, 0) == 1)
			{
				return false;
			}
			else if (func_734() == 1 || (func_734() == 3 && func_607()))
			{
				return true;
			}
			break;
		case 48:
			return true;
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			if (!func_735(2, 0, 0))
			{
				return false;
			}
			if (!func_735(3, 0, 0))
			{
				return false;
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - Global_1357549.f_1484) >= 300000)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 50:
			if (func_736())
			{
				return false;
			}
			if (func_355(func_354(func_140())) > 0)
			{
				return false;
			}
			switch (Global_1393447.f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_TRAIN_HOLDUP")) > 0)
			{
				return false;
			}
			return true;
		case 106:
			if (func_212() == 76)
			{
				if (func_715(26, 0) || func_715(27, 0))
				{
					if (func_715(117, 0) || func_715(118, 0))
					{
						return false;
					}
				}
				if (func_355(1) > 0)
				{
					return false;
				}
				if (func_307(7))
				{
					return false;
				}
				if (func_418(106, 1) != 7)
				{
					return true;
				}
				if (func_418(87, 0) == 3 && func_418(106, 3) != 7)
				{
					return true;
				}
				if (func_418(84, 0) == 3 || func_418(84, 1) == 3)
				{
					if (func_418(106, 4) != 7)
					{
						if (!func_535())
						{
							return true;
						}
					}
				}
			}
			else if (func_212() == 105)
			{
				if (func_355(2) > 0)
				{
					return false;
				}
				if (func_418(87, 0) == 3 && func_418(106, 3) != 7)
				{
					return true;
				}
				else if (func_418(87, 0) != 3)
				{
				}
				else if (func_418(106, 3) == 7)
				{
				}
				if ((func_255(13) && func_418(106, 5) == 3) && func_418(106, 5) != 7)
				{
					if (func_737(106, 5))
					{
						return true;
					}
				}
			}
			else if (func_212() == 5)
			{
				if (func_355(2) > 0)
				{
					return false;
				}
				if (func_255(12))
				{
					if (func_418(106, 6) == 3)
					{
						if (func_418(106, 6) != 7)
						{
							if (func_737(106, 6))
							{
								return true;
							}
						}
					}
				}
				if (func_418(30, 3) == 3 && func_418(106, 7) != 7)
				{
					if (func_737(106, 7))
					{
						return true;
					}
				}
			}
			else if (func_212() == 38)
			{
				if (func_355(3) > 0)
				{
					return false;
				}
				if ((func_255(18) && func_418(106, 0) == 3) && func_418(106, 0) != 7)
				{
					return true;
				}
				if ((func_255(17) && func_418(106, 8) == 3) && func_418(106, 8) != 7)
				{
					return true;
				}
			}
			return false;
		case 107:
			if (((func_715(77, 0) || func_715(106, 0)) || func_257(45)) || func_257(47))
			{
				return false;
			}
			return true;
		case 51:
			if (func_705(2) || func_706(2))
			{
				return false;
			}
			return true;
		case 108:
			if (func_212() == 76)
			{
				if (func_703(108, 2097152) > 0 && (func_705(0) || func_706(0)))
				{
					return false;
				}
				if (func_714(76, 1, 0))
				{
					return false;
				}
				if (func_287(func_10(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
				{
					return false;
				}
			}
			return true;
		case 57:
			if (func_604(44))
			{
				return false;
			}
			if (iVar0 == -1)
			{
				return false;
			}
			if (func_738(iVar0))
			{
				return false;
			}
			if (!func_739(24))
			{
				return false;
			}
			return true;
		case 109:
			switch (func_140())
			{
				case 1:
					if (func_565(109, 0) == 1)
					{
						return false;
					}
					break;
				case 10:
					if (func_565(109, 0) == 1 && func_565(109, 1) == 1)
					{
						return false;
					}
					break;
				case 11:
					if (func_565(109, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 58:
			if ((func_715(119, 0) || func_555(119)) && func_265(-1006.029f, 458.253f, 55.49393f, 1) < 200f)
			{
				return false;
			}
			else if (!func_535() && func_417(58) >= 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 110:
			if (func_715(77, 0))
			{
				return false;
			}
			if (func_257(47))
			{
				return false;
			}
			if (func_202(5))
			{
				return false;
			}
			if (func_714(5, 1, 0))
			{
				return false;
			}
			if (!func_535())
			{
				if (func_258(31))
				{
					return true;
				}
			}
			else if (func_258(73))
			{
				return true;
			}
			return false;
		case 60:
			if (iParam0 == 60)
			{
				switch (func_726(func_140()))
				{
					case 1:
						if (func_565(60, 0) < 2)
						{
							return true;
						}
						break;
					case 0:
						if (func_565(60, 1) < 3)
						{
							return true;
						}
						break;
					case 4:
						if (func_565(60, 2) < 2)
						{
							return true;
						}
						break;
				}
			}
			break;
		case 61:
			if (func_417(46) >= 2 || func_565(46, 0) == 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 59:
			if (!func_741(Global_35, Global_1900383[func_740(7) /*45*/], 0))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 62:
			switch (func_742())
			{
				case 1:
					if (func_565(62, 0) == 1)
					{
						return false;
					}
					break;
				case 0:
				case 2:
					if (func_565(62, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 111:
			switch (func_140())
			{
				case 9:
					if (func_714(76, 1, 0))
					{
						return false;
					}
					else if (func_53(14))
					{
						return false;
					}
					else if (func_258(71) && func_715(10, 0))
					{
						return false;
					}
					return true;
				case 4:
					if (!func_255(9))
					{
						return false;
					}
					if (func_307(72))
					{
						return false;
					}
					if (func_307(70))
					{
						return false;
					}
					if (func_307(75))
					{
						return false;
					}
					if (!func_735(4, 0, 0))
					{
						return false;
					}
					iVar10 = MISC::GET_GAME_TIMER();
					if ((iVar10 - Global_1357549.f_1484) >= 300000)
					{
						return true;
					}
					else
					{
						return false;
					}
					return true;
				default:
					return true;
			}
			break;
		case 112:
			if (func_743(14, 4096))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 67:
			if (func_417(67) >= 2)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 113:
			if (!func_150(func_744()))
			{
				switch (func_212())
				{
					case 105:
						if (func_565(113, 3) != 2 && !Global_1326862.f_611)
						{
							Global_1326862.f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862.f_611 = 0;
							return false;
						}
						break;
					case 38:
						if (func_255(17) && func_565(113, 4) != 3)
						{
							if (!Global_1326862.f_612)
							{
								func_745(113, 4, func_275());
								Global_1326862.f_612 = 1;
							}
							if (Global_1326862.f_612)
							{
								if (func_710(113, 4, 7, 0))
								{
									func_746(113, 4, 3);
									return false;
								}
								else if (!func_732(113))
								{
									if (func_418(106, 8) == 3)
									{
										if (func_418(106, 8) == 7)
										{
											Global_1326862.f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (func_255(18) && func_565(113, 4) != 4)
						{
							if (!Global_1326862.f_613)
							{
								func_745(113, 4, func_275());
								Global_1326862.f_613 = 1;
							}
							if (Global_1326862.f_613)
							{
								if (func_710(113, 4, 7, 0))
								{
									func_746(113, 4, 4);
									return false;
								}
								else if (!func_732(113))
								{
									if (func_418(106, 0) == 3)
									{
										if (func_418(106, 0) == 7)
										{
											Global_1326862.f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 114:
			if (func_747())
			{
				return true;
			}
			return false;
		case 116:
			if (func_342(&uVar1))
			{
				return false;
			}
			if (func_212() == 76)
			{
				if (func_748(76) >= 10)
				{
					if (!Global_1326862.f_614)
					{
						func_749(116, 1, 0, 0, 0, 1, 0, 1);
						func_745(116, 1, func_275());
						Global_1326862.f_614 = 1;
					}
					else if (func_710(116, 1, 8, 0))
					{
						return false;
					}
					else if (!func_732(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_212() == 105)
			{
				if (func_748(105) >= 10)
				{
					if (!Global_1326862.f_615)
					{
						func_749(116, 1, 0, 0, 0, 1, 0, 1);
						func_745(116, 2, func_275());
						Global_1326862.f_615 = 1;
					}
					else if (func_710(116, 2, 8, 0))
					{
						return false;
					}
					else if (!func_732(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_212() == 78)
			{
				if (func_748(78) >= 10)
				{
					if (!Global_1326862.f_616)
					{
						func_749(116, 1, 0, 0, 0, 1, 0, 1);
						func_745(116, 3, func_275());
						Global_1326862.f_616 = 1;
					}
					else if (func_710(116, 3, 8, 0))
					{
						return false;
					}
					else if (!func_732(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
		case 117:
			if (func_712(75) <= 0)
			{
				return false;
			}
			return true;
		case 115:
			if (func_418(115, 0) == 3)
			{
				return false;
			}
			if (func_535())
			{
				if (func_565(115, 4) == 1)
				{
					return false;
				}
			}
			if (func_703(115, 2097152) >= 2)
			{
				return false;
			}
			if (func_418(115, 0) == 2)
			{
				return false;
			}
			return true;
		case 63:
			switch (func_140())
			{
				case 1:
					if (func_535())
					{
						if (func_705(4))
						{
							return false;
						}
					}
					else
					{
						return false;
					}
					break;
			}
			return true;
		case 64:
			if (Global_1430231.f_4)
			{
				return false;
			}
			if (func_258(56) && !func_535())
			{
				return false;
			}
			if ((func_140() == 11 || func_140() == 0) || func_140() == 2)
			{
				if (func_705(2) || func_706(2))
				{
					return false;
				}
			}
			else if (func_140() == 9)
			{
				if (func_705(0) || func_706(0))
				{
					return false;
				}
			}
			iVar11 = func_750(Global_36, 0);
			if (func_751(iVar11))
			{
				if (func_752(iVar11, Global_36) <= 400f)
				{
					return false;
				}
			}
			return true;
		case 65:
			if (func_140() == 11)
			{
				if (func_258(26))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			break;
		case 66:
			if (!func_255(146))
			{
				return false;
			}
			if (func_716(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0))
			{
				return false;
			}
			return true;
		case 105:
			if (func_212() == 38)
			{
				if (func_355(3) > 0)
				{
					return false;
				}
			}
			else if (func_212() == 5)
			{
				if (func_355(2) > 0)
				{
					return false;
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			break;
		case 71:
			if (func_140() != 8)
			{
				if (func_753(71, 2) || func_753(71, 1))
				{
					return false;
				}
			}
			return true;
		case 118:
			if (func_212() == 38)
			{
				if (!func_255(8))
				{
					return false;
				}
			}
			return true;
		case 73:
			if (func_418(73, 0) == 2)
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_674(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0f;
	if (bParam1)
	{
		switch (func_754(iParam0))
		{
			case 1:
				fVar0 = 99999f;
				break;
			case 2:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
				break;
				break;
			case 3:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f);
				break;
			case 4:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f);
				break;
			case 5:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0f);
				break;
			case 6:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 0f);
				break;
		}
	}
	if (func_755(iParam0))
	{
		fVar1 = 1f;
	}
	if (func_756(4))
	{
		if (func_372(iParam0, 16777216))
		{
			fVar0 = (fVar0 + 2000f);
		}
	}
	if (Global_1310750[iParam0 /*111*/].f_38 == 16 || Global_1310750[iParam0 /*111*/].f_38 == 8)
	{
		fVar2 = 1f;
	}
	fVar3 = func_757(iParam0);
	Global_1310750[iParam0 /*111*/].f_54 = ((((((((((Global_1310750[iParam0 /*111*/].f_56 + Global_1310750[iParam0 /*111*/].f_57) + Global_1310750[iParam0 /*111*/].f_58) + Global_1310750[iParam0 /*111*/].f_59) + Global_1310750[iParam0 /*111*/].f_55) + Global_1310750[iParam0 /*111*/].f_60) + Global_1310750[iParam0 /*111*/].f_61) + fVar0) + fVar1) + fVar2) + fVar3);
}

int func_675(int iParam0)
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

Vector3 func_676(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_369(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_675(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_758(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

bool func_677(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_678(int iParam0, int iParam1, bool bParam2)
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

int func_679(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_759(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

bool func_680(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_681(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f };
			*uParam2 = { 150f, 150f, 184f };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f };
			*uParam2 = { 40f, 35f, 70f };
			*uParam3 = 45f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f };
			*uParam2 = { 43f, 197f, 70f };
			*uParam3 = 38f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f };
			*uParam2 = { 30f, 30f, 70f };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f };
			*uParam2 = { 13f, 21f, 47f };
			*uParam3 = 34f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f };
			*uParam2 = { 21f, 21f, 47f };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f };
			*uParam2 = { 40f, 23f, 47f };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f };
			*uParam2 = { 40f, 25f, 47f };
			*uParam3 = 26f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f };
			*uParam2 = { 39f, 54f, 70f };
			*uParam3 = -46f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f };
			*uParam2 = { 104f, 57f, 70f };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f };
			*uParam2 = { 23f, 26f, 70f };
			*uParam3 = 43f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f };
			*uParam2 = { 149f, 65f, 154f };
			*uParam3 = 39f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f };
			*uParam2 = { 52f, 40f, 154f };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f };
			*uParam2 = { 334f, 171f, 277f };
			*uParam3 = -45f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f };
			*uParam2 = { 147f, 194f, 201f };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f };
			*uParam2 = { 86f, 61f, 50f };
			*uParam3 = 11f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f };
			*uParam2 = { 34f, 34f, 100f };
			*uParam3 = -124f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f };
			*uParam2 = { 19f, 18f, 100f };
			*uParam3 = 40f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f };
			*uParam2 = { 98f, 52f, 120f };
			*uParam3 = 51f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f };
			*uParam2 = { 31f, 30f, 40f };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f };
			*uParam2 = { 177f, 126f, 102f };
			*uParam3 = 52f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120f };
			*uParam2 = { 249f, 112f, 120f };
			*uParam3 = -36f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f };
			*uParam2 = { 40f, 40f, 70f };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f };
			*uParam2 = { 56f, 152f, 70f };
			*uParam3 = -36f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f };
			*uParam2 = { 180f, 95f, 100f };
			*uParam3 = 29f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f };
			*uParam2 = { 32f, 49f, 140f };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25f };
			*uParam2 = { 25f, 25f, 45f };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f };
			*uParam2 = { 36f, 30f, 30f };
			*uParam3 = -24f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f };
			*uParam2 = { 35f, 42f, 19f };
			*uParam3 = -4f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f };
			*uParam2 = { 70f, 67f, 65f };
			*uParam3 = -109f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f };
			*uParam2 = { 84f, 69f, 37f };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f };
			*uParam2 = { 196f, 157f, 85f };
			*uParam3 = -18f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f };
			*uParam2 = { 12f, 12f, 70f };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f };
			*uParam2 = { 126f, 86f, 70f };
			*uParam3 = -6f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f };
			*uParam2 = { 22f, 32f, 86f };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f };
			*uParam2 = { 160f, 22f, 100f };
			*uParam3 = 26f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f };
			*uParam2 = { 45f, 46f, 70f };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95f };
			*uParam2 = { 28f, 23f, 100f };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42f };
			*uParam2 = { 21f, 29f, 49f };
			*uParam3 = 52f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168f };
			*uParam2 = { 21f, 29f, 116f };
			*uParam3 = 56f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85f };
			*uParam2 = { 40f, 71f, 116f };
			*uParam3 = 70f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85f };
			*uParam2 = { 15f, 15f, 116f };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71f };
			*uParam2 = { 25f, 25f, 50f };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214f };
			*uParam2 = { 37f, 33f, 68f };
			*uParam3 = 0f;
			break;
	}
}

bool func_682(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> /*16*/ sVar3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_683(int iParam0, int iParam1)
{
	if (!func_369(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_684(int iParam0)
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

int func_685(int iParam0)
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

bool func_686(bool bParam0, int iParam1)
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

bool func_687(bool bParam0, int iParam1)
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

bool func_688(bool bParam0, int iParam1)
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
	if (!func_686(bParam0, iVar0))
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

void func_689(bool bParam0)
{
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(bParam0, "metaped_outfit_request_name");
}

int func_690(int iParam0, int iParam1)
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

int func_691(var uParam0)
{
	return uParam0;
}

void func_692(int iParam0)
{
	if (!func_760(iParam0))
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

void func_693(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_694()
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

int func_695(int iParam0)
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

void func_696(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_697(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_698(int iParam0)
{
	if (!func_439(iParam0))
	{
		return false;
	}
	switch (func_570(iParam0))
	{
		case 1:
			switch (func_524(iParam0))
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
			switch (func_524(iParam0))
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

void func_699(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_761(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_634(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_763(func_762(iParam0), 6);
}

void func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_761(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_634(iVar1) == iParam0)
		{
			INVENTORY::_0x766315A564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_764(func_762(iParam0), 6);
}

int func_701(int iParam0)
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

int func_702(int iParam0)
{
	struct<5> /*40*/ sVar0;

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
	func_765(iParam0, Global_1898164.f_162);
	return 1;
}

int func_703(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_562(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_563(iParam0, iVar1);
		if (iVar2 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar2 /*2*/].f_1;
	}
	return 0;
}

int func_704(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		iVar0 = func_563(iParam0, iParam1);
		if (iVar0 == -1)
		{
			return 0;
		}
		return Global_17504.f_2205[iVar0 /*2*/].f_1;
	}
	return 0;
}

bool func_705(int iParam0)
{
	if (!func_766(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 5;
}

bool func_706(int iParam0)
{
	if (!func_766(iParam0, 0))
	{
		return false;
	}
	return Global_40.f_9571[iParam0 /*10*/].f_1 == 4;
}

bool func_707(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (func_20() != -1)
		{
			return false;
		}
		if (func_334(0, 1, 1))
		{
			return false;
		}
		if (!func_767(0))
		{
			return false;
		}
		if (!func_768())
		{
			return false;
		}
		if (func_160(iParam0, 2097152))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_535())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_258(14) && !func_258(17))
			{
				return false;
			}
			if (Global_1392235.f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_258(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_258(27))
			{
				return false;
			}
			else if (func_715(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_715(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_769())
			{
				return false;
			}
		}
		if (func_535() && !func_258(69))
		{
			return false;
		}
		if (func_256(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_160(iParam0, 33554432))
		{
			return false;
		}
		if (func_719(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((func_715(11, 0) || func_715(12, 0)) || func_715(13, 0)) || func_715(153, 0)) || func_715(14, 0)) || func_715(154, 0)) || func_715(15, 0)) || func_715(16, 0)) || func_715(17, 0)) || func_715(18, 0)) || func_715(155, 0)) || func_715(19, 0)) || func_715(20, 0))
		{
			return false;
		}
		if (func_770(iParam0) == -1)
		{
			return false;
		}
		if (!func_771(iParam0))
		{
			return false;
		}
		if (Global_1392235.f_4)
		{
			return false;
		}
	}
	return true;
}

bool func_708()
{
	return Global_1894899 & 4 != 0;
}

int func_709(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_637(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_2;
	}
	return 0;
}

bool func_710(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;

	iVar0 = func_275();
	iVar1 = func_772(iParam0, iParam1);
	func_773(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	if (iVar5 >= iParam2 && iParam2 > 0)
	{
		return true;
	}
	if (iVar4 > iParam3 && iParam3 > 0)
	{
		return true;
	}
	return false;
}

bool func_711()
{
	int iVar0;
	int iVar1;
	var uVar2;

	switch (func_212())
	{
		case 76:
			iVar0 = 75;
			iVar1 = 6;
			break;
		case 26:
			iVar0 = 61;
			iVar1 = 3;
			break;
		case 78:
			iVar0 = 0;
			iVar1 = 6;
			break;
		case 105:
			iVar0 = 28;
			iVar1 = 3;
			break;
	}
	if (!func_733(iVar1, -1))
	{
		return false;
	}
	if (func_119(iVar0))
	{
		return false;
	}
	if (!func_304(iVar0))
	{
		return false;
	}
	if (func_108(iVar1, iVar0))
	{
		return false;
	}
	if (func_724(iVar1))
	{
		return false;
	}
	if (func_119(iVar0))
	{
		return false;
	}
	if (func_725(iVar1, iVar0, &uVar2))
	{
		return false;
	}
	return true;
}

int func_712(int iParam0)
{
	if (!func_369(iParam0))
	{
		return 0;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_1;
}

bool func_713()
{
	if (func_565(83, 0) == 1)
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_10(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_287(iVar0, joaat("TSTAG_LOCKDOWN"), 1))
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_287(iVar0, joaat("TSTAG_LOCKDOWN_SALOON"), 1) || func_287(iVar0, joaat("TSTAG_LOCKDOWN_PARTIAL"), 1))
				{
					return true;
				}
				break;
			case 1:
				if (func_287(iVar0, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1) || func_287(iVar0, joaat("TSTAG_LOCKDOWN_PARTIAL"), 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_715(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_20() != -1)
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

bool func_716(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_680(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_774(iParam0);
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
		if (!func_775(iParam0, 1))
		{
			return false;
		}
	}
	return func_776(iParam0, 0, bParam2) >= iParam1;
}

int func_717(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_212();
	if (func_100(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_777(vParam0, iParam3);
}

int func_718()
{
	int iVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!func_778(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!func_778(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!func_778(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!func_778(&iVar0))
	{
		iVar0 = 0;
	}
	if (!func_778(&iVar0))
	{
		iVar0 = func_779(268435584, 0);
	}
	if (!func_778(&iVar0))
	{
		return 0;
	}
	return 1;
}

bool func_719(int iParam0)
{
	if (!func_100(iParam0))
	{
		return false;
	}
	return func_160(iParam0, 67108864);
}

int func_720()
{
	int iVar0;
	float fVar1;

	if ((func_106() || PED::IS_PED_CARRYING_SOMETHING(Global_35)) || func_256(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	iVar0 = 5400;
	if (func_257(26))
	{
		iVar0 = 600;
	}
	else if (func_715(68, 1))
	{
		iVar0 = 2400;
	}
	else if (func_257(57))
	{
		iVar0 = 1800;
	}
	if (Global_1359489.f_61 >= 3)
	{
		return 2;
	}
	else if (func_479(&(Global_1359489.f_55)) < IntToFloat(iVar0))
	{
		return 3;
	}
	else if (MISC::GET_GAME_TIMER() < Global_1359489.f_60)
	{
		return 4;
	}
	else if (!func_780())
	{
		return 5;
	}
	else if (!func_258(5))
	{
		return 6;
	}
	else
	{
		fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), func_782(func_781()));
		if (fVar1 <= 750f)
		{
			return 7;
		}
		return 0;
	}
	return -1;
}

bool func_721()
{
	return func_783(7);
}

bool func_722(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
		case 6:
		case 12:
			iVar0 = 19;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iVar0 = 40;
			break;
		default:
			iVar0 = func_784(iParam0, 0, 0, 119, 0);
			break;
	}
	return iVar0 != 0;
}

int func_723(int iParam0)
{
	iParam0 = func_740(iParam0);
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

bool func_724(int iParam0)
{
	if (!func_283(iParam0))
	{
		return false;
	}
	if (func_454(iParam0, 64))
	{
		return true;
	}
	return false;
}

bool func_725(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (func_256(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			*uParam2 = 1;
			return true;
		}
	}
	if (func_285(iParam1, 1048576))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_111(Global_1935630, 2097152))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_108(iParam0, iParam1))
	{
		*uParam2 = 3;
		return true;
	}
	if (func_785(iParam1) == 105 && func_307(21))
	{
		*uParam2 = 4;
		return true;
	}
	if (func_125(iParam0, &iVar0))
	{
		if (!func_786(iParam1))
		{
			if (Global_1393529.f_3 == iVar0 && func_787(Global_1393529.f_3, 0, &(Global_1393529.f_256), &(Global_1393529.f_284), 0, 0))
			{
				*uParam2 = 5;
				return true;
			}
			if (!func_788(iParam0))
			{
				*uParam2 = 6;
				return true;
			}
			if (PED::IS_PED_FLEEING(iVar0))
			{
				*uParam2 = 6;
				return true;
			}
			if (TASK::GET_IS_TASK_ACTIVE(iVar0, 0))
			{
				*uParam2 = 7;
				return true;
			}
		}
	}
	else if (func_283(iParam0))
	{
		if (func_183(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			iVar1 = func_96(Global_1914319.f_3[iParam0 /*446*/].f_21);
			if (iVar1 != 0 && !PERSCHAR::_0x4AFC7288C77238B3(iVar1))
			{
				*uParam2 = 6;
				return true;
			}
		}
	}
	return false;
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

bool func_727(int iParam0)
{
	if (!func_789(iParam0))
	{
		return true;
	}
	return func_457(Global_1392626[iParam0 /*32*/].f_3, 1);
}

bool func_728()
{
	switch (func_140())
	{
		case 1:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 12:
			if (func_418(40, 0) == 9 || func_418(40, 8) == 16)
			{
				return false;
			}
			break;
		case 0:
		case 2:
		case 3:
		case 10:
		case 11:
			if (func_418(40, 1) == 9 || func_418(40, 9) == 16)
			{
				return false;
			}
			break;
	}
	return true;
}

int func_729(int iParam0, bool bParam1, int iParam2)
{
	int iVar0[3];

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	switch (iParam0)
	{
		case 1:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 5:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 12:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 9:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 4:
			iVar0[0] = 20;
			iVar0[1] = 3;
			break;
		case 11:
			iVar0[0] = 20;
			iVar0[1] = 5;
			break;
		case 0:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 2:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
		case 3:
			iVar0[0] = 20;
			iVar0[1] = 3;
			iVar0[2] = 5;
			break;
		case 10:
			iVar0[0] = 23;
			iVar0[1] = 26;
			iVar0[2] = 5;
			break;
	}
	if (bParam1)
	{
		if (!func_790(iVar0[0]) && iVar0[0] != iParam2)
		{
			return iVar0[0];
		}
		else if (!func_790(iVar0[1]) && iVar0[1] != iParam2)
		{
			return iVar0[1];
		}
		else if (!func_790(iVar0[2]) && iVar0[2] != iParam2)
		{
			return iVar0[2];
		}
	}
	else if (iVar0[0] != iParam2)
	{
		return iVar0[0];
	}
	else
	{
		return iVar0[1];
	}
	return 0;
}

bool func_730(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1 /*10*/] && iParam0) != 0;
}

bool func_731(int iParam0, int iParam1)
{
	return func_414(iParam0, iParam1) > 0;
}

bool func_732(int iParam0)
{
	if (!func_369(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

bool func_733(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (func_20() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_230(func_212(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= iVar1)
		{
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
		}
		bVar0 = (func_791(iParam1) || func_406(func_792(iParam0)));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = iVar1;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = bVar0;
	}
	return bVar0;
}

int func_734()
{
	if (!func_793())
	{
		return -1;
	}
	return Global_1392135.f_3;
}

bool func_735(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_794(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_795(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_288(func_796(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_797(iParam0, 1, 0))
	{
		return false;
	}
	if (func_795(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_736()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_258(16) && !func_258(21))
	{
		return true;
	}
	return false;
}

bool func_737(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return false;
	}
	else if (func_535())
	{
		if ((func_798(iParam0, iParam1) == joaat("CS_JOHNMARSTON") || iParam1 == 0) || iParam1 == 8)
		{
			return true;
		}
	}
	else if (func_798(iParam0, iParam1) != joaat("CS_JOHNMARSTON"))
	{
		return true;
	}
	return false;
}

bool func_738(int iParam0)
{
	switch (func_726(iParam0))
	{
		case 3:
			if (func_799(func_709(57, 0), 32))
			{
				return true;
			}
			break;
		default:
			if (func_799(func_565(57, 0), 32))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (func_258(59))
	{
		if (!func_258(67))
		{
			return false;
		}
	}
	iVar0 = 0;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar1 = 0;
	while (iVar1 < 29)
	{
		iVar2 = 0;
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar2, false, iVar1, false))
		{
			if (func_800(iVar2))
			{
				if (func_776(iVar2, 1, 0) >= iParam0)
				{
					if (!bVar3)
					{
						if (WEAPON::IS_WEAPON_PISTOL(iVar2))
						{
							bVar3 = true;
							iVar0++;
						}
					}
					if (!bVar4)
					{
						if (WEAPON::IS_WEAPON_REVOLVER(iVar2))
						{
							bVar4 = true;
							iVar0++;
						}
					}
					if (!bVar5)
					{
						if (WEAPON::IS_WEAPON_REPEATER(iVar2))
						{
							bVar5 = true;
							iVar0++;
						}
					}
					if (!bVar6)
					{
						if (WEAPON::IS_WEAPON_RIFLE(iVar2) && !WEAPON::_IS_WEAPON_SNIPER(iVar2))
						{
							bVar6 = true;
							iVar0++;
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_740(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_741(int iParam0, int iParam1, bool bParam2)
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

int func_742()
{
	return func_726(func_140());
}

bool func_743(int iParam0, int iParam1)
{
	if (!func_801(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_744()
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

void func_745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_802(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_5 = iParam2;
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_802(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

bool func_747()
{
	var uVar0;

	if (func_342(&uVar0))
	{
		return false;
	}
	if (!func_535())
	{
		if (func_565(114, 1) != 1)
		{
			if (func_212() == 76)
			{
				if (func_258(5))
				{
					if (func_565(114, 2) != 1)
					{
						func_746(114, 2, 1);
						func_745(114, 0, func_275());
						return false;
					}
					else if (func_710(114, 0, 1, 0) && !func_710(114, 0, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_565(114, 2) != 1)
		{
			if (func_212() == 105)
			{
				if (func_258(21))
				{
					if (func_565(114, 2) != 2)
					{
						func_746(114, 2, 2);
						func_745(114, 1, func_275());
						return false;
					}
					if (func_710(114, 1, 1, 0) && !func_710(114, 1, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_565(114, 3) != 1)
		{
			if (func_212() == 5)
			{
				if (func_258(34))
				{
					if (func_565(114, 2) != 3)
					{
						func_746(114, 2, 3);
						func_745(114, 2, func_275());
						return false;
					}
					if (func_710(114, 2, 1, 0) && !func_710(114, 2, 8, 0))
					{
						return true;
					}
				}
			}
		}
		if (func_565(114, 4) != 1)
		{
			if (func_212() == 92)
			{
				if (func_258(55))
				{
					if (func_565(114, 2) != 4)
					{
						func_746(114, 2, 4);
						func_745(114, 3, func_275());
						return false;
					}
					if (func_710(114, 3, 1, 0) && !func_710(114, 3, 8, 0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_748(int iParam0)
{
	if (!func_100(iParam0))
	{
		return 0;
	}
	return Global_23118[iParam0 /*11*/].f_10;
}

void func_749(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_754(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_20() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 = (Global_17504.f_42[iParam0 /*8*/].f_4 + iVar0);
}

int func_750(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_803(iVar0))
		{
			fVar3 = func_752(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_751(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

float func_752(int iParam0, vector3 vParam1)
{
	if (func_804(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

bool func_753(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[0];
		case 0:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[1];
		case 2:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[3];
		case 1:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[4];
		case 4:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[8];
		case 5:
			return func_805(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[13];
	}
	return false;
}

int func_754(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_755(int iParam0)
{
	if (func_372(iParam0, Global_1310750.f_16073))
	{
		return true;
	}
	return false;
}

bool func_756(int iParam0)
{
	return (Global_1392135.f_1 && iParam0) != 0;
}

float func_757(int iParam0)
{
	switch (iParam0)
	{
		case 58:
			if (func_535() && func_417(58) == 1)
			{
				return 0.5f;
			}
			break;
	}
	if (func_793() && func_372(iParam0, 16777216))
	{
		if (func_806())
		{
			return 1.25f;
		}
		else
		{
			return 1f;
		}
	}
	return 0f;
}

int func_758(int iParam0)
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

int func_759(int iParam0, int iParam1)
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

bool func_760(int iParam0)
{
	return func_807(iParam0, 2);
}

int func_761(bool bParam0)
{
	if (func_20() == -1)
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

int func_762(int iParam0)
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

void func_763(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 - (Global_1946054.f_2657.f_26.f_6 && iParam0));
}

void func_764(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 = (Global_1946054.f_2657.f_26.f_6 || iParam0);
}

void func_765(int iParam0, int iParam1)
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
			func_808((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_808(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_439(Global_1898164.f_1[0 /*5*/]))
	{
		func_572(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_766(int iParam0, bool bParam1)
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

bool func_767(int iParam0)
{
	if (!func_809(iParam0))
	{
		return false;
	}
	if (func_20() == 0)
	{
		return true;
	}
	return (!func_254() || MISC::IS_BIT_SET(Global_40.f_7856, iParam0));
}

bool func_768()
{
	if (func_810(1))
	{
		return false;
	}
	return Global_1934181;
}

bool func_769()
{
	if (func_811())
	{
		if (Global_1392235.f_1 == 1)
		{
			return true;
		}
	}
	else if (func_417(76) >= 1)
	{
		return true;
	}
	return false;
}

int func_770(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_812(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_813(iParam0, iVar0);
		if (!func_255(iVar2))
		{
			if (func_814(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_237(0, iParam0, 2, 0);
	iVar2 = func_815(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = func_275();
		func_816(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		func_817(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (func_818(iParam0, &iVar1))
	{
		if (func_819(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_820(&iVar1))
	{
		if (func_819(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (func_821(iVar2, 1))
	{
		return true;
	}
	return false;
}

int func_772(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_637(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_5;
	}
	return -15;
}

void func_773(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_819(iParam0, iParam1, 1))
	{
		iVar0 = func_394(iParam1);
		iVar1 = func_396(iParam0);
		iVar2 = (func_396(iParam0) - func_396(iParam1));
		iVar3 = (func_394(iParam0) - func_394(iParam1));
		iVar4 = (func_392(iParam0) - func_392(iParam1));
		iVar5 = (func_276(iParam0) - func_276(iParam1));
		iVar6 = (func_360(iParam0) - func_360(iParam1));
		iVar7 = (func_822(iParam0) - func_822(iParam1));
	}
	else
	{
		iVar0 = func_394(iParam0);
		iVar1 = func_396(iParam1);
		iVar2 = (func_396(iParam1) - func_396(iParam0));
		iVar3 = (func_394(iParam1) - func_394(iParam0));
		iVar4 = (func_392(iParam1) - func_392(iParam0));
		iVar5 = (func_276(iParam1) - func_276(iParam0));
		iVar6 = (func_360(iParam1) - func_360(iParam0));
		iVar7 = (func_822(iParam1) - func_822(iParam0));
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
		iVar4 = (iVar4 + func_550(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_823(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 12f));
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
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_774(int iParam0)
{
	vector3 vVar0;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_680(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_824(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_825("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_826(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_800(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == iVar0)
			{
				func_827(iVar1);
				return true;
			}
			iVar3++;
		}
		func_827(iVar1);
	}
	return false;
}

int func_776(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_774(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_824(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_828(iParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_761(bParam2), iParam0, 0);
	return iVar2;
}

int func_777(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_829(vParam0);
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

bool func_778(int iParam0)
{
	if (!WEAPON::IS_WEAPON_VALID(*iParam0))
	{
		return false;
	}
	if (*iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_SHOTGUN(*iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_PISTOL(*iParam0) || WEAPON::IS_WEAPON_REVOLVER(*iParam0))
	{
		return true;
	}
	return false;
}

int func_779(int iParam0, int iParam1)
{
	var uVar0;

	return func_830(&uVar0, iParam0, iParam1);
}

bool func_780()
{
	int iVar0;

	iVar0 = func_831();
	switch (iVar0)
	{
		case 0:
		case 4:
		case 7:
			return false;
	}
	return true;
}

int func_781()
{
	return Global_40.f_4283;
}

Vector3 func_782(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1343.699f, 2429.397f, 307.0626f;
		case 1:
			return -123.1805f, -28.8611f, 94.8478f;
		case 2:
			return 667.9077f, -1252.78f, 42.9221f;
		case 3:
			return 1880.807f, -1873.231f, 41.8094f;
		case 4:
			return 1422.625f, -7332.473f, 80.5977f;
		case 5:
			return 2254.96f, -758.12f, 41.75f;
		case 6:
			return 2351.282f, 1362.077f, 104.9752f;
		case 7:
			return -2593.21f, 453.9533f, 145.9973f;
		case 8:
			return func_832();
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_783(int iParam0)
{
	int iVar0;

	if (iParam0 != -1)
	{
		iVar0 = func_833(0);
		return MISC::IS_BIT_SET(iVar0, iParam0);
	}
	return false;
}

int func_784(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0[4];
	int iVar5;

	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	iVar0[3] = 0;
	switch (iParam3)
	{
		case -1:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 38;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 11:
					iVar0[0] = 19;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 3:
					iVar0[0] = 7;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
				case 10:
					iVar0[0] = 18;
					iVar0[1] = 20;
					iVar0[2] = 3;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 43;
					iVar0[1] = 19;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 38;
					break;
				case 12:
					iVar0[0] = 19;
					iVar0[1] = 18;
					break;
				case 9:
					iVar0[0] = 43;
					break;
				case 4:
					iVar0[0] = 18;
					break;
				case 11:
					iVar0[0] = 19;
					break;
				case 10:
					iVar0[0] = 18;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 5:
				case 6:
				case 7:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 12:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 9:
					iVar0[0] = 43;
					iVar0[1] = 23;
					iVar0[2] = 20;
					iVar0[3] = 3;
					break;
				case 4:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 11:
					iVar0[0] = 20;
					iVar0[1] = 3;
					iVar0[2] = 26;
					break;
				case 0:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 2:
					iVar0[0] = 23;
					iVar0[1] = 20;
					iVar0[2] = 3;
					iVar0[3] = 26;
					break;
				case 3:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
				case 10:
					iVar0[0] = 20;
					iVar0[1] = 3;
					break;
			}
			break;
	}
	if (bParam1)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !func_834(iVar0[iVar5]))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (bParam4)
	{
		iVar5 = 0;
		while (iVar5 < iVar0)
		{
			if (iVar0[iVar5] != iParam2 && !func_836(func_835(iVar0[iVar5])))
			{
				return iVar0[iVar5];
			}
			iVar5++;
		}
	}
	else if (iVar0[0] != iParam2)
	{
		return iVar0[0];
	}
	else
	{
		return iVar0[1];
	}
	return 0;
}

int func_785(int iParam0)
{
	if (!func_248(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_212() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_786(int iParam0)
{
	if (!func_248(iParam0))
	{
		return false;
	}
	return func_293(Global_1914319.f_18594[iParam0], 1);
}

bool func_787(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_837(uParam2, 1, iVar0);
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
			if (func_838(bParam0, uParam2))
			{
				*uParam3 = 128;
				func_839(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_840(bParam0, uParam2))
				{
					*uParam3 = 8;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_841(bParam0, bParam1, uParam2))
				{
					*uParam3 = 8;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_842(bParam0, uParam2))
				{
					*uParam3 = 64;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && func_256(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_839(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_843(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_844(Global_35, bParam0, uParam2))
					{
						*uParam3 = 4;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_845(Global_35, bParam0, uParam2))
					{
						*uParam3 = 256;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_846(Global_35, bParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_846(Global_35, bParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_839(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_847(bParam0, uParam2))
				{
					*uParam3 = 32;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_848(&bParam0, uParam2))
				{
					*uParam3 = 4096;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_849(uParam2, 4000))
				{
					if ((func_850(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_851(uParam2, bParam0)) && func_852(uParam2, bParam0))
					{
						*uParam3 = 2;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_850(bParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_851(uParam2, bParam0)) && func_852(uParam2, bParam0))
				{
					*uParam3 = 2;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_853(bParam0, Global_1935630.f_41))
							{
								func_854();
								*uParam3 = 2;
								func_839(bParam0, uParam2, *uParam3);
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
						if (func_853(bParam0, Global_1935630.f_41))
						{
							func_854();
							*uParam3 = 2;
							func_839(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_855(uParam2, bParam0) || (uParam2->f_9 > 0 && (func_856() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(bParam0))
					{
						func_854();
						*uParam3 = 2;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_857())
					{
						if (func_853(bParam0, Global_1935630.f_42))
						{
							func_854();
							*uParam3 = 2;
							func_839(bParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_858(uParam2, bParam0))
			{
				*uParam3 = 1024;
				func_839(bParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_859(bParam0, bParam1, uParam2))
				{
					*uParam3 = 2048;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_860(bParam0, uParam2))
					{
						*uParam3 = 8192;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_861(bParam0, uParam2))
				{
					*uParam3 = 32768;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_862(uParam2, 4000))
				{
					if (func_863(&bParam0, uParam2))
					{
						*uParam3 = 512;
						func_839(bParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_864(bParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_839(bParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0))
		{
			if (func_865(uParam2, bParam0))
			{
				*uParam3 = 1;
				func_839(bParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_788(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (iParam0 == 19)
	{
		return true;
	}
	if (iParam0 == 9)
	{
		return true;
	}
	if (func_20() == 0)
	{
		return func_295(Global_1051260.f_48[iParam0 /*78*/].f_18, Global_1051260.f_48[iParam0 /*78*/].f_30, 1, 0);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		return false;
	}
	if (iParam0 != 11)
	{
		if (!func_183(Global_1914319.f_3[iParam0 /*446*/].f_21))
		{
			return false;
		}
		if (!func_259(Global_1914319.f_3[iParam0 /*446*/].f_21, 0))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_23 = func_866(Global_1914319.f_3[iParam0 /*446*/].f_21);
		iVar0 = func_96(Global_1914319.f_3[iParam0 /*446*/].f_21);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar0))
		{
			return false;
		}
		if (!PERSCHAR::_0x4AFC7288C77238B3(iVar0))
		{
			return false;
		}
		if (!VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, func_302(Global_1914319.f_3[iParam0 /*446*/].f_21)))
		{
			return false;
		}
		return true;
	}
	bVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	if (func_724(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		if (LAW::_0x856CE8FDE2416602(bVar1))
		{
			return false;
		}
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(Global_1914319.f_3[iParam0 /*446*/].f_23, true, false) };
	if (!VOLUME::IS_POINT_IN_VOLUME(Global_1914319.f_3[iParam0 /*446*/].f_25, vVar2))
	{
		return false;
	}
	return true;
}

bool func_789(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_790(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			if (func_709(40, 9) == 10)
			{
				return true;
			}
			break;
		case 20:
			if (func_709(40, 8) == 11)
			{
				return true;
			}
			break;
		case 23:
			if (func_709(40, 7) == 13)
			{
				return true;
			}
			break;
		case 26:
			if (func_709(40, 6) == 14)
			{
				return true;
			}
			break;
		case 5:
			if (func_709(40, 5) == 15)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_791(int iParam0)
{
	int iVar0;

	if (!func_248(iParam0))
	{
		return false;
	}
	iVar0 = func_251(iParam0);
	if ((((((((((iVar0 == 2 && func_198(28)) || (iVar0 == 18 && iParam0 != 55)) || iVar0 == 1) || iVar0 == 11) || iParam0 == 69) || iVar0 == 33) || iVar0 == 20) || iVar0 == 19) || iVar0 == 9) || func_284(iParam0))
	{
		return true;
	}
	return false;
}

int func_792(int iParam0)
{
	if (iParam0 == 15)
	{
		return 65539;
	}
	return 7;
}

bool func_793()
{
	if (Global_1392135.f_3 != -1)
	{
		return true;
	}
	return Global_1392135.f_3 != -1;
}

bool func_794(int iParam0)
{
	return iParam0 > -1;
}

bool func_795(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_794(iParam0))
		{
			return false;
		}
	}
	func_867(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

bool func_796(int iParam0)
{
	if (!func_794(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

bool func_797(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_794(iParam0))
	{
		return false;
	}
	if (func_868(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_868(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_868(iParam0, 4, 1))
	{
		return false;
	}
	if (func_795(iParam0, 33, 1))
	{
		return false;
	}
	if (func_869(iParam0))
	{
		return false;
	}
	if (func_870(iParam0))
	{
		if (!bParam2)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (Global_1357549.f_1497 == iParam0)
		{
			return false;
		}
	}
	return true;
}

int func_798(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_637(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_3;
	}
	return 0;
}

bool func_799(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_800(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_801(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

int func_802(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_683(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_803(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

bool func_804(int iParam0)
{
	if (func_751(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

int func_805(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 3:
			iVar0 = func_704(iParam0, 0);
			iVar0 = (iVar0 + func_704(iParam0, 2));
			iVar0 = (iVar0 + func_704(iParam0, 11));
			return iVar0;
		case 0:
			iVar0 = func_704(iParam0, 1);
			iVar0 = (iVar0 + func_704(iParam0, 7));
			iVar0 = (iVar0 + func_704(iParam0, 6));
			iVar0 = (iVar0 + func_704(iParam0, 12));
			return iVar0;
		case 2:
			iVar0 = func_704(iParam0, 3);
			iVar0 = (iVar0 + func_704(iParam0, 10));
			return iVar0;
		case 1:
			iVar0 = func_704(iParam0, 4);
			iVar0 = (iVar0 + func_704(iParam0, 9));
			return iVar0;
		case 4:
			return func_704(iParam0, 8);
		case 5:
			iVar0 = func_704(iParam0, 13);
			iVar0 = (iVar0 + func_704(iParam0, 14));
			iVar0 = (iVar0 + func_704(iParam0, 15));
			iVar0 = (iVar0 + func_704(iParam0, 16));
			return iVar0;
		default:
			break;
	}
	return 0;
}

bool func_806()
{
	int iVar0;

	iVar0 = func_871();
	if (!func_766(iVar0, 0) || !func_872(iVar0, 1))
	{
		return false;
	}
	if (func_872(iVar0, 1))
	{
		return true;
	}
	return false;
}

bool func_807(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 && iParam1) != 0;
}

void func_808(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	Var0 = { Global_1898164.f_1[iParam0 /*5*/] };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] };
	Global_1898164.f_1[iParam1 /*5*/] = { Var0 };
}

bool func_809(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

bool func_810(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return (Global_1146476.f_1 && iParam0) != 0;
}

bool func_811()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("BEAT_BANDITO_EXECUTION")) > 0)
	{
		return true;
	}
	return false;
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 1;
		case 26:
			return 2;
		case 105:
			return 3;
		case 5:
			return 2;
		case 38:
			return 3;
		case 115:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_813(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 76:
			if (iParam1 == 0)
			{
				return 14;
			}
			break;
		case 26:
			if (iParam1 == 0)
			{
				return 11;
			}
			else if (iParam1 == 1)
			{
				return 153;
			}
			break;
		case 105:
			if (iParam1 == 0)
			{
				return 13;
			}
			else if (iParam1 == 1)
			{
				return 154;
			}
			else if (iParam1 == 2)
			{
				return 15;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 12;
			}
			else if (iParam1 == 1)
			{
				return 16;
			}
			break;
		case 38:
			if (iParam1 == 0)
			{
				return 18;
			}
			else if (iParam1 == 1)
			{
				return 155;
			}
			else if (iParam1 == 2)
			{
				return 17;
			}
			break;
		case 115:
			if (iParam1 == 0)
			{
				return 19;
			}
			else if (iParam1 == 1)
			{
				return 20;
			}
			break;
	}
	return -1;
}

bool func_814(int iParam0)
{
	if (func_535())
	{
		if (func_525(Global_1347702[iParam0 /*49*/].f_12, 2097152))
		{
			return false;
		}
	}
	else if (func_525(Global_1347702[iParam0 /*49*/].f_12, 256))
	{
		return false;
	}
	switch (iParam0)
	{
		case 15:
			if (!func_258(20))
			{
				return false;
			}
			else if (!func_873())
			{
				return false;
			}
			break;
		case 16:
			if (func_874(Global_1347702[16 /*49*/].f_15) == 1)
			{
				return false;
			}
			break;
		case 153:
			if (!func_875())
			{
				return false;
			}
			break;
		case 155:
			if (!func_875())
			{
				return false;
			}
			break;
		case 154:
			if (!func_875())
			{
				return false;
			}
			break;
		case -1:
			return false;
	}
	return true;
}

int func_815(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -15;
	}
	return func_876(iParam0);
}

void func_816(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_396(*iParam0);
	iVar1 = func_394(*iParam0);
	iVar2 = func_392(*iParam0);
	iVar3 = func_276(*iParam0);
	iVar4 = func_360(*iParam0);
	iVar5 = func_822(*iParam0);
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
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_550(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_877(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_817(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_396(*iParam0);
	iVar1 = func_394(*iParam0);
	iVar2 = func_392(*iParam0);
	iVar3 = func_276(*iParam0);
	iVar4 = func_360(*iParam0);
	iVar5 = func_822(*iParam0);
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
	iVar6 = func_550(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_550(iVar1, iVar0);
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
	func_877(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_818(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -15;
	iVar1 = 0;
	if (iParam0 == 105)
	{
		iVar2 = func_878(iParam0);
		if (!func_259(iVar2, 0))
		{
			iVar0 = func_879(iVar2);
			if (iVar0 != -15)
			{
				func_817(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
		else
		{
			iVar0 = func_879(iVar2);
			if (iVar0 != -15)
			{
				func_817(&iVar0, 0, 0, 0, 7, 0, 0, 0);
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	iVar3 = func_880(iParam0);
	if (!func_259(iVar3, 0))
	{
		iVar0 = func_879(iVar3);
		if (iVar0 != -15)
		{
			func_817(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			*iParam1 = iVar0;
		}
	}
	else
	{
		iVar0 = func_879(iVar3);
		if (iVar0 != -15)
		{
			func_817(&iVar0, 0, 0, 0, 7, 0, 0, 0);
			if (func_819(iVar0, *iParam1, 1))
			{
				*iParam1 = iVar0;
				iVar1 = 1;
			}
		}
	}
	return iVar1;
}

bool func_819(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_881(iParam1) || !func_881(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_820(int iParam0)
{
	int iVar0;

	iVar0 = Global_40.f_11182.f_1;
	if (iVar0 == -15)
	{
		return false;
	}
	func_817(&iVar0, 0, 0, 0, 5, 0, 0, 0);
	*iParam0 = iVar0;
	return true;
}

bool func_821(int iParam0, bool bParam1)
{
	return func_819(func_275(), iParam0, bParam1);
}

int func_822(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

float func_823(float fParam0, float fParam1, float fParam2)
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

int func_824(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_774(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_882(iParam0, 1399091007))
	{
		func_883(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_825(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_761(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_826(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_827(int iParam0)
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

int func_828(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_884(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_886(&Var0, func_885(0));
	}
	if (!func_887(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_827(iVar18);
	return iVar19;
}

int func_829(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_888(vParam0, 0f, 0f, 0, 2);
	return func_888(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_830(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;
	bool bVar18;
	var uVar19;
	struct<22> /*176*/ sVar23;

	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_889(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_825("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_826(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_800(Var4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_889(iParam1, 512) && func_890(Var4.f_4, &uVar19, &Var23, joaat("SLOTID_WEAPON_0"))) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::IS_WEAPON_SHOTGUN(Var4.f_4) || func_889(iParam1, 32))) && (!WEAPON::IS_WEAPON_PISTOL(Var4.f_4) || !func_889(iParam1, 16777216))) && (!WEAPON::IS_WEAPON_REVOLVER(Var4.f_4) || !func_889(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_827(iVar1);
	}
	if (func_800(iVar0))
	{
	}
	else if (!func_889(iParam1, 512))
	{
		iParam1 |= 512;
		return func_830(uParam0, iParam1, iParam2);
	}
	else if (func_889(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_831()
{
	switch (func_20())
	{
		case -1:
			return Global_40.f_4283;
	}
	return -1;
}

Vector3 func_832()
{
	if (func_258(70))
	{
		return -1634.252f, -1358.577f, 83.9077f;
	}
	if (func_258(73))
	{
		return -1665.419f, -1346.258f, 84.11175f;
	}
	return -1641.1f, -1359.979f, 83.4932f;
}

int func_833(int iParam0)
{
	return func_565(119, iParam0);
}

bool func_834(int iParam0)
{
	if (!func_891(iParam0))
	{
		return false;
	}
	return func_892(iParam0, 4, 1);
}

int func_835(int iParam0)
{
	if (!func_891(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED");
		case 3:
			return joaat("CONSUMABLE_POTENT_MEDICINE");
		case 6:
			return joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED");
		case 7:
			return joaat("CONSUMABLE_HORSE_REVIVER");
		case 13:
			return joaat("CONSUMABLE_POTENT_RESTORATIVE");
		case 15:
			return joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED");
		case 18:
			return joaat("CONSUMABLE_POTENT_HORSE_STIMULANT");
		case 19:
			return joaat("CONSUMABLE_POTENT_TONIC");
		case 20:
			return joaat("CONSUMABLE_POTENT_SNAKE_OIL");
		case 23:
			return joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED");
		case 26:
			return joaat("CONSUMABLE_COVER_SCENT");
		case 29:
			return joaat("CONSUMABLE_POTENT_RESTORATIVE");
		case 34:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
		case 38:
			return joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT");
		case 40:
			return joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED");
		case 43:
			return joaat("CONSUMABLE_POTENT_MEDICINE");
	}
	return 0;
}

bool func_836(int iParam0)
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
			if (Var1.f_2 == joaat("COST_TYPE_CRAFT") && !func_893(iParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

void func_837(int iParam0, bool bParam1, int iParam2)
{
	func_894(iParam2);
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
		iParam0->f_13 = func_895(0);
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
							func_253(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_896(1))
						{
							func_253(iParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_896(1) || *iParam0 & 8192 != 0))
				{
					func_506(iParam0, 33554432);
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
			if (func_897(iParam0))
			{
				iParam0->f_15 = func_856();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_856() - iParam0->f_15) > 500)
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
	func_898(iParam0);
}

bool func_838(bool bParam0, var uParam1)
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
			if (!func_899(bParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_900(bParam0, iVar2) <= func_901(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_839(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = bParam0;
	}
	if (func_902(iParam2, 1, 1, 1, 0))
	{
		func_253(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_903(iParam1, 1);
	func_904();
}

bool func_840(bool bParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_905(bParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_906(iParam1);
			if (func_907(iParam1, bParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_908(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_903(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_903(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_841(bool bParam0, bool bParam1, int iParam2)
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
	if (func_602(bParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_906(iParam2);
		if (func_907(iParam2, bParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_908(iParam2)
				{
					func_903(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_842(bool bParam0, var uParam1)
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
	if (func_899(bParam0, uParam1, bVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3) > func_908(uParam1)
		{
			fVar3 = func_906(uParam1);
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

bool func_843(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_856();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_844(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_909(iParam2);
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
			if (func_852(iParam2, bParam1))
			{
				func_903(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_845(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < IntToFloat(func_910(iParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_852(iParam2, bParam1))
			{
				if (PED::_0x285D36C5C72B0569(uParam0) <= 1f)
				{
					func_903(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_846(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(bParam1, false, true) };
	iVar3 = func_911(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_903(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_903(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_912(bParam1, vVar0, vVar4))
					{
						func_903(iParam2, 1);
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
					func_903(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(bParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_912(bParam1, vVar0, vVar7))
					{
						func_903(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_847(bool bParam0, var uParam1)
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
		if (!func_899(bParam0, uParam1, Global_1935630.f_34[iVar0]) || bParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_913(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_914(Global_1935630.f_34[iVar0]))
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
			if (func_915(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_916(uParam1, bParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_10 = bParam0;
				return true;
			}
			else if (func_917(uParam1, bParam0, fVar1, iVar0))
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

bool func_848(bool bParam0, var uParam1)
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

bool func_849(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_856();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_850(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_918(bVar0, &iVar2))
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
	if (func_919(bVar0, bParam0))
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

int func_851(var uParam0, bool bParam1)
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

bool func_852(var uParam0, bool bParam1)
{
	if (func_920(uParam0))
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

bool func_853(bool bParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(bParam0, bParam1, 1, 1))
		{
			return true;
		}
		if (func_591(bParam0, bParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1) && PED::IS_PED_RAGDOLL(bParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_854()
{
}

bool func_855(var uParam0, bool bParam1)
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
		if (func_921(iVar0, bParam1, vVar1))
		{
			uParam0->f_9 = func_856();
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
						if (func_462(bVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bVar7, bParam1))
							{
								uParam0->f_9 = func_856();
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

int func_856()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_857()
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
	if ((func_856() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_858(var uParam0, bool bParam1)
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
	fVar0 = func_901(uParam0);
	if (uParam0->f_12 > func_922(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_923(bParam1);
	iVar1 = func_924(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((PED::_0x06087579E7AA85A9(bParam1, Global_35, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, Global_35, true, false) == 1)) || ((PED::_0x06087579E7AA85A9(bParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(bParam1, uParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(bParam1, uParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_859(bool bParam0, bool bParam1, var uParam2)
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
	return func_925(bParam0, bParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_860(bool bParam0, var uParam1)
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
		if (func_926(bParam0, uParam1, 1))
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
					if (!func_927(uParam1, bParam0))
					{
						if (func_462(bVar4, Global_36, 1) < 7f)
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

bool func_861(bool bParam0, var uParam1)
{
	if (!func_346(0))
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

bool func_862(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_856();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_863(bool bParam0, var uParam1)
{
	return PED::_0xE33F98BD76490ABC(*bParam0, PLAYER::PLAYER_ID(), 0);
}

int func_864(bool bParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_856();
	}
	else if (func_856() - uParam1->f_4) > func_928(uParam1)
	{
		return func_929(bParam0, uParam1, 0, -1082130432 /* Float: -1f */);
	}
	return 0;
}

bool func_865(var uParam0, bool bParam1)
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

bool func_866(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	if (!func_385(iParam0, 2))
	{
		return false;
	}
	if (func_507(func_323(iParam0)))
	{
		return func_268(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_930(iParam0), 0);
}

int func_867(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_868(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_794(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] && iParam1) != 0;
}

bool func_869(int iParam0)
{
	return func_868(iParam0, 16, 1);
}

bool func_870(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

int func_871()
{
	return Global_1392135.f_3;
}

bool func_872(int iParam0, bool bParam1)
{
	if (!func_766(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

bool func_873()
{
	int iVar0;
	int iVar1;

	iVar1 = func_237(func_931(65536), 0, 3, func_932(65536));
	if (func_439(iVar1))
	{
		iVar0 = func_874(iVar1);
		if (!func_500(iVar0, 4))
		{
			return false;
		}
	}
	return true;
}

int func_874(int iParam0)
{
	if (!func_439(iParam0))
	{
		return -1;
	}
	return func_933(iParam0);
}

bool func_875()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_876(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_6;
	}
	return -15;
}

void func_877(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_397(iParam0, iParam6);
	func_395(iParam0, iParam5);
	func_393(iParam0, iParam4);
	func_165(iParam0, iParam3);
	func_166(iParam0, iParam2);
	func_167(iParam0, iParam1);
}

int func_878(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			iVar0 = 3;
			break;
		case 78:
			iVar0 = 382;
			break;
		case 105:
			iVar0 = 72;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 115:
			iVar0 = 348;
			break;
		case 5:
			iVar0 = 256;
			break;
	}
	return iVar0;
}

int func_879(int iParam0)
{
	if (func_20() != -1)
	{
		return func_275();
	}
	if (!func_183(iParam0))
	{
		return func_275();
	}
	return Global_24887[iParam0 /*2*/].f_1;
}

int func_880(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 78:
			iVar0 = 382;
			break;
		case 5:
			iVar0 = 256;
			break;
		case 105:
			iVar0 = 70;
			break;
		case 26:
			iVar0 = 472;
			break;
		case 76:
			iVar0 = 3;
			break;
		case 38:
			iVar0 = 509;
			break;
		case 115:
			iVar0 = 348;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_881(int iParam0)
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
	iVar0 = func_822(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_360(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_276(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_396(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_394(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_392(iParam0);
	if (iVar5 < 1 || iVar5 > func_550(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_882(int iParam0, int iParam1)
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

void func_883(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_884(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_885(bool bParam0)
{
	int iVar0;

	iVar0 = func_761(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_935(923904168, func_934(bParam0), -740156546, bParam0) };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_935(923904168, func_934(bParam0), -740156546, 0) };
		}
		return Global_1223208;
	}
	return func_935(923904168, func_934(bParam0), -740156546, 0);
}

void func_886(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_887(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_761(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_888(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

bool func_889(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_890(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_761(0);
	*uParam1 = { func_935(iParam0, func_885(0), iParam3, 0) };
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

bool func_891(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_892(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_891(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_12 != -1)
	{
		return (Global_36638[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

bool func_893(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_20() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_936(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

void func_894(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_937();
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
			func_938(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_895(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_896(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_939(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_897(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_20() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_940(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_940(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_924(iVar0) == -1)
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

void func_898(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_941(iParam0);
	}
}

bool func_899(bool bParam0, var uParam1, bool bParam2)
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
		iVar1 = func_924(bParam2);
	}
	else
	{
		iVar1 = func_923(bParam2);
	}
	if (!PED::IS_PED_HUMAN(bParam0))
	{
		iVar0 = func_924(bParam0);
	}
	else
	{
		iVar0 = func_923(bParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_293(*uParam1, 8388608))
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

float func_900(bool bParam0, bool bParam1)
{
	return func_591(bParam0, bParam1, 1, 1);
}

float func_901(var uParam0)
{
	return uParam0->f_26;
}

bool func_902(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_903(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253(iParam0, 134217728);
	}
	else
	{
		func_506(iParam0, 134217728);
	}
}

void func_904()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_905(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(bVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, bParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, bParam0)) && func_591(bVar0, bParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_652(bVar0, 0)))
		{
			if (func_942(bParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_906(var uParam0)
{
	return uParam0->f_17;
}

bool func_907(var uParam0, bool bParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_293(*uParam0, 4194304))
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

int func_908(var uParam0)
{
	return uParam0->f_18;
}

float func_909(var uParam0)
{
	return uParam0->f_23;
}

int func_910(var uParam0)
{
	return uParam0->f_21;
}

int func_911(var uParam0)
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

bool func_912(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_943(bParam0, vParam4, 0.5f))
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

int func_913(bool bParam0)
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
	if (func_944(bParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_914(int iParam0)
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

bool func_915(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_945(bParam1))
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

bool func_916(var uParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_945(bParam1))
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

bool func_917(var uParam0, bool bParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40f;
	if (func_945(bParam1))
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

bool func_918(bool bParam0, int iParam1)
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

bool func_919(bool bParam0, bool bParam1)
{
	if (PED::_GET_LASSO_TARGET(bParam0) == bParam1)
	{
		return true;
	}
	if (func_340(bParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_920(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_921(bool bParam0, bool bParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_462(bParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(bParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

float func_922(var uParam0)
{
	return uParam0->f_24;
}

int func_923(bool bParam0)
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

int func_924(bool bParam0)
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

int func_925(bool bParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_918(Global_35, &iVar1))
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
		fVar2 = func_591(bParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_591(bParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_926(bool bParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;

	func_939(1, &bVar0, &bVar1);
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
					if (!bParam2 || !func_927(uParam1, bVar0))
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
				if (!bParam2 || !func_927(uParam1, bVar1))
				{
					if (func_462(bVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_927(var uParam0, bool bParam1)
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

int func_928(var uParam0)
{
	return uParam0->f_20;
}

int func_929(bool bParam0, var uParam1, bool bParam2, float fParam3)
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

int func_930(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_0xA00DF706C60173D1(Global_1895087[iParam0 /*3*/]);
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 25;
		case 4:
			return 105;
		case 8:
			return 78;
		case 16:
			return 51;
		case 32:
			return 41;
		case 64:
			return 108;
		case 128:
			return 44;
		case 256:
			return 53;
		case 512:
			return 84;
		case 1024:
			return 22;
		case 2048:
			return 73;
		case 4096:
			return 103;
		case 8192:
			return 18;
		case 16384:
			return 46;
		case 32768:
			return 0;
		case 65536:
			return 106;
		case 131072:
			return 47;
		case 262144:
			return 101;
		default:
			break;
	}
	return -1;
}

int func_932(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 657250500;
		case 4:
			return -520696743;
		case 8:
			return -295901403;
		case 16:
			return -1445837674;
		case 32:
			return -75278298;
		case 64:
			return -675249331;
		case 128:
			return -1822243680;
		case 256:
			return -1307199059;
		case 512:
			return -17701163;
		case 1024:
			return -172170798;
		case 2048:
			return 1836682179;
		case 4096:
			return -67934460;
		case 8192:
			return 410776537;
		case 16384:
			return -240986174;
		case 32768:
			return 1505721140;
		case 65536:
			return 2023114891;
		case 131072:
			return -30217677;
		case 262144:
			return 653209800;
		default:
			break;
	}
	return 0;
}

int func_933(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

struct<4> /*32*/ func_934(bool bParam0)
{
	return func_935(joaat("CHARACTER"), func_946(), -1591664384, bParam0);
}

struct<4> /*32*/ func_935(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_680(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_761(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_936(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_680(iParam0, 0))
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

bool func_937()
{
	if (func_947())
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

void func_938(var uParam0, var uParam1)
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

bool func_939(bool bParam0, int iParam1, int iParam2)
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

int func_940(int iParam0)
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

void func_941(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_506(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1935630.f_34[iVar0]))
				{
					func_253(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_942(bool bParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		if (func_653(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_943(bool bParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(bParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(bParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_944(bool bParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_945(bool bParam0)
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

struct<4> /*32*/ func_946()
{
	struct<4> /*32*/ sVar0;

	return Var0;
}

bool func_947()
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

